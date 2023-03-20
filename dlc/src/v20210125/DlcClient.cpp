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

#include <tencentcloud/dlc/v20210125/DlcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dlc::V20210125;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-25";
    const string ENDPOINT = "dlc.tencentcloudapi.com";
}

DlcClient::DlcClient(const Credential &credential, const string &region) :
    DlcClient(credential, region, ClientProfile())
{
}

DlcClient::DlcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DlcClient::CancelTaskOutcome DlcClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelTaskOutcomeCallable DlcClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateInternalTableOutcome DlcClient::CreateInternalTable(const CreateInternalTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInternalTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInternalTableResponse rsp = CreateInternalTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInternalTableOutcome(rsp);
        else
            return CreateInternalTableOutcome(o.GetError());
    }
    else
    {
        return CreateInternalTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateInternalTableAsync(const CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInternalTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateInternalTableOutcomeCallable DlcClient::CreateInternalTableCallable(const CreateInternalTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInternalTableOutcome()>>(
        [this, request]()
        {
            return this->CreateInternalTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateResultDownloadOutcome DlcClient::CreateResultDownload(const CreateResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResultDownloadResponse rsp = CreateResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResultDownloadOutcome(rsp);
        else
            return CreateResultDownloadOutcome(o.GetError());
    }
    else
    {
        return CreateResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::CreateResultDownloadAsync(const CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResultDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateResultDownloadOutcomeCallable DlcClient::CreateResultDownloadCallable(const CreateResultDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResultDownloadOutcome()>>(
        [this, request]()
        {
            return this->CreateResultDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateSparkAppOutcome DlcClient::CreateSparkApp(const CreateSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppResponse rsp = CreateSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppOutcome(rsp);
        else
            return CreateSparkAppOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppAsync(const CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkAppOutcomeCallable DlcClient::CreateSparkAppCallable(const CreateSparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkAppOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateSparkAppTaskOutcome DlcClient::CreateSparkAppTask(const CreateSparkAppTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkAppTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppTaskResponse rsp = CreateSparkAppTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppTaskOutcome(rsp);
        else
            return CreateSparkAppTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppTaskAsync(const CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkAppTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkAppTaskOutcomeCallable DlcClient::CreateSparkAppTaskCallable(const CreateSparkAppTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkAppTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkAppTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTaskOutcome DlcClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTaskOutcomeCallable DlcClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTasksOutcome DlcClient::CreateTasks(const CreateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTasksResponse rsp = CreateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTasksOutcome(rsp);
        else
            return CreateTasksOutcome(o.GetError());
    }
    else
    {
        return CreateTasksOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTasksAsync(const CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTasksOutcomeCallable DlcClient::CreateTasksCallable(const CreateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteSparkAppOutcome DlcClient::DeleteSparkApp(const DeleteSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSparkAppResponse rsp = DeleteSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSparkAppOutcome(rsp);
        else
            return DeleteSparkAppOutcome(o.GetError());
    }
    else
    {
        return DeleteSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteSparkAppAsync(const DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteSparkAppOutcomeCallable DlcClient::DeleteSparkAppCallable(const DeleteSparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSparkAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteSparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeResultDownloadOutcome DlcClient::DescribeResultDownload(const DescribeResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResultDownloadResponse rsp = DescribeResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResultDownloadOutcome(rsp);
        else
            return DescribeResultDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeResultDownloadAsync(const DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResultDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeResultDownloadOutcomeCallable DlcClient::DescribeResultDownloadCallable(const DescribeResultDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResultDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeResultDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkAppJobOutcome DlcClient::DescribeSparkAppJob(const DescribeSparkAppJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobResponse rsp = DescribeSparkAppJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobOutcome(rsp);
        else
            return DescribeSparkAppJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobAsync(const DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppJobOutcomeCallable DlcClient::DescribeSparkAppJobCallable(const DescribeSparkAppJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkAppJobsOutcome DlcClient::DescribeSparkAppJobs(const DescribeSparkAppJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobsResponse rsp = DescribeSparkAppJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobsOutcome(rsp);
        else
            return DescribeSparkAppJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobsAsync(const DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppJobsOutcomeCallable DlcClient::DescribeSparkAppJobsCallable(const DescribeSparkAppJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkAppTasksOutcome DlcClient::DescribeSparkAppTasks(const DescribeSparkAppTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppTasksResponse rsp = DescribeSparkAppTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppTasksOutcome(rsp);
        else
            return DescribeSparkAppTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppTasksOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppTasksAsync(const DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppTasksOutcomeCallable DlcClient::DescribeSparkAppTasksCallable(const DescribeSparkAppTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTaskResultOutcome DlcClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTaskResultOutcomeCallable DlcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTasksOutcome DlcClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksOutcomeCallable DlcClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::GenerateCreateMangedTableSqlOutcome DlcClient::GenerateCreateMangedTableSql(const GenerateCreateMangedTableSqlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateCreateMangedTableSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateCreateMangedTableSqlResponse rsp = GenerateCreateMangedTableSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateCreateMangedTableSqlOutcome(rsp);
        else
            return GenerateCreateMangedTableSqlOutcome(o.GetError());
    }
    else
    {
        return GenerateCreateMangedTableSqlOutcome(outcome.GetError());
    }
}

void DlcClient::GenerateCreateMangedTableSqlAsync(const GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateCreateMangedTableSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GenerateCreateMangedTableSqlOutcomeCallable DlcClient::GenerateCreateMangedTableSqlCallable(const GenerateCreateMangedTableSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateCreateMangedTableSqlOutcome()>>(
        [this, request]()
        {
            return this->GenerateCreateMangedTableSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyGovernEventRuleOutcome DlcClient::ModifyGovernEventRule(const ModifyGovernEventRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernEventRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernEventRuleResponse rsp = ModifyGovernEventRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernEventRuleOutcome(rsp);
        else
            return ModifyGovernEventRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernEventRuleOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyGovernEventRuleAsync(const ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernEventRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyGovernEventRuleOutcomeCallable DlcClient::ModifyGovernEventRuleCallable(const ModifyGovernEventRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernEventRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernEventRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifySparkAppOutcome DlcClient::ModifySparkApp(const ModifySparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppResponse rsp = ModifySparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppOutcome(rsp);
        else
            return ModifySparkAppOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppAsync(const ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifySparkAppOutcomeCallable DlcClient::ModifySparkAppCallable(const ModifySparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySparkAppOutcome()>>(
        [this, request]()
        {
            return this->ModifySparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::SuspendResumeDataEngineOutcome DlcClient::SuspendResumeDataEngine(const SuspendResumeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendResumeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendResumeDataEngineResponse rsp = SuspendResumeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendResumeDataEngineOutcome(rsp);
        else
            return SuspendResumeDataEngineOutcome(o.GetError());
    }
    else
    {
        return SuspendResumeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SuspendResumeDataEngineAsync(const SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SuspendResumeDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SuspendResumeDataEngineOutcomeCallable DlcClient::SuspendResumeDataEngineCallable(const SuspendResumeDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SuspendResumeDataEngineOutcome()>>(
        [this, request]()
        {
            return this->SuspendResumeDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

