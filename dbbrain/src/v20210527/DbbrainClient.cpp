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

#include <tencentcloud/dbbrain/v20210527/DbbrainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbbrain::V20210527;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-27";
    const string ENDPOINT = "dbbrain.intl.tencentcloudapi.com";
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region) :
    DbbrainClient(credential, region, ClientProfile())
{
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbbrainClient::AddUserContactOutcome DbbrainClient::AddUserContact(const AddUserContactRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserContact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserContactResponse rsp = AddUserContactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserContactOutcome(rsp);
        else
            return AddUserContactOutcome(o.GetError());
    }
    else
    {
        return AddUserContactOutcome(outcome.GetError());
    }
}

void DbbrainClient::AddUserContactAsync(const AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserContact(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::AddUserContactOutcomeCallable DbbrainClient::AddUserContactCallable(const AddUserContactRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserContactOutcome()>>(
        [this, request]()
        {
            return this->AddUserContact(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CloseAuditServiceOutcome DbbrainClient::CloseAuditService(const CloseAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAuditServiceResponse rsp = CloseAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAuditServiceOutcome(rsp);
        else
            return CloseAuditServiceOutcome(o.GetError());
    }
    else
    {
        return CloseAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::CloseAuditServiceAsync(const CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CloseAuditServiceOutcomeCallable DbbrainClient::CloseAuditServiceCallable(const CloseAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->CloseAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateDBDiagReportTaskOutcome DbbrainClient::CreateDBDiagReportTask(const CreateDBDiagReportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBDiagReportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBDiagReportTaskResponse rsp = CreateDBDiagReportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBDiagReportTaskOutcome(rsp);
        else
            return CreateDBDiagReportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDBDiagReportTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateDBDiagReportTaskAsync(const CreateDBDiagReportTaskRequest& request, const CreateDBDiagReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBDiagReportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateDBDiagReportTaskOutcomeCallable DbbrainClient::CreateDBDiagReportTaskCallable(const CreateDBDiagReportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBDiagReportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDBDiagReportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateDBDiagReportUrlOutcome DbbrainClient::CreateDBDiagReportUrl(const CreateDBDiagReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBDiagReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBDiagReportUrlResponse rsp = CreateDBDiagReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBDiagReportUrlOutcome(rsp);
        else
            return CreateDBDiagReportUrlOutcome(o.GetError());
    }
    else
    {
        return CreateDBDiagReportUrlOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateDBDiagReportUrlAsync(const CreateDBDiagReportUrlRequest& request, const CreateDBDiagReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBDiagReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateDBDiagReportUrlOutcomeCallable DbbrainClient::CreateDBDiagReportUrlCallable(const CreateDBDiagReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBDiagReportUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateDBDiagReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateKillTaskOutcome DbbrainClient::CreateKillTask(const CreateKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKillTaskResponse rsp = CreateKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKillTaskOutcome(rsp);
        else
            return CreateKillTaskOutcome(o.GetError());
    }
    else
    {
        return CreateKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateKillTaskAsync(const CreateKillTaskRequest& request, const CreateKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateKillTaskOutcomeCallable DbbrainClient::CreateKillTaskCallable(const CreateKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateMailProfileOutcome DbbrainClient::CreateMailProfile(const CreateMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMailProfileResponse rsp = CreateMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMailProfileOutcome(rsp);
        else
            return CreateMailProfileOutcome(o.GetError());
    }
    else
    {
        return CreateMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateMailProfileAsync(const CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateMailProfileOutcomeCallable DbbrainClient::CreateMailProfileCallable(const CreateMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMailProfileOutcome()>>(
        [this, request]()
        {
            return this->CreateMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateProxySessionKillTaskOutcome DbbrainClient::CreateProxySessionKillTask(const CreateProxySessionKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxySessionKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxySessionKillTaskResponse rsp = CreateProxySessionKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxySessionKillTaskOutcome(rsp);
        else
            return CreateProxySessionKillTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProxySessionKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateProxySessionKillTaskAsync(const CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxySessionKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateProxySessionKillTaskOutcomeCallable DbbrainClient::CreateProxySessionKillTaskCallable(const CreateProxySessionKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxySessionKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateProxySessionKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateRedisBigKeyAnalysisTaskOutcome DbbrainClient::CreateRedisBigKeyAnalysisTask(const CreateRedisBigKeyAnalysisTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRedisBigKeyAnalysisTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRedisBigKeyAnalysisTaskResponse rsp = CreateRedisBigKeyAnalysisTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRedisBigKeyAnalysisTaskOutcome(rsp);
        else
            return CreateRedisBigKeyAnalysisTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRedisBigKeyAnalysisTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateRedisBigKeyAnalysisTaskAsync(const CreateRedisBigKeyAnalysisTaskRequest& request, const CreateRedisBigKeyAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRedisBigKeyAnalysisTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateRedisBigKeyAnalysisTaskOutcomeCallable DbbrainClient::CreateRedisBigKeyAnalysisTaskCallable(const CreateRedisBigKeyAnalysisTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRedisBigKeyAnalysisTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRedisBigKeyAnalysisTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateSchedulerMailProfileOutcome DbbrainClient::CreateSchedulerMailProfile(const CreateSchedulerMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedulerMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchedulerMailProfileResponse rsp = CreateSchedulerMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchedulerMailProfileOutcome(rsp);
        else
            return CreateSchedulerMailProfileOutcome(o.GetError());
    }
    else
    {
        return CreateSchedulerMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateSchedulerMailProfileAsync(const CreateSchedulerMailProfileRequest& request, const CreateSchedulerMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchedulerMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateSchedulerMailProfileOutcomeCallable DbbrainClient::CreateSchedulerMailProfileCallable(const CreateSchedulerMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSchedulerMailProfileOutcome()>>(
        [this, request]()
        {
            return this->CreateSchedulerMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::CreateSecurityAuditLogExportTaskOutcome DbbrainClient::CreateSecurityAuditLogExportTask(const CreateSecurityAuditLogExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityAuditLogExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityAuditLogExportTaskResponse rsp = CreateSecurityAuditLogExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityAuditLogExportTaskOutcome(rsp);
        else
            return CreateSecurityAuditLogExportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityAuditLogExportTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateSecurityAuditLogExportTaskAsync(const CreateSecurityAuditLogExportTaskRequest& request, const CreateSecurityAuditLogExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityAuditLogExportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateSecurityAuditLogExportTaskOutcomeCallable DbbrainClient::CreateSecurityAuditLogExportTaskCallable(const CreateSecurityAuditLogExportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityAuditLogExportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityAuditLogExportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteDBDiagReportTasksOutcome DbbrainClient::DeleteDBDiagReportTasks(const DeleteDBDiagReportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBDiagReportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBDiagReportTasksResponse rsp = DeleteDBDiagReportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBDiagReportTasksOutcome(rsp);
        else
            return DeleteDBDiagReportTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteDBDiagReportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteDBDiagReportTasksAsync(const DeleteDBDiagReportTasksRequest& request, const DeleteDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDBDiagReportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteDBDiagReportTasksOutcomeCallable DbbrainClient::DeleteDBDiagReportTasksCallable(const DeleteDBDiagReportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBDiagReportTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteDBDiagReportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DeleteSecurityAuditLogExportTasksOutcome DbbrainClient::DeleteSecurityAuditLogExportTasks(const DeleteSecurityAuditLogExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityAuditLogExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityAuditLogExportTasksResponse rsp = DeleteSecurityAuditLogExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityAuditLogExportTasksOutcome(rsp);
        else
            return DeleteSecurityAuditLogExportTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityAuditLogExportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DeleteSecurityAuditLogExportTasksAsync(const DeleteSecurityAuditLogExportTasksRequest& request, const DeleteSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityAuditLogExportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DeleteSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DeleteSecurityAuditLogExportTasksCallable(const DeleteSecurityAuditLogExportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityAuditLogExportTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityAuditLogExportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAllUserContactOutcome DbbrainClient::DescribeAllUserContact(const DescribeAllUserContactRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllUserContact");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllUserContactResponse rsp = DescribeAllUserContactResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllUserContactOutcome(rsp);
        else
            return DescribeAllUserContactOutcome(o.GetError());
    }
    else
    {
        return DescribeAllUserContactOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAllUserContactAsync(const DescribeAllUserContactRequest& request, const DescribeAllUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllUserContact(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAllUserContactOutcomeCallable DbbrainClient::DescribeAllUserContactCallable(const DescribeAllUserContactRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllUserContactOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllUserContact(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAllUserGroupOutcome DbbrainClient::DescribeAllUserGroup(const DescribeAllUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllUserGroupResponse rsp = DescribeAllUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllUserGroupOutcome(rsp);
        else
            return DescribeAllUserGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeAllUserGroupOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAllUserGroupAsync(const DescribeAllUserGroupRequest& request, const DescribeAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAllUserGroupOutcomeCallable DbbrainClient::DescribeAllUserGroupCallable(const DescribeAllUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllUserGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeAuditInstanceListOutcome DbbrainClient::DescribeAuditInstanceList(const DescribeAuditInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditInstanceListResponse rsp = DescribeAuditInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditInstanceListOutcome(rsp);
        else
            return DescribeAuditInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditInstanceListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeAuditInstanceListAsync(const DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeAuditInstanceListOutcomeCallable DbbrainClient::DescribeAuditInstanceListCallable(const DescribeAuditInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagEventOutcome DbbrainClient::DescribeDBDiagEvent(const DescribeDBDiagEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventResponse rsp = DescribeDBDiagEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventOutcome(rsp);
        else
            return DescribeDBDiagEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventAsync(const DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventOutcomeCallable DbbrainClient::DescribeDBDiagEventCallable(const DescribeDBDiagEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagEventsOutcome DbbrainClient::DescribeDBDiagEvents(const DescribeDBDiagEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventsResponse rsp = DescribeDBDiagEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventsOutcome(rsp);
        else
            return DescribeDBDiagEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventsAsync(const DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventsOutcomeCallable DbbrainClient::DescribeDBDiagEventsCallable(const DescribeDBDiagEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagHistoryOutcome DbbrainClient::DescribeDBDiagHistory(const DescribeDBDiagHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagHistoryResponse rsp = DescribeDBDiagHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagHistoryOutcome(rsp);
        else
            return DescribeDBDiagHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagHistoryOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagHistoryAsync(const DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagHistoryOutcomeCallable DbbrainClient::DescribeDBDiagHistoryCallable(const DescribeDBDiagHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagReportTasksOutcome DbbrainClient::DescribeDBDiagReportTasks(const DescribeDBDiagReportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagReportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagReportTasksResponse rsp = DescribeDBDiagReportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagReportTasksOutcome(rsp);
        else
            return DescribeDBDiagReportTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagReportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagReportTasksAsync(const DescribeDBDiagReportTasksRequest& request, const DescribeDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagReportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagReportTasksOutcomeCallable DbbrainClient::DescribeDBDiagReportTasksCallable(const DescribeDBDiagReportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagReportTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagReportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBSpaceStatusOutcome DbbrainClient::DescribeDBSpaceStatus(const DescribeDBSpaceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSpaceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSpaceStatusResponse rsp = DescribeDBSpaceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSpaceStatusOutcome(rsp);
        else
            return DescribeDBSpaceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSpaceStatusOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBSpaceStatusAsync(const DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSpaceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBSpaceStatusOutcomeCallable DbbrainClient::DescribeDBSpaceStatusCallable(const DescribeDBSpaceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSpaceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSpaceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDiagDBInstancesOutcome DbbrainClient::DescribeDiagDBInstances(const DescribeDiagDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagDBInstancesResponse rsp = DescribeDiagDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagDBInstancesOutcome(rsp);
        else
            return DescribeDiagDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagDBInstancesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDiagDBInstancesAsync(const DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDiagDBInstancesOutcomeCallable DbbrainClient::DescribeDiagDBInstancesCallable(const DescribeDiagDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeHealthScoreOutcome DbbrainClient::DescribeHealthScore(const DescribeHealthScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthScoreResponse rsp = DescribeHealthScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthScoreOutcome(rsp);
        else
            return DescribeHealthScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthScoreOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeHealthScoreAsync(const DescribeHealthScoreRequest& request, const DescribeHealthScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHealthScore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeHealthScoreOutcomeCallable DbbrainClient::DescribeHealthScoreCallable(const DescribeHealthScoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHealthScoreOutcome()>>(
        [this, request]()
        {
            return this->DescribeHealthScore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeMailProfileOutcome DbbrainClient::DescribeMailProfile(const DescribeMailProfileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMailProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMailProfileResponse rsp = DescribeMailProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMailProfileOutcome(rsp);
        else
            return DescribeMailProfileOutcome(o.GetError());
    }
    else
    {
        return DescribeMailProfileOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMailProfileAsync(const DescribeMailProfileRequest& request, const DescribeMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMailProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeMailProfileOutcomeCallable DbbrainClient::DescribeMailProfileCallable(const DescribeMailProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMailProfileOutcome()>>(
        [this, request]()
        {
            return this->DescribeMailProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeMySqlProcessListOutcome DbbrainClient::DescribeMySqlProcessList(const DescribeMySqlProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMySqlProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMySqlProcessListResponse rsp = DescribeMySqlProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMySqlProcessListOutcome(rsp);
        else
            return DescribeMySqlProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeMySqlProcessListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMySqlProcessListAsync(const DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMySqlProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeMySqlProcessListOutcomeCallable DbbrainClient::DescribeMySqlProcessListCallable(const DescribeMySqlProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMySqlProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMySqlProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeProxyProcessStatisticsOutcome DbbrainClient::DescribeProxyProcessStatistics(const DescribeProxyProcessStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyProcessStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyProcessStatisticsResponse rsp = DescribeProxyProcessStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyProcessStatisticsOutcome(rsp);
        else
            return DescribeProxyProcessStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyProcessStatisticsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeProxyProcessStatisticsAsync(const DescribeProxyProcessStatisticsRequest& request, const DescribeProxyProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyProcessStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeProxyProcessStatisticsOutcomeCallable DbbrainClient::DescribeProxyProcessStatisticsCallable(const DescribeProxyProcessStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyProcessStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyProcessStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeProxySessionKillTasksOutcome DbbrainClient::DescribeProxySessionKillTasks(const DescribeProxySessionKillTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySessionKillTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySessionKillTasksResponse rsp = DescribeProxySessionKillTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySessionKillTasksOutcome(rsp);
        else
            return DescribeProxySessionKillTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySessionKillTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeProxySessionKillTasksAsync(const DescribeProxySessionKillTasksRequest& request, const DescribeProxySessionKillTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySessionKillTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeProxySessionKillTasksOutcomeCallable DbbrainClient::DescribeProxySessionKillTasksCallable(const DescribeProxySessionKillTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySessionKillTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySessionKillTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcome DbbrainClient::DescribeRedisTopKeyPrefixList(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopKeyPrefixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopKeyPrefixListResponse rsp = DescribeRedisTopKeyPrefixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopKeyPrefixListOutcome(rsp);
        else
            return DescribeRedisTopKeyPrefixListOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopKeyPrefixListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopKeyPrefixListAsync(const DescribeRedisTopKeyPrefixListRequest& request, const DescribeRedisTopKeyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisTopKeyPrefixList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcomeCallable DbbrainClient::DescribeRedisTopKeyPrefixListCallable(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisTopKeyPrefixListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisTopKeyPrefixList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSecurityAuditLogDownloadUrlsOutcome DbbrainClient::DescribeSecurityAuditLogDownloadUrls(const DescribeSecurityAuditLogDownloadUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAuditLogDownloadUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAuditLogDownloadUrlsResponse rsp = DescribeSecurityAuditLogDownloadUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAuditLogDownloadUrlsOutcome(rsp);
        else
            return DescribeSecurityAuditLogDownloadUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAuditLogDownloadUrlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSecurityAuditLogDownloadUrlsAsync(const DescribeSecurityAuditLogDownloadUrlsRequest& request, const DescribeSecurityAuditLogDownloadUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityAuditLogDownloadUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSecurityAuditLogDownloadUrlsOutcomeCallable DbbrainClient::DescribeSecurityAuditLogDownloadUrlsCallable(const DescribeSecurityAuditLogDownloadUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityAuditLogDownloadUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityAuditLogDownloadUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSecurityAuditLogExportTasksOutcome DbbrainClient::DescribeSecurityAuditLogExportTasks(const DescribeSecurityAuditLogExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAuditLogExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAuditLogExportTasksResponse rsp = DescribeSecurityAuditLogExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAuditLogExportTasksOutcome(rsp);
        else
            return DescribeSecurityAuditLogExportTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAuditLogExportTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSecurityAuditLogExportTasksAsync(const DescribeSecurityAuditLogExportTasksRequest& request, const DescribeSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityAuditLogExportTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSecurityAuditLogExportTasksOutcomeCallable DbbrainClient::DescribeSecurityAuditLogExportTasksCallable(const DescribeSecurityAuditLogExportTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityAuditLogExportTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityAuditLogExportTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcome DbbrainClient::DescribeSlowLogTimeSeriesStats(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTimeSeriesStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTimeSeriesStatsResponse rsp = DescribeSlowLogTimeSeriesStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTimeSeriesStatsOutcome(rsp);
        else
            return DescribeSlowLogTimeSeriesStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTimeSeriesStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTimeSeriesStatsAsync(const DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTimeSeriesStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTimeSeriesStatsOutcomeCallable DbbrainClient::DescribeSlowLogTimeSeriesStatsCallable(const DescribeSlowLogTimeSeriesStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTimeSeriesStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTimeSeriesStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogTopSqlsOutcome DbbrainClient::DescribeSlowLogTopSqls(const DescribeSlowLogTopSqlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogTopSqls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogTopSqlsResponse rsp = DescribeSlowLogTopSqlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogTopSqlsOutcome(rsp);
        else
            return DescribeSlowLogTopSqlsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogTopSqlsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogTopSqlsAsync(const DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogTopSqls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogTopSqlsOutcomeCallable DbbrainClient::DescribeSlowLogTopSqlsCallable(const DescribeSlowLogTopSqlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogTopSqlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogTopSqls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcome DbbrainClient::DescribeSlowLogUserHostStats(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogUserHostStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogUserHostStatsResponse rsp = DescribeSlowLogUserHostStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogUserHostStatsOutcome(rsp);
        else
            return DescribeSlowLogUserHostStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogUserHostStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogUserHostStatsAsync(const DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogUserHostStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcomeCallable DbbrainClient::DescribeSlowLogUserHostStatsCallable(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogUserHostStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogUserHostStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogsOutcome DbbrainClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogsOutcomeCallable DbbrainClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceSchemaTimeSeriesOutcome DbbrainClient::DescribeTopSpaceSchemaTimeSeries(const DescribeTopSpaceSchemaTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceSchemaTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceSchemaTimeSeriesResponse rsp = DescribeTopSpaceSchemaTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceSchemaTimeSeriesOutcome(rsp);
        else
            return DescribeTopSpaceSchemaTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceSchemaTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceSchemaTimeSeriesAsync(const DescribeTopSpaceSchemaTimeSeriesRequest& request, const DescribeTopSpaceSchemaTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceSchemaTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceSchemaTimeSeriesCallable(const DescribeTopSpaceSchemaTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceSchemaTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceSchemaTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceSchemasOutcome DbbrainClient::DescribeTopSpaceSchemas(const DescribeTopSpaceSchemasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceSchemas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceSchemasResponse rsp = DescribeTopSpaceSchemasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceSchemasOutcome(rsp);
        else
            return DescribeTopSpaceSchemasOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceSchemasOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceSchemasAsync(const DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceSchemas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceSchemasOutcomeCallable DbbrainClient::DescribeTopSpaceSchemasCallable(const DescribeTopSpaceSchemasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceSchemasOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceSchemas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcome DbbrainClient::DescribeTopSpaceTableTimeSeries(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTableTimeSeries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTableTimeSeriesResponse rsp = DescribeTopSpaceTableTimeSeriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTableTimeSeriesOutcome(rsp);
        else
            return DescribeTopSpaceTableTimeSeriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTableTimeSeriesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTableTimeSeriesAsync(const DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTableTimeSeries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTableTimeSeriesOutcomeCallable DbbrainClient::DescribeTopSpaceTableTimeSeriesCallable(const DescribeTopSpaceTableTimeSeriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTableTimeSeriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTableTimeSeries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceTablesOutcome DbbrainClient::DescribeTopSpaceTables(const DescribeTopSpaceTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceTablesResponse rsp = DescribeTopSpaceTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceTablesOutcome(rsp);
        else
            return DescribeTopSpaceTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceTablesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceTablesAsync(const DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceTablesOutcomeCallable DbbrainClient::DescribeTopSpaceTablesCallable(const DescribeTopSpaceTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeUserSqlAdviceOutcome DbbrainClient::DescribeUserSqlAdvice(const DescribeUserSqlAdviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserSqlAdvice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserSqlAdviceResponse rsp = DescribeUserSqlAdviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserSqlAdviceOutcome(rsp);
        else
            return DescribeUserSqlAdviceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserSqlAdviceOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeUserSqlAdviceAsync(const DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserSqlAdvice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeUserSqlAdviceOutcomeCallable DbbrainClient::DescribeUserSqlAdviceCallable(const DescribeUserSqlAdviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserSqlAdviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserSqlAdvice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::KillMySqlThreadsOutcome DbbrainClient::KillMySqlThreads(const KillMySqlThreadsRequest &request)
{
    auto outcome = MakeRequest(request, "KillMySqlThreads");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillMySqlThreadsResponse rsp = KillMySqlThreadsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillMySqlThreadsOutcome(rsp);
        else
            return KillMySqlThreadsOutcome(o.GetError());
    }
    else
    {
        return KillMySqlThreadsOutcome(outcome.GetError());
    }
}

void DbbrainClient::KillMySqlThreadsAsync(const KillMySqlThreadsRequest& request, const KillMySqlThreadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillMySqlThreads(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::KillMySqlThreadsOutcomeCallable DbbrainClient::KillMySqlThreadsCallable(const KillMySqlThreadsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillMySqlThreadsOutcome()>>(
        [this, request]()
        {
            return this->KillMySqlThreads(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyAuditServiceOutcome DbbrainClient::ModifyAuditService(const ModifyAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditServiceResponse rsp = ModifyAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditServiceOutcome(rsp);
        else
            return ModifyAuditServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyAuditServiceAsync(const ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyAuditServiceOutcomeCallable DbbrainClient::ModifyAuditServiceCallable(const ModifyAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::ModifyDiagDBInstanceConfOutcome DbbrainClient::ModifyDiagDBInstanceConf(const ModifyDiagDBInstanceConfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiagDBInstanceConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiagDBInstanceConfResponse rsp = ModifyDiagDBInstanceConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiagDBInstanceConfOutcome(rsp);
        else
            return ModifyDiagDBInstanceConfOutcome(o.GetError());
    }
    else
    {
        return ModifyDiagDBInstanceConfOutcome(outcome.GetError());
    }
}

void DbbrainClient::ModifyDiagDBInstanceConfAsync(const ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiagDBInstanceConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::ModifyDiagDBInstanceConfOutcomeCallable DbbrainClient::ModifyDiagDBInstanceConfCallable(const ModifyDiagDBInstanceConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiagDBInstanceConfOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiagDBInstanceConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::OpenAuditServiceOutcome DbbrainClient::OpenAuditService(const OpenAuditServiceRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAuditService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAuditServiceResponse rsp = OpenAuditServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAuditServiceOutcome(rsp);
        else
            return OpenAuditServiceOutcome(o.GetError());
    }
    else
    {
        return OpenAuditServiceOutcome(outcome.GetError());
    }
}

void DbbrainClient::OpenAuditServiceAsync(const OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenAuditService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::OpenAuditServiceOutcomeCallable DbbrainClient::OpenAuditServiceCallable(const OpenAuditServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenAuditServiceOutcome()>>(
        [this, request]()
        {
            return this->OpenAuditService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

