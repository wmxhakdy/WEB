
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__feedback_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__feedback_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++-1/dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace freedesktop {
namespace keti {
namespace bmc {

class feedback_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    feedback_adaptor()
    : ::DBus::InterfaceAdaptor("org.freedesktop.keti.bmc.feedback")
    {
        register_method(feedback_adaptor, feedback_ibmc, _feedback_ibmc_stub);
        register_method(feedback_adaptor, feedback_policy, _feedback_policy_stub);
        register_method(feedback_adaptor, feedback_monitor, _feedback_monitor_stub);
        register_method(feedback_adaptor, feedback_energy, _feedback_energy_stub);
        register_method(feedback_adaptor, feedback_ssp, _feedback_ssp_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument feedback_ibmc_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument feedback_policy_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument feedback_monitor_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument feedback_energy_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument feedback_ssp_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod feedback_adaptor_methods[] = 
        {
            { "feedback_ibmc", feedback_ibmc_args },
            { "feedback_policy", feedback_policy_args },
            { "feedback_monitor", feedback_monitor_args },
            { "feedback_energy", feedback_energy_args },
            { "feedback_ssp", feedback_ssp_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod feedback_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty feedback_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface feedback_adaptor_interface = 
        {
            "org.freedesktop.keti.bmc.feedback",
            feedback_adaptor_methods,
            feedback_adaptor_signals,
            feedback_adaptor_properties
        };
        return &feedback_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual int32_t feedback_ibmc() = 0;
    virtual int32_t feedback_policy() = 0;
    virtual int32_t feedback_monitor() = 0;
    virtual int32_t feedback_energy() = 0;
    virtual int32_t feedback_ssp() = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _feedback_ibmc_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = feedback_ibmc();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _feedback_policy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = feedback_policy();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _feedback_monitor_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = feedback_monitor();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _feedback_energy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = feedback_energy();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _feedback_ssp_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = feedback_ssp();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } } 
#endif //__dbusxx__feedback_adaptor_h__ADAPTOR_MARSHAL_H