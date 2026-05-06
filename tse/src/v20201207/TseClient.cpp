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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.intl.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::BindAutoScalerResourceStrategyToGroupsOutcome TseClient::BindAutoScalerResourceStrategyToGroups(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoScalerResourceStrategyToGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoScalerResourceStrategyToGroupsResponse rsp = BindAutoScalerResourceStrategyToGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoScalerResourceStrategyToGroupsOutcome(rsp);
        else
            return BindAutoScalerResourceStrategyToGroupsOutcome(o.GetError());
    }
    else
    {
        return BindAutoScalerResourceStrategyToGroupsOutcome(outcome.GetError());
    }
}

void TseClient::BindAutoScalerResourceStrategyToGroupsAsync(const BindAutoScalerResourceStrategyToGroupsRequest& request, const BindAutoScalerResourceStrategyToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoScalerResourceStrategyToGroupsRequest&;
    using Resp = BindAutoScalerResourceStrategyToGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoScalerResourceStrategyToGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::BindAutoScalerResourceStrategyToGroupsOutcomeCallable TseClient::BindAutoScalerResourceStrategyToGroupsCallable(const BindAutoScalerResourceStrategyToGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoScalerResourceStrategyToGroupsOutcome>>();
    BindAutoScalerResourceStrategyToGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const BindAutoScalerResourceStrategyToGroupsRequest&,
        BindAutoScalerResourceStrategyToGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CloseWafProtectionOutcome TseClient::CloseWafProtection(const CloseWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "CloseWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseWafProtectionResponse rsp = CloseWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseWafProtectionOutcome(rsp);
        else
            return CloseWafProtectionOutcome(o.GetError());
    }
    else
    {
        return CloseWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::CloseWafProtectionAsync(const CloseWafProtectionRequest& request, const CloseWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseWafProtectionRequest&;
    using Resp = CloseWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "CloseWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CloseWafProtectionOutcomeCallable TseClient::CloseWafProtectionCallable(const CloseWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseWafProtectionOutcome>>();
    CloseWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const CloseWafProtectionRequest&,
        CloseWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateAutoScalerResourceStrategyOutcome TseClient::CreateAutoScalerResourceStrategy(const CreateAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoScalerResourceStrategyResponse rsp = CreateAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoScalerResourceStrategyOutcome(rsp);
        else
            return CreateAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::CreateAutoScalerResourceStrategyAsync(const CreateAutoScalerResourceStrategyRequest& request, const CreateAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoScalerResourceStrategyRequest&;
    using Resp = CreateAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateAutoScalerResourceStrategyOutcomeCallable TseClient::CreateAutoScalerResourceStrategyCallable(const CreateAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoScalerResourceStrategyOutcome>>();
    CreateAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const CreateAutoScalerResourceStrategyRequest&,
        CreateAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayOutcome TseClient::CreateCloudNativeAPIGateway(const CreateCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayResponse rsp = CreateCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayAsync(const CreateCloudNativeAPIGatewayRequest& request, const CreateCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRequest&;
    using Resp = CreateCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCallable(const CreateCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayOutcome>>();
    CreateCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRequest&,
        CreateCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcome TseClient::CreateCloudNativeAPIGatewayCanaryRule(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCanaryRuleResponse rsp = CreateCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCanaryRuleAsync(const CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = CreateCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCanaryRuleCallable(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayCanaryRuleOutcome>>();
    CreateCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayCanaryRuleRequest&,
        CreateCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcome TseClient::CreateCloudNativeAPIGatewayCertificate(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCertificateResponse rsp = CreateCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCertificateAsync(const CreateCloudNativeAPIGatewayCertificateRequest& request, const CreateCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayCertificateRequest&;
    using Resp = CreateCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCertificateCallable(const CreateCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayCertificateOutcome>>();
    CreateCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayCertificateRequest&,
        CreateCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcome TseClient::CreateCloudNativeAPIGatewayPublicNetwork(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayPublicNetworkResponse rsp = CreateCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayPublicNetworkAsync(const CreateCloudNativeAPIGatewayPublicNetworkRequest& request, const CreateCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayPublicNetworkRequest&;
    using Resp = CreateCloudNativeAPIGatewayPublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayPublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::CreateCloudNativeAPIGatewayPublicNetworkCallable(const CreateCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayPublicNetworkOutcome>>();
    CreateCloudNativeAPIGatewayPublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayPublicNetworkRequest&,
        CreateCloudNativeAPIGatewayPublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcome TseClient::CreateCloudNativeAPIGatewayRoute(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteResponse rsp = CreateCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteAsync(const CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRouteRequest&;
    using Resp = CreateCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteCallable(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayRouteOutcome>>();
    CreateCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRouteRequest&,
        CreateCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayRouteRateLimit(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteRateLimitResponse rsp = CreateCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteRateLimitAsync(const CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = CreateCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteRateLimitCallable(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    CreateCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayRouteRateLimitRequest&,
        CreateCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcome TseClient::CreateCloudNativeAPIGatewayService(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceResponse rsp = CreateCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceAsync(const CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayServiceRequest&;
    using Resp = CreateCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceCallable(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayServiceOutcome>>();
    CreateCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayServiceRequest&,
        CreateCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayServiceRateLimit(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceRateLimitResponse rsp = CreateCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceRateLimitAsync(const CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = CreateCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceRateLimitCallable(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    CreateCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const CreateCloudNativeAPIGatewayServiceRateLimitRequest&,
        CreateCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateGovernanceLaneGroupsOutcome TseClient::CreateGovernanceLaneGroups(const CreateGovernanceLaneGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGovernanceLaneGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGovernanceLaneGroupsResponse rsp = CreateGovernanceLaneGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGovernanceLaneGroupsOutcome(rsp);
        else
            return CreateGovernanceLaneGroupsOutcome(o.GetError());
    }
    else
    {
        return CreateGovernanceLaneGroupsOutcome(outcome.GetError());
    }
}

void TseClient::CreateGovernanceLaneGroupsAsync(const CreateGovernanceLaneGroupsRequest& request, const CreateGovernanceLaneGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGovernanceLaneGroupsRequest&;
    using Resp = CreateGovernanceLaneGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGovernanceLaneGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateGovernanceLaneGroupsOutcomeCallable TseClient::CreateGovernanceLaneGroupsCallable(const CreateGovernanceLaneGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGovernanceLaneGroupsOutcome>>();
    CreateGovernanceLaneGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const CreateGovernanceLaneGroupsRequest&,
        CreateGovernanceLaneGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateNativeGatewayServerGroupOutcome TseClient::CreateNativeGatewayServerGroup(const CreateNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServerGroupResponse rsp = CreateNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServerGroupOutcome(rsp);
        else
            return CreateNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServerGroupAsync(const CreateNativeGatewayServerGroupRequest& request, const CreateNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNativeGatewayServerGroupRequest&;
    using Resp = CreateNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateNativeGatewayServerGroupOutcomeCallable TseClient::CreateNativeGatewayServerGroupCallable(const CreateNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNativeGatewayServerGroupOutcome>>();
    CreateNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const CreateNativeGatewayServerGroupRequest&,
        CreateNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateNativeGatewayServiceSourceOutcome TseClient::CreateNativeGatewayServiceSource(const CreateNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNativeGatewayServiceSourceResponse rsp = CreateNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNativeGatewayServiceSourceOutcome(rsp);
        else
            return CreateNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return CreateNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::CreateNativeGatewayServiceSourceAsync(const CreateNativeGatewayServiceSourceRequest& request, const CreateNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNativeGatewayServiceSourceRequest&;
    using Resp = CreateNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateNativeGatewayServiceSourceOutcomeCallable TseClient::CreateNativeGatewayServiceSourceCallable(const CreateNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNativeGatewayServiceSourceOutcome>>();
    CreateNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const CreateNativeGatewayServiceSourceRequest&,
        CreateNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateOrModifyCloudNativeAPIGatewayCORSOutcome TseClient::CreateOrModifyCloudNativeAPIGatewayCORS(const CreateOrModifyCloudNativeAPIGatewayCORSRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrModifyCloudNativeAPIGatewayCORS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrModifyCloudNativeAPIGatewayCORSResponse rsp = CreateOrModifyCloudNativeAPIGatewayCORSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrModifyCloudNativeAPIGatewayCORSOutcome(rsp);
        else
            return CreateOrModifyCloudNativeAPIGatewayCORSOutcome(o.GetError());
    }
    else
    {
        return CreateOrModifyCloudNativeAPIGatewayCORSOutcome(outcome.GetError());
    }
}

void TseClient::CreateOrModifyCloudNativeAPIGatewayCORSAsync(const CreateOrModifyCloudNativeAPIGatewayCORSRequest& request, const CreateOrModifyCloudNativeAPIGatewayCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrModifyCloudNativeAPIGatewayCORSRequest&;
    using Resp = CreateOrModifyCloudNativeAPIGatewayCORSResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrModifyCloudNativeAPIGatewayCORS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateOrModifyCloudNativeAPIGatewayCORSOutcomeCallable TseClient::CreateOrModifyCloudNativeAPIGatewayCORSCallable(const CreateOrModifyCloudNativeAPIGatewayCORSRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrModifyCloudNativeAPIGatewayCORSOutcome>>();
    CreateOrModifyCloudNativeAPIGatewayCORSAsync(
    request,
    [prom](
        const TseClient*,
        const CreateOrModifyCloudNativeAPIGatewayCORSRequest&,
        CreateOrModifyCloudNativeAPIGatewayCORSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::CreateWafDomainsOutcome TseClient::CreateWafDomains(const CreateWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWafDomainsResponse rsp = CreateWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWafDomainsOutcome(rsp);
        else
            return CreateWafDomainsOutcome(o.GetError());
    }
    else
    {
        return CreateWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::CreateWafDomainsAsync(const CreateWafDomainsRequest& request, const CreateWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWafDomainsRequest&;
    using Resp = CreateWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::CreateWafDomainsOutcomeCallable TseClient::CreateWafDomainsCallable(const CreateWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWafDomainsOutcome>>();
    CreateWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const CreateWafDomainsRequest&,
        CreateWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteAutoScalerResourceStrategyOutcome TseClient::DeleteAutoScalerResourceStrategy(const DeleteAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoScalerResourceStrategyResponse rsp = DeleteAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoScalerResourceStrategyOutcome(rsp);
        else
            return DeleteAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::DeleteAutoScalerResourceStrategyAsync(const DeleteAutoScalerResourceStrategyRequest& request, const DeleteAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoScalerResourceStrategyRequest&;
    using Resp = DeleteAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteAutoScalerResourceStrategyOutcomeCallable TseClient::DeleteAutoScalerResourceStrategyCallable(const DeleteAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoScalerResourceStrategyOutcome>>();
    DeleteAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteAutoScalerResourceStrategyRequest&,
        DeleteAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayOutcome TseClient::DeleteCloudNativeAPIGateway(const DeleteCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayResponse rsp = DeleteCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayAsync(const DeleteCloudNativeAPIGatewayRequest& request, const DeleteCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRequest&;
    using Resp = DeleteCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCallable(const DeleteCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayOutcome>>();
    DeleteCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRequest&,
        DeleteCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCORSOutcome TseClient::DeleteCloudNativeAPIGatewayCORS(const DeleteCloudNativeAPIGatewayCORSRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCORS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCORSResponse rsp = DeleteCloudNativeAPIGatewayCORSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCORSOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCORSOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCORSOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCORSAsync(const DeleteCloudNativeAPIGatewayCORSRequest& request, const DeleteCloudNativeAPIGatewayCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayCORSRequest&;
    using Resp = DeleteCloudNativeAPIGatewayCORSResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayCORS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayCORSOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCORSCallable(const DeleteCloudNativeAPIGatewayCORSRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayCORSOutcome>>();
    DeleteCloudNativeAPIGatewayCORSAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayCORSRequest&,
        DeleteCloudNativeAPIGatewayCORSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcome TseClient::DeleteCloudNativeAPIGatewayCanaryRule(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCanaryRuleResponse rsp = DeleteCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCanaryRuleAsync(const DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = DeleteCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCanaryRuleCallable(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayCanaryRuleOutcome>>();
    DeleteCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayCanaryRuleRequest&,
        DeleteCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcome TseClient::DeleteCloudNativeAPIGatewayCertificate(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCertificateResponse rsp = DeleteCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCertificateAsync(const DeleteCloudNativeAPIGatewayCertificateRequest& request, const DeleteCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayCertificateRequest&;
    using Resp = DeleteCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCertificateCallable(const DeleteCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayCertificateOutcome>>();
    DeleteCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayCertificateRequest&,
        DeleteCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcome TseClient::DeleteCloudNativeAPIGatewayPublicNetwork(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayPublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayPublicNetworkResponse rsp = DeleteCloudNativeAPIGatewayPublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayPublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayPublicNetworkAsync(const DeleteCloudNativeAPIGatewayPublicNetworkRequest& request, const DeleteCloudNativeAPIGatewayPublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayPublicNetworkRequest&;
    using Resp = DeleteCloudNativeAPIGatewayPublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayPublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayPublicNetworkOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayPublicNetworkCallable(const DeleteCloudNativeAPIGatewayPublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayPublicNetworkOutcome>>();
    DeleteCloudNativeAPIGatewayPublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayPublicNetworkRequest&,
        DeleteCloudNativeAPIGatewayPublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcome TseClient::DeleteCloudNativeAPIGatewayRoute(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteResponse rsp = DeleteCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteAsync(const DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRouteRequest&;
    using Resp = DeleteCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteCallable(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayRouteOutcome>>();
    DeleteCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRouteRequest&,
        DeleteCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayRouteRateLimit(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteRateLimitResponse rsp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    DeleteCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayRouteRateLimitRequest&,
        DeleteCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcome TseClient::DeleteCloudNativeAPIGatewayService(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceResponse rsp = DeleteCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceAsync(const DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayServiceRequest&;
    using Resp = DeleteCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceCallable(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayServiceOutcome>>();
    DeleteCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayServiceRequest&,
        DeleteCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayServiceRateLimit(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceRateLimitResponse rsp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    DeleteCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteCloudNativeAPIGatewayServiceRateLimitRequest&,
        DeleteCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteGovernanceLaneGroupsOutcome TseClient::DeleteGovernanceLaneGroups(const DeleteGovernanceLaneGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGovernanceLaneGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGovernanceLaneGroupsResponse rsp = DeleteGovernanceLaneGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGovernanceLaneGroupsOutcome(rsp);
        else
            return DeleteGovernanceLaneGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteGovernanceLaneGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DeleteGovernanceLaneGroupsAsync(const DeleteGovernanceLaneGroupsRequest& request, const DeleteGovernanceLaneGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGovernanceLaneGroupsRequest&;
    using Resp = DeleteGovernanceLaneGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGovernanceLaneGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteGovernanceLaneGroupsOutcomeCallable TseClient::DeleteGovernanceLaneGroupsCallable(const DeleteGovernanceLaneGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGovernanceLaneGroupsOutcome>>();
    DeleteGovernanceLaneGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteGovernanceLaneGroupsRequest&,
        DeleteGovernanceLaneGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteNativeGatewayServerGroupOutcome TseClient::DeleteNativeGatewayServerGroup(const DeleteNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServerGroupResponse rsp = DeleteNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServerGroupOutcome(rsp);
        else
            return DeleteNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServerGroupAsync(const DeleteNativeGatewayServerGroupRequest& request, const DeleteNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNativeGatewayServerGroupRequest&;
    using Resp = DeleteNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteNativeGatewayServerGroupOutcomeCallable TseClient::DeleteNativeGatewayServerGroupCallable(const DeleteNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNativeGatewayServerGroupOutcome>>();
    DeleteNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteNativeGatewayServerGroupRequest&,
        DeleteNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteNativeGatewayServiceSourceOutcome TseClient::DeleteNativeGatewayServiceSource(const DeleteNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNativeGatewayServiceSourceResponse rsp = DeleteNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNativeGatewayServiceSourceOutcome(rsp);
        else
            return DeleteNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return DeleteNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteNativeGatewayServiceSourceAsync(const DeleteNativeGatewayServiceSourceRequest& request, const DeleteNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNativeGatewayServiceSourceRequest&;
    using Resp = DeleteNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteNativeGatewayServiceSourceOutcomeCallable TseClient::DeleteNativeGatewayServiceSourceCallable(const DeleteNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNativeGatewayServiceSourceOutcome>>();
    DeleteNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteNativeGatewayServiceSourceRequest&,
        DeleteNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DeleteWafDomainsOutcome TseClient::DeleteWafDomains(const DeleteWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWafDomainsResponse rsp = DeleteWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWafDomainsOutcome(rsp);
        else
            return DeleteWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DeleteWafDomainsAsync(const DeleteWafDomainsRequest& request, const DeleteWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWafDomainsRequest&;
    using Resp = DeleteWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DeleteWafDomainsOutcomeCallable TseClient::DeleteWafDomainsCallable(const DeleteWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWafDomainsOutcome>>();
    DeleteWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const DeleteWafDomainsRequest&,
        DeleteWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeAutoScalerResourceStrategiesOutcome TseClient::DescribeAutoScalerResourceStrategies(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategiesResponse rsp = DescribeAutoScalerResourceStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategiesOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategiesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategiesAsync(const DescribeAutoScalerResourceStrategiesRequest& request, const DescribeAutoScalerResourceStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoScalerResourceStrategiesRequest&;
    using Resp = DescribeAutoScalerResourceStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalerResourceStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeAutoScalerResourceStrategiesOutcomeCallable TseClient::DescribeAutoScalerResourceStrategiesCallable(const DescribeAutoScalerResourceStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalerResourceStrategiesOutcome>>();
    DescribeAutoScalerResourceStrategiesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeAutoScalerResourceStrategiesRequest&,
        DescribeAutoScalerResourceStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcome TseClient::DescribeAutoScalerResourceStrategyBindingGroups(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalerResourceStrategyBindingGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalerResourceStrategyBindingGroupsResponse rsp = DescribeAutoScalerResourceStrategyBindingGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(rsp);
        else
            return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalerResourceStrategyBindingGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeAutoScalerResourceStrategyBindingGroupsAsync(const DescribeAutoScalerResourceStrategyBindingGroupsRequest& request, const DescribeAutoScalerResourceStrategyBindingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoScalerResourceStrategyBindingGroupsRequest&;
    using Resp = DescribeAutoScalerResourceStrategyBindingGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalerResourceStrategyBindingGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeAutoScalerResourceStrategyBindingGroupsOutcomeCallable TseClient::DescribeAutoScalerResourceStrategyBindingGroupsCallable(const DescribeAutoScalerResourceStrategyBindingGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalerResourceStrategyBindingGroupsOutcome>>();
    DescribeAutoScalerResourceStrategyBindingGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeAutoScalerResourceStrategyBindingGroupsRequest&,
        DescribeAutoScalerResourceStrategyBindingGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayOutcome TseClient::DescribeCloudNativeAPIGateway(const DescribeCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayResponse rsp = DescribeCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayAsync(const DescribeCloudNativeAPIGatewayRequest& request, const DescribeCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRequest&;
    using Resp = DescribeCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCallable(const DescribeCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayOutcome>>();
    DescribeCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRequest&,
        DescribeCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCORSOutcome TseClient::DescribeCloudNativeAPIGatewayCORS(const DescribeCloudNativeAPIGatewayCORSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCORS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCORSResponse rsp = DescribeCloudNativeAPIGatewayCORSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCORSOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCORSOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCORSOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCORSAsync(const DescribeCloudNativeAPIGatewayCORSRequest& request, const DescribeCloudNativeAPIGatewayCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCORSRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCORSResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCORS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCORSOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCORSCallable(const DescribeCloudNativeAPIGatewayCORSRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCORSOutcome>>();
    DescribeCloudNativeAPIGatewayCORSAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCORSRequest&,
        DescribeCloudNativeAPIGatewayCORSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcome TseClient::DescribeCloudNativeAPIGatewayCanaryRules(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCanaryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCanaryRulesResponse rsp = DescribeCloudNativeAPIGatewayCanaryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCanaryRulesAsync(const DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCanaryRulesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCanaryRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCanaryRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCanaryRulesCallable(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCanaryRulesOutcome>>();
    DescribeCloudNativeAPIGatewayCanaryRulesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCanaryRulesRequest&,
        DescribeCloudNativeAPIGatewayCanaryRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcome TseClient::DescribeCloudNativeAPIGatewayCertificateDetails(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificateDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificateDetailsResponse rsp = DescribeCloudNativeAPIGatewayCertificateDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificateDetailsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsAsync(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest& request, const DescribeCloudNativeAPIGatewayCertificateDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCertificateDetailsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCertificateDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCertificateDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificateDetailsCallable(const DescribeCloudNativeAPIGatewayCertificateDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCertificateDetailsOutcome>>();
    DescribeCloudNativeAPIGatewayCertificateDetailsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCertificateDetailsRequest&,
        DescribeCloudNativeAPIGatewayCertificateDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcome TseClient::DescribeCloudNativeAPIGatewayCertificates(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCertificatesResponse rsp = DescribeCloudNativeAPIGatewayCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCertificatesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCertificatesAsync(const DescribeCloudNativeAPIGatewayCertificatesRequest& request, const DescribeCloudNativeAPIGatewayCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayCertificatesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayCertificatesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCertificatesCallable(const DescribeCloudNativeAPIGatewayCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayCertificatesOutcome>>();
    DescribeCloudNativeAPIGatewayCertificatesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayCertificatesRequest&,
        DescribeCloudNativeAPIGatewayCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcome TseClient::DescribeCloudNativeAPIGatewayConfig(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayConfigResponse rsp = DescribeCloudNativeAPIGatewayConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayConfigOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayConfigAsync(const DescribeCloudNativeAPIGatewayConfigRequest& request, const DescribeCloudNativeAPIGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayConfigRequest&;
    using Resp = DescribeCloudNativeAPIGatewayConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayConfigOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayConfigCallable(const DescribeCloudNativeAPIGatewayConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayConfigOutcome>>();
    DescribeCloudNativeAPIGatewayConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayConfigRequest&,
        DescribeCloudNativeAPIGatewayConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcome TseClient::DescribeCloudNativeAPIGatewayInfoByIp(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayInfoByIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayInfoByIpResponse rsp = DescribeCloudNativeAPIGatewayInfoByIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayInfoByIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayInfoByIpOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayInfoByIpAsync(const DescribeCloudNativeAPIGatewayInfoByIpRequest& request, const DescribeCloudNativeAPIGatewayInfoByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayInfoByIpRequest&;
    using Resp = DescribeCloudNativeAPIGatewayInfoByIpResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayInfoByIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayInfoByIpOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayInfoByIpCallable(const DescribeCloudNativeAPIGatewayInfoByIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayInfoByIpOutcome>>();
    DescribeCloudNativeAPIGatewayInfoByIpAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayInfoByIpRequest&,
        DescribeCloudNativeAPIGatewayInfoByIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcome TseClient::DescribeCloudNativeAPIGatewayNodes(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayNodesResponse rsp = DescribeCloudNativeAPIGatewayNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayNodesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayNodesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayNodesAsync(const DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayNodesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayNodesCallable(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayNodesOutcome>>();
    DescribeCloudNativeAPIGatewayNodesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayNodesRequest&,
        DescribeCloudNativeAPIGatewayNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcome TseClient::DescribeCloudNativeAPIGatewayPorts(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayPortsResponse rsp = DescribeCloudNativeAPIGatewayPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayPortsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayPortsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayPortsAsync(const DescribeCloudNativeAPIGatewayPortsRequest& request, const DescribeCloudNativeAPIGatewayPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayPortsRequest&;
    using Resp = DescribeCloudNativeAPIGatewayPortsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayPorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayPortsCallable(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayPortsOutcome>>();
    DescribeCloudNativeAPIGatewayPortsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayPortsRequest&,
        DescribeCloudNativeAPIGatewayPortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayRouteRateLimit(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRouteRateLimitResponse rsp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    DescribeCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRouteRateLimitRequest&,
        DescribeCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcome TseClient::DescribeCloudNativeAPIGatewayRoutes(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRoutesResponse rsp = DescribeCloudNativeAPIGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRoutesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRoutesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRoutesAsync(const DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayRoutesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRoutesCallable(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayRoutesOutcome>>();
    DescribeCloudNativeAPIGatewayRoutesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayRoutesRequest&,
        DescribeCloudNativeAPIGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayServiceRateLimit(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServiceRateLimitResponse rsp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    DescribeCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServiceRateLimitRequest&,
        DescribeCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcome TseClient::DescribeCloudNativeAPIGatewayServices(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesResponse rsp = DescribeCloudNativeAPIGatewayServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesAsync(const DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServicesRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesCallable(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServicesOutcome>>();
    DescribeCloudNativeAPIGatewayServicesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServicesRequest&,
        DescribeCloudNativeAPIGatewayServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesLightOutcome TseClient::DescribeCloudNativeAPIGatewayServicesLight(const DescribeCloudNativeAPIGatewayServicesLightRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServicesLight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesLightResponse rsp = DescribeCloudNativeAPIGatewayServicesLightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesLightOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesLightOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesLightOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesLightAsync(const DescribeCloudNativeAPIGatewayServicesLightRequest& request, const DescribeCloudNativeAPIGatewayServicesLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayServicesLightRequest&;
    using Resp = DescribeCloudNativeAPIGatewayServicesLightResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayServicesLight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayServicesLightOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesLightCallable(const DescribeCloudNativeAPIGatewayServicesLightRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayServicesLightOutcome>>();
    DescribeCloudNativeAPIGatewayServicesLightAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayServicesLightRequest&,
        DescribeCloudNativeAPIGatewayServicesLightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcome TseClient::DescribeCloudNativeAPIGatewayUpstream(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayUpstreamResponse rsp = DescribeCloudNativeAPIGatewayUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayUpstreamOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayUpstreamOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayUpstreamAsync(const DescribeCloudNativeAPIGatewayUpstreamRequest& request, const DescribeCloudNativeAPIGatewayUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewayUpstreamRequest&;
    using Resp = DescribeCloudNativeAPIGatewayUpstreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGatewayUpstream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewayUpstreamOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayUpstreamCallable(const DescribeCloudNativeAPIGatewayUpstreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewayUpstreamOutcome>>();
    DescribeCloudNativeAPIGatewayUpstreamAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewayUpstreamRequest&,
        DescribeCloudNativeAPIGatewayUpstreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeCloudNativeAPIGatewaysOutcome TseClient::DescribeCloudNativeAPIGateways(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewaysResponse rsp = DescribeCloudNativeAPIGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewaysOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewaysOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewaysAsync(const DescribeCloudNativeAPIGatewaysRequest& request, const DescribeCloudNativeAPIGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudNativeAPIGatewaysRequest&;
    using Resp = DescribeCloudNativeAPIGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudNativeAPIGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeCloudNativeAPIGatewaysOutcomeCallable TseClient::DescribeCloudNativeAPIGatewaysCallable(const DescribeCloudNativeAPIGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudNativeAPIGatewaysOutcome>>();
    DescribeCloudNativeAPIGatewaysAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeCloudNativeAPIGatewaysRequest&,
        DescribeCloudNativeAPIGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeGovernanceLaneGroupsOutcome TseClient::DescribeGovernanceLaneGroups(const DescribeGovernanceLaneGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGovernanceLaneGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGovernanceLaneGroupsResponse rsp = DescribeGovernanceLaneGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGovernanceLaneGroupsOutcome(rsp);
        else
            return DescribeGovernanceLaneGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeGovernanceLaneGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeGovernanceLaneGroupsAsync(const DescribeGovernanceLaneGroupsRequest& request, const DescribeGovernanceLaneGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGovernanceLaneGroupsRequest&;
    using Resp = DescribeGovernanceLaneGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGovernanceLaneGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeGovernanceLaneGroupsOutcomeCallable TseClient::DescribeGovernanceLaneGroupsCallable(const DescribeGovernanceLaneGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGovernanceLaneGroupsOutcome>>();
    DescribeGovernanceLaneGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeGovernanceLaneGroupsRequest&,
        DescribeGovernanceLaneGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNativeGatewayServerGroupsOutcome TseClient::DescribeNativeGatewayServerGroups(const DescribeNativeGatewayServerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServerGroupsResponse rsp = DescribeNativeGatewayServerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServerGroupsOutcome(rsp);
        else
            return DescribeNativeGatewayServerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServerGroupsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServerGroupsAsync(const DescribeNativeGatewayServerGroupsRequest& request, const DescribeNativeGatewayServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNativeGatewayServerGroupsRequest&;
    using Resp = DescribeNativeGatewayServerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNativeGatewayServerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNativeGatewayServerGroupsOutcomeCallable TseClient::DescribeNativeGatewayServerGroupsCallable(const DescribeNativeGatewayServerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNativeGatewayServerGroupsOutcome>>();
    DescribeNativeGatewayServerGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNativeGatewayServerGroupsRequest&,
        DescribeNativeGatewayServerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeNativeGatewayServiceSourcesOutcome TseClient::DescribeNativeGatewayServiceSources(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNativeGatewayServiceSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNativeGatewayServiceSourcesResponse rsp = DescribeNativeGatewayServiceSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNativeGatewayServiceSourcesOutcome(rsp);
        else
            return DescribeNativeGatewayServiceSourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeNativeGatewayServiceSourcesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNativeGatewayServiceSourcesAsync(const DescribeNativeGatewayServiceSourcesRequest& request, const DescribeNativeGatewayServiceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNativeGatewayServiceSourcesRequest&;
    using Resp = DescribeNativeGatewayServiceSourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNativeGatewayServiceSources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeNativeGatewayServiceSourcesOutcomeCallable TseClient::DescribeNativeGatewayServiceSourcesCallable(const DescribeNativeGatewayServiceSourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNativeGatewayServiceSourcesOutcome>>();
    DescribeNativeGatewayServiceSourcesAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeNativeGatewayServiceSourcesRequest&,
        DescribeNativeGatewayServiceSourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcome TseClient::DescribeOneCloudNativeAPIGatewayService(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOneCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOneCloudNativeAPIGatewayServiceResponse rsp = DescribeOneCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeOneCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DescribeOneCloudNativeAPIGatewayServiceAsync(const DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOneCloudNativeAPIGatewayServiceRequest&;
    using Resp = DescribeOneCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOneCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DescribeOneCloudNativeAPIGatewayServiceCallable(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOneCloudNativeAPIGatewayServiceOutcome>>();
    DescribeOneCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeOneCloudNativeAPIGatewayServiceRequest&,
        DescribeOneCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribePublicAddressConfigOutcome TseClient::DescribePublicAddressConfig(const DescribePublicAddressConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicAddressConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicAddressConfigResponse rsp = DescribePublicAddressConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicAddressConfigOutcome(rsp);
        else
            return DescribePublicAddressConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePublicAddressConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicAddressConfigAsync(const DescribePublicAddressConfigRequest& request, const DescribePublicAddressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicAddressConfigRequest&;
    using Resp = DescribePublicAddressConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicAddressConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribePublicAddressConfigOutcomeCallable TseClient::DescribePublicAddressConfigCallable(const DescribePublicAddressConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicAddressConfigOutcome>>();
    DescribePublicAddressConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribePublicAddressConfigRequest&,
        DescribePublicAddressConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribePublicNetworkOutcome TseClient::DescribePublicNetwork(const DescribePublicNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicNetworkResponse rsp = DescribePublicNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicNetworkOutcome(rsp);
        else
            return DescribePublicNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribePublicNetworkOutcome(outcome.GetError());
    }
}

void TseClient::DescribePublicNetworkAsync(const DescribePublicNetworkRequest& request, const DescribePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicNetworkRequest&;
    using Resp = DescribePublicNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribePublicNetworkOutcomeCallable TseClient::DescribePublicNetworkCallable(const DescribePublicNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicNetworkOutcome>>();
    DescribePublicNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const DescribePublicNetworkRequest&,
        DescribePublicNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeUpstreamHealthCheckConfigOutcome TseClient::DescribeUpstreamHealthCheckConfig(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamHealthCheckConfigResponse rsp = DescribeUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamHealthCheckConfigOutcome(rsp);
        else
            return DescribeUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::DescribeUpstreamHealthCheckConfigAsync(const DescribeUpstreamHealthCheckConfigRequest& request, const DescribeUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpstreamHealthCheckConfigRequest&;
    using Resp = DescribeUpstreamHealthCheckConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpstreamHealthCheckConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeUpstreamHealthCheckConfigOutcomeCallable TseClient::DescribeUpstreamHealthCheckConfigCallable(const DescribeUpstreamHealthCheckConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpstreamHealthCheckConfigOutcome>>();
    DescribeUpstreamHealthCheckConfigAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeUpstreamHealthCheckConfigRequest&,
        DescribeUpstreamHealthCheckConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeWafDomainsOutcome TseClient::DescribeWafDomains(const DescribeWafDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafDomainsResponse rsp = DescribeWafDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafDomainsOutcome(rsp);
        else
            return DescribeWafDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeWafDomainsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafDomainsAsync(const DescribeWafDomainsRequest& request, const DescribeWafDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWafDomainsRequest&;
    using Resp = DescribeWafDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWafDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeWafDomainsOutcomeCallable TseClient::DescribeWafDomainsCallable(const DescribeWafDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWafDomainsOutcome>>();
    DescribeWafDomainsAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeWafDomainsRequest&,
        DescribeWafDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::DescribeWafProtectionOutcome TseClient::DescribeWafProtection(const DescribeWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafProtectionResponse rsp = DescribeWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafProtectionOutcome(rsp);
        else
            return DescribeWafProtectionOutcome(o.GetError());
    }
    else
    {
        return DescribeWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::DescribeWafProtectionAsync(const DescribeWafProtectionRequest& request, const DescribeWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWafProtectionRequest&;
    using Resp = DescribeWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::DescribeWafProtectionOutcomeCallable TseClient::DescribeWafProtectionCallable(const DescribeWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWafProtectionOutcome>>();
    DescribeWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const DescribeWafProtectionRequest&,
        DescribeWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyAutoScalerResourceStrategyOutcome TseClient::ModifyAutoScalerResourceStrategy(const ModifyAutoScalerResourceStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoScalerResourceStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoScalerResourceStrategyResponse rsp = ModifyAutoScalerResourceStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoScalerResourceStrategyOutcome(rsp);
        else
            return ModifyAutoScalerResourceStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoScalerResourceStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyAutoScalerResourceStrategyAsync(const ModifyAutoScalerResourceStrategyRequest& request, const ModifyAutoScalerResourceStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoScalerResourceStrategyRequest&;
    using Resp = ModifyAutoScalerResourceStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoScalerResourceStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyAutoScalerResourceStrategyOutcomeCallable TseClient::ModifyAutoScalerResourceStrategyCallable(const ModifyAutoScalerResourceStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoScalerResourceStrategyOutcome>>();
    ModifyAutoScalerResourceStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyAutoScalerResourceStrategyRequest&,
        ModifyAutoScalerResourceStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayOutcome TseClient::ModifyCloudNativeAPIGateway(const ModifyCloudNativeAPIGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayResponse rsp = ModifyCloudNativeAPIGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayAsync(const ModifyCloudNativeAPIGatewayRequest& request, const ModifyCloudNativeAPIGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRequest&;
    using Resp = ModifyCloudNativeAPIGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCallable(const ModifyCloudNativeAPIGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayOutcome>>();
    ModifyCloudNativeAPIGatewayAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRequest&,
        ModifyCloudNativeAPIGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcome TseClient::ModifyCloudNativeAPIGatewayCanaryRule(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCanaryRuleResponse rsp = ModifyCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCanaryRuleAsync(const ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayCanaryRuleRequest&;
    using Resp = ModifyCloudNativeAPIGatewayCanaryRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayCanaryRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCanaryRuleCallable(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayCanaryRuleOutcome>>();
    ModifyCloudNativeAPIGatewayCanaryRuleAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayCanaryRuleRequest&,
        ModifyCloudNativeAPIGatewayCanaryRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcome TseClient::ModifyCloudNativeAPIGatewayCertificate(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCertificateResponse rsp = ModifyCloudNativeAPIGatewayCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCertificateOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCertificateOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCertificateAsync(const ModifyCloudNativeAPIGatewayCertificateRequest& request, const ModifyCloudNativeAPIGatewayCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayCertificateRequest&;
    using Resp = ModifyCloudNativeAPIGatewayCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayCertificateOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCertificateCallable(const ModifyCloudNativeAPIGatewayCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayCertificateOutcome>>();
    ModifyCloudNativeAPIGatewayCertificateAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayCertificateRequest&,
        ModifyCloudNativeAPIGatewayCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcome TseClient::ModifyCloudNativeAPIGatewayRoute(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteResponse rsp = ModifyCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteAsync(const ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRouteRequest&;
    using Resp = ModifyCloudNativeAPIGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteCallable(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayRouteOutcome>>();
    ModifyCloudNativeAPIGatewayRouteAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRouteRequest&,
        ModifyCloudNativeAPIGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayRouteRateLimit(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteRateLimitResponse rsp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayRouteRateLimitRequest&;
    using Resp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayRouteRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome>>();
    ModifyCloudNativeAPIGatewayRouteRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayRouteRateLimitRequest&,
        ModifyCloudNativeAPIGatewayRouteRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcome TseClient::ModifyCloudNativeAPIGatewayService(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceResponse rsp = ModifyCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceAsync(const ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayServiceRequest&;
    using Resp = ModifyCloudNativeAPIGatewayServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceCallable(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayServiceOutcome>>();
    ModifyCloudNativeAPIGatewayServiceAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayServiceRequest&,
        ModifyCloudNativeAPIGatewayServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayServiceRateLimit(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceRateLimitResponse rsp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudNativeAPIGatewayServiceRateLimitRequest&;
    using Resp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudNativeAPIGatewayServiceRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome>>();
    ModifyCloudNativeAPIGatewayServiceRateLimitAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyCloudNativeAPIGatewayServiceRateLimitRequest&,
        ModifyCloudNativeAPIGatewayServiceRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyConsoleNetworkOutcome TseClient::ModifyConsoleNetwork(const ModifyConsoleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsoleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsoleNetworkResponse rsp = ModifyConsoleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsoleNetworkOutcome(rsp);
        else
            return ModifyConsoleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyConsoleNetworkOutcome(outcome.GetError());
    }
}

void TseClient::ModifyConsoleNetworkAsync(const ModifyConsoleNetworkRequest& request, const ModifyConsoleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsoleNetworkRequest&;
    using Resp = ModifyConsoleNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsoleNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyConsoleNetworkOutcomeCallable TseClient::ModifyConsoleNetworkCallable(const ModifyConsoleNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsoleNetworkOutcome>>();
    ModifyConsoleNetworkAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyConsoleNetworkRequest&,
        ModifyConsoleNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyGovernanceLaneGroupsOutcome TseClient::ModifyGovernanceLaneGroups(const ModifyGovernanceLaneGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernanceLaneGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernanceLaneGroupsResponse rsp = ModifyGovernanceLaneGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernanceLaneGroupsOutcome(rsp);
        else
            return ModifyGovernanceLaneGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernanceLaneGroupsOutcome(outcome.GetError());
    }
}

void TseClient::ModifyGovernanceLaneGroupsAsync(const ModifyGovernanceLaneGroupsRequest& request, const ModifyGovernanceLaneGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGovernanceLaneGroupsRequest&;
    using Resp = ModifyGovernanceLaneGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernanceLaneGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyGovernanceLaneGroupsOutcomeCallable TseClient::ModifyGovernanceLaneGroupsCallable(const ModifyGovernanceLaneGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernanceLaneGroupsOutcome>>();
    ModifyGovernanceLaneGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyGovernanceLaneGroupsRequest&,
        ModifyGovernanceLaneGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNativeGatewayServerGroupOutcome TseClient::ModifyNativeGatewayServerGroup(const ModifyNativeGatewayServerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServerGroupResponse rsp = ModifyNativeGatewayServerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServerGroupOutcome(rsp);
        else
            return ModifyNativeGatewayServerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServerGroupOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServerGroupAsync(const ModifyNativeGatewayServerGroupRequest& request, const ModifyNativeGatewayServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNativeGatewayServerGroupRequest&;
    using Resp = ModifyNativeGatewayServerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNativeGatewayServerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNativeGatewayServerGroupOutcomeCallable TseClient::ModifyNativeGatewayServerGroupCallable(const ModifyNativeGatewayServerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNativeGatewayServerGroupOutcome>>();
    ModifyNativeGatewayServerGroupAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNativeGatewayServerGroupRequest&,
        ModifyNativeGatewayServerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNativeGatewayServiceSourceOutcome TseClient::ModifyNativeGatewayServiceSource(const ModifyNativeGatewayServiceSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNativeGatewayServiceSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNativeGatewayServiceSourceResponse rsp = ModifyNativeGatewayServiceSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNativeGatewayServiceSourceOutcome(rsp);
        else
            return ModifyNativeGatewayServiceSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyNativeGatewayServiceSourceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNativeGatewayServiceSourceAsync(const ModifyNativeGatewayServiceSourceRequest& request, const ModifyNativeGatewayServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNativeGatewayServiceSourceRequest&;
    using Resp = ModifyNativeGatewayServiceSourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNativeGatewayServiceSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNativeGatewayServiceSourceOutcomeCallable TseClient::ModifyNativeGatewayServiceSourceCallable(const ModifyNativeGatewayServiceSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNativeGatewayServiceSourceOutcome>>();
    ModifyNativeGatewayServiceSourceAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNativeGatewayServiceSourceRequest&,
        ModifyNativeGatewayServiceSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNetworkAccessStrategyOutcome TseClient::ModifyNetworkAccessStrategy(const ModifyNetworkAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAccessStrategyResponse rsp = ModifyNetworkAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAccessStrategyOutcome(rsp);
        else
            return ModifyNetworkAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAccessStrategyOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkAccessStrategyAsync(const ModifyNetworkAccessStrategyRequest& request, const ModifyNetworkAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkAccessStrategyRequest&;
    using Resp = ModifyNetworkAccessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkAccessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNetworkAccessStrategyOutcomeCallable TseClient::ModifyNetworkAccessStrategyCallable(const ModifyNetworkAccessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkAccessStrategyOutcome>>();
    ModifyNetworkAccessStrategyAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNetworkAccessStrategyRequest&,
        ModifyNetworkAccessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyNetworkBasicInfoOutcome TseClient::ModifyNetworkBasicInfo(const ModifyNetworkBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkBasicInfoResponse rsp = ModifyNetworkBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkBasicInfoOutcome(rsp);
        else
            return ModifyNetworkBasicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkBasicInfoOutcome(outcome.GetError());
    }
}

void TseClient::ModifyNetworkBasicInfoAsync(const ModifyNetworkBasicInfoRequest& request, const ModifyNetworkBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkBasicInfoRequest&;
    using Resp = ModifyNetworkBasicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkBasicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyNetworkBasicInfoOutcomeCallable TseClient::ModifyNetworkBasicInfoCallable(const ModifyNetworkBasicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkBasicInfoOutcome>>();
    ModifyNetworkBasicInfoAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyNetworkBasicInfoRequest&,
        ModifyNetworkBasicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::ModifyUpstreamNodeStatusOutcome TseClient::ModifyUpstreamNodeStatus(const ModifyUpstreamNodeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUpstreamNodeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUpstreamNodeStatusResponse rsp = ModifyUpstreamNodeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUpstreamNodeStatusOutcome(rsp);
        else
            return ModifyUpstreamNodeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyUpstreamNodeStatusOutcome(outcome.GetError());
    }
}

void TseClient::ModifyUpstreamNodeStatusAsync(const ModifyUpstreamNodeStatusRequest& request, const ModifyUpstreamNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUpstreamNodeStatusRequest&;
    using Resp = ModifyUpstreamNodeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUpstreamNodeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::ModifyUpstreamNodeStatusOutcomeCallable TseClient::ModifyUpstreamNodeStatusCallable(const ModifyUpstreamNodeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUpstreamNodeStatusOutcome>>();
    ModifyUpstreamNodeStatusAsync(
    request,
    [prom](
        const TseClient*,
        const ModifyUpstreamNodeStatusRequest&,
        ModifyUpstreamNodeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::OpenWafProtectionOutcome TseClient::OpenWafProtection(const OpenWafProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "OpenWafProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenWafProtectionResponse rsp = OpenWafProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenWafProtectionOutcome(rsp);
        else
            return OpenWafProtectionOutcome(o.GetError());
    }
    else
    {
        return OpenWafProtectionOutcome(outcome.GetError());
    }
}

void TseClient::OpenWafProtectionAsync(const OpenWafProtectionRequest& request, const OpenWafProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenWafProtectionRequest&;
    using Resp = OpenWafProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "OpenWafProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::OpenWafProtectionOutcomeCallable TseClient::OpenWafProtectionCallable(const OpenWafProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenWafProtectionOutcome>>();
    OpenWafProtectionAsync(
    request,
    [prom](
        const TseClient*,
        const OpenWafProtectionRequest&,
        OpenWafProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcome TseClient::UnbindAutoScalerResourceStrategyFromGroups(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoScalerResourceStrategyFromGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoScalerResourceStrategyFromGroupsResponse rsp = UnbindAutoScalerResourceStrategyFromGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(rsp);
        else
            return UnbindAutoScalerResourceStrategyFromGroupsOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoScalerResourceStrategyFromGroupsOutcome(outcome.GetError());
    }
}

void TseClient::UnbindAutoScalerResourceStrategyFromGroupsAsync(const UnbindAutoScalerResourceStrategyFromGroupsRequest& request, const UnbindAutoScalerResourceStrategyFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindAutoScalerResourceStrategyFromGroupsRequest&;
    using Resp = UnbindAutoScalerResourceStrategyFromGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindAutoScalerResourceStrategyFromGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UnbindAutoScalerResourceStrategyFromGroupsOutcomeCallable TseClient::UnbindAutoScalerResourceStrategyFromGroupsCallable(const UnbindAutoScalerResourceStrategyFromGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindAutoScalerResourceStrategyFromGroupsOutcome>>();
    UnbindAutoScalerResourceStrategyFromGroupsAsync(
    request,
    [prom](
        const TseClient*,
        const UnbindAutoScalerResourceStrategyFromGroupsRequest&,
        UnbindAutoScalerResourceStrategyFromGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcome TseClient::UpdateCloudNativeAPIGatewayCertificateInfo(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewayCertificateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewayCertificateInfoResponse rsp = UpdateCloudNativeAPIGatewayCertificateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewayCertificateInfoOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewayCertificateInfoAsync(const UpdateCloudNativeAPIGatewayCertificateInfoRequest& request, const UpdateCloudNativeAPIGatewayCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCloudNativeAPIGatewayCertificateInfoRequest&;
    using Resp = UpdateCloudNativeAPIGatewayCertificateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCloudNativeAPIGatewayCertificateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateCloudNativeAPIGatewayCertificateInfoOutcomeCallable TseClient::UpdateCloudNativeAPIGatewayCertificateInfoCallable(const UpdateCloudNativeAPIGatewayCertificateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCloudNativeAPIGatewayCertificateInfoOutcome>>();
    UpdateCloudNativeAPIGatewayCertificateInfoAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateCloudNativeAPIGatewayCertificateInfoRequest&,
        UpdateCloudNativeAPIGatewayCertificateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcome TseClient::UpdateCloudNativeAPIGatewaySpec(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudNativeAPIGatewaySpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudNativeAPIGatewaySpecResponse rsp = UpdateCloudNativeAPIGatewaySpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudNativeAPIGatewaySpecOutcome(rsp);
        else
            return UpdateCloudNativeAPIGatewaySpecOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudNativeAPIGatewaySpecOutcome(outcome.GetError());
    }
}

void TseClient::UpdateCloudNativeAPIGatewaySpecAsync(const UpdateCloudNativeAPIGatewaySpecRequest& request, const UpdateCloudNativeAPIGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCloudNativeAPIGatewaySpecRequest&;
    using Resp = UpdateCloudNativeAPIGatewaySpecResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCloudNativeAPIGatewaySpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateCloudNativeAPIGatewaySpecOutcomeCallable TseClient::UpdateCloudNativeAPIGatewaySpecCallable(const UpdateCloudNativeAPIGatewaySpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCloudNativeAPIGatewaySpecOutcome>>();
    UpdateCloudNativeAPIGatewaySpecAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateCloudNativeAPIGatewaySpecRequest&,
        UpdateCloudNativeAPIGatewaySpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateUpstreamHealthCheckConfigOutcome TseClient::UpdateUpstreamHealthCheckConfig(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamHealthCheckConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamHealthCheckConfigResponse rsp = UpdateUpstreamHealthCheckConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamHealthCheckConfigOutcome(rsp);
        else
            return UpdateUpstreamHealthCheckConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamHealthCheckConfigOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamHealthCheckConfigAsync(const UpdateUpstreamHealthCheckConfigRequest& request, const UpdateUpstreamHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUpstreamHealthCheckConfigRequest&;
    using Resp = UpdateUpstreamHealthCheckConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUpstreamHealthCheckConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateUpstreamHealthCheckConfigOutcomeCallable TseClient::UpdateUpstreamHealthCheckConfigCallable(const UpdateUpstreamHealthCheckConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUpstreamHealthCheckConfigOutcome>>();
    UpdateUpstreamHealthCheckConfigAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateUpstreamHealthCheckConfigRequest&,
        UpdateUpstreamHealthCheckConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TseClient::UpdateUpstreamTargetsOutcome TseClient::UpdateUpstreamTargets(const UpdateUpstreamTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUpstreamTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUpstreamTargetsResponse rsp = UpdateUpstreamTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUpstreamTargetsOutcome(rsp);
        else
            return UpdateUpstreamTargetsOutcome(o.GetError());
    }
    else
    {
        return UpdateUpstreamTargetsOutcome(outcome.GetError());
    }
}

void TseClient::UpdateUpstreamTargetsAsync(const UpdateUpstreamTargetsRequest& request, const UpdateUpstreamTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUpstreamTargetsRequest&;
    using Resp = UpdateUpstreamTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUpstreamTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TseClient::UpdateUpstreamTargetsOutcomeCallable TseClient::UpdateUpstreamTargetsCallable(const UpdateUpstreamTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUpstreamTargetsOutcome>>();
    UpdateUpstreamTargetsAsync(
    request,
    [prom](
        const TseClient*,
        const UpdateUpstreamTargetsRequest&,
        UpdateUpstreamTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

