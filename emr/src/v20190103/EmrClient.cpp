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

#include <tencentcloud/emr/v20190103/EmrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Emr::V20190103;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-03";
    const string ENDPOINT = "emr.tencentcloudapi.com";
}

EmrClient::EmrClient(const Credential &credential, const string &region) :
    EmrClient(credential, region, ClientProfile())
{
}

EmrClient::EmrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EmrClient::AddUsersForUserManagerOutcome EmrClient::AddUsersForUserManager(const AddUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersForUserManagerResponse rsp = AddUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersForUserManagerOutcome(rsp);
        else
            return AddUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return AddUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::AddUsersForUserManagerAsync(const AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddUsersForUserManagerOutcomeCallable EmrClient::AddUsersForUserManagerCallable(const AddUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->AddUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateInstanceOutcome EmrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateInstanceOutcomeCallable EmrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeClusterNodesOutcome EmrClient::DescribeClusterNodes(const DescribeClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodesResponse rsp = DescribeClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodesOutcome(rsp);
        else
            return DescribeClusterNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeClusterNodesOutcomeCallable EmrClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesOutcome EmrClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesOutcomeCallable EmrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesListOutcome EmrClient::DescribeInstancesList(const DescribeInstancesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesListResponse rsp = DescribeInstancesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesListOutcome(rsp);
        else
            return DescribeInstancesListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesListAsync(const DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesListOutcomeCallable EmrClient::DescribeInstancesListCallable(const DescribeInstancesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeResourceScheduleOutcome EmrClient::DescribeResourceSchedule(const DescribeResourceScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceScheduleResponse rsp = DescribeResourceScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceScheduleOutcome(rsp);
        else
            return DescribeResourceScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceScheduleOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeResourceScheduleAsync(const DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeResourceScheduleOutcomeCallable EmrClient::DescribeResourceScheduleCallable(const DescribeResourceScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeUsersForUserManagerOutcome EmrClient::DescribeUsersForUserManager(const DescribeUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersForUserManagerResponse rsp = DescribeUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersForUserManagerOutcome(rsp);
        else
            return DescribeUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeUsersForUserManagerAsync(const DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeUsersForUserManagerOutcomeCallable EmrClient::DescribeUsersForUserManagerCallable(const DescribeUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceCreateInstanceOutcome EmrClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceCreateInstanceOutcomeCallable EmrClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceRenewInstanceOutcome EmrClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstanceResponse rsp = InquiryPriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstanceOutcome(rsp);
        else
            return InquiryPriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceRenewInstanceOutcomeCallable EmrClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceUpdateInstanceOutcome EmrClient::InquiryPriceUpdateInstance(const InquiryPriceUpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpdateInstanceResponse rsp = InquiryPriceUpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpdateInstanceOutcome(rsp);
        else
            return InquiryPriceUpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpdateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceUpdateInstanceAsync(const InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceUpdateInstanceOutcomeCallable EmrClient::InquiryPriceUpdateInstanceCallable(const InquiryPriceUpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceScheduleConfigOutcome EmrClient::ModifyResourceScheduleConfig(const ModifyResourceScheduleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceScheduleConfigResponse rsp = ModifyResourceScheduleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceScheduleConfigOutcome(rsp);
        else
            return ModifyResourceScheduleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceScheduleConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceScheduleConfigAsync(const ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceScheduleConfigOutcomeCallable EmrClient::ModifyResourceScheduleConfigCallable(const ModifyResourceScheduleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceScheduleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceSchedulerOutcome EmrClient::ModifyResourceScheduler(const ModifyResourceSchedulerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceSchedulerResponse rsp = ModifyResourceSchedulerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceSchedulerOutcome(rsp);
        else
            return ModifyResourceSchedulerOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceSchedulerOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceSchedulerAsync(const ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceSchedulerOutcomeCallable EmrClient::ModifyResourceSchedulerCallable(const ModifyResourceSchedulerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceSchedulerOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduler(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateTasksOutcome EmrClient::TerminateTasks(const TerminateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTasksResponse rsp = TerminateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTasksOutcome(rsp);
        else
            return TerminateTasksOutcome(o.GetError());
    }
    else
    {
        return TerminateTasksOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateTasksAsync(const TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateTasksOutcomeCallable EmrClient::TerminateTasksCallable(const TerminateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTasksOutcome()>>(
        [this, request]()
        {
            return this->TerminateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

