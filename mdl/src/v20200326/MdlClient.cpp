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

#include <tencentcloud/mdl/v20200326/MdlClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mdl::V20200326;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-26";
    const string ENDPOINT = "mdl.intl.tencentcloudapi.com";
}

MdlClient::MdlClient(const Credential &credential, const string &region) :
    MdlClient(credential, region, ClientProfile())
{
}

MdlClient::MdlClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MdlClient::CreateStreamLiveChannelOutcome MdlClient::CreateStreamLiveChannel(const CreateStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLiveChannelResponse rsp = CreateStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLiveChannelOutcome(rsp);
        else
            return CreateStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::CreateStreamLiveChannelAsync(const CreateStreamLiveChannelRequest& request, const CreateStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLiveChannelRequest&;
    using Resp = CreateStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::CreateStreamLiveChannelOutcomeCallable MdlClient::CreateStreamLiveChannelCallable(const CreateStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLiveChannelOutcome>>();
    CreateStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const CreateStreamLiveChannelRequest&,
        CreateStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::CreateStreamLiveInputOutcome MdlClient::CreateStreamLiveInput(const CreateStreamLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLiveInputResponse rsp = CreateStreamLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLiveInputOutcome(rsp);
        else
            return CreateStreamLiveInputOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::CreateStreamLiveInputAsync(const CreateStreamLiveInputRequest& request, const CreateStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLiveInputRequest&;
    using Resp = CreateStreamLiveInputResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLiveInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::CreateStreamLiveInputOutcomeCallable MdlClient::CreateStreamLiveInputCallable(const CreateStreamLiveInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLiveInputOutcome>>();
    CreateStreamLiveInputAsync(
    request,
    [prom](
        const MdlClient*,
        const CreateStreamLiveInputRequest&,
        CreateStreamLiveInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::CreateStreamLiveInputSecurityGroupOutcome MdlClient::CreateStreamLiveInputSecurityGroup(const CreateStreamLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLiveInputSecurityGroupResponse rsp = CreateStreamLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLiveInputSecurityGroupOutcome(rsp);
        else
            return CreateStreamLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::CreateStreamLiveInputSecurityGroupAsync(const CreateStreamLiveInputSecurityGroupRequest& request, const CreateStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLiveInputSecurityGroupRequest&;
    using Resp = CreateStreamLiveInputSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLiveInputSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::CreateStreamLiveInputSecurityGroupOutcomeCallable MdlClient::CreateStreamLiveInputSecurityGroupCallable(const CreateStreamLiveInputSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLiveInputSecurityGroupOutcome>>();
    CreateStreamLiveInputSecurityGroupAsync(
    request,
    [prom](
        const MdlClient*,
        const CreateStreamLiveInputSecurityGroupRequest&,
        CreateStreamLiveInputSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::CreateStreamLivePlanOutcome MdlClient::CreateStreamLivePlan(const CreateStreamLivePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLivePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLivePlanResponse rsp = CreateStreamLivePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLivePlanOutcome(rsp);
        else
            return CreateStreamLivePlanOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLivePlanOutcome(outcome.GetError());
    }
}

void MdlClient::CreateStreamLivePlanAsync(const CreateStreamLivePlanRequest& request, const CreateStreamLivePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLivePlanRequest&;
    using Resp = CreateStreamLivePlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLivePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::CreateStreamLivePlanOutcomeCallable MdlClient::CreateStreamLivePlanCallable(const CreateStreamLivePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLivePlanOutcome>>();
    CreateStreamLivePlanAsync(
    request,
    [prom](
        const MdlClient*,
        const CreateStreamLivePlanRequest&,
        CreateStreamLivePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::CreateStreamLiveWatermarkOutcome MdlClient::CreateStreamLiveWatermark(const CreateStreamLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLiveWatermarkResponse rsp = CreateStreamLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLiveWatermarkOutcome(rsp);
        else
            return CreateStreamLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLiveWatermarkOutcome(outcome.GetError());
    }
}

void MdlClient::CreateStreamLiveWatermarkAsync(const CreateStreamLiveWatermarkRequest& request, const CreateStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamLiveWatermarkRequest&;
    using Resp = CreateStreamLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::CreateStreamLiveWatermarkOutcomeCallable MdlClient::CreateStreamLiveWatermarkCallable(const CreateStreamLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLiveWatermarkOutcome>>();
    CreateStreamLiveWatermarkAsync(
    request,
    [prom](
        const MdlClient*,
        const CreateStreamLiveWatermarkRequest&,
        CreateStreamLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DeleteStreamLiveChannelOutcome MdlClient::DeleteStreamLiveChannel(const DeleteStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLiveChannelResponse rsp = DeleteStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLiveChannelOutcome(rsp);
        else
            return DeleteStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteStreamLiveChannelAsync(const DeleteStreamLiveChannelRequest& request, const DeleteStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLiveChannelRequest&;
    using Resp = DeleteStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DeleteStreamLiveChannelOutcomeCallable MdlClient::DeleteStreamLiveChannelCallable(const DeleteStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLiveChannelOutcome>>();
    DeleteStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const DeleteStreamLiveChannelRequest&,
        DeleteStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DeleteStreamLiveInputOutcome MdlClient::DeleteStreamLiveInput(const DeleteStreamLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLiveInputResponse rsp = DeleteStreamLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLiveInputOutcome(rsp);
        else
            return DeleteStreamLiveInputOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteStreamLiveInputAsync(const DeleteStreamLiveInputRequest& request, const DeleteStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLiveInputRequest&;
    using Resp = DeleteStreamLiveInputResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLiveInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DeleteStreamLiveInputOutcomeCallable MdlClient::DeleteStreamLiveInputCallable(const DeleteStreamLiveInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLiveInputOutcome>>();
    DeleteStreamLiveInputAsync(
    request,
    [prom](
        const MdlClient*,
        const DeleteStreamLiveInputRequest&,
        DeleteStreamLiveInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DeleteStreamLiveInputSecurityGroupOutcome MdlClient::DeleteStreamLiveInputSecurityGroup(const DeleteStreamLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLiveInputSecurityGroupResponse rsp = DeleteStreamLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLiveInputSecurityGroupOutcome(rsp);
        else
            return DeleteStreamLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteStreamLiveInputSecurityGroupAsync(const DeleteStreamLiveInputSecurityGroupRequest& request, const DeleteStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLiveInputSecurityGroupRequest&;
    using Resp = DeleteStreamLiveInputSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLiveInputSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DeleteStreamLiveInputSecurityGroupOutcomeCallable MdlClient::DeleteStreamLiveInputSecurityGroupCallable(const DeleteStreamLiveInputSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLiveInputSecurityGroupOutcome>>();
    DeleteStreamLiveInputSecurityGroupAsync(
    request,
    [prom](
        const MdlClient*,
        const DeleteStreamLiveInputSecurityGroupRequest&,
        DeleteStreamLiveInputSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DeleteStreamLivePlanOutcome MdlClient::DeleteStreamLivePlan(const DeleteStreamLivePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLivePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLivePlanResponse rsp = DeleteStreamLivePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLivePlanOutcome(rsp);
        else
            return DeleteStreamLivePlanOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLivePlanOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteStreamLivePlanAsync(const DeleteStreamLivePlanRequest& request, const DeleteStreamLivePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLivePlanRequest&;
    using Resp = DeleteStreamLivePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLivePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DeleteStreamLivePlanOutcomeCallable MdlClient::DeleteStreamLivePlanCallable(const DeleteStreamLivePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLivePlanOutcome>>();
    DeleteStreamLivePlanAsync(
    request,
    [prom](
        const MdlClient*,
        const DeleteStreamLivePlanRequest&,
        DeleteStreamLivePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DeleteStreamLiveWatermarkOutcome MdlClient::DeleteStreamLiveWatermark(const DeleteStreamLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLiveWatermarkResponse rsp = DeleteStreamLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLiveWatermarkOutcome(rsp);
        else
            return DeleteStreamLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLiveWatermarkOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteStreamLiveWatermarkAsync(const DeleteStreamLiveWatermarkRequest& request, const DeleteStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamLiveWatermarkRequest&;
    using Resp = DeleteStreamLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DeleteStreamLiveWatermarkOutcomeCallable MdlClient::DeleteStreamLiveWatermarkCallable(const DeleteStreamLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLiveWatermarkOutcome>>();
    DeleteStreamLiveWatermarkAsync(
    request,
    [prom](
        const MdlClient*,
        const DeleteStreamLiveWatermarkRequest&,
        DeleteStreamLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelOutcome MdlClient::DescribeStreamLiveChannel(const DescribeStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelResponse rsp = DescribeStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelOutcome(rsp);
        else
            return DescribeStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelAsync(const DescribeStreamLiveChannelRequest& request, const DescribeStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelRequest&;
    using Resp = DescribeStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelOutcomeCallable MdlClient::DescribeStreamLiveChannelCallable(const DescribeStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelOutcome>>();
    DescribeStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelRequest&,
        DescribeStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelAlertsOutcome MdlClient::DescribeStreamLiveChannelAlerts(const DescribeStreamLiveChannelAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannelAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelAlertsResponse rsp = DescribeStreamLiveChannelAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelAlertsOutcome(rsp);
        else
            return DescribeStreamLiveChannelAlertsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelAlertsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelAlertsAsync(const DescribeStreamLiveChannelAlertsRequest& request, const DescribeStreamLiveChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelAlertsRequest&;
    using Resp = DescribeStreamLiveChannelAlertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannelAlerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelAlertsOutcomeCallable MdlClient::DescribeStreamLiveChannelAlertsCallable(const DescribeStreamLiveChannelAlertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelAlertsOutcome>>();
    DescribeStreamLiveChannelAlertsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelAlertsRequest&,
        DescribeStreamLiveChannelAlertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelInputStatisticsOutcome MdlClient::DescribeStreamLiveChannelInputStatistics(const DescribeStreamLiveChannelInputStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannelInputStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelInputStatisticsResponse rsp = DescribeStreamLiveChannelInputStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelInputStatisticsOutcome(rsp);
        else
            return DescribeStreamLiveChannelInputStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelInputStatisticsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelInputStatisticsAsync(const DescribeStreamLiveChannelInputStatisticsRequest& request, const DescribeStreamLiveChannelInputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelInputStatisticsRequest&;
    using Resp = DescribeStreamLiveChannelInputStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannelInputStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelInputStatisticsOutcomeCallable MdlClient::DescribeStreamLiveChannelInputStatisticsCallable(const DescribeStreamLiveChannelInputStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelInputStatisticsOutcome>>();
    DescribeStreamLiveChannelInputStatisticsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelInputStatisticsRequest&,
        DescribeStreamLiveChannelInputStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelLogsOutcome MdlClient::DescribeStreamLiveChannelLogs(const DescribeStreamLiveChannelLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannelLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelLogsResponse rsp = DescribeStreamLiveChannelLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelLogsOutcome(rsp);
        else
            return DescribeStreamLiveChannelLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelLogsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelLogsAsync(const DescribeStreamLiveChannelLogsRequest& request, const DescribeStreamLiveChannelLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelLogsRequest&;
    using Resp = DescribeStreamLiveChannelLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannelLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelLogsOutcomeCallable MdlClient::DescribeStreamLiveChannelLogsCallable(const DescribeStreamLiveChannelLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelLogsOutcome>>();
    DescribeStreamLiveChannelLogsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelLogsRequest&,
        DescribeStreamLiveChannelLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelOutputStatisticsOutcome MdlClient::DescribeStreamLiveChannelOutputStatistics(const DescribeStreamLiveChannelOutputStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannelOutputStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelOutputStatisticsResponse rsp = DescribeStreamLiveChannelOutputStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelOutputStatisticsOutcome(rsp);
        else
            return DescribeStreamLiveChannelOutputStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelOutputStatisticsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelOutputStatisticsAsync(const DescribeStreamLiveChannelOutputStatisticsRequest& request, const DescribeStreamLiveChannelOutputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelOutputStatisticsRequest&;
    using Resp = DescribeStreamLiveChannelOutputStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannelOutputStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelOutputStatisticsOutcomeCallable MdlClient::DescribeStreamLiveChannelOutputStatisticsCallable(const DescribeStreamLiveChannelOutputStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelOutputStatisticsOutcome>>();
    DescribeStreamLiveChannelOutputStatisticsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelOutputStatisticsRequest&,
        DescribeStreamLiveChannelOutputStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveChannelsOutcome MdlClient::DescribeStreamLiveChannels(const DescribeStreamLiveChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveChannelsResponse rsp = DescribeStreamLiveChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveChannelsOutcome(rsp);
        else
            return DescribeStreamLiveChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveChannelsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveChannelsAsync(const DescribeStreamLiveChannelsRequest& request, const DescribeStreamLiveChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveChannelsRequest&;
    using Resp = DescribeStreamLiveChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveChannelsOutcomeCallable MdlClient::DescribeStreamLiveChannelsCallable(const DescribeStreamLiveChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveChannelsOutcome>>();
    DescribeStreamLiveChannelsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveChannelsRequest&,
        DescribeStreamLiveChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveInputOutcome MdlClient::DescribeStreamLiveInput(const DescribeStreamLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveInputResponse rsp = DescribeStreamLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveInputOutcome(rsp);
        else
            return DescribeStreamLiveInputOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveInputAsync(const DescribeStreamLiveInputRequest& request, const DescribeStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveInputRequest&;
    using Resp = DescribeStreamLiveInputResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveInputOutcomeCallable MdlClient::DescribeStreamLiveInputCallable(const DescribeStreamLiveInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveInputOutcome>>();
    DescribeStreamLiveInputAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveInputRequest&,
        DescribeStreamLiveInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveInputSecurityGroupOutcome MdlClient::DescribeStreamLiveInputSecurityGroup(const DescribeStreamLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveInputSecurityGroupResponse rsp = DescribeStreamLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveInputSecurityGroupOutcome(rsp);
        else
            return DescribeStreamLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveInputSecurityGroupAsync(const DescribeStreamLiveInputSecurityGroupRequest& request, const DescribeStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveInputSecurityGroupRequest&;
    using Resp = DescribeStreamLiveInputSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveInputSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveInputSecurityGroupOutcomeCallable MdlClient::DescribeStreamLiveInputSecurityGroupCallable(const DescribeStreamLiveInputSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveInputSecurityGroupOutcome>>();
    DescribeStreamLiveInputSecurityGroupAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveInputSecurityGroupRequest&,
        DescribeStreamLiveInputSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveInputSecurityGroupsOutcome MdlClient::DescribeStreamLiveInputSecurityGroups(const DescribeStreamLiveInputSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveInputSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveInputSecurityGroupsResponse rsp = DescribeStreamLiveInputSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveInputSecurityGroupsOutcome(rsp);
        else
            return DescribeStreamLiveInputSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveInputSecurityGroupsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveInputSecurityGroupsAsync(const DescribeStreamLiveInputSecurityGroupsRequest& request, const DescribeStreamLiveInputSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveInputSecurityGroupsRequest&;
    using Resp = DescribeStreamLiveInputSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveInputSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveInputSecurityGroupsOutcomeCallable MdlClient::DescribeStreamLiveInputSecurityGroupsCallable(const DescribeStreamLiveInputSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveInputSecurityGroupsOutcome>>();
    DescribeStreamLiveInputSecurityGroupsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveInputSecurityGroupsRequest&,
        DescribeStreamLiveInputSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveInputsOutcome MdlClient::DescribeStreamLiveInputs(const DescribeStreamLiveInputsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveInputs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveInputsResponse rsp = DescribeStreamLiveInputsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveInputsOutcome(rsp);
        else
            return DescribeStreamLiveInputsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveInputsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveInputsAsync(const DescribeStreamLiveInputsRequest& request, const DescribeStreamLiveInputsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveInputsRequest&;
    using Resp = DescribeStreamLiveInputsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveInputs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveInputsOutcomeCallable MdlClient::DescribeStreamLiveInputsCallable(const DescribeStreamLiveInputsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveInputsOutcome>>();
    DescribeStreamLiveInputsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveInputsRequest&,
        DescribeStreamLiveInputsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLivePlansOutcome MdlClient::DescribeStreamLivePlans(const DescribeStreamLivePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLivePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLivePlansResponse rsp = DescribeStreamLivePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLivePlansOutcome(rsp);
        else
            return DescribeStreamLivePlansOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLivePlansOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLivePlansAsync(const DescribeStreamLivePlansRequest& request, const DescribeStreamLivePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLivePlansRequest&;
    using Resp = DescribeStreamLivePlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLivePlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLivePlansOutcomeCallable MdlClient::DescribeStreamLivePlansCallable(const DescribeStreamLivePlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLivePlansOutcome>>();
    DescribeStreamLivePlansAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLivePlansRequest&,
        DescribeStreamLivePlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveRegionsOutcome MdlClient::DescribeStreamLiveRegions(const DescribeStreamLiveRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveRegionsResponse rsp = DescribeStreamLiveRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveRegionsOutcome(rsp);
        else
            return DescribeStreamLiveRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveRegionsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveRegionsAsync(const DescribeStreamLiveRegionsRequest& request, const DescribeStreamLiveRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveRegionsRequest&;
    using Resp = DescribeStreamLiveRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveRegionsOutcomeCallable MdlClient::DescribeStreamLiveRegionsCallable(const DescribeStreamLiveRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveRegionsOutcome>>();
    DescribeStreamLiveRegionsAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveRegionsRequest&,
        DescribeStreamLiveRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveTranscodeDetailOutcome MdlClient::DescribeStreamLiveTranscodeDetail(const DescribeStreamLiveTranscodeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveTranscodeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveTranscodeDetailResponse rsp = DescribeStreamLiveTranscodeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveTranscodeDetailOutcome(rsp);
        else
            return DescribeStreamLiveTranscodeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveTranscodeDetailOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveTranscodeDetailAsync(const DescribeStreamLiveTranscodeDetailRequest& request, const DescribeStreamLiveTranscodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveTranscodeDetailRequest&;
    using Resp = DescribeStreamLiveTranscodeDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveTranscodeDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveTranscodeDetailOutcomeCallable MdlClient::DescribeStreamLiveTranscodeDetailCallable(const DescribeStreamLiveTranscodeDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveTranscodeDetailOutcome>>();
    DescribeStreamLiveTranscodeDetailAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveTranscodeDetailRequest&,
        DescribeStreamLiveTranscodeDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveWatermarkOutcome MdlClient::DescribeStreamLiveWatermark(const DescribeStreamLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveWatermarkResponse rsp = DescribeStreamLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveWatermarkOutcome(rsp);
        else
            return DescribeStreamLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveWatermarkOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveWatermarkAsync(const DescribeStreamLiveWatermarkRequest& request, const DescribeStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveWatermarkRequest&;
    using Resp = DescribeStreamLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveWatermarkOutcomeCallable MdlClient::DescribeStreamLiveWatermarkCallable(const DescribeStreamLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveWatermarkOutcome>>();
    DescribeStreamLiveWatermarkAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveWatermarkRequest&,
        DescribeStreamLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::DescribeStreamLiveWatermarksOutcome MdlClient::DescribeStreamLiveWatermarks(const DescribeStreamLiveWatermarksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLiveWatermarks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLiveWatermarksResponse rsp = DescribeStreamLiveWatermarksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLiveWatermarksOutcome(rsp);
        else
            return DescribeStreamLiveWatermarksOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLiveWatermarksOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeStreamLiveWatermarksAsync(const DescribeStreamLiveWatermarksRequest& request, const DescribeStreamLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamLiveWatermarksRequest&;
    using Resp = DescribeStreamLiveWatermarksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLiveWatermarks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::DescribeStreamLiveWatermarksOutcomeCallable MdlClient::DescribeStreamLiveWatermarksCallable(const DescribeStreamLiveWatermarksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLiveWatermarksOutcome>>();
    DescribeStreamLiveWatermarksAsync(
    request,
    [prom](
        const MdlClient*,
        const DescribeStreamLiveWatermarksRequest&,
        DescribeStreamLiveWatermarksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::GetAbWatermarkPlayUrlOutcome MdlClient::GetAbWatermarkPlayUrl(const GetAbWatermarkPlayUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetAbWatermarkPlayUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAbWatermarkPlayUrlResponse rsp = GetAbWatermarkPlayUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAbWatermarkPlayUrlOutcome(rsp);
        else
            return GetAbWatermarkPlayUrlOutcome(o.GetError());
    }
    else
    {
        return GetAbWatermarkPlayUrlOutcome(outcome.GetError());
    }
}

void MdlClient::GetAbWatermarkPlayUrlAsync(const GetAbWatermarkPlayUrlRequest& request, const GetAbWatermarkPlayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAbWatermarkPlayUrlRequest&;
    using Resp = GetAbWatermarkPlayUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GetAbWatermarkPlayUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::GetAbWatermarkPlayUrlOutcomeCallable MdlClient::GetAbWatermarkPlayUrlCallable(const GetAbWatermarkPlayUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAbWatermarkPlayUrlOutcome>>();
    GetAbWatermarkPlayUrlAsync(
    request,
    [prom](
        const MdlClient*,
        const GetAbWatermarkPlayUrlRequest&,
        GetAbWatermarkPlayUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::ModifyStreamLiveChannelOutcome MdlClient::ModifyStreamLiveChannel(const ModifyStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLiveChannelResponse rsp = ModifyStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLiveChannelOutcome(rsp);
        else
            return ModifyStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyStreamLiveChannelAsync(const ModifyStreamLiveChannelRequest& request, const ModifyStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLiveChannelRequest&;
    using Resp = ModifyStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::ModifyStreamLiveChannelOutcomeCallable MdlClient::ModifyStreamLiveChannelCallable(const ModifyStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLiveChannelOutcome>>();
    ModifyStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const ModifyStreamLiveChannelRequest&,
        ModifyStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::ModifyStreamLiveInputOutcome MdlClient::ModifyStreamLiveInput(const ModifyStreamLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLiveInputResponse rsp = ModifyStreamLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLiveInputOutcome(rsp);
        else
            return ModifyStreamLiveInputOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyStreamLiveInputAsync(const ModifyStreamLiveInputRequest& request, const ModifyStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLiveInputRequest&;
    using Resp = ModifyStreamLiveInputResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLiveInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::ModifyStreamLiveInputOutcomeCallable MdlClient::ModifyStreamLiveInputCallable(const ModifyStreamLiveInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLiveInputOutcome>>();
    ModifyStreamLiveInputAsync(
    request,
    [prom](
        const MdlClient*,
        const ModifyStreamLiveInputRequest&,
        ModifyStreamLiveInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::ModifyStreamLiveInputSecurityGroupOutcome MdlClient::ModifyStreamLiveInputSecurityGroup(const ModifyStreamLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLiveInputSecurityGroupResponse rsp = ModifyStreamLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLiveInputSecurityGroupOutcome(rsp);
        else
            return ModifyStreamLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyStreamLiveInputSecurityGroupAsync(const ModifyStreamLiveInputSecurityGroupRequest& request, const ModifyStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLiveInputSecurityGroupRequest&;
    using Resp = ModifyStreamLiveInputSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLiveInputSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::ModifyStreamLiveInputSecurityGroupOutcomeCallable MdlClient::ModifyStreamLiveInputSecurityGroupCallable(const ModifyStreamLiveInputSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLiveInputSecurityGroupOutcome>>();
    ModifyStreamLiveInputSecurityGroupAsync(
    request,
    [prom](
        const MdlClient*,
        const ModifyStreamLiveInputSecurityGroupRequest&,
        ModifyStreamLiveInputSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::ModifyStreamLiveWatermarkOutcome MdlClient::ModifyStreamLiveWatermark(const ModifyStreamLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLiveWatermarkResponse rsp = ModifyStreamLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLiveWatermarkOutcome(rsp);
        else
            return ModifyStreamLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLiveWatermarkOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyStreamLiveWatermarkAsync(const ModifyStreamLiveWatermarkRequest& request, const ModifyStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamLiveWatermarkRequest&;
    using Resp = ModifyStreamLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::ModifyStreamLiveWatermarkOutcomeCallable MdlClient::ModifyStreamLiveWatermarkCallable(const ModifyStreamLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLiveWatermarkOutcome>>();
    ModifyStreamLiveWatermarkAsync(
    request,
    [prom](
        const MdlClient*,
        const ModifyStreamLiveWatermarkRequest&,
        ModifyStreamLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::QueryInputStreamStateOutcome MdlClient::QueryInputStreamState(const QueryInputStreamStateRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInputStreamState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInputStreamStateResponse rsp = QueryInputStreamStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInputStreamStateOutcome(rsp);
        else
            return QueryInputStreamStateOutcome(o.GetError());
    }
    else
    {
        return QueryInputStreamStateOutcome(outcome.GetError());
    }
}

void MdlClient::QueryInputStreamStateAsync(const QueryInputStreamStateRequest& request, const QueryInputStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryInputStreamStateRequest&;
    using Resp = QueryInputStreamStateResponse;

    DoRequestAsync<Req, Resp>(
        "QueryInputStreamState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::QueryInputStreamStateOutcomeCallable MdlClient::QueryInputStreamStateCallable(const QueryInputStreamStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryInputStreamStateOutcome>>();
    QueryInputStreamStateAsync(
    request,
    [prom](
        const MdlClient*,
        const QueryInputStreamStateRequest&,
        QueryInputStreamStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::StartStreamLiveChannelOutcome MdlClient::StartStreamLiveChannel(const StartStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamLiveChannelResponse rsp = StartStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamLiveChannelOutcome(rsp);
        else
            return StartStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return StartStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::StartStreamLiveChannelAsync(const StartStreamLiveChannelRequest& request, const StartStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartStreamLiveChannelRequest&;
    using Resp = StartStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::StartStreamLiveChannelOutcomeCallable MdlClient::StartStreamLiveChannelCallable(const StartStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamLiveChannelOutcome>>();
    StartStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const StartStreamLiveChannelRequest&,
        StartStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdlClient::StopStreamLiveChannelOutcome MdlClient::StopStreamLiveChannel(const StopStreamLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StopStreamLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopStreamLiveChannelResponse rsp = StopStreamLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopStreamLiveChannelOutcome(rsp);
        else
            return StopStreamLiveChannelOutcome(o.GetError());
    }
    else
    {
        return StopStreamLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::StopStreamLiveChannelAsync(const StopStreamLiveChannelRequest& request, const StopStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopStreamLiveChannelRequest&;
    using Resp = StopStreamLiveChannelResponse;

    DoRequestAsync<Req, Resp>(
        "StopStreamLiveChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdlClient::StopStreamLiveChannelOutcomeCallable MdlClient::StopStreamLiveChannelCallable(const StopStreamLiveChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopStreamLiveChannelOutcome>>();
    StopStreamLiveChannelAsync(
    request,
    [prom](
        const MdlClient*,
        const StopStreamLiveChannelRequest&,
        StopStreamLiveChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

