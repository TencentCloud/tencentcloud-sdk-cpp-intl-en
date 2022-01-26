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

#include <tencentcloud/tcr/v20190924/TcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcr::V20190924;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-24";
    const string ENDPOINT = "tcr.tencentcloudapi.com";
}

TcrClient::TcrClient(const Credential &credential, const string &region) :
    TcrClient(credential, region, ClientProfile())
{
}

TcrClient::TcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcrClient::CheckInstanceOutcome TcrClient::CheckInstance(const CheckInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstanceResponse rsp = CheckInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstanceOutcome(rsp);
        else
            return CheckInstanceOutcome(o.GetError());
    }
    else
    {
        return CheckInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CheckInstanceAsync(const CheckInstanceRequest& request, const CheckInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CheckInstanceOutcomeCallable TcrClient::CheckInstanceCallable(const CheckInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckInstanceOutcome()>>(
        [this, request]()
        {
            return this->CheckInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateImmutableTagRulesOutcome TcrClient::CreateImmutableTagRules(const CreateImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImmutableTagRulesResponse rsp = CreateImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImmutableTagRulesOutcome(rsp);
        else
            return CreateImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return CreateImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::CreateImmutableTagRulesAsync(const CreateImmutableTagRulesRequest& request, const CreateImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateImmutableTagRulesOutcomeCallable TcrClient::CreateImmutableTagRulesCallable(const CreateImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateMultipleSecurityPolicyOutcome TcrClient::CreateMultipleSecurityPolicy(const CreateMultipleSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultipleSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultipleSecurityPolicyResponse rsp = CreateMultipleSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultipleSecurityPolicyOutcome(rsp);
        else
            return CreateMultipleSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateMultipleSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateMultipleSecurityPolicyAsync(const CreateMultipleSecurityPolicyRequest& request, const CreateMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultipleSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateMultipleSecurityPolicyOutcomeCallable TcrClient::CreateMultipleSecurityPolicyCallable(const CreateMultipleSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultipleSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateMultipleSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateReplicationInstanceOutcome TcrClient::CreateReplicationInstance(const CreateReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReplicationInstanceResponse rsp = CreateReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReplicationInstanceOutcome(rsp);
        else
            return CreateReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateReplicationInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateReplicationInstanceAsync(const CreateReplicationInstanceRequest& request, const CreateReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReplicationInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateReplicationInstanceOutcomeCallable TcrClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReplicationInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateReplicationInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImmutableTagRulesOutcome TcrClient::DeleteImmutableTagRules(const DeleteImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImmutableTagRulesResponse rsp = DeleteImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImmutableTagRulesOutcome(rsp);
        else
            return DeleteImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImmutableTagRulesAsync(const DeleteImmutableTagRulesRequest& request, const DeleteImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImmutableTagRulesOutcomeCallable TcrClient::DeleteImmutableTagRulesCallable(const DeleteImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteMultipleSecurityPolicyOutcome TcrClient::DeleteMultipleSecurityPolicy(const DeleteMultipleSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMultipleSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMultipleSecurityPolicyResponse rsp = DeleteMultipleSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMultipleSecurityPolicyOutcome(rsp);
        else
            return DeleteMultipleSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteMultipleSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteMultipleSecurityPolicyAsync(const DeleteMultipleSecurityPolicyRequest& request, const DeleteMultipleSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMultipleSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteMultipleSecurityPolicyOutcomeCallable TcrClient::DeleteMultipleSecurityPolicyCallable(const DeleteMultipleSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMultipleSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteMultipleSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImmutableTagRulesOutcome TcrClient::DescribeImmutableTagRules(const DescribeImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImmutableTagRulesResponse rsp = DescribeImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImmutableTagRulesOutcome(rsp);
        else
            return DescribeImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImmutableTagRulesAsync(const DescribeImmutableTagRulesRequest& request, const DescribeImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImmutableTagRulesOutcomeCallable TcrClient::DescribeImmutableTagRulesCallable(const DescribeImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstanceCreateTasksOutcome TcrClient::DescribeReplicationInstanceCreateTasks(const DescribeReplicationInstanceCreateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstanceCreateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstanceCreateTasksResponse rsp = DescribeReplicationInstanceCreateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstanceCreateTasksOutcome(rsp);
        else
            return DescribeReplicationInstanceCreateTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstanceCreateTasksOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstanceCreateTasksAsync(const DescribeReplicationInstanceCreateTasksRequest& request, const DescribeReplicationInstanceCreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstanceCreateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstanceCreateTasksOutcomeCallable TcrClient::DescribeReplicationInstanceCreateTasksCallable(const DescribeReplicationInstanceCreateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstanceCreateTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstanceCreateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstanceSyncStatusOutcome TcrClient::DescribeReplicationInstanceSyncStatus(const DescribeReplicationInstanceSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstanceSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstanceSyncStatusResponse rsp = DescribeReplicationInstanceSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstanceSyncStatusOutcome(rsp);
        else
            return DescribeReplicationInstanceSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstanceSyncStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstanceSyncStatusAsync(const DescribeReplicationInstanceSyncStatusRequest& request, const DescribeReplicationInstanceSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstanceSyncStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstanceSyncStatusOutcomeCallable TcrClient::DescribeReplicationInstanceSyncStatusCallable(const DescribeReplicationInstanceSyncStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstanceSyncStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstanceSyncStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeReplicationInstancesOutcome TcrClient::DescribeReplicationInstances(const DescribeReplicationInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationInstancesResponse rsp = DescribeReplicationInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationInstancesOutcome(rsp);
        else
            return DescribeReplicationInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationInstancesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeReplicationInstancesAsync(const DescribeReplicationInstancesRequest& request, const DescribeReplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicationInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeReplicationInstancesOutcomeCallable TcrClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicationInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicationInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageReplicationOutcome TcrClient::ManageReplication(const ManageReplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ManageReplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageReplicationResponse rsp = ManageReplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageReplicationOutcome(rsp);
        else
            return ManageReplicationOutcome(o.GetError());
    }
    else
    {
        return ManageReplicationOutcome(outcome.GetError());
    }
}

void TcrClient::ManageReplicationAsync(const ManageReplicationRequest& request, const ManageReplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageReplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageReplicationOutcomeCallable TcrClient::ManageReplicationCallable(const ManageReplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageReplicationOutcome()>>(
        [this, request]()
        {
            return this->ManageReplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyImmutableTagRulesOutcome TcrClient::ModifyImmutableTagRules(const ModifyImmutableTagRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImmutableTagRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImmutableTagRulesResponse rsp = ModifyImmutableTagRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImmutableTagRulesOutcome(rsp);
        else
            return ModifyImmutableTagRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyImmutableTagRulesOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyImmutableTagRulesAsync(const ModifyImmutableTagRulesRequest& request, const ModifyImmutableTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImmutableTagRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyImmutableTagRulesOutcomeCallable TcrClient::ModifyImmutableTagRulesCallable(const ModifyImmutableTagRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImmutableTagRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyImmutableTagRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyInstanceOutcome TcrClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyInstanceOutcomeCallable TcrClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

