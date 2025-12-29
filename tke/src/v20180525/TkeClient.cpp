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

#include <tencentcloud/tke/v20180525/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20180525;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-25";
    const string ENDPOINT = "tke.intl.tencentcloudapi.com";
}

TkeClient::TkeClient(const Credential &credential, const string &region) :
    TkeClient(credential, region, ClientProfile())
{
}

TkeClient::TkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TkeClient::AcquireClusterAdminRoleOutcome TkeClient::AcquireClusterAdminRole(const AcquireClusterAdminRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireClusterAdminRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireClusterAdminRoleResponse rsp = AcquireClusterAdminRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireClusterAdminRoleOutcome(rsp);
        else
            return AcquireClusterAdminRoleOutcome(o.GetError());
    }
    else
    {
        return AcquireClusterAdminRoleOutcome(outcome.GetError());
    }
}

void TkeClient::AcquireClusterAdminRoleAsync(const AcquireClusterAdminRoleRequest& request, const AcquireClusterAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcquireClusterAdminRoleRequest&;
    using Resp = AcquireClusterAdminRoleResponse;

    DoRequestAsync<Req, Resp>(
        "AcquireClusterAdminRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::AcquireClusterAdminRoleOutcomeCallable TkeClient::AcquireClusterAdminRoleCallable(const AcquireClusterAdminRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcquireClusterAdminRoleOutcome>>();
    AcquireClusterAdminRoleAsync(
    request,
    [prom](
        const TkeClient*,
        const AcquireClusterAdminRoleRequest&,
        AcquireClusterAdminRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::AddExistedInstancesOutcome TkeClient::AddExistedInstances(const AddExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddExistedInstancesResponse rsp = AddExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddExistedInstancesOutcome(rsp);
        else
            return AddExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return AddExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::AddExistedInstancesAsync(const AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddExistedInstancesRequest&;
    using Resp = AddExistedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AddExistedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::AddExistedInstancesOutcomeCallable TkeClient::AddExistedInstancesCallable(const AddExistedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddExistedInstancesOutcome>>();
    AddExistedInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const AddExistedInstancesRequest&,
        AddExistedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::AddNodeToNodePoolOutcome TkeClient::AddNodeToNodePool(const AddNodeToNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "AddNodeToNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNodeToNodePoolResponse rsp = AddNodeToNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNodeToNodePoolOutcome(rsp);
        else
            return AddNodeToNodePoolOutcome(o.GetError());
    }
    else
    {
        return AddNodeToNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::AddNodeToNodePoolAsync(const AddNodeToNodePoolRequest& request, const AddNodeToNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNodeToNodePoolRequest&;
    using Resp = AddNodeToNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "AddNodeToNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::AddNodeToNodePoolOutcomeCallable TkeClient::AddNodeToNodePoolCallable(const AddNodeToNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNodeToNodePoolOutcome>>();
    AddNodeToNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const AddNodeToNodePoolRequest&,
        AddNodeToNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::AddVpcCniSubnetsOutcome TkeClient::AddVpcCniSubnets(const AddVpcCniSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "AddVpcCniSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddVpcCniSubnetsResponse rsp = AddVpcCniSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddVpcCniSubnetsOutcome(rsp);
        else
            return AddVpcCniSubnetsOutcome(o.GetError());
    }
    else
    {
        return AddVpcCniSubnetsOutcome(outcome.GetError());
    }
}

void TkeClient::AddVpcCniSubnetsAsync(const AddVpcCniSubnetsRequest& request, const AddVpcCniSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddVpcCniSubnetsRequest&;
    using Resp = AddVpcCniSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "AddVpcCniSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::AddVpcCniSubnetsOutcomeCallable TkeClient::AddVpcCniSubnetsCallable(const AddVpcCniSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddVpcCniSubnetsOutcome>>();
    AddVpcCniSubnetsAsync(
    request,
    [prom](
        const TkeClient*,
        const AddVpcCniSubnetsRequest&,
        AddVpcCniSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CheckEdgeClusterCIDROutcome TkeClient::CheckEdgeClusterCIDR(const CheckEdgeClusterCIDRRequest &request)
{
    auto outcome = MakeRequest(request, "CheckEdgeClusterCIDR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckEdgeClusterCIDRResponse rsp = CheckEdgeClusterCIDRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckEdgeClusterCIDROutcome(rsp);
        else
            return CheckEdgeClusterCIDROutcome(o.GetError());
    }
    else
    {
        return CheckEdgeClusterCIDROutcome(outcome.GetError());
    }
}

void TkeClient::CheckEdgeClusterCIDRAsync(const CheckEdgeClusterCIDRRequest& request, const CheckEdgeClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckEdgeClusterCIDRRequest&;
    using Resp = CheckEdgeClusterCIDRResponse;

    DoRequestAsync<Req, Resp>(
        "CheckEdgeClusterCIDR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CheckEdgeClusterCIDROutcomeCallable TkeClient::CheckEdgeClusterCIDRCallable(const CheckEdgeClusterCIDRRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckEdgeClusterCIDROutcome>>();
    CheckEdgeClusterCIDRAsync(
    request,
    [prom](
        const TkeClient*,
        const CheckEdgeClusterCIDRRequest&,
        CheckEdgeClusterCIDROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CheckInstancesUpgradeAbleOutcome TkeClient::CheckInstancesUpgradeAble(const CheckInstancesUpgradeAbleRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstancesUpgradeAble");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstancesUpgradeAbleResponse rsp = CheckInstancesUpgradeAbleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstancesUpgradeAbleOutcome(rsp);
        else
            return CheckInstancesUpgradeAbleOutcome(o.GetError());
    }
    else
    {
        return CheckInstancesUpgradeAbleOutcome(outcome.GetError());
    }
}

void TkeClient::CheckInstancesUpgradeAbleAsync(const CheckInstancesUpgradeAbleRequest& request, const CheckInstancesUpgradeAbleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckInstancesUpgradeAbleRequest&;
    using Resp = CheckInstancesUpgradeAbleResponse;

    DoRequestAsync<Req, Resp>(
        "CheckInstancesUpgradeAble", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CheckInstancesUpgradeAbleOutcomeCallable TkeClient::CheckInstancesUpgradeAbleCallable(const CheckInstancesUpgradeAbleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckInstancesUpgradeAbleOutcome>>();
    CheckInstancesUpgradeAbleAsync(
    request,
    [prom](
        const TkeClient*,
        const CheckInstancesUpgradeAbleRequest&,
        CheckInstancesUpgradeAbleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateBackupStorageLocationOutcome TkeClient::CreateBackupStorageLocation(const CreateBackupStorageLocationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupStorageLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupStorageLocationResponse rsp = CreateBackupStorageLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupStorageLocationOutcome(rsp);
        else
            return CreateBackupStorageLocationOutcome(o.GetError());
    }
    else
    {
        return CreateBackupStorageLocationOutcome(outcome.GetError());
    }
}

void TkeClient::CreateBackupStorageLocationAsync(const CreateBackupStorageLocationRequest& request, const CreateBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupStorageLocationRequest&;
    using Resp = CreateBackupStorageLocationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupStorageLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateBackupStorageLocationOutcomeCallable TkeClient::CreateBackupStorageLocationCallable(const CreateBackupStorageLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupStorageLocationOutcome>>();
    CreateBackupStorageLocationAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateBackupStorageLocationRequest&,
        CreateBackupStorageLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateCLSLogConfigOutcome TkeClient::CreateCLSLogConfig(const CreateCLSLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSLogConfigResponse rsp = CreateCLSLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSLogConfigOutcome(rsp);
        else
            return CreateCLSLogConfigOutcome(o.GetError());
    }
    else
    {
        return CreateCLSLogConfigOutcome(outcome.GetError());
    }
}

void TkeClient::CreateCLSLogConfigAsync(const CreateCLSLogConfigRequest& request, const CreateCLSLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCLSLogConfigRequest&;
    using Resp = CreateCLSLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCLSLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateCLSLogConfigOutcomeCallable TkeClient::CreateCLSLogConfigCallable(const CreateCLSLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCLSLogConfigOutcome>>();
    CreateCLSLogConfigAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateCLSLogConfigRequest&,
        CreateCLSLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterOutcome TkeClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterOutcomeCallable TkeClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterEndpointOutcome TkeClient::CreateClusterEndpoint(const CreateClusterEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterEndpointResponse rsp = CreateClusterEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterEndpointOutcome(rsp);
        else
            return CreateClusterEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateClusterEndpointOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterEndpointAsync(const CreateClusterEndpointRequest& request, const CreateClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterEndpointRequest&;
    using Resp = CreateClusterEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterEndpointOutcomeCallable TkeClient::CreateClusterEndpointCallable(const CreateClusterEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterEndpointOutcome>>();
    CreateClusterEndpointAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterEndpointRequest&,
        CreateClusterEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterEndpointVipOutcome TkeClient::CreateClusterEndpointVip(const CreateClusterEndpointVipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterEndpointVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterEndpointVipResponse rsp = CreateClusterEndpointVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterEndpointVipOutcome(rsp);
        else
            return CreateClusterEndpointVipOutcome(o.GetError());
    }
    else
    {
        return CreateClusterEndpointVipOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterEndpointVipAsync(const CreateClusterEndpointVipRequest& request, const CreateClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterEndpointVipRequest&;
    using Resp = CreateClusterEndpointVipResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterEndpointVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterEndpointVipOutcomeCallable TkeClient::CreateClusterEndpointVipCallable(const CreateClusterEndpointVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterEndpointVipOutcome>>();
    CreateClusterEndpointVipAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterEndpointVipRequest&,
        CreateClusterEndpointVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterInstancesOutcome TkeClient::CreateClusterInstances(const CreateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterInstancesResponse rsp = CreateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterInstancesOutcome(rsp);
        else
            return CreateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterInstancesAsync(const CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterInstancesRequest&;
    using Resp = CreateClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterInstancesOutcomeCallable TkeClient::CreateClusterInstancesCallable(const CreateClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterInstancesOutcome>>();
    CreateClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterInstancesRequest&,
        CreateClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterNodePoolOutcome TkeClient::CreateClusterNodePool(const CreateClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterNodePoolResponse rsp = CreateClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterNodePoolOutcome(rsp);
        else
            return CreateClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterNodePoolAsync(const CreateClusterNodePoolRequest& request, const CreateClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterNodePoolRequest&;
    using Resp = CreateClusterNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterNodePoolOutcomeCallable TkeClient::CreateClusterNodePoolCallable(const CreateClusterNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterNodePoolOutcome>>();
    CreateClusterNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterNodePoolRequest&,
        CreateClusterNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterRouteTableOutcome TkeClient::CreateClusterRouteTable(const CreateClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterRouteTableResponse rsp = CreateClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterRouteTableOutcome(rsp);
        else
            return CreateClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterRouteTableAsync(const CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRouteTableRequest&;
    using Resp = CreateClusterRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterRouteTableOutcomeCallable TkeClient::CreateClusterRouteTableCallable(const CreateClusterRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterRouteTableOutcome>>();
    CreateClusterRouteTableAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterRouteTableRequest&,
        CreateClusterRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterVirtualNodeOutcome TkeClient::CreateClusterVirtualNode(const CreateClusterVirtualNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterVirtualNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterVirtualNodeResponse rsp = CreateClusterVirtualNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterVirtualNodeOutcome(rsp);
        else
            return CreateClusterVirtualNodeOutcome(o.GetError());
    }
    else
    {
        return CreateClusterVirtualNodeOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterVirtualNodeAsync(const CreateClusterVirtualNodeRequest& request, const CreateClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterVirtualNodeRequest&;
    using Resp = CreateClusterVirtualNodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterVirtualNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterVirtualNodeOutcomeCallable TkeClient::CreateClusterVirtualNodeCallable(const CreateClusterVirtualNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterVirtualNodeOutcome>>();
    CreateClusterVirtualNodeAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterVirtualNodeRequest&,
        CreateClusterVirtualNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateClusterVirtualNodePoolOutcome TkeClient::CreateClusterVirtualNodePool(const CreateClusterVirtualNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterVirtualNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterVirtualNodePoolResponse rsp = CreateClusterVirtualNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterVirtualNodePoolOutcome(rsp);
        else
            return CreateClusterVirtualNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateClusterVirtualNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterVirtualNodePoolAsync(const CreateClusterVirtualNodePoolRequest& request, const CreateClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterVirtualNodePoolRequest&;
    using Resp = CreateClusterVirtualNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterVirtualNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateClusterVirtualNodePoolOutcomeCallable TkeClient::CreateClusterVirtualNodePoolCallable(const CreateClusterVirtualNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterVirtualNodePoolOutcome>>();
    CreateClusterVirtualNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateClusterVirtualNodePoolRequest&,
        CreateClusterVirtualNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateECMInstancesOutcome TkeClient::CreateECMInstances(const CreateECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateECMInstancesResponse rsp = CreateECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateECMInstancesOutcome(rsp);
        else
            return CreateECMInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateECMInstancesAsync(const CreateECMInstancesRequest& request, const CreateECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateECMInstancesRequest&;
    using Resp = CreateECMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateECMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateECMInstancesOutcomeCallable TkeClient::CreateECMInstancesCallable(const CreateECMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateECMInstancesOutcome>>();
    CreateECMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateECMInstancesRequest&,
        CreateECMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateEdgeCVMInstancesOutcome TkeClient::CreateEdgeCVMInstances(const CreateEdgeCVMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeCVMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeCVMInstancesResponse rsp = CreateEdgeCVMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeCVMInstancesOutcome(rsp);
        else
            return CreateEdgeCVMInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeCVMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateEdgeCVMInstancesAsync(const CreateEdgeCVMInstancesRequest& request, const CreateEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEdgeCVMInstancesRequest&;
    using Resp = CreateEdgeCVMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEdgeCVMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateEdgeCVMInstancesOutcomeCallable TkeClient::CreateEdgeCVMInstancesCallable(const CreateEdgeCVMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEdgeCVMInstancesOutcome>>();
    CreateEdgeCVMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateEdgeCVMInstancesRequest&,
        CreateEdgeCVMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateEdgeLogConfigOutcome TkeClient::CreateEdgeLogConfig(const CreateEdgeLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeLogConfigResponse rsp = CreateEdgeLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeLogConfigOutcome(rsp);
        else
            return CreateEdgeLogConfigOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeLogConfigOutcome(outcome.GetError());
    }
}

void TkeClient::CreateEdgeLogConfigAsync(const CreateEdgeLogConfigRequest& request, const CreateEdgeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEdgeLogConfigRequest&;
    using Resp = CreateEdgeLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEdgeLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateEdgeLogConfigOutcomeCallable TkeClient::CreateEdgeLogConfigCallable(const CreateEdgeLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEdgeLogConfigOutcome>>();
    CreateEdgeLogConfigAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateEdgeLogConfigRequest&,
        CreateEdgeLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateEksLogConfigOutcome TkeClient::CreateEksLogConfig(const CreateEksLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEksLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEksLogConfigResponse rsp = CreateEksLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEksLogConfigOutcome(rsp);
        else
            return CreateEksLogConfigOutcome(o.GetError());
    }
    else
    {
        return CreateEksLogConfigOutcome(outcome.GetError());
    }
}

void TkeClient::CreateEksLogConfigAsync(const CreateEksLogConfigRequest& request, const CreateEksLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEksLogConfigRequest&;
    using Resp = CreateEksLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEksLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateEksLogConfigOutcomeCallable TkeClient::CreateEksLogConfigCallable(const CreateEksLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEksLogConfigOutcome>>();
    CreateEksLogConfigAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateEksLogConfigRequest&,
        CreateEksLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreatePrometheusAlertRuleOutcome TkeClient::CreatePrometheusAlertRule(const CreatePrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAlertRuleResponse rsp = CreatePrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAlertRuleOutcome(rsp);
        else
            return CreatePrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusAlertRuleAsync(const CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrometheusAlertRuleRequest&;
    using Resp = CreatePrometheusAlertRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrometheusAlertRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreatePrometheusAlertRuleOutcomeCallable TkeClient::CreatePrometheusAlertRuleCallable(const CreatePrometheusAlertRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrometheusAlertRuleOutcome>>();
    CreatePrometheusAlertRuleAsync(
    request,
    [prom](
        const TkeClient*,
        const CreatePrometheusAlertRuleRequest&,
        CreatePrometheusAlertRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateTKEEdgeClusterOutcome TkeClient::CreateTKEEdgeCluster(const CreateTKEEdgeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTKEEdgeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTKEEdgeClusterResponse rsp = CreateTKEEdgeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTKEEdgeClusterOutcome(rsp);
        else
            return CreateTKEEdgeClusterOutcome(o.GetError());
    }
    else
    {
        return CreateTKEEdgeClusterOutcome(outcome.GetError());
    }
}

void TkeClient::CreateTKEEdgeClusterAsync(const CreateTKEEdgeClusterRequest& request, const CreateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTKEEdgeClusterRequest&;
    using Resp = CreateTKEEdgeClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTKEEdgeCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateTKEEdgeClusterOutcomeCallable TkeClient::CreateTKEEdgeClusterCallable(const CreateTKEEdgeClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTKEEdgeClusterOutcome>>();
    CreateTKEEdgeClusterAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateTKEEdgeClusterRequest&,
        CreateTKEEdgeClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteAddonOutcome TkeClient::DeleteAddon(const DeleteAddonRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddonResponse rsp = DeleteAddonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddonOutcome(rsp);
        else
            return DeleteAddonOutcome(o.GetError());
    }
    else
    {
        return DeleteAddonOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteAddonAsync(const DeleteAddonRequest& request, const DeleteAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAddonRequest&;
    using Resp = DeleteAddonResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAddon", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteAddonOutcomeCallable TkeClient::DeleteAddonCallable(const DeleteAddonRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAddonOutcome>>();
    DeleteAddonAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteAddonRequest&,
        DeleteAddonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteBackupStorageLocationOutcome TkeClient::DeleteBackupStorageLocation(const DeleteBackupStorageLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupStorageLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupStorageLocationResponse rsp = DeleteBackupStorageLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupStorageLocationOutcome(rsp);
        else
            return DeleteBackupStorageLocationOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupStorageLocationOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteBackupStorageLocationAsync(const DeleteBackupStorageLocationRequest& request, const DeleteBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupStorageLocationRequest&;
    using Resp = DeleteBackupStorageLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupStorageLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteBackupStorageLocationOutcomeCallable TkeClient::DeleteBackupStorageLocationCallable(const DeleteBackupStorageLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupStorageLocationOutcome>>();
    DeleteBackupStorageLocationAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteBackupStorageLocationRequest&,
        DeleteBackupStorageLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterOutcome TkeClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRequest&;
    using Resp = DeleteClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterOutcomeCallable TkeClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterAsGroupsOutcome TkeClient::DeleteClusterAsGroups(const DeleteClusterAsGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterAsGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterAsGroupsResponse rsp = DeleteClusterAsGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterAsGroupsOutcome(rsp);
        else
            return DeleteClusterAsGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterAsGroupsOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterAsGroupsAsync(const DeleteClusterAsGroupsRequest& request, const DeleteClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterAsGroupsRequest&;
    using Resp = DeleteClusterAsGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterAsGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterAsGroupsOutcomeCallable TkeClient::DeleteClusterAsGroupsCallable(const DeleteClusterAsGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterAsGroupsOutcome>>();
    DeleteClusterAsGroupsAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterAsGroupsRequest&,
        DeleteClusterAsGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterEndpointOutcome TkeClient::DeleteClusterEndpoint(const DeleteClusterEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterEndpointResponse rsp = DeleteClusterEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterEndpointOutcome(rsp);
        else
            return DeleteClusterEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterEndpointOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterEndpointAsync(const DeleteClusterEndpointRequest& request, const DeleteClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterEndpointRequest&;
    using Resp = DeleteClusterEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterEndpointOutcomeCallable TkeClient::DeleteClusterEndpointCallable(const DeleteClusterEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterEndpointOutcome>>();
    DeleteClusterEndpointAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterEndpointRequest&,
        DeleteClusterEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterEndpointVipOutcome TkeClient::DeleteClusterEndpointVip(const DeleteClusterEndpointVipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterEndpointVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterEndpointVipResponse rsp = DeleteClusterEndpointVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterEndpointVipOutcome(rsp);
        else
            return DeleteClusterEndpointVipOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterEndpointVipOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterEndpointVipAsync(const DeleteClusterEndpointVipRequest& request, const DeleteClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterEndpointVipRequest&;
    using Resp = DeleteClusterEndpointVipResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterEndpointVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterEndpointVipOutcomeCallable TkeClient::DeleteClusterEndpointVipCallable(const DeleteClusterEndpointVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterEndpointVipOutcome>>();
    DeleteClusterEndpointVipAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterEndpointVipRequest&,
        DeleteClusterEndpointVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterInstancesOutcome TkeClient::DeleteClusterInstances(const DeleteClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterInstancesResponse rsp = DeleteClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterInstancesOutcome(rsp);
        else
            return DeleteClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterInstancesAsync(const DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterInstancesRequest&;
    using Resp = DeleteClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterInstancesOutcomeCallable TkeClient::DeleteClusterInstancesCallable(const DeleteClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterInstancesOutcome>>();
    DeleteClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterInstancesRequest&,
        DeleteClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterNodePoolOutcome TkeClient::DeleteClusterNodePool(const DeleteClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterNodePoolResponse rsp = DeleteClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterNodePoolOutcome(rsp);
        else
            return DeleteClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterNodePoolAsync(const DeleteClusterNodePoolRequest& request, const DeleteClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterNodePoolRequest&;
    using Resp = DeleteClusterNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterNodePoolOutcomeCallable TkeClient::DeleteClusterNodePoolCallable(const DeleteClusterNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterNodePoolOutcome>>();
    DeleteClusterNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterNodePoolRequest&,
        DeleteClusterNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterRouteOutcome TkeClient::DeleteClusterRoute(const DeleteClusterRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteResponse rsp = DeleteClusterRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteOutcome(rsp);
        else
            return DeleteClusterRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteAsync(const DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRouteRequest&;
    using Resp = DeleteClusterRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterRouteOutcomeCallable TkeClient::DeleteClusterRouteCallable(const DeleteClusterRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterRouteOutcome>>();
    DeleteClusterRouteAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterRouteRequest&,
        DeleteClusterRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterRouteTableOutcome TkeClient::DeleteClusterRouteTable(const DeleteClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteTableResponse rsp = DeleteClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteTableOutcome(rsp);
        else
            return DeleteClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteTableAsync(const DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRouteTableRequest&;
    using Resp = DeleteClusterRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterRouteTableOutcomeCallable TkeClient::DeleteClusterRouteTableCallable(const DeleteClusterRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterRouteTableOutcome>>();
    DeleteClusterRouteTableAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterRouteTableRequest&,
        DeleteClusterRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterVirtualNodeOutcome TkeClient::DeleteClusterVirtualNode(const DeleteClusterVirtualNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterVirtualNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterVirtualNodeResponse rsp = DeleteClusterVirtualNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterVirtualNodeOutcome(rsp);
        else
            return DeleteClusterVirtualNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterVirtualNodeOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterVirtualNodeAsync(const DeleteClusterVirtualNodeRequest& request, const DeleteClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterVirtualNodeRequest&;
    using Resp = DeleteClusterVirtualNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterVirtualNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterVirtualNodeOutcomeCallable TkeClient::DeleteClusterVirtualNodeCallable(const DeleteClusterVirtualNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterVirtualNodeOutcome>>();
    DeleteClusterVirtualNodeAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterVirtualNodeRequest&,
        DeleteClusterVirtualNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteClusterVirtualNodePoolOutcome TkeClient::DeleteClusterVirtualNodePool(const DeleteClusterVirtualNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterVirtualNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterVirtualNodePoolResponse rsp = DeleteClusterVirtualNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterVirtualNodePoolOutcome(rsp);
        else
            return DeleteClusterVirtualNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterVirtualNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterVirtualNodePoolAsync(const DeleteClusterVirtualNodePoolRequest& request, const DeleteClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterVirtualNodePoolRequest&;
    using Resp = DeleteClusterVirtualNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterVirtualNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteClusterVirtualNodePoolOutcomeCallable TkeClient::DeleteClusterVirtualNodePoolCallable(const DeleteClusterVirtualNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterVirtualNodePoolOutcome>>();
    DeleteClusterVirtualNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteClusterVirtualNodePoolRequest&,
        DeleteClusterVirtualNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteECMInstancesOutcome TkeClient::DeleteECMInstances(const DeleteECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteECMInstancesResponse rsp = DeleteECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteECMInstancesOutcome(rsp);
        else
            return DeleteECMInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteECMInstancesAsync(const DeleteECMInstancesRequest& request, const DeleteECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteECMInstancesRequest&;
    using Resp = DeleteECMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteECMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteECMInstancesOutcomeCallable TkeClient::DeleteECMInstancesCallable(const DeleteECMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteECMInstancesOutcome>>();
    DeleteECMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteECMInstancesRequest&,
        DeleteECMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteEdgeCVMInstancesOutcome TkeClient::DeleteEdgeCVMInstances(const DeleteEdgeCVMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeCVMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeCVMInstancesResponse rsp = DeleteEdgeCVMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeCVMInstancesOutcome(rsp);
        else
            return DeleteEdgeCVMInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeCVMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEdgeCVMInstancesAsync(const DeleteEdgeCVMInstancesRequest& request, const DeleteEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEdgeCVMInstancesRequest&;
    using Resp = DeleteEdgeCVMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEdgeCVMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteEdgeCVMInstancesOutcomeCallable TkeClient::DeleteEdgeCVMInstancesCallable(const DeleteEdgeCVMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEdgeCVMInstancesOutcome>>();
    DeleteEdgeCVMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteEdgeCVMInstancesRequest&,
        DeleteEdgeCVMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteEdgeClusterInstancesOutcome TkeClient::DeleteEdgeClusterInstances(const DeleteEdgeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeClusterInstancesResponse rsp = DeleteEdgeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeClusterInstancesOutcome(rsp);
        else
            return DeleteEdgeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEdgeClusterInstancesAsync(const DeleteEdgeClusterInstancesRequest& request, const DeleteEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEdgeClusterInstancesRequest&;
    using Resp = DeleteEdgeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEdgeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteEdgeClusterInstancesOutcomeCallable TkeClient::DeleteEdgeClusterInstancesCallable(const DeleteEdgeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEdgeClusterInstancesOutcome>>();
    DeleteEdgeClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteEdgeClusterInstancesRequest&,
        DeleteEdgeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteLogConfigsOutcome TkeClient::DeleteLogConfigs(const DeleteLogConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogConfigsResponse rsp = DeleteLogConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogConfigsOutcome(rsp);
        else
            return DeleteLogConfigsOutcome(o.GetError());
    }
    else
    {
        return DeleteLogConfigsOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteLogConfigsAsync(const DeleteLogConfigsRequest& request, const DeleteLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogConfigsRequest&;
    using Resp = DeleteLogConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteLogConfigsOutcomeCallable TkeClient::DeleteLogConfigsCallable(const DeleteLogConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogConfigsOutcome>>();
    DeleteLogConfigsAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteLogConfigsRequest&,
        DeleteLogConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeletePrometheusAlertRuleOutcome TkeClient::DeletePrometheusAlertRule(const DeletePrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusAlertRuleResponse rsp = DeletePrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusAlertRuleOutcome(rsp);
        else
            return DeletePrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusAlertRuleAsync(const DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrometheusAlertRuleRequest&;
    using Resp = DeletePrometheusAlertRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrometheusAlertRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeletePrometheusAlertRuleOutcomeCallable TkeClient::DeletePrometheusAlertRuleCallable(const DeletePrometheusAlertRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrometheusAlertRuleOutcome>>();
    DeletePrometheusAlertRuleAsync(
    request,
    [prom](
        const TkeClient*,
        const DeletePrometheusAlertRuleRequest&,
        DeletePrometheusAlertRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteTKEEdgeClusterOutcome TkeClient::DeleteTKEEdgeCluster(const DeleteTKEEdgeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTKEEdgeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTKEEdgeClusterResponse rsp = DeleteTKEEdgeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTKEEdgeClusterOutcome(rsp);
        else
            return DeleteTKEEdgeClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteTKEEdgeClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteTKEEdgeClusterAsync(const DeleteTKEEdgeClusterRequest& request, const DeleteTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTKEEdgeClusterRequest&;
    using Resp = DeleteTKEEdgeClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTKEEdgeCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteTKEEdgeClusterOutcomeCallable TkeClient::DeleteTKEEdgeClusterCallable(const DeleteTKEEdgeClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTKEEdgeClusterOutcome>>();
    DeleteTKEEdgeClusterAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteTKEEdgeClusterRequest&,
        DeleteTKEEdgeClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeAddonOutcome TkeClient::DescribeAddon(const DescribeAddonRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddonResponse rsp = DescribeAddonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddonOutcome(rsp);
        else
            return DescribeAddonOutcome(o.GetError());
    }
    else
    {
        return DescribeAddonOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAddonAsync(const DescribeAddonRequest& request, const DescribeAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddonRequest&;
    using Resp = DescribeAddonResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddon", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeAddonOutcomeCallable TkeClient::DescribeAddonCallable(const DescribeAddonRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddonOutcome>>();
    DescribeAddonAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeAddonRequest&,
        DescribeAddonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeAddonValuesOutcome TkeClient::DescribeAddonValues(const DescribeAddonValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddonValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddonValuesResponse rsp = DescribeAddonValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddonValuesOutcome(rsp);
        else
            return DescribeAddonValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddonValuesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAddonValuesAsync(const DescribeAddonValuesRequest& request, const DescribeAddonValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddonValuesRequest&;
    using Resp = DescribeAddonValuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddonValues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeAddonValuesOutcomeCallable TkeClient::DescribeAddonValuesCallable(const DescribeAddonValuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddonValuesOutcome>>();
    DescribeAddonValuesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeAddonValuesRequest&,
        DescribeAddonValuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeAvailableClusterVersionOutcome TkeClient::DescribeAvailableClusterVersion(const DescribeAvailableClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableClusterVersionResponse rsp = DescribeAvailableClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableClusterVersionOutcome(rsp);
        else
            return DescribeAvailableClusterVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableClusterVersionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAvailableClusterVersionAsync(const DescribeAvailableClusterVersionRequest& request, const DescribeAvailableClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableClusterVersionRequest&;
    using Resp = DescribeAvailableClusterVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableClusterVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeAvailableClusterVersionOutcomeCallable TkeClient::DescribeAvailableClusterVersionCallable(const DescribeAvailableClusterVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableClusterVersionOutcome>>();
    DescribeAvailableClusterVersionAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeAvailableClusterVersionRequest&,
        DescribeAvailableClusterVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeAvailableTKEEdgeVersionOutcome TkeClient::DescribeAvailableTKEEdgeVersion(const DescribeAvailableTKEEdgeVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableTKEEdgeVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableTKEEdgeVersionResponse rsp = DescribeAvailableTKEEdgeVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableTKEEdgeVersionOutcome(rsp);
        else
            return DescribeAvailableTKEEdgeVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableTKEEdgeVersionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAvailableTKEEdgeVersionAsync(const DescribeAvailableTKEEdgeVersionRequest& request, const DescribeAvailableTKEEdgeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableTKEEdgeVersionRequest&;
    using Resp = DescribeAvailableTKEEdgeVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableTKEEdgeVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeAvailableTKEEdgeVersionOutcomeCallable TkeClient::DescribeAvailableTKEEdgeVersionCallable(const DescribeAvailableTKEEdgeVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableTKEEdgeVersionOutcome>>();
    DescribeAvailableTKEEdgeVersionAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeAvailableTKEEdgeVersionRequest&,
        DescribeAvailableTKEEdgeVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeBackupStorageLocationsOutcome TkeClient::DescribeBackupStorageLocations(const DescribeBackupStorageLocationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupStorageLocations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupStorageLocationsResponse rsp = DescribeBackupStorageLocationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupStorageLocationsOutcome(rsp);
        else
            return DescribeBackupStorageLocationsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupStorageLocationsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeBackupStorageLocationsAsync(const DescribeBackupStorageLocationsRequest& request, const DescribeBackupStorageLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupStorageLocationsRequest&;
    using Resp = DescribeBackupStorageLocationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupStorageLocations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeBackupStorageLocationsOutcomeCallable TkeClient::DescribeBackupStorageLocationsCallable(const DescribeBackupStorageLocationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupStorageLocationsOutcome>>();
    DescribeBackupStorageLocationsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeBackupStorageLocationsRequest&,
        DescribeBackupStorageLocationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeBatchModifyTagsStatusOutcome TkeClient::DescribeBatchModifyTagsStatus(const DescribeBatchModifyTagsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchModifyTagsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchModifyTagsStatusResponse rsp = DescribeBatchModifyTagsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchModifyTagsStatusOutcome(rsp);
        else
            return DescribeBatchModifyTagsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchModifyTagsStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeBatchModifyTagsStatusAsync(const DescribeBatchModifyTagsStatusRequest& request, const DescribeBatchModifyTagsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchModifyTagsStatusRequest&;
    using Resp = DescribeBatchModifyTagsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchModifyTagsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeBatchModifyTagsStatusOutcomeCallable TkeClient::DescribeBatchModifyTagsStatusCallable(const DescribeBatchModifyTagsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchModifyTagsStatusOutcome>>();
    DescribeBatchModifyTagsStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeBatchModifyTagsStatusRequest&,
        DescribeBatchModifyTagsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterAsGroupOptionOutcome TkeClient::DescribeClusterAsGroupOption(const DescribeClusterAsGroupOptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAsGroupOption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAsGroupOptionResponse rsp = DescribeClusterAsGroupOptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAsGroupOptionOutcome(rsp);
        else
            return DescribeClusterAsGroupOptionOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAsGroupOptionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAsGroupOptionAsync(const DescribeClusterAsGroupOptionRequest& request, const DescribeClusterAsGroupOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterAsGroupOptionRequest&;
    using Resp = DescribeClusterAsGroupOptionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterAsGroupOption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterAsGroupOptionOutcomeCallable TkeClient::DescribeClusterAsGroupOptionCallable(const DescribeClusterAsGroupOptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterAsGroupOptionOutcome>>();
    DescribeClusterAsGroupOptionAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterAsGroupOptionRequest&,
        DescribeClusterAsGroupOptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterAsGroupsOutcome TkeClient::DescribeClusterAsGroups(const DescribeClusterAsGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAsGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAsGroupsResponse rsp = DescribeClusterAsGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAsGroupsOutcome(rsp);
        else
            return DescribeClusterAsGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAsGroupsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAsGroupsAsync(const DescribeClusterAsGroupsRequest& request, const DescribeClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterAsGroupsRequest&;
    using Resp = DescribeClusterAsGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterAsGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterAsGroupsOutcomeCallable TkeClient::DescribeClusterAsGroupsCallable(const DescribeClusterAsGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterAsGroupsOutcome>>();
    DescribeClusterAsGroupsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterAsGroupsRequest&,
        DescribeClusterAsGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterAuthenticationOptionsOutcome TkeClient::DescribeClusterAuthenticationOptions(const DescribeClusterAuthenticationOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAuthenticationOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAuthenticationOptionsResponse rsp = DescribeClusterAuthenticationOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAuthenticationOptionsOutcome(rsp);
        else
            return DescribeClusterAuthenticationOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAuthenticationOptionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAuthenticationOptionsAsync(const DescribeClusterAuthenticationOptionsRequest& request, const DescribeClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterAuthenticationOptionsRequest&;
    using Resp = DescribeClusterAuthenticationOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterAuthenticationOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterAuthenticationOptionsOutcomeCallable TkeClient::DescribeClusterAuthenticationOptionsCallable(const DescribeClusterAuthenticationOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterAuthenticationOptionsOutcome>>();
    DescribeClusterAuthenticationOptionsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterAuthenticationOptionsRequest&,
        DescribeClusterAuthenticationOptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterCommonNamesOutcome TkeClient::DescribeClusterCommonNames(const DescribeClusterCommonNamesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterCommonNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterCommonNamesResponse rsp = DescribeClusterCommonNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterCommonNamesOutcome(rsp);
        else
            return DescribeClusterCommonNamesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterCommonNamesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterCommonNamesAsync(const DescribeClusterCommonNamesRequest& request, const DescribeClusterCommonNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterCommonNamesRequest&;
    using Resp = DescribeClusterCommonNamesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterCommonNames", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterCommonNamesOutcomeCallable TkeClient::DescribeClusterCommonNamesCallable(const DescribeClusterCommonNamesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterCommonNamesOutcome>>();
    DescribeClusterCommonNamesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterCommonNamesRequest&,
        DescribeClusterCommonNamesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterEndpointStatusOutcome TkeClient::DescribeClusterEndpointStatus(const DescribeClusterEndpointStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpointStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointStatusResponse rsp = DescribeClusterEndpointStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointStatusOutcome(rsp);
        else
            return DescribeClusterEndpointStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterEndpointStatusAsync(const DescribeClusterEndpointStatusRequest& request, const DescribeClusterEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterEndpointStatusRequest&;
    using Resp = DescribeClusterEndpointStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterEndpointStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterEndpointStatusOutcomeCallable TkeClient::DescribeClusterEndpointStatusCallable(const DescribeClusterEndpointStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterEndpointStatusOutcome>>();
    DescribeClusterEndpointStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterEndpointStatusRequest&,
        DescribeClusterEndpointStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterEndpointVipStatusOutcome TkeClient::DescribeClusterEndpointVipStatus(const DescribeClusterEndpointVipStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpointVipStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointVipStatusResponse rsp = DescribeClusterEndpointVipStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointVipStatusOutcome(rsp);
        else
            return DescribeClusterEndpointVipStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointVipStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterEndpointVipStatusAsync(const DescribeClusterEndpointVipStatusRequest& request, const DescribeClusterEndpointVipStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterEndpointVipStatusRequest&;
    using Resp = DescribeClusterEndpointVipStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterEndpointVipStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterEndpointVipStatusOutcomeCallable TkeClient::DescribeClusterEndpointVipStatusCallable(const DescribeClusterEndpointVipStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterEndpointVipStatusOutcome>>();
    DescribeClusterEndpointVipStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterEndpointVipStatusRequest&,
        DescribeClusterEndpointVipStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterEndpointsOutcome TkeClient::DescribeClusterEndpoints(const DescribeClusterEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointsResponse rsp = DescribeClusterEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointsOutcome(rsp);
        else
            return DescribeClusterEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterEndpointsAsync(const DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterEndpointsRequest&;
    using Resp = DescribeClusterEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterEndpointsOutcomeCallable TkeClient::DescribeClusterEndpointsCallable(const DescribeClusterEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterEndpointsOutcome>>();
    DescribeClusterEndpointsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterEndpointsRequest&,
        DescribeClusterEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterExtraArgsOutcome TkeClient::DescribeClusterExtraArgs(const DescribeClusterExtraArgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterExtraArgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterExtraArgsResponse rsp = DescribeClusterExtraArgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterExtraArgsOutcome(rsp);
        else
            return DescribeClusterExtraArgsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterExtraArgsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterExtraArgsAsync(const DescribeClusterExtraArgsRequest& request, const DescribeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterExtraArgsRequest&;
    using Resp = DescribeClusterExtraArgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterExtraArgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterExtraArgsOutcomeCallable TkeClient::DescribeClusterExtraArgsCallable(const DescribeClusterExtraArgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterExtraArgsOutcome>>();
    DescribeClusterExtraArgsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterExtraArgsRequest&,
        DescribeClusterExtraArgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterInstancesOutcome TkeClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstancesResponse rsp = DescribeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstancesOutcome(rsp);
        else
            return DescribeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInstancesRequest&;
    using Resp = DescribeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterInstancesOutcomeCallable TkeClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInstancesOutcome>>();
    DescribeClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterInstancesRequest&,
        DescribeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterKubeconfigOutcome TkeClient::DescribeClusterKubeconfig(const DescribeClusterKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterKubeconfigResponse rsp = DescribeClusterKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterKubeconfigOutcome(rsp);
        else
            return DescribeClusterKubeconfigOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterKubeconfigOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterKubeconfigAsync(const DescribeClusterKubeconfigRequest& request, const DescribeClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterKubeconfigRequest&;
    using Resp = DescribeClusterKubeconfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterKubeconfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterKubeconfigOutcomeCallable TkeClient::DescribeClusterKubeconfigCallable(const DescribeClusterKubeconfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterKubeconfigOutcome>>();
    DescribeClusterKubeconfigAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterKubeconfigRequest&,
        DescribeClusterKubeconfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterLevelAttributeOutcome TkeClient::DescribeClusterLevelAttribute(const DescribeClusterLevelAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterLevelAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterLevelAttributeResponse rsp = DescribeClusterLevelAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterLevelAttributeOutcome(rsp);
        else
            return DescribeClusterLevelAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterLevelAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterLevelAttributeAsync(const DescribeClusterLevelAttributeRequest& request, const DescribeClusterLevelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterLevelAttributeRequest&;
    using Resp = DescribeClusterLevelAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterLevelAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterLevelAttributeOutcomeCallable TkeClient::DescribeClusterLevelAttributeCallable(const DescribeClusterLevelAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterLevelAttributeOutcome>>();
    DescribeClusterLevelAttributeAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterLevelAttributeRequest&,
        DescribeClusterLevelAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterLevelChangeRecordsOutcome TkeClient::DescribeClusterLevelChangeRecords(const DescribeClusterLevelChangeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterLevelChangeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterLevelChangeRecordsResponse rsp = DescribeClusterLevelChangeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterLevelChangeRecordsOutcome(rsp);
        else
            return DescribeClusterLevelChangeRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterLevelChangeRecordsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterLevelChangeRecordsAsync(const DescribeClusterLevelChangeRecordsRequest& request, const DescribeClusterLevelChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterLevelChangeRecordsRequest&;
    using Resp = DescribeClusterLevelChangeRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterLevelChangeRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterLevelChangeRecordsOutcomeCallable TkeClient::DescribeClusterLevelChangeRecordsCallable(const DescribeClusterLevelChangeRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterLevelChangeRecordsOutcome>>();
    DescribeClusterLevelChangeRecordsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterLevelChangeRecordsRequest&,
        DescribeClusterLevelChangeRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterNodePoolDetailOutcome TkeClient::DescribeClusterNodePoolDetail(const DescribeClusterNodePoolDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodePoolDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodePoolDetailResponse rsp = DescribeClusterNodePoolDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodePoolDetailOutcome(rsp);
        else
            return DescribeClusterNodePoolDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodePoolDetailOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterNodePoolDetailAsync(const DescribeClusterNodePoolDetailRequest& request, const DescribeClusterNodePoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterNodePoolDetailRequest&;
    using Resp = DescribeClusterNodePoolDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterNodePoolDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterNodePoolDetailOutcomeCallable TkeClient::DescribeClusterNodePoolDetailCallable(const DescribeClusterNodePoolDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterNodePoolDetailOutcome>>();
    DescribeClusterNodePoolDetailAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterNodePoolDetailRequest&,
        DescribeClusterNodePoolDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterNodePoolsOutcome TkeClient::DescribeClusterNodePools(const DescribeClusterNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodePoolsResponse rsp = DescribeClusterNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodePoolsOutcome(rsp);
        else
            return DescribeClusterNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterNodePoolsAsync(const DescribeClusterNodePoolsRequest& request, const DescribeClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterNodePoolsRequest&;
    using Resp = DescribeClusterNodePoolsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterNodePools", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterNodePoolsOutcomeCallable TkeClient::DescribeClusterNodePoolsCallable(const DescribeClusterNodePoolsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterNodePoolsOutcome>>();
    DescribeClusterNodePoolsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterNodePoolsRequest&,
        DescribeClusterNodePoolsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterRouteTablesOutcome TkeClient::DescribeClusterRouteTables(const DescribeClusterRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRouteTablesResponse rsp = DescribeClusterRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRouteTablesOutcome(rsp);
        else
            return DescribeClusterRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRouteTablesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRouteTablesAsync(const DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterRouteTablesRequest&;
    using Resp = DescribeClusterRouteTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterRouteTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterRouteTablesOutcomeCallable TkeClient::DescribeClusterRouteTablesCallable(const DescribeClusterRouteTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterRouteTablesOutcome>>();
    DescribeClusterRouteTablesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterRouteTablesRequest&,
        DescribeClusterRouteTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterRoutesOutcome TkeClient::DescribeClusterRoutes(const DescribeClusterRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRoutesResponse rsp = DescribeClusterRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRoutesOutcome(rsp);
        else
            return DescribeClusterRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRoutesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRoutesAsync(const DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterRoutesRequest&;
    using Resp = DescribeClusterRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterRoutesOutcomeCallable TkeClient::DescribeClusterRoutesCallable(const DescribeClusterRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterRoutesOutcome>>();
    DescribeClusterRoutesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterRoutesRequest&,
        DescribeClusterRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterSecurityOutcome TkeClient::DescribeClusterSecurity(const DescribeClusterSecurityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSecurity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSecurityResponse rsp = DescribeClusterSecurityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSecurityOutcome(rsp);
        else
            return DescribeClusterSecurityOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSecurityOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterSecurityAsync(const DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterSecurityRequest&;
    using Resp = DescribeClusterSecurityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterSecurity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterSecurityOutcomeCallable TkeClient::DescribeClusterSecurityCallable(const DescribeClusterSecurityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterSecurityOutcome>>();
    DescribeClusterSecurityAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterSecurityRequest&,
        DescribeClusterSecurityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterStatusOutcome TkeClient::DescribeClusterStatus(const DescribeClusterStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterStatusResponse rsp = DescribeClusterStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterStatusOutcome(rsp);
        else
            return DescribeClusterStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterStatusAsync(const DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterStatusRequest&;
    using Resp = DescribeClusterStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterStatusOutcomeCallable TkeClient::DescribeClusterStatusCallable(const DescribeClusterStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterStatusOutcome>>();
    DescribeClusterStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterStatusRequest&,
        DescribeClusterStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterVirtualNodeOutcome TkeClient::DescribeClusterVirtualNode(const DescribeClusterVirtualNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterVirtualNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterVirtualNodeResponse rsp = DescribeClusterVirtualNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterVirtualNodeOutcome(rsp);
        else
            return DescribeClusterVirtualNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterVirtualNodeOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterVirtualNodeAsync(const DescribeClusterVirtualNodeRequest& request, const DescribeClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterVirtualNodeRequest&;
    using Resp = DescribeClusterVirtualNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterVirtualNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterVirtualNodeOutcomeCallable TkeClient::DescribeClusterVirtualNodeCallable(const DescribeClusterVirtualNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterVirtualNodeOutcome>>();
    DescribeClusterVirtualNodeAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterVirtualNodeRequest&,
        DescribeClusterVirtualNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClusterVirtualNodePoolsOutcome TkeClient::DescribeClusterVirtualNodePools(const DescribeClusterVirtualNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterVirtualNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterVirtualNodePoolsResponse rsp = DescribeClusterVirtualNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterVirtualNodePoolsOutcome(rsp);
        else
            return DescribeClusterVirtualNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterVirtualNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterVirtualNodePoolsAsync(const DescribeClusterVirtualNodePoolsRequest& request, const DescribeClusterVirtualNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterVirtualNodePoolsRequest&;
    using Resp = DescribeClusterVirtualNodePoolsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterVirtualNodePools", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClusterVirtualNodePoolsOutcomeCallable TkeClient::DescribeClusterVirtualNodePoolsCallable(const DescribeClusterVirtualNodePoolsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterVirtualNodePoolsOutcome>>();
    DescribeClusterVirtualNodePoolsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClusterVirtualNodePoolsRequest&,
        DescribeClusterVirtualNodePoolsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeClustersOutcome TkeClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeClustersOutcomeCallable TkeClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeControlPlaneLogsOutcome TkeClient::DescribeControlPlaneLogs(const DescribeControlPlaneLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeControlPlaneLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeControlPlaneLogsResponse rsp = DescribeControlPlaneLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeControlPlaneLogsOutcome(rsp);
        else
            return DescribeControlPlaneLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeControlPlaneLogsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeControlPlaneLogsAsync(const DescribeControlPlaneLogsRequest& request, const DescribeControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeControlPlaneLogsRequest&;
    using Resp = DescribeControlPlaneLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeControlPlaneLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeControlPlaneLogsOutcomeCallable TkeClient::DescribeControlPlaneLogsCallable(const DescribeControlPlaneLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeControlPlaneLogsOutcome>>();
    DescribeControlPlaneLogsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeControlPlaneLogsRequest&,
        DescribeControlPlaneLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeECMInstancesOutcome TkeClient::DescribeECMInstances(const DescribeECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeECMInstancesResponse rsp = DescribeECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeECMInstancesOutcome(rsp);
        else
            return DescribeECMInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeECMInstancesAsync(const DescribeECMInstancesRequest& request, const DescribeECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeECMInstancesRequest&;
    using Resp = DescribeECMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeECMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeECMInstancesOutcomeCallable TkeClient::DescribeECMInstancesCallable(const DescribeECMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeECMInstancesOutcome>>();
    DescribeECMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeECMInstancesRequest&,
        DescribeECMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeAvailableExtraArgsOutcome TkeClient::DescribeEdgeAvailableExtraArgs(const DescribeEdgeAvailableExtraArgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeAvailableExtraArgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeAvailableExtraArgsResponse rsp = DescribeEdgeAvailableExtraArgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeAvailableExtraArgsOutcome(rsp);
        else
            return DescribeEdgeAvailableExtraArgsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeAvailableExtraArgsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeAvailableExtraArgsAsync(const DescribeEdgeAvailableExtraArgsRequest& request, const DescribeEdgeAvailableExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeAvailableExtraArgsRequest&;
    using Resp = DescribeEdgeAvailableExtraArgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeAvailableExtraArgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeAvailableExtraArgsOutcomeCallable TkeClient::DescribeEdgeAvailableExtraArgsCallable(const DescribeEdgeAvailableExtraArgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeAvailableExtraArgsOutcome>>();
    DescribeEdgeAvailableExtraArgsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeAvailableExtraArgsRequest&,
        DescribeEdgeAvailableExtraArgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeCVMInstancesOutcome TkeClient::DescribeEdgeCVMInstances(const DescribeEdgeCVMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeCVMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeCVMInstancesResponse rsp = DescribeEdgeCVMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeCVMInstancesOutcome(rsp);
        else
            return DescribeEdgeCVMInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeCVMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeCVMInstancesAsync(const DescribeEdgeCVMInstancesRequest& request, const DescribeEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeCVMInstancesRequest&;
    using Resp = DescribeEdgeCVMInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeCVMInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeCVMInstancesOutcomeCallable TkeClient::DescribeEdgeCVMInstancesCallable(const DescribeEdgeCVMInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeCVMInstancesOutcome>>();
    DescribeEdgeCVMInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeCVMInstancesRequest&,
        DescribeEdgeCVMInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeClusterExtraArgsOutcome TkeClient::DescribeEdgeClusterExtraArgs(const DescribeEdgeClusterExtraArgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeClusterExtraArgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeClusterExtraArgsResponse rsp = DescribeEdgeClusterExtraArgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeClusterExtraArgsOutcome(rsp);
        else
            return DescribeEdgeClusterExtraArgsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeClusterExtraArgsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeClusterExtraArgsAsync(const DescribeEdgeClusterExtraArgsRequest& request, const DescribeEdgeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeClusterExtraArgsRequest&;
    using Resp = DescribeEdgeClusterExtraArgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeClusterExtraArgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeClusterExtraArgsOutcomeCallable TkeClient::DescribeEdgeClusterExtraArgsCallable(const DescribeEdgeClusterExtraArgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeClusterExtraArgsOutcome>>();
    DescribeEdgeClusterExtraArgsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeClusterExtraArgsRequest&,
        DescribeEdgeClusterExtraArgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeClusterInstancesOutcome TkeClient::DescribeEdgeClusterInstances(const DescribeEdgeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeClusterInstancesResponse rsp = DescribeEdgeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeClusterInstancesOutcome(rsp);
        else
            return DescribeEdgeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeClusterInstancesAsync(const DescribeEdgeClusterInstancesRequest& request, const DescribeEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeClusterInstancesRequest&;
    using Resp = DescribeEdgeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeClusterInstancesOutcomeCallable TkeClient::DescribeEdgeClusterInstancesCallable(const DescribeEdgeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeClusterInstancesOutcome>>();
    DescribeEdgeClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeClusterInstancesRequest&,
        DescribeEdgeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeClusterUpgradeInfoOutcome TkeClient::DescribeEdgeClusterUpgradeInfo(const DescribeEdgeClusterUpgradeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeClusterUpgradeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeClusterUpgradeInfoResponse rsp = DescribeEdgeClusterUpgradeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeClusterUpgradeInfoOutcome(rsp);
        else
            return DescribeEdgeClusterUpgradeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeClusterUpgradeInfoOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeClusterUpgradeInfoAsync(const DescribeEdgeClusterUpgradeInfoRequest& request, const DescribeEdgeClusterUpgradeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeClusterUpgradeInfoRequest&;
    using Resp = DescribeEdgeClusterUpgradeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeClusterUpgradeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeClusterUpgradeInfoOutcomeCallable TkeClient::DescribeEdgeClusterUpgradeInfoCallable(const DescribeEdgeClusterUpgradeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeClusterUpgradeInfoOutcome>>();
    DescribeEdgeClusterUpgradeInfoAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeClusterUpgradeInfoRequest&,
        DescribeEdgeClusterUpgradeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEdgeLogSwitchesOutcome TkeClient::DescribeEdgeLogSwitches(const DescribeEdgeLogSwitchesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeLogSwitches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeLogSwitchesResponse rsp = DescribeEdgeLogSwitchesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeLogSwitchesOutcome(rsp);
        else
            return DescribeEdgeLogSwitchesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeLogSwitchesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeLogSwitchesAsync(const DescribeEdgeLogSwitchesRequest& request, const DescribeEdgeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeLogSwitchesRequest&;
    using Resp = DescribeEdgeLogSwitchesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeLogSwitches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEdgeLogSwitchesOutcomeCallable TkeClient::DescribeEdgeLogSwitchesCallable(const DescribeEdgeLogSwitchesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeLogSwitchesOutcome>>();
    DescribeEdgeLogSwitchesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEdgeLogSwitchesRequest&,
        DescribeEdgeLogSwitchesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEnableVpcCniProgressOutcome TkeClient::DescribeEnableVpcCniProgress(const DescribeEnableVpcCniProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnableVpcCniProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnableVpcCniProgressResponse rsp = DescribeEnableVpcCniProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnableVpcCniProgressOutcome(rsp);
        else
            return DescribeEnableVpcCniProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeEnableVpcCniProgressOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEnableVpcCniProgressAsync(const DescribeEnableVpcCniProgressRequest& request, const DescribeEnableVpcCniProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnableVpcCniProgressRequest&;
    using Resp = DescribeEnableVpcCniProgressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnableVpcCniProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEnableVpcCniProgressOutcomeCallable TkeClient::DescribeEnableVpcCniProgressCallable(const DescribeEnableVpcCniProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnableVpcCniProgressOutcome>>();
    DescribeEnableVpcCniProgressAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEnableVpcCniProgressRequest&,
        DescribeEnableVpcCniProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeEncryptionStatusOutcome TkeClient::DescribeEncryptionStatus(const DescribeEncryptionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptionStatusResponse rsp = DescribeEncryptionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptionStatusOutcome(rsp);
        else
            return DescribeEncryptionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptionStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEncryptionStatusAsync(const DescribeEncryptionStatusRequest& request, const DescribeEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEncryptionStatusRequest&;
    using Resp = DescribeEncryptionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEncryptionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeEncryptionStatusOutcomeCallable TkeClient::DescribeEncryptionStatusCallable(const DescribeEncryptionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEncryptionStatusOutcome>>();
    DescribeEncryptionStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeEncryptionStatusRequest&,
        DescribeEncryptionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeExistedInstancesOutcome TkeClient::DescribeExistedInstances(const DescribeExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExistedInstancesResponse rsp = DescribeExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExistedInstancesOutcome(rsp);
        else
            return DescribeExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeExistedInstancesAsync(const DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExistedInstancesRequest&;
    using Resp = DescribeExistedInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExistedInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeExistedInstancesOutcomeCallable TkeClient::DescribeExistedInstancesCallable(const DescribeExistedInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExistedInstancesOutcome>>();
    DescribeExistedInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeExistedInstancesRequest&,
        DescribeExistedInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeExternalNodeSupportConfigOutcome TkeClient::DescribeExternalNodeSupportConfig(const DescribeExternalNodeSupportConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalNodeSupportConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalNodeSupportConfigResponse rsp = DescribeExternalNodeSupportConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalNodeSupportConfigOutcome(rsp);
        else
            return DescribeExternalNodeSupportConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalNodeSupportConfigOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeExternalNodeSupportConfigAsync(const DescribeExternalNodeSupportConfigRequest& request, const DescribeExternalNodeSupportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalNodeSupportConfigRequest&;
    using Resp = DescribeExternalNodeSupportConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalNodeSupportConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeExternalNodeSupportConfigOutcomeCallable TkeClient::DescribeExternalNodeSupportConfigCallable(const DescribeExternalNodeSupportConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalNodeSupportConfigOutcome>>();
    DescribeExternalNodeSupportConfigAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeExternalNodeSupportConfigRequest&,
        DescribeExternalNodeSupportConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeIPAMDOutcome TkeClient::DescribeIPAMD(const DescribeIPAMDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPAMD");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPAMDResponse rsp = DescribeIPAMDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPAMDOutcome(rsp);
        else
            return DescribeIPAMDOutcome(o.GetError());
    }
    else
    {
        return DescribeIPAMDOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeIPAMDAsync(const DescribeIPAMDRequest& request, const DescribeIPAMDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPAMDRequest&;
    using Resp = DescribeIPAMDResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPAMD", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeIPAMDOutcomeCallable TkeClient::DescribeIPAMDCallable(const DescribeIPAMDRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPAMDOutcome>>();
    DescribeIPAMDAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeIPAMDRequest&,
        DescribeIPAMDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeImagesOutcome TkeClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeImagesOutcomeCallable TkeClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeLogConfigsOutcome TkeClient::DescribeLogConfigs(const DescribeLogConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogConfigsResponse rsp = DescribeLogConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogConfigsOutcome(rsp);
        else
            return DescribeLogConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogConfigsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeLogConfigsAsync(const DescribeLogConfigsRequest& request, const DescribeLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogConfigsRequest&;
    using Resp = DescribeLogConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeLogConfigsOutcomeCallable TkeClient::DescribeLogConfigsCallable(const DescribeLogConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogConfigsOutcome>>();
    DescribeLogConfigsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeLogConfigsRequest&,
        DescribeLogConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeLogSwitchesOutcome TkeClient::DescribeLogSwitches(const DescribeLogSwitchesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogSwitches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogSwitchesResponse rsp = DescribeLogSwitchesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogSwitchesOutcome(rsp);
        else
            return DescribeLogSwitchesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogSwitchesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeLogSwitchesAsync(const DescribeLogSwitchesRequest& request, const DescribeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogSwitchesRequest&;
    using Resp = DescribeLogSwitchesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogSwitches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeLogSwitchesOutcomeCallable TkeClient::DescribeLogSwitchesCallable(const DescribeLogSwitchesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogSwitchesOutcome>>();
    DescribeLogSwitchesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeLogSwitchesRequest&,
        DescribeLogSwitchesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribePodChargeInfoOutcome TkeClient::DescribePodChargeInfo(const DescribePodChargeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePodChargeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePodChargeInfoResponse rsp = DescribePodChargeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePodChargeInfoOutcome(rsp);
        else
            return DescribePodChargeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePodChargeInfoOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePodChargeInfoAsync(const DescribePodChargeInfoRequest& request, const DescribePodChargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePodChargeInfoRequest&;
    using Resp = DescribePodChargeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePodChargeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribePodChargeInfoOutcomeCallable TkeClient::DescribePodChargeInfoCallable(const DescribePodChargeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePodChargeInfoOutcome>>();
    DescribePodChargeInfoAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribePodChargeInfoRequest&,
        DescribePodChargeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribePrometheusInstanceOutcome TkeClient::DescribePrometheusInstance(const DescribePrometheusInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstanceResponse rsp = DescribePrometheusInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstanceOutcome(rsp);
        else
            return DescribePrometheusInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstanceOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusInstanceAsync(const DescribePrometheusInstanceRequest& request, const DescribePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrometheusInstanceRequest&;
    using Resp = DescribePrometheusInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrometheusInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribePrometheusInstanceOutcomeCallable TkeClient::DescribePrometheusInstanceCallable(const DescribePrometheusInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrometheusInstanceOutcome>>();
    DescribePrometheusInstanceAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribePrometheusInstanceRequest&,
        DescribePrometheusInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeRegionsOutcome TkeClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeRegionsOutcomeCallable TkeClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeReservedInstanceUtilizationRateOutcome TkeClient::DescribeReservedInstanceUtilizationRate(const DescribeReservedInstanceUtilizationRateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedInstanceUtilizationRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedInstanceUtilizationRateResponse rsp = DescribeReservedInstanceUtilizationRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedInstanceUtilizationRateOutcome(rsp);
        else
            return DescribeReservedInstanceUtilizationRateOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedInstanceUtilizationRateOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeReservedInstanceUtilizationRateAsync(const DescribeReservedInstanceUtilizationRateRequest& request, const DescribeReservedInstanceUtilizationRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReservedInstanceUtilizationRateRequest&;
    using Resp = DescribeReservedInstanceUtilizationRateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReservedInstanceUtilizationRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeReservedInstanceUtilizationRateOutcomeCallable TkeClient::DescribeReservedInstanceUtilizationRateCallable(const DescribeReservedInstanceUtilizationRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReservedInstanceUtilizationRateOutcome>>();
    DescribeReservedInstanceUtilizationRateAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeReservedInstanceUtilizationRateRequest&,
        DescribeReservedInstanceUtilizationRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeResourceUsageOutcome TkeClient::DescribeResourceUsage(const DescribeResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageResponse rsp = DescribeResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageOutcome(rsp);
        else
            return DescribeResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceUsageRequest&;
    using Resp = DescribeResourceUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeResourceUsageOutcomeCallable TkeClient::DescribeResourceUsageCallable(const DescribeResourceUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceUsageOutcome>>();
    DescribeResourceUsageAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeResourceUsageRequest&,
        DescribeResourceUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeRouteTableConflictsOutcome TkeClient::DescribeRouteTableConflicts(const DescribeRouteTableConflictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTableConflicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTableConflictsResponse rsp = DescribeRouteTableConflictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTableConflictsOutcome(rsp);
        else
            return DescribeRouteTableConflictsOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTableConflictsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeRouteTableConflictsAsync(const DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRouteTableConflictsRequest&;
    using Resp = DescribeRouteTableConflictsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRouteTableConflicts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeRouteTableConflictsOutcomeCallable TkeClient::DescribeRouteTableConflictsCallable(const DescribeRouteTableConflictsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteTableConflictsOutcome>>();
    DescribeRouteTableConflictsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeRouteTableConflictsRequest&,
        DescribeRouteTableConflictsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeSupportedRuntimeOutcome TkeClient::DescribeSupportedRuntime(const DescribeSupportedRuntimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportedRuntime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportedRuntimeResponse rsp = DescribeSupportedRuntimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportedRuntimeOutcome(rsp);
        else
            return DescribeSupportedRuntimeOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportedRuntimeOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeSupportedRuntimeAsync(const DescribeSupportedRuntimeRequest& request, const DescribeSupportedRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportedRuntimeRequest&;
    using Resp = DescribeSupportedRuntimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportedRuntime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeSupportedRuntimeOutcomeCallable TkeClient::DescribeSupportedRuntimeCallable(const DescribeSupportedRuntimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportedRuntimeOutcome>>();
    DescribeSupportedRuntimeAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeSupportedRuntimeRequest&,
        DescribeSupportedRuntimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeTKEEdgeClusterCredentialOutcome TkeClient::DescribeTKEEdgeClusterCredential(const DescribeTKEEdgeClusterCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusterCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClusterCredentialResponse rsp = DescribeTKEEdgeClusterCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClusterCredentialOutcome(rsp);
        else
            return DescribeTKEEdgeClusterCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClusterCredentialOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClusterCredentialAsync(const DescribeTKEEdgeClusterCredentialRequest& request, const DescribeTKEEdgeClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTKEEdgeClusterCredentialRequest&;
    using Resp = DescribeTKEEdgeClusterCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTKEEdgeClusterCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeTKEEdgeClusterCredentialOutcomeCallable TkeClient::DescribeTKEEdgeClusterCredentialCallable(const DescribeTKEEdgeClusterCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTKEEdgeClusterCredentialOutcome>>();
    DescribeTKEEdgeClusterCredentialAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeTKEEdgeClusterCredentialRequest&,
        DescribeTKEEdgeClusterCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeTKEEdgeClusterStatusOutcome TkeClient::DescribeTKEEdgeClusterStatus(const DescribeTKEEdgeClusterStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusterStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClusterStatusResponse rsp = DescribeTKEEdgeClusterStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClusterStatusOutcome(rsp);
        else
            return DescribeTKEEdgeClusterStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClusterStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClusterStatusAsync(const DescribeTKEEdgeClusterStatusRequest& request, const DescribeTKEEdgeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTKEEdgeClusterStatusRequest&;
    using Resp = DescribeTKEEdgeClusterStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTKEEdgeClusterStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeTKEEdgeClusterStatusOutcomeCallable TkeClient::DescribeTKEEdgeClusterStatusCallable(const DescribeTKEEdgeClusterStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTKEEdgeClusterStatusOutcome>>();
    DescribeTKEEdgeClusterStatusAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeTKEEdgeClusterStatusRequest&,
        DescribeTKEEdgeClusterStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeTKEEdgeClustersOutcome TkeClient::DescribeTKEEdgeClusters(const DescribeTKEEdgeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClustersResponse rsp = DescribeTKEEdgeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClustersOutcome(rsp);
        else
            return DescribeTKEEdgeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClustersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClustersAsync(const DescribeTKEEdgeClustersRequest& request, const DescribeTKEEdgeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTKEEdgeClustersRequest&;
    using Resp = DescribeTKEEdgeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTKEEdgeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeTKEEdgeClustersOutcomeCallable TkeClient::DescribeTKEEdgeClustersCallable(const DescribeTKEEdgeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTKEEdgeClustersOutcome>>();
    DescribeTKEEdgeClustersAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeTKEEdgeClustersRequest&,
        DescribeTKEEdgeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeTKEEdgeExternalKubeconfigOutcome TkeClient::DescribeTKEEdgeExternalKubeconfig(const DescribeTKEEdgeExternalKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeExternalKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeExternalKubeconfigResponse rsp = DescribeTKEEdgeExternalKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeExternalKubeconfigOutcome(rsp);
        else
            return DescribeTKEEdgeExternalKubeconfigOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeExternalKubeconfigOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeExternalKubeconfigAsync(const DescribeTKEEdgeExternalKubeconfigRequest& request, const DescribeTKEEdgeExternalKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTKEEdgeExternalKubeconfigRequest&;
    using Resp = DescribeTKEEdgeExternalKubeconfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTKEEdgeExternalKubeconfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeTKEEdgeExternalKubeconfigOutcomeCallable TkeClient::DescribeTKEEdgeExternalKubeconfigCallable(const DescribeTKEEdgeExternalKubeconfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTKEEdgeExternalKubeconfigOutcome>>();
    DescribeTKEEdgeExternalKubeconfigAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeTKEEdgeExternalKubeconfigRequest&,
        DescribeTKEEdgeExternalKubeconfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeTKEEdgeScriptOutcome TkeClient::DescribeTKEEdgeScript(const DescribeTKEEdgeScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeScriptResponse rsp = DescribeTKEEdgeScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeScriptOutcome(rsp);
        else
            return DescribeTKEEdgeScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeScriptOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeScriptAsync(const DescribeTKEEdgeScriptRequest& request, const DescribeTKEEdgeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTKEEdgeScriptRequest&;
    using Resp = DescribeTKEEdgeScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTKEEdgeScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeTKEEdgeScriptOutcomeCallable TkeClient::DescribeTKEEdgeScriptCallable(const DescribeTKEEdgeScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTKEEdgeScriptOutcome>>();
    DescribeTKEEdgeScriptAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeTKEEdgeScriptRequest&,
        DescribeTKEEdgeScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeVersionsOutcome TkeClient::DescribeVersions(const DescribeVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionsResponse rsp = DescribeVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionsOutcome(rsp);
        else
            return DescribeVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeVersionsAsync(const DescribeVersionsRequest& request, const DescribeVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVersionsRequest&;
    using Resp = DescribeVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeVersionsOutcomeCallable TkeClient::DescribeVersionsCallable(const DescribeVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVersionsOutcome>>();
    DescribeVersionsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeVersionsRequest&,
        DescribeVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeVpcCniPodLimitsOutcome TkeClient::DescribeVpcCniPodLimits(const DescribeVpcCniPodLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcCniPodLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcCniPodLimitsResponse rsp = DescribeVpcCniPodLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcCniPodLimitsOutcome(rsp);
        else
            return DescribeVpcCniPodLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcCniPodLimitsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeVpcCniPodLimitsAsync(const DescribeVpcCniPodLimitsRequest& request, const DescribeVpcCniPodLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcCniPodLimitsRequest&;
    using Resp = DescribeVpcCniPodLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcCniPodLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeVpcCniPodLimitsOutcomeCallable TkeClient::DescribeVpcCniPodLimitsCallable(const DescribeVpcCniPodLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcCniPodLimitsOutcome>>();
    DescribeVpcCniPodLimitsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeVpcCniPodLimitsRequest&,
        DescribeVpcCniPodLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DisableClusterDeletionProtectionOutcome TkeClient::DisableClusterDeletionProtection(const DisableClusterDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableClusterDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableClusterDeletionProtectionResponse rsp = DisableClusterDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableClusterDeletionProtectionOutcome(rsp);
        else
            return DisableClusterDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return DisableClusterDeletionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::DisableClusterDeletionProtectionAsync(const DisableClusterDeletionProtectionRequest& request, const DisableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableClusterDeletionProtectionRequest&;
    using Resp = DisableClusterDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DisableClusterDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DisableClusterDeletionProtectionOutcomeCallable TkeClient::DisableClusterDeletionProtectionCallable(const DisableClusterDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableClusterDeletionProtectionOutcome>>();
    DisableClusterDeletionProtectionAsync(
    request,
    [prom](
        const TkeClient*,
        const DisableClusterDeletionProtectionRequest&,
        DisableClusterDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DisableControlPlaneLogsOutcome TkeClient::DisableControlPlaneLogs(const DisableControlPlaneLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DisableControlPlaneLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableControlPlaneLogsResponse rsp = DisableControlPlaneLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableControlPlaneLogsOutcome(rsp);
        else
            return DisableControlPlaneLogsOutcome(o.GetError());
    }
    else
    {
        return DisableControlPlaneLogsOutcome(outcome.GetError());
    }
}

void TkeClient::DisableControlPlaneLogsAsync(const DisableControlPlaneLogsRequest& request, const DisableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableControlPlaneLogsRequest&;
    using Resp = DisableControlPlaneLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DisableControlPlaneLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DisableControlPlaneLogsOutcomeCallable TkeClient::DisableControlPlaneLogsCallable(const DisableControlPlaneLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableControlPlaneLogsOutcome>>();
    DisableControlPlaneLogsAsync(
    request,
    [prom](
        const TkeClient*,
        const DisableControlPlaneLogsRequest&,
        DisableControlPlaneLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DisableEncryptionProtectionOutcome TkeClient::DisableEncryptionProtection(const DisableEncryptionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableEncryptionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableEncryptionProtectionResponse rsp = DisableEncryptionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableEncryptionProtectionOutcome(rsp);
        else
            return DisableEncryptionProtectionOutcome(o.GetError());
    }
    else
    {
        return DisableEncryptionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::DisableEncryptionProtectionAsync(const DisableEncryptionProtectionRequest& request, const DisableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableEncryptionProtectionRequest&;
    using Resp = DisableEncryptionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DisableEncryptionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DisableEncryptionProtectionOutcomeCallable TkeClient::DisableEncryptionProtectionCallable(const DisableEncryptionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableEncryptionProtectionOutcome>>();
    DisableEncryptionProtectionAsync(
    request,
    [prom](
        const TkeClient*,
        const DisableEncryptionProtectionRequest&,
        DisableEncryptionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DrainClusterVirtualNodeOutcome TkeClient::DrainClusterVirtualNode(const DrainClusterVirtualNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DrainClusterVirtualNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DrainClusterVirtualNodeResponse rsp = DrainClusterVirtualNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DrainClusterVirtualNodeOutcome(rsp);
        else
            return DrainClusterVirtualNodeOutcome(o.GetError());
    }
    else
    {
        return DrainClusterVirtualNodeOutcome(outcome.GetError());
    }
}

void TkeClient::DrainClusterVirtualNodeAsync(const DrainClusterVirtualNodeRequest& request, const DrainClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DrainClusterVirtualNodeRequest&;
    using Resp = DrainClusterVirtualNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DrainClusterVirtualNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DrainClusterVirtualNodeOutcomeCallable TkeClient::DrainClusterVirtualNodeCallable(const DrainClusterVirtualNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DrainClusterVirtualNodeOutcome>>();
    DrainClusterVirtualNodeAsync(
    request,
    [prom](
        const TkeClient*,
        const DrainClusterVirtualNodeRequest&,
        DrainClusterVirtualNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::EnableClusterDeletionProtectionOutcome TkeClient::EnableClusterDeletionProtection(const EnableClusterDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "EnableClusterDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableClusterDeletionProtectionResponse rsp = EnableClusterDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableClusterDeletionProtectionOutcome(rsp);
        else
            return EnableClusterDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return EnableClusterDeletionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::EnableClusterDeletionProtectionAsync(const EnableClusterDeletionProtectionRequest& request, const EnableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableClusterDeletionProtectionRequest&;
    using Resp = EnableClusterDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "EnableClusterDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::EnableClusterDeletionProtectionOutcomeCallable TkeClient::EnableClusterDeletionProtectionCallable(const EnableClusterDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableClusterDeletionProtectionOutcome>>();
    EnableClusterDeletionProtectionAsync(
    request,
    [prom](
        const TkeClient*,
        const EnableClusterDeletionProtectionRequest&,
        EnableClusterDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::EnableControlPlaneLogsOutcome TkeClient::EnableControlPlaneLogs(const EnableControlPlaneLogsRequest &request)
{
    auto outcome = MakeRequest(request, "EnableControlPlaneLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableControlPlaneLogsResponse rsp = EnableControlPlaneLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableControlPlaneLogsOutcome(rsp);
        else
            return EnableControlPlaneLogsOutcome(o.GetError());
    }
    else
    {
        return EnableControlPlaneLogsOutcome(outcome.GetError());
    }
}

void TkeClient::EnableControlPlaneLogsAsync(const EnableControlPlaneLogsRequest& request, const EnableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableControlPlaneLogsRequest&;
    using Resp = EnableControlPlaneLogsResponse;

    DoRequestAsync<Req, Resp>(
        "EnableControlPlaneLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::EnableControlPlaneLogsOutcomeCallable TkeClient::EnableControlPlaneLogsCallable(const EnableControlPlaneLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableControlPlaneLogsOutcome>>();
    EnableControlPlaneLogsAsync(
    request,
    [prom](
        const TkeClient*,
        const EnableControlPlaneLogsRequest&,
        EnableControlPlaneLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::EnableEncryptionProtectionOutcome TkeClient::EnableEncryptionProtection(const EnableEncryptionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "EnableEncryptionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableEncryptionProtectionResponse rsp = EnableEncryptionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableEncryptionProtectionOutcome(rsp);
        else
            return EnableEncryptionProtectionOutcome(o.GetError());
    }
    else
    {
        return EnableEncryptionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::EnableEncryptionProtectionAsync(const EnableEncryptionProtectionRequest& request, const EnableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableEncryptionProtectionRequest&;
    using Resp = EnableEncryptionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "EnableEncryptionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::EnableEncryptionProtectionOutcomeCallable TkeClient::EnableEncryptionProtectionCallable(const EnableEncryptionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableEncryptionProtectionOutcome>>();
    EnableEncryptionProtectionAsync(
    request,
    [prom](
        const TkeClient*,
        const EnableEncryptionProtectionRequest&,
        EnableEncryptionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::EnableVpcCniNetworkTypeOutcome TkeClient::EnableVpcCniNetworkType(const EnableVpcCniNetworkTypeRequest &request)
{
    auto outcome = MakeRequest(request, "EnableVpcCniNetworkType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableVpcCniNetworkTypeResponse rsp = EnableVpcCniNetworkTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableVpcCniNetworkTypeOutcome(rsp);
        else
            return EnableVpcCniNetworkTypeOutcome(o.GetError());
    }
    else
    {
        return EnableVpcCniNetworkTypeOutcome(outcome.GetError());
    }
}

void TkeClient::EnableVpcCniNetworkTypeAsync(const EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableVpcCniNetworkTypeRequest&;
    using Resp = EnableVpcCniNetworkTypeResponse;

    DoRequestAsync<Req, Resp>(
        "EnableVpcCniNetworkType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::EnableVpcCniNetworkTypeOutcomeCallable TkeClient::EnableVpcCniNetworkTypeCallable(const EnableVpcCniNetworkTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableVpcCniNetworkTypeOutcome>>();
    EnableVpcCniNetworkTypeAsync(
    request,
    [prom](
        const TkeClient*,
        const EnableVpcCniNetworkTypeRequest&,
        EnableVpcCniNetworkTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ForwardTKEEdgeApplicationRequestV3Outcome TkeClient::ForwardTKEEdgeApplicationRequestV3(const ForwardTKEEdgeApplicationRequestV3Request &request)
{
    auto outcome = MakeRequest(request, "ForwardTKEEdgeApplicationRequestV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForwardTKEEdgeApplicationRequestV3Response rsp = ForwardTKEEdgeApplicationRequestV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForwardTKEEdgeApplicationRequestV3Outcome(rsp);
        else
            return ForwardTKEEdgeApplicationRequestV3Outcome(o.GetError());
    }
    else
    {
        return ForwardTKEEdgeApplicationRequestV3Outcome(outcome.GetError());
    }
}

void TkeClient::ForwardTKEEdgeApplicationRequestV3Async(const ForwardTKEEdgeApplicationRequestV3Request& request, const ForwardTKEEdgeApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForwardTKEEdgeApplicationRequestV3Request&;
    using Resp = ForwardTKEEdgeApplicationRequestV3Response;

    DoRequestAsync<Req, Resp>(
        "ForwardTKEEdgeApplicationRequestV3", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ForwardTKEEdgeApplicationRequestV3OutcomeCallable TkeClient::ForwardTKEEdgeApplicationRequestV3Callable(const ForwardTKEEdgeApplicationRequestV3Request &request)
{
    const auto prom = std::make_shared<std::promise<ForwardTKEEdgeApplicationRequestV3Outcome>>();
    ForwardTKEEdgeApplicationRequestV3Async(
    request,
    [prom](
        const TkeClient*,
        const ForwardTKEEdgeApplicationRequestV3Request&,
        ForwardTKEEdgeApplicationRequestV3Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::GetClusterLevelPriceOutcome TkeClient::GetClusterLevelPrice(const GetClusterLevelPriceRequest &request)
{
    auto outcome = MakeRequest(request, "GetClusterLevelPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetClusterLevelPriceResponse rsp = GetClusterLevelPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetClusterLevelPriceOutcome(rsp);
        else
            return GetClusterLevelPriceOutcome(o.GetError());
    }
    else
    {
        return GetClusterLevelPriceOutcome(outcome.GetError());
    }
}

void TkeClient::GetClusterLevelPriceAsync(const GetClusterLevelPriceRequest& request, const GetClusterLevelPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetClusterLevelPriceRequest&;
    using Resp = GetClusterLevelPriceResponse;

    DoRequestAsync<Req, Resp>(
        "GetClusterLevelPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::GetClusterLevelPriceOutcomeCallable TkeClient::GetClusterLevelPriceCallable(const GetClusterLevelPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetClusterLevelPriceOutcome>>();
    GetClusterLevelPriceAsync(
    request,
    [prom](
        const TkeClient*,
        const GetClusterLevelPriceRequest&,
        GetClusterLevelPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::GetTkeAppChartListOutcome TkeClient::GetTkeAppChartList(const GetTkeAppChartListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTkeAppChartList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTkeAppChartListResponse rsp = GetTkeAppChartListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTkeAppChartListOutcome(rsp);
        else
            return GetTkeAppChartListOutcome(o.GetError());
    }
    else
    {
        return GetTkeAppChartListOutcome(outcome.GetError());
    }
}

void TkeClient::GetTkeAppChartListAsync(const GetTkeAppChartListRequest& request, const GetTkeAppChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTkeAppChartListRequest&;
    using Resp = GetTkeAppChartListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTkeAppChartList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::GetTkeAppChartListOutcomeCallable TkeClient::GetTkeAppChartListCallable(const GetTkeAppChartListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTkeAppChartListOutcome>>();
    GetTkeAppChartListAsync(
    request,
    [prom](
        const TkeClient*,
        const GetTkeAppChartListRequest&,
        GetTkeAppChartListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::GetUpgradeInstanceProgressOutcome TkeClient::GetUpgradeInstanceProgress(const GetUpgradeInstanceProgressRequest &request)
{
    auto outcome = MakeRequest(request, "GetUpgradeInstanceProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUpgradeInstanceProgressResponse rsp = GetUpgradeInstanceProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUpgradeInstanceProgressOutcome(rsp);
        else
            return GetUpgradeInstanceProgressOutcome(o.GetError());
    }
    else
    {
        return GetUpgradeInstanceProgressOutcome(outcome.GetError());
    }
}

void TkeClient::GetUpgradeInstanceProgressAsync(const GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUpgradeInstanceProgressRequest&;
    using Resp = GetUpgradeInstanceProgressResponse;

    DoRequestAsync<Req, Resp>(
        "GetUpgradeInstanceProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::GetUpgradeInstanceProgressOutcomeCallable TkeClient::GetUpgradeInstanceProgressCallable(const GetUpgradeInstanceProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUpgradeInstanceProgressOutcome>>();
    GetUpgradeInstanceProgressAsync(
    request,
    [prom](
        const TkeClient*,
        const GetUpgradeInstanceProgressRequest&,
        GetUpgradeInstanceProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::InstallAddonOutcome TkeClient::InstallAddon(const InstallAddonRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAddon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAddonResponse rsp = InstallAddonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAddonOutcome(rsp);
        else
            return InstallAddonOutcome(o.GetError());
    }
    else
    {
        return InstallAddonOutcome(outcome.GetError());
    }
}

void TkeClient::InstallAddonAsync(const InstallAddonRequest& request, const InstallAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallAddonRequest&;
    using Resp = InstallAddonResponse;

    DoRequestAsync<Req, Resp>(
        "InstallAddon", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::InstallAddonOutcomeCallable TkeClient::InstallAddonCallable(const InstallAddonRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallAddonOutcome>>();
    InstallAddonAsync(
    request,
    [prom](
        const TkeClient*,
        const InstallAddonRequest&,
        InstallAddonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::InstallEdgeLogAgentOutcome TkeClient::InstallEdgeLogAgent(const InstallEdgeLogAgentRequest &request)
{
    auto outcome = MakeRequest(request, "InstallEdgeLogAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallEdgeLogAgentResponse rsp = InstallEdgeLogAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallEdgeLogAgentOutcome(rsp);
        else
            return InstallEdgeLogAgentOutcome(o.GetError());
    }
    else
    {
        return InstallEdgeLogAgentOutcome(outcome.GetError());
    }
}

void TkeClient::InstallEdgeLogAgentAsync(const InstallEdgeLogAgentRequest& request, const InstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallEdgeLogAgentRequest&;
    using Resp = InstallEdgeLogAgentResponse;

    DoRequestAsync<Req, Resp>(
        "InstallEdgeLogAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::InstallEdgeLogAgentOutcomeCallable TkeClient::InstallEdgeLogAgentCallable(const InstallEdgeLogAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallEdgeLogAgentOutcome>>();
    InstallEdgeLogAgentAsync(
    request,
    [prom](
        const TkeClient*,
        const InstallEdgeLogAgentRequest&,
        InstallEdgeLogAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterAsGroupAttributeOutcome TkeClient::ModifyClusterAsGroupAttribute(const ModifyClusterAsGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAsGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAsGroupAttributeResponse rsp = ModifyClusterAsGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAsGroupAttributeOutcome(rsp);
        else
            return ModifyClusterAsGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAsGroupAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAsGroupAttributeAsync(const ModifyClusterAsGroupAttributeRequest& request, const ModifyClusterAsGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterAsGroupAttributeRequest&;
    using Resp = ModifyClusterAsGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterAsGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterAsGroupAttributeOutcomeCallable TkeClient::ModifyClusterAsGroupAttributeCallable(const ModifyClusterAsGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterAsGroupAttributeOutcome>>();
    ModifyClusterAsGroupAttributeAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterAsGroupAttributeRequest&,
        ModifyClusterAsGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterAsGroupOptionAttributeOutcome TkeClient::ModifyClusterAsGroupOptionAttribute(const ModifyClusterAsGroupOptionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAsGroupOptionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAsGroupOptionAttributeResponse rsp = ModifyClusterAsGroupOptionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAsGroupOptionAttributeOutcome(rsp);
        else
            return ModifyClusterAsGroupOptionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAsGroupOptionAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAsGroupOptionAttributeAsync(const ModifyClusterAsGroupOptionAttributeRequest& request, const ModifyClusterAsGroupOptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterAsGroupOptionAttributeRequest&;
    using Resp = ModifyClusterAsGroupOptionAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterAsGroupOptionAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterAsGroupOptionAttributeOutcomeCallable TkeClient::ModifyClusterAsGroupOptionAttributeCallable(const ModifyClusterAsGroupOptionAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterAsGroupOptionAttributeOutcome>>();
    ModifyClusterAsGroupOptionAttributeAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterAsGroupOptionAttributeRequest&,
        ModifyClusterAsGroupOptionAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterAttributeOutcome TkeClient::ModifyClusterAttribute(const ModifyClusterAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAttributeResponse rsp = ModifyClusterAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAttributeOutcome(rsp);
        else
            return ModifyClusterAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAttributeAsync(const ModifyClusterAttributeRequest& request, const ModifyClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterAttributeRequest&;
    using Resp = ModifyClusterAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterAttributeOutcomeCallable TkeClient::ModifyClusterAttributeCallable(const ModifyClusterAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterAttributeOutcome>>();
    ModifyClusterAttributeAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterAttributeRequest&,
        ModifyClusterAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterAuthenticationOptionsOutcome TkeClient::ModifyClusterAuthenticationOptions(const ModifyClusterAuthenticationOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAuthenticationOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAuthenticationOptionsResponse rsp = ModifyClusterAuthenticationOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAuthenticationOptionsOutcome(rsp);
        else
            return ModifyClusterAuthenticationOptionsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAuthenticationOptionsOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAuthenticationOptionsAsync(const ModifyClusterAuthenticationOptionsRequest& request, const ModifyClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterAuthenticationOptionsRequest&;
    using Resp = ModifyClusterAuthenticationOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterAuthenticationOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterAuthenticationOptionsOutcomeCallable TkeClient::ModifyClusterAuthenticationOptionsCallable(const ModifyClusterAuthenticationOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterAuthenticationOptionsOutcome>>();
    ModifyClusterAuthenticationOptionsAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterAuthenticationOptionsRequest&,
        ModifyClusterAuthenticationOptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterEndpointSPOutcome TkeClient::ModifyClusterEndpointSP(const ModifyClusterEndpointSPRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterEndpointSP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterEndpointSPResponse rsp = ModifyClusterEndpointSPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterEndpointSPOutcome(rsp);
        else
            return ModifyClusterEndpointSPOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterEndpointSPOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterEndpointSPAsync(const ModifyClusterEndpointSPRequest& request, const ModifyClusterEndpointSPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterEndpointSPRequest&;
    using Resp = ModifyClusterEndpointSPResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterEndpointSP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterEndpointSPOutcomeCallable TkeClient::ModifyClusterEndpointSPCallable(const ModifyClusterEndpointSPRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterEndpointSPOutcome>>();
    ModifyClusterEndpointSPAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterEndpointSPRequest&,
        ModifyClusterEndpointSPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterImageOutcome TkeClient::ModifyClusterImage(const ModifyClusterImageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterImageResponse rsp = ModifyClusterImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterImageOutcome(rsp);
        else
            return ModifyClusterImageOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterImageOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterImageAsync(const ModifyClusterImageRequest& request, const ModifyClusterImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterImageRequest&;
    using Resp = ModifyClusterImageResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterImageOutcomeCallable TkeClient::ModifyClusterImageCallable(const ModifyClusterImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterImageOutcome>>();
    ModifyClusterImageAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterImageRequest&,
        ModifyClusterImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterNodePoolOutcome TkeClient::ModifyClusterNodePool(const ModifyClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNodePoolResponse rsp = ModifyClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNodePoolOutcome(rsp);
        else
            return ModifyClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterNodePoolAsync(const ModifyClusterNodePoolRequest& request, const ModifyClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterNodePoolRequest&;
    using Resp = ModifyClusterNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterNodePoolOutcomeCallable TkeClient::ModifyClusterNodePoolCallable(const ModifyClusterNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterNodePoolOutcome>>();
    ModifyClusterNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterNodePoolRequest&,
        ModifyClusterNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterRuntimeConfigOutcome TkeClient::ModifyClusterRuntimeConfig(const ModifyClusterRuntimeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterRuntimeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterRuntimeConfigResponse rsp = ModifyClusterRuntimeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterRuntimeConfigOutcome(rsp);
        else
            return ModifyClusterRuntimeConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterRuntimeConfigOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterRuntimeConfigAsync(const ModifyClusterRuntimeConfigRequest& request, const ModifyClusterRuntimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterRuntimeConfigRequest&;
    using Resp = ModifyClusterRuntimeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterRuntimeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterRuntimeConfigOutcomeCallable TkeClient::ModifyClusterRuntimeConfigCallable(const ModifyClusterRuntimeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterRuntimeConfigOutcome>>();
    ModifyClusterRuntimeConfigAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterRuntimeConfigRequest&,
        ModifyClusterRuntimeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterTagsOutcome TkeClient::ModifyClusterTags(const ModifyClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterTagsResponse rsp = ModifyClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterTagsOutcome(rsp);
        else
            return ModifyClusterTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterTagsOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterTagsAsync(const ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterTagsRequest&;
    using Resp = ModifyClusterTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterTagsOutcomeCallable TkeClient::ModifyClusterTagsCallable(const ModifyClusterTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterTagsOutcome>>();
    ModifyClusterTagsAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterTagsRequest&,
        ModifyClusterTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyClusterVirtualNodePoolOutcome TkeClient::ModifyClusterVirtualNodePool(const ModifyClusterVirtualNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterVirtualNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterVirtualNodePoolResponse rsp = ModifyClusterVirtualNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterVirtualNodePoolOutcome(rsp);
        else
            return ModifyClusterVirtualNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterVirtualNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterVirtualNodePoolAsync(const ModifyClusterVirtualNodePoolRequest& request, const ModifyClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterVirtualNodePoolRequest&;
    using Resp = ModifyClusterVirtualNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterVirtualNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyClusterVirtualNodePoolOutcomeCallable TkeClient::ModifyClusterVirtualNodePoolCallable(const ModifyClusterVirtualNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterVirtualNodePoolOutcome>>();
    ModifyClusterVirtualNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyClusterVirtualNodePoolRequest&,
        ModifyClusterVirtualNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyNodePoolInstanceTypesOutcome TkeClient::ModifyNodePoolInstanceTypes(const ModifyNodePoolInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePoolInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolInstanceTypesResponse rsp = ModifyNodePoolInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolInstanceTypesOutcome(rsp);
        else
            return ModifyNodePoolInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolInstanceTypesOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolInstanceTypesAsync(const ModifyNodePoolInstanceTypesRequest& request, const ModifyNodePoolInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNodePoolInstanceTypesRequest&;
    using Resp = ModifyNodePoolInstanceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNodePoolInstanceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyNodePoolInstanceTypesOutcomeCallable TkeClient::ModifyNodePoolInstanceTypesCallable(const ModifyNodePoolInstanceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNodePoolInstanceTypesOutcome>>();
    ModifyNodePoolInstanceTypesAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyNodePoolInstanceTypesRequest&,
        ModifyNodePoolInstanceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyPrometheusAlertRuleOutcome TkeClient::ModifyPrometheusAlertRule(const ModifyPrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusAlertRuleResponse rsp = ModifyPrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusAlertRuleOutcome(rsp);
        else
            return ModifyPrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusAlertRuleAsync(const ModifyPrometheusAlertRuleRequest& request, const ModifyPrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrometheusAlertRuleRequest&;
    using Resp = ModifyPrometheusAlertRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrometheusAlertRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyPrometheusAlertRuleOutcomeCallable TkeClient::ModifyPrometheusAlertRuleCallable(const ModifyPrometheusAlertRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrometheusAlertRuleOutcome>>();
    ModifyPrometheusAlertRuleAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyPrometheusAlertRuleRequest&,
        ModifyPrometheusAlertRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::RemoveNodeFromNodePoolOutcome TkeClient::RemoveNodeFromNodePool(const RemoveNodeFromNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNodeFromNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNodeFromNodePoolResponse rsp = RemoveNodeFromNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNodeFromNodePoolOutcome(rsp);
        else
            return RemoveNodeFromNodePoolOutcome(o.GetError());
    }
    else
    {
        return RemoveNodeFromNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::RemoveNodeFromNodePoolAsync(const RemoveNodeFromNodePoolRequest& request, const RemoveNodeFromNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveNodeFromNodePoolRequest&;
    using Resp = RemoveNodeFromNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveNodeFromNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::RemoveNodeFromNodePoolOutcomeCallable TkeClient::RemoveNodeFromNodePoolCallable(const RemoveNodeFromNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveNodeFromNodePoolOutcome>>();
    RemoveNodeFromNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const RemoveNodeFromNodePoolRequest&,
        RemoveNodeFromNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::SetNodePoolNodeProtectionOutcome TkeClient::SetNodePoolNodeProtection(const SetNodePoolNodeProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "SetNodePoolNodeProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNodePoolNodeProtectionResponse rsp = SetNodePoolNodeProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNodePoolNodeProtectionOutcome(rsp);
        else
            return SetNodePoolNodeProtectionOutcome(o.GetError());
    }
    else
    {
        return SetNodePoolNodeProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::SetNodePoolNodeProtectionAsync(const SetNodePoolNodeProtectionRequest& request, const SetNodePoolNodeProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetNodePoolNodeProtectionRequest&;
    using Resp = SetNodePoolNodeProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "SetNodePoolNodeProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::SetNodePoolNodeProtectionOutcomeCallable TkeClient::SetNodePoolNodeProtectionCallable(const SetNodePoolNodeProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNodePoolNodeProtectionOutcome>>();
    SetNodePoolNodeProtectionAsync(
    request,
    [prom](
        const TkeClient*,
        const SetNodePoolNodeProtectionRequest&,
        SetNodePoolNodeProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UninstallEdgeLogAgentOutcome TkeClient::UninstallEdgeLogAgent(const UninstallEdgeLogAgentRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallEdgeLogAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallEdgeLogAgentResponse rsp = UninstallEdgeLogAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallEdgeLogAgentOutcome(rsp);
        else
            return UninstallEdgeLogAgentOutcome(o.GetError());
    }
    else
    {
        return UninstallEdgeLogAgentOutcome(outcome.GetError());
    }
}

void TkeClient::UninstallEdgeLogAgentAsync(const UninstallEdgeLogAgentRequest& request, const UninstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UninstallEdgeLogAgentRequest&;
    using Resp = UninstallEdgeLogAgentResponse;

    DoRequestAsync<Req, Resp>(
        "UninstallEdgeLogAgent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UninstallEdgeLogAgentOutcomeCallable TkeClient::UninstallEdgeLogAgentCallable(const UninstallEdgeLogAgentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UninstallEdgeLogAgentOutcome>>();
    UninstallEdgeLogAgentAsync(
    request,
    [prom](
        const TkeClient*,
        const UninstallEdgeLogAgentRequest&,
        UninstallEdgeLogAgentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UpdateAddonOutcome TkeClient::UpdateAddon(const UpdateAddonRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAddon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAddonResponse rsp = UpdateAddonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAddonOutcome(rsp);
        else
            return UpdateAddonOutcome(o.GetError());
    }
    else
    {
        return UpdateAddonOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateAddonAsync(const UpdateAddonRequest& request, const UpdateAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAddonRequest&;
    using Resp = UpdateAddonResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAddon", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UpdateAddonOutcomeCallable TkeClient::UpdateAddonCallable(const UpdateAddonRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAddonOutcome>>();
    UpdateAddonAsync(
    request,
    [prom](
        const TkeClient*,
        const UpdateAddonRequest&,
        UpdateAddonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UpdateClusterKubeconfigOutcome TkeClient::UpdateClusterKubeconfig(const UpdateClusterKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClusterKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClusterKubeconfigResponse rsp = UpdateClusterKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClusterKubeconfigOutcome(rsp);
        else
            return UpdateClusterKubeconfigOutcome(o.GetError());
    }
    else
    {
        return UpdateClusterKubeconfigOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateClusterKubeconfigAsync(const UpdateClusterKubeconfigRequest& request, const UpdateClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateClusterKubeconfigRequest&;
    using Resp = UpdateClusterKubeconfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateClusterKubeconfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UpdateClusterKubeconfigOutcomeCallable TkeClient::UpdateClusterKubeconfigCallable(const UpdateClusterKubeconfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateClusterKubeconfigOutcome>>();
    UpdateClusterKubeconfigAsync(
    request,
    [prom](
        const TkeClient*,
        const UpdateClusterKubeconfigRequest&,
        UpdateClusterKubeconfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UpdateClusterVersionOutcome TkeClient::UpdateClusterVersion(const UpdateClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClusterVersionResponse rsp = UpdateClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClusterVersionOutcome(rsp);
        else
            return UpdateClusterVersionOutcome(o.GetError());
    }
    else
    {
        return UpdateClusterVersionOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateClusterVersionAsync(const UpdateClusterVersionRequest& request, const UpdateClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateClusterVersionRequest&;
    using Resp = UpdateClusterVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateClusterVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UpdateClusterVersionOutcomeCallable TkeClient::UpdateClusterVersionCallable(const UpdateClusterVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateClusterVersionOutcome>>();
    UpdateClusterVersionAsync(
    request,
    [prom](
        const TkeClient*,
        const UpdateClusterVersionRequest&,
        UpdateClusterVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UpdateEdgeClusterVersionOutcome TkeClient::UpdateEdgeClusterVersion(const UpdateEdgeClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEdgeClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEdgeClusterVersionResponse rsp = UpdateEdgeClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEdgeClusterVersionOutcome(rsp);
        else
            return UpdateEdgeClusterVersionOutcome(o.GetError());
    }
    else
    {
        return UpdateEdgeClusterVersionOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateEdgeClusterVersionAsync(const UpdateEdgeClusterVersionRequest& request, const UpdateEdgeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEdgeClusterVersionRequest&;
    using Resp = UpdateEdgeClusterVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEdgeClusterVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UpdateEdgeClusterVersionOutcomeCallable TkeClient::UpdateEdgeClusterVersionCallable(const UpdateEdgeClusterVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEdgeClusterVersionOutcome>>();
    UpdateEdgeClusterVersionAsync(
    request,
    [prom](
        const TkeClient*,
        const UpdateEdgeClusterVersionRequest&,
        UpdateEdgeClusterVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::UpgradeClusterInstancesOutcome TkeClient::UpgradeClusterInstances(const UpgradeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeClusterInstancesResponse rsp = UpgradeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeClusterInstancesOutcome(rsp);
        else
            return UpgradeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return UpgradeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::UpgradeClusterInstancesAsync(const UpgradeClusterInstancesRequest& request, const UpgradeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeClusterInstancesRequest&;
    using Resp = UpgradeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::UpgradeClusterInstancesOutcomeCallable TkeClient::UpgradeClusterInstancesCallable(const UpgradeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeClusterInstancesOutcome>>();
    UpgradeClusterInstancesAsync(
    request,
    [prom](
        const TkeClient*,
        const UpgradeClusterInstancesRequest&,
        UpgradeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

