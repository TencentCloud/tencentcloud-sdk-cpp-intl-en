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

#include <tencentcloud/gse/v20191112/GseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gse::V20191112;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-12";
    const string ENDPOINT = "gse.intl.tencentcloudapi.com";
}

GseClient::GseClient(const Credential &credential, const string &region) :
    GseClient(credential, region, ClientProfile())
{
}

GseClient::GseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GseClient::CopyFleetOutcome GseClient::CopyFleet(const CopyFleetRequest &request)
{
    auto outcome = MakeRequest(request, "CopyFleet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyFleetResponse rsp = CopyFleetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyFleetOutcome(rsp);
        else
            return CopyFleetOutcome(o.GetError());
    }
    else
    {
        return CopyFleetOutcome(outcome.GetError());
    }
}

void GseClient::CopyFleetAsync(const CopyFleetRequest& request, const CopyFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyFleetRequest&;
    using Resp = CopyFleetResponse;

    DoRequestAsync<Req, Resp>(
        "CopyFleet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::CopyFleetOutcomeCallable GseClient::CopyFleetCallable(const CopyFleetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyFleetOutcome>>();
    CopyFleetAsync(
    request,
    [prom](
        const GseClient*,
        const CopyFleetRequest&,
        CopyFleetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::CreateGameServerSessionOutcome GseClient::CreateGameServerSession(const CreateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGameServerSessionResponse rsp = CreateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGameServerSessionOutcome(rsp);
        else
            return CreateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return CreateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::CreateGameServerSessionAsync(const CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGameServerSessionRequest&;
    using Resp = CreateGameServerSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGameServerSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::CreateGameServerSessionOutcomeCallable GseClient::CreateGameServerSessionCallable(const CreateGameServerSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGameServerSessionOutcome>>();
    CreateGameServerSessionAsync(
    request,
    [prom](
        const GseClient*,
        const CreateGameServerSessionRequest&,
        CreateGameServerSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DeleteTimerScalingPolicyOutcome GseClient::DeleteTimerScalingPolicy(const DeleteTimerScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTimerScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTimerScalingPolicyResponse rsp = DeleteTimerScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTimerScalingPolicyOutcome(rsp);
        else
            return DeleteTimerScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteTimerScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::DeleteTimerScalingPolicyAsync(const DeleteTimerScalingPolicyRequest& request, const DeleteTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTimerScalingPolicyRequest&;
    using Resp = DeleteTimerScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTimerScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DeleteTimerScalingPolicyOutcomeCallable GseClient::DeleteTimerScalingPolicyCallable(const DeleteTimerScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTimerScalingPolicyOutcome>>();
    DeleteTimerScalingPolicyAsync(
    request,
    [prom](
        const GseClient*,
        const DeleteTimerScalingPolicyRequest&,
        DeleteTimerScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribeGameServerSessionDetailsOutcome GseClient::DescribeGameServerSessionDetails(const DescribeGameServerSessionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionDetailsResponse rsp = DescribeGameServerSessionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionDetailsOutcome(rsp);
        else
            return DescribeGameServerSessionDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionDetailsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionDetailsAsync(const DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGameServerSessionDetailsRequest&;
    using Resp = DescribeGameServerSessionDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGameServerSessionDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribeGameServerSessionDetailsOutcomeCallable GseClient::DescribeGameServerSessionDetailsCallable(const DescribeGameServerSessionDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGameServerSessionDetailsOutcome>>();
    DescribeGameServerSessionDetailsAsync(
    request,
    [prom](
        const GseClient*,
        const DescribeGameServerSessionDetailsRequest&,
        DescribeGameServerSessionDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribeGameServerSessionPlacementOutcome GseClient::DescribeGameServerSessionPlacement(const DescribeGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionPlacementResponse rsp = DescribeGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionPlacementOutcome(rsp);
        else
            return DescribeGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionPlacementAsync(const DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGameServerSessionPlacementRequest&;
    using Resp = DescribeGameServerSessionPlacementResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGameServerSessionPlacement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribeGameServerSessionPlacementOutcomeCallable GseClient::DescribeGameServerSessionPlacementCallable(const DescribeGameServerSessionPlacementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGameServerSessionPlacementOutcome>>();
    DescribeGameServerSessionPlacementAsync(
    request,
    [prom](
        const GseClient*,
        const DescribeGameServerSessionPlacementRequest&,
        DescribeGameServerSessionPlacementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribeGameServerSessionsOutcome GseClient::DescribeGameServerSessions(const DescribeGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionsResponse rsp = DescribeGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionsOutcome(rsp);
        else
            return DescribeGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionsAsync(const DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGameServerSessionsRequest&;
    using Resp = DescribeGameServerSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGameServerSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribeGameServerSessionsOutcomeCallable GseClient::DescribeGameServerSessionsCallable(const DescribeGameServerSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGameServerSessionsOutcome>>();
    DescribeGameServerSessionsAsync(
    request,
    [prom](
        const GseClient*,
        const DescribeGameServerSessionsRequest&,
        DescribeGameServerSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribeInstanceTypesOutcome GseClient::DescribeInstanceTypes(const DescribeInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypesResponse rsp = DescribeInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypesOutcome(rsp);
        else
            return DescribeInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTypesRequest&;
    using Resp = DescribeInstanceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribeInstanceTypesOutcomeCallable GseClient::DescribeInstanceTypesCallable(const DescribeInstanceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTypesOutcome>>();
    DescribeInstanceTypesAsync(
    request,
    [prom](
        const GseClient*,
        const DescribeInstanceTypesRequest&,
        DescribeInstanceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribePlayerSessionsOutcome GseClient::DescribePlayerSessions(const DescribePlayerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayerSessionsResponse rsp = DescribePlayerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayerSessionsOutcome(rsp);
        else
            return DescribePlayerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribePlayerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlayerSessionsRequest&;
    using Resp = DescribePlayerSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlayerSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribePlayerSessionsOutcomeCallable GseClient::DescribePlayerSessionsCallable(const DescribePlayerSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlayerSessionsOutcome>>();
    DescribePlayerSessionsAsync(
    request,
    [prom](
        const GseClient*,
        const DescribePlayerSessionsRequest&,
        DescribePlayerSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::DescribeTimerScalingPoliciesOutcome GseClient::DescribeTimerScalingPolicies(const DescribeTimerScalingPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimerScalingPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimerScalingPoliciesResponse rsp = DescribeTimerScalingPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimerScalingPoliciesOutcome(rsp);
        else
            return DescribeTimerScalingPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeTimerScalingPoliciesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeTimerScalingPoliciesAsync(const DescribeTimerScalingPoliciesRequest& request, const DescribeTimerScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimerScalingPoliciesRequest&;
    using Resp = DescribeTimerScalingPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimerScalingPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::DescribeTimerScalingPoliciesOutcomeCallable GseClient::DescribeTimerScalingPoliciesCallable(const DescribeTimerScalingPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimerScalingPoliciesOutcome>>();
    DescribeTimerScalingPoliciesAsync(
    request,
    [prom](
        const GseClient*,
        const DescribeTimerScalingPoliciesRequest&,
        DescribeTimerScalingPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::EndGameServerSessionAndProcessOutcome GseClient::EndGameServerSessionAndProcess(const EndGameServerSessionAndProcessRequest &request)
{
    auto outcome = MakeRequest(request, "EndGameServerSessionAndProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EndGameServerSessionAndProcessResponse rsp = EndGameServerSessionAndProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EndGameServerSessionAndProcessOutcome(rsp);
        else
            return EndGameServerSessionAndProcessOutcome(o.GetError());
    }
    else
    {
        return EndGameServerSessionAndProcessOutcome(outcome.GetError());
    }
}

void GseClient::EndGameServerSessionAndProcessAsync(const EndGameServerSessionAndProcessRequest& request, const EndGameServerSessionAndProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EndGameServerSessionAndProcessRequest&;
    using Resp = EndGameServerSessionAndProcessResponse;

    DoRequestAsync<Req, Resp>(
        "EndGameServerSessionAndProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::EndGameServerSessionAndProcessOutcomeCallable GseClient::EndGameServerSessionAndProcessCallable(const EndGameServerSessionAndProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<EndGameServerSessionAndProcessOutcome>>();
    EndGameServerSessionAndProcessAsync(
    request,
    [prom](
        const GseClient*,
        const EndGameServerSessionAndProcessRequest&,
        EndGameServerSessionAndProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::GetGameServerSessionLogUrlOutcome GseClient::GetGameServerSessionLogUrl(const GetGameServerSessionLogUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetGameServerSessionLogUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGameServerSessionLogUrlResponse rsp = GetGameServerSessionLogUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGameServerSessionLogUrlOutcome(rsp);
        else
            return GetGameServerSessionLogUrlOutcome(o.GetError());
    }
    else
    {
        return GetGameServerSessionLogUrlOutcome(outcome.GetError());
    }
}

void GseClient::GetGameServerSessionLogUrlAsync(const GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGameServerSessionLogUrlRequest&;
    using Resp = GetGameServerSessionLogUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GetGameServerSessionLogUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::GetGameServerSessionLogUrlOutcomeCallable GseClient::GetGameServerSessionLogUrlCallable(const GetGameServerSessionLogUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGameServerSessionLogUrlOutcome>>();
    GetGameServerSessionLogUrlAsync(
    request,
    [prom](
        const GseClient*,
        const GetGameServerSessionLogUrlRequest&,
        GetGameServerSessionLogUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::GetInstanceAccessOutcome GseClient::GetInstanceAccess(const GetInstanceAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceAccessResponse rsp = GetInstanceAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceAccessOutcome(rsp);
        else
            return GetInstanceAccessOutcome(o.GetError());
    }
    else
    {
        return GetInstanceAccessOutcome(outcome.GetError());
    }
}

void GseClient::GetInstanceAccessAsync(const GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInstanceAccessRequest&;
    using Resp = GetInstanceAccessResponse;

    DoRequestAsync<Req, Resp>(
        "GetInstanceAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::GetInstanceAccessOutcomeCallable GseClient::GetInstanceAccessCallable(const GetInstanceAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInstanceAccessOutcome>>();
    GetInstanceAccessAsync(
    request,
    [prom](
        const GseClient*,
        const GetInstanceAccessRequest&,
        GetInstanceAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::JoinGameServerSessionOutcome GseClient::JoinGameServerSession(const JoinGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "JoinGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JoinGameServerSessionResponse rsp = JoinGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JoinGameServerSessionOutcome(rsp);
        else
            return JoinGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return JoinGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::JoinGameServerSessionAsync(const JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const JoinGameServerSessionRequest&;
    using Resp = JoinGameServerSessionResponse;

    DoRequestAsync<Req, Resp>(
        "JoinGameServerSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::JoinGameServerSessionOutcomeCallable GseClient::JoinGameServerSessionCallable(const JoinGameServerSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<JoinGameServerSessionOutcome>>();
    JoinGameServerSessionAsync(
    request,
    [prom](
        const GseClient*,
        const JoinGameServerSessionRequest&,
        JoinGameServerSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::JoinGameServerSessionBatchOutcome GseClient::JoinGameServerSessionBatch(const JoinGameServerSessionBatchRequest &request)
{
    auto outcome = MakeRequest(request, "JoinGameServerSessionBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JoinGameServerSessionBatchResponse rsp = JoinGameServerSessionBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JoinGameServerSessionBatchOutcome(rsp);
        else
            return JoinGameServerSessionBatchOutcome(o.GetError());
    }
    else
    {
        return JoinGameServerSessionBatchOutcome(outcome.GetError());
    }
}

void GseClient::JoinGameServerSessionBatchAsync(const JoinGameServerSessionBatchRequest& request, const JoinGameServerSessionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const JoinGameServerSessionBatchRequest&;
    using Resp = JoinGameServerSessionBatchResponse;

    DoRequestAsync<Req, Resp>(
        "JoinGameServerSessionBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::JoinGameServerSessionBatchOutcomeCallable GseClient::JoinGameServerSessionBatchCallable(const JoinGameServerSessionBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<JoinGameServerSessionBatchOutcome>>();
    JoinGameServerSessionBatchAsync(
    request,
    [prom](
        const GseClient*,
        const JoinGameServerSessionBatchRequest&,
        JoinGameServerSessionBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::PutTimerScalingPolicyOutcome GseClient::PutTimerScalingPolicy(const PutTimerScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "PutTimerScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutTimerScalingPolicyResponse rsp = PutTimerScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutTimerScalingPolicyOutcome(rsp);
        else
            return PutTimerScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return PutTimerScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::PutTimerScalingPolicyAsync(const PutTimerScalingPolicyRequest& request, const PutTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutTimerScalingPolicyRequest&;
    using Resp = PutTimerScalingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "PutTimerScalingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::PutTimerScalingPolicyOutcomeCallable GseClient::PutTimerScalingPolicyCallable(const PutTimerScalingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutTimerScalingPolicyOutcome>>();
    PutTimerScalingPolicyAsync(
    request,
    [prom](
        const GseClient*,
        const PutTimerScalingPolicyRequest&,
        PutTimerScalingPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::SearchGameServerSessionsOutcome GseClient::SearchGameServerSessions(const SearchGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchGameServerSessionsResponse rsp = SearchGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchGameServerSessionsOutcome(rsp);
        else
            return SearchGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return SearchGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::SearchGameServerSessionsAsync(const SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchGameServerSessionsRequest&;
    using Resp = SearchGameServerSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchGameServerSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::SearchGameServerSessionsOutcomeCallable GseClient::SearchGameServerSessionsCallable(const SearchGameServerSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchGameServerSessionsOutcome>>();
    SearchGameServerSessionsAsync(
    request,
    [prom](
        const GseClient*,
        const SearchGameServerSessionsRequest&,
        SearchGameServerSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::SetServerReservedOutcome GseClient::SetServerReserved(const SetServerReservedRequest &request)
{
    auto outcome = MakeRequest(request, "SetServerReserved");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetServerReservedResponse rsp = SetServerReservedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetServerReservedOutcome(rsp);
        else
            return SetServerReservedOutcome(o.GetError());
    }
    else
    {
        return SetServerReservedOutcome(outcome.GetError());
    }
}

void GseClient::SetServerReservedAsync(const SetServerReservedRequest& request, const SetServerReservedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetServerReservedRequest&;
    using Resp = SetServerReservedResponse;

    DoRequestAsync<Req, Resp>(
        "SetServerReserved", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::SetServerReservedOutcomeCallable GseClient::SetServerReservedCallable(const SetServerReservedRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetServerReservedOutcome>>();
    SetServerReservedAsync(
    request,
    [prom](
        const GseClient*,
        const SetServerReservedRequest&,
        SetServerReservedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::StartGameServerSessionPlacementOutcome GseClient::StartGameServerSessionPlacement(const StartGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StartGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartGameServerSessionPlacementResponse rsp = StartGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartGameServerSessionPlacementOutcome(rsp);
        else
            return StartGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StartGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StartGameServerSessionPlacementAsync(const StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartGameServerSessionPlacementRequest&;
    using Resp = StartGameServerSessionPlacementResponse;

    DoRequestAsync<Req, Resp>(
        "StartGameServerSessionPlacement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::StartGameServerSessionPlacementOutcomeCallable GseClient::StartGameServerSessionPlacementCallable(const StartGameServerSessionPlacementRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartGameServerSessionPlacementOutcome>>();
    StartGameServerSessionPlacementAsync(
    request,
    [prom](
        const GseClient*,
        const StartGameServerSessionPlacementRequest&,
        StartGameServerSessionPlacementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::StopGameServerSessionPlacementOutcome GseClient::StopGameServerSessionPlacement(const StopGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StopGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameServerSessionPlacementResponse rsp = StopGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameServerSessionPlacementOutcome(rsp);
        else
            return StopGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StopGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StopGameServerSessionPlacementAsync(const StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopGameServerSessionPlacementRequest&;
    using Resp = StopGameServerSessionPlacementResponse;

    DoRequestAsync<Req, Resp>(
        "StopGameServerSessionPlacement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::StopGameServerSessionPlacementOutcomeCallable GseClient::StopGameServerSessionPlacementCallable(const StopGameServerSessionPlacementRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopGameServerSessionPlacementOutcome>>();
    StopGameServerSessionPlacementAsync(
    request,
    [prom](
        const GseClient*,
        const StopGameServerSessionPlacementRequest&,
        StopGameServerSessionPlacementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::UpdateBucketAccelerateOptOutcome GseClient::UpdateBucketAccelerateOpt(const UpdateBucketAccelerateOptRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBucketAccelerateOpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBucketAccelerateOptResponse rsp = UpdateBucketAccelerateOptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBucketAccelerateOptOutcome(rsp);
        else
            return UpdateBucketAccelerateOptOutcome(o.GetError());
    }
    else
    {
        return UpdateBucketAccelerateOptOutcome(outcome.GetError());
    }
}

void GseClient::UpdateBucketAccelerateOptAsync(const UpdateBucketAccelerateOptRequest& request, const UpdateBucketAccelerateOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateBucketAccelerateOptRequest&;
    using Resp = UpdateBucketAccelerateOptResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateBucketAccelerateOpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::UpdateBucketAccelerateOptOutcomeCallable GseClient::UpdateBucketAccelerateOptCallable(const UpdateBucketAccelerateOptRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateBucketAccelerateOptOutcome>>();
    UpdateBucketAccelerateOptAsync(
    request,
    [prom](
        const GseClient*,
        const UpdateBucketAccelerateOptRequest&,
        UpdateBucketAccelerateOptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::UpdateBucketCORSOptOutcome GseClient::UpdateBucketCORSOpt(const UpdateBucketCORSOptRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBucketCORSOpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBucketCORSOptResponse rsp = UpdateBucketCORSOptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBucketCORSOptOutcome(rsp);
        else
            return UpdateBucketCORSOptOutcome(o.GetError());
    }
    else
    {
        return UpdateBucketCORSOptOutcome(outcome.GetError());
    }
}

void GseClient::UpdateBucketCORSOptAsync(const UpdateBucketCORSOptRequest& request, const UpdateBucketCORSOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateBucketCORSOptRequest&;
    using Resp = UpdateBucketCORSOptResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateBucketCORSOpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::UpdateBucketCORSOptOutcomeCallable GseClient::UpdateBucketCORSOptCallable(const UpdateBucketCORSOptRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateBucketCORSOptOutcome>>();
    UpdateBucketCORSOptAsync(
    request,
    [prom](
        const GseClient*,
        const UpdateBucketCORSOptRequest&,
        UpdateBucketCORSOptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GseClient::UpdateGameServerSessionOutcome GseClient::UpdateGameServerSession(const UpdateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGameServerSessionResponse rsp = UpdateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGameServerSessionOutcome(rsp);
        else
            return UpdateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return UpdateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::UpdateGameServerSessionAsync(const UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGameServerSessionRequest&;
    using Resp = UpdateGameServerSessionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGameServerSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GseClient::UpdateGameServerSessionOutcomeCallable GseClient::UpdateGameServerSessionCallable(const UpdateGameServerSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGameServerSessionOutcome>>();
    UpdateGameServerSessionAsync(
    request,
    [prom](
        const GseClient*,
        const UpdateGameServerSessionRequest&,
        UpdateGameServerSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

