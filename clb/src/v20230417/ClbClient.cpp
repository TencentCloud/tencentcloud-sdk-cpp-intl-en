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

#include <tencentcloud/clb/v20230417/ClbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Clb::V20230417;
using namespace TencentCloud::Clb::V20230417::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-17";
    const string ENDPOINT = "clb.intl.tencentcloudapi.com";
}

ClbClient::ClbClient(const Credential &credential, const string &region) :
    ClbClient(credential, region, ClientProfile())
{
}

ClbClient::ClbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClbClient::BatchModifyTargetWeightOutcome ClbClient::BatchModifyTargetWeight(const BatchModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetWeightResponse rsp = BatchModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetWeightOutcome(rsp);
        else
            return BatchModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetWeightOutcome(outcome.GetError());
    }
}

void ClbClient::BatchModifyTargetWeightAsync(const BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyTargetWeightRequest&;
    using Resp = BatchModifyTargetWeightResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyTargetWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::BatchModifyTargetWeightOutcomeCallable ClbClient::BatchModifyTargetWeightCallable(const BatchModifyTargetWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyTargetWeightOutcome>>();
    BatchModifyTargetWeightAsync(
    request,
    [prom](
        const ClbClient*,
        const BatchModifyTargetWeightRequest&,
        BatchModifyTargetWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CloneLoadBalancerOutcome ClbClient::CloneLoadBalancer(const CloneLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CloneLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneLoadBalancerResponse rsp = CloneLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneLoadBalancerOutcome(rsp);
        else
            return CloneLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CloneLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::CloneLoadBalancerAsync(const CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneLoadBalancerRequest&;
    using Resp = CloneLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CloneLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CloneLoadBalancerOutcomeCallable ClbClient::CloneLoadBalancerCallable(const CloneLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneLoadBalancerOutcome>>();
    CloneLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const CloneLoadBalancerRequest&,
        CloneLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateLoadBalancerOutcome ClbClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerResponse rsp = CreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerOutcome(rsp);
        else
            return CreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadBalancerRequest&;
    using Resp = CreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CreateLoadBalancerOutcomeCallable ClbClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerOutcome>>();
    CreateLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateLoadBalancerRequest&,
        CreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClassicalLBListenersOutcome ClbClient::DescribeClassicalLBListeners(const DescribeClassicalLBListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBListenersResponse rsp = DescribeClassicalLBListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBListenersOutcome(rsp);
        else
            return DescribeClassicalLBListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBListenersAsync(const DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicalLBListenersRequest&;
    using Resp = DescribeClassicalLBListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicalLBListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClassicalLBListenersOutcomeCallable ClbClient::DescribeClassicalLBListenersCallable(const DescribeClassicalLBListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicalLBListenersOutcome>>();
    DescribeClassicalLBListenersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClassicalLBListenersRequest&,
        DescribeClassicalLBListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeCustomizedConfigAssociateListOutcome ClbClient::DescribeCustomizedConfigAssociateList(const DescribeCustomizedConfigAssociateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigAssociateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigAssociateListResponse rsp = DescribeCustomizedConfigAssociateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigAssociateListOutcome(rsp);
        else
            return DescribeCustomizedConfigAssociateListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigAssociateListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigAssociateListAsync(const DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomizedConfigAssociateListRequest&;
    using Resp = DescribeCustomizedConfigAssociateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomizedConfigAssociateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeCustomizedConfigAssociateListOutcomeCallable ClbClient::DescribeCustomizedConfigAssociateListCallable(const DescribeCustomizedConfigAssociateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomizedConfigAssociateListOutcome>>();
    DescribeCustomizedConfigAssociateListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeCustomizedConfigAssociateListRequest&,
        DescribeCustomizedConfigAssociateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeCustomizedConfigListOutcome ClbClient::DescribeCustomizedConfigList(const DescribeCustomizedConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigListResponse rsp = DescribeCustomizedConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigListOutcome(rsp);
        else
            return DescribeCustomizedConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigListAsync(const DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomizedConfigListRequest&;
    using Resp = DescribeCustomizedConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomizedConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeCustomizedConfigListOutcomeCallable ClbClient::DescribeCustomizedConfigListCallable(const DescribeCustomizedConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomizedConfigListOutcome>>();
    DescribeCustomizedConfigListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeCustomizedConfigListRequest&,
        DescribeCustomizedConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancerListByCertIdOutcome ClbClient::DescribeLoadBalancerListByCertId(const DescribeLoadBalancerListByCertIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerListByCertId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerListByCertIdResponse rsp = DescribeLoadBalancerListByCertIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerListByCertIdOutcome(rsp);
        else
            return DescribeLoadBalancerListByCertIdOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerListByCertIdOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerListByCertIdAsync(const DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancerListByCertIdRequest&;
    using Resp = DescribeLoadBalancerListByCertIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerListByCertId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancerListByCertIdOutcomeCallable ClbClient::DescribeLoadBalancerListByCertIdCallable(const DescribeLoadBalancerListByCertIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerListByCertIdOutcome>>();
    DescribeLoadBalancerListByCertIdAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancerListByCertIdRequest&,
        DescribeLoadBalancerListByCertIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancersOutcome ClbClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancersRequest&;
    using Resp = DescribeLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancersOutcomeCallable ClbClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersOutcome>>();
    DescribeLoadBalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancersRequest&,
        DescribeLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancersDetailOutcome ClbClient::DescribeLoadBalancersDetail(const DescribeLoadBalancersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersDetailResponse rsp = DescribeLoadBalancersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersDetailOutcome(rsp);
        else
            return DescribeLoadBalancersDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersDetailOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancersDetailAsync(const DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancersDetailRequest&;
    using Resp = DescribeLoadBalancersDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancersDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancersDetailOutcomeCallable ClbClient::DescribeLoadBalancersDetailCallable(const DescribeLoadBalancersDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersDetailOutcome>>();
    DescribeLoadBalancersDetailAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancersDetailRequest&,
        DescribeLoadBalancersDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetHealthOutcome ClbClient::DescribeTargetHealth(const DescribeTargetHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetHealthResponse rsp = DescribeTargetHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetHealthOutcome(rsp);
        else
            return DescribeTargetHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetHealthOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetHealthRequest&;
    using Resp = DescribeTargetHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeTargetHealthOutcomeCallable ClbClient::DescribeTargetHealthCallable(const DescribeTargetHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetHealthOutcome>>();
    DescribeTargetHealthAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetHealthRequest&,
        DescribeTargetHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcome ClbClient::SetCustomizedConfigForLoadBalancer(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "SetCustomizedConfigForLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCustomizedConfigForLoadBalancerResponse rsp = SetCustomizedConfigForLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCustomizedConfigForLoadBalancerOutcome(rsp);
        else
            return SetCustomizedConfigForLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return SetCustomizedConfigForLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::SetCustomizedConfigForLoadBalancerAsync(const SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetCustomizedConfigForLoadBalancerRequest&;
    using Resp = SetCustomizedConfigForLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "SetCustomizedConfigForLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcomeCallable ClbClient::SetCustomizedConfigForLoadBalancerCallable(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCustomizedConfigForLoadBalancerOutcome>>();
    SetCustomizedConfigForLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const SetCustomizedConfigForLoadBalancerRequest&,
        SetCustomizedConfigForLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

