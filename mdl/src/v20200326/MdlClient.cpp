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


MdlClient::CreateMediaLiveChannelOutcome MdlClient::CreateMediaLiveChannel(const CreateMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaLiveChannelResponse rsp = CreateMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaLiveChannelOutcome(rsp);
        else
            return CreateMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return CreateMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::CreateMediaLiveChannelAsync(const CreateMediaLiveChannelRequest& request, const CreateMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateMediaLiveChannelOutcomeCallable MdlClient::CreateMediaLiveChannelCallable(const CreateMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::CreateMediaLiveInputOutcome MdlClient::CreateMediaLiveInput(const CreateMediaLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaLiveInputResponse rsp = CreateMediaLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaLiveInputOutcome(rsp);
        else
            return CreateMediaLiveInputOutcome(o.GetError());
    }
    else
    {
        return CreateMediaLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::CreateMediaLiveInputAsync(const CreateMediaLiveInputRequest& request, const CreateMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMediaLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateMediaLiveInputOutcomeCallable MdlClient::CreateMediaLiveInputCallable(const CreateMediaLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMediaLiveInputOutcome()>>(
        [this, request]()
        {
            return this->CreateMediaLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::CreateMediaLiveInputSecurityGroupOutcome MdlClient::CreateMediaLiveInputSecurityGroup(const CreateMediaLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaLiveInputSecurityGroupResponse rsp = CreateMediaLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaLiveInputSecurityGroupOutcome(rsp);
        else
            return CreateMediaLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateMediaLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::CreateMediaLiveInputSecurityGroupAsync(const CreateMediaLiveInputSecurityGroupRequest& request, const CreateMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMediaLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::CreateMediaLiveInputSecurityGroupOutcomeCallable MdlClient::CreateMediaLiveInputSecurityGroupCallable(const CreateMediaLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMediaLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateMediaLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DeleteMediaLiveChannelOutcome MdlClient::DeleteMediaLiveChannel(const DeleteMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaLiveChannelResponse rsp = DeleteMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaLiveChannelOutcome(rsp);
        else
            return DeleteMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteMediaLiveChannelAsync(const DeleteMediaLiveChannelRequest& request, const DeleteMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteMediaLiveChannelOutcomeCallable MdlClient::DeleteMediaLiveChannelCallable(const DeleteMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DeleteMediaLiveInputOutcome MdlClient::DeleteMediaLiveInput(const DeleteMediaLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMediaLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaLiveInputResponse rsp = DeleteMediaLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaLiveInputOutcome(rsp);
        else
            return DeleteMediaLiveInputOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteMediaLiveInputAsync(const DeleteMediaLiveInputRequest& request, const DeleteMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMediaLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteMediaLiveInputOutcomeCallable MdlClient::DeleteMediaLiveInputCallable(const DeleteMediaLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaLiveInputOutcome()>>(
        [this, request]()
        {
            return this->DeleteMediaLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DeleteMediaLiveInputSecurityGroupOutcome MdlClient::DeleteMediaLiveInputSecurityGroup(const DeleteMediaLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMediaLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaLiveInputSecurityGroupResponse rsp = DeleteMediaLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaLiveInputSecurityGroupOutcome(rsp);
        else
            return DeleteMediaLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::DeleteMediaLiveInputSecurityGroupAsync(const DeleteMediaLiveInputSecurityGroupRequest& request, const DeleteMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMediaLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DeleteMediaLiveInputSecurityGroupOutcomeCallable MdlClient::DeleteMediaLiveInputSecurityGroupCallable(const DeleteMediaLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteMediaLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveChannelOutcome MdlClient::DescribeMediaLiveChannel(const DescribeMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveChannelResponse rsp = DescribeMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveChannelOutcome(rsp);
        else
            return DescribeMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveChannelAsync(const DescribeMediaLiveChannelRequest& request, const DescribeMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveChannelOutcomeCallable MdlClient::DescribeMediaLiveChannelCallable(const DescribeMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveChannelAlertsOutcome MdlClient::DescribeMediaLiveChannelAlerts(const DescribeMediaLiveChannelAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveChannelAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveChannelAlertsResponse rsp = DescribeMediaLiveChannelAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveChannelAlertsOutcome(rsp);
        else
            return DescribeMediaLiveChannelAlertsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveChannelAlertsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveChannelAlertsAsync(const DescribeMediaLiveChannelAlertsRequest& request, const DescribeMediaLiveChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveChannelAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveChannelAlertsOutcomeCallable MdlClient::DescribeMediaLiveChannelAlertsCallable(const DescribeMediaLiveChannelAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveChannelAlertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveChannelAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveChannelInputStatisticsOutcome MdlClient::DescribeMediaLiveChannelInputStatistics(const DescribeMediaLiveChannelInputStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveChannelInputStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveChannelInputStatisticsResponse rsp = DescribeMediaLiveChannelInputStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveChannelInputStatisticsOutcome(rsp);
        else
            return DescribeMediaLiveChannelInputStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveChannelInputStatisticsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveChannelInputStatisticsAsync(const DescribeMediaLiveChannelInputStatisticsRequest& request, const DescribeMediaLiveChannelInputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveChannelInputStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveChannelInputStatisticsOutcomeCallable MdlClient::DescribeMediaLiveChannelInputStatisticsCallable(const DescribeMediaLiveChannelInputStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveChannelInputStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveChannelInputStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveChannelOutputStatisticsOutcome MdlClient::DescribeMediaLiveChannelOutputStatistics(const DescribeMediaLiveChannelOutputStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveChannelOutputStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveChannelOutputStatisticsResponse rsp = DescribeMediaLiveChannelOutputStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveChannelOutputStatisticsOutcome(rsp);
        else
            return DescribeMediaLiveChannelOutputStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveChannelOutputStatisticsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveChannelOutputStatisticsAsync(const DescribeMediaLiveChannelOutputStatisticsRequest& request, const DescribeMediaLiveChannelOutputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveChannelOutputStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveChannelOutputStatisticsOutcomeCallable MdlClient::DescribeMediaLiveChannelOutputStatisticsCallable(const DescribeMediaLiveChannelOutputStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveChannelOutputStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveChannelOutputStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveChannelsOutcome MdlClient::DescribeMediaLiveChannels(const DescribeMediaLiveChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveChannelsResponse rsp = DescribeMediaLiveChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveChannelsOutcome(rsp);
        else
            return DescribeMediaLiveChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveChannelsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveChannelsAsync(const DescribeMediaLiveChannelsRequest& request, const DescribeMediaLiveChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveChannelsOutcomeCallable MdlClient::DescribeMediaLiveChannelsCallable(const DescribeMediaLiveChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveInputOutcome MdlClient::DescribeMediaLiveInput(const DescribeMediaLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveInputResponse rsp = DescribeMediaLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveInputOutcome(rsp);
        else
            return DescribeMediaLiveInputOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveInputAsync(const DescribeMediaLiveInputRequest& request, const DescribeMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveInputOutcomeCallable MdlClient::DescribeMediaLiveInputCallable(const DescribeMediaLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveInputOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveInputSecurityGroupOutcome MdlClient::DescribeMediaLiveInputSecurityGroup(const DescribeMediaLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveInputSecurityGroupResponse rsp = DescribeMediaLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveInputSecurityGroupOutcome(rsp);
        else
            return DescribeMediaLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveInputSecurityGroupAsync(const DescribeMediaLiveInputSecurityGroupRequest& request, const DescribeMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveInputSecurityGroupOutcomeCallable MdlClient::DescribeMediaLiveInputSecurityGroupCallable(const DescribeMediaLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveInputSecurityGroupsOutcome MdlClient::DescribeMediaLiveInputSecurityGroups(const DescribeMediaLiveInputSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveInputSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveInputSecurityGroupsResponse rsp = DescribeMediaLiveInputSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveInputSecurityGroupsOutcome(rsp);
        else
            return DescribeMediaLiveInputSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveInputSecurityGroupsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveInputSecurityGroupsAsync(const DescribeMediaLiveInputSecurityGroupsRequest& request, const DescribeMediaLiveInputSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveInputSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveInputSecurityGroupsOutcomeCallable MdlClient::DescribeMediaLiveInputSecurityGroupsCallable(const DescribeMediaLiveInputSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveInputSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveInputSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::DescribeMediaLiveInputsOutcome MdlClient::DescribeMediaLiveInputs(const DescribeMediaLiveInputsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaLiveInputs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaLiveInputsResponse rsp = DescribeMediaLiveInputsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaLiveInputsOutcome(rsp);
        else
            return DescribeMediaLiveInputsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaLiveInputsOutcome(outcome.GetError());
    }
}

void MdlClient::DescribeMediaLiveInputsAsync(const DescribeMediaLiveInputsRequest& request, const DescribeMediaLiveInputsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaLiveInputs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::DescribeMediaLiveInputsOutcomeCallable MdlClient::DescribeMediaLiveInputsCallable(const DescribeMediaLiveInputsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaLiveInputsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaLiveInputs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::ModifyMediaLiveChannelOutcome MdlClient::ModifyMediaLiveChannel(const ModifyMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaLiveChannelResponse rsp = ModifyMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaLiveChannelOutcome(rsp);
        else
            return ModifyMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyMediaLiveChannelAsync(const ModifyMediaLiveChannelRequest& request, const ModifyMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyMediaLiveChannelOutcomeCallable MdlClient::ModifyMediaLiveChannelCallable(const ModifyMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::ModifyMediaLiveInputOutcome MdlClient::ModifyMediaLiveInput(const ModifyMediaLiveInputRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaLiveInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaLiveInputResponse rsp = ModifyMediaLiveInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaLiveInputOutcome(rsp);
        else
            return ModifyMediaLiveInputOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaLiveInputOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyMediaLiveInputAsync(const ModifyMediaLiveInputRequest& request, const ModifyMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaLiveInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyMediaLiveInputOutcomeCallable MdlClient::ModifyMediaLiveInputCallable(const ModifyMediaLiveInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaLiveInputOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaLiveInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::ModifyMediaLiveInputSecurityGroupOutcome MdlClient::ModifyMediaLiveInputSecurityGroup(const ModifyMediaLiveInputSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaLiveInputSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaLiveInputSecurityGroupResponse rsp = ModifyMediaLiveInputSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaLiveInputSecurityGroupOutcome(rsp);
        else
            return ModifyMediaLiveInputSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaLiveInputSecurityGroupOutcome(outcome.GetError());
    }
}

void MdlClient::ModifyMediaLiveInputSecurityGroupAsync(const ModifyMediaLiveInputSecurityGroupRequest& request, const ModifyMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaLiveInputSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::ModifyMediaLiveInputSecurityGroupOutcomeCallable MdlClient::ModifyMediaLiveInputSecurityGroupCallable(const ModifyMediaLiveInputSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaLiveInputSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaLiveInputSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::StartMediaLiveChannelOutcome MdlClient::StartMediaLiveChannel(const StartMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StartMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMediaLiveChannelResponse rsp = StartMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMediaLiveChannelOutcome(rsp);
        else
            return StartMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return StartMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::StartMediaLiveChannelAsync(const StartMediaLiveChannelRequest& request, const StartMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::StartMediaLiveChannelOutcomeCallable MdlClient::StartMediaLiveChannelCallable(const StartMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->StartMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdlClient::StopMediaLiveChannelOutcome MdlClient::StopMediaLiveChannel(const StopMediaLiveChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StopMediaLiveChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMediaLiveChannelResponse rsp = StopMediaLiveChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMediaLiveChannelOutcome(rsp);
        else
            return StopMediaLiveChannelOutcome(o.GetError());
    }
    else
    {
        return StopMediaLiveChannelOutcome(outcome.GetError());
    }
}

void MdlClient::StopMediaLiveChannelAsync(const StopMediaLiveChannelRequest& request, const StopMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMediaLiveChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdlClient::StopMediaLiveChannelOutcomeCallable MdlClient::StopMediaLiveChannelCallable(const StopMediaLiveChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMediaLiveChannelOutcome()>>(
        [this, request]()
        {
            return this->StopMediaLiveChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

