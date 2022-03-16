/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    const string ENDPOINT = "mdl.tencentcloudapi.com";
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateStreamLiveChannelOutcomeCallable MdlClient::CreateStreamLiveChannelCallable(const CreateStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateStreamLiveInputOutcomeCallable MdlClient::CreateStreamLiveInputCallable(const CreateStreamLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLiveInputOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateStreamLiveInputSecurityGroupOutcomeCallable MdlClient::CreateStreamLiveInputSecurityGroupCallable(const CreateStreamLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLivePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateStreamLivePlanOutcomeCallable MdlClient::CreateStreamLivePlanCallable(const CreateStreamLivePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLivePlanOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLivePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateStreamLiveWatermarkOutcomeCallable MdlClient::CreateStreamLiveWatermarkCallable(const CreateStreamLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteStreamLiveChannelOutcomeCallable MdlClient::DeleteStreamLiveChannelCallable(const DeleteStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteStreamLiveInputOutcomeCallable MdlClient::DeleteStreamLiveInputCallable(const DeleteStreamLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLiveInputOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteStreamLiveInputSecurityGroupOutcomeCallable MdlClient::DeleteStreamLiveInputSecurityGroupCallable(const DeleteStreamLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLivePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteStreamLivePlanOutcomeCallable MdlClient::DeleteStreamLivePlanCallable(const DeleteStreamLivePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLivePlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLivePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteStreamLiveWatermarkOutcomeCallable MdlClient::DeleteStreamLiveWatermarkCallable(const DeleteStreamLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelOutcomeCallable MdlClient::DescribeStreamLiveChannelCallable(const DescribeStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannelAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelAlertsOutcomeCallable MdlClient::DescribeStreamLiveChannelAlertsCallable(const DescribeStreamLiveChannelAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelAlertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannelAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannelInputStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelInputStatisticsOutcomeCallable MdlClient::DescribeStreamLiveChannelInputStatisticsCallable(const DescribeStreamLiveChannelInputStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelInputStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannelInputStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannelLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelLogsOutcomeCallable MdlClient::DescribeStreamLiveChannelLogsCallable(const DescribeStreamLiveChannelLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannelLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannelOutputStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelOutputStatisticsOutcomeCallable MdlClient::DescribeStreamLiveChannelOutputStatisticsCallable(const DescribeStreamLiveChannelOutputStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelOutputStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannelOutputStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveChannelsOutcomeCallable MdlClient::DescribeStreamLiveChannelsCallable(const DescribeStreamLiveChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveInputOutcomeCallable MdlClient::DescribeStreamLiveInputCallable(const DescribeStreamLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveInputOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveInputSecurityGroupOutcomeCallable MdlClient::DescribeStreamLiveInputSecurityGroupCallable(const DescribeStreamLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveInputSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveInputSecurityGroupsOutcomeCallable MdlClient::DescribeStreamLiveInputSecurityGroupsCallable(const DescribeStreamLiveInputSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveInputSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveInputSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveInputs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveInputsOutcomeCallable MdlClient::DescribeStreamLiveInputsCallable(const DescribeStreamLiveInputsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveInputsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveInputs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLivePlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLivePlansOutcomeCallable MdlClient::DescribeStreamLivePlansCallable(const DescribeStreamLivePlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLivePlansOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLivePlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveRegionsOutcomeCallable MdlClient::DescribeStreamLiveRegionsCallable(const DescribeStreamLiveRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveWatermarkOutcomeCallable MdlClient::DescribeStreamLiveWatermarkCallable(const DescribeStreamLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLiveWatermarks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeStreamLiveWatermarksOutcomeCallable MdlClient::DescribeStreamLiveWatermarksCallable(const DescribeStreamLiveWatermarksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLiveWatermarksOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLiveWatermarks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyStreamLiveChannelOutcomeCallable MdlClient::ModifyStreamLiveChannelCallable(const ModifyStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyStreamLiveInputOutcomeCallable MdlClient::ModifyStreamLiveInputCallable(const ModifyStreamLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLiveInputOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyStreamLiveInputSecurityGroupOutcomeCallable MdlClient::ModifyStreamLiveInputSecurityGroupCallable(const ModifyStreamLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyStreamLiveWatermarkOutcomeCallable MdlClient::ModifyStreamLiveWatermarkCallable(const ModifyStreamLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::StartStreamLiveChannelOutcomeCallable MdlClient::StartStreamLiveChannelCallable(const StartStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->StartStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopStreamLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::StopStreamLiveChannelOutcomeCallable MdlClient::StopStreamLiveChannelCallable(const StopStreamLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopStreamLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->StopStreamLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

