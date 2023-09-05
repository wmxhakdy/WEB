#include "energy.hpp"

#include <dbus-c++-1/dbus-c++/interface.h>
#include <dbus-c++-1/dbus-c++/message.h>
using namespace std;
#include <string>
#include <unistd.h>
#include <thread>
#include <iostream>
#include "../server_path"
DBus::BusDispatcher dispatcher;

Energy_Adaptor::Energy_Adaptor(DBus::Connection &connection)
    : DBus::ObjectAdaptor(connection, ENERGY_SERVER_PATH) {}

int32_t Energy_Adaptor::energy_ibmc() {
  cout << "ibmc에서 온 요청 수행 " << endl;
  return 1;
}

int32_t Energy_Adaptor::energy_policy() {
  cout << "policy에서 온 요청 수행 : " << endl;
  return 1;
}
int32_t Energy_Adaptor::energy_monitor() {
  cout << "monitor에서 온 요청 수행 : " << endl;
  return 1;
}
int32_t Energy_Adaptor::energy_feedback() {
  cout << "feedback에서 온 요청 수행 : " << endl;
  return 1;
}
int32_t Energy_Adaptor::energy_ssp() {
  cout << "ssp에서 온 요청 수행 : " << endl;
  return 1;
}
//-----------------------------Energy_Adaptor클래스끝-----------------------------
Ibmc_Proxy::Ibmc_Proxy(DBus::Connection &connection, const char *path,
                       const char *name)
    : DBus::ObjectProxy(connection, path, name) {}
//-----------------------------Ibmc_Proxy클래스끝-----------------------------
Policy_Proxy::Policy_Proxy(DBus::Connection &connection, const char *path,
                       const char *name)
    : DBus::ObjectProxy(connection, path, name) {}
//-----------------------------Policy_Proxy클래스끝-----------------------------
Monitor_Proxy::Monitor_Proxy(DBus::Connection &connection, const char *path,
                       const char *name)
    : DBus::ObjectProxy(connection, path, name) {}
//-----------------------------Monitor_Proxy클래스끝-----------------------------
Feedback_Proxy::Feedback_Proxy(DBus::Connection &connection, const char *path,
                       const char *name)
    : DBus::ObjectProxy(connection, path, name) {}
//-----------------------------Feedback_Proxy클래스끝-----------------------------
Ssp_Proxy::Ssp_Proxy(DBus::Connection &connection, const char *path,
                       const char *name)
    : DBus::ObjectProxy(connection, path, name) {}
//-----------------------------Ssp_Proxy클래스끝-----------------------------
void run_energy_server(){
  cout << "energy Server Start " << endl;
  DBus::default_dispatcher = &dispatcher;

  DBus::Connection conn = DBus::Connection::SystemBus();
  conn.request_name(ENERGY_SERVER_NAME);

  Energy_Adaptor server(conn);
  // 서버 유지
  dispatcher.enter();
}
void energy(){
  string option="";
  while(true){
    cout << " [ ibmc | policy | monitor | feedback | ssp ] : " << endl;
    cin >> option ;
    if(option =="ibmc"){
      cout << "ibmc에 연결을 요청합니다." << endl;
      connect_to_ibmc_server();
    }
    else if (option == "policy"){
      cout << "policy에 연결을 요청합니다." << endl;
      connect_to_policy_server();
    }
    else if(option == "monitor"){
      cout << "monitor에 연결을 요청합니다." << endl;
      connect_to_monitor_server();
    }
    else if(option == "feedback"){
      cout << "feedback에 연결을 요청합니다." << endl;
      connect_to_feedback_server();
    }
    else if(option == "ssp"){
      cout << "ssp에 연결을 요청합니다." << endl;
      connect_to_ssp_server();
    }
    else {
      cout << "다시 입력하세요" << endl;
    }
  }
}
void connect_to_ibmc_server(){
    DBus::BusDispatcher dispatcher;
  DBus::default_dispatcher = &dispatcher;
  DBus::Connection conn_n = DBus::Connection::SystemBus();
  Ibmc_Proxy dbus_adap_test =
      Ibmc_Proxy(conn_n, IBMC_SERVER_PATH, IBMC_SERVER_NAME);
  cout << "-------------------------------" << endl;    
  cout << "ibmc 서버 연결 요청" << endl;
  cout << "-------------------------------" << endl;
  dbus_adap_test.ibmc_energy();
}
void connect_to_policy_server(){
    DBus::BusDispatcher dispatcher;
  DBus::default_dispatcher = &dispatcher;
  DBus::Connection conn_n = DBus::Connection::SystemBus();
  Policy_Proxy dbus_adap_test =
      Policy_Proxy(conn_n, POLICY_SERVER_PATH, POLICY_SERVER_NAME);
  cout << "-------------------------------" << endl;    
  cout << "policy 서버 연결 요청" << endl;
  cout << "-------------------------------" << endl;
  dbus_adap_test.policy_energy();
}
void connect_to_monitor_server(){
    DBus::BusDispatcher dispatcher;
  DBus::default_dispatcher = &dispatcher;
  DBus::Connection conn_n = DBus::Connection::SystemBus();
  Monitor_Proxy dbus_adap_test =
      Monitor_Proxy(conn_n, MONITOR_SERVER_PATH, MONITOR_SERVER_NAME);
  cout << "-------------------------------" << endl;    
  cout << "monitor 서버 연결 요청" << endl;
  cout << "-------------------------------" << endl;
  dbus_adap_test.monitor_energy();
}
void connect_to_feedback_server(){
    DBus::BusDispatcher dispatcher;
  DBus::default_dispatcher = &dispatcher;
  DBus::Connection conn_n = DBus::Connection::SystemBus();
  Feedback_Proxy dbus_adap_test =
      Feedback_Proxy(conn_n, FEEDBACK_SERVER_PATH, FEEDBACK_SERVER_NAME);
  cout << "-------------------------------" << endl;    
  cout << "feedback 서버 연결 요청" << endl;
  cout << "-------------------------------" << endl;
  dbus_adap_test.feedback_energy();
}
void connect_to_ssp_server(){
    DBus::BusDispatcher dispatcher;
  DBus::default_dispatcher = &dispatcher;
  DBus::Connection conn_n = DBus::Connection::SystemBus();
  Ssp_Proxy dbus_adap_test =
      Ssp_Proxy(conn_n, SSP_SERVER_PATH, SSP_SERVER_NAME);
  cout << "-------------------------------" << endl;    
  cout << "ssp 서버 연결 요청" << endl;
  cout << "-------------------------------" << endl;
  dbus_adap_test.ssp_energy();
}
int main() {
  std::thread energy_server_thread(run_energy_server);
  std::thread energy_thread(energy);
  //feedback서버 연결 함수 
  energy_server_thread.join();
  energy_thread.join();
  

  return 0;
}