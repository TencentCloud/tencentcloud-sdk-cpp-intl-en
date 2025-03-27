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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::CreateStreamLinkFlowOutcomeCallable MdcClient::CreateStreamLinkFlowCallable(const CreateStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::CreateStreamLinkInputOutcomeCallable MdcClient::CreateStreamLinkInputCallable(const CreateStreamLinkInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkInputOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::CreateStreamLinkOutputInfoOutcomeCallable MdcClient::CreateStreamLinkOutputInfoCallable(const CreateStreamLinkOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DeleteStreamLinkFlowOutcomeCallable MdcClient::DeleteStreamLinkFlowCallable(const DeleteStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkOutput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DeleteStreamLinkOutputOutcomeCallable MdcClient::DeleteStreamLinkOutputCallable(const DeleteStreamLinkOutputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkOutputOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkOutput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowOutcomeCallable MdcClient::DescribeStreamLinkFlowCallable(const DescribeStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowLogsOutcomeCallable MdcClient::DescribeStreamLinkFlowLogsCallable(const DescribeStreamLinkFlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowMediaStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowMediaStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowMediaStatisticsCallable(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowMediaStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowMediaStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowRealtimeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowRealtimeStatusOutcomeCallable MdcClient::DescribeStreamLinkFlowRealtimeStatusCallable(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowRealtimeStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowRealtimeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowSRTStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowSRTStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowSRTStatisticsCallable(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowSRTStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowSRTStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowStatisticsOutcomeCallable MdcClient::DescribeStreamLinkFlowStatisticsCallable(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkFlowsOutcomeCallable MdcClient::DescribeStreamLinkFlowsCallable(const DescribeStreamLinkFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::DescribeStreamLinkRegionsOutcomeCallable MdcClient::DescribeStreamLinkRegionsCallable(const DescribeStreamLinkRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::ModifyStreamLinkFlowOutcomeCallable MdcClient::ModifyStreamLinkFlowCallable(const ModifyStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::ModifyStreamLinkInputOutcomeCallable MdcClient::ModifyStreamLinkInputCallable(const ModifyStreamLinkInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkInputOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::ModifyStreamLinkOutputInfoOutcomeCallable MdcClient::ModifyStreamLinkOutputInfoCallable(const ModifyStreamLinkOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::StartStreamLinkFlowOutcomeCallable MdcClient::StartStreamLinkFlowCallable(const StartStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->StartStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdcClient::StopStreamLinkFlowOutcomeCallable MdcClient::StopStreamLinkFlowCallable(const StopStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->StopStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

