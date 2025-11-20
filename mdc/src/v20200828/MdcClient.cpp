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

#include <tencentcloud/mdc/v20200828/MdcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mdc::V20200828;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-28";
    const string ENDPOINT = "mdc.intl.tencentcloudapi.com";
}

MdcClient::MdcClient(const Credential &credential, const string &region) :
    MdcClient(credential, region, ClientProfile())
{
}

MdcClient::MdcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MdcClient::CreateStreamLinkFlowOutcome MdcClient::CreateStreamLinkFlow(const CreateStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkFlowResponse rsp = CreateStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkFlowOutcome(rsp);
        else
            return CreateStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::CreateStreamLinkFlowAsync(const CreateStreamLinkFlowRequest& request, const CreateStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLinkFlowRequest&;
    using Resp = CreateStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::CreateStreamLinkFlowOutcomeCallable MdcClient::CreateStreamLinkFlowCallable(const CreateStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkFlowOutcome>>();
    CreateStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const CreateStreamLinkFlowRequest&,
        CreateStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::CreateStreamLinkInputOutcome MdcClient::CreateStreamLinkInput(const CreateStreamLinkInputRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkInputResponse rsp = CreateStreamLinkInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkInputOutcome(rsp);
        else
            return CreateStreamLinkInputOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkInputOutcome(outcome.GetError());
    }
}

void MdcClient::CreateStreamLinkInputAsync(const CreateStreamLinkInputRequest& request, const CreateStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLinkInputRequest&;
    using Resp = CreateStreamLinkInputResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::CreateStreamLinkInputOutcomeCallable MdcClient::CreateStreamLinkInputCallable(const CreateStreamLinkInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkInputOutcome>>();
    CreateStreamLinkInputAsync(
    request,
    [prom](
        const MdcClient*,
        const CreateStreamLinkInputRequest&,
        CreateStreamLinkInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::CreateStreamLinkOutputInfoOutcome MdcClient::CreateStreamLinkOutputInfo(const CreateStreamLinkOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkOutputInfoResponse rsp = CreateStreamLinkOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkOutputInfoOutcome(rsp);
        else
            return CreateStreamLinkOutputInfoOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkOutputInfoOutcome(outcome.GetError());
    }
}

void MdcClient::CreateStreamLinkOutputInfoAsync(const CreateStreamLinkOutputInfoRequest& request, const CreateStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLinkOutputInfoRequest&;
    using Resp = CreateStreamLinkOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::CreateStreamLinkOutputInfoOutcomeCallable MdcClient::CreateStreamLinkOutputInfoCallable(const CreateStreamLinkOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkOutputInfoOutcome>>();
    CreateStreamLinkOutputInfoAsync(
    request,
    [prom](
        const MdcClient*,
        const CreateStreamLinkOutputInfoRequest&,
        CreateStreamLinkOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DeleteStreamLinkFlowOutcome MdcClient::DeleteStreamLinkFlow(const DeleteStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkFlowResponse rsp = DeleteStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkFlowOutcome(rsp);
        else
            return DeleteStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::DeleteStreamLinkFlowAsync(const DeleteStreamLinkFlowRequest& request, const DeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLinkFlowRequest&;
    using Resp = DeleteStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DeleteStreamLinkFlowOutcomeCallable MdcClient::DeleteStreamLinkFlowCallable(const DeleteStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkFlowOutcome>>();
    DeleteStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const DeleteStreamLinkFlowRequest&,
        DeleteStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DeleteStreamLinkOutputOutcome MdcClient::DeleteStreamLinkOutput(const DeleteStreamLinkOutputRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkOutput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkOutputResponse rsp = DeleteStreamLinkOutputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkOutputOutcome(rsp);
        else
            return DeleteStreamLinkOutputOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkOutputOutcome(outcome.GetError());
    }
}

void MdcClient::DeleteStreamLinkOutputAsync(const DeleteStreamLinkOutputRequest& request, const DeleteStreamLinkOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLinkOutputRequest&;
    using Resp = DeleteStreamLinkOutputResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkOutput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DeleteStreamLinkOutputOutcomeCallable MdcClient::DeleteStreamLinkOutputCallable(const DeleteStreamLinkOutputRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkOutputOutcome>>();
    DeleteStreamLinkOutputAsync(
    request,
    [prom](
        const MdcClient*,
        const DeleteStreamLinkOutputRequest&,
        DeleteStreamLinkOutputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowOutcome MdcClient::DescribeStreamLinkFlow(const DescribeStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowResponse rsp = DescribeStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowOutcome(rsp);
        else
            return DescribeStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowAsync(const DescribeStreamLinkFlowRequest& request, const DescribeStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowRequest&;
    using Resp = DescribeStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowOutcomeCallable MdcClient::DescribeStreamLinkFlowCallable(const DescribeStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowOutcome>>();
    DescribeStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowRequest&,
        DescribeStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowLogsOutcome MdcClient::DescribeStreamLinkFlowLogs(const DescribeStreamLinkFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowLogsResponse rsp = DescribeStreamLinkFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowLogsOutcome(rsp);
        else
            return DescribeStreamLinkFlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowLogsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowLogsAsync(const DescribeStreamLinkFlowLogsRequest& request, const DescribeStreamLinkFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowLogsRequest&;
    using Resp = DescribeStreamLinkFlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowLogsOutcomeCallable MdcClient::DescribeStreamLinkFlowLogsCallable(const DescribeStreamLinkFlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowLogsOutcome>>();
    DescribeStreamLinkFlowLogsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowLogsRequest&,
        DescribeStreamLinkFlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowMediaStatisticsOutcome MdcClient::DescribeStreamLinkFlowMediaStatistics(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowMediaStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowMediaStatisticsResponse rsp = DescribeStreamLinkFlowMediaStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowMediaStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowMediaStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowMediaStatisticsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowMediaStatisticsAsync(const DescribeStreamLinkFlowMediaStatisticsRequest& request, const DescribeStreamLinkFlowMediaStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowMediaStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowMediaStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowMediaStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowMediaStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowMediaStatisticsCallable(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowMediaStatisticsOutcome>>();
    DescribeStreamLinkFlowMediaStatisticsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowMediaStatisticsRequest&,
        DescribeStreamLinkFlowMediaStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowRealtimeStatusOutcome MdcClient::DescribeStreamLinkFlowRealtimeStatus(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowRealtimeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowRealtimeStatusResponse rsp = DescribeStreamLinkFlowRealtimeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowRealtimeStatusOutcome(rsp);
        else
            return DescribeStreamLinkFlowRealtimeStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowRealtimeStatusOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowRealtimeStatusAsync(const DescribeStreamLinkFlowRealtimeStatusRequest& request, const DescribeStreamLinkFlowRealtimeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowRealtimeStatusRequest&;
    using Resp = DescribeStreamLinkFlowRealtimeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowRealtimeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowRealtimeStatusOutcomeCallable MdcClient::DescribeStreamLinkFlowRealtimeStatusCallable(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowRealtimeStatusOutcome>>();
    DescribeStreamLinkFlowRealtimeStatusAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowRealtimeStatusRequest&,
        DescribeStreamLinkFlowRealtimeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowSRTStatisticsOutcome MdcClient::DescribeStreamLinkFlowSRTStatistics(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowSRTStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowSRTStatisticsResponse rsp = DescribeStreamLinkFlowSRTStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowSRTStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowSRTStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowSRTStatisticsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowSRTStatisticsAsync(const DescribeStreamLinkFlowSRTStatisticsRequest& request, const DescribeStreamLinkFlowSRTStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowSRTStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowSRTStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowSRTStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowSRTStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowSRTStatisticsCallable(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowSRTStatisticsOutcome>>();
    DescribeStreamLinkFlowSRTStatisticsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowSRTStatisticsRequest&,
        DescribeStreamLinkFlowSRTStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowStatisticsOutcome MdcClient::DescribeStreamLinkFlowStatistics(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowStatisticsResponse rsp = DescribeStreamLinkFlowStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowStatisticsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowStatisticsAsync(const DescribeStreamLinkFlowStatisticsRequest& request, const DescribeStreamLinkFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowStatisticsCallable(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowStatisticsOutcome>>();
    DescribeStreamLinkFlowStatisticsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowStatisticsRequest&,
        DescribeStreamLinkFlowStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkFlowsOutcome MdcClient::DescribeStreamLinkFlows(const DescribeStreamLinkFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowsResponse rsp = DescribeStreamLinkFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowsOutcome(rsp);
        else
            return DescribeStreamLinkFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkFlowsAsync(const DescribeStreamLinkFlowsRequest& request, const DescribeStreamLinkFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkFlowsRequest&;
    using Resp = DescribeStreamLinkFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkFlowsOutcomeCallable MdcClient::DescribeStreamLinkFlowsCallable(const DescribeStreamLinkFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowsOutcome>>();
    DescribeStreamLinkFlowsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkFlowsRequest&,
        DescribeStreamLinkFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::DescribeStreamLinkRegionsOutcome MdcClient::DescribeStreamLinkRegions(const DescribeStreamLinkRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkRegionsResponse rsp = DescribeStreamLinkRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkRegionsOutcome(rsp);
        else
            return DescribeStreamLinkRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkRegionsOutcome(outcome.GetError());
    }
}

void MdcClient::DescribeStreamLinkRegionsAsync(const DescribeStreamLinkRegionsRequest& request, const DescribeStreamLinkRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLinkRegionsRequest&;
    using Resp = DescribeStreamLinkRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::DescribeStreamLinkRegionsOutcomeCallable MdcClient::DescribeStreamLinkRegionsCallable(const DescribeStreamLinkRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkRegionsOutcome>>();
    DescribeStreamLinkRegionsAsync(
    request,
    [prom](
        const MdcClient*,
        const DescribeStreamLinkRegionsRequest&,
        DescribeStreamLinkRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::ModifyStreamLinkFlowOutcome MdcClient::ModifyStreamLinkFlow(const ModifyStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkFlowResponse rsp = ModifyStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkFlowOutcome(rsp);
        else
            return ModifyStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::ModifyStreamLinkFlowAsync(const ModifyStreamLinkFlowRequest& request, const ModifyStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLinkFlowRequest&;
    using Resp = ModifyStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::ModifyStreamLinkFlowOutcomeCallable MdcClient::ModifyStreamLinkFlowCallable(const ModifyStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkFlowOutcome>>();
    ModifyStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const ModifyStreamLinkFlowRequest&,
        ModifyStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::ModifyStreamLinkInputOutcome MdcClient::ModifyStreamLinkInput(const ModifyStreamLinkInputRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkInputResponse rsp = ModifyStreamLinkInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkInputOutcome(rsp);
        else
            return ModifyStreamLinkInputOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkInputOutcome(outcome.GetError());
    }
}

void MdcClient::ModifyStreamLinkInputAsync(const ModifyStreamLinkInputRequest& request, const ModifyStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLinkInputRequest&;
    using Resp = ModifyStreamLinkInputResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::ModifyStreamLinkInputOutcomeCallable MdcClient::ModifyStreamLinkInputCallable(const ModifyStreamLinkInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkInputOutcome>>();
    ModifyStreamLinkInputAsync(
    request,
    [prom](
        const MdcClient*,
        const ModifyStreamLinkInputRequest&,
        ModifyStreamLinkInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::ModifyStreamLinkOutputInfoOutcome MdcClient::ModifyStreamLinkOutputInfo(const ModifyStreamLinkOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkOutputInfoResponse rsp = ModifyStreamLinkOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkOutputInfoOutcome(rsp);
        else
            return ModifyStreamLinkOutputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkOutputInfoOutcome(outcome.GetError());
    }
}

void MdcClient::ModifyStreamLinkOutputInfoAsync(const ModifyStreamLinkOutputInfoRequest& request, const ModifyStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLinkOutputInfoRequest&;
    using Resp = ModifyStreamLinkOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::ModifyStreamLinkOutputInfoOutcomeCallable MdcClient::ModifyStreamLinkOutputInfoCallable(const ModifyStreamLinkOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkOutputInfoOutcome>>();
    ModifyStreamLinkOutputInfoAsync(
    request,
    [prom](
        const MdcClient*,
        const ModifyStreamLinkOutputInfoRequest&,
        ModifyStreamLinkOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::StartStreamLinkFlowOutcome MdcClient::StartStreamLinkFlow(const StartStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamLinkFlowResponse rsp = StartStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamLinkFlowOutcome(rsp);
        else
            return StartStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return StartStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::StartStreamLinkFlowAsync(const StartStreamLinkFlowRequest& request, const StartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartStreamLinkFlowRequest&;
    using Resp = StartStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::StartStreamLinkFlowOutcomeCallable MdcClient::StartStreamLinkFlowCallable(const StartStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamLinkFlowOutcome>>();
    StartStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const StartStreamLinkFlowRequest&,
        StartStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdcClient::StopStreamLinkFlowOutcome MdcClient::StopStreamLinkFlow(const StopStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StopStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopStreamLinkFlowResponse rsp = StopStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopStreamLinkFlowOutcome(rsp);
        else
            return StopStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return StopStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MdcClient::StopStreamLinkFlowAsync(const StopStreamLinkFlowRequest& request, const StopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopStreamLinkFlowRequest&;
    using Resp = StopStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "StopStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdcClient::StopStreamLinkFlowOutcomeCallable MdcClient::StopStreamLinkFlowCallable(const StopStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopStreamLinkFlowOutcome>>();
    StopStreamLinkFlowAsync(
    request,
    [prom](
        const MdcClient*,
        const StopStreamLinkFlowRequest&,
        StopStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

