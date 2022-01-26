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
    const string ENDPOINT = "mdc.tencentcloudapi.com";
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

