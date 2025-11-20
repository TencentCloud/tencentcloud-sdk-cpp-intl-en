/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vpc/v20170312/VpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vpc::V20170312;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "vpc.intl.tencentcloudapi.com";
}

VpcClient::VpcClient(const Credential &credential, const string &region) :
    VpcClient(credential, region, ClientProfile())
{
}

VpcClient::VpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VpcClient::AcceptAttachCcnInstancesOutcome VpcClient::AcceptAttachCcnInstances(const AcceptAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptAttachCcnInstancesResponse rsp = AcceptAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptAttachCcnInstancesOutcome(rsp);
        else
            return AcceptAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return AcceptAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::AcceptAttachCcnInstancesAsync(const AcceptAttachCcnInstancesRequest& request, const AcceptAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcceptAttachCcnInstancesRequest&;
    using Resp = AcceptAttachCcnInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptAttachCcnInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AcceptAttachCcnInstancesOutcomeCallable VpcClient::AcceptAttachCcnInstancesCallable(const AcceptAttachCcnInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptAttachCcnInstancesOutcome>>();
    AcceptAttachCcnInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const AcceptAttachCcnInstancesRequest&,
        AcceptAttachCcnInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AddBandwidthPackageResourcesOutcome VpcClient::AddBandwidthPackageResources(const AddBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "AddBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddBandwidthPackageResourcesResponse rsp = AddBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddBandwidthPackageResourcesOutcome(rsp);
        else
            return AddBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return AddBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::AddBandwidthPackageResourcesAsync(const AddBandwidthPackageResourcesRequest& request, const AddBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddBandwidthPackageResourcesRequest&;
    using Resp = AddBandwidthPackageResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "AddBandwidthPackageResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AddBandwidthPackageResourcesOutcomeCallable VpcClient::AddBandwidthPackageResourcesCallable(const AddBandwidthPackageResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddBandwidthPackageResourcesOutcome>>();
    AddBandwidthPackageResourcesAsync(
    request,
    [prom](
        const VpcClient*,
        const AddBandwidthPackageResourcesRequest&,
        AddBandwidthPackageResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AddTemplateMemberOutcome VpcClient::AddTemplateMember(const AddTemplateMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddTemplateMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTemplateMemberResponse rsp = AddTemplateMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTemplateMemberOutcome(rsp);
        else
            return AddTemplateMemberOutcome(o.GetError());
    }
    else
    {
        return AddTemplateMemberOutcome(outcome.GetError());
    }
}

void VpcClient::AddTemplateMemberAsync(const AddTemplateMemberRequest& request, const AddTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddTemplateMemberRequest&;
    using Resp = AddTemplateMemberResponse;

    DoRequestAsync<Req, Resp>(
        "AddTemplateMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AddTemplateMemberOutcomeCallable VpcClient::AddTemplateMemberCallable(const AddTemplateMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTemplateMemberOutcome>>();
    AddTemplateMemberAsync(
    request,
    [prom](
        const VpcClient*,
        const AddTemplateMemberRequest&,
        AddTemplateMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AdjustPublicAddressOutcome VpcClient::AdjustPublicAddress(const AdjustPublicAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustPublicAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustPublicAddressResponse rsp = AdjustPublicAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustPublicAddressOutcome(rsp);
        else
            return AdjustPublicAddressOutcome(o.GetError());
    }
    else
    {
        return AdjustPublicAddressOutcome(outcome.GetError());
    }
}

void VpcClient::AdjustPublicAddressAsync(const AdjustPublicAddressRequest& request, const AdjustPublicAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AdjustPublicAddressRequest&;
    using Resp = AdjustPublicAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AdjustPublicAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AdjustPublicAddressOutcomeCallable VpcClient::AdjustPublicAddressCallable(const AdjustPublicAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AdjustPublicAddressOutcome>>();
    AdjustPublicAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const AdjustPublicAddressRequest&,
        AdjustPublicAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AllocateAddressesOutcome VpcClient::AllocateAddresses(const AllocateAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateAddressesResponse rsp = AllocateAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateAddressesOutcome(rsp);
        else
            return AllocateAddressesOutcome(o.GetError());
    }
    else
    {
        return AllocateAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AllocateAddressesAsync(const AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateAddressesRequest&;
    using Resp = AllocateAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AllocateAddressesOutcomeCallable VpcClient::AllocateAddressesCallable(const AllocateAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateAddressesOutcome>>();
    AllocateAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const AllocateAddressesRequest&,
        AllocateAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AllocateIPv6AddressesOutcome VpcClient::AllocateIPv6Addresses(const AllocateIPv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateIPv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateIPv6AddressesResponse rsp = AllocateIPv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateIPv6AddressesOutcome(rsp);
        else
            return AllocateIPv6AddressesOutcome(o.GetError());
    }
    else
    {
        return AllocateIPv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AllocateIPv6AddressesAsync(const AllocateIPv6AddressesRequest& request, const AllocateIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateIPv6AddressesRequest&;
    using Resp = AllocateIPv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateIPv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AllocateIPv6AddressesOutcomeCallable VpcClient::AllocateIPv6AddressesCallable(const AllocateIPv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateIPv6AddressesOutcome>>();
    AllocateIPv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const AllocateIPv6AddressesRequest&,
        AllocateIPv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AllocateIp6AddressesBandwidthOutcome VpcClient::AllocateIp6AddressesBandwidth(const AllocateIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateIp6AddressesBandwidthResponse rsp = AllocateIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateIp6AddressesBandwidthOutcome(rsp);
        else
            return AllocateIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return AllocateIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::AllocateIp6AddressesBandwidthAsync(const AllocateIp6AddressesBandwidthRequest& request, const AllocateIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateIp6AddressesBandwidthRequest&;
    using Resp = AllocateIp6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateIp6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AllocateIp6AddressesBandwidthOutcomeCallable VpcClient::AllocateIp6AddressesBandwidthCallable(const AllocateIp6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateIp6AddressesBandwidthOutcome>>();
    AllocateIp6AddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const AllocateIp6AddressesBandwidthRequest&,
        AllocateIp6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssignIpv6AddressesOutcome VpcClient::AssignIpv6Addresses(const AssignIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6AddressesResponse rsp = AssignIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6AddressesOutcome(rsp);
        else
            return AssignIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6AddressesRequest&;
    using Resp = AssignIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssignIpv6AddressesOutcomeCallable VpcClient::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6AddressesOutcome>>();
    AssignIpv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const AssignIpv6AddressesRequest&,
        AssignIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssignIpv6CidrBlockOutcome VpcClient::AssignIpv6CidrBlock(const AssignIpv6CidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6CidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6CidrBlockResponse rsp = AssignIpv6CidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6CidrBlockOutcome(rsp);
        else
            return AssignIpv6CidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6CidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6CidrBlockAsync(const AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6CidrBlockRequest&;
    using Resp = AssignIpv6CidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6CidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssignIpv6CidrBlockOutcomeCallable VpcClient::AssignIpv6CidrBlockCallable(const AssignIpv6CidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6CidrBlockOutcome>>();
    AssignIpv6CidrBlockAsync(
    request,
    [prom](
        const VpcClient*,
        const AssignIpv6CidrBlockRequest&,
        AssignIpv6CidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssignIpv6SubnetCidrBlockOutcome VpcClient::AssignIpv6SubnetCidrBlock(const AssignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6SubnetCidrBlockResponse rsp = AssignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return AssignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6SubnetCidrBlockAsync(const AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6SubnetCidrBlockRequest&;
    using Resp = AssignIpv6SubnetCidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6SubnetCidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssignIpv6SubnetCidrBlockOutcomeCallable VpcClient::AssignIpv6SubnetCidrBlockCallable(const AssignIpv6SubnetCidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6SubnetCidrBlockOutcome>>();
    AssignIpv6SubnetCidrBlockAsync(
    request,
    [prom](
        const VpcClient*,
        const AssignIpv6SubnetCidrBlockRequest&,
        AssignIpv6SubnetCidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssignPrivateIpAddressesOutcome VpcClient::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignPrivateIpAddressesResponse rsp = AssignPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignPrivateIpAddressesOutcome(rsp);
        else
            return AssignPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return AssignPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignPrivateIpAddressesRequest&;
    using Resp = AssignPrivateIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignPrivateIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssignPrivateIpAddressesOutcomeCallable VpcClient::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignPrivateIpAddressesOutcome>>();
    AssignPrivateIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const AssignPrivateIpAddressesRequest&,
        AssignPrivateIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateAddressOutcome VpcClient::AssociateAddress(const AssociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateAddressResponse rsp = AssociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateAddressOutcome(rsp);
        else
            return AssociateAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateAddressOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateAddressRequest&;
    using Resp = AssociateAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateAddressOutcomeCallable VpcClient::AssociateAddressCallable(const AssociateAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateAddressOutcome>>();
    AssociateAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateAddressRequest&,
        AssociateAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateDirectConnectGatewayNatGatewayOutcome VpcClient::AssociateDirectConnectGatewayNatGateway(const AssociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDirectConnectGatewayNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDirectConnectGatewayNatGatewayResponse rsp = AssociateDirectConnectGatewayNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDirectConnectGatewayNatGatewayOutcome(rsp);
        else
            return AssociateDirectConnectGatewayNatGatewayOutcome(o.GetError());
    }
    else
    {
        return AssociateDirectConnectGatewayNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateDirectConnectGatewayNatGatewayAsync(const AssociateDirectConnectGatewayNatGatewayRequest& request, const AssociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateDirectConnectGatewayNatGatewayRequest&;
    using Resp = AssociateDirectConnectGatewayNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateDirectConnectGatewayNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateDirectConnectGatewayNatGatewayOutcomeCallable VpcClient::AssociateDirectConnectGatewayNatGatewayCallable(const AssociateDirectConnectGatewayNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateDirectConnectGatewayNatGatewayOutcome>>();
    AssociateDirectConnectGatewayNatGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateDirectConnectGatewayNatGatewayRequest&,
        AssociateDirectConnectGatewayNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateIPv6AddressOutcome VpcClient::AssociateIPv6Address(const AssociateIPv6AddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateIPv6Address");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateIPv6AddressResponse rsp = AssociateIPv6AddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateIPv6AddressOutcome(rsp);
        else
            return AssociateIPv6AddressOutcome(o.GetError());
    }
    else
    {
        return AssociateIPv6AddressOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateIPv6AddressAsync(const AssociateIPv6AddressRequest& request, const AssociateIPv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateIPv6AddressRequest&;
    using Resp = AssociateIPv6AddressResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateIPv6Address", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateIPv6AddressOutcomeCallable VpcClient::AssociateIPv6AddressCallable(const AssociateIPv6AddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateIPv6AddressOutcome>>();
    AssociateIPv6AddressAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateIPv6AddressRequest&,
        AssociateIPv6AddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateNatGatewayAddressOutcome VpcClient::AssociateNatGatewayAddress(const AssociateNatGatewayAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNatGatewayAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNatGatewayAddressResponse rsp = AssociateNatGatewayAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNatGatewayAddressOutcome(rsp);
        else
            return AssociateNatGatewayAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateNatGatewayAddressOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNatGatewayAddressAsync(const AssociateNatGatewayAddressRequest& request, const AssociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateNatGatewayAddressRequest&;
    using Resp = AssociateNatGatewayAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateNatGatewayAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateNatGatewayAddressOutcomeCallable VpcClient::AssociateNatGatewayAddressCallable(const AssociateNatGatewayAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateNatGatewayAddressOutcome>>();
    AssociateNatGatewayAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateNatGatewayAddressRequest&,
        AssociateNatGatewayAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateNetworkAclSubnetsOutcome VpcClient::AssociateNetworkAclSubnets(const AssociateNetworkAclSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNetworkAclSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNetworkAclSubnetsResponse rsp = AssociateNetworkAclSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNetworkAclSubnetsOutcome(rsp);
        else
            return AssociateNetworkAclSubnetsOutcome(o.GetError());
    }
    else
    {
        return AssociateNetworkAclSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNetworkAclSubnetsAsync(const AssociateNetworkAclSubnetsRequest& request, const AssociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateNetworkAclSubnetsRequest&;
    using Resp = AssociateNetworkAclSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateNetworkAclSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateNetworkAclSubnetsOutcomeCallable VpcClient::AssociateNetworkAclSubnetsCallable(const AssociateNetworkAclSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateNetworkAclSubnetsOutcome>>();
    AssociateNetworkAclSubnetsAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateNetworkAclSubnetsRequest&,
        AssociateNetworkAclSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AssociateNetworkInterfaceSecurityGroupsOutcome VpcClient::AssociateNetworkInterfaceSecurityGroups(const AssociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNetworkInterfaceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNetworkInterfaceSecurityGroupsResponse rsp = AssociateNetworkInterfaceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNetworkInterfaceSecurityGroupsOutcome(rsp);
        else
            return AssociateNetworkInterfaceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateNetworkInterfaceSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNetworkInterfaceSecurityGroupsAsync(const AssociateNetworkInterfaceSecurityGroupsRequest& request, const AssociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateNetworkInterfaceSecurityGroupsRequest&;
    using Resp = AssociateNetworkInterfaceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateNetworkInterfaceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AssociateNetworkInterfaceSecurityGroupsOutcomeCallable VpcClient::AssociateNetworkInterfaceSecurityGroupsCallable(const AssociateNetworkInterfaceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateNetworkInterfaceSecurityGroupsOutcome>>();
    AssociateNetworkInterfaceSecurityGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const AssociateNetworkInterfaceSecurityGroupsRequest&,
        AssociateNetworkInterfaceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AttachCcnInstancesOutcome VpcClient::AttachCcnInstances(const AttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCcnInstancesResponse rsp = AttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCcnInstancesOutcome(rsp);
        else
            return AttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::AttachCcnInstancesAsync(const AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachCcnInstancesRequest&;
    using Resp = AttachCcnInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachCcnInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AttachCcnInstancesOutcomeCallable VpcClient::AttachCcnInstancesCallable(const AttachCcnInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachCcnInstancesOutcome>>();
    AttachCcnInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const AttachCcnInstancesRequest&,
        AttachCcnInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AttachClassicLinkVpcOutcome VpcClient::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest &request)
{
    auto outcome = MakeRequest(request, "AttachClassicLinkVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachClassicLinkVpcResponse rsp = AttachClassicLinkVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachClassicLinkVpcOutcome(rsp);
        else
            return AttachClassicLinkVpcOutcome(o.GetError());
    }
    else
    {
        return AttachClassicLinkVpcOutcome(outcome.GetError());
    }
}

void VpcClient::AttachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachClassicLinkVpcRequest&;
    using Resp = AttachClassicLinkVpcResponse;

    DoRequestAsync<Req, Resp>(
        "AttachClassicLinkVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AttachClassicLinkVpcOutcomeCallable VpcClient::AttachClassicLinkVpcCallable(const AttachClassicLinkVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachClassicLinkVpcOutcome>>();
    AttachClassicLinkVpcAsync(
    request,
    [prom](
        const VpcClient*,
        const AttachClassicLinkVpcRequest&,
        AttachClassicLinkVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AttachNetworkInterfaceOutcome VpcClient::AttachNetworkInterface(const AttachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "AttachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachNetworkInterfaceResponse rsp = AttachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachNetworkInterfaceOutcome(rsp);
        else
            return AttachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return AttachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachNetworkInterfaceRequest&;
    using Resp = AttachNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "AttachNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AttachNetworkInterfaceOutcomeCallable VpcClient::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachNetworkInterfaceOutcome>>();
    AttachNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const AttachNetworkInterfaceRequest&,
        AttachNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AttachSnapshotInstancesOutcome VpcClient::AttachSnapshotInstances(const AttachSnapshotInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachSnapshotInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachSnapshotInstancesResponse rsp = AttachSnapshotInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachSnapshotInstancesOutcome(rsp);
        else
            return AttachSnapshotInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachSnapshotInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::AttachSnapshotInstancesAsync(const AttachSnapshotInstancesRequest& request, const AttachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachSnapshotInstancesRequest&;
    using Resp = AttachSnapshotInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachSnapshotInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AttachSnapshotInstancesOutcomeCallable VpcClient::AttachSnapshotInstancesCallable(const AttachSnapshotInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachSnapshotInstancesOutcome>>();
    AttachSnapshotInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const AttachSnapshotInstancesRequest&,
        AttachSnapshotInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::AuditCrossBorderComplianceOutcome VpcClient::AuditCrossBorderCompliance(const AuditCrossBorderComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "AuditCrossBorderCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuditCrossBorderComplianceResponse rsp = AuditCrossBorderComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuditCrossBorderComplianceOutcome(rsp);
        else
            return AuditCrossBorderComplianceOutcome(o.GetError());
    }
    else
    {
        return AuditCrossBorderComplianceOutcome(outcome.GetError());
    }
}

void VpcClient::AuditCrossBorderComplianceAsync(const AuditCrossBorderComplianceRequest& request, const AuditCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuditCrossBorderComplianceRequest&;
    using Resp = AuditCrossBorderComplianceResponse;

    DoRequestAsync<Req, Resp>(
        "AuditCrossBorderCompliance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::AuditCrossBorderComplianceOutcomeCallable VpcClient::AuditCrossBorderComplianceCallable(const AuditCrossBorderComplianceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuditCrossBorderComplianceOutcome>>();
    AuditCrossBorderComplianceAsync(
    request,
    [prom](
        const VpcClient*,
        const AuditCrossBorderComplianceRequest&,
        AuditCrossBorderComplianceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CheckAssistantCidrOutcome VpcClient::CheckAssistantCidr(const CheckAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAssistantCidrResponse rsp = CheckAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAssistantCidrOutcome(rsp);
        else
            return CheckAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return CheckAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::CheckAssistantCidrAsync(const CheckAssistantCidrRequest& request, const CheckAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAssistantCidrRequest&;
    using Resp = CheckAssistantCidrResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAssistantCidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CheckAssistantCidrOutcomeCallable VpcClient::CheckAssistantCidrCallable(const CheckAssistantCidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAssistantCidrOutcome>>();
    CheckAssistantCidrAsync(
    request,
    [prom](
        const VpcClient*,
        const CheckAssistantCidrRequest&,
        CheckAssistantCidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CheckNetDetectStateOutcome VpcClient::CheckNetDetectState(const CheckNetDetectStateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckNetDetectState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckNetDetectStateResponse rsp = CheckNetDetectStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckNetDetectStateOutcome(rsp);
        else
            return CheckNetDetectStateOutcome(o.GetError());
    }
    else
    {
        return CheckNetDetectStateOutcome(outcome.GetError());
    }
}

void VpcClient::CheckNetDetectStateAsync(const CheckNetDetectStateRequest& request, const CheckNetDetectStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckNetDetectStateRequest&;
    using Resp = CheckNetDetectStateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckNetDetectState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CheckNetDetectStateOutcomeCallable VpcClient::CheckNetDetectStateCallable(const CheckNetDetectStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckNetDetectStateOutcome>>();
    CheckNetDetectStateAsync(
    request,
    [prom](
        const VpcClient*,
        const CheckNetDetectStateRequest&,
        CheckNetDetectStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CloneSecurityGroupOutcome VpcClient::CloneSecurityGroup(const CloneSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CloneSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneSecurityGroupResponse rsp = CloneSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneSecurityGroupOutcome(rsp);
        else
            return CloneSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CloneSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CloneSecurityGroupAsync(const CloneSecurityGroupRequest& request, const CloneSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneSecurityGroupRequest&;
    using Resp = CloneSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CloneSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CloneSecurityGroupOutcomeCallable VpcClient::CloneSecurityGroupCallable(const CloneSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneSecurityGroupOutcome>>();
    CloneSecurityGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const CloneSecurityGroupRequest&,
        CloneSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateAddressTemplateOutcome VpcClient::CreateAddressTemplate(const CreateAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateResponse rsp = CreateAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateOutcome(rsp);
        else
            return CreateAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAddressTemplateAsync(const CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAddressTemplateRequest&;
    using Resp = CreateAddressTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAddressTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateAddressTemplateOutcomeCallable VpcClient::CreateAddressTemplateCallable(const CreateAddressTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAddressTemplateOutcome>>();
    CreateAddressTemplateAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateAddressTemplateRequest&,
        CreateAddressTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateAddressTemplateGroupOutcome VpcClient::CreateAddressTemplateGroup(const CreateAddressTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateGroupResponse rsp = CreateAddressTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateGroupOutcome(rsp);
        else
            return CreateAddressTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAddressTemplateGroupAsync(const CreateAddressTemplateGroupRequest& request, const CreateAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAddressTemplateGroupRequest&;
    using Resp = CreateAddressTemplateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAddressTemplateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateAddressTemplateGroupOutcomeCallable VpcClient::CreateAddressTemplateGroupCallable(const CreateAddressTemplateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAddressTemplateGroupOutcome>>();
    CreateAddressTemplateGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateAddressTemplateGroupRequest&,
        CreateAddressTemplateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateAndAttachNetworkInterfaceOutcome VpcClient::CreateAndAttachNetworkInterface(const CreateAndAttachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndAttachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndAttachNetworkInterfaceResponse rsp = CreateAndAttachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndAttachNetworkInterfaceOutcome(rsp);
        else
            return CreateAndAttachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateAndAttachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAndAttachNetworkInterfaceAsync(const CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndAttachNetworkInterfaceRequest&;
    using Resp = CreateAndAttachNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndAttachNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateAndAttachNetworkInterfaceOutcomeCallable VpcClient::CreateAndAttachNetworkInterfaceCallable(const CreateAndAttachNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndAttachNetworkInterfaceOutcome>>();
    CreateAndAttachNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateAndAttachNetworkInterfaceRequest&,
        CreateAndAttachNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateAssistantCidrOutcome VpcClient::CreateAssistantCidr(const CreateAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssistantCidrResponse rsp = CreateAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssistantCidrOutcome(rsp);
        else
            return CreateAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return CreateAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAssistantCidrAsync(const CreateAssistantCidrRequest& request, const CreateAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssistantCidrRequest&;
    using Resp = CreateAssistantCidrResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssistantCidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateAssistantCidrOutcomeCallable VpcClient::CreateAssistantCidrCallable(const CreateAssistantCidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssistantCidrOutcome>>();
    CreateAssistantCidrAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateAssistantCidrRequest&,
        CreateAssistantCidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateBandwidthPackageOutcome VpcClient::CreateBandwidthPackage(const CreateBandwidthPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBandwidthPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBandwidthPackageResponse rsp = CreateBandwidthPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBandwidthPackageOutcome(rsp);
        else
            return CreateBandwidthPackageOutcome(o.GetError());
    }
    else
    {
        return CreateBandwidthPackageOutcome(outcome.GetError());
    }
}

void VpcClient::CreateBandwidthPackageAsync(const CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBandwidthPackageRequest&;
    using Resp = CreateBandwidthPackageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBandwidthPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateBandwidthPackageOutcomeCallable VpcClient::CreateBandwidthPackageCallable(const CreateBandwidthPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBandwidthPackageOutcome>>();
    CreateBandwidthPackageAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateBandwidthPackageRequest&,
        CreateBandwidthPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateCcnOutcome VpcClient::CreateCcn(const CreateCcnRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcnResponse rsp = CreateCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcnOutcome(rsp);
        else
            return CreateCcnOutcome(o.GetError());
    }
    else
    {
        return CreateCcnOutcome(outcome.GetError());
    }
}

void VpcClient::CreateCcnAsync(const CreateCcnRequest& request, const CreateCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCcnRequest&;
    using Resp = CreateCcnResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCcn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateCcnOutcomeCallable VpcClient::CreateCcnCallable(const CreateCcnRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCcnOutcome>>();
    CreateCcnAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateCcnRequest&,
        CreateCcnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateCustomerGatewayOutcome VpcClient::CreateCustomerGateway(const CreateCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomerGatewayResponse rsp = CreateCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomerGatewayOutcome(rsp);
        else
            return CreateCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCustomerGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomerGatewayRequest&;
    using Resp = CreateCustomerGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomerGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateCustomerGatewayOutcomeCallable VpcClient::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomerGatewayOutcome>>();
    CreateCustomerGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateCustomerGatewayRequest&,
        CreateCustomerGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateDefaultVpcOutcome VpcClient::CreateDefaultVpc(const CreateDefaultVpcRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultVpcResponse rsp = CreateDefaultVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultVpcOutcome(rsp);
        else
            return CreateDefaultVpcOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultVpcOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDefaultVpcAsync(const CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDefaultVpcRequest&;
    using Resp = CreateDefaultVpcResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDefaultVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateDefaultVpcOutcomeCallable VpcClient::CreateDefaultVpcCallable(const CreateDefaultVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDefaultVpcOutcome>>();
    CreateDefaultVpcAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateDefaultVpcRequest&,
        CreateDefaultVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateDirectConnectGatewayOutcome VpcClient::CreateDirectConnectGateway(const CreateDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectGatewayResponse rsp = CreateDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectGatewayOutcome(rsp);
        else
            return CreateDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDirectConnectGatewayAsync(const CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDirectConnectGatewayRequest&;
    using Resp = CreateDirectConnectGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDirectConnectGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateDirectConnectGatewayOutcomeCallable VpcClient::CreateDirectConnectGatewayCallable(const CreateDirectConnectGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDirectConnectGatewayOutcome>>();
    CreateDirectConnectGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateDirectConnectGatewayRequest&,
        CreateDirectConnectGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateDirectConnectGatewayCcnRoutesOutcome VpcClient::CreateDirectConnectGatewayCcnRoutes(const CreateDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectGatewayCcnRoutesResponse rsp = CreateDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return CreateDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDirectConnectGatewayCcnRoutesAsync(const CreateDirectConnectGatewayCcnRoutesRequest& request, const CreateDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDirectConnectGatewayCcnRoutesRequest&;
    using Resp = CreateDirectConnectGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDirectConnectGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::CreateDirectConnectGatewayCcnRoutesCallable(const CreateDirectConnectGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDirectConnectGatewayCcnRoutesOutcome>>();
    CreateDirectConnectGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateDirectConnectGatewayCcnRoutesRequest&,
        CreateDirectConnectGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateFlowLogOutcome VpcClient::CreateFlowLog(const CreateFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowLogResponse rsp = CreateFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowLogOutcome(rsp);
        else
            return CreateFlowLogOutcome(o.GetError());
    }
    else
    {
        return CreateFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::CreateFlowLogAsync(const CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowLogRequest&;
    using Resp = CreateFlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateFlowLogOutcomeCallable VpcClient::CreateFlowLogCallable(const CreateFlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowLogOutcome>>();
    CreateFlowLogAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateFlowLogRequest&,
        CreateFlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateHaVipOutcome VpcClient::CreateHaVip(const CreateHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHaVipResponse rsp = CreateHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHaVipOutcome(rsp);
        else
            return CreateHaVipOutcome(o.GetError());
    }
    else
    {
        return CreateHaVipOutcome(outcome.GetError());
    }
}

void VpcClient::CreateHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHaVipRequest&;
    using Resp = CreateHaVipResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHaVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateHaVipOutcomeCallable VpcClient::CreateHaVipCallable(const CreateHaVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHaVipOutcome>>();
    CreateHaVipAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateHaVipRequest&,
        CreateHaVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateLocalGatewayOutcome VpcClient::CreateLocalGateway(const CreateLocalGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLocalGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLocalGatewayResponse rsp = CreateLocalGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLocalGatewayOutcome(rsp);
        else
            return CreateLocalGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateLocalGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateLocalGatewayAsync(const CreateLocalGatewayRequest& request, const CreateLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLocalGatewayRequest&;
    using Resp = CreateLocalGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLocalGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateLocalGatewayOutcomeCallable VpcClient::CreateLocalGatewayCallable(const CreateLocalGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLocalGatewayOutcome>>();
    CreateLocalGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateLocalGatewayRequest&,
        CreateLocalGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNatGatewayOutcome VpcClient::CreateNatGateway(const CreateNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewayResponse rsp = CreateNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewayOutcome(rsp);
        else
            return CreateNatGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatGatewayRequest&;
    using Resp = CreateNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNatGatewayOutcomeCallable VpcClient::CreateNatGatewayCallable(const CreateNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatGatewayOutcome>>();
    CreateNatGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNatGatewayRequest&,
        CreateNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRule(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = CreateNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&;
    using Resp = CreateNatGatewayDestinationIpPortTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatGatewayDestinationIpPortTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleCallable(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome>>();
    CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&,
        CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNatGatewaySourceIpTranslationNatRuleOutcome VpcClient::CreateNatGatewaySourceIpTranslationNatRule(const CreateNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGatewaySourceIpTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewaySourceIpTranslationNatRuleResponse rsp = CreateNatGatewaySourceIpTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewaySourceIpTranslationNatRuleOutcome(rsp);
        else
            return CreateNatGatewaySourceIpTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewaySourceIpTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNatGatewaySourceIpTranslationNatRuleAsync(const CreateNatGatewaySourceIpTranslationNatRuleRequest& request, const CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatGatewaySourceIpTranslationNatRuleRequest&;
    using Resp = CreateNatGatewaySourceIpTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatGatewaySourceIpTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable VpcClient::CreateNatGatewaySourceIpTranslationNatRuleCallable(const CreateNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatGatewaySourceIpTranslationNatRuleOutcome>>();
    CreateNatGatewaySourceIpTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNatGatewaySourceIpTranslationNatRuleRequest&,
        CreateNatGatewaySourceIpTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNetDetectOutcome VpcClient::CreateNetDetect(const CreateNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetDetectResponse rsp = CreateNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetDetectOutcome(rsp);
        else
            return CreateNetDetectOutcome(o.GetError());
    }
    else
    {
        return CreateNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetDetectAsync(const CreateNetDetectRequest& request, const CreateNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetDetectRequest&;
    using Resp = CreateNetDetectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNetDetectOutcomeCallable VpcClient::CreateNetDetectCallable(const CreateNetDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetDetectOutcome>>();
    CreateNetDetectAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNetDetectRequest&,
        CreateNetDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNetworkAclOutcome VpcClient::CreateNetworkAcl(const CreateNetworkAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkAclResponse rsp = CreateNetworkAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkAclOutcome(rsp);
        else
            return CreateNetworkAclOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkAclOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkAclRequest&;
    using Resp = CreateNetworkAclResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNetworkAclOutcomeCallable VpcClient::CreateNetworkAclCallable(const CreateNetworkAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkAclOutcome>>();
    CreateNetworkAclAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNetworkAclRequest&,
        CreateNetworkAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNetworkAclQuintupleEntriesOutcome VpcClient::CreateNetworkAclQuintupleEntries(const CreateNetworkAclQuintupleEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkAclQuintupleEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkAclQuintupleEntriesResponse rsp = CreateNetworkAclQuintupleEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkAclQuintupleEntriesOutcome(rsp);
        else
            return CreateNetworkAclQuintupleEntriesOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkAclQuintupleEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetworkAclQuintupleEntriesAsync(const CreateNetworkAclQuintupleEntriesRequest& request, const CreateNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkAclQuintupleEntriesRequest&;
    using Resp = CreateNetworkAclQuintupleEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkAclQuintupleEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNetworkAclQuintupleEntriesOutcomeCallable VpcClient::CreateNetworkAclQuintupleEntriesCallable(const CreateNetworkAclQuintupleEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkAclQuintupleEntriesOutcome>>();
    CreateNetworkAclQuintupleEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNetworkAclQuintupleEntriesRequest&,
        CreateNetworkAclQuintupleEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateNetworkInterfaceOutcome VpcClient::CreateNetworkInterface(const CreateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkInterfaceResponse rsp = CreateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkInterfaceOutcome(rsp);
        else
            return CreateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkInterfaceRequest&;
    using Resp = CreateNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateNetworkInterfaceOutcomeCallable VpcClient::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkInterfaceOutcome>>();
    CreateNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateNetworkInterfaceRequest&,
        CreateNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateReserveIpAddressesOutcome VpcClient::CreateReserveIpAddresses(const CreateReserveIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReserveIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReserveIpAddressesResponse rsp = CreateReserveIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReserveIpAddressesOutcome(rsp);
        else
            return CreateReserveIpAddressesOutcome(o.GetError());
    }
    else
    {
        return CreateReserveIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateReserveIpAddressesAsync(const CreateReserveIpAddressesRequest& request, const CreateReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReserveIpAddressesRequest&;
    using Resp = CreateReserveIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReserveIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateReserveIpAddressesOutcomeCallable VpcClient::CreateReserveIpAddressesCallable(const CreateReserveIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReserveIpAddressesOutcome>>();
    CreateReserveIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateReserveIpAddressesRequest&,
        CreateReserveIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateRoutePolicyOutcome VpcClient::CreateRoutePolicy(const CreateRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutePolicyResponse rsp = CreateRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutePolicyOutcome(rsp);
        else
            return CreateRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return CreateRoutePolicyOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRoutePolicyAsync(const CreateRoutePolicyRequest& request, const CreateRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutePolicyRequest&;
    using Resp = CreateRoutePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateRoutePolicyOutcomeCallable VpcClient::CreateRoutePolicyCallable(const CreateRoutePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutePolicyOutcome>>();
    CreateRoutePolicyAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateRoutePolicyRequest&,
        CreateRoutePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateRoutePolicyAssociationsOutcome VpcClient::CreateRoutePolicyAssociations(const CreateRoutePolicyAssociationsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutePolicyAssociations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutePolicyAssociationsResponse rsp = CreateRoutePolicyAssociationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutePolicyAssociationsOutcome(rsp);
        else
            return CreateRoutePolicyAssociationsOutcome(o.GetError());
    }
    else
    {
        return CreateRoutePolicyAssociationsOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRoutePolicyAssociationsAsync(const CreateRoutePolicyAssociationsRequest& request, const CreateRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutePolicyAssociationsRequest&;
    using Resp = CreateRoutePolicyAssociationsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutePolicyAssociations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateRoutePolicyAssociationsOutcomeCallable VpcClient::CreateRoutePolicyAssociationsCallable(const CreateRoutePolicyAssociationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutePolicyAssociationsOutcome>>();
    CreateRoutePolicyAssociationsAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateRoutePolicyAssociationsRequest&,
        CreateRoutePolicyAssociationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateRoutePolicyEntriesOutcome VpcClient::CreateRoutePolicyEntries(const CreateRoutePolicyEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutePolicyEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutePolicyEntriesResponse rsp = CreateRoutePolicyEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutePolicyEntriesOutcome(rsp);
        else
            return CreateRoutePolicyEntriesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutePolicyEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRoutePolicyEntriesAsync(const CreateRoutePolicyEntriesRequest& request, const CreateRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutePolicyEntriesRequest&;
    using Resp = CreateRoutePolicyEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutePolicyEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateRoutePolicyEntriesOutcomeCallable VpcClient::CreateRoutePolicyEntriesCallable(const CreateRoutePolicyEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutePolicyEntriesOutcome>>();
    CreateRoutePolicyEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateRoutePolicyEntriesRequest&,
        CreateRoutePolicyEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateRouteTableOutcome VpcClient::CreateRouteTable(const CreateRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRouteTableResponse rsp = CreateRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRouteTableOutcome(rsp);
        else
            return CreateRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateRouteTableOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRouteTableRequest&;
    using Resp = CreateRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateRouteTableOutcomeCallable VpcClient::CreateRouteTableCallable(const CreateRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRouteTableOutcome>>();
    CreateRouteTableAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateRouteTableRequest&,
        CreateRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateRoutesOutcome VpcClient::CreateRoutes(const CreateRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutesResponse rsp = CreateRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutesOutcome(rsp);
        else
            return CreateRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRoutesAsync(const CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutesRequest&;
    using Resp = CreateRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateRoutesOutcomeCallable VpcClient::CreateRoutesCallable(const CreateRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutesOutcome>>();
    CreateRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateRoutesRequest&,
        CreateRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSecurityGroupOutcome VpcClient::CreateSecurityGroup(const CreateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupResponse rsp = CreateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupOutcome(rsp);
        else
            return CreateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRequest&;
    using Resp = CreateSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSecurityGroupOutcomeCallable VpcClient::CreateSecurityGroupCallable(const CreateSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupOutcome>>();
    CreateSecurityGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSecurityGroupRequest&,
        CreateSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSecurityGroupPoliciesOutcome VpcClient::CreateSecurityGroupPolicies(const CreateSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupPoliciesResponse rsp = CreateSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupPoliciesOutcome(rsp);
        else
            return CreateSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupPoliciesAsync(const CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupPoliciesRequest&;
    using Resp = CreateSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSecurityGroupPoliciesOutcomeCallable VpcClient::CreateSecurityGroupPoliciesCallable(const CreateSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupPoliciesOutcome>>();
    CreateSecurityGroupPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSecurityGroupPoliciesRequest&,
        CreateSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSecurityGroupWithPoliciesOutcome VpcClient::CreateSecurityGroupWithPolicies(const CreateSecurityGroupWithPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupWithPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupWithPoliciesResponse rsp = CreateSecurityGroupWithPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupWithPoliciesOutcome(rsp);
        else
            return CreateSecurityGroupWithPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupWithPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupWithPoliciesAsync(const CreateSecurityGroupWithPoliciesRequest& request, const CreateSecurityGroupWithPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupWithPoliciesRequest&;
    using Resp = CreateSecurityGroupWithPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupWithPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSecurityGroupWithPoliciesOutcomeCallable VpcClient::CreateSecurityGroupWithPoliciesCallable(const CreateSecurityGroupWithPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupWithPoliciesOutcome>>();
    CreateSecurityGroupWithPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSecurityGroupWithPoliciesRequest&,
        CreateSecurityGroupWithPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateServiceTemplateOutcome VpcClient::CreateServiceTemplate(const CreateServiceTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceTemplateResponse rsp = CreateServiceTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceTemplateOutcome(rsp);
        else
            return CreateServiceTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateServiceTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::CreateServiceTemplateAsync(const CreateServiceTemplateRequest& request, const CreateServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceTemplateRequest&;
    using Resp = CreateServiceTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServiceTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateServiceTemplateOutcomeCallable VpcClient::CreateServiceTemplateCallable(const CreateServiceTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceTemplateOutcome>>();
    CreateServiceTemplateAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateServiceTemplateRequest&,
        CreateServiceTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateServiceTemplateGroupOutcome VpcClient::CreateServiceTemplateGroup(const CreateServiceTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceTemplateGroupResponse rsp = CreateServiceTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceTemplateGroupOutcome(rsp);
        else
            return CreateServiceTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateServiceTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateServiceTemplateGroupAsync(const CreateServiceTemplateGroupRequest& request, const CreateServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceTemplateGroupRequest&;
    using Resp = CreateServiceTemplateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServiceTemplateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateServiceTemplateGroupOutcomeCallable VpcClient::CreateServiceTemplateGroupCallable(const CreateServiceTemplateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceTemplateGroupOutcome>>();
    CreateServiceTemplateGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateServiceTemplateGroupRequest&,
        CreateServiceTemplateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSnapshotPoliciesOutcome VpcClient::CreateSnapshotPolicies(const CreateSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotPoliciesResponse rsp = CreateSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotPoliciesOutcome(rsp);
        else
            return CreateSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSnapshotPoliciesAsync(const CreateSnapshotPoliciesRequest& request, const CreateSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotPoliciesRequest&;
    using Resp = CreateSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSnapshotPoliciesOutcomeCallable VpcClient::CreateSnapshotPoliciesCallable(const CreateSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotPoliciesOutcome>>();
    CreateSnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSnapshotPoliciesRequest&,
        CreateSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSubnetOutcome VpcClient::CreateSubnet(const CreateSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubnetResponse rsp = CreateSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubnetOutcome(rsp);
        else
            return CreateSubnetOutcome(o.GetError());
    }
    else
    {
        return CreateSubnetOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubnetRequest&;
    using Resp = CreateSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSubnetOutcomeCallable VpcClient::CreateSubnetCallable(const CreateSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubnetOutcome>>();
    CreateSubnetAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSubnetRequest&,
        CreateSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateSubnetsOutcome VpcClient::CreateSubnets(const CreateSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubnetsResponse rsp = CreateSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubnetsOutcome(rsp);
        else
            return CreateSubnetsOutcome(o.GetError());
    }
    else
    {
        return CreateSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSubnetsAsync(const CreateSubnetsRequest& request, const CreateSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubnetsRequest&;
    using Resp = CreateSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateSubnetsOutcomeCallable VpcClient::CreateSubnetsCallable(const CreateSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubnetsOutcome>>();
    CreateSubnetsAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateSubnetsRequest&,
        CreateSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpcOutcome VpcClient::CreateVpc(const CreateVpcRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcResponse rsp = CreateVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcOutcome(rsp);
        else
            return CreateVpcOutcome(o.GetError());
    }
    else
    {
        return CreateVpcOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcRequest&;
    using Resp = CreateVpcResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpcOutcomeCallable VpcClient::CreateVpcCallable(const CreateVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcOutcome>>();
    CreateVpcAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpcRequest&,
        CreateVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpcEndPointOutcome VpcClient::CreateVpcEndPoint(const CreateVpcEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcEndPointResponse rsp = CreateVpcEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcEndPointOutcome(rsp);
        else
            return CreateVpcEndPointOutcome(o.GetError());
    }
    else
    {
        return CreateVpcEndPointOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpcEndPointAsync(const CreateVpcEndPointRequest& request, const CreateVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcEndPointRequest&;
    using Resp = CreateVpcEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpcEndPointOutcomeCallable VpcClient::CreateVpcEndPointCallable(const CreateVpcEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcEndPointOutcome>>();
    CreateVpcEndPointAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpcEndPointRequest&,
        CreateVpcEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpcEndPointServiceOutcome VpcClient::CreateVpcEndPointService(const CreateVpcEndPointServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcEndPointService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcEndPointServiceResponse rsp = CreateVpcEndPointServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcEndPointServiceOutcome(rsp);
        else
            return CreateVpcEndPointServiceOutcome(o.GetError());
    }
    else
    {
        return CreateVpcEndPointServiceOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpcEndPointServiceAsync(const CreateVpcEndPointServiceRequest& request, const CreateVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcEndPointServiceRequest&;
    using Resp = CreateVpcEndPointServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcEndPointService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpcEndPointServiceOutcomeCallable VpcClient::CreateVpcEndPointServiceCallable(const CreateVpcEndPointServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcEndPointServiceOutcome>>();
    CreateVpcEndPointServiceAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpcEndPointServiceRequest&,
        CreateVpcEndPointServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpcEndPointServiceWhiteListOutcome VpcClient::CreateVpcEndPointServiceWhiteList(const CreateVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcEndPointServiceWhiteListResponse rsp = CreateVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return CreateVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpcEndPointServiceWhiteListAsync(const CreateVpcEndPointServiceWhiteListRequest& request, const CreateVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcEndPointServiceWhiteListRequest&;
    using Resp = CreateVpcEndPointServiceWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcEndPointServiceWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpcEndPointServiceWhiteListOutcomeCallable VpcClient::CreateVpcEndPointServiceWhiteListCallable(const CreateVpcEndPointServiceWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcEndPointServiceWhiteListOutcome>>();
    CreateVpcEndPointServiceWhiteListAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpcEndPointServiceWhiteListRequest&,
        CreateVpcEndPointServiceWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpnConnectionOutcome VpcClient::CreateVpnConnection(const CreateVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpnConnectionResponse rsp = CreateVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpnConnectionOutcome(rsp);
        else
            return CreateVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpnConnectionRequest&;
    using Resp = CreateVpnConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpnConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpnConnectionOutcomeCallable VpcClient::CreateVpnConnectionCallable(const CreateVpnConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpnConnectionOutcome>>();
    CreateVpnConnectionAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpnConnectionRequest&,
        CreateVpnConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpnGatewayOutcome VpcClient::CreateVpnGateway(const CreateVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpnGatewayResponse rsp = CreateVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpnGatewayOutcome(rsp);
        else
            return CreateVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpnGatewayRequest&;
    using Resp = CreateVpnGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpnGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpnGatewayOutcomeCallable VpcClient::CreateVpnGatewayCallable(const CreateVpnGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpnGatewayOutcome>>();
    CreateVpnGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpnGatewayRequest&,
        CreateVpnGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::CreateVpnGatewayRoutesOutcome VpcClient::CreateVpnGatewayRoutes(const CreateVpnGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpnGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpnGatewayRoutesResponse rsp = CreateVpnGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpnGatewayRoutesOutcome(rsp);
        else
            return CreateVpnGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateVpnGatewayRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpnGatewayRoutesAsync(const CreateVpnGatewayRoutesRequest& request, const CreateVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpnGatewayRoutesRequest&;
    using Resp = CreateVpnGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpnGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::CreateVpnGatewayRoutesOutcomeCallable VpcClient::CreateVpnGatewayRoutesCallable(const CreateVpnGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpnGatewayRoutesOutcome>>();
    CreateVpnGatewayRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const CreateVpnGatewayRoutesRequest&,
        CreateVpnGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteAddressTemplateOutcome VpcClient::DeleteAddressTemplate(const DeleteAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateResponse rsp = DeleteAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateOutcome(rsp);
        else
            return DeleteAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAddressTemplateAsync(const DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddressTemplateRequest&;
    using Resp = DeleteAddressTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddressTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteAddressTemplateOutcomeCallable VpcClient::DeleteAddressTemplateCallable(const DeleteAddressTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddressTemplateOutcome>>();
    DeleteAddressTemplateAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteAddressTemplateRequest&,
        DeleteAddressTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteAddressTemplateGroupOutcome VpcClient::DeleteAddressTemplateGroup(const DeleteAddressTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateGroupResponse rsp = DeleteAddressTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateGroupOutcome(rsp);
        else
            return DeleteAddressTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAddressTemplateGroupAsync(const DeleteAddressTemplateGroupRequest& request, const DeleteAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddressTemplateGroupRequest&;
    using Resp = DeleteAddressTemplateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddressTemplateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteAddressTemplateGroupOutcomeCallable VpcClient::DeleteAddressTemplateGroupCallable(const DeleteAddressTemplateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddressTemplateGroupOutcome>>();
    DeleteAddressTemplateGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteAddressTemplateGroupRequest&,
        DeleteAddressTemplateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteAssistantCidrOutcome VpcClient::DeleteAssistantCidr(const DeleteAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAssistantCidrResponse rsp = DeleteAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAssistantCidrOutcome(rsp);
        else
            return DeleteAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return DeleteAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAssistantCidrAsync(const DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAssistantCidrRequest&;
    using Resp = DeleteAssistantCidrResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAssistantCidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteAssistantCidrOutcomeCallable VpcClient::DeleteAssistantCidrCallable(const DeleteAssistantCidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAssistantCidrOutcome>>();
    DeleteAssistantCidrAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteAssistantCidrRequest&,
        DeleteAssistantCidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteBandwidthPackageOutcome VpcClient::DeleteBandwidthPackage(const DeleteBandwidthPackageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBandwidthPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBandwidthPackageResponse rsp = DeleteBandwidthPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBandwidthPackageOutcome(rsp);
        else
            return DeleteBandwidthPackageOutcome(o.GetError());
    }
    else
    {
        return DeleteBandwidthPackageOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBandwidthPackageRequest&;
    using Resp = DeleteBandwidthPackageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBandwidthPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteBandwidthPackageOutcomeCallable VpcClient::DeleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBandwidthPackageOutcome>>();
    DeleteBandwidthPackageAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteBandwidthPackageRequest&,
        DeleteBandwidthPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteCcnOutcome VpcClient::DeleteCcn(const DeleteCcnRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcnResponse rsp = DeleteCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcnOutcome(rsp);
        else
            return DeleteCcnOutcome(o.GetError());
    }
    else
    {
        return DeleteCcnOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteCcnAsync(const DeleteCcnRequest& request, const DeleteCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCcnRequest&;
    using Resp = DeleteCcnResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCcn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteCcnOutcomeCallable VpcClient::DeleteCcnCallable(const DeleteCcnRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCcnOutcome>>();
    DeleteCcnAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteCcnRequest&,
        DeleteCcnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteCustomerGatewayOutcome VpcClient::DeleteCustomerGateway(const DeleteCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomerGatewayResponse rsp = DeleteCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomerGatewayOutcome(rsp);
        else
            return DeleteCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomerGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomerGatewayRequest&;
    using Resp = DeleteCustomerGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomerGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteCustomerGatewayOutcomeCallable VpcClient::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomerGatewayOutcome>>();
    DeleteCustomerGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteCustomerGatewayRequest&,
        DeleteCustomerGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteDirectConnectGatewayOutcome VpcClient::DeleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectGatewayResponse rsp = DeleteDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectGatewayOutcome(rsp);
        else
            return DeleteDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteDirectConnectGatewayAsync(const DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDirectConnectGatewayRequest&;
    using Resp = DeleteDirectConnectGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDirectConnectGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteDirectConnectGatewayOutcomeCallable VpcClient::DeleteDirectConnectGatewayCallable(const DeleteDirectConnectGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDirectConnectGatewayOutcome>>();
    DeleteDirectConnectGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteDirectConnectGatewayRequest&,
        DeleteDirectConnectGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteDirectConnectGatewayCcnRoutesOutcome VpcClient::DeleteDirectConnectGatewayCcnRoutes(const DeleteDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectGatewayCcnRoutesResponse rsp = DeleteDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return DeleteDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteDirectConnectGatewayCcnRoutesAsync(const DeleteDirectConnectGatewayCcnRoutesRequest& request, const DeleteDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDirectConnectGatewayCcnRoutesRequest&;
    using Resp = DeleteDirectConnectGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDirectConnectGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::DeleteDirectConnectGatewayCcnRoutesCallable(const DeleteDirectConnectGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDirectConnectGatewayCcnRoutesOutcome>>();
    DeleteDirectConnectGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteDirectConnectGatewayCcnRoutesRequest&,
        DeleteDirectConnectGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteFlowLogOutcome VpcClient::DeleteFlowLog(const DeleteFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFlowLogResponse rsp = DeleteFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFlowLogOutcome(rsp);
        else
            return DeleteFlowLogOutcome(o.GetError());
    }
    else
    {
        return DeleteFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteFlowLogAsync(const DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFlowLogRequest&;
    using Resp = DeleteFlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteFlowLogOutcomeCallable VpcClient::DeleteFlowLogCallable(const DeleteFlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFlowLogOutcome>>();
    DeleteFlowLogAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteFlowLogRequest&,
        DeleteFlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteHaVipOutcome VpcClient::DeleteHaVip(const DeleteHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHaVipResponse rsp = DeleteHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHaVipOutcome(rsp);
        else
            return DeleteHaVipOutcome(o.GetError());
    }
    else
    {
        return DeleteHaVipOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHaVipRequest&;
    using Resp = DeleteHaVipResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHaVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteHaVipOutcomeCallable VpcClient::DeleteHaVipCallable(const DeleteHaVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHaVipOutcome>>();
    DeleteHaVipAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteHaVipRequest&,
        DeleteHaVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteLocalGatewayOutcome VpcClient::DeleteLocalGateway(const DeleteLocalGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLocalGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLocalGatewayResponse rsp = DeleteLocalGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLocalGatewayOutcome(rsp);
        else
            return DeleteLocalGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteLocalGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteLocalGatewayAsync(const DeleteLocalGatewayRequest& request, const DeleteLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLocalGatewayRequest&;
    using Resp = DeleteLocalGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLocalGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteLocalGatewayOutcomeCallable VpcClient::DeleteLocalGatewayCallable(const DeleteLocalGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLocalGatewayOutcome>>();
    DeleteLocalGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteLocalGatewayRequest&,
        DeleteLocalGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNatGatewayOutcome VpcClient::DeleteNatGateway(const DeleteNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewayResponse rsp = DeleteNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewayOutcome(rsp);
        else
            return DeleteNatGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatGatewayRequest&;
    using Resp = DeleteNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNatGatewayOutcomeCallable VpcClient::DeleteNatGatewayCallable(const DeleteNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatGatewayOutcome>>();
    DeleteNatGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNatGatewayRequest&,
        DeleteNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRule(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&;
    using Resp = DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatGatewayDestinationIpPortTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleCallable(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome>>();
    DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&,
        DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNatGatewaySourceIpTranslationNatRuleOutcome VpcClient::DeleteNatGatewaySourceIpTranslationNatRule(const DeleteNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGatewaySourceIpTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewaySourceIpTranslationNatRuleResponse rsp = DeleteNatGatewaySourceIpTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewaySourceIpTranslationNatRuleOutcome(rsp);
        else
            return DeleteNatGatewaySourceIpTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewaySourceIpTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNatGatewaySourceIpTranslationNatRuleAsync(const DeleteNatGatewaySourceIpTranslationNatRuleRequest& request, const DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatGatewaySourceIpTranslationNatRuleRequest&;
    using Resp = DeleteNatGatewaySourceIpTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatGatewaySourceIpTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable VpcClient::DeleteNatGatewaySourceIpTranslationNatRuleCallable(const DeleteNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatGatewaySourceIpTranslationNatRuleOutcome>>();
    DeleteNatGatewaySourceIpTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNatGatewaySourceIpTranslationNatRuleRequest&,
        DeleteNatGatewaySourceIpTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNetDetectOutcome VpcClient::DeleteNetDetect(const DeleteNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetDetectResponse rsp = DeleteNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetDetectOutcome(rsp);
        else
            return DeleteNetDetectOutcome(o.GetError());
    }
    else
    {
        return DeleteNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetDetectAsync(const DeleteNetDetectRequest& request, const DeleteNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetDetectRequest&;
    using Resp = DeleteNetDetectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNetDetectOutcomeCallable VpcClient::DeleteNetDetectCallable(const DeleteNetDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetDetectOutcome>>();
    DeleteNetDetectAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNetDetectRequest&,
        DeleteNetDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNetworkAclOutcome VpcClient::DeleteNetworkAcl(const DeleteNetworkAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkAclResponse rsp = DeleteNetworkAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkAclOutcome(rsp);
        else
            return DeleteNetworkAclOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkAclOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetworkAclRequest&;
    using Resp = DeleteNetworkAclResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetworkAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNetworkAclOutcomeCallable VpcClient::DeleteNetworkAclCallable(const DeleteNetworkAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetworkAclOutcome>>();
    DeleteNetworkAclAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNetworkAclRequest&,
        DeleteNetworkAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNetworkAclQuintupleEntriesOutcome VpcClient::DeleteNetworkAclQuintupleEntries(const DeleteNetworkAclQuintupleEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkAclQuintupleEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkAclQuintupleEntriesResponse rsp = DeleteNetworkAclQuintupleEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkAclQuintupleEntriesOutcome(rsp);
        else
            return DeleteNetworkAclQuintupleEntriesOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkAclQuintupleEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetworkAclQuintupleEntriesAsync(const DeleteNetworkAclQuintupleEntriesRequest& request, const DeleteNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetworkAclQuintupleEntriesRequest&;
    using Resp = DeleteNetworkAclQuintupleEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetworkAclQuintupleEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNetworkAclQuintupleEntriesOutcomeCallable VpcClient::DeleteNetworkAclQuintupleEntriesCallable(const DeleteNetworkAclQuintupleEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetworkAclQuintupleEntriesOutcome>>();
    DeleteNetworkAclQuintupleEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNetworkAclQuintupleEntriesRequest&,
        DeleteNetworkAclQuintupleEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteNetworkInterfaceOutcome VpcClient::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkInterfaceResponse rsp = DeleteNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkInterfaceOutcome(rsp);
        else
            return DeleteNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetworkInterfaceRequest&;
    using Resp = DeleteNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteNetworkInterfaceOutcomeCallable VpcClient::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetworkInterfaceOutcome>>();
    DeleteNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteNetworkInterfaceRequest&,
        DeleteNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteReserveIpAddressesOutcome VpcClient::DeleteReserveIpAddresses(const DeleteReserveIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReserveIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReserveIpAddressesResponse rsp = DeleteReserveIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReserveIpAddressesOutcome(rsp);
        else
            return DeleteReserveIpAddressesOutcome(o.GetError());
    }
    else
    {
        return DeleteReserveIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteReserveIpAddressesAsync(const DeleteReserveIpAddressesRequest& request, const DeleteReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReserveIpAddressesRequest&;
    using Resp = DeleteReserveIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReserveIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteReserveIpAddressesOutcomeCallable VpcClient::DeleteReserveIpAddressesCallable(const DeleteReserveIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReserveIpAddressesOutcome>>();
    DeleteReserveIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteReserveIpAddressesRequest&,
        DeleteReserveIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteRoutePolicyOutcome VpcClient::DeleteRoutePolicy(const DeleteRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutePolicyResponse rsp = DeleteRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutePolicyOutcome(rsp);
        else
            return DeleteRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutePolicyOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRoutePolicyAsync(const DeleteRoutePolicyRequest& request, const DeleteRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutePolicyRequest&;
    using Resp = DeleteRoutePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteRoutePolicyOutcomeCallable VpcClient::DeleteRoutePolicyCallable(const DeleteRoutePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutePolicyOutcome>>();
    DeleteRoutePolicyAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteRoutePolicyRequest&,
        DeleteRoutePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteRoutePolicyAssociationsOutcome VpcClient::DeleteRoutePolicyAssociations(const DeleteRoutePolicyAssociationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutePolicyAssociations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutePolicyAssociationsResponse rsp = DeleteRoutePolicyAssociationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutePolicyAssociationsOutcome(rsp);
        else
            return DeleteRoutePolicyAssociationsOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutePolicyAssociationsOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRoutePolicyAssociationsAsync(const DeleteRoutePolicyAssociationsRequest& request, const DeleteRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutePolicyAssociationsRequest&;
    using Resp = DeleteRoutePolicyAssociationsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutePolicyAssociations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteRoutePolicyAssociationsOutcomeCallable VpcClient::DeleteRoutePolicyAssociationsCallable(const DeleteRoutePolicyAssociationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutePolicyAssociationsOutcome>>();
    DeleteRoutePolicyAssociationsAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteRoutePolicyAssociationsRequest&,
        DeleteRoutePolicyAssociationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteRoutePolicyEntriesOutcome VpcClient::DeleteRoutePolicyEntries(const DeleteRoutePolicyEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutePolicyEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutePolicyEntriesResponse rsp = DeleteRoutePolicyEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutePolicyEntriesOutcome(rsp);
        else
            return DeleteRoutePolicyEntriesOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutePolicyEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRoutePolicyEntriesAsync(const DeleteRoutePolicyEntriesRequest& request, const DeleteRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutePolicyEntriesRequest&;
    using Resp = DeleteRoutePolicyEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutePolicyEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteRoutePolicyEntriesOutcomeCallable VpcClient::DeleteRoutePolicyEntriesCallable(const DeleteRoutePolicyEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutePolicyEntriesOutcome>>();
    DeleteRoutePolicyEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteRoutePolicyEntriesRequest&,
        DeleteRoutePolicyEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteRouteTableOutcome VpcClient::DeleteRouteTable(const DeleteRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteTableResponse rsp = DeleteRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteTableOutcome(rsp);
        else
            return DeleteRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteTableOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRouteTableRequest&;
    using Resp = DeleteRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteRouteTableOutcomeCallable VpcClient::DeleteRouteTableCallable(const DeleteRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRouteTableOutcome>>();
    DeleteRouteTableAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteRouteTableRequest&,
        DeleteRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteRoutesOutcome VpcClient::DeleteRoutes(const DeleteRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutesResponse rsp = DeleteRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutesOutcome(rsp);
        else
            return DeleteRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRoutesAsync(const DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutesRequest&;
    using Resp = DeleteRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteRoutesOutcomeCallable VpcClient::DeleteRoutesCallable(const DeleteRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutesOutcome>>();
    DeleteRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteRoutesRequest&,
        DeleteRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteSecurityGroupOutcome VpcClient::DeleteSecurityGroup(const DeleteSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupResponse rsp = DeleteSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupOutcome(rsp);
        else
            return DeleteSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupRequest&;
    using Resp = DeleteSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteSecurityGroupOutcomeCallable VpcClient::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupOutcome>>();
    DeleteSecurityGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteSecurityGroupRequest&,
        DeleteSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteSecurityGroupPoliciesOutcome VpcClient::DeleteSecurityGroupPolicies(const DeleteSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupPoliciesResponse rsp = DeleteSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupPoliciesOutcome(rsp);
        else
            return DeleteSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSecurityGroupPoliciesAsync(const DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupPoliciesRequest&;
    using Resp = DeleteSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteSecurityGroupPoliciesOutcomeCallable VpcClient::DeleteSecurityGroupPoliciesCallable(const DeleteSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupPoliciesOutcome>>();
    DeleteSecurityGroupPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteSecurityGroupPoliciesRequest&,
        DeleteSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteServiceTemplateOutcome VpcClient::DeleteServiceTemplate(const DeleteServiceTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceTemplateResponse rsp = DeleteServiceTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceTemplateOutcome(rsp);
        else
            return DeleteServiceTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteServiceTemplateAsync(const DeleteServiceTemplateRequest& request, const DeleteServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceTemplateRequest&;
    using Resp = DeleteServiceTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteServiceTemplateOutcomeCallable VpcClient::DeleteServiceTemplateCallable(const DeleteServiceTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceTemplateOutcome>>();
    DeleteServiceTemplateAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteServiceTemplateRequest&,
        DeleteServiceTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteServiceTemplateGroupOutcome VpcClient::DeleteServiceTemplateGroup(const DeleteServiceTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceTemplateGroupResponse rsp = DeleteServiceTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceTemplateGroupOutcome(rsp);
        else
            return DeleteServiceTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteServiceTemplateGroupAsync(const DeleteServiceTemplateGroupRequest& request, const DeleteServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceTemplateGroupRequest&;
    using Resp = DeleteServiceTemplateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceTemplateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteServiceTemplateGroupOutcomeCallable VpcClient::DeleteServiceTemplateGroupCallable(const DeleteServiceTemplateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceTemplateGroupOutcome>>();
    DeleteServiceTemplateGroupAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteServiceTemplateGroupRequest&,
        DeleteServiceTemplateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteSnapshotPoliciesOutcome VpcClient::DeleteSnapshotPolicies(const DeleteSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotPoliciesResponse rsp = DeleteSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotPoliciesOutcome(rsp);
        else
            return DeleteSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSnapshotPoliciesAsync(const DeleteSnapshotPoliciesRequest& request, const DeleteSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSnapshotPoliciesRequest&;
    using Resp = DeleteSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteSnapshotPoliciesOutcomeCallable VpcClient::DeleteSnapshotPoliciesCallable(const DeleteSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotPoliciesOutcome>>();
    DeleteSnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteSnapshotPoliciesRequest&,
        DeleteSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteSubnetOutcome VpcClient::DeleteSubnet(const DeleteSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubnetResponse rsp = DeleteSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubnetOutcome(rsp);
        else
            return DeleteSubnetOutcome(o.GetError());
    }
    else
    {
        return DeleteSubnetOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSubnetRequest&;
    using Resp = DeleteSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteSubnetOutcomeCallable VpcClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSubnetOutcome>>();
    DeleteSubnetAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteSubnetRequest&,
        DeleteSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteTemplateMemberOutcome VpcClient::DeleteTemplateMember(const DeleteTemplateMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTemplateMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTemplateMemberResponse rsp = DeleteTemplateMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTemplateMemberOutcome(rsp);
        else
            return DeleteTemplateMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteTemplateMemberOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteTemplateMemberAsync(const DeleteTemplateMemberRequest& request, const DeleteTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTemplateMemberRequest&;
    using Resp = DeleteTemplateMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTemplateMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteTemplateMemberOutcomeCallable VpcClient::DeleteTemplateMemberCallable(const DeleteTemplateMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTemplateMemberOutcome>>();
    DeleteTemplateMemberAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteTemplateMemberRequest&,
        DeleteTemplateMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteTrafficPackagesOutcome VpcClient::DeleteTrafficPackages(const DeleteTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrafficPackagesResponse rsp = DeleteTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrafficPackagesOutcome(rsp);
        else
            return DeleteTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DeleteTrafficPackagesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteTrafficPackagesAsync(const DeleteTrafficPackagesRequest& request, const DeleteTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrafficPackagesRequest&;
    using Resp = DeleteTrafficPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrafficPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteTrafficPackagesOutcomeCallable VpcClient::DeleteTrafficPackagesCallable(const DeleteTrafficPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrafficPackagesOutcome>>();
    DeleteTrafficPackagesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteTrafficPackagesRequest&,
        DeleteTrafficPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpcOutcome VpcClient::DeleteVpc(const DeleteVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcResponse rsp = DeleteVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcOutcome(rsp);
        else
            return DeleteVpcOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcRequest&;
    using Resp = DeleteVpcResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpcOutcomeCallable VpcClient::DeleteVpcCallable(const DeleteVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcOutcome>>();
    DeleteVpcAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpcRequest&,
        DeleteVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpcEndPointOutcome VpcClient::DeleteVpcEndPoint(const DeleteVpcEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcEndPointResponse rsp = DeleteVpcEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcEndPointOutcome(rsp);
        else
            return DeleteVpcEndPointOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcEndPointOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpcEndPointAsync(const DeleteVpcEndPointRequest& request, const DeleteVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcEndPointRequest&;
    using Resp = DeleteVpcEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpcEndPointOutcomeCallable VpcClient::DeleteVpcEndPointCallable(const DeleteVpcEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcEndPointOutcome>>();
    DeleteVpcEndPointAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpcEndPointRequest&,
        DeleteVpcEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpcEndPointServiceOutcome VpcClient::DeleteVpcEndPointService(const DeleteVpcEndPointServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcEndPointService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcEndPointServiceResponse rsp = DeleteVpcEndPointServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcEndPointServiceOutcome(rsp);
        else
            return DeleteVpcEndPointServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcEndPointServiceOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpcEndPointServiceAsync(const DeleteVpcEndPointServiceRequest& request, const DeleteVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcEndPointServiceRequest&;
    using Resp = DeleteVpcEndPointServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcEndPointService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpcEndPointServiceOutcomeCallable VpcClient::DeleteVpcEndPointServiceCallable(const DeleteVpcEndPointServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcEndPointServiceOutcome>>();
    DeleteVpcEndPointServiceAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpcEndPointServiceRequest&,
        DeleteVpcEndPointServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpcEndPointServiceWhiteListOutcome VpcClient::DeleteVpcEndPointServiceWhiteList(const DeleteVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcEndPointServiceWhiteListResponse rsp = DeleteVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return DeleteVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpcEndPointServiceWhiteListAsync(const DeleteVpcEndPointServiceWhiteListRequest& request, const DeleteVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcEndPointServiceWhiteListRequest&;
    using Resp = DeleteVpcEndPointServiceWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcEndPointServiceWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpcEndPointServiceWhiteListOutcomeCallable VpcClient::DeleteVpcEndPointServiceWhiteListCallable(const DeleteVpcEndPointServiceWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcEndPointServiceWhiteListOutcome>>();
    DeleteVpcEndPointServiceWhiteListAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpcEndPointServiceWhiteListRequest&,
        DeleteVpcEndPointServiceWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpnConnectionOutcome VpcClient::DeleteVpnConnection(const DeleteVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnConnectionResponse rsp = DeleteVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnConnectionOutcome(rsp);
        else
            return DeleteVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpnConnectionRequest&;
    using Resp = DeleteVpnConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpnConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpnConnectionOutcomeCallable VpcClient::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpnConnectionOutcome>>();
    DeleteVpnConnectionAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpnConnectionRequest&,
        DeleteVpnConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpnGatewayOutcome VpcClient::DeleteVpnGateway(const DeleteVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnGatewayResponse rsp = DeleteVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnGatewayOutcome(rsp);
        else
            return DeleteVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpnGatewayRequest&;
    using Resp = DeleteVpnGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpnGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpnGatewayOutcomeCallable VpcClient::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpnGatewayOutcome>>();
    DeleteVpnGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpnGatewayRequest&,
        DeleteVpnGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DeleteVpnGatewayRoutesOutcome VpcClient::DeleteVpnGatewayRoutes(const DeleteVpnGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnGatewayRoutesResponse rsp = DeleteVpnGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnGatewayRoutesOutcome(rsp);
        else
            return DeleteVpnGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnGatewayRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpnGatewayRoutesAsync(const DeleteVpnGatewayRoutesRequest& request, const DeleteVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpnGatewayRoutesRequest&;
    using Resp = DeleteVpnGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpnGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DeleteVpnGatewayRoutesOutcomeCallable VpcClient::DeleteVpnGatewayRoutesCallable(const DeleteVpnGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpnGatewayRoutesOutcome>>();
    DeleteVpnGatewayRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DeleteVpnGatewayRoutesRequest&,
        DeleteVpnGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAccountAttributesOutcome VpcClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountAttributesResponse rsp = DescribeAccountAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountAttributesOutcome(rsp);
        else
            return DescribeAccountAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountAttributesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountAttributesRequest&;
    using Resp = DescribeAccountAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAccountAttributesOutcomeCallable VpcClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountAttributesOutcome>>();
    DescribeAccountAttributesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAccountAttributesRequest&,
        DescribeAccountAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAddressQuotaOutcome VpcClient::DescribeAddressQuota(const DescribeAddressQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressQuotaResponse rsp = DescribeAddressQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressQuotaOutcome(rsp);
        else
            return DescribeAddressQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressQuotaAsync(const DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressQuotaRequest&;
    using Resp = DescribeAddressQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAddressQuotaOutcomeCallable VpcClient::DescribeAddressQuotaCallable(const DescribeAddressQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressQuotaOutcome>>();
    DescribeAddressQuotaAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAddressQuotaRequest&,
        DescribeAddressQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAddressTemplateGroupsOutcome VpcClient::DescribeAddressTemplateGroups(const DescribeAddressTemplateGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplateGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplateGroupsResponse rsp = DescribeAddressTemplateGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplateGroupsOutcome(rsp);
        else
            return DescribeAddressTemplateGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplateGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressTemplateGroupsAsync(const DescribeAddressTemplateGroupsRequest& request, const DescribeAddressTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressTemplateGroupsRequest&;
    using Resp = DescribeAddressTemplateGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressTemplateGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAddressTemplateGroupsOutcomeCallable VpcClient::DescribeAddressTemplateGroupsCallable(const DescribeAddressTemplateGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressTemplateGroupsOutcome>>();
    DescribeAddressTemplateGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAddressTemplateGroupsRequest&,
        DescribeAddressTemplateGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAddressTemplatesOutcome VpcClient::DescribeAddressTemplates(const DescribeAddressTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplatesResponse rsp = DescribeAddressTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplatesOutcome(rsp);
        else
            return DescribeAddressTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressTemplatesAsync(const DescribeAddressTemplatesRequest& request, const DescribeAddressTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressTemplatesRequest&;
    using Resp = DescribeAddressTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAddressTemplatesOutcomeCallable VpcClient::DescribeAddressTemplatesCallable(const DescribeAddressTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressTemplatesOutcome>>();
    DescribeAddressTemplatesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAddressTemplatesRequest&,
        DescribeAddressTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAddressesOutcome VpcClient::DescribeAddresses(const DescribeAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressesResponse rsp = DescribeAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressesOutcome(rsp);
        else
            return DescribeAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressesRequest&;
    using Resp = DescribeAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAddressesOutcomeCallable VpcClient::DescribeAddressesCallable(const DescribeAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressesOutcome>>();
    DescribeAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAddressesRequest&,
        DescribeAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeAssistantCidrOutcome VpcClient::DescribeAssistantCidr(const DescribeAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssistantCidrResponse rsp = DescribeAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssistantCidrOutcome(rsp);
        else
            return DescribeAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return DescribeAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAssistantCidrAsync(const DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssistantCidrRequest&;
    using Resp = DescribeAssistantCidrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssistantCidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeAssistantCidrOutcomeCallable VpcClient::DescribeAssistantCidrCallable(const DescribeAssistantCidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssistantCidrOutcome>>();
    DescribeAssistantCidrAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeAssistantCidrRequest&,
        DescribeAssistantCidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeBandwidthPackageBillUsageOutcome VpcClient::DescribeBandwidthPackageBillUsage(const DescribeBandwidthPackageBillUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageBillUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageBillUsageResponse rsp = DescribeBandwidthPackageBillUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageBillUsageOutcome(rsp);
        else
            return DescribeBandwidthPackageBillUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageBillUsageOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageBillUsageAsync(const DescribeBandwidthPackageBillUsageRequest& request, const DescribeBandwidthPackageBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBandwidthPackageBillUsageRequest&;
    using Resp = DescribeBandwidthPackageBillUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBandwidthPackageBillUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeBandwidthPackageBillUsageOutcomeCallable VpcClient::DescribeBandwidthPackageBillUsageCallable(const DescribeBandwidthPackageBillUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBandwidthPackageBillUsageOutcome>>();
    DescribeBandwidthPackageBillUsageAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeBandwidthPackageBillUsageRequest&,
        DescribeBandwidthPackageBillUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeBandwidthPackageQuotaOutcome VpcClient::DescribeBandwidthPackageQuota(const DescribeBandwidthPackageQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageQuotaResponse rsp = DescribeBandwidthPackageQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageQuotaOutcome(rsp);
        else
            return DescribeBandwidthPackageQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageQuotaAsync(const DescribeBandwidthPackageQuotaRequest& request, const DescribeBandwidthPackageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBandwidthPackageQuotaRequest&;
    using Resp = DescribeBandwidthPackageQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBandwidthPackageQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeBandwidthPackageQuotaOutcomeCallable VpcClient::DescribeBandwidthPackageQuotaCallable(const DescribeBandwidthPackageQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBandwidthPackageQuotaOutcome>>();
    DescribeBandwidthPackageQuotaAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeBandwidthPackageQuotaRequest&,
        DescribeBandwidthPackageQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeBandwidthPackageResourcesOutcome VpcClient::DescribeBandwidthPackageResources(const DescribeBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageResourcesResponse rsp = DescribeBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageResourcesOutcome(rsp);
        else
            return DescribeBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageResourcesAsync(const DescribeBandwidthPackageResourcesRequest& request, const DescribeBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBandwidthPackageResourcesRequest&;
    using Resp = DescribeBandwidthPackageResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBandwidthPackageResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeBandwidthPackageResourcesOutcomeCallable VpcClient::DescribeBandwidthPackageResourcesCallable(const DescribeBandwidthPackageResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBandwidthPackageResourcesOutcome>>();
    DescribeBandwidthPackageResourcesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeBandwidthPackageResourcesRequest&,
        DescribeBandwidthPackageResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeBandwidthPackagesOutcome VpcClient::DescribeBandwidthPackages(const DescribeBandwidthPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackagesResponse rsp = DescribeBandwidthPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackagesOutcome(rsp);
        else
            return DescribeBandwidthPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackagesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackagesAsync(const DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBandwidthPackagesRequest&;
    using Resp = DescribeBandwidthPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBandwidthPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeBandwidthPackagesOutcomeCallable VpcClient::DescribeBandwidthPackagesCallable(const DescribeBandwidthPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBandwidthPackagesOutcome>>();
    DescribeBandwidthPackagesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeBandwidthPackagesRequest&,
        DescribeBandwidthPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCcnAttachedInstancesOutcome VpcClient::DescribeCcnAttachedInstances(const DescribeCcnAttachedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnAttachedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnAttachedInstancesResponse rsp = DescribeCcnAttachedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnAttachedInstancesOutcome(rsp);
        else
            return DescribeCcnAttachedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnAttachedInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnAttachedInstancesAsync(const DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcnAttachedInstancesRequest&;
    using Resp = DescribeCcnAttachedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcnAttachedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCcnAttachedInstancesOutcomeCallable VpcClient::DescribeCcnAttachedInstancesCallable(const DescribeCcnAttachedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcnAttachedInstancesOutcome>>();
    DescribeCcnAttachedInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCcnAttachedInstancesRequest&,
        DescribeCcnAttachedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCcnRegionBandwidthLimitsOutcome VpcClient::DescribeCcnRegionBandwidthLimits(const DescribeCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnRegionBandwidthLimitsResponse rsp = DescribeCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return DescribeCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnRegionBandwidthLimitsAsync(const DescribeCcnRegionBandwidthLimitsRequest& request, const DescribeCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcnRegionBandwidthLimitsRequest&;
    using Resp = DescribeCcnRegionBandwidthLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcnRegionBandwidthLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCcnRegionBandwidthLimitsOutcomeCallable VpcClient::DescribeCcnRegionBandwidthLimitsCallable(const DescribeCcnRegionBandwidthLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcnRegionBandwidthLimitsOutcome>>();
    DescribeCcnRegionBandwidthLimitsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCcnRegionBandwidthLimitsRequest&,
        DescribeCcnRegionBandwidthLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCcnRoutesOutcome VpcClient::DescribeCcnRoutes(const DescribeCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnRoutesResponse rsp = DescribeCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnRoutesOutcome(rsp);
        else
            return DescribeCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnRoutesAsync(const DescribeCcnRoutesRequest& request, const DescribeCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcnRoutesRequest&;
    using Resp = DescribeCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCcnRoutesOutcomeCallable VpcClient::DescribeCcnRoutesCallable(const DescribeCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcnRoutesOutcome>>();
    DescribeCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCcnRoutesRequest&,
        DescribeCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCcnsOutcome VpcClient::DescribeCcns(const DescribeCcnsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnsResponse rsp = DescribeCcnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnsOutcome(rsp);
        else
            return DescribeCcnsOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnsAsync(const DescribeCcnsRequest& request, const DescribeCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCcnsRequest&;
    using Resp = DescribeCcnsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCcns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCcnsOutcomeCallable VpcClient::DescribeCcnsCallable(const DescribeCcnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCcnsOutcome>>();
    DescribeCcnsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCcnsRequest&,
        DescribeCcnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeClassicLinkInstancesOutcome VpcClient::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicLinkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicLinkInstancesResponse rsp = DescribeClassicLinkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicLinkInstancesOutcome(rsp);
        else
            return DescribeClassicLinkInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicLinkInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicLinkInstancesRequest&;
    using Resp = DescribeClassicLinkInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicLinkInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeClassicLinkInstancesOutcomeCallable VpcClient::DescribeClassicLinkInstancesCallable(const DescribeClassicLinkInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicLinkInstancesOutcome>>();
    DescribeClassicLinkInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeClassicLinkInstancesRequest&,
        DescribeClassicLinkInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCrossBorderComplianceOutcome VpcClient::DescribeCrossBorderCompliance(const DescribeCrossBorderComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBorderCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBorderComplianceResponse rsp = DescribeCrossBorderComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBorderComplianceOutcome(rsp);
        else
            return DescribeCrossBorderComplianceOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBorderComplianceOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCrossBorderComplianceAsync(const DescribeCrossBorderComplianceRequest& request, const DescribeCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossBorderComplianceRequest&;
    using Resp = DescribeCrossBorderComplianceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossBorderCompliance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCrossBorderComplianceOutcomeCallable VpcClient::DescribeCrossBorderComplianceCallable(const DescribeCrossBorderComplianceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossBorderComplianceOutcome>>();
    DescribeCrossBorderComplianceAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCrossBorderComplianceRequest&,
        DescribeCrossBorderComplianceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCustomerGatewayVendorsOutcome VpcClient::DescribeCustomerGatewayVendors(const DescribeCustomerGatewayVendorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerGatewayVendors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerGatewayVendorsResponse rsp = DescribeCustomerGatewayVendorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerGatewayVendorsOutcome(rsp);
        else
            return DescribeCustomerGatewayVendorsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerGatewayVendorsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCustomerGatewayVendorsAsync(const DescribeCustomerGatewayVendorsRequest& request, const DescribeCustomerGatewayVendorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerGatewayVendorsRequest&;
    using Resp = DescribeCustomerGatewayVendorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerGatewayVendors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCustomerGatewayVendorsOutcomeCallable VpcClient::DescribeCustomerGatewayVendorsCallable(const DescribeCustomerGatewayVendorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerGatewayVendorsOutcome>>();
    DescribeCustomerGatewayVendorsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCustomerGatewayVendorsRequest&,
        DescribeCustomerGatewayVendorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeCustomerGatewaysOutcome VpcClient::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerGatewaysResponse rsp = DescribeCustomerGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerGatewaysOutcome(rsp);
        else
            return DescribeCustomerGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerGatewaysRequest&;
    using Resp = DescribeCustomerGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeCustomerGatewaysOutcomeCallable VpcClient::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerGatewaysOutcome>>();
    DescribeCustomerGatewaysAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeCustomerGatewaysRequest&,
        DescribeCustomerGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeDirectConnectGatewayCcnRoutesOutcome VpcClient::DescribeDirectConnectGatewayCcnRoutes(const DescribeDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectGatewayCcnRoutesResponse rsp = DescribeDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return DescribeDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeDirectConnectGatewayCcnRoutesAsync(const DescribeDirectConnectGatewayCcnRoutesRequest& request, const DescribeDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDirectConnectGatewayCcnRoutesRequest&;
    using Resp = DescribeDirectConnectGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnectGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::DescribeDirectConnectGatewayCcnRoutesCallable(const DescribeDirectConnectGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectGatewayCcnRoutesOutcome>>();
    DescribeDirectConnectGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeDirectConnectGatewayCcnRoutesRequest&,
        DescribeDirectConnectGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeDirectConnectGatewaysOutcome VpcClient::DescribeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectGatewaysResponse rsp = DescribeDirectConnectGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectGatewaysOutcome(rsp);
        else
            return DescribeDirectConnectGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeDirectConnectGatewaysAsync(const DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDirectConnectGatewaysRequest&;
    using Resp = DescribeDirectConnectGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnectGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeDirectConnectGatewaysOutcomeCallable VpcClient::DescribeDirectConnectGatewaysCallable(const DescribeDirectConnectGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectGatewaysOutcome>>();
    DescribeDirectConnectGatewaysAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeDirectConnectGatewaysRequest&,
        DescribeDirectConnectGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeFlowLogOutcome VpcClient::DescribeFlowLog(const DescribeFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLogResponse rsp = DescribeFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLogOutcome(rsp);
        else
            return DescribeFlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeFlowLogAsync(const DescribeFlowLogRequest& request, const DescribeFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowLogRequest&;
    using Resp = DescribeFlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeFlowLogOutcomeCallable VpcClient::DescribeFlowLogCallable(const DescribeFlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowLogOutcome>>();
    DescribeFlowLogAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeFlowLogRequest&,
        DescribeFlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeFlowLogsOutcome VpcClient::DescribeFlowLogs(const DescribeFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLogsResponse rsp = DescribeFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLogsOutcome(rsp);
        else
            return DescribeFlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLogsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowLogsRequest&;
    using Resp = DescribeFlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeFlowLogsOutcomeCallable VpcClient::DescribeFlowLogsCallable(const DescribeFlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowLogsOutcome>>();
    DescribeFlowLogsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeFlowLogsRequest&,
        DescribeFlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeGatewayFlowMonitorDetailOutcome VpcClient::DescribeGatewayFlowMonitorDetail(const DescribeGatewayFlowMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayFlowMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayFlowMonitorDetailResponse rsp = DescribeGatewayFlowMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayFlowMonitorDetailOutcome(rsp);
        else
            return DescribeGatewayFlowMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayFlowMonitorDetailOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeGatewayFlowMonitorDetailAsync(const DescribeGatewayFlowMonitorDetailRequest& request, const DescribeGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayFlowMonitorDetailRequest&;
    using Resp = DescribeGatewayFlowMonitorDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayFlowMonitorDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeGatewayFlowMonitorDetailOutcomeCallable VpcClient::DescribeGatewayFlowMonitorDetailCallable(const DescribeGatewayFlowMonitorDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayFlowMonitorDetailOutcome>>();
    DescribeGatewayFlowMonitorDetailAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeGatewayFlowMonitorDetailRequest&,
        DescribeGatewayFlowMonitorDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeGatewayFlowQosOutcome VpcClient::DescribeGatewayFlowQos(const DescribeGatewayFlowQosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayFlowQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayFlowQosResponse rsp = DescribeGatewayFlowQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayFlowQosOutcome(rsp);
        else
            return DescribeGatewayFlowQosOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayFlowQosOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeGatewayFlowQosAsync(const DescribeGatewayFlowQosRequest& request, const DescribeGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayFlowQosRequest&;
    using Resp = DescribeGatewayFlowQosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayFlowQos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeGatewayFlowQosOutcomeCallable VpcClient::DescribeGatewayFlowQosCallable(const DescribeGatewayFlowQosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayFlowQosOutcome>>();
    DescribeGatewayFlowQosAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeGatewayFlowQosRequest&,
        DescribeGatewayFlowQosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeHaVipsOutcome VpcClient::DescribeHaVips(const DescribeHaVipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHaVips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHaVipsResponse rsp = DescribeHaVipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHaVipsOutcome(rsp);
        else
            return DescribeHaVipsOutcome(o.GetError());
    }
    else
    {
        return DescribeHaVipsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHaVipsRequest&;
    using Resp = DescribeHaVipsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHaVips", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeHaVipsOutcomeCallable VpcClient::DescribeHaVipsCallable(const DescribeHaVipsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHaVipsOutcome>>();
    DescribeHaVipsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeHaVipsRequest&,
        DescribeHaVipsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeIPv6AddressesOutcome VpcClient::DescribeIPv6Addresses(const DescribeIPv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPv6AddressesResponse rsp = DescribeIPv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPv6AddressesOutcome(rsp);
        else
            return DescribeIPv6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeIPv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIPv6AddressesAsync(const DescribeIPv6AddressesRequest& request, const DescribeIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPv6AddressesRequest&;
    using Resp = DescribeIPv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeIPv6AddressesOutcomeCallable VpcClient::DescribeIPv6AddressesCallable(const DescribeIPv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPv6AddressesOutcome>>();
    DescribeIPv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeIPv6AddressesRequest&,
        DescribeIPv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeInstanceJumboOutcome VpcClient::DescribeInstanceJumbo(const DescribeInstanceJumboRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceJumbo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceJumboResponse rsp = DescribeInstanceJumboResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceJumboOutcome(rsp);
        else
            return DescribeInstanceJumboOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceJumboOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeInstanceJumboAsync(const DescribeInstanceJumboRequest& request, const DescribeInstanceJumboAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceJumboRequest&;
    using Resp = DescribeInstanceJumboResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceJumbo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeInstanceJumboOutcomeCallable VpcClient::DescribeInstanceJumboCallable(const DescribeInstanceJumboRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceJumboOutcome>>();
    DescribeInstanceJumboAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeInstanceJumboRequest&,
        DescribeInstanceJumboOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeIp6AddressesOutcome VpcClient::DescribeIp6Addresses(const DescribeIp6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIp6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIp6AddressesResponse rsp = DescribeIp6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIp6AddressesOutcome(rsp);
        else
            return DescribeIp6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeIp6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIp6AddressesAsync(const DescribeIp6AddressesRequest& request, const DescribeIp6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIp6AddressesRequest&;
    using Resp = DescribeIp6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIp6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeIp6AddressesOutcomeCallable VpcClient::DescribeIp6AddressesCallable(const DescribeIp6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIp6AddressesOutcome>>();
    DescribeIp6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeIp6AddressesRequest&,
        DescribeIp6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeIpGeolocationDatabaseUrlOutcome VpcClient::DescribeIpGeolocationDatabaseUrl(const DescribeIpGeolocationDatabaseUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpGeolocationDatabaseUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpGeolocationDatabaseUrlResponse rsp = DescribeIpGeolocationDatabaseUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpGeolocationDatabaseUrlOutcome(rsp);
        else
            return DescribeIpGeolocationDatabaseUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeIpGeolocationDatabaseUrlOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIpGeolocationDatabaseUrlAsync(const DescribeIpGeolocationDatabaseUrlRequest& request, const DescribeIpGeolocationDatabaseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpGeolocationDatabaseUrlRequest&;
    using Resp = DescribeIpGeolocationDatabaseUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpGeolocationDatabaseUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeIpGeolocationDatabaseUrlOutcomeCallable VpcClient::DescribeIpGeolocationDatabaseUrlCallable(const DescribeIpGeolocationDatabaseUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpGeolocationDatabaseUrlOutcome>>();
    DescribeIpGeolocationDatabaseUrlAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeIpGeolocationDatabaseUrlRequest&,
        DescribeIpGeolocationDatabaseUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeIpGeolocationInfosOutcome VpcClient::DescribeIpGeolocationInfos(const DescribeIpGeolocationInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpGeolocationInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpGeolocationInfosResponse rsp = DescribeIpGeolocationInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpGeolocationInfosOutcome(rsp);
        else
            return DescribeIpGeolocationInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIpGeolocationInfosOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIpGeolocationInfosAsync(const DescribeIpGeolocationInfosRequest& request, const DescribeIpGeolocationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpGeolocationInfosRequest&;
    using Resp = DescribeIpGeolocationInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpGeolocationInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeIpGeolocationInfosOutcomeCallable VpcClient::DescribeIpGeolocationInfosCallable(const DescribeIpGeolocationInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpGeolocationInfosOutcome>>();
    DescribeIpGeolocationInfosAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeIpGeolocationInfosRequest&,
        DescribeIpGeolocationInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeLocalGatewayOutcome VpcClient::DescribeLocalGateway(const DescribeLocalGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalGatewayResponse rsp = DescribeLocalGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalGatewayOutcome(rsp);
        else
            return DescribeLocalGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeLocalGatewayAsync(const DescribeLocalGatewayRequest& request, const DescribeLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLocalGatewayRequest&;
    using Resp = DescribeLocalGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLocalGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeLocalGatewayOutcomeCallable VpcClient::DescribeLocalGatewayCallable(const DescribeLocalGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLocalGatewayOutcome>>();
    DescribeLocalGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeLocalGatewayRequest&,
        DescribeLocalGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRules(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGatewayDestinationIpPortTranslationNatRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse rsp = DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(rsp);
        else
            return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&;
    using Resp = DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatGatewayDestinationIpPortTranslationNatRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesCallable(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome>>();
    DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&,
        DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNatGatewayDirectConnectGatewayRouteOutcome VpcClient::DescribeNatGatewayDirectConnectGatewayRoute(const DescribeNatGatewayDirectConnectGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGatewayDirectConnectGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewayDirectConnectGatewayRouteResponse rsp = DescribeNatGatewayDirectConnectGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewayDirectConnectGatewayRouteOutcome(rsp);
        else
            return DescribeNatGatewayDirectConnectGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewayDirectConnectGatewayRouteOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewayDirectConnectGatewayRouteAsync(const DescribeNatGatewayDirectConnectGatewayRouteRequest& request, const DescribeNatGatewayDirectConnectGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatGatewayDirectConnectGatewayRouteRequest&;
    using Resp = DescribeNatGatewayDirectConnectGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatGatewayDirectConnectGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNatGatewayDirectConnectGatewayRouteOutcomeCallable VpcClient::DescribeNatGatewayDirectConnectGatewayRouteCallable(const DescribeNatGatewayDirectConnectGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatGatewayDirectConnectGatewayRouteOutcome>>();
    DescribeNatGatewayDirectConnectGatewayRouteAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNatGatewayDirectConnectGatewayRouteRequest&,
        DescribeNatGatewayDirectConnectGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNatGatewaySourceIpTranslationNatRulesOutcome VpcClient::DescribeNatGatewaySourceIpTranslationNatRules(const DescribeNatGatewaySourceIpTranslationNatRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGatewaySourceIpTranslationNatRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewaySourceIpTranslationNatRulesResponse rsp = DescribeNatGatewaySourceIpTranslationNatRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewaySourceIpTranslationNatRulesOutcome(rsp);
        else
            return DescribeNatGatewaySourceIpTranslationNatRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewaySourceIpTranslationNatRulesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewaySourceIpTranslationNatRulesAsync(const DescribeNatGatewaySourceIpTranslationNatRulesRequest& request, const DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatGatewaySourceIpTranslationNatRulesRequest&;
    using Resp = DescribeNatGatewaySourceIpTranslationNatRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatGatewaySourceIpTranslationNatRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable VpcClient::DescribeNatGatewaySourceIpTranslationNatRulesCallable(const DescribeNatGatewaySourceIpTranslationNatRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatGatewaySourceIpTranslationNatRulesOutcome>>();
    DescribeNatGatewaySourceIpTranslationNatRulesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNatGatewaySourceIpTranslationNatRulesRequest&,
        DescribeNatGatewaySourceIpTranslationNatRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNatGatewaysOutcome VpcClient::DescribeNatGateways(const DescribeNatGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewaysResponse rsp = DescribeNatGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewaysOutcome(rsp);
        else
            return DescribeNatGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatGatewaysRequest&;
    using Resp = DescribeNatGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNatGatewaysOutcomeCallable VpcClient::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatGatewaysOutcome>>();
    DescribeNatGatewaysAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNatGatewaysRequest&,
        DescribeNatGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetDetectStatesOutcome VpcClient::DescribeNetDetectStates(const DescribeNetDetectStatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDetectStates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDetectStatesResponse rsp = DescribeNetDetectStatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDetectStatesOutcome(rsp);
        else
            return DescribeNetDetectStatesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDetectStatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetDetectStatesAsync(const DescribeNetDetectStatesRequest& request, const DescribeNetDetectStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetDetectStatesRequest&;
    using Resp = DescribeNetDetectStatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetDetectStates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetDetectStatesOutcomeCallable VpcClient::DescribeNetDetectStatesCallable(const DescribeNetDetectStatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetDetectStatesOutcome>>();
    DescribeNetDetectStatesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetDetectStatesRequest&,
        DescribeNetDetectStatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetDetectsOutcome VpcClient::DescribeNetDetects(const DescribeNetDetectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDetects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDetectsResponse rsp = DescribeNetDetectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDetectsOutcome(rsp);
        else
            return DescribeNetDetectsOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDetectsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetDetectsAsync(const DescribeNetDetectsRequest& request, const DescribeNetDetectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetDetectsRequest&;
    using Resp = DescribeNetDetectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetDetects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetDetectsOutcomeCallable VpcClient::DescribeNetDetectsCallable(const DescribeNetDetectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetDetectsOutcome>>();
    DescribeNetDetectsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetDetectsRequest&,
        DescribeNetDetectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetworkAclQuintupleEntriesOutcome VpcClient::DescribeNetworkAclQuintupleEntries(const DescribeNetworkAclQuintupleEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkAclQuintupleEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkAclQuintupleEntriesResponse rsp = DescribeNetworkAclQuintupleEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkAclQuintupleEntriesOutcome(rsp);
        else
            return DescribeNetworkAclQuintupleEntriesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkAclQuintupleEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkAclQuintupleEntriesAsync(const DescribeNetworkAclQuintupleEntriesRequest& request, const DescribeNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkAclQuintupleEntriesRequest&;
    using Resp = DescribeNetworkAclQuintupleEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkAclQuintupleEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetworkAclQuintupleEntriesOutcomeCallable VpcClient::DescribeNetworkAclQuintupleEntriesCallable(const DescribeNetworkAclQuintupleEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkAclQuintupleEntriesOutcome>>();
    DescribeNetworkAclQuintupleEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetworkAclQuintupleEntriesRequest&,
        DescribeNetworkAclQuintupleEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetworkAclsOutcome VpcClient::DescribeNetworkAcls(const DescribeNetworkAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkAclsResponse rsp = DescribeNetworkAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkAclsOutcome(rsp);
        else
            return DescribeNetworkAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkAclsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkAclsRequest&;
    using Resp = DescribeNetworkAclsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetworkAclsOutcomeCallable VpcClient::DescribeNetworkAclsCallable(const DescribeNetworkAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkAclsOutcome>>();
    DescribeNetworkAclsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetworkAclsRequest&,
        DescribeNetworkAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetworkInterfaceLimitOutcome VpcClient::DescribeNetworkInterfaceLimit(const DescribeNetworkInterfaceLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInterfaceLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInterfaceLimitResponse rsp = DescribeNetworkInterfaceLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInterfaceLimitOutcome(rsp);
        else
            return DescribeNetworkInterfaceLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInterfaceLimitOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkInterfaceLimitAsync(const DescribeNetworkInterfaceLimitRequest& request, const DescribeNetworkInterfaceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkInterfaceLimitRequest&;
    using Resp = DescribeNetworkInterfaceLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkInterfaceLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetworkInterfaceLimitOutcomeCallable VpcClient::DescribeNetworkInterfaceLimitCallable(const DescribeNetworkInterfaceLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkInterfaceLimitOutcome>>();
    DescribeNetworkInterfaceLimitAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetworkInterfaceLimitRequest&,
        DescribeNetworkInterfaceLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeNetworkInterfacesOutcome VpcClient::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInterfacesResponse rsp = DescribeNetworkInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInterfacesOutcome(rsp);
        else
            return DescribeNetworkInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInterfacesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkInterfacesRequest&;
    using Resp = DescribeNetworkInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeNetworkInterfacesOutcomeCallable VpcClient::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkInterfacesOutcome>>();
    DescribeNetworkInterfacesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeNetworkInterfacesRequest&,
        DescribeNetworkInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeReserveIpAddressesOutcome VpcClient::DescribeReserveIpAddresses(const DescribeReserveIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReserveIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReserveIpAddressesResponse rsp = DescribeReserveIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReserveIpAddressesOutcome(rsp);
        else
            return DescribeReserveIpAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeReserveIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeReserveIpAddressesAsync(const DescribeReserveIpAddressesRequest& request, const DescribeReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReserveIpAddressesRequest&;
    using Resp = DescribeReserveIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReserveIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeReserveIpAddressesOutcomeCallable VpcClient::DescribeReserveIpAddressesCallable(const DescribeReserveIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReserveIpAddressesOutcome>>();
    DescribeReserveIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeReserveIpAddressesRequest&,
        DescribeReserveIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeRoutePolicyEntriesOutcome VpcClient::DescribeRoutePolicyEntries(const DescribeRoutePolicyEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoutePolicyEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoutePolicyEntriesResponse rsp = DescribeRoutePolicyEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoutePolicyEntriesOutcome(rsp);
        else
            return DescribeRoutePolicyEntriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRoutePolicyEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeRoutePolicyEntriesAsync(const DescribeRoutePolicyEntriesRequest& request, const DescribeRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoutePolicyEntriesRequest&;
    using Resp = DescribeRoutePolicyEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoutePolicyEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeRoutePolicyEntriesOutcomeCallable VpcClient::DescribeRoutePolicyEntriesCallable(const DescribeRoutePolicyEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoutePolicyEntriesOutcome>>();
    DescribeRoutePolicyEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeRoutePolicyEntriesRequest&,
        DescribeRoutePolicyEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeRouteTablesOutcome VpcClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTablesResponse rsp = DescribeRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTablesOutcome(rsp);
        else
            return DescribeRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTablesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRouteTablesRequest&;
    using Resp = DescribeRouteTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRouteTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeRouteTablesOutcomeCallable VpcClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteTablesOutcome>>();
    DescribeRouteTablesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeRouteTablesRequest&,
        DescribeRouteTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSecurityGroupAssociationStatisticsOutcome VpcClient::DescribeSecurityGroupAssociationStatistics(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupAssociationStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupAssociationStatisticsResponse rsp = DescribeSecurityGroupAssociationStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupAssociationStatisticsOutcome(rsp);
        else
            return DescribeSecurityGroupAssociationStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupAssociationStatisticsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupAssociationStatisticsAsync(const DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupAssociationStatisticsRequest&;
    using Resp = DescribeSecurityGroupAssociationStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupAssociationStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSecurityGroupAssociationStatisticsOutcomeCallable VpcClient::DescribeSecurityGroupAssociationStatisticsCallable(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupAssociationStatisticsOutcome>>();
    DescribeSecurityGroupAssociationStatisticsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSecurityGroupAssociationStatisticsRequest&,
        DescribeSecurityGroupAssociationStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSecurityGroupPoliciesOutcome VpcClient::DescribeSecurityGroupPolicies(const DescribeSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupPoliciesResponse rsp = DescribeSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupPoliciesOutcome(rsp);
        else
            return DescribeSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupPoliciesAsync(const DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupPoliciesRequest&;
    using Resp = DescribeSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSecurityGroupPoliciesOutcomeCallable VpcClient::DescribeSecurityGroupPoliciesCallable(const DescribeSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupPoliciesOutcome>>();
    DescribeSecurityGroupPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSecurityGroupPoliciesRequest&,
        DescribeSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSecurityGroupReferencesOutcome VpcClient::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupReferences");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupReferencesResponse rsp = DescribeSecurityGroupReferencesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupReferencesOutcome(rsp);
        else
            return DescribeSecurityGroupReferencesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupReferencesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupReferencesRequest&;
    using Resp = DescribeSecurityGroupReferencesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupReferences", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSecurityGroupReferencesOutcomeCallable VpcClient::DescribeSecurityGroupReferencesCallable(const DescribeSecurityGroupReferencesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupReferencesOutcome>>();
    DescribeSecurityGroupReferencesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSecurityGroupReferencesRequest&,
        DescribeSecurityGroupReferencesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSecurityGroupsOutcome VpcClient::DescribeSecurityGroups(const DescribeSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupsResponse rsp = DescribeSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupsOutcome(rsp);
        else
            return DescribeSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupsRequest&;
    using Resp = DescribeSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSecurityGroupsOutcomeCallable VpcClient::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupsOutcome>>();
    DescribeSecurityGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSecurityGroupsRequest&,
        DescribeSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeServiceTemplateGroupsOutcome VpcClient::DescribeServiceTemplateGroups(const DescribeServiceTemplateGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceTemplateGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceTemplateGroupsResponse rsp = DescribeServiceTemplateGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceTemplateGroupsOutcome(rsp);
        else
            return DescribeServiceTemplateGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceTemplateGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeServiceTemplateGroupsAsync(const DescribeServiceTemplateGroupsRequest& request, const DescribeServiceTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceTemplateGroupsRequest&;
    using Resp = DescribeServiceTemplateGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceTemplateGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeServiceTemplateGroupsOutcomeCallable VpcClient::DescribeServiceTemplateGroupsCallable(const DescribeServiceTemplateGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceTemplateGroupsOutcome>>();
    DescribeServiceTemplateGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeServiceTemplateGroupsRequest&,
        DescribeServiceTemplateGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeServiceTemplatesOutcome VpcClient::DescribeServiceTemplates(const DescribeServiceTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceTemplatesResponse rsp = DescribeServiceTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceTemplatesOutcome(rsp);
        else
            return DescribeServiceTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceTemplatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeServiceTemplatesAsync(const DescribeServiceTemplatesRequest& request, const DescribeServiceTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceTemplatesRequest&;
    using Resp = DescribeServiceTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeServiceTemplatesOutcomeCallable VpcClient::DescribeServiceTemplatesCallable(const DescribeServiceTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceTemplatesOutcome>>();
    DescribeServiceTemplatesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeServiceTemplatesRequest&,
        DescribeServiceTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSgSnapshotFileContentOutcome VpcClient::DescribeSgSnapshotFileContent(const DescribeSgSnapshotFileContentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSgSnapshotFileContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSgSnapshotFileContentResponse rsp = DescribeSgSnapshotFileContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSgSnapshotFileContentOutcome(rsp);
        else
            return DescribeSgSnapshotFileContentOutcome(o.GetError());
    }
    else
    {
        return DescribeSgSnapshotFileContentOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSgSnapshotFileContentAsync(const DescribeSgSnapshotFileContentRequest& request, const DescribeSgSnapshotFileContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSgSnapshotFileContentRequest&;
    using Resp = DescribeSgSnapshotFileContentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSgSnapshotFileContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSgSnapshotFileContentOutcomeCallable VpcClient::DescribeSgSnapshotFileContentCallable(const DescribeSgSnapshotFileContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSgSnapshotFileContentOutcome>>();
    DescribeSgSnapshotFileContentAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSgSnapshotFileContentRequest&,
        DescribeSgSnapshotFileContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSnapshotAttachedInstancesOutcome VpcClient::DescribeSnapshotAttachedInstances(const DescribeSnapshotAttachedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotAttachedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotAttachedInstancesResponse rsp = DescribeSnapshotAttachedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotAttachedInstancesOutcome(rsp);
        else
            return DescribeSnapshotAttachedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotAttachedInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSnapshotAttachedInstancesAsync(const DescribeSnapshotAttachedInstancesRequest& request, const DescribeSnapshotAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotAttachedInstancesRequest&;
    using Resp = DescribeSnapshotAttachedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotAttachedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSnapshotAttachedInstancesOutcomeCallable VpcClient::DescribeSnapshotAttachedInstancesCallable(const DescribeSnapshotAttachedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotAttachedInstancesOutcome>>();
    DescribeSnapshotAttachedInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSnapshotAttachedInstancesRequest&,
        DescribeSnapshotAttachedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSnapshotFilesOutcome VpcClient::DescribeSnapshotFiles(const DescribeSnapshotFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotFilesResponse rsp = DescribeSnapshotFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotFilesOutcome(rsp);
        else
            return DescribeSnapshotFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotFilesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSnapshotFilesAsync(const DescribeSnapshotFilesRequest& request, const DescribeSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotFilesRequest&;
    using Resp = DescribeSnapshotFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSnapshotFilesOutcomeCallable VpcClient::DescribeSnapshotFilesCallable(const DescribeSnapshotFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotFilesOutcome>>();
    DescribeSnapshotFilesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSnapshotFilesRequest&,
        DescribeSnapshotFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSnapshotPoliciesOutcome VpcClient::DescribeSnapshotPolicies(const DescribeSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotPoliciesResponse rsp = DescribeSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotPoliciesOutcome(rsp);
        else
            return DescribeSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSnapshotPoliciesAsync(const DescribeSnapshotPoliciesRequest& request, const DescribeSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotPoliciesRequest&;
    using Resp = DescribeSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSnapshotPoliciesOutcomeCallable VpcClient::DescribeSnapshotPoliciesCallable(const DescribeSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotPoliciesOutcome>>();
    DescribeSnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSnapshotPoliciesRequest&,
        DescribeSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSubnetResourceDashboardOutcome VpcClient::DescribeSubnetResourceDashboard(const DescribeSubnetResourceDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetResourceDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetResourceDashboardResponse rsp = DescribeSubnetResourceDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetResourceDashboardOutcome(rsp);
        else
            return DescribeSubnetResourceDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetResourceDashboardOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSubnetResourceDashboardAsync(const DescribeSubnetResourceDashboardRequest& request, const DescribeSubnetResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetResourceDashboardRequest&;
    using Resp = DescribeSubnetResourceDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnetResourceDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSubnetResourceDashboardOutcomeCallable VpcClient::DescribeSubnetResourceDashboardCallable(const DescribeSubnetResourceDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetResourceDashboardOutcome>>();
    DescribeSubnetResourceDashboardAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSubnetResourceDashboardRequest&,
        DescribeSubnetResourceDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeSubnetsOutcome VpcClient::DescribeSubnets(const DescribeSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetsResponse rsp = DescribeSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetsOutcome(rsp);
        else
            return DescribeSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetsRequest&;
    using Resp = DescribeSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeSubnetsOutcomeCallable VpcClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetsOutcome>>();
    DescribeSubnetsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeSubnetsRequest&,
        DescribeSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeTaskResultOutcome VpcClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeTaskResultOutcomeCallable VpcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeTrafficPackagesOutcome VpcClient::DescribeTrafficPackages(const DescribeTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficPackagesResponse rsp = DescribeTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficPackagesOutcome(rsp);
        else
            return DescribeTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficPackagesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeTrafficPackagesAsync(const DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrafficPackagesRequest&;
    using Resp = DescribeTrafficPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrafficPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeTrafficPackagesOutcomeCallable VpcClient::DescribeTrafficPackagesCallable(const DescribeTrafficPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrafficPackagesOutcome>>();
    DescribeTrafficPackagesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeTrafficPackagesRequest&,
        DescribeTrafficPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeUsedIpAddressOutcome VpcClient::DescribeUsedIpAddress(const DescribeUsedIpAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsedIpAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsedIpAddressResponse rsp = DescribeUsedIpAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsedIpAddressOutcome(rsp);
        else
            return DescribeUsedIpAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeUsedIpAddressOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeUsedIpAddressAsync(const DescribeUsedIpAddressRequest& request, const DescribeUsedIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsedIpAddressRequest&;
    using Resp = DescribeUsedIpAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsedIpAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeUsedIpAddressOutcomeCallable VpcClient::DescribeUsedIpAddressCallable(const DescribeUsedIpAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsedIpAddressOutcome>>();
    DescribeUsedIpAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeUsedIpAddressRequest&,
        DescribeUsedIpAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcEndPointOutcome VpcClient::DescribeVpcEndPoint(const DescribeVpcEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcEndPointResponse rsp = DescribeVpcEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcEndPointOutcome(rsp);
        else
            return DescribeVpcEndPointOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcEndPointOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcEndPointAsync(const DescribeVpcEndPointRequest& request, const DescribeVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcEndPointRequest&;
    using Resp = DescribeVpcEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcEndPointOutcomeCallable VpcClient::DescribeVpcEndPointCallable(const DescribeVpcEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcEndPointOutcome>>();
    DescribeVpcEndPointAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcEndPointRequest&,
        DescribeVpcEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcEndPointServiceOutcome VpcClient::DescribeVpcEndPointService(const DescribeVpcEndPointServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcEndPointService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcEndPointServiceResponse rsp = DescribeVpcEndPointServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcEndPointServiceOutcome(rsp);
        else
            return DescribeVpcEndPointServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcEndPointServiceOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcEndPointServiceAsync(const DescribeVpcEndPointServiceRequest& request, const DescribeVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcEndPointServiceRequest&;
    using Resp = DescribeVpcEndPointServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcEndPointService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcEndPointServiceOutcomeCallable VpcClient::DescribeVpcEndPointServiceCallable(const DescribeVpcEndPointServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcEndPointServiceOutcome>>();
    DescribeVpcEndPointServiceAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcEndPointServiceRequest&,
        DescribeVpcEndPointServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcEndPointServiceWhiteListOutcome VpcClient::DescribeVpcEndPointServiceWhiteList(const DescribeVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcEndPointServiceWhiteListResponse rsp = DescribeVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return DescribeVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcEndPointServiceWhiteListAsync(const DescribeVpcEndPointServiceWhiteListRequest& request, const DescribeVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcEndPointServiceWhiteListRequest&;
    using Resp = DescribeVpcEndPointServiceWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcEndPointServiceWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcEndPointServiceWhiteListOutcomeCallable VpcClient::DescribeVpcEndPointServiceWhiteListCallable(const DescribeVpcEndPointServiceWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcEndPointServiceWhiteListOutcome>>();
    DescribeVpcEndPointServiceWhiteListAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcEndPointServiceWhiteListRequest&,
        DescribeVpcEndPointServiceWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcInstancesOutcome VpcClient::DescribeVpcInstances(const DescribeVpcInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcInstancesResponse rsp = DescribeVpcInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcInstancesOutcome(rsp);
        else
            return DescribeVpcInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcInstancesAsync(const DescribeVpcInstancesRequest& request, const DescribeVpcInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcInstancesRequest&;
    using Resp = DescribeVpcInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcInstancesOutcomeCallable VpcClient::DescribeVpcInstancesCallable(const DescribeVpcInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcInstancesOutcome>>();
    DescribeVpcInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcInstancesRequest&,
        DescribeVpcInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcIpv6AddressesOutcome VpcClient::DescribeVpcIpv6Addresses(const DescribeVpcIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcIpv6AddressesResponse rsp = DescribeVpcIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcIpv6AddressesOutcome(rsp);
        else
            return DescribeVpcIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcIpv6AddressesAsync(const DescribeVpcIpv6AddressesRequest& request, const DescribeVpcIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcIpv6AddressesRequest&;
    using Resp = DescribeVpcIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcIpv6AddressesOutcomeCallable VpcClient::DescribeVpcIpv6AddressesCallable(const DescribeVpcIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcIpv6AddressesOutcome>>();
    DescribeVpcIpv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcIpv6AddressesRequest&,
        DescribeVpcIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcPrivateIpAddressesOutcome VpcClient::DescribeVpcPrivateIpAddresses(const DescribeVpcPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcPrivateIpAddressesResponse rsp = DescribeVpcPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcPrivateIpAddressesOutcome(rsp);
        else
            return DescribeVpcPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcPrivateIpAddressesAsync(const DescribeVpcPrivateIpAddressesRequest& request, const DescribeVpcPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcPrivateIpAddressesRequest&;
    using Resp = DescribeVpcPrivateIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcPrivateIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcPrivateIpAddressesOutcomeCallable VpcClient::DescribeVpcPrivateIpAddressesCallable(const DescribeVpcPrivateIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcPrivateIpAddressesOutcome>>();
    DescribeVpcPrivateIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcPrivateIpAddressesRequest&,
        DescribeVpcPrivateIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcResourceDashboardOutcome VpcClient::DescribeVpcResourceDashboard(const DescribeVpcResourceDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcResourceDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcResourceDashboardResponse rsp = DescribeVpcResourceDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcResourceDashboardOutcome(rsp);
        else
            return DescribeVpcResourceDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcResourceDashboardOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcResourceDashboardAsync(const DescribeVpcResourceDashboardRequest& request, const DescribeVpcResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcResourceDashboardRequest&;
    using Resp = DescribeVpcResourceDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcResourceDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcResourceDashboardOutcomeCallable VpcClient::DescribeVpcResourceDashboardCallable(const DescribeVpcResourceDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcResourceDashboardOutcome>>();
    DescribeVpcResourceDashboardAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcResourceDashboardRequest&,
        DescribeVpcResourceDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcTaskResultOutcome VpcClient::DescribeVpcTaskResult(const DescribeVpcTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcTaskResultResponse rsp = DescribeVpcTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcTaskResultOutcome(rsp);
        else
            return DescribeVpcTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcTaskResultOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcTaskResultAsync(const DescribeVpcTaskResultRequest& request, const DescribeVpcTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcTaskResultRequest&;
    using Resp = DescribeVpcTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcTaskResultOutcomeCallable VpcClient::DescribeVpcTaskResultCallable(const DescribeVpcTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcTaskResultOutcome>>();
    DescribeVpcTaskResultAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcTaskResultRequest&,
        DescribeVpcTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpcsOutcome VpcClient::DescribeVpcs(const DescribeVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcsResponse rsp = DescribeVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcsOutcome(rsp);
        else
            return DescribeVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcsRequest&;
    using Resp = DescribeVpcsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpcsOutcomeCallable VpcClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcsOutcome>>();
    DescribeVpcsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpcsRequest&,
        DescribeVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpnConnectionsOutcome VpcClient::DescribeVpnConnections(const DescribeVpnConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnConnectionsResponse rsp = DescribeVpnConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnConnectionsOutcome(rsp);
        else
            return DescribeVpnConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnConnectionsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnConnectionsRequest&;
    using Resp = DescribeVpnConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpnConnectionsOutcomeCallable VpcClient::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnConnectionsOutcome>>();
    DescribeVpnConnectionsAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpnConnectionsRequest&,
        DescribeVpnConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpnGatewayCcnRoutesOutcome VpcClient::DescribeVpnGatewayCcnRoutes(const DescribeVpnGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewayCcnRoutesResponse rsp = DescribeVpnGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewayCcnRoutesOutcome(rsp);
        else
            return DescribeVpnGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnGatewayCcnRoutesAsync(const DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnGatewayCcnRoutesRequest&;
    using Resp = DescribeVpnGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpnGatewayCcnRoutesOutcomeCallable VpcClient::DescribeVpnGatewayCcnRoutesCallable(const DescribeVpnGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnGatewayCcnRoutesOutcome>>();
    DescribeVpnGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpnGatewayCcnRoutesRequest&,
        DescribeVpnGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpnGatewayRoutesOutcome VpcClient::DescribeVpnGatewayRoutes(const DescribeVpnGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewayRoutesResponse rsp = DescribeVpnGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewayRoutesOutcome(rsp);
        else
            return DescribeVpnGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewayRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnGatewayRoutesAsync(const DescribeVpnGatewayRoutesRequest& request, const DescribeVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnGatewayRoutesRequest&;
    using Resp = DescribeVpnGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpnGatewayRoutesOutcomeCallable VpcClient::DescribeVpnGatewayRoutesCallable(const DescribeVpnGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnGatewayRoutesOutcome>>();
    DescribeVpnGatewayRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpnGatewayRoutesRequest&,
        DescribeVpnGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DescribeVpnGatewaysOutcome VpcClient::DescribeVpnGateways(const DescribeVpnGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewaysResponse rsp = DescribeVpnGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewaysOutcome(rsp);
        else
            return DescribeVpnGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnGatewaysRequest&;
    using Resp = DescribeVpnGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DescribeVpnGatewaysOutcomeCallable VpcClient::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnGatewaysOutcome>>();
    DescribeVpnGatewaysAsync(
    request,
    [prom](
        const VpcClient*,
        const DescribeVpnGatewaysRequest&,
        DescribeVpnGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DetachCcnInstancesOutcome VpcClient::DetachCcnInstances(const DetachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCcnInstancesResponse rsp = DetachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCcnInstancesOutcome(rsp);
        else
            return DetachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DetachCcnInstancesAsync(const DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachCcnInstancesRequest&;
    using Resp = DetachCcnInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DetachCcnInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DetachCcnInstancesOutcomeCallable VpcClient::DetachCcnInstancesCallable(const DetachCcnInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachCcnInstancesOutcome>>();
    DetachCcnInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DetachCcnInstancesRequest&,
        DetachCcnInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DetachClassicLinkVpcOutcome VpcClient::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DetachClassicLinkVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachClassicLinkVpcResponse rsp = DetachClassicLinkVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachClassicLinkVpcOutcome(rsp);
        else
            return DetachClassicLinkVpcOutcome(o.GetError());
    }
    else
    {
        return DetachClassicLinkVpcOutcome(outcome.GetError());
    }
}

void VpcClient::DetachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachClassicLinkVpcRequest&;
    using Resp = DetachClassicLinkVpcResponse;

    DoRequestAsync<Req, Resp>(
        "DetachClassicLinkVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DetachClassicLinkVpcOutcomeCallable VpcClient::DetachClassicLinkVpcCallable(const DetachClassicLinkVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachClassicLinkVpcOutcome>>();
    DetachClassicLinkVpcAsync(
    request,
    [prom](
        const VpcClient*,
        const DetachClassicLinkVpcRequest&,
        DetachClassicLinkVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DetachNetworkInterfaceOutcome VpcClient::DetachNetworkInterface(const DetachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachNetworkInterfaceResponse rsp = DetachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachNetworkInterfaceOutcome(rsp);
        else
            return DetachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DetachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachNetworkInterfaceRequest&;
    using Resp = DetachNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "DetachNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DetachNetworkInterfaceOutcomeCallable VpcClient::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachNetworkInterfaceOutcome>>();
    DetachNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const DetachNetworkInterfaceRequest&,
        DetachNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DetachSnapshotInstancesOutcome VpcClient::DetachSnapshotInstances(const DetachSnapshotInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachSnapshotInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachSnapshotInstancesResponse rsp = DetachSnapshotInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachSnapshotInstancesOutcome(rsp);
        else
            return DetachSnapshotInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachSnapshotInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DetachSnapshotInstancesAsync(const DetachSnapshotInstancesRequest& request, const DetachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachSnapshotInstancesRequest&;
    using Resp = DetachSnapshotInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DetachSnapshotInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DetachSnapshotInstancesOutcomeCallable VpcClient::DetachSnapshotInstancesCallable(const DetachSnapshotInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachSnapshotInstancesOutcome>>();
    DetachSnapshotInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const DetachSnapshotInstancesRequest&,
        DetachSnapshotInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisableCcnRoutesOutcome VpcClient::DisableCcnRoutes(const DisableCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCcnRoutesResponse rsp = DisableCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCcnRoutesOutcome(rsp);
        else
            return DisableCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DisableCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DisableCcnRoutesAsync(const DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableCcnRoutesRequest&;
    using Resp = DisableCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisableCcnRoutesOutcomeCallable VpcClient::DisableCcnRoutesCallable(const DisableCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableCcnRoutesOutcome>>();
    DisableCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DisableCcnRoutesRequest&,
        DisableCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisableFlowLogsOutcome VpcClient::DisableFlowLogs(const DisableFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DisableFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableFlowLogsResponse rsp = DisableFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableFlowLogsOutcome(rsp);
        else
            return DisableFlowLogsOutcome(o.GetError());
    }
    else
    {
        return DisableFlowLogsOutcome(outcome.GetError());
    }
}

void VpcClient::DisableFlowLogsAsync(const DisableFlowLogsRequest& request, const DisableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableFlowLogsRequest&;
    using Resp = DisableFlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DisableFlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisableFlowLogsOutcomeCallable VpcClient::DisableFlowLogsCallable(const DisableFlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableFlowLogsOutcome>>();
    DisableFlowLogsAsync(
    request,
    [prom](
        const VpcClient*,
        const DisableFlowLogsRequest&,
        DisableFlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisableGatewayFlowMonitorOutcome VpcClient::DisableGatewayFlowMonitor(const DisableGatewayFlowMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DisableGatewayFlowMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableGatewayFlowMonitorResponse rsp = DisableGatewayFlowMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableGatewayFlowMonitorOutcome(rsp);
        else
            return DisableGatewayFlowMonitorOutcome(o.GetError());
    }
    else
    {
        return DisableGatewayFlowMonitorOutcome(outcome.GetError());
    }
}

void VpcClient::DisableGatewayFlowMonitorAsync(const DisableGatewayFlowMonitorRequest& request, const DisableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableGatewayFlowMonitorRequest&;
    using Resp = DisableGatewayFlowMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DisableGatewayFlowMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisableGatewayFlowMonitorOutcomeCallable VpcClient::DisableGatewayFlowMonitorCallable(const DisableGatewayFlowMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableGatewayFlowMonitorOutcome>>();
    DisableGatewayFlowMonitorAsync(
    request,
    [prom](
        const VpcClient*,
        const DisableGatewayFlowMonitorRequest&,
        DisableGatewayFlowMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisableRoutesOutcome VpcClient::DisableRoutes(const DisableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRoutesResponse rsp = DisableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRoutesOutcome(rsp);
        else
            return DisableRoutesOutcome(o.GetError());
    }
    else
    {
        return DisableRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DisableRoutesAsync(const DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableRoutesRequest&;
    using Resp = DisableRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisableRoutesOutcomeCallable VpcClient::DisableRoutesCallable(const DisableRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableRoutesOutcome>>();
    DisableRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const DisableRoutesRequest&,
        DisableRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisableSnapshotPoliciesOutcome VpcClient::DisableSnapshotPolicies(const DisableSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableSnapshotPoliciesResponse rsp = DisableSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableSnapshotPoliciesOutcome(rsp);
        else
            return DisableSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DisableSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DisableSnapshotPoliciesAsync(const DisableSnapshotPoliciesRequest& request, const DisableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableSnapshotPoliciesRequest&;
    using Resp = DisableSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisableSnapshotPoliciesOutcomeCallable VpcClient::DisableSnapshotPoliciesCallable(const DisableSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableSnapshotPoliciesOutcome>>();
    DisableSnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const DisableSnapshotPoliciesRequest&,
        DisableSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateAddressOutcome VpcClient::DisassociateAddress(const DisassociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateAddressResponse rsp = DisassociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateAddressOutcome(rsp);
        else
            return DisassociateAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateAddressOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateAddressRequest&;
    using Resp = DisassociateAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateAddressOutcomeCallable VpcClient::DisassociateAddressCallable(const DisassociateAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateAddressOutcome>>();
    DisassociateAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateAddressRequest&,
        DisassociateAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateDirectConnectGatewayNatGatewayOutcome VpcClient::DisassociateDirectConnectGatewayNatGateway(const DisassociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateDirectConnectGatewayNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateDirectConnectGatewayNatGatewayResponse rsp = DisassociateDirectConnectGatewayNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateDirectConnectGatewayNatGatewayOutcome(rsp);
        else
            return DisassociateDirectConnectGatewayNatGatewayOutcome(o.GetError());
    }
    else
    {
        return DisassociateDirectConnectGatewayNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateDirectConnectGatewayNatGatewayAsync(const DisassociateDirectConnectGatewayNatGatewayRequest& request, const DisassociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateDirectConnectGatewayNatGatewayRequest&;
    using Resp = DisassociateDirectConnectGatewayNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateDirectConnectGatewayNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateDirectConnectGatewayNatGatewayOutcomeCallable VpcClient::DisassociateDirectConnectGatewayNatGatewayCallable(const DisassociateDirectConnectGatewayNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateDirectConnectGatewayNatGatewayOutcome>>();
    DisassociateDirectConnectGatewayNatGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateDirectConnectGatewayNatGatewayRequest&,
        DisassociateDirectConnectGatewayNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateIPv6AddressOutcome VpcClient::DisassociateIPv6Address(const DisassociateIPv6AddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateIPv6Address");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateIPv6AddressResponse rsp = DisassociateIPv6AddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateIPv6AddressOutcome(rsp);
        else
            return DisassociateIPv6AddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateIPv6AddressOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateIPv6AddressAsync(const DisassociateIPv6AddressRequest& request, const DisassociateIPv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateIPv6AddressRequest&;
    using Resp = DisassociateIPv6AddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateIPv6Address", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateIPv6AddressOutcomeCallable VpcClient::DisassociateIPv6AddressCallable(const DisassociateIPv6AddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateIPv6AddressOutcome>>();
    DisassociateIPv6AddressAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateIPv6AddressRequest&,
        DisassociateIPv6AddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateNatGatewayAddressOutcome VpcClient::DisassociateNatGatewayAddress(const DisassociateNatGatewayAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNatGatewayAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNatGatewayAddressResponse rsp = DisassociateNatGatewayAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNatGatewayAddressOutcome(rsp);
        else
            return DisassociateNatGatewayAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateNatGatewayAddressOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNatGatewayAddressAsync(const DisassociateNatGatewayAddressRequest& request, const DisassociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateNatGatewayAddressRequest&;
    using Resp = DisassociateNatGatewayAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateNatGatewayAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateNatGatewayAddressOutcomeCallable VpcClient::DisassociateNatGatewayAddressCallable(const DisassociateNatGatewayAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateNatGatewayAddressOutcome>>();
    DisassociateNatGatewayAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateNatGatewayAddressRequest&,
        DisassociateNatGatewayAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateNetworkAclSubnetsOutcome VpcClient::DisassociateNetworkAclSubnets(const DisassociateNetworkAclSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNetworkAclSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNetworkAclSubnetsResponse rsp = DisassociateNetworkAclSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNetworkAclSubnetsOutcome(rsp);
        else
            return DisassociateNetworkAclSubnetsOutcome(o.GetError());
    }
    else
    {
        return DisassociateNetworkAclSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNetworkAclSubnetsAsync(const DisassociateNetworkAclSubnetsRequest& request, const DisassociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateNetworkAclSubnetsRequest&;
    using Resp = DisassociateNetworkAclSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateNetworkAclSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateNetworkAclSubnetsOutcomeCallable VpcClient::DisassociateNetworkAclSubnetsCallable(const DisassociateNetworkAclSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateNetworkAclSubnetsOutcome>>();
    DisassociateNetworkAclSubnetsAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateNetworkAclSubnetsRequest&,
        DisassociateNetworkAclSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateNetworkInterfaceSecurityGroupsOutcome VpcClient::DisassociateNetworkInterfaceSecurityGroups(const DisassociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNetworkInterfaceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNetworkInterfaceSecurityGroupsResponse rsp = DisassociateNetworkInterfaceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNetworkInterfaceSecurityGroupsOutcome(rsp);
        else
            return DisassociateNetworkInterfaceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateNetworkInterfaceSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNetworkInterfaceSecurityGroupsAsync(const DisassociateNetworkInterfaceSecurityGroupsRequest& request, const DisassociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateNetworkInterfaceSecurityGroupsRequest&;
    using Resp = DisassociateNetworkInterfaceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateNetworkInterfaceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable VpcClient::DisassociateNetworkInterfaceSecurityGroupsCallable(const DisassociateNetworkInterfaceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateNetworkInterfaceSecurityGroupsOutcome>>();
    DisassociateNetworkInterfaceSecurityGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateNetworkInterfaceSecurityGroupsRequest&,
        DisassociateNetworkInterfaceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DisassociateVpcEndPointSecurityGroupsOutcome VpcClient::DisassociateVpcEndPointSecurityGroups(const DisassociateVpcEndPointSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateVpcEndPointSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateVpcEndPointSecurityGroupsResponse rsp = DisassociateVpcEndPointSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateVpcEndPointSecurityGroupsOutcome(rsp);
        else
            return DisassociateVpcEndPointSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateVpcEndPointSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateVpcEndPointSecurityGroupsAsync(const DisassociateVpcEndPointSecurityGroupsRequest& request, const DisassociateVpcEndPointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateVpcEndPointSecurityGroupsRequest&;
    using Resp = DisassociateVpcEndPointSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateVpcEndPointSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DisassociateVpcEndPointSecurityGroupsOutcomeCallable VpcClient::DisassociateVpcEndPointSecurityGroupsCallable(const DisassociateVpcEndPointSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateVpcEndPointSecurityGroupsOutcome>>();
    DisassociateVpcEndPointSecurityGroupsAsync(
    request,
    [prom](
        const VpcClient*,
        const DisassociateVpcEndPointSecurityGroupsRequest&,
        DisassociateVpcEndPointSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::DownloadCustomerGatewayConfigurationOutcome VpcClient::DownloadCustomerGatewayConfiguration(const DownloadCustomerGatewayConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCustomerGatewayConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCustomerGatewayConfigurationResponse rsp = DownloadCustomerGatewayConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCustomerGatewayConfigurationOutcome(rsp);
        else
            return DownloadCustomerGatewayConfigurationOutcome(o.GetError());
    }
    else
    {
        return DownloadCustomerGatewayConfigurationOutcome(outcome.GetError());
    }
}

void VpcClient::DownloadCustomerGatewayConfigurationAsync(const DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadCustomerGatewayConfigurationRequest&;
    using Resp = DownloadCustomerGatewayConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadCustomerGatewayConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::DownloadCustomerGatewayConfigurationOutcomeCallable VpcClient::DownloadCustomerGatewayConfigurationCallable(const DownloadCustomerGatewayConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadCustomerGatewayConfigurationOutcome>>();
    DownloadCustomerGatewayConfigurationAsync(
    request,
    [prom](
        const VpcClient*,
        const DownloadCustomerGatewayConfigurationRequest&,
        DownloadCustomerGatewayConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableCcnRoutesOutcome VpcClient::EnableCcnRoutes(const EnableCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableCcnRoutesResponse rsp = EnableCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableCcnRoutesOutcome(rsp);
        else
            return EnableCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return EnableCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::EnableCcnRoutesAsync(const EnableCcnRoutesRequest& request, const EnableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableCcnRoutesRequest&;
    using Resp = EnableCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "EnableCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableCcnRoutesOutcomeCallable VpcClient::EnableCcnRoutesCallable(const EnableCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableCcnRoutesOutcome>>();
    EnableCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableCcnRoutesRequest&,
        EnableCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableFlowLogsOutcome VpcClient::EnableFlowLogs(const EnableFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "EnableFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableFlowLogsResponse rsp = EnableFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableFlowLogsOutcome(rsp);
        else
            return EnableFlowLogsOutcome(o.GetError());
    }
    else
    {
        return EnableFlowLogsOutcome(outcome.GetError());
    }
}

void VpcClient::EnableFlowLogsAsync(const EnableFlowLogsRequest& request, const EnableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableFlowLogsRequest&;
    using Resp = EnableFlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "EnableFlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableFlowLogsOutcomeCallable VpcClient::EnableFlowLogsCallable(const EnableFlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableFlowLogsOutcome>>();
    EnableFlowLogsAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableFlowLogsRequest&,
        EnableFlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableGatewayFlowMonitorOutcome VpcClient::EnableGatewayFlowMonitor(const EnableGatewayFlowMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "EnableGatewayFlowMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableGatewayFlowMonitorResponse rsp = EnableGatewayFlowMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableGatewayFlowMonitorOutcome(rsp);
        else
            return EnableGatewayFlowMonitorOutcome(o.GetError());
    }
    else
    {
        return EnableGatewayFlowMonitorOutcome(outcome.GetError());
    }
}

void VpcClient::EnableGatewayFlowMonitorAsync(const EnableGatewayFlowMonitorRequest& request, const EnableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableGatewayFlowMonitorRequest&;
    using Resp = EnableGatewayFlowMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "EnableGatewayFlowMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableGatewayFlowMonitorOutcomeCallable VpcClient::EnableGatewayFlowMonitorCallable(const EnableGatewayFlowMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableGatewayFlowMonitorOutcome>>();
    EnableGatewayFlowMonitorAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableGatewayFlowMonitorRequest&,
        EnableGatewayFlowMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableRoutesOutcome VpcClient::EnableRoutes(const EnableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableRoutesResponse rsp = EnableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableRoutesOutcome(rsp);
        else
            return EnableRoutesOutcome(o.GetError());
    }
    else
    {
        return EnableRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::EnableRoutesAsync(const EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableRoutesRequest&;
    using Resp = EnableRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "EnableRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableRoutesOutcomeCallable VpcClient::EnableRoutesCallable(const EnableRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableRoutesOutcome>>();
    EnableRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableRoutesRequest&,
        EnableRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableSnapshotPoliciesOutcome VpcClient::EnableSnapshotPolicies(const EnableSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableSnapshotPoliciesResponse rsp = EnableSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableSnapshotPoliciesOutcome(rsp);
        else
            return EnableSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return EnableSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::EnableSnapshotPoliciesAsync(const EnableSnapshotPoliciesRequest& request, const EnableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableSnapshotPoliciesRequest&;
    using Resp = EnableSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "EnableSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableSnapshotPoliciesOutcomeCallable VpcClient::EnableSnapshotPoliciesCallable(const EnableSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableSnapshotPoliciesOutcome>>();
    EnableSnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableSnapshotPoliciesRequest&,
        EnableSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::EnableVpcEndPointConnectOutcome VpcClient::EnableVpcEndPointConnect(const EnableVpcEndPointConnectRequest &request)
{
    auto outcome = MakeRequest(request, "EnableVpcEndPointConnect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableVpcEndPointConnectResponse rsp = EnableVpcEndPointConnectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableVpcEndPointConnectOutcome(rsp);
        else
            return EnableVpcEndPointConnectOutcome(o.GetError());
    }
    else
    {
        return EnableVpcEndPointConnectOutcome(outcome.GetError());
    }
}

void VpcClient::EnableVpcEndPointConnectAsync(const EnableVpcEndPointConnectRequest& request, const EnableVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableVpcEndPointConnectRequest&;
    using Resp = EnableVpcEndPointConnectResponse;

    DoRequestAsync<Req, Resp>(
        "EnableVpcEndPointConnect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::EnableVpcEndPointConnectOutcomeCallable VpcClient::EnableVpcEndPointConnectCallable(const EnableVpcEndPointConnectRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableVpcEndPointConnectOutcome>>();
    EnableVpcEndPointConnectAsync(
    request,
    [prom](
        const VpcClient*,
        const EnableVpcEndPointConnectRequest&,
        EnableVpcEndPointConnectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::GenerateVpnConnectionDefaultHealthCheckIpOutcome VpcClient::GenerateVpnConnectionDefaultHealthCheckIp(const GenerateVpnConnectionDefaultHealthCheckIpRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateVpnConnectionDefaultHealthCheckIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateVpnConnectionDefaultHealthCheckIpResponse rsp = GenerateVpnConnectionDefaultHealthCheckIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateVpnConnectionDefaultHealthCheckIpOutcome(rsp);
        else
            return GenerateVpnConnectionDefaultHealthCheckIpOutcome(o.GetError());
    }
    else
    {
        return GenerateVpnConnectionDefaultHealthCheckIpOutcome(outcome.GetError());
    }
}

void VpcClient::GenerateVpnConnectionDefaultHealthCheckIpAsync(const GenerateVpnConnectionDefaultHealthCheckIpRequest& request, const GenerateVpnConnectionDefaultHealthCheckIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateVpnConnectionDefaultHealthCheckIpRequest&;
    using Resp = GenerateVpnConnectionDefaultHealthCheckIpResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateVpnConnectionDefaultHealthCheckIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::GenerateVpnConnectionDefaultHealthCheckIpOutcomeCallable VpcClient::GenerateVpnConnectionDefaultHealthCheckIpCallable(const GenerateVpnConnectionDefaultHealthCheckIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateVpnConnectionDefaultHealthCheckIpOutcome>>();
    GenerateVpnConnectionDefaultHealthCheckIpAsync(
    request,
    [prom](
        const VpcClient*,
        const GenerateVpnConnectionDefaultHealthCheckIpRequest&,
        GenerateVpnConnectionDefaultHealthCheckIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::GetCcnRegionBandwidthLimitsOutcome VpcClient::GetCcnRegionBandwidthLimits(const GetCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "GetCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCcnRegionBandwidthLimitsResponse rsp = GetCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return GetCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return GetCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::GetCcnRegionBandwidthLimitsAsync(const GetCcnRegionBandwidthLimitsRequest& request, const GetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCcnRegionBandwidthLimitsRequest&;
    using Resp = GetCcnRegionBandwidthLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "GetCcnRegionBandwidthLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::GetCcnRegionBandwidthLimitsOutcomeCallable VpcClient::GetCcnRegionBandwidthLimitsCallable(const GetCcnRegionBandwidthLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCcnRegionBandwidthLimitsOutcome>>();
    GetCcnRegionBandwidthLimitsAsync(
    request,
    [prom](
        const VpcClient*,
        const GetCcnRegionBandwidthLimitsRequest&,
        GetCcnRegionBandwidthLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::HaVipAssociateAddressIpOutcome VpcClient::HaVipAssociateAddressIp(const HaVipAssociateAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "HaVipAssociateAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HaVipAssociateAddressIpResponse rsp = HaVipAssociateAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HaVipAssociateAddressIpOutcome(rsp);
        else
            return HaVipAssociateAddressIpOutcome(o.GetError());
    }
    else
    {
        return HaVipAssociateAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::HaVipAssociateAddressIpAsync(const HaVipAssociateAddressIpRequest& request, const HaVipAssociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HaVipAssociateAddressIpRequest&;
    using Resp = HaVipAssociateAddressIpResponse;

    DoRequestAsync<Req, Resp>(
        "HaVipAssociateAddressIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::HaVipAssociateAddressIpOutcomeCallable VpcClient::HaVipAssociateAddressIpCallable(const HaVipAssociateAddressIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<HaVipAssociateAddressIpOutcome>>();
    HaVipAssociateAddressIpAsync(
    request,
    [prom](
        const VpcClient*,
        const HaVipAssociateAddressIpRequest&,
        HaVipAssociateAddressIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::HaVipDisassociateAddressIpOutcome VpcClient::HaVipDisassociateAddressIp(const HaVipDisassociateAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "HaVipDisassociateAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HaVipDisassociateAddressIpResponse rsp = HaVipDisassociateAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HaVipDisassociateAddressIpOutcome(rsp);
        else
            return HaVipDisassociateAddressIpOutcome(o.GetError());
    }
    else
    {
        return HaVipDisassociateAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::HaVipDisassociateAddressIpAsync(const HaVipDisassociateAddressIpRequest& request, const HaVipDisassociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HaVipDisassociateAddressIpRequest&;
    using Resp = HaVipDisassociateAddressIpResponse;

    DoRequestAsync<Req, Resp>(
        "HaVipDisassociateAddressIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::HaVipDisassociateAddressIpOutcomeCallable VpcClient::HaVipDisassociateAddressIpCallable(const HaVipDisassociateAddressIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<HaVipDisassociateAddressIpOutcome>>();
    HaVipDisassociateAddressIpAsync(
    request,
    [prom](
        const VpcClient*,
        const HaVipDisassociateAddressIpRequest&,
        HaVipDisassociateAddressIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquirePriceCreateDirectConnectGatewayOutcome VpcClient::InquirePriceCreateDirectConnectGateway(const InquirePriceCreateDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDirectConnectGatewayResponse rsp = InquirePriceCreateDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDirectConnectGatewayOutcome(rsp);
        else
            return InquirePriceCreateDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::InquirePriceCreateDirectConnectGatewayAsync(const InquirePriceCreateDirectConnectGatewayRequest& request, const InquirePriceCreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateDirectConnectGatewayRequest&;
    using Resp = InquirePriceCreateDirectConnectGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateDirectConnectGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquirePriceCreateDirectConnectGatewayOutcomeCallable VpcClient::InquirePriceCreateDirectConnectGatewayCallable(const InquirePriceCreateDirectConnectGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateDirectConnectGatewayOutcome>>();
    InquirePriceCreateDirectConnectGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const InquirePriceCreateDirectConnectGatewayRequest&,
        InquirePriceCreateDirectConnectGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquiryPriceAllocateAddressesOutcome VpcClient::InquiryPriceAllocateAddresses(const InquiryPriceAllocateAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceAllocateAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceAllocateAddressesResponse rsp = InquiryPriceAllocateAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceAllocateAddressesOutcome(rsp);
        else
            return InquiryPriceAllocateAddressesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceAllocateAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceAllocateAddressesAsync(const InquiryPriceAllocateAddressesRequest& request, const InquiryPriceAllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceAllocateAddressesRequest&;
    using Resp = InquiryPriceAllocateAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceAllocateAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquiryPriceAllocateAddressesOutcomeCallable VpcClient::InquiryPriceAllocateAddressesCallable(const InquiryPriceAllocateAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceAllocateAddressesOutcome>>();
    InquiryPriceAllocateAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const InquiryPriceAllocateAddressesRequest&,
        InquiryPriceAllocateAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquiryPriceModifyAddressesBandwidthOutcome VpcClient::InquiryPriceModifyAddressesBandwidth(const InquiryPriceModifyAddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceModifyAddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceModifyAddressesBandwidthResponse rsp = InquiryPriceModifyAddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceModifyAddressesBandwidthOutcome(rsp);
        else
            return InquiryPriceModifyAddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceModifyAddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceModifyAddressesBandwidthAsync(const InquiryPriceModifyAddressesBandwidthRequest& request, const InquiryPriceModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceModifyAddressesBandwidthRequest&;
    using Resp = InquiryPriceModifyAddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceModifyAddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquiryPriceModifyAddressesBandwidthOutcomeCallable VpcClient::InquiryPriceModifyAddressesBandwidthCallable(const InquiryPriceModifyAddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceModifyAddressesBandwidthOutcome>>();
    InquiryPriceModifyAddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const InquiryPriceModifyAddressesBandwidthRequest&,
        InquiryPriceModifyAddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquiryPriceRenewAddressesOutcome VpcClient::InquiryPriceRenewAddresses(const InquiryPriceRenewAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewAddressesResponse rsp = InquiryPriceRenewAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewAddressesOutcome(rsp);
        else
            return InquiryPriceRenewAddressesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceRenewAddressesAsync(const InquiryPriceRenewAddressesRequest& request, const InquiryPriceRenewAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRenewAddressesRequest&;
    using Resp = InquiryPriceRenewAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquiryPriceRenewAddressesOutcomeCallable VpcClient::InquiryPriceRenewAddressesCallable(const InquiryPriceRenewAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewAddressesOutcome>>();
    InquiryPriceRenewAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const InquiryPriceRenewAddressesRequest&,
        InquiryPriceRenewAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquiryPriceRenewVpnGatewayOutcome VpcClient::InquiryPriceRenewVpnGateway(const InquiryPriceRenewVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewVpnGatewayResponse rsp = InquiryPriceRenewVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewVpnGatewayOutcome(rsp);
        else
            return InquiryPriceRenewVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceRenewVpnGatewayAsync(const InquiryPriceRenewVpnGatewayRequest& request, const InquiryPriceRenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRenewVpnGatewayRequest&;
    using Resp = InquiryPriceRenewVpnGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewVpnGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquiryPriceRenewVpnGatewayOutcomeCallable VpcClient::InquiryPriceRenewVpnGatewayCallable(const InquiryPriceRenewVpnGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewVpnGatewayOutcome>>();
    InquiryPriceRenewVpnGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const InquiryPriceRenewVpnGatewayRequest&,
        InquiryPriceRenewVpnGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidth(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResetVpnGatewayInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse rsp = InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(rsp);
        else
            return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request, const InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&;
    using Resp = InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResetVpnGatewayInternetMaxBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthCallable(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome>>();
    InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&,
        InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::MigrateNetworkInterfaceOutcome VpcClient::MigrateNetworkInterface(const MigrateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateNetworkInterfaceResponse rsp = MigrateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateNetworkInterfaceOutcome(rsp);
        else
            return MigrateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return MigrateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::MigrateNetworkInterfaceAsync(const MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateNetworkInterfaceRequest&;
    using Resp = MigrateNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::MigrateNetworkInterfaceOutcomeCallable VpcClient::MigrateNetworkInterfaceCallable(const MigrateNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateNetworkInterfaceOutcome>>();
    MigrateNetworkInterfaceAsync(
    request,
    [prom](
        const VpcClient*,
        const MigrateNetworkInterfaceRequest&,
        MigrateNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::MigratePrivateIpAddressOutcome VpcClient::MigratePrivateIpAddress(const MigratePrivateIpAddressRequest &request)
{
    auto outcome = MakeRequest(request, "MigratePrivateIpAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigratePrivateIpAddressResponse rsp = MigratePrivateIpAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigratePrivateIpAddressOutcome(rsp);
        else
            return MigratePrivateIpAddressOutcome(o.GetError());
    }
    else
    {
        return MigratePrivateIpAddressOutcome(outcome.GetError());
    }
}

void VpcClient::MigratePrivateIpAddressAsync(const MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigratePrivateIpAddressRequest&;
    using Resp = MigratePrivateIpAddressResponse;

    DoRequestAsync<Req, Resp>(
        "MigratePrivateIpAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::MigratePrivateIpAddressOutcomeCallable VpcClient::MigratePrivateIpAddressCallable(const MigratePrivateIpAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigratePrivateIpAddressOutcome>>();
    MigratePrivateIpAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const MigratePrivateIpAddressRequest&,
        MigratePrivateIpAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressAttributeOutcome VpcClient::ModifyAddressAttribute(const ModifyAddressAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressAttributeResponse rsp = ModifyAddressAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressAttributeOutcome(rsp);
        else
            return ModifyAddressAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressAttributeAsync(const ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressAttributeRequest&;
    using Resp = ModifyAddressAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressAttributeOutcomeCallable VpcClient::ModifyAddressAttributeCallable(const ModifyAddressAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressAttributeOutcome>>();
    ModifyAddressAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressAttributeRequest&,
        ModifyAddressAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressInternetChargeTypeOutcome VpcClient::ModifyAddressInternetChargeType(const ModifyAddressInternetChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressInternetChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressInternetChargeTypeResponse rsp = ModifyAddressInternetChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressInternetChargeTypeOutcome(rsp);
        else
            return ModifyAddressInternetChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressInternetChargeTypeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressInternetChargeTypeAsync(const ModifyAddressInternetChargeTypeRequest& request, const ModifyAddressInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressInternetChargeTypeRequest&;
    using Resp = ModifyAddressInternetChargeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressInternetChargeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressInternetChargeTypeOutcomeCallable VpcClient::ModifyAddressInternetChargeTypeCallable(const ModifyAddressInternetChargeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressInternetChargeTypeOutcome>>();
    ModifyAddressInternetChargeTypeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressInternetChargeTypeRequest&,
        ModifyAddressInternetChargeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressTemplateAttributeOutcome VpcClient::ModifyAddressTemplateAttribute(const ModifyAddressTemplateAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplateAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateAttributeResponse rsp = ModifyAddressTemplateAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateAttributeOutcome(rsp);
        else
            return ModifyAddressTemplateAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressTemplateAttributeAsync(const ModifyAddressTemplateAttributeRequest& request, const ModifyAddressTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressTemplateAttributeRequest&;
    using Resp = ModifyAddressTemplateAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressTemplateAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressTemplateAttributeOutcomeCallable VpcClient::ModifyAddressTemplateAttributeCallable(const ModifyAddressTemplateAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressTemplateAttributeOutcome>>();
    ModifyAddressTemplateAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressTemplateAttributeRequest&,
        ModifyAddressTemplateAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressTemplateGroupAttributeOutcome VpcClient::ModifyAddressTemplateGroupAttribute(const ModifyAddressTemplateGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplateGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateGroupAttributeResponse rsp = ModifyAddressTemplateGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateGroupAttributeOutcome(rsp);
        else
            return ModifyAddressTemplateGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressTemplateGroupAttributeAsync(const ModifyAddressTemplateGroupAttributeRequest& request, const ModifyAddressTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressTemplateGroupAttributeRequest&;
    using Resp = ModifyAddressTemplateGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressTemplateGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressTemplateGroupAttributeOutcomeCallable VpcClient::ModifyAddressTemplateGroupAttributeCallable(const ModifyAddressTemplateGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressTemplateGroupAttributeOutcome>>();
    ModifyAddressTemplateGroupAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressTemplateGroupAttributeRequest&,
        ModifyAddressTemplateGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressesBandwidthOutcome VpcClient::ModifyAddressesBandwidth(const ModifyAddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressesBandwidthResponse rsp = ModifyAddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressesBandwidthOutcome(rsp);
        else
            return ModifyAddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressesBandwidthAsync(const ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressesBandwidthRequest&;
    using Resp = ModifyAddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressesBandwidthOutcomeCallable VpcClient::ModifyAddressesBandwidthCallable(const ModifyAddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressesBandwidthOutcome>>();
    ModifyAddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressesBandwidthRequest&,
        ModifyAddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAddressesRenewFlagOutcome VpcClient::ModifyAddressesRenewFlag(const ModifyAddressesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressesRenewFlagResponse rsp = ModifyAddressesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressesRenewFlagOutcome(rsp);
        else
            return ModifyAddressesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressesRenewFlagOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressesRenewFlagAsync(const ModifyAddressesRenewFlagRequest& request, const ModifyAddressesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressesRenewFlagRequest&;
    using Resp = ModifyAddressesRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressesRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAddressesRenewFlagOutcomeCallable VpcClient::ModifyAddressesRenewFlagCallable(const ModifyAddressesRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressesRenewFlagOutcome>>();
    ModifyAddressesRenewFlagAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAddressesRenewFlagRequest&,
        ModifyAddressesRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyAssistantCidrOutcome VpcClient::ModifyAssistantCidr(const ModifyAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssistantCidrResponse rsp = ModifyAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssistantCidrOutcome(rsp);
        else
            return ModifyAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return ModifyAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAssistantCidrAsync(const ModifyAssistantCidrRequest& request, const ModifyAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssistantCidrRequest&;
    using Resp = ModifyAssistantCidrResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssistantCidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyAssistantCidrOutcomeCallable VpcClient::ModifyAssistantCidrCallable(const ModifyAssistantCidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssistantCidrOutcome>>();
    ModifyAssistantCidrAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyAssistantCidrRequest&,
        ModifyAssistantCidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyBandwidthPackageAttributeOutcome VpcClient::ModifyBandwidthPackageAttribute(const ModifyBandwidthPackageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBandwidthPackageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBandwidthPackageAttributeResponse rsp = ModifyBandwidthPackageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBandwidthPackageAttributeOutcome(rsp);
        else
            return ModifyBandwidthPackageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBandwidthPackageAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyBandwidthPackageAttributeAsync(const ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBandwidthPackageAttributeRequest&;
    using Resp = ModifyBandwidthPackageAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBandwidthPackageAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyBandwidthPackageAttributeOutcomeCallable VpcClient::ModifyBandwidthPackageAttributeCallable(const ModifyBandwidthPackageAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBandwidthPackageAttributeOutcome>>();
    ModifyBandwidthPackageAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyBandwidthPackageAttributeRequest&,
        ModifyBandwidthPackageAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyBandwidthPackageBandwidthOutcome VpcClient::ModifyBandwidthPackageBandwidth(const ModifyBandwidthPackageBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBandwidthPackageBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBandwidthPackageBandwidthResponse rsp = ModifyBandwidthPackageBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBandwidthPackageBandwidthOutcome(rsp);
        else
            return ModifyBandwidthPackageBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyBandwidthPackageBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyBandwidthPackageBandwidthAsync(const ModifyBandwidthPackageBandwidthRequest& request, const ModifyBandwidthPackageBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBandwidthPackageBandwidthRequest&;
    using Resp = ModifyBandwidthPackageBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBandwidthPackageBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyBandwidthPackageBandwidthOutcomeCallable VpcClient::ModifyBandwidthPackageBandwidthCallable(const ModifyBandwidthPackageBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBandwidthPackageBandwidthOutcome>>();
    ModifyBandwidthPackageBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyBandwidthPackageBandwidthRequest&,
        ModifyBandwidthPackageBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyCcnAttachedInstancesAttributeOutcome VpcClient::ModifyCcnAttachedInstancesAttribute(const ModifyCcnAttachedInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcnAttachedInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcnAttachedInstancesAttributeResponse rsp = ModifyCcnAttachedInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcnAttachedInstancesAttributeOutcome(rsp);
        else
            return ModifyCcnAttachedInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCcnAttachedInstancesAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCcnAttachedInstancesAttributeAsync(const ModifyCcnAttachedInstancesAttributeRequest& request, const ModifyCcnAttachedInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCcnAttachedInstancesAttributeRequest&;
    using Resp = ModifyCcnAttachedInstancesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCcnAttachedInstancesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyCcnAttachedInstancesAttributeOutcomeCallable VpcClient::ModifyCcnAttachedInstancesAttributeCallable(const ModifyCcnAttachedInstancesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCcnAttachedInstancesAttributeOutcome>>();
    ModifyCcnAttachedInstancesAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyCcnAttachedInstancesAttributeRequest&,
        ModifyCcnAttachedInstancesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyCcnAttributeOutcome VpcClient::ModifyCcnAttribute(const ModifyCcnAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcnAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcnAttributeResponse rsp = ModifyCcnAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcnAttributeOutcome(rsp);
        else
            return ModifyCcnAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCcnAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCcnAttributeAsync(const ModifyCcnAttributeRequest& request, const ModifyCcnAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCcnAttributeRequest&;
    using Resp = ModifyCcnAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCcnAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyCcnAttributeOutcomeCallable VpcClient::ModifyCcnAttributeCallable(const ModifyCcnAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCcnAttributeOutcome>>();
    ModifyCcnAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyCcnAttributeRequest&,
        ModifyCcnAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyCcnRegionBandwidthLimitsTypeOutcome VpcClient::ModifyCcnRegionBandwidthLimitsType(const ModifyCcnRegionBandwidthLimitsTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcnRegionBandwidthLimitsType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcnRegionBandwidthLimitsTypeResponse rsp = ModifyCcnRegionBandwidthLimitsTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcnRegionBandwidthLimitsTypeOutcome(rsp);
        else
            return ModifyCcnRegionBandwidthLimitsTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyCcnRegionBandwidthLimitsTypeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCcnRegionBandwidthLimitsTypeAsync(const ModifyCcnRegionBandwidthLimitsTypeRequest& request, const ModifyCcnRegionBandwidthLimitsTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCcnRegionBandwidthLimitsTypeRequest&;
    using Resp = ModifyCcnRegionBandwidthLimitsTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCcnRegionBandwidthLimitsType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable VpcClient::ModifyCcnRegionBandwidthLimitsTypeCallable(const ModifyCcnRegionBandwidthLimitsTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCcnRegionBandwidthLimitsTypeOutcome>>();
    ModifyCcnRegionBandwidthLimitsTypeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyCcnRegionBandwidthLimitsTypeRequest&,
        ModifyCcnRegionBandwidthLimitsTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyCustomerGatewayAttributeOutcome VpcClient::ModifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomerGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomerGatewayAttributeResponse rsp = ModifyCustomerGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomerGatewayAttributeOutcome(rsp);
        else
            return ModifyCustomerGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomerGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomerGatewayAttributeRequest&;
    using Resp = ModifyCustomerGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomerGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyCustomerGatewayAttributeOutcomeCallable VpcClient::ModifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomerGatewayAttributeOutcome>>();
    ModifyCustomerGatewayAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyCustomerGatewayAttributeRequest&,
        ModifyCustomerGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyDirectConnectGatewayAttributeOutcome VpcClient::ModifyDirectConnectGatewayAttribute(const ModifyDirectConnectGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDirectConnectGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDirectConnectGatewayAttributeResponse rsp = ModifyDirectConnectGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDirectConnectGatewayAttributeOutcome(rsp);
        else
            return ModifyDirectConnectGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDirectConnectGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyDirectConnectGatewayAttributeAsync(const ModifyDirectConnectGatewayAttributeRequest& request, const ModifyDirectConnectGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDirectConnectGatewayAttributeRequest&;
    using Resp = ModifyDirectConnectGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDirectConnectGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyDirectConnectGatewayAttributeOutcomeCallable VpcClient::ModifyDirectConnectGatewayAttributeCallable(const ModifyDirectConnectGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDirectConnectGatewayAttributeOutcome>>();
    ModifyDirectConnectGatewayAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyDirectConnectGatewayAttributeRequest&,
        ModifyDirectConnectGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyFlowLogAttributeOutcome VpcClient::ModifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowLogAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowLogAttributeResponse rsp = ModifyFlowLogAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowLogAttributeOutcome(rsp);
        else
            return ModifyFlowLogAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowLogAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyFlowLogAttributeAsync(const ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlowLogAttributeRequest&;
    using Resp = ModifyFlowLogAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlowLogAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyFlowLogAttributeOutcomeCallable VpcClient::ModifyFlowLogAttributeCallable(const ModifyFlowLogAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlowLogAttributeOutcome>>();
    ModifyFlowLogAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyFlowLogAttributeRequest&,
        ModifyFlowLogAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyGatewayFlowQosOutcome VpcClient::ModifyGatewayFlowQos(const ModifyGatewayFlowQosRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayFlowQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayFlowQosResponse rsp = ModifyGatewayFlowQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayFlowQosOutcome(rsp);
        else
            return ModifyGatewayFlowQosOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayFlowQosOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyGatewayFlowQosAsync(const ModifyGatewayFlowQosRequest& request, const ModifyGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGatewayFlowQosRequest&;
    using Resp = ModifyGatewayFlowQosResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGatewayFlowQos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyGatewayFlowQosOutcomeCallable VpcClient::ModifyGatewayFlowQosCallable(const ModifyGatewayFlowQosRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGatewayFlowQosOutcome>>();
    ModifyGatewayFlowQosAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyGatewayFlowQosRequest&,
        ModifyGatewayFlowQosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyHaVipAttributeOutcome VpcClient::ModifyHaVipAttribute(const ModifyHaVipAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHaVipAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHaVipAttributeResponse rsp = ModifyHaVipAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHaVipAttributeOutcome(rsp);
        else
            return ModifyHaVipAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHaVipAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHaVipAttributeRequest&;
    using Resp = ModifyHaVipAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHaVipAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyHaVipAttributeOutcomeCallable VpcClient::ModifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHaVipAttributeOutcome>>();
    ModifyHaVipAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyHaVipAttributeRequest&,
        ModifyHaVipAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyIPv6AddressesAttributesOutcome VpcClient::ModifyIPv6AddressesAttributes(const ModifyIPv6AddressesAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIPv6AddressesAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIPv6AddressesAttributesResponse rsp = ModifyIPv6AddressesAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIPv6AddressesAttributesOutcome(rsp);
        else
            return ModifyIPv6AddressesAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyIPv6AddressesAttributesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIPv6AddressesAttributesAsync(const ModifyIPv6AddressesAttributesRequest& request, const ModifyIPv6AddressesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIPv6AddressesAttributesRequest&;
    using Resp = ModifyIPv6AddressesAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIPv6AddressesAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyIPv6AddressesAttributesOutcomeCallable VpcClient::ModifyIPv6AddressesAttributesCallable(const ModifyIPv6AddressesAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIPv6AddressesAttributesOutcome>>();
    ModifyIPv6AddressesAttributesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyIPv6AddressesAttributesRequest&,
        ModifyIPv6AddressesAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyIPv6AddressesBandwidthOutcome VpcClient::ModifyIPv6AddressesBandwidth(const ModifyIPv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIPv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIPv6AddressesBandwidthResponse rsp = ModifyIPv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIPv6AddressesBandwidthOutcome(rsp);
        else
            return ModifyIPv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyIPv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIPv6AddressesBandwidthAsync(const ModifyIPv6AddressesBandwidthRequest& request, const ModifyIPv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIPv6AddressesBandwidthRequest&;
    using Resp = ModifyIPv6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIPv6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyIPv6AddressesBandwidthOutcomeCallable VpcClient::ModifyIPv6AddressesBandwidthCallable(const ModifyIPv6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIPv6AddressesBandwidthOutcome>>();
    ModifyIPv6AddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyIPv6AddressesBandwidthRequest&,
        ModifyIPv6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyIp6AddressesBandwidthOutcome VpcClient::ModifyIp6AddressesBandwidth(const ModifyIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIp6AddressesBandwidthResponse rsp = ModifyIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIp6AddressesBandwidthOutcome(rsp);
        else
            return ModifyIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIp6AddressesBandwidthAsync(const ModifyIp6AddressesBandwidthRequest& request, const ModifyIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIp6AddressesBandwidthRequest&;
    using Resp = ModifyIp6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIp6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyIp6AddressesBandwidthOutcomeCallable VpcClient::ModifyIp6AddressesBandwidthCallable(const ModifyIp6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIp6AddressesBandwidthOutcome>>();
    ModifyIp6AddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyIp6AddressesBandwidthRequest&,
        ModifyIp6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyIpv6AddressesAttributeOutcome VpcClient::ModifyIpv6AddressesAttribute(const ModifyIpv6AddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpv6AddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpv6AddressesAttributeResponse rsp = ModifyIpv6AddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpv6AddressesAttributeOutcome(rsp);
        else
            return ModifyIpv6AddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyIpv6AddressesAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIpv6AddressesAttributeAsync(const ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIpv6AddressesAttributeRequest&;
    using Resp = ModifyIpv6AddressesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIpv6AddressesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyIpv6AddressesAttributeOutcomeCallable VpcClient::ModifyIpv6AddressesAttributeCallable(const ModifyIpv6AddressesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIpv6AddressesAttributeOutcome>>();
    ModifyIpv6AddressesAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyIpv6AddressesAttributeRequest&,
        ModifyIpv6AddressesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyLocalGatewayOutcome VpcClient::ModifyLocalGateway(const ModifyLocalGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLocalGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLocalGatewayResponse rsp = ModifyLocalGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLocalGatewayOutcome(rsp);
        else
            return ModifyLocalGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyLocalGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyLocalGatewayAsync(const ModifyLocalGatewayRequest& request, const ModifyLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLocalGatewayRequest&;
    using Resp = ModifyLocalGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLocalGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyLocalGatewayOutcomeCallable VpcClient::ModifyLocalGatewayCallable(const ModifyLocalGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLocalGatewayOutcome>>();
    ModifyLocalGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyLocalGatewayRequest&,
        ModifyLocalGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNatGatewayAttributeOutcome VpcClient::ModifyNatGatewayAttribute(const ModifyNatGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatGatewayAttributeResponse rsp = ModifyNatGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatGatewayAttributeOutcome(rsp);
        else
            return ModifyNatGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNatGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNatGatewayAttributeAsync(const ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatGatewayAttributeRequest&;
    using Resp = ModifyNatGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNatGatewayAttributeOutcomeCallable VpcClient::ModifyNatGatewayAttributeCallable(const ModifyNatGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatGatewayAttributeOutcome>>();
    ModifyNatGatewayAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNatGatewayAttributeRequest&,
        ModifyNatGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRule(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&;
    using Resp = ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatGatewayDestinationIpPortTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleCallable(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome>>();
    ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&,
        ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNatGatewaySourceIpTranslationNatRuleOutcome VpcClient::ModifyNatGatewaySourceIpTranslationNatRule(const ModifyNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatGatewaySourceIpTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatGatewaySourceIpTranslationNatRuleResponse rsp = ModifyNatGatewaySourceIpTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatGatewaySourceIpTranslationNatRuleOutcome(rsp);
        else
            return ModifyNatGatewaySourceIpTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatGatewaySourceIpTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNatGatewaySourceIpTranslationNatRuleAsync(const ModifyNatGatewaySourceIpTranslationNatRuleRequest& request, const ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatGatewaySourceIpTranslationNatRuleRequest&;
    using Resp = ModifyNatGatewaySourceIpTranslationNatRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatGatewaySourceIpTranslationNatRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable VpcClient::ModifyNatGatewaySourceIpTranslationNatRuleCallable(const ModifyNatGatewaySourceIpTranslationNatRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatGatewaySourceIpTranslationNatRuleOutcome>>();
    ModifyNatGatewaySourceIpTranslationNatRuleAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNatGatewaySourceIpTranslationNatRuleRequest&,
        ModifyNatGatewaySourceIpTranslationNatRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNetDetectOutcome VpcClient::ModifyNetDetect(const ModifyNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetDetectResponse rsp = ModifyNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetDetectOutcome(rsp);
        else
            return ModifyNetDetectOutcome(o.GetError());
    }
    else
    {
        return ModifyNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetDetectAsync(const ModifyNetDetectRequest& request, const ModifyNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetDetectRequest&;
    using Resp = ModifyNetDetectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNetDetectOutcomeCallable VpcClient::ModifyNetDetectCallable(const ModifyNetDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetDetectOutcome>>();
    ModifyNetDetectAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNetDetectRequest&,
        ModifyNetDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNetworkAclAttributeOutcome VpcClient::ModifyNetworkAclAttribute(const ModifyNetworkAclAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAclAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAclAttributeResponse rsp = ModifyNetworkAclAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAclAttributeOutcome(rsp);
        else
            return ModifyNetworkAclAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAclAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkAclAttributeAsync(const ModifyNetworkAclAttributeRequest& request, const ModifyNetworkAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkAclAttributeRequest&;
    using Resp = ModifyNetworkAclAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkAclAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNetworkAclAttributeOutcomeCallable VpcClient::ModifyNetworkAclAttributeCallable(const ModifyNetworkAclAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkAclAttributeOutcome>>();
    ModifyNetworkAclAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNetworkAclAttributeRequest&,
        ModifyNetworkAclAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNetworkAclEntriesOutcome VpcClient::ModifyNetworkAclEntries(const ModifyNetworkAclEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAclEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAclEntriesResponse rsp = ModifyNetworkAclEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAclEntriesOutcome(rsp);
        else
            return ModifyNetworkAclEntriesOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAclEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkAclEntriesAsync(const ModifyNetworkAclEntriesRequest& request, const ModifyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkAclEntriesRequest&;
    using Resp = ModifyNetworkAclEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkAclEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNetworkAclEntriesOutcomeCallable VpcClient::ModifyNetworkAclEntriesCallable(const ModifyNetworkAclEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkAclEntriesOutcome>>();
    ModifyNetworkAclEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNetworkAclEntriesRequest&,
        ModifyNetworkAclEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNetworkAclQuintupleEntriesOutcome VpcClient::ModifyNetworkAclQuintupleEntries(const ModifyNetworkAclQuintupleEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAclQuintupleEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAclQuintupleEntriesResponse rsp = ModifyNetworkAclQuintupleEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAclQuintupleEntriesOutcome(rsp);
        else
            return ModifyNetworkAclQuintupleEntriesOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAclQuintupleEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkAclQuintupleEntriesAsync(const ModifyNetworkAclQuintupleEntriesRequest& request, const ModifyNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkAclQuintupleEntriesRequest&;
    using Resp = ModifyNetworkAclQuintupleEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkAclQuintupleEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNetworkAclQuintupleEntriesOutcomeCallable VpcClient::ModifyNetworkAclQuintupleEntriesCallable(const ModifyNetworkAclQuintupleEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkAclQuintupleEntriesOutcome>>();
    ModifyNetworkAclQuintupleEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNetworkAclQuintupleEntriesRequest&,
        ModifyNetworkAclQuintupleEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyNetworkInterfaceAttributeOutcome VpcClient::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkInterfaceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkInterfaceAttributeResponse rsp = ModifyNetworkInterfaceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkInterfaceAttributeOutcome(rsp);
        else
            return ModifyNetworkInterfaceAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkInterfaceAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkInterfaceAttributeRequest&;
    using Resp = ModifyNetworkInterfaceAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkInterfaceAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyNetworkInterfaceAttributeOutcomeCallable VpcClient::ModifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkInterfaceAttributeOutcome>>();
    ModifyNetworkInterfaceAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyNetworkInterfaceAttributeRequest&,
        ModifyNetworkInterfaceAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyPrivateIpAddressesAttributeOutcome VpcClient::ModifyPrivateIpAddressesAttribute(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateIpAddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateIpAddressesAttributeResponse rsp = ModifyPrivateIpAddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateIpAddressesAttributeOutcome(rsp);
        else
            return ModifyPrivateIpAddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateIpAddressesAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyPrivateIpAddressesAttributeAsync(const ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateIpAddressesAttributeRequest&;
    using Resp = ModifyPrivateIpAddressesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateIpAddressesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyPrivateIpAddressesAttributeOutcomeCallable VpcClient::ModifyPrivateIpAddressesAttributeCallable(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateIpAddressesAttributeOutcome>>();
    ModifyPrivateIpAddressesAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyPrivateIpAddressesAttributeRequest&,
        ModifyPrivateIpAddressesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyReserveIpAddressOutcome VpcClient::ModifyReserveIpAddress(const ModifyReserveIpAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReserveIpAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReserveIpAddressResponse rsp = ModifyReserveIpAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReserveIpAddressOutcome(rsp);
        else
            return ModifyReserveIpAddressOutcome(o.GetError());
    }
    else
    {
        return ModifyReserveIpAddressOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyReserveIpAddressAsync(const ModifyReserveIpAddressRequest& request, const ModifyReserveIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReserveIpAddressRequest&;
    using Resp = ModifyReserveIpAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReserveIpAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyReserveIpAddressOutcomeCallable VpcClient::ModifyReserveIpAddressCallable(const ModifyReserveIpAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReserveIpAddressOutcome>>();
    ModifyReserveIpAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyReserveIpAddressRequest&,
        ModifyReserveIpAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyRoutePolicyAttributeOutcome VpcClient::ModifyRoutePolicyAttribute(const ModifyRoutePolicyAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoutePolicyAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoutePolicyAttributeResponse rsp = ModifyRoutePolicyAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoutePolicyAttributeOutcome(rsp);
        else
            return ModifyRoutePolicyAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyRoutePolicyAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyRoutePolicyAttributeAsync(const ModifyRoutePolicyAttributeRequest& request, const ModifyRoutePolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoutePolicyAttributeRequest&;
    using Resp = ModifyRoutePolicyAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoutePolicyAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyRoutePolicyAttributeOutcomeCallable VpcClient::ModifyRoutePolicyAttributeCallable(const ModifyRoutePolicyAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoutePolicyAttributeOutcome>>();
    ModifyRoutePolicyAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyRoutePolicyAttributeRequest&,
        ModifyRoutePolicyAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyRouteTableAttributeOutcome VpcClient::ModifyRouteTableAttribute(const ModifyRouteTableAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRouteTableAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRouteTableAttributeResponse rsp = ModifyRouteTableAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRouteTableAttributeOutcome(rsp);
        else
            return ModifyRouteTableAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyRouteTableAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyRouteTableAttributeAsync(const ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRouteTableAttributeRequest&;
    using Resp = ModifyRouteTableAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRouteTableAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyRouteTableAttributeOutcomeCallable VpcClient::ModifyRouteTableAttributeCallable(const ModifyRouteTableAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRouteTableAttributeOutcome>>();
    ModifyRouteTableAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyRouteTableAttributeRequest&,
        ModifyRouteTableAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifySecurityGroupAttributeOutcome VpcClient::ModifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupAttributeResponse rsp = ModifySecurityGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupAttributeOutcome(rsp);
        else
            return ModifySecurityGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupAttributeRequest&;
    using Resp = ModifySecurityGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifySecurityGroupAttributeOutcomeCallable VpcClient::ModifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupAttributeOutcome>>();
    ModifySecurityGroupAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifySecurityGroupAttributeRequest&,
        ModifySecurityGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifySecurityGroupPoliciesOutcome VpcClient::ModifySecurityGroupPolicies(const ModifySecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupPoliciesResponse rsp = ModifySecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupPoliciesOutcome(rsp);
        else
            return ModifySecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySecurityGroupPoliciesAsync(const ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupPoliciesRequest&;
    using Resp = ModifySecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifySecurityGroupPoliciesOutcomeCallable VpcClient::ModifySecurityGroupPoliciesCallable(const ModifySecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupPoliciesOutcome>>();
    ModifySecurityGroupPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifySecurityGroupPoliciesRequest&,
        ModifySecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyServiceTemplateAttributeOutcome VpcClient::ModifyServiceTemplateAttribute(const ModifyServiceTemplateAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceTemplateAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceTemplateAttributeResponse rsp = ModifyServiceTemplateAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceTemplateAttributeOutcome(rsp);
        else
            return ModifyServiceTemplateAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceTemplateAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyServiceTemplateAttributeAsync(const ModifyServiceTemplateAttributeRequest& request, const ModifyServiceTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceTemplateAttributeRequest&;
    using Resp = ModifyServiceTemplateAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServiceTemplateAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyServiceTemplateAttributeOutcomeCallable VpcClient::ModifyServiceTemplateAttributeCallable(const ModifyServiceTemplateAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceTemplateAttributeOutcome>>();
    ModifyServiceTemplateAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyServiceTemplateAttributeRequest&,
        ModifyServiceTemplateAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyServiceTemplateGroupAttributeOutcome VpcClient::ModifyServiceTemplateGroupAttribute(const ModifyServiceTemplateGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceTemplateGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceTemplateGroupAttributeResponse rsp = ModifyServiceTemplateGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceTemplateGroupAttributeOutcome(rsp);
        else
            return ModifyServiceTemplateGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceTemplateGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyServiceTemplateGroupAttributeAsync(const ModifyServiceTemplateGroupAttributeRequest& request, const ModifyServiceTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceTemplateGroupAttributeRequest&;
    using Resp = ModifyServiceTemplateGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServiceTemplateGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyServiceTemplateGroupAttributeOutcomeCallable VpcClient::ModifyServiceTemplateGroupAttributeCallable(const ModifyServiceTemplateGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceTemplateGroupAttributeOutcome>>();
    ModifyServiceTemplateGroupAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyServiceTemplateGroupAttributeRequest&,
        ModifyServiceTemplateGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifySnapshotPoliciesOutcome VpcClient::ModifySnapshotPolicies(const ModifySnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotPoliciesResponse rsp = ModifySnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotPoliciesOutcome(rsp);
        else
            return ModifySnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySnapshotPoliciesAsync(const ModifySnapshotPoliciesRequest& request, const ModifySnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySnapshotPoliciesRequest&;
    using Resp = ModifySnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifySnapshotPoliciesOutcomeCallable VpcClient::ModifySnapshotPoliciesCallable(const ModifySnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotPoliciesOutcome>>();
    ModifySnapshotPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifySnapshotPoliciesRequest&,
        ModifySnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifySubnetAttributeOutcome VpcClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubnetAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubnetAttributeResponse rsp = ModifySubnetAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubnetAttributeOutcome(rsp);
        else
            return ModifySubnetAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySubnetAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubnetAttributeRequest&;
    using Resp = ModifySubnetAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubnetAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifySubnetAttributeOutcomeCallable VpcClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubnetAttributeOutcome>>();
    ModifySubnetAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifySubnetAttributeRequest&,
        ModifySubnetAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyTemplateMemberOutcome VpcClient::ModifyTemplateMember(const ModifyTemplateMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTemplateMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTemplateMemberResponse rsp = ModifyTemplateMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTemplateMemberOutcome(rsp);
        else
            return ModifyTemplateMemberOutcome(o.GetError());
    }
    else
    {
        return ModifyTemplateMemberOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyTemplateMemberAsync(const ModifyTemplateMemberRequest& request, const ModifyTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTemplateMemberRequest&;
    using Resp = ModifyTemplateMemberResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTemplateMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyTemplateMemberOutcomeCallable VpcClient::ModifyTemplateMemberCallable(const ModifyTemplateMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTemplateMemberOutcome>>();
    ModifyTemplateMemberAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyTemplateMemberRequest&,
        ModifyTemplateMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpcAttributeOutcome VpcClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAttributeResponse rsp = ModifyVpcAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAttributeOutcome(rsp);
        else
            return ModifyVpcAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcAttributeRequest&;
    using Resp = ModifyVpcAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpcAttributeOutcomeCallable VpcClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAttributeOutcome>>();
    ModifyVpcAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpcAttributeRequest&,
        ModifyVpcAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpcEndPointAttributeOutcome VpcClient::ModifyVpcEndPointAttribute(const ModifyVpcEndPointAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcEndPointAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcEndPointAttributeResponse rsp = ModifyVpcEndPointAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcEndPointAttributeOutcome(rsp);
        else
            return ModifyVpcEndPointAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcEndPointAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpcEndPointAttributeAsync(const ModifyVpcEndPointAttributeRequest& request, const ModifyVpcEndPointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcEndPointAttributeRequest&;
    using Resp = ModifyVpcEndPointAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcEndPointAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpcEndPointAttributeOutcomeCallable VpcClient::ModifyVpcEndPointAttributeCallable(const ModifyVpcEndPointAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcEndPointAttributeOutcome>>();
    ModifyVpcEndPointAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpcEndPointAttributeRequest&,
        ModifyVpcEndPointAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpcEndPointServiceAttributeOutcome VpcClient::ModifyVpcEndPointServiceAttribute(const ModifyVpcEndPointServiceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcEndPointServiceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcEndPointServiceAttributeResponse rsp = ModifyVpcEndPointServiceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcEndPointServiceAttributeOutcome(rsp);
        else
            return ModifyVpcEndPointServiceAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcEndPointServiceAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpcEndPointServiceAttributeAsync(const ModifyVpcEndPointServiceAttributeRequest& request, const ModifyVpcEndPointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcEndPointServiceAttributeRequest&;
    using Resp = ModifyVpcEndPointServiceAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcEndPointServiceAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpcEndPointServiceAttributeOutcomeCallable VpcClient::ModifyVpcEndPointServiceAttributeCallable(const ModifyVpcEndPointServiceAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcEndPointServiceAttributeOutcome>>();
    ModifyVpcEndPointServiceAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpcEndPointServiceAttributeRequest&,
        ModifyVpcEndPointServiceAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpcEndPointServiceWhiteListOutcome VpcClient::ModifyVpcEndPointServiceWhiteList(const ModifyVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcEndPointServiceWhiteListResponse rsp = ModifyVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return ModifyVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpcEndPointServiceWhiteListAsync(const ModifyVpcEndPointServiceWhiteListRequest& request, const ModifyVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcEndPointServiceWhiteListRequest&;
    using Resp = ModifyVpcEndPointServiceWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcEndPointServiceWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpcEndPointServiceWhiteListOutcomeCallable VpcClient::ModifyVpcEndPointServiceWhiteListCallable(const ModifyVpcEndPointServiceWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcEndPointServiceWhiteListOutcome>>();
    ModifyVpcEndPointServiceWhiteListAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpcEndPointServiceWhiteListRequest&,
        ModifyVpcEndPointServiceWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpnConnectionAttributeOutcome VpcClient::ModifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnConnectionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnConnectionAttributeResponse rsp = ModifyVpnConnectionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnConnectionAttributeOutcome(rsp);
        else
            return ModifyVpnConnectionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnConnectionAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnConnectionAttributeRequest&;
    using Resp = ModifyVpnConnectionAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnConnectionAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpnConnectionAttributeOutcomeCallable VpcClient::ModifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnConnectionAttributeOutcome>>();
    ModifyVpnConnectionAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpnConnectionAttributeRequest&,
        ModifyVpnConnectionAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpnGatewayAttributeOutcome VpcClient::ModifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayAttributeResponse rsp = ModifyVpnGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayAttributeOutcome(rsp);
        else
            return ModifyVpnGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnGatewayAttributeRequest&;
    using Resp = ModifyVpnGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpnGatewayAttributeOutcomeCallable VpcClient::ModifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnGatewayAttributeOutcome>>();
    ModifyVpnGatewayAttributeAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpnGatewayAttributeRequest&,
        ModifyVpnGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpnGatewayCcnRoutesOutcome VpcClient::ModifyVpnGatewayCcnRoutes(const ModifyVpnGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayCcnRoutesResponse rsp = ModifyVpnGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayCcnRoutesOutcome(rsp);
        else
            return ModifyVpnGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnGatewayCcnRoutesAsync(const ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnGatewayCcnRoutesRequest&;
    using Resp = ModifyVpnGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpnGatewayCcnRoutesOutcomeCallable VpcClient::ModifyVpnGatewayCcnRoutesCallable(const ModifyVpnGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnGatewayCcnRoutesOutcome>>();
    ModifyVpnGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpnGatewayCcnRoutesRequest&,
        ModifyVpnGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ModifyVpnGatewayRoutesOutcome VpcClient::ModifyVpnGatewayRoutes(const ModifyVpnGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayRoutesResponse rsp = ModifyVpnGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayRoutesOutcome(rsp);
        else
            return ModifyVpnGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnGatewayRoutesAsync(const ModifyVpnGatewayRoutesRequest& request, const ModifyVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnGatewayRoutesRequest&;
    using Resp = ModifyVpnGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ModifyVpnGatewayRoutesOutcomeCallable VpcClient::ModifyVpnGatewayRoutesCallable(const ModifyVpnGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnGatewayRoutesOutcome>>();
    ModifyVpnGatewayRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const ModifyVpnGatewayRoutesRequest&,
        ModifyVpnGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::NotifyRoutesOutcome VpcClient::NotifyRoutes(const NotifyRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "NotifyRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        NotifyRoutesResponse rsp = NotifyRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return NotifyRoutesOutcome(rsp);
        else
            return NotifyRoutesOutcome(o.GetError());
    }
    else
    {
        return NotifyRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::NotifyRoutesAsync(const NotifyRoutesRequest& request, const NotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const NotifyRoutesRequest&;
    using Resp = NotifyRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "NotifyRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::NotifyRoutesOutcomeCallable VpcClient::NotifyRoutesCallable(const NotifyRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<NotifyRoutesOutcome>>();
    NotifyRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const NotifyRoutesRequest&,
        NotifyRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::RefreshDirectConnectGatewayRouteToNatGatewayOutcome VpcClient::RefreshDirectConnectGatewayRouteToNatGateway(const RefreshDirectConnectGatewayRouteToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshDirectConnectGatewayRouteToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshDirectConnectGatewayRouteToNatGatewayResponse rsp = RefreshDirectConnectGatewayRouteToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshDirectConnectGatewayRouteToNatGatewayOutcome(rsp);
        else
            return RefreshDirectConnectGatewayRouteToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return RefreshDirectConnectGatewayRouteToNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::RefreshDirectConnectGatewayRouteToNatGatewayAsync(const RefreshDirectConnectGatewayRouteToNatGatewayRequest& request, const RefreshDirectConnectGatewayRouteToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshDirectConnectGatewayRouteToNatGatewayRequest&;
    using Resp = RefreshDirectConnectGatewayRouteToNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshDirectConnectGatewayRouteToNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::RefreshDirectConnectGatewayRouteToNatGatewayOutcomeCallable VpcClient::RefreshDirectConnectGatewayRouteToNatGatewayCallable(const RefreshDirectConnectGatewayRouteToNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshDirectConnectGatewayRouteToNatGatewayOutcome>>();
    RefreshDirectConnectGatewayRouteToNatGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const RefreshDirectConnectGatewayRouteToNatGatewayRequest&,
        RefreshDirectConnectGatewayRouteToNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::RejectAttachCcnInstancesOutcome VpcClient::RejectAttachCcnInstances(const RejectAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RejectAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectAttachCcnInstancesResponse rsp = RejectAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectAttachCcnInstancesOutcome(rsp);
        else
            return RejectAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return RejectAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::RejectAttachCcnInstancesAsync(const RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RejectAttachCcnInstancesRequest&;
    using Resp = RejectAttachCcnInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RejectAttachCcnInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::RejectAttachCcnInstancesOutcomeCallable VpcClient::RejectAttachCcnInstancesCallable(const RejectAttachCcnInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectAttachCcnInstancesOutcome>>();
    RejectAttachCcnInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const RejectAttachCcnInstancesRequest&,
        RejectAttachCcnInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReleaseAddressesOutcome VpcClient::ReleaseAddresses(const ReleaseAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseAddressesResponse rsp = ReleaseAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseAddressesOutcome(rsp);
        else
            return ReleaseAddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::ReleaseAddressesAsync(const ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseAddressesRequest&;
    using Resp = ReleaseAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReleaseAddressesOutcomeCallable VpcClient::ReleaseAddressesCallable(const ReleaseAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseAddressesOutcome>>();
    ReleaseAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReleaseAddressesRequest&,
        ReleaseAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReleaseIPv6AddressesOutcome VpcClient::ReleaseIPv6Addresses(const ReleaseIPv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIPv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIPv6AddressesResponse rsp = ReleaseIPv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIPv6AddressesOutcome(rsp);
        else
            return ReleaseIPv6AddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseIPv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::ReleaseIPv6AddressesAsync(const ReleaseIPv6AddressesRequest& request, const ReleaseIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseIPv6AddressesRequest&;
    using Resp = ReleaseIPv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseIPv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReleaseIPv6AddressesOutcomeCallable VpcClient::ReleaseIPv6AddressesCallable(const ReleaseIPv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseIPv6AddressesOutcome>>();
    ReleaseIPv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReleaseIPv6AddressesRequest&,
        ReleaseIPv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReleaseIp6AddressesBandwidthOutcome VpcClient::ReleaseIp6AddressesBandwidth(const ReleaseIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIp6AddressesBandwidthResponse rsp = ReleaseIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIp6AddressesBandwidthOutcome(rsp);
        else
            return ReleaseIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ReleaseIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ReleaseIp6AddressesBandwidthAsync(const ReleaseIp6AddressesBandwidthRequest& request, const ReleaseIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseIp6AddressesBandwidthRequest&;
    using Resp = ReleaseIp6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseIp6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReleaseIp6AddressesBandwidthOutcomeCallable VpcClient::ReleaseIp6AddressesBandwidthCallable(const ReleaseIp6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseIp6AddressesBandwidthOutcome>>();
    ReleaseIp6AddressesBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ReleaseIp6AddressesBandwidthRequest&,
        ReleaseIp6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::RemoveBandwidthPackageResourcesOutcome VpcClient::RemoveBandwidthPackageResources(const RemoveBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveBandwidthPackageResourcesResponse rsp = RemoveBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveBandwidthPackageResourcesOutcome(rsp);
        else
            return RemoveBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return RemoveBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::RemoveBandwidthPackageResourcesAsync(const RemoveBandwidthPackageResourcesRequest& request, const RemoveBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveBandwidthPackageResourcesRequest&;
    using Resp = RemoveBandwidthPackageResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveBandwidthPackageResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::RemoveBandwidthPackageResourcesOutcomeCallable VpcClient::RemoveBandwidthPackageResourcesCallable(const RemoveBandwidthPackageResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveBandwidthPackageResourcesOutcome>>();
    RemoveBandwidthPackageResourcesAsync(
    request,
    [prom](
        const VpcClient*,
        const RemoveBandwidthPackageResourcesRequest&,
        RemoveBandwidthPackageResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::RenewVpnGatewayOutcome VpcClient::RenewVpnGateway(const RenewVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "RenewVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewVpnGatewayResponse rsp = RenewVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewVpnGatewayOutcome(rsp);
        else
            return RenewVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return RenewVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::RenewVpnGatewayAsync(const RenewVpnGatewayRequest& request, const RenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewVpnGatewayRequest&;
    using Resp = RenewVpnGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "RenewVpnGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::RenewVpnGatewayOutcomeCallable VpcClient::RenewVpnGatewayCallable(const RenewVpnGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewVpnGatewayOutcome>>();
    RenewVpnGatewayAsync(
    request,
    [prom](
        const VpcClient*,
        const RenewVpnGatewayRequest&,
        RenewVpnGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceDirectConnectGatewayCcnRoutesOutcome VpcClient::ReplaceDirectConnectGatewayCcnRoutes(const ReplaceDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceDirectConnectGatewayCcnRoutesResponse rsp = ReplaceDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return ReplaceDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return ReplaceDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceDirectConnectGatewayCcnRoutesAsync(const ReplaceDirectConnectGatewayCcnRoutesRequest& request, const ReplaceDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceDirectConnectGatewayCcnRoutesRequest&;
    using Resp = ReplaceDirectConnectGatewayCcnRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceDirectConnectGatewayCcnRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::ReplaceDirectConnectGatewayCcnRoutesCallable(const ReplaceDirectConnectGatewayCcnRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceDirectConnectGatewayCcnRoutesOutcome>>();
    ReplaceDirectConnectGatewayCcnRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceDirectConnectGatewayCcnRoutesRequest&,
        ReplaceDirectConnectGatewayCcnRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceRoutePolicyAssociationsOutcome VpcClient::ReplaceRoutePolicyAssociations(const ReplaceRoutePolicyAssociationsRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRoutePolicyAssociations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRoutePolicyAssociationsResponse rsp = ReplaceRoutePolicyAssociationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRoutePolicyAssociationsOutcome(rsp);
        else
            return ReplaceRoutePolicyAssociationsOutcome(o.GetError());
    }
    else
    {
        return ReplaceRoutePolicyAssociationsOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRoutePolicyAssociationsAsync(const ReplaceRoutePolicyAssociationsRequest& request, const ReplaceRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRoutePolicyAssociationsRequest&;
    using Resp = ReplaceRoutePolicyAssociationsResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRoutePolicyAssociations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceRoutePolicyAssociationsOutcomeCallable VpcClient::ReplaceRoutePolicyAssociationsCallable(const ReplaceRoutePolicyAssociationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRoutePolicyAssociationsOutcome>>();
    ReplaceRoutePolicyAssociationsAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceRoutePolicyAssociationsRequest&,
        ReplaceRoutePolicyAssociationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceRoutePolicyEntriesOutcome VpcClient::ReplaceRoutePolicyEntries(const ReplaceRoutePolicyEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRoutePolicyEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRoutePolicyEntriesResponse rsp = ReplaceRoutePolicyEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRoutePolicyEntriesOutcome(rsp);
        else
            return ReplaceRoutePolicyEntriesOutcome(o.GetError());
    }
    else
    {
        return ReplaceRoutePolicyEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRoutePolicyEntriesAsync(const ReplaceRoutePolicyEntriesRequest& request, const ReplaceRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRoutePolicyEntriesRequest&;
    using Resp = ReplaceRoutePolicyEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRoutePolicyEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceRoutePolicyEntriesOutcomeCallable VpcClient::ReplaceRoutePolicyEntriesCallable(const ReplaceRoutePolicyEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRoutePolicyEntriesOutcome>>();
    ReplaceRoutePolicyEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceRoutePolicyEntriesRequest&,
        ReplaceRoutePolicyEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceRouteTableAssociationOutcome VpcClient::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRouteTableAssociation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRouteTableAssociationResponse rsp = ReplaceRouteTableAssociationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRouteTableAssociationOutcome(rsp);
        else
            return ReplaceRouteTableAssociationOutcome(o.GetError());
    }
    else
    {
        return ReplaceRouteTableAssociationOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRouteTableAssociationRequest&;
    using Resp = ReplaceRouteTableAssociationResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRouteTableAssociation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceRouteTableAssociationOutcomeCallable VpcClient::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRouteTableAssociationOutcome>>();
    ReplaceRouteTableAssociationAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceRouteTableAssociationRequest&,
        ReplaceRouteTableAssociationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceRoutesOutcome VpcClient::ReplaceRoutes(const ReplaceRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRoutesResponse rsp = ReplaceRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRoutesOutcome(rsp);
        else
            return ReplaceRoutesOutcome(o.GetError());
    }
    else
    {
        return ReplaceRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRoutesAsync(const ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRoutesRequest&;
    using Resp = ReplaceRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceRoutesOutcomeCallable VpcClient::ReplaceRoutesCallable(const ReplaceRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRoutesOutcome>>();
    ReplaceRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceRoutesRequest&,
        ReplaceRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceSecurityGroupPoliciesOutcome VpcClient::ReplaceSecurityGroupPolicies(const ReplaceSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceSecurityGroupPoliciesResponse rsp = ReplaceSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceSecurityGroupPoliciesOutcome(rsp);
        else
            return ReplaceSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ReplaceSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceSecurityGroupPoliciesAsync(const ReplaceSecurityGroupPoliciesRequest& request, const ReplaceSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceSecurityGroupPoliciesRequest&;
    using Resp = ReplaceSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceSecurityGroupPoliciesOutcomeCallable VpcClient::ReplaceSecurityGroupPoliciesCallable(const ReplaceSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceSecurityGroupPoliciesOutcome>>();
    ReplaceSecurityGroupPoliciesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceSecurityGroupPoliciesRequest&,
        ReplaceSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReplaceSecurityGroupPolicyOutcome VpcClient::ReplaceSecurityGroupPolicy(const ReplaceSecurityGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceSecurityGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceSecurityGroupPolicyResponse rsp = ReplaceSecurityGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceSecurityGroupPolicyOutcome(rsp);
        else
            return ReplaceSecurityGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return ReplaceSecurityGroupPolicyOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceSecurityGroupPolicyAsync(const ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceSecurityGroupPolicyRequest&;
    using Resp = ReplaceSecurityGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceSecurityGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReplaceSecurityGroupPolicyOutcomeCallable VpcClient::ReplaceSecurityGroupPolicyCallable(const ReplaceSecurityGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceSecurityGroupPolicyOutcome>>();
    ReplaceSecurityGroupPolicyAsync(
    request,
    [prom](
        const VpcClient*,
        const ReplaceSecurityGroupPolicyRequest&,
        ReplaceSecurityGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetAttachCcnInstancesOutcome VpcClient::ResetAttachCcnInstances(const ResetAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAttachCcnInstancesResponse rsp = ResetAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAttachCcnInstancesOutcome(rsp);
        else
            return ResetAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::ResetAttachCcnInstancesAsync(const ResetAttachCcnInstancesRequest& request, const ResetAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAttachCcnInstancesRequest&;
    using Resp = ResetAttachCcnInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAttachCcnInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetAttachCcnInstancesOutcomeCallable VpcClient::ResetAttachCcnInstancesCallable(const ResetAttachCcnInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAttachCcnInstancesOutcome>>();
    ResetAttachCcnInstancesAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetAttachCcnInstancesRequest&,
        ResetAttachCcnInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetNatGatewayConnectionOutcome VpcClient::ResetNatGatewayConnection(const ResetNatGatewayConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ResetNatGatewayConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetNatGatewayConnectionResponse rsp = ResetNatGatewayConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetNatGatewayConnectionOutcome(rsp);
        else
            return ResetNatGatewayConnectionOutcome(o.GetError());
    }
    else
    {
        return ResetNatGatewayConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::ResetNatGatewayConnectionAsync(const ResetNatGatewayConnectionRequest& request, const ResetNatGatewayConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetNatGatewayConnectionRequest&;
    using Resp = ResetNatGatewayConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "ResetNatGatewayConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetNatGatewayConnectionOutcomeCallable VpcClient::ResetNatGatewayConnectionCallable(const ResetNatGatewayConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetNatGatewayConnectionOutcome>>();
    ResetNatGatewayConnectionAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetNatGatewayConnectionRequest&,
        ResetNatGatewayConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetRoutePolicyAssociationsOutcome VpcClient::ResetRoutePolicyAssociations(const ResetRoutePolicyAssociationsRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRoutePolicyAssociations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRoutePolicyAssociationsResponse rsp = ResetRoutePolicyAssociationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRoutePolicyAssociationsOutcome(rsp);
        else
            return ResetRoutePolicyAssociationsOutcome(o.GetError());
    }
    else
    {
        return ResetRoutePolicyAssociationsOutcome(outcome.GetError());
    }
}

void VpcClient::ResetRoutePolicyAssociationsAsync(const ResetRoutePolicyAssociationsRequest& request, const ResetRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRoutePolicyAssociationsRequest&;
    using Resp = ResetRoutePolicyAssociationsResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRoutePolicyAssociations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetRoutePolicyAssociationsOutcomeCallable VpcClient::ResetRoutePolicyAssociationsCallable(const ResetRoutePolicyAssociationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRoutePolicyAssociationsOutcome>>();
    ResetRoutePolicyAssociationsAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetRoutePolicyAssociationsRequest&,
        ResetRoutePolicyAssociationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetRoutePolicyEntriesOutcome VpcClient::ResetRoutePolicyEntries(const ResetRoutePolicyEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRoutePolicyEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRoutePolicyEntriesResponse rsp = ResetRoutePolicyEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRoutePolicyEntriesOutcome(rsp);
        else
            return ResetRoutePolicyEntriesOutcome(o.GetError());
    }
    else
    {
        return ResetRoutePolicyEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::ResetRoutePolicyEntriesAsync(const ResetRoutePolicyEntriesRequest& request, const ResetRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRoutePolicyEntriesRequest&;
    using Resp = ResetRoutePolicyEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRoutePolicyEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetRoutePolicyEntriesOutcomeCallable VpcClient::ResetRoutePolicyEntriesCallable(const ResetRoutePolicyEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRoutePolicyEntriesOutcome>>();
    ResetRoutePolicyEntriesAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetRoutePolicyEntriesRequest&,
        ResetRoutePolicyEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetRoutesOutcome VpcClient::ResetRoutes(const ResetRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRoutesResponse rsp = ResetRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRoutesOutcome(rsp);
        else
            return ResetRoutesOutcome(o.GetError());
    }
    else
    {
        return ResetRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ResetRoutesAsync(const ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRoutesRequest&;
    using Resp = ResetRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetRoutesOutcomeCallable VpcClient::ResetRoutesCallable(const ResetRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRoutesOutcome>>();
    ResetRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetRoutesRequest&,
        ResetRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetVpnConnectionOutcome VpcClient::ResetVpnConnection(const ResetVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ResetVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetVpnConnectionResponse rsp = ResetVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetVpnConnectionOutcome(rsp);
        else
            return ResetVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return ResetVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::ResetVpnConnectionAsync(const ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetVpnConnectionRequest&;
    using Resp = ResetVpnConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "ResetVpnConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetVpnConnectionOutcomeCallable VpcClient::ResetVpnConnectionCallable(const ResetVpnConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetVpnConnectionOutcome>>();
    ResetVpnConnectionAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetVpnConnectionRequest&,
        ResetVpnConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResetVpnGatewayInternetMaxBandwidthOutcome VpcClient::ResetVpnGatewayInternetMaxBandwidth(const ResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetVpnGatewayInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetVpnGatewayInternetMaxBandwidthResponse rsp = ResetVpnGatewayInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetVpnGatewayInternetMaxBandwidthOutcome(rsp);
        else
            return ResetVpnGatewayInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetVpnGatewayInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ResetVpnGatewayInternetMaxBandwidthAsync(const ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetVpnGatewayInternetMaxBandwidthRequest&;
    using Resp = ResetVpnGatewayInternetMaxBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ResetVpnGatewayInternetMaxBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResetVpnGatewayInternetMaxBandwidthOutcomeCallable VpcClient::ResetVpnGatewayInternetMaxBandwidthCallable(const ResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetVpnGatewayInternetMaxBandwidthOutcome>>();
    ResetVpnGatewayInternetMaxBandwidthAsync(
    request,
    [prom](
        const VpcClient*,
        const ResetVpnGatewayInternetMaxBandwidthRequest&,
        ResetVpnGatewayInternetMaxBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ResumeSnapshotInstanceOutcome VpcClient::ResumeSnapshotInstance(const ResumeSnapshotInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSnapshotInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSnapshotInstanceResponse rsp = ResumeSnapshotInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSnapshotInstanceOutcome(rsp);
        else
            return ResumeSnapshotInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeSnapshotInstanceOutcome(outcome.GetError());
    }
}

void VpcClient::ResumeSnapshotInstanceAsync(const ResumeSnapshotInstanceRequest& request, const ResumeSnapshotInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeSnapshotInstanceRequest&;
    using Resp = ResumeSnapshotInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeSnapshotInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ResumeSnapshotInstanceOutcomeCallable VpcClient::ResumeSnapshotInstanceCallable(const ResumeSnapshotInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeSnapshotInstanceOutcome>>();
    ResumeSnapshotInstanceAsync(
    request,
    [prom](
        const VpcClient*,
        const ResumeSnapshotInstanceRequest&,
        ResumeSnapshotInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::ReturnNormalAddressesOutcome VpcClient::ReturnNormalAddresses(const ReturnNormalAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReturnNormalAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReturnNormalAddressesResponse rsp = ReturnNormalAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReturnNormalAddressesOutcome(rsp);
        else
            return ReturnNormalAddressesOutcome(o.GetError());
    }
    else
    {
        return ReturnNormalAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::ReturnNormalAddressesAsync(const ReturnNormalAddressesRequest& request, const ReturnNormalAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReturnNormalAddressesRequest&;
    using Resp = ReturnNormalAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "ReturnNormalAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::ReturnNormalAddressesOutcomeCallable VpcClient::ReturnNormalAddressesCallable(const ReturnNormalAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReturnNormalAddressesOutcome>>();
    ReturnNormalAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const ReturnNormalAddressesRequest&,
        ReturnNormalAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::SetCcnRegionBandwidthLimitsOutcome VpcClient::SetCcnRegionBandwidthLimits(const SetCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "SetCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCcnRegionBandwidthLimitsResponse rsp = SetCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return SetCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return SetCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::SetCcnRegionBandwidthLimitsAsync(const SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetCcnRegionBandwidthLimitsRequest&;
    using Resp = SetCcnRegionBandwidthLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "SetCcnRegionBandwidthLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::SetCcnRegionBandwidthLimitsOutcomeCallable VpcClient::SetCcnRegionBandwidthLimitsCallable(const SetCcnRegionBandwidthLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCcnRegionBandwidthLimitsOutcome>>();
    SetCcnRegionBandwidthLimitsAsync(
    request,
    [prom](
        const VpcClient*,
        const SetCcnRegionBandwidthLimitsRequest&,
        SetCcnRegionBandwidthLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::SetVpnGatewaysRenewFlagOutcome VpcClient::SetVpnGatewaysRenewFlag(const SetVpnGatewaysRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetVpnGatewaysRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVpnGatewaysRenewFlagResponse rsp = SetVpnGatewaysRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVpnGatewaysRenewFlagOutcome(rsp);
        else
            return SetVpnGatewaysRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetVpnGatewaysRenewFlagOutcome(outcome.GetError());
    }
}

void VpcClient::SetVpnGatewaysRenewFlagAsync(const SetVpnGatewaysRenewFlagRequest& request, const SetVpnGatewaysRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVpnGatewaysRenewFlagRequest&;
    using Resp = SetVpnGatewaysRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "SetVpnGatewaysRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::SetVpnGatewaysRenewFlagOutcomeCallable VpcClient::SetVpnGatewaysRenewFlagCallable(const SetVpnGatewaysRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVpnGatewaysRenewFlagOutcome>>();
    SetVpnGatewaysRenewFlagAsync(
    request,
    [prom](
        const VpcClient*,
        const SetVpnGatewaysRenewFlagRequest&,
        SetVpnGatewaysRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::TransformAddressOutcome VpcClient::TransformAddress(const TransformAddressRequest &request)
{
    auto outcome = MakeRequest(request, "TransformAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransformAddressResponse rsp = TransformAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransformAddressOutcome(rsp);
        else
            return TransformAddressOutcome(o.GetError());
    }
    else
    {
        return TransformAddressOutcome(outcome.GetError());
    }
}

void VpcClient::TransformAddressAsync(const TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransformAddressRequest&;
    using Resp = TransformAddressResponse;

    DoRequestAsync<Req, Resp>(
        "TransformAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::TransformAddressOutcomeCallable VpcClient::TransformAddressCallable(const TransformAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransformAddressOutcome>>();
    TransformAddressAsync(
    request,
    [prom](
        const VpcClient*,
        const TransformAddressRequest&,
        TransformAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::UnassignIpv6AddressesOutcome VpcClient::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6AddressesResponse rsp = UnassignIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6AddressesOutcome(rsp);
        else
            return UnassignIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6AddressesAsync(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassignIpv6AddressesRequest&;
    using Resp = UnassignIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "UnassignIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::UnassignIpv6AddressesOutcomeCallable VpcClient::UnassignIpv6AddressesCallable(const UnassignIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassignIpv6AddressesOutcome>>();
    UnassignIpv6AddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const UnassignIpv6AddressesRequest&,
        UnassignIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::UnassignIpv6CidrBlockOutcome VpcClient::UnassignIpv6CidrBlock(const UnassignIpv6CidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6CidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6CidrBlockResponse rsp = UnassignIpv6CidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6CidrBlockOutcome(rsp);
        else
            return UnassignIpv6CidrBlockOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6CidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6CidrBlockAsync(const UnassignIpv6CidrBlockRequest& request, const UnassignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassignIpv6CidrBlockRequest&;
    using Resp = UnassignIpv6CidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "UnassignIpv6CidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::UnassignIpv6CidrBlockOutcomeCallable VpcClient::UnassignIpv6CidrBlockCallable(const UnassignIpv6CidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassignIpv6CidrBlockOutcome>>();
    UnassignIpv6CidrBlockAsync(
    request,
    [prom](
        const VpcClient*,
        const UnassignIpv6CidrBlockRequest&,
        UnassignIpv6CidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::UnassignIpv6SubnetCidrBlockOutcome VpcClient::UnassignIpv6SubnetCidrBlock(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6SubnetCidrBlockResponse rsp = UnassignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return UnassignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6SubnetCidrBlockAsync(const UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassignIpv6SubnetCidrBlockRequest&;
    using Resp = UnassignIpv6SubnetCidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "UnassignIpv6SubnetCidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::UnassignIpv6SubnetCidrBlockOutcomeCallable VpcClient::UnassignIpv6SubnetCidrBlockCallable(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassignIpv6SubnetCidrBlockOutcome>>();
    UnassignIpv6SubnetCidrBlockAsync(
    request,
    [prom](
        const VpcClient*,
        const UnassignIpv6SubnetCidrBlockRequest&,
        UnassignIpv6SubnetCidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::UnassignPrivateIpAddressesOutcome VpcClient::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignPrivateIpAddressesResponse rsp = UnassignPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignPrivateIpAddressesOutcome(rsp);
        else
            return UnassignPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return UnassignPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassignPrivateIpAddressesRequest&;
    using Resp = UnassignPrivateIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "UnassignPrivateIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::UnassignPrivateIpAddressesOutcomeCallable VpcClient::UnassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassignPrivateIpAddressesOutcome>>();
    UnassignPrivateIpAddressesAsync(
    request,
    [prom](
        const VpcClient*,
        const UnassignPrivateIpAddressesRequest&,
        UnassignPrivateIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VpcClient::WithdrawNotifyRoutesOutcome VpcClient::WithdrawNotifyRoutes(const WithdrawNotifyRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "WithdrawNotifyRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WithdrawNotifyRoutesResponse rsp = WithdrawNotifyRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WithdrawNotifyRoutesOutcome(rsp);
        else
            return WithdrawNotifyRoutesOutcome(o.GetError());
    }
    else
    {
        return WithdrawNotifyRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::WithdrawNotifyRoutesAsync(const WithdrawNotifyRoutesRequest& request, const WithdrawNotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const WithdrawNotifyRoutesRequest&;
    using Resp = WithdrawNotifyRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "WithdrawNotifyRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VpcClient::WithdrawNotifyRoutesOutcomeCallable VpcClient::WithdrawNotifyRoutesCallable(const WithdrawNotifyRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<WithdrawNotifyRoutesOutcome>>();
    WithdrawNotifyRoutesAsync(
    request,
    [prom](
        const VpcClient*,
        const WithdrawNotifyRoutesRequest&,
        WithdrawNotifyRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

