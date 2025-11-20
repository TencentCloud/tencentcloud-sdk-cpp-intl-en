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

#include <tencentcloud/tke/v20220501/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20220501;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-01";
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


TkeClient::CreateHealthCheckPolicyOutcome TkeClient::CreateHealthCheckPolicy(const CreateHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHealthCheckPolicyResponse rsp = CreateHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHealthCheckPolicyOutcome(rsp);
        else
            return CreateHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::CreateHealthCheckPolicyAsync(const CreateHealthCheckPolicyRequest& request, const CreateHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHealthCheckPolicyRequest&;
    using Resp = CreateHealthCheckPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHealthCheckPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateHealthCheckPolicyOutcomeCallable TkeClient::CreateHealthCheckPolicyCallable(const CreateHealthCheckPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHealthCheckPolicyOutcome>>();
    CreateHealthCheckPolicyAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateHealthCheckPolicyRequest&,
        CreateHealthCheckPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::CreateNodePoolOutcome TkeClient::CreateNodePool(const CreateNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNodePoolResponse rsp = CreateNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNodePoolOutcome(rsp);
        else
            return CreateNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateNodePoolAsync(const CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNodePoolRequest&;
    using Resp = CreateNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::CreateNodePoolOutcomeCallable TkeClient::CreateNodePoolCallable(const CreateNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNodePoolOutcome>>();
    CreateNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const CreateNodePoolRequest&,
        CreateNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteHealthCheckPolicyOutcome TkeClient::DeleteHealthCheckPolicy(const DeleteHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHealthCheckPolicyResponse rsp = DeleteHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHealthCheckPolicyOutcome(rsp);
        else
            return DeleteHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteHealthCheckPolicyAsync(const DeleteHealthCheckPolicyRequest& request, const DeleteHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHealthCheckPolicyRequest&;
    using Resp = DeleteHealthCheckPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHealthCheckPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteHealthCheckPolicyOutcomeCallable TkeClient::DeleteHealthCheckPolicyCallable(const DeleteHealthCheckPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHealthCheckPolicyOutcome>>();
    DeleteHealthCheckPolicyAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteHealthCheckPolicyRequest&,
        DeleteHealthCheckPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DeleteNodePoolOutcome TkeClient::DeleteNodePool(const DeleteNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodePoolResponse rsp = DeleteNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodePoolOutcome(rsp);
        else
            return DeleteNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteNodePoolAsync(const DeleteNodePoolRequest& request, const DeleteNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNodePoolRequest&;
    using Resp = DeleteNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DeleteNodePoolOutcomeCallable TkeClient::DeleteNodePoolCallable(const DeleteNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNodePoolOutcome>>();
    DeleteNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const DeleteNodePoolRequest&,
        DeleteNodePoolOutcome resp,
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

TkeClient::DescribeHealthCheckPoliciesOutcome TkeClient::DescribeHealthCheckPolicies(const DescribeHealthCheckPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckPoliciesResponse rsp = DescribeHealthCheckPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckPoliciesOutcome(rsp);
        else
            return DescribeHealthCheckPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckPoliciesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckPoliciesAsync(const DescribeHealthCheckPoliciesRequest& request, const DescribeHealthCheckPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHealthCheckPoliciesRequest&;
    using Resp = DescribeHealthCheckPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthCheckPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeHealthCheckPoliciesOutcomeCallable TkeClient::DescribeHealthCheckPoliciesCallable(const DescribeHealthCheckPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthCheckPoliciesOutcome>>();
    DescribeHealthCheckPoliciesAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeHealthCheckPoliciesRequest&,
        DescribeHealthCheckPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeHealthCheckPolicyBindingsOutcome TkeClient::DescribeHealthCheckPolicyBindings(const DescribeHealthCheckPolicyBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckPolicyBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckPolicyBindingsResponse rsp = DescribeHealthCheckPolicyBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckPolicyBindingsOutcome(rsp);
        else
            return DescribeHealthCheckPolicyBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckPolicyBindingsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckPolicyBindingsAsync(const DescribeHealthCheckPolicyBindingsRequest& request, const DescribeHealthCheckPolicyBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHealthCheckPolicyBindingsRequest&;
    using Resp = DescribeHealthCheckPolicyBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthCheckPolicyBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeHealthCheckPolicyBindingsOutcomeCallable TkeClient::DescribeHealthCheckPolicyBindingsCallable(const DescribeHealthCheckPolicyBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthCheckPolicyBindingsOutcome>>();
    DescribeHealthCheckPolicyBindingsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeHealthCheckPolicyBindingsRequest&,
        DescribeHealthCheckPolicyBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeHealthCheckTemplateOutcome TkeClient::DescribeHealthCheckTemplate(const DescribeHealthCheckTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckTemplateResponse rsp = DescribeHealthCheckTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckTemplateOutcome(rsp);
        else
            return DescribeHealthCheckTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckTemplateAsync(const DescribeHealthCheckTemplateRequest& request, const DescribeHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHealthCheckTemplateRequest&;
    using Resp = DescribeHealthCheckTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthCheckTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeHealthCheckTemplateOutcomeCallable TkeClient::DescribeHealthCheckTemplateCallable(const DescribeHealthCheckTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthCheckTemplateOutcome>>();
    DescribeHealthCheckTemplateAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeHealthCheckTemplateRequest&,
        DescribeHealthCheckTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::DescribeNodePoolsOutcome TkeClient::DescribeNodePools(const DescribeNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodePoolsResponse rsp = DescribeNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodePoolsOutcome(rsp);
        else
            return DescribeNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeNodePoolsAsync(const DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodePoolsRequest&;
    using Resp = DescribeNodePoolsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodePools", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::DescribeNodePoolsOutcomeCallable TkeClient::DescribeNodePoolsCallable(const DescribeNodePoolsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodePoolsOutcome>>();
    DescribeNodePoolsAsync(
    request,
    [prom](
        const TkeClient*,
        const DescribeNodePoolsRequest&,
        DescribeNodePoolsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyHealthCheckPolicyOutcome TkeClient::ModifyHealthCheckPolicy(const ModifyHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHealthCheckPolicyResponse rsp = ModifyHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHealthCheckPolicyOutcome(rsp);
        else
            return ModifyHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyHealthCheckPolicyAsync(const ModifyHealthCheckPolicyRequest& request, const ModifyHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHealthCheckPolicyRequest&;
    using Resp = ModifyHealthCheckPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHealthCheckPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyHealthCheckPolicyOutcomeCallable TkeClient::ModifyHealthCheckPolicyCallable(const ModifyHealthCheckPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHealthCheckPolicyOutcome>>();
    ModifyHealthCheckPolicyAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyHealthCheckPolicyRequest&,
        ModifyHealthCheckPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkeClient::ModifyNodePoolOutcome TkeClient::ModifyNodePool(const ModifyNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolResponse rsp = ModifyNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolOutcome(rsp);
        else
            return ModifyNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolAsync(const ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNodePoolRequest&;
    using Resp = ModifyNodePoolResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNodePool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkeClient::ModifyNodePoolOutcomeCallable TkeClient::ModifyNodePoolCallable(const ModifyNodePoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNodePoolOutcome>>();
    ModifyNodePoolAsync(
    request,
    [prom](
        const TkeClient*,
        const ModifyNodePoolRequest&,
        ModifyNodePoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

