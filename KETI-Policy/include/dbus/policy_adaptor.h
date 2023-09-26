
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__policy_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__policy_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++-1/dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace freedesktop {
namespace keti {
namespace bmc {

class policy_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    policy_adaptor()
    : ::DBus::InterfaceAdaptor("org.freedesktop.keti.bmc.policy")
    {
        register_method(policy_adaptor, getFan, _getFan_stub);
        register_method(policy_adaptor, getFanTargetPolicy, _getFanTargetPolicy_stub);
        register_method(policy_adaptor, setFan, _setFan_stub);
        register_method(policy_adaptor, getFanPolicy, _getFanPolicy_stub);
        register_method(policy_adaptor, setFanPolicyString, _setFanPolicyString_stub);
        register_method(policy_adaptor, setFanPolicyInt, _setFanPolicyInt_stub);
        register_method(policy_adaptor, createFanPolicy, _createFanPolicy_stub);
        register_method(policy_adaptor, deleteFanPolicy, _deleteFanPolicy_stub);
        register_method(policy_adaptor, getCPUPolicy, _getCPUPolicy_stub);
        register_method(policy_adaptor, setCPUPolicyString, _setCPUPolicyString_stub);
        register_method(policy_adaptor, setCPUPolicyInt, _setCPUPolicyInt_stub);
        register_method(policy_adaptor, getFeedbackPolicy, _getFeedbackPolicy_stub);
        register_method(policy_adaptor, setFeedbackPolicyString, _setFeedbackPolicyString_stub);
        register_method(policy_adaptor, setFeedbackPolicyInt, _setFeedbackPolicyInt_stub);
        register_method(policy_adaptor, createFeedbackPolicy, _createFeedbackPolicy_stub);
        register_method(policy_adaptor, deleteFeedbackPolicy, _deleteFeedbackPolicy_stub);
        register_method(policy_adaptor, PolicyInitialize, _PolicyInitialize_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument getFan_args[] = 
        {
            { "FanName", "s", true },
            { "fan_struct", "(siiiis)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument getFanTargetPolicy_args[] = 
        {
            { "FanPolicyName", "s", true },
            { "fan_struct", "(is)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setFan_args[] = 
        {
            { "FanName", "s", true },
            { "FanName_string", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument getFanPolicy_args[] = 
        {
            { "policyName", "s", true },
            { "fan_policy_struct", "(sssiss)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setFanPolicyString_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeName", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setFanPolicyInt_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeValue", "i", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument createFanPolicy_args[] = 
        {
            { "description", "s", true },
            { "policyName", "s", true },
            { "algorithm", "s", true },
            { "temperatureSource", "s", true },
            { "desiredTemperature", "i", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument deleteFanPolicy_args[] = 
        {
            { "policyName", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument getCPUPolicy_args[] = 
        {
            { "policyName", "s", true },
            { "cpu_policy_struct", "(sssii)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setCPUPolicyString_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeName", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setCPUPolicyInt_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeValue", "i", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument getFeedbackPolicy_args[] = 
        {
            { "policyID", "i", true },
            { 0, "(sbbibibi)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setFeedbackPolicyString_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeName", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument setFeedbackPolicyInt_args[] = 
        {
            { "policyName", "s", true },
            { "attribute", "s", true },
            { "attributeValue", "i", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument createFeedbackPolicy_args[] = 
        {
            { "policyName", "s", true },
            { "yellowTemperature", "i", true },
            { "orangeTemperature", "i", true },
            { "redTemperature", "i", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument deleteFeedbackPolicy_args[] = 
        {
            { "policyName", "s", true },
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument PolicyInitialize_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod policy_adaptor_methods[] = 
        {
            { "getFan", getFan_args },
            { "getFanTargetPolicy", getFanTargetPolicy_args },
            { "setFan", setFan_args },
            { "getFanPolicy", getFanPolicy_args },
            { "setFanPolicyString", setFanPolicyString_args },
            { "setFanPolicyInt", setFanPolicyInt_args },
            { "createFanPolicy", createFanPolicy_args },
            { "deleteFanPolicy", deleteFanPolicy_args },
            { "getCPUPolicy", getCPUPolicy_args },
            { "setCPUPolicyString", setCPUPolicyString_args },
            { "setCPUPolicyInt", setCPUPolicyInt_args },
            { "getFeedbackPolicy", getFeedbackPolicy_args },
            { "setFeedbackPolicyString", setFeedbackPolicyString_args },
            { "setFeedbackPolicyInt", setFeedbackPolicyInt_args },
            { "createFeedbackPolicy", createFeedbackPolicy_args },
            { "deleteFeedbackPolicy", deleteFeedbackPolicy_args },
            { "PolicyInitialize", PolicyInitialize_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod policy_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty policy_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface policy_adaptor_interface = 
        {
            "org.freedesktop.keti.bmc.policy",
            policy_adaptor_methods,
            policy_adaptor_signals,
            policy_adaptor_properties
        };
        return &policy_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual ::DBus::Struct< std::string, int32_t, int32_t, int32_t, int32_t, std::string > getFan(const std::string& FanName) = 0;
    virtual ::DBus::Struct< int32_t, std::string > getFanTargetPolicy(const std::string& FanPolicyName) = 0;
    virtual int32_t setFan(const std::string& FanName, const std::string& FanName_string) = 0;
    virtual ::DBus::Struct< std::string, std::string, std::string, int32_t, std::string, std::string > getFanPolicy(const std::string& policyName) = 0;
    virtual int32_t setFanPolicyString(const std::string& policyName, const std::string& attribute, const std::string& attributeName) = 0;
    virtual int32_t setFanPolicyInt(const std::string& policyName, const std::string& attribute, const int32_t& attributeValue) = 0;
    virtual int32_t createFanPolicy(const std::string& description, const std::string& policyName, const std::string& algorithm, const std::string& temperatureSource, const int32_t& desiredTemperature) = 0;
    virtual int32_t deleteFanPolicy(const std::string& policyName) = 0;
    virtual ::DBus::Struct< std::string, std::string, std::string, int32_t, int32_t > getCPUPolicy(const std::string& policyName) = 0;
    virtual int32_t setCPUPolicyString(const std::string& policyName, const std::string& attribute, const std::string& attributeName) = 0;
    virtual int32_t setCPUPolicyInt(const std::string& policyName, const std::string& attribute, const int32_t& attributeValue) = 0;
    virtual ::DBus::Struct< std::string, bool, bool, int32_t, bool, int32_t, bool, int32_t > getFeedbackPolicy(const int32_t& policyID) = 0;
    virtual int32_t setFeedbackPolicyString(const std::string& policyName, const std::string& attribute, const std::string& attributeName) = 0;
    virtual int32_t setFeedbackPolicyInt(const std::string& policyName, const std::string& attribute, const int32_t& attributeValue) = 0;
    virtual int32_t createFeedbackPolicy(const std::string& policyName, const int32_t& yellowTemperature, const int32_t& orangeTemperature, const int32_t& redTemperature) = 0;
    virtual int32_t deleteFeedbackPolicy(const std::string& policyName) = 0;
    virtual int32_t PolicyInitialize() = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _getFan_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        ::DBus::Struct< std::string, int32_t, int32_t, int32_t, int32_t, std::string > argout1 = getFan(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _getFanTargetPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        ::DBus::Struct< int32_t, std::string > argout1 = getFanTargetPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setFan_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        int32_t argout1 = setFan(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _getFanPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        ::DBus::Struct< std::string, std::string, std::string, int32_t, std::string, std::string > argout1 = getFanPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setFanPolicyString_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        std::string argin3; ri >> argin3;
        int32_t argout1 = setFanPolicyString(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setFanPolicyInt_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        int32_t argin3; ri >> argin3;
        int32_t argout1 = setFanPolicyInt(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _createFanPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        std::string argin3; ri >> argin3;
        std::string argin4; ri >> argin4;
        int32_t argin5; ri >> argin5;
        int32_t argout1 = createFanPolicy(argin1, argin2, argin3, argin4, argin5);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _deleteFanPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        int32_t argout1 = deleteFanPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _getCPUPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        ::DBus::Struct< std::string, std::string, std::string, int32_t, int32_t > argout1 = getCPUPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setCPUPolicyString_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        std::string argin3; ri >> argin3;
        int32_t argout1 = setCPUPolicyString(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setCPUPolicyInt_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        int32_t argin3; ri >> argin3;
        int32_t argout1 = setCPUPolicyInt(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _getFeedbackPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        ::DBus::Struct< std::string, bool, bool, int32_t, bool, int32_t, bool, int32_t > argout1 = getFeedbackPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setFeedbackPolicyString_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        std::string argin3; ri >> argin3;
        int32_t argout1 = setFeedbackPolicyString(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _setFeedbackPolicyInt_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        int32_t argin3; ri >> argin3;
        int32_t argout1 = setFeedbackPolicyInt(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _createFeedbackPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        int32_t argin2; ri >> argin2;
        int32_t argin3; ri >> argin3;
        int32_t argin4; ri >> argin4;
        int32_t argout1 = createFeedbackPolicy(argin1, argin2, argin3, argin4);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _deleteFeedbackPolicy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        int32_t argout1 = deleteFeedbackPolicy(argin1);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _PolicyInitialize_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = PolicyInitialize();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } } 
#endif //__dbusxx__policy_adaptor_h__ADAPTOR_MARSHAL_H