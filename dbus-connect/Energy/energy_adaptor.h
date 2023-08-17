
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__energy_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__energy_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++-1/dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace freedesktop {
namespace keti {
namespace bmc {

class energy_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    energy_adaptor()
    : ::DBus::InterfaceAdaptor("org.freedesktop.keti.bmc.energy")
    {
        register_method(energy_adaptor, energy_ibmc, _energy_ibmc_stub);
        register_method(energy_adaptor, energy_policy, _energy_policy_stub);
        register_method(energy_adaptor, energy_monitor, _energy_monitor_stub);
        register_method(energy_adaptor, energy_feedback, _energy_feedback_stub);
        register_method(energy_adaptor, energy_ssp, _energy_ssp_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument energy_ibmc_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument energy_policy_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument energy_monitor_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument energy_feedback_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument energy_ssp_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod energy_adaptor_methods[] = 
        {
            { "energy_ibmc", energy_ibmc_args },
            { "energy_policy", energy_policy_args },
            { "energy_monitor", energy_monitor_args },
            { "energy_feedback", energy_feedback_args },
            { "energy_ssp", energy_ssp_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod energy_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty energy_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface energy_adaptor_interface = 
        {
            "org.freedesktop.keti.bmc.energy",
            energy_adaptor_methods,
            energy_adaptor_signals,
            energy_adaptor_properties
        };
        return &energy_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual int32_t energy_ibmc() = 0;
    virtual int32_t energy_policy() = 0;
    virtual int32_t energy_monitor() = 0;
    virtual int32_t energy_feedback() = 0;
    virtual int32_t energy_ssp() = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _energy_ibmc_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = energy_ibmc();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _energy_policy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = energy_policy();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _energy_monitor_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = energy_monitor();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _energy_feedback_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = energy_feedback();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _energy_ssp_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = energy_ssp();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } } 
#endif //__dbusxx__energy_adaptor_h__ADAPTOR_MARSHAL_H
