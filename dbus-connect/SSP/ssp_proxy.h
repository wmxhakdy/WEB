
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__ssp_proxy_h__PROXY_MARSHAL_H
#define __dbusxx__ssp_proxy_h__PROXY_MARSHAL_H

#include <dbus-c++-1/dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace freedesktop {
namespace keti {
namespace bmc {

class ssp_proxy
: public ::DBus::InterfaceProxy
{
public:

    ssp_proxy()
    : ::DBus::InterfaceProxy("org.freedesktop.keti.bmc.ssp")
    {
    }

public:

    /* properties exported by this interface */
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    int32_t ssp_ibmc()
    {
        ::DBus::CallMessage call;
        call.member("ssp_ibmc");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        int32_t argout;
        ri >> argout;
        return argout;
    }

    int32_t ssp_policy()
    {
        ::DBus::CallMessage call;
        call.member("ssp_policy");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        int32_t argout;
        ri >> argout;
        return argout;
    }

    int32_t ssp_monitor()
    {
        ::DBus::CallMessage call;
        call.member("ssp_monitor");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        int32_t argout;
        ri >> argout;
        return argout;
    }

    int32_t ssp_feedback()
    {
        ::DBus::CallMessage call;
        call.member("ssp_feedback");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        int32_t argout;
        ri >> argout;
        return argout;
    }

    int32_t ssp_energy()
    {
        ::DBus::CallMessage call;
        call.member("ssp_energy");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        int32_t argout;
        ri >> argout;
        return argout;
    }


public:

    /* signal handlers for this interface
     */

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
};

} } } } 
#endif //__dbusxx__ssp_proxy_h__PROXY_MARSHAL_H
