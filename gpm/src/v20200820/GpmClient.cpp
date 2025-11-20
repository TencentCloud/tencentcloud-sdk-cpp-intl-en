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

#include <tencentcloud/gpm/v20200820/GpmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gpm::V20200820;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-20";
    const string ENDPOINT = "gpm.intl.tencentcloudapi.com";
}

GpmClient::GpmClient(const Credential &credential, const string &region) :
    GpmClient(credential, region, ClientProfile())
{
}

GpmClient::GpmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GpmClient::CancelMatchingOutcome GpmClient::CancelMatching(const CancelMatchingRequest &request)
{
    auto outcome = MakeRequest(request, "CancelMatching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelMatchingResponse rsp = CancelMatchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelMatchingOutcome(rsp);
        else
            return CancelMatchingOutcome(o.GetError());
    }
    else
    {
        return CancelMatchingOutcome(outcome.GetError());
    }
}

void GpmClient::CancelMatchingAsync(const CancelMatchingRequest& request, const CancelMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelMatchingRequest&;
    using Resp = CancelMatchingResponse;

    DoRequestAsync<Req, Resp>(
        "CancelMatching", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::CancelMatchingOutcomeCallable GpmClient::CancelMatchingCallable(const CancelMatchingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelMatchingOutcome>>();
    CancelMatchingAsync(
    request,
    [prom](
        const GpmClient*,
        const CancelMatchingRequest&,
        CancelMatchingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::CreateMatchOutcome GpmClient::CreateMatch(const CreateMatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMatchResponse rsp = CreateMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMatchOutcome(rsp);
        else
            return CreateMatchOutcome(o.GetError());
    }
    else
    {
        return CreateMatchOutcome(outcome.GetError());
    }
}

void GpmClient::CreateMatchAsync(const CreateMatchRequest& request, const CreateMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMatchRequest&;
    using Resp = CreateMatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::CreateMatchOutcomeCallable GpmClient::CreateMatchCallable(const CreateMatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMatchOutcome>>();
    CreateMatchAsync(
    request,
    [prom](
        const GpmClient*,
        const CreateMatchRequest&,
        CreateMatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::CreateRuleOutcome GpmClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void GpmClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::CreateRuleOutcomeCallable GpmClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const GpmClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DeleteMatchOutcome GpmClient::DeleteMatch(const DeleteMatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMatchResponse rsp = DeleteMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMatchOutcome(rsp);
        else
            return DeleteMatchOutcome(o.GetError());
    }
    else
    {
        return DeleteMatchOutcome(outcome.GetError());
    }
}

void GpmClient::DeleteMatchAsync(const DeleteMatchRequest& request, const DeleteMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMatchRequest&;
    using Resp = DeleteMatchResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DeleteMatchOutcomeCallable GpmClient::DeleteMatchCallable(const DeleteMatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMatchOutcome>>();
    DeleteMatchAsync(
    request,
    [prom](
        const GpmClient*,
        const DeleteMatchRequest&,
        DeleteMatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DeleteRuleOutcome GpmClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void GpmClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DeleteRuleOutcomeCallable GpmClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const GpmClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeDataOutcome GpmClient::DescribeData(const DescribeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataResponse rsp = DescribeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataOutcome(rsp);
        else
            return DescribeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDataOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeDataAsync(const DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataRequest&;
    using Resp = DescribeDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeDataOutcomeCallable GpmClient::DescribeDataCallable(const DescribeDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataOutcome>>();
    DescribeDataAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeDataRequest&,
        DescribeDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeMatchOutcome GpmClient::DescribeMatch(const DescribeMatchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchResponse rsp = DescribeMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchOutcome(rsp);
        else
            return DescribeMatchOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchAsync(const DescribeMatchRequest& request, const DescribeMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMatchRequest&;
    using Resp = DescribeMatchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeMatchOutcomeCallable GpmClient::DescribeMatchCallable(const DescribeMatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMatchOutcome>>();
    DescribeMatchAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeMatchRequest&,
        DescribeMatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeMatchCodesOutcome GpmClient::DescribeMatchCodes(const DescribeMatchCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatchCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchCodesResponse rsp = DescribeMatchCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchCodesOutcome(rsp);
        else
            return DescribeMatchCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchCodesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchCodesAsync(const DescribeMatchCodesRequest& request, const DescribeMatchCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMatchCodesRequest&;
    using Resp = DescribeMatchCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMatchCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeMatchCodesOutcomeCallable GpmClient::DescribeMatchCodesCallable(const DescribeMatchCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMatchCodesOutcome>>();
    DescribeMatchCodesAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeMatchCodesRequest&,
        DescribeMatchCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeMatchesOutcome GpmClient::DescribeMatches(const DescribeMatchesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchesResponse rsp = DescribeMatchesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchesOutcome(rsp);
        else
            return DescribeMatchesOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchesAsync(const DescribeMatchesRequest& request, const DescribeMatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMatchesRequest&;
    using Resp = DescribeMatchesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMatches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeMatchesOutcomeCallable GpmClient::DescribeMatchesCallable(const DescribeMatchesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMatchesOutcome>>();
    DescribeMatchesAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeMatchesRequest&,
        DescribeMatchesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeMatchingProgressOutcome GpmClient::DescribeMatchingProgress(const DescribeMatchingProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMatchingProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMatchingProgressResponse rsp = DescribeMatchingProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMatchingProgressOutcome(rsp);
        else
            return DescribeMatchingProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeMatchingProgressOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeMatchingProgressAsync(const DescribeMatchingProgressRequest& request, const DescribeMatchingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMatchingProgressRequest&;
    using Resp = DescribeMatchingProgressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMatchingProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeMatchingProgressOutcomeCallable GpmClient::DescribeMatchingProgressCallable(const DescribeMatchingProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMatchingProgressOutcome>>();
    DescribeMatchingProgressAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeMatchingProgressRequest&,
        DescribeMatchingProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeRuleOutcome GpmClient::DescribeRule(const DescribeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleResponse rsp = DescribeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOutcome(rsp);
        else
            return DescribeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleRequest&;
    using Resp = DescribeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeRuleOutcomeCallable GpmClient::DescribeRuleCallable(const DescribeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleOutcome>>();
    DescribeRuleAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeRuleRequest&,
        DescribeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeRulesOutcome GpmClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeRulesOutcomeCallable GpmClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::DescribeTokenOutcome GpmClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void GpmClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenRequest&;
    using Resp = DescribeTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::DescribeTokenOutcomeCallable GpmClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenOutcome>>();
    DescribeTokenAsync(
    request,
    [prom](
        const GpmClient*,
        const DescribeTokenRequest&,
        DescribeTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::ModifyMatchOutcome GpmClient::ModifyMatch(const ModifyMatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMatchResponse rsp = ModifyMatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMatchOutcome(rsp);
        else
            return ModifyMatchOutcome(o.GetError());
    }
    else
    {
        return ModifyMatchOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyMatchAsync(const ModifyMatchRequest& request, const ModifyMatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMatchRequest&;
    using Resp = ModifyMatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::ModifyMatchOutcomeCallable GpmClient::ModifyMatchCallable(const ModifyMatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMatchOutcome>>();
    ModifyMatchAsync(
    request,
    [prom](
        const GpmClient*,
        const ModifyMatchRequest&,
        ModifyMatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::ModifyRuleOutcome GpmClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleRequest&;
    using Resp = ModifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::ModifyRuleOutcomeCallable GpmClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleOutcome>>();
    ModifyRuleAsync(
    request,
    [prom](
        const GpmClient*,
        const ModifyRuleRequest&,
        ModifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::ModifyTokenOutcome GpmClient::ModifyToken(const ModifyTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTokenResponse rsp = ModifyTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTokenOutcome(rsp);
        else
            return ModifyTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyTokenOutcome(outcome.GetError());
    }
}

void GpmClient::ModifyTokenAsync(const ModifyTokenRequest& request, const ModifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTokenRequest&;
    using Resp = ModifyTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::ModifyTokenOutcomeCallable GpmClient::ModifyTokenCallable(const ModifyTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTokenOutcome>>();
    ModifyTokenAsync(
    request,
    [prom](
        const GpmClient*,
        const ModifyTokenRequest&,
        ModifyTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::StartMatchingOutcome GpmClient::StartMatching(const StartMatchingRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchingResponse rsp = StartMatchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchingOutcome(rsp);
        else
            return StartMatchingOutcome(o.GetError());
    }
    else
    {
        return StartMatchingOutcome(outcome.GetError());
    }
}

void GpmClient::StartMatchingAsync(const StartMatchingRequest& request, const StartMatchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMatchingRequest&;
    using Resp = StartMatchingResponse;

    DoRequestAsync<Req, Resp>(
        "StartMatching", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::StartMatchingOutcomeCallable GpmClient::StartMatchingCallable(const StartMatchingRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMatchingOutcome>>();
    StartMatchingAsync(
    request,
    [prom](
        const GpmClient*,
        const StartMatchingRequest&,
        StartMatchingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GpmClient::StartMatchingBackfillOutcome GpmClient::StartMatchingBackfill(const StartMatchingBackfillRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatchingBackfill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchingBackfillResponse rsp = StartMatchingBackfillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchingBackfillOutcome(rsp);
        else
            return StartMatchingBackfillOutcome(o.GetError());
    }
    else
    {
        return StartMatchingBackfillOutcome(outcome.GetError());
    }
}

void GpmClient::StartMatchingBackfillAsync(const StartMatchingBackfillRequest& request, const StartMatchingBackfillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMatchingBackfillRequest&;
    using Resp = StartMatchingBackfillResponse;

    DoRequestAsync<Req, Resp>(
        "StartMatchingBackfill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GpmClient::StartMatchingBackfillOutcomeCallable GpmClient::StartMatchingBackfillCallable(const StartMatchingBackfillRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMatchingBackfillOutcome>>();
    StartMatchingBackfillAsync(
    request,
    [prom](
        const GpmClient*,
        const StartMatchingBackfillRequest&,
        StartMatchingBackfillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

