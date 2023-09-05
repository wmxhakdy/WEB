
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__ssp_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__ssp_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++-1/dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace freedesktop {
namespace keti {
namespace bmc {

class ssp_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    ssp_adaptor()
    : ::DBus::InterfaceAdaptor("org.freedesktop.keti.bmc.ssp")
    {
        register_method(ssp_adaptor, ssp_ibmc, _ssp_ibmc_stub);
        register_method(ssp_adaptor, ssp_policy, _ssp_policy_stub);
        register_method(ssp_adaptor, ssp_monitor, _ssp_monitor_stub);
        register_method(ssp_adaptor, ssp_feedback, _ssp_feedback_stub);
        register_method(ssp_adaptor, ssp_energy, _ssp_energy_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument ssp_ibmc_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ssp_policy_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ssp_monitor_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ssp_feedback_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ssp_energy_args[] = 
        {
            { "result", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod ssp_adaptor_methods[] = 
        {
            { "ssp_ibmc", ssp_ibmc_args },
            { "ssp_policy", ssp_policy_args },
            { "ssp_monitor", ssp_monitor_args },
            { "ssp_feedback", ssp_feedback_args },
            { "ssp_energy", ssp_energy_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod ssp_adaptor_signals[] = 
        {
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty ssp_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface ssp_adaptor_interface = 
        {
            "org.freedesktop.keti.bmc.ssp",
            ssp_adaptor_methods,
            ssp_adaptor_signals,
            ssp_adaptor_properties
        };
        return &ssp_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual int32_t ssp_ibmc() = 0;
    virtual int32_t ssp_policy() = 0;
    virtual int32_t ssp_monitor() = 0;
    virtual int32_t ssp_feedback() = 0;
    virtual int32_t ssp_energy() = 0;

public:

    /* signal emitters for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _ssp_ibmc_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = ssp_ibmc();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _ssp_policy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = ssp_policy();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _ssp_monitor_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = ssp_monitor();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _ssp_feedback_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = ssp_feedback();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _ssp_energy_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = ssp_energy();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } } 
#endif //__dbusxx__ssp_adaptor_h__ADAPTOR_MARSHAL_H