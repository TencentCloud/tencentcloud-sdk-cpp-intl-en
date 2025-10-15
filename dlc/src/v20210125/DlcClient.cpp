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
    const string ENDPOINT = "dlc.intl.tencentcloudapi.com";
}

DlcClient::DlcClient(const Credential &credential, const string &region) :
    DlcClient(credential, region, ClientProfile())
{
}

DlcClient::DlcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DlcClient::AddUsersToWorkGroupOutcome DlcClient::AddUsersToWorkGroup(const AddUsersToWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersToWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersToWorkGroupResponse rsp = AddUsersToWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersToWorkGroupOutcome(rsp);
        else
            return AddUsersToWorkGroupOutcome(o.GetError());
    }
    else
    {
        return AddUsersToWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::AddUsersToWorkGroupAsync(const AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersToWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AddUsersToWorkGroupOutcomeCallable DlcClient::AddUsersToWorkGroupCallable(const AddUsersToWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersToWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->AddUsersToWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AlterDMSDatabaseOutcome DlcClient::AlterDMSDatabase(const AlterDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSDatabaseResponse rsp = AlterDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSDatabaseOutcome(rsp);
        else
            return AlterDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return AlterDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSDatabaseAsync(const AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AlterDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AlterDMSDatabaseOutcomeCallable DlcClient::AlterDMSDatabaseCallable(const AlterDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AlterDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->AlterDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AttachDataMaskPolicyOutcome DlcClient::AttachDataMaskPolicy(const AttachDataMaskPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDataMaskPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDataMaskPolicyResponse rsp = AttachDataMaskPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDataMaskPolicyOutcome(rsp);
        else
            return AttachDataMaskPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachDataMaskPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachDataMaskPolicyAsync(const AttachDataMaskPolicyRequest& request, const AttachDataMaskPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDataMaskPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AttachDataMaskPolicyOutcomeCallable DlcClient::AttachDataMaskPolicyCallable(const AttachDataMaskPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDataMaskPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachDataMaskPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AttachUserPolicyOutcome DlcClient::AttachUserPolicy(const AttachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachUserPolicyResponse rsp = AttachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachUserPolicyOutcome(rsp);
        else
            return AttachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AttachUserPolicyOutcomeCallable DlcClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AttachWorkGroupPolicyOutcome DlcClient::AttachWorkGroupPolicy(const AttachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachWorkGroupPolicyResponse rsp = AttachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachWorkGroupPolicyOutcome(rsp);
        else
            return AttachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachWorkGroupPolicyAsync(const AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachWorkGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AttachWorkGroupPolicyOutcomeCallable DlcClient::AttachWorkGroupPolicyCallable(const AttachWorkGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachWorkGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachWorkGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::BindWorkGroupsToUserOutcome DlcClient::BindWorkGroupsToUser(const BindWorkGroupsToUserRequest &request)
{
    auto outcome = MakeRequest(request, "BindWorkGroupsToUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindWorkGroupsToUserResponse rsp = BindWorkGroupsToUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindWorkGroupsToUserOutcome(rsp);
        else
            return BindWorkGroupsToUserOutcome(o.GetError());
    }
    else
    {
        return BindWorkGroupsToUserOutcome(outcome.GetError());
    }
}

void DlcClient::BindWorkGroupsToUserAsync(const BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindWorkGroupsToUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::BindWorkGroupsToUserOutcomeCallable DlcClient::BindWorkGroupsToUserCallable(const BindWorkGroupsToUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindWorkGroupsToUserOutcome()>>(
        [this, request]()
        {
            return this->BindWorkGroupsToUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CancelSparkSessionBatchSQLOutcome DlcClient::CancelSparkSessionBatchSQL(const CancelSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CancelSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelSparkSessionBatchSQLResponse rsp = CancelSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelSparkSessionBatchSQLOutcome(rsp);
        else
            return CancelSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CancelSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CancelSparkSessionBatchSQLAsync(const CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelSparkSessionBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelSparkSessionBatchSQLOutcomeCallable DlcClient::CancelSparkSessionBatchSQLCallable(const CancelSparkSessionBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelSparkSessionBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->CancelSparkSessionBatchSQL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

DlcClient::CheckDataEngineConfigPairsValidityOutcome DlcClient::CheckDataEngineConfigPairsValidity(const CheckDataEngineConfigPairsValidityRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineConfigPairsValidity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineConfigPairsValidityResponse rsp = CheckDataEngineConfigPairsValidityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineConfigPairsValidityOutcome(rsp);
        else
            return CheckDataEngineConfigPairsValidityOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineConfigPairsValidityOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineConfigPairsValidityAsync(const CheckDataEngineConfigPairsValidityRequest& request, const CheckDataEngineConfigPairsValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineConfigPairsValidity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineConfigPairsValidityOutcomeCallable DlcClient::CheckDataEngineConfigPairsValidityCallable(const CheckDataEngineConfigPairsValidityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineConfigPairsValidityOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineConfigPairsValidity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcome DlcClient::CheckDataEngineImageCanBeRollback(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeRollbackResponse rsp = CheckDataEngineImageCanBeRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeRollbackOutcome(rsp);
        else
            return CheckDataEngineImageCanBeRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeRollbackOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeRollbackAsync(const CheckDataEngineImageCanBeRollbackRequest& request, const CheckDataEngineImageCanBeRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineImageCanBeRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcomeCallable DlcClient::CheckDataEngineImageCanBeRollbackCallable(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineImageCanBeRollbackOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineImageCanBeRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcome DlcClient::CheckDataEngineImageCanBeUpgrade(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeUpgradeResponse rsp = CheckDataEngineImageCanBeUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeUpgradeOutcome(rsp);
        else
            return CheckDataEngineImageCanBeUpgradeOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeUpgradeOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeUpgradeAsync(const CheckDataEngineImageCanBeUpgradeRequest& request, const CheckDataEngineImageCanBeUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineImageCanBeUpgrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcomeCallable DlcClient::CheckDataEngineImageCanBeUpgradeCallable(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineImageCanBeUpgradeOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineImageCanBeUpgrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckGrantedPermissionOutcome DlcClient::CheckGrantedPermission(const CheckGrantedPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "CheckGrantedPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckGrantedPermissionResponse rsp = CheckGrantedPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckGrantedPermissionOutcome(rsp);
        else
            return CheckGrantedPermissionOutcome(o.GetError());
    }
    else
    {
        return CheckGrantedPermissionOutcome(outcome.GetError());
    }
}

void DlcClient::CheckGrantedPermissionAsync(const CheckGrantedPermissionRequest& request, const CheckGrantedPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckGrantedPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckGrantedPermissionOutcomeCallable DlcClient::CheckGrantedPermissionCallable(const CheckGrantedPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckGrantedPermissionOutcome()>>(
        [this, request]()
        {
            return this->CheckGrantedPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CopyDLCTableOutcome DlcClient::CopyDLCTable(const CopyDLCTableRequest &request)
{
    auto outcome = MakeRequest(request, "CopyDLCTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyDLCTableResponse rsp = CopyDLCTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyDLCTableOutcome(rsp);
        else
            return CopyDLCTableOutcome(o.GetError());
    }
    else
    {
        return CopyDLCTableOutcome(outcome.GetError());
    }
}

void DlcClient::CopyDLCTableAsync(const CopyDLCTableRequest& request, const CopyDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyDLCTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CopyDLCTableOutcomeCallable DlcClient::CopyDLCTableCallable(const CopyDLCTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyDLCTableOutcome()>>(
        [this, request]()
        {
            return this->CopyDLCTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateCHDFSBindingProductOutcome DlcClient::CreateCHDFSBindingProduct(const CreateCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCHDFSBindingProductResponse rsp = CreateCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCHDFSBindingProductOutcome(rsp);
        else
            return CreateCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return CreateCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::CreateCHDFSBindingProductAsync(const CreateCHDFSBindingProductRequest& request, const CreateCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCHDFSBindingProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateCHDFSBindingProductOutcomeCallable DlcClient::CreateCHDFSBindingProductCallable(const CreateCHDFSBindingProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCHDFSBindingProductOutcome()>>(
        [this, request]()
        {
            return this->CreateCHDFSBindingProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDLCTableOutcome DlcClient::CreateDLCTable(const CreateDLCTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDLCTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDLCTableResponse rsp = CreateDLCTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDLCTableOutcome(rsp);
        else
            return CreateDLCTableOutcome(o.GetError());
    }
    else
    {
        return CreateDLCTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDLCTableAsync(const CreateDLCTableRequest& request, const CreateDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDLCTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDLCTableOutcomeCallable DlcClient::CreateDLCTableCallable(const CreateDLCTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDLCTableOutcome()>>(
        [this, request]()
        {
            return this->CreateDLCTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDMSDatabaseOutcome DlcClient::CreateDMSDatabase(const CreateDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDMSDatabaseResponse rsp = CreateDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDMSDatabaseOutcome(rsp);
        else
            return CreateDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDMSDatabaseAsync(const CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDMSDatabaseOutcomeCallable DlcClient::CreateDMSDatabaseCallable(const CreateDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDataEngineOutcome DlcClient::CreateDataEngine(const CreateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataEngineResponse rsp = CreateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataEngineOutcome(rsp);
        else
            return CreateDataEngineOutcome(o.GetError());
    }
    else
    {
        return CreateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDataEngineAsync(const CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDataEngineOutcomeCallable DlcClient::CreateDataEngineCallable(const CreateDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataEngineOutcome()>>(
        [this, request]()
        {
            return this->CreateDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDataMaskStrategyOutcome DlcClient::CreateDataMaskStrategy(const CreateDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataMaskStrategyResponse rsp = CreateDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataMaskStrategyOutcome(rsp);
        else
            return CreateDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDataMaskStrategyAsync(const CreateDataMaskStrategyRequest& request, const CreateDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataMaskStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDataMaskStrategyOutcomeCallable DlcClient::CreateDataMaskStrategyCallable(const CreateDataMaskStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataMaskStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateDataMaskStrategy(request);
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

DlcClient::CreateSparkSessionBatchSQLOutcome DlcClient::CreateSparkSessionBatchSQL(const CreateSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkSessionBatchSQLResponse rsp = CreateSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkSessionBatchSQLOutcome(rsp);
        else
            return CreateSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CreateSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkSessionBatchSQLAsync(const CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkSessionBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkSessionBatchSQLOutcomeCallable DlcClient::CreateSparkSessionBatchSQLCallable(const CreateSparkSessionBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkSessionBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkSessionBatchSQL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateStoreLocationOutcome DlcClient::CreateStoreLocation(const CreateStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStoreLocationResponse rsp = CreateStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStoreLocationOutcome(rsp);
        else
            return CreateStoreLocationOutcome(o.GetError());
    }
    else
    {
        return CreateStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::CreateStoreLocationAsync(const CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateStoreLocationOutcomeCallable DlcClient::CreateStoreLocationCallable(const CreateStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->CreateStoreLocation(request);
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

DlcClient::CreateUserOutcome DlcClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void DlcClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateUserOutcomeCallable DlcClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateWorkGroupOutcome DlcClient::CreateWorkGroup(const CreateWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkGroupResponse rsp = CreateWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkGroupOutcome(rsp);
        else
            return CreateWorkGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::CreateWorkGroupAsync(const CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateWorkGroupOutcomeCallable DlcClient::CreateWorkGroupCallable(const CreateWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteCHDFSBindingProductOutcome DlcClient::DeleteCHDFSBindingProduct(const DeleteCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCHDFSBindingProductResponse rsp = DeleteCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCHDFSBindingProductOutcome(rsp);
        else
            return DeleteCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return DeleteCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteCHDFSBindingProductAsync(const DeleteCHDFSBindingProductRequest& request, const DeleteCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCHDFSBindingProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteCHDFSBindingProductOutcomeCallable DlcClient::DeleteCHDFSBindingProductCallable(const DeleteCHDFSBindingProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCHDFSBindingProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteCHDFSBindingProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteDataEngineOutcome DlcClient::DeleteDataEngine(const DeleteDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataEngineResponse rsp = DeleteDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataEngineOutcome(rsp);
        else
            return DeleteDataEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDataEngineAsync(const DeleteDataEngineRequest& request, const DeleteDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteDataEngineOutcomeCallable DlcClient::DeleteDataEngineCallable(const DeleteDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataEngineOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteDataMaskStrategyOutcome DlcClient::DeleteDataMaskStrategy(const DeleteDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataMaskStrategyResponse rsp = DeleteDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataMaskStrategyOutcome(rsp);
        else
            return DeleteDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDataMaskStrategyAsync(const DeleteDataMaskStrategyRequest& request, const DeleteDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataMaskStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteDataMaskStrategyOutcomeCallable DlcClient::DeleteDataMaskStrategyCallable(const DeleteDataMaskStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataMaskStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataMaskStrategy(request);
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

DlcClient::DeleteThirdPartyAccessUserOutcome DlcClient::DeleteThirdPartyAccessUser(const DeleteThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteThirdPartyAccessUserResponse rsp = DeleteThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteThirdPartyAccessUserOutcome(rsp);
        else
            return DeleteThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DeleteThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteThirdPartyAccessUserAsync(const DeleteThirdPartyAccessUserRequest& request, const DeleteThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteThirdPartyAccessUserOutcomeCallable DlcClient::DeleteThirdPartyAccessUserCallable(const DeleteThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteThirdPartyAccessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteUserOutcome DlcClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteUserOutcomeCallable DlcClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteUsersFromWorkGroupOutcome DlcClient::DeleteUsersFromWorkGroup(const DeleteUsersFromWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsersFromWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersFromWorkGroupResponse rsp = DeleteUsersFromWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersFromWorkGroupOutcome(rsp);
        else
            return DeleteUsersFromWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersFromWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUsersFromWorkGroupAsync(const DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsersFromWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteUsersFromWorkGroupOutcomeCallable DlcClient::DeleteUsersFromWorkGroupCallable(const DeleteUsersFromWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUsersFromWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteUsersFromWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteWorkGroupOutcome DlcClient::DeleteWorkGroup(const DeleteWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkGroupResponse rsp = DeleteWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkGroupOutcome(rsp);
        else
            return DeleteWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteWorkGroupAsync(const DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteWorkGroupOutcomeCallable DlcClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeAdvancedStoreLocationOutcome DlcClient::DescribeAdvancedStoreLocation(const DescribeAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdvancedStoreLocationResponse rsp = DescribeAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdvancedStoreLocationOutcome(rsp);
        else
            return DescribeAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeAdvancedStoreLocationAsync(const DescribeAdvancedStoreLocationRequest& request, const DescribeAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdvancedStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeAdvancedStoreLocationOutcomeCallable DlcClient::DescribeAdvancedStoreLocationCallable(const DescribeAdvancedStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAdvancedStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeAdvancedStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDLCCatalogAccessOutcome DlcClient::DescribeDLCCatalogAccess(const DescribeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLCCatalogAccessResponse rsp = DescribeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLCCatalogAccessOutcome(rsp);
        else
            return DescribeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return DescribeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDLCCatalogAccessAsync(const DescribeDLCCatalogAccessRequest& request, const DescribeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDLCCatalogAccessOutcomeCallable DlcClient::DescribeDLCCatalogAccessCallable(const DescribeDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->DescribeDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDLCTableOutcome DlcClient::DescribeDLCTable(const DescribeDLCTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLCTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLCTableResponse rsp = DescribeDLCTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLCTableOutcome(rsp);
        else
            return DescribeDLCTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDLCTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDLCTableAsync(const DescribeDLCTableRequest& request, const DescribeDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDLCTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDLCTableOutcomeCallable DlcClient::DescribeDLCTableCallable(const DescribeDLCTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDLCTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeDLCTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDLCTableListOutcome DlcClient::DescribeDLCTableList(const DescribeDLCTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLCTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLCTableListResponse rsp = DescribeDLCTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLCTableListOutcome(rsp);
        else
            return DescribeDLCTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeDLCTableListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDLCTableListAsync(const DescribeDLCTableListRequest& request, const DescribeDLCTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDLCTableList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDLCTableListOutcomeCallable DlcClient::DescribeDLCTableListCallable(const DescribeDLCTableListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDLCTableListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDLCTableList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSDatabaseOutcome DlcClient::DescribeDMSDatabase(const DescribeDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSDatabaseResponse rsp = DescribeDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSDatabaseOutcome(rsp);
        else
            return DescribeDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSDatabaseAsync(const DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSDatabaseOutcomeCallable DlcClient::DescribeDMSDatabaseCallable(const DescribeDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSDatabaseListOutcome DlcClient::DescribeDMSDatabaseList(const DescribeDMSDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSDatabaseListResponse rsp = DescribeDMSDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSDatabaseListOutcome(rsp);
        else
            return DescribeDMSDatabaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSDatabaseListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSDatabaseListAsync(const DescribeDMSDatabaseListRequest& request, const DescribeDMSDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSDatabaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSDatabaseListOutcomeCallable DlcClient::DescribeDMSDatabaseListCallable(const DescribeDMSDatabaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSDatabaseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSDatabaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEngineOutcome DlcClient::DescribeDataEngine(const DescribeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineResponse rsp = DescribeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineOutcome(rsp);
        else
            return DescribeDataEngineOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineAsync(const DescribeDataEngineRequest& request, const DescribeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEngineOutcomeCallable DlcClient::DescribeDataEngineCallable(const DescribeDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEngineOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEngineImageVersionsOutcome DlcClient::DescribeDataEngineImageVersions(const DescribeDataEngineImageVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineImageVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineImageVersionsResponse rsp = DescribeDataEngineImageVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineImageVersionsOutcome(rsp);
        else
            return DescribeDataEngineImageVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineImageVersionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineImageVersionsAsync(const DescribeDataEngineImageVersionsRequest& request, const DescribeDataEngineImageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngineImageVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEngineImageVersionsOutcomeCallable DlcClient::DescribeDataEngineImageVersionsCallable(const DescribeDataEngineImageVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEngineImageVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngineImageVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcome DlcClient::DescribeDataEnginePythonSparkImages(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginePythonSparkImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginePythonSparkImagesResponse rsp = DescribeDataEnginePythonSparkImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginePythonSparkImagesOutcome(rsp);
        else
            return DescribeDataEnginePythonSparkImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginePythonSparkImagesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginePythonSparkImagesAsync(const DescribeDataEnginePythonSparkImagesRequest& request, const DescribeDataEnginePythonSparkImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEnginePythonSparkImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcomeCallable DlcClient::DescribeDataEnginePythonSparkImagesCallable(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEnginePythonSparkImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEnginePythonSparkImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEnginesScaleDetailOutcome DlcClient::DescribeDataEnginesScaleDetail(const DescribeDataEnginesScaleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginesScaleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginesScaleDetailResponse rsp = DescribeDataEnginesScaleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginesScaleDetailOutcome(rsp);
        else
            return DescribeDataEnginesScaleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginesScaleDetailOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginesScaleDetailAsync(const DescribeDataEnginesScaleDetailRequest& request, const DescribeDataEnginesScaleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEnginesScaleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEnginesScaleDetailOutcomeCallable DlcClient::DescribeDataEnginesScaleDetailCallable(const DescribeDataEnginesScaleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEnginesScaleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEnginesScaleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataMaskStrategiesOutcome DlcClient::DescribeDataMaskStrategies(const DescribeDataMaskStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataMaskStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataMaskStrategiesResponse rsp = DescribeDataMaskStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataMaskStrategiesOutcome(rsp);
        else
            return DescribeDataMaskStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataMaskStrategiesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataMaskStrategiesAsync(const DescribeDataMaskStrategiesRequest& request, const DescribeDataMaskStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataMaskStrategies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataMaskStrategiesOutcomeCallable DlcClient::DescribeDataMaskStrategiesCallable(const DescribeDataMaskStrategiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataMaskStrategiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataMaskStrategies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeEngineUsageInfoOutcome DlcClient::DescribeEngineUsageInfo(const DescribeEngineUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEngineUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEngineUsageInfoResponse rsp = DescribeEngineUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEngineUsageInfoOutcome(rsp);
        else
            return DescribeEngineUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEngineUsageInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEngineUsageInfoAsync(const DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEngineUsageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeEngineUsageInfoOutcomeCallable DlcClient::DescribeEngineUsageInfoCallable(const DescribeEngineUsageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEngineUsageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeEngineUsageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeForbiddenTableProOutcome DlcClient::DescribeForbiddenTablePro(const DescribeForbiddenTableProRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForbiddenTablePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForbiddenTableProResponse rsp = DescribeForbiddenTableProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForbiddenTableProOutcome(rsp);
        else
            return DescribeForbiddenTableProOutcome(o.GetError());
    }
    else
    {
        return DescribeForbiddenTableProOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeForbiddenTableProAsync(const DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeForbiddenTablePro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeForbiddenTableProOutcomeCallable DlcClient::DescribeForbiddenTableProCallable(const DescribeForbiddenTableProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeForbiddenTableProOutcome()>>(
        [this, request]()
        {
            return this->DescribeForbiddenTablePro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeJobOutcome DlcClient::DescribeJob(const DescribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobResponse rsp = DescribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobOutcome(rsp);
        else
            return DescribeJobOutcome(o.GetError());
    }
    else
    {
        return DescribeJobOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeJobOutcomeCallable DlcClient::DescribeJobCallable(const DescribeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeJobsOutcome DlcClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeJobsOutcomeCallable DlcClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeLakeFsDirSummaryOutcome DlcClient::DescribeLakeFsDirSummary(const DescribeLakeFsDirSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsDirSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsDirSummaryResponse rsp = DescribeLakeFsDirSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsDirSummaryOutcome(rsp);
        else
            return DescribeLakeFsDirSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsDirSummaryOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsDirSummaryAsync(const DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLakeFsDirSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeLakeFsDirSummaryOutcomeCallable DlcClient::DescribeLakeFsDirSummaryCallable(const DescribeLakeFsDirSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLakeFsDirSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeLakeFsDirSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeLakeFsInfoOutcome DlcClient::DescribeLakeFsInfo(const DescribeLakeFsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsInfoResponse rsp = DescribeLakeFsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsInfoOutcome(rsp);
        else
            return DescribeLakeFsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsInfoAsync(const DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLakeFsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeLakeFsInfoOutcomeCallable DlcClient::DescribeLakeFsInfoCallable(const DescribeLakeFsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLakeFsInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLakeFsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeOtherCHDFSBindingListOutcome DlcClient::DescribeOtherCHDFSBindingList(const DescribeOtherCHDFSBindingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtherCHDFSBindingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtherCHDFSBindingListResponse rsp = DescribeOtherCHDFSBindingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtherCHDFSBindingListOutcome(rsp);
        else
            return DescribeOtherCHDFSBindingListOutcome(o.GetError());
    }
    else
    {
        return DescribeOtherCHDFSBindingListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeOtherCHDFSBindingListAsync(const DescribeOtherCHDFSBindingListRequest& request, const DescribeOtherCHDFSBindingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOtherCHDFSBindingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeOtherCHDFSBindingListOutcomeCallable DlcClient::DescribeOtherCHDFSBindingListCallable(const DescribeOtherCHDFSBindingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOtherCHDFSBindingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeOtherCHDFSBindingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeQueryOutcome DlcClient::DescribeQuery(const DescribeQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueryResponse rsp = DescribeQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueryOutcome(rsp);
        else
            return DescribeQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeQueryOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeQueryAsync(const DescribeQueryRequest& request, const DescribeQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeQueryOutcomeCallable DlcClient::DescribeQueryCallable(const DescribeQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQueryOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuery(request);
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

DlcClient::DescribeSessionImageVersionOutcome DlcClient::DescribeSessionImageVersion(const DescribeSessionImageVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionImageVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionImageVersionResponse rsp = DescribeSessionImageVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionImageVersionOutcome(rsp);
        else
            return DescribeSessionImageVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionImageVersionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSessionImageVersionAsync(const DescribeSessionImageVersionRequest& request, const DescribeSessionImageVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSessionImageVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSessionImageVersionOutcomeCallable DlcClient::DescribeSessionImageVersionCallable(const DescribeSessionImageVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSessionImageVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSessionImageVersion(request);
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

DlcClient::DescribeSparkSessionBatchSqlLogOutcome DlcClient::DescribeSparkSessionBatchSqlLog(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSqlLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSqlLogResponse rsp = DescribeSparkSessionBatchSqlLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSqlLogOutcome(rsp);
        else
            return DescribeSparkSessionBatchSqlLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSqlLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSqlLogAsync(const DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkSessionBatchSqlLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcomeCallable DlcClient::DescribeSparkSessionBatchSqlLogCallable(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkSessionBatchSqlLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkSessionBatchSqlLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeStoreLocationOutcome DlcClient::DescribeStoreLocation(const DescribeStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStoreLocationResponse rsp = DescribeStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStoreLocationOutcome(rsp);
        else
            return DescribeStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeStoreLocationAsync(const DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeStoreLocationOutcomeCallable DlcClient::DescribeStoreLocationCallable(const DescribeStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSubUserAccessPolicyOutcome DlcClient::DescribeSubUserAccessPolicy(const DescribeSubUserAccessPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubUserAccessPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubUserAccessPolicyResponse rsp = DescribeSubUserAccessPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubUserAccessPolicyOutcome(rsp);
        else
            return DescribeSubUserAccessPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSubUserAccessPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSubUserAccessPolicyAsync(const DescribeSubUserAccessPolicyRequest& request, const DescribeSubUserAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubUserAccessPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSubUserAccessPolicyOutcomeCallable DlcClient::DescribeSubUserAccessPolicyCallable(const DescribeSubUserAccessPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubUserAccessPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubUserAccessPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTablesNameOutcome DlcClient::DescribeTablesName(const DescribeTablesNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesNameResponse rsp = DescribeTablesNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesNameOutcome(rsp);
        else
            return DescribeTablesNameOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesNameOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablesNameAsync(const DescribeTablesNameRequest& request, const DescribeTablesNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablesName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTablesNameOutcomeCallable DlcClient::DescribeTablesNameCallable(const DescribeTablesNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablesName(request);
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

DlcClient::DescribeTaskStatisticsOutcome DlcClient::DescribeTaskStatistics(const DescribeTaskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatisticsResponse rsp = DescribeTaskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatisticsOutcome(rsp);
        else
            return DescribeTaskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatisticsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskStatisticsAsync(const DescribeTaskStatisticsRequest& request, const DescribeTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTaskStatisticsOutcomeCallable DlcClient::DescribeTaskStatisticsCallable(const DescribeTaskStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatistics(request);
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

DlcClient::DescribeThirdPartyAccessUserOutcome DlcClient::DescribeThirdPartyAccessUser(const DescribeThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAccessUserResponse rsp = DescribeThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAccessUserOutcome(rsp);
        else
            return DescribeThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeThirdPartyAccessUserAsync(const DescribeThirdPartyAccessUserRequest& request, const DescribeThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeThirdPartyAccessUserOutcomeCallable DlcClient::DescribeThirdPartyAccessUserCallable(const DescribeThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeThirdPartyAccessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUpdatableDataEnginesOutcome DlcClient::DescribeUpdatableDataEngines(const DescribeUpdatableDataEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpdatableDataEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpdatableDataEnginesResponse rsp = DescribeUpdatableDataEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpdatableDataEnginesOutcome(rsp);
        else
            return DescribeUpdatableDataEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeUpdatableDataEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUpdatableDataEnginesAsync(const DescribeUpdatableDataEnginesRequest& request, const DescribeUpdatableDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpdatableDataEngines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUpdatableDataEnginesOutcomeCallable DlcClient::DescribeUpdatableDataEnginesCallable(const DescribeUpdatableDataEnginesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpdatableDataEnginesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpdatableDataEngines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserDataEngineConfigOutcome DlcClient::DescribeUserDataEngineConfig(const DescribeUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDataEngineConfigResponse rsp = DescribeUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDataEngineConfigOutcome(rsp);
        else
            return DescribeUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserDataEngineConfigAsync(const DescribeUserDataEngineConfigRequest& request, const DescribeUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserDataEngineConfigOutcomeCallable DlcClient::DescribeUserDataEngineConfigCallable(const DescribeUserDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserInfoOutcome DlcClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserInfoOutcomeCallable DlcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserRolesOutcome DlcClient::DescribeUserRoles(const DescribeUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRolesResponse rsp = DescribeUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRolesOutcome(rsp);
        else
            return DescribeUserRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRolesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserRolesAsync(const DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserRolesOutcomeCallable DlcClient::DescribeUserRolesCallable(const DescribeUserRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserTypeOutcome DlcClient::DescribeUserType(const DescribeUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserTypeResponse rsp = DescribeUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserTypeOutcome(rsp);
        else
            return DescribeUserTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserTypeAsync(const DescribeUserTypeRequest& request, const DescribeUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserTypeOutcomeCallable DlcClient::DescribeUserTypeCallable(const DescribeUserTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUsersOutcome DlcClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUsersOutcomeCallable DlcClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeWorkGroupInfoOutcome DlcClient::DescribeWorkGroupInfo(const DescribeWorkGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupInfoResponse rsp = DescribeWorkGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupInfoOutcome(rsp);
        else
            return DescribeWorkGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupInfoAsync(const DescribeWorkGroupInfoRequest& request, const DescribeWorkGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeWorkGroupInfoOutcomeCallable DlcClient::DescribeWorkGroupInfoCallable(const DescribeWorkGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeWorkGroupsOutcome DlcClient::DescribeWorkGroups(const DescribeWorkGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupsResponse rsp = DescribeWorkGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupsOutcome(rsp);
        else
            return DescribeWorkGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupsAsync(const DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeWorkGroupsOutcomeCallable DlcClient::DescribeWorkGroupsCallable(const DescribeWorkGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DetachUserPolicyOutcome DlcClient::DetachUserPolicy(const DetachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachUserPolicyResponse rsp = DetachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachUserPolicyOutcome(rsp);
        else
            return DetachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DetachUserPolicyOutcomeCallable DlcClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DetachWorkGroupPolicyOutcome DlcClient::DetachWorkGroupPolicy(const DetachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachWorkGroupPolicyResponse rsp = DetachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachWorkGroupPolicyOutcome(rsp);
        else
            return DetachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachWorkGroupPolicyAsync(const DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachWorkGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DetachWorkGroupPolicyOutcomeCallable DlcClient::DetachWorkGroupPolicyCallable(const DetachWorkGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachWorkGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachWorkGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DropDLCTableOutcome DlcClient::DropDLCTable(const DropDLCTableRequest &request)
{
    auto outcome = MakeRequest(request, "DropDLCTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDLCTableResponse rsp = DropDLCTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDLCTableOutcome(rsp);
        else
            return DropDLCTableOutcome(o.GetError());
    }
    else
    {
        return DropDLCTableOutcome(outcome.GetError());
    }
}

void DlcClient::DropDLCTableAsync(const DropDLCTableRequest& request, const DropDLCTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDLCTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDLCTableOutcomeCallable DlcClient::DropDLCTableCallable(const DropDLCTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDLCTableOutcome()>>(
        [this, request]()
        {
            return this->DropDLCTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DropDMSDatabaseOutcome DlcClient::DropDMSDatabase(const DropDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSDatabaseResponse rsp = DropDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSDatabaseOutcome(rsp);
        else
            return DropDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DropDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSDatabaseAsync(const DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDMSDatabaseOutcomeCallable DlcClient::DropDMSDatabaseCallable(const DropDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DropDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DropDMSTableOutcome DlcClient::DropDMSTable(const DropDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSTableResponse rsp = DropDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSTableOutcome(rsp);
        else
            return DropDMSTableOutcome(o.GetError());
    }
    else
    {
        return DropDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSTableAsync(const DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDMSTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDMSTableOutcomeCallable DlcClient::DropDMSTableCallable(const DropDMSTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDMSTableOutcome()>>(
        [this, request]()
        {
            return this->DropDMSTable(request);
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

DlcClient::GetOptimizerPolicyOutcome DlcClient::GetOptimizerPolicy(const GetOptimizerPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "GetOptimizerPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOptimizerPolicyResponse rsp = GetOptimizerPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOptimizerPolicyOutcome(rsp);
        else
            return GetOptimizerPolicyOutcome(o.GetError());
    }
    else
    {
        return GetOptimizerPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::GetOptimizerPolicyAsync(const GetOptimizerPolicyRequest& request, const GetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOptimizerPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GetOptimizerPolicyOutcomeCallable DlcClient::GetOptimizerPolicyCallable(const GetOptimizerPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOptimizerPolicyOutcome()>>(
        [this, request]()
        {
            return this->GetOptimizerPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::GrantDLCCatalogAccessOutcome DlcClient::GrantDLCCatalogAccess(const GrantDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GrantDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantDLCCatalogAccessResponse rsp = GrantDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantDLCCatalogAccessOutcome(rsp);
        else
            return GrantDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return GrantDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::GrantDLCCatalogAccessAsync(const GrantDLCCatalogAccessRequest& request, const GrantDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GrantDLCCatalogAccessOutcomeCallable DlcClient::GrantDLCCatalogAccessCallable(const GrantDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GrantDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->GrantDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyAdvancedStoreLocationOutcome DlcClient::ModifyAdvancedStoreLocation(const ModifyAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAdvancedStoreLocationResponse rsp = ModifyAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAdvancedStoreLocationOutcome(rsp);
        else
            return ModifyAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return ModifyAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyAdvancedStoreLocationAsync(const ModifyAdvancedStoreLocationRequest& request, const ModifyAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAdvancedStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyAdvancedStoreLocationOutcomeCallable DlcClient::ModifyAdvancedStoreLocationCallable(const ModifyAdvancedStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAdvancedStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->ModifyAdvancedStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyDataEngineDescriptionOutcome DlcClient::ModifyDataEngineDescription(const ModifyDataEngineDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataEngineDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataEngineDescriptionResponse rsp = ModifyDataEngineDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataEngineDescriptionOutcome(rsp);
        else
            return ModifyDataEngineDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyDataEngineDescriptionOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyDataEngineDescriptionAsync(const ModifyDataEngineDescriptionRequest& request, const ModifyDataEngineDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataEngineDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyDataEngineDescriptionOutcomeCallable DlcClient::ModifyDataEngineDescriptionCallable(const ModifyDataEngineDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataEngineDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataEngineDescription(request);
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

DlcClient::ModifySparkAppBatchOutcome DlcClient::ModifySparkAppBatch(const ModifySparkAppBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkAppBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppBatchResponse rsp = ModifySparkAppBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppBatchOutcome(rsp);
        else
            return ModifySparkAppBatchOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppBatchOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppBatchAsync(const ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySparkAppBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifySparkAppBatchOutcomeCallable DlcClient::ModifySparkAppBatchCallable(const ModifySparkAppBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySparkAppBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifySparkAppBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyUserOutcome DlcClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyUserOutcomeCallable DlcClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyUserTypeOutcome DlcClient::ModifyUserType(const ModifyUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserTypeResponse rsp = ModifyUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserTypeOutcome(rsp);
        else
            return ModifyUserTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserTypeAsync(const ModifyUserTypeRequest& request, const ModifyUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyUserTypeOutcomeCallable DlcClient::ModifyUserTypeCallable(const ModifyUserTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyWorkGroupOutcome DlcClient::ModifyWorkGroup(const ModifyWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkGroupResponse rsp = ModifyWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkGroupOutcome(rsp);
        else
            return ModifyWorkGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyWorkGroupAsync(const ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyWorkGroupOutcomeCallable DlcClient::ModifyWorkGroupCallable(const ModifyWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::QueryResultOutcome DlcClient::QueryResult(const QueryResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResultResponse rsp = QueryResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResultOutcome(rsp);
        else
            return QueryResultOutcome(o.GetError());
    }
    else
    {
        return QueryResultOutcome(outcome.GetError());
    }
}

void DlcClient::QueryResultAsync(const QueryResultRequest& request, const QueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::QueryResultOutcomeCallable DlcClient::QueryResultCallable(const QueryResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryResultOutcome()>>(
        [this, request]()
        {
            return this->QueryResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::QueryTaskCostDetailOutcome DlcClient::QueryTaskCostDetail(const QueryTaskCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTaskCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTaskCostDetailResponse rsp = QueryTaskCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTaskCostDetailOutcome(rsp);
        else
            return QueryTaskCostDetailOutcome(o.GetError());
    }
    else
    {
        return QueryTaskCostDetailOutcome(outcome.GetError());
    }
}

void DlcClient::QueryTaskCostDetailAsync(const QueryTaskCostDetailRequest& request, const QueryTaskCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTaskCostDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::QueryTaskCostDetailOutcomeCallable DlcClient::QueryTaskCostDetailCallable(const QueryTaskCostDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTaskCostDetailOutcome()>>(
        [this, request]()
        {
            return this->QueryTaskCostDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RegisterThirdPartyAccessUserOutcome DlcClient::RegisterThirdPartyAccessUser(const RegisterThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterThirdPartyAccessUserResponse rsp = RegisterThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterThirdPartyAccessUserOutcome(rsp);
        else
            return RegisterThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return RegisterThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::RegisterThirdPartyAccessUserAsync(const RegisterThirdPartyAccessUserRequest& request, const RegisterThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RegisterThirdPartyAccessUserOutcomeCallable DlcClient::RegisterThirdPartyAccessUserCallable(const RegisterThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->RegisterThirdPartyAccessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RenewDataEngineOutcome DlcClient::RenewDataEngine(const RenewDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDataEngineResponse rsp = RenewDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDataEngineOutcome(rsp);
        else
            return RenewDataEngineOutcome(o.GetError());
    }
    else
    {
        return RenewDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RenewDataEngineAsync(const RenewDataEngineRequest& request, const RenewDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RenewDataEngineOutcomeCallable DlcClient::RenewDataEngineCallable(const RenewDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDataEngineOutcome()>>(
        [this, request]()
        {
            return this->RenewDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RestartDataEngineOutcome DlcClient::RestartDataEngine(const RestartDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDataEngineResponse rsp = RestartDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDataEngineOutcome(rsp);
        else
            return RestartDataEngineOutcome(o.GetError());
    }
    else
    {
        return RestartDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RestartDataEngineAsync(const RestartDataEngineRequest& request, const RestartDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RestartDataEngineOutcomeCallable DlcClient::RestartDataEngineCallable(const RestartDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDataEngineOutcome()>>(
        [this, request]()
        {
            return this->RestartDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RevokeDLCCatalogAccessOutcome DlcClient::RevokeDLCCatalogAccess(const RevokeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeDLCCatalogAccessResponse rsp = RevokeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeDLCCatalogAccessOutcome(rsp);
        else
            return RevokeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return RevokeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::RevokeDLCCatalogAccessAsync(const RevokeDLCCatalogAccessRequest& request, const RevokeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RevokeDLCCatalogAccessOutcomeCallable DlcClient::RevokeDLCCatalogAccessCallable(const RevokeDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->RevokeDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RollbackDataEngineImageOutcome DlcClient::RollbackDataEngineImage(const RollbackDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackDataEngineImageResponse rsp = RollbackDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackDataEngineImageOutcome(rsp);
        else
            return RollbackDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return RollbackDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::RollbackDataEngineImageAsync(const RollbackDataEngineImageRequest& request, const RollbackDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RollbackDataEngineImageOutcomeCallable DlcClient::RollbackDataEngineImageCallable(const RollbackDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->RollbackDataEngineImage(request);
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

DlcClient::SwitchDataEngineOutcome DlcClient::SwitchDataEngine(const SwitchDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineResponse rsp = SwitchDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineOutcome(rsp);
        else
            return SwitchDataEngineOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineAsync(const SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SwitchDataEngineOutcomeCallable DlcClient::SwitchDataEngineCallable(const SwitchDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDataEngineOutcome()>>(
        [this, request]()
        {
            return this->SwitchDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::SwitchDataEngineImageOutcome DlcClient::SwitchDataEngineImage(const SwitchDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineImageResponse rsp = SwitchDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineImageOutcome(rsp);
        else
            return SwitchDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineImageAsync(const SwitchDataEngineImageRequest& request, const SwitchDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SwitchDataEngineImageOutcomeCallable DlcClient::SwitchDataEngineImageCallable(const SwitchDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->SwitchDataEngineImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UnbindWorkGroupsFromUserOutcome DlcClient::UnbindWorkGroupsFromUser(const UnbindWorkGroupsFromUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindWorkGroupsFromUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindWorkGroupsFromUserResponse rsp = UnbindWorkGroupsFromUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindWorkGroupsFromUserOutcome(rsp);
        else
            return UnbindWorkGroupsFromUserOutcome(o.GetError());
    }
    else
    {
        return UnbindWorkGroupsFromUserOutcome(outcome.GetError());
    }
}

void DlcClient::UnbindWorkGroupsFromUserAsync(const UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindWorkGroupsFromUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UnbindWorkGroupsFromUserOutcomeCallable DlcClient::UnbindWorkGroupsFromUserCallable(const UnbindWorkGroupsFromUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindWorkGroupsFromUserOutcome()>>(
        [this, request]()
        {
            return this->UnbindWorkGroupsFromUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateDataEngineOutcome DlcClient::UpdateDataEngine(const UpdateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineResponse rsp = UpdateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineOutcome(rsp);
        else
            return UpdateDataEngineOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineAsync(const UpdateDataEngineRequest& request, const UpdateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateDataEngineOutcomeCallable DlcClient::UpdateDataEngineCallable(const UpdateDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataEngineOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateDataEngineConfigOutcome DlcClient::UpdateDataEngineConfig(const UpdateDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineConfigResponse rsp = UpdateDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineConfigOutcome(rsp);
        else
            return UpdateDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineConfigAsync(const UpdateDataEngineConfigRequest& request, const UpdateDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateDataEngineConfigOutcomeCallable DlcClient::UpdateDataEngineConfigCallable(const UpdateDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateDataMaskStrategyOutcome DlcClient::UpdateDataMaskStrategy(const UpdateDataMaskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataMaskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataMaskStrategyResponse rsp = UpdateDataMaskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataMaskStrategyOutcome(rsp);
        else
            return UpdateDataMaskStrategyOutcome(o.GetError());
    }
    else
    {
        return UpdateDataMaskStrategyOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataMaskStrategyAsync(const UpdateDataMaskStrategyRequest& request, const UpdateDataMaskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataMaskStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateDataMaskStrategyOutcomeCallable DlcClient::UpdateDataMaskStrategyCallable(const UpdateDataMaskStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataMaskStrategyOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataMaskStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateRowFilterOutcome DlcClient::UpdateRowFilter(const UpdateRowFilterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRowFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRowFilterResponse rsp = UpdateRowFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRowFilterOutcome(rsp);
        else
            return UpdateRowFilterOutcome(o.GetError());
    }
    else
    {
        return UpdateRowFilterOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateRowFilterAsync(const UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRowFilter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateRowFilterOutcomeCallable DlcClient::UpdateRowFilterCallable(const UpdateRowFilterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRowFilterOutcome()>>(
        [this, request]()
        {
            return this->UpdateRowFilter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateUserDataEngineConfigOutcome DlcClient::UpdateUserDataEngineConfig(const UpdateUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserDataEngineConfigResponse rsp = UpdateUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserDataEngineConfigOutcome(rsp);
        else
            return UpdateUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateUserDataEngineConfigAsync(const UpdateUserDataEngineConfigRequest& request, const UpdateUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateUserDataEngineConfigOutcomeCallable DlcClient::UpdateUserDataEngineConfigCallable(const UpdateUserDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpgradeDataEngineImageOutcome DlcClient::UpgradeDataEngineImage(const UpgradeDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDataEngineImageResponse rsp = UpgradeDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDataEngineImageOutcome(rsp);
        else
            return UpgradeDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return UpgradeDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::UpgradeDataEngineImageAsync(const UpgradeDataEngineImageRequest& request, const UpgradeDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpgradeDataEngineImageOutcomeCallable DlcClient::UpgradeDataEngineImageCallable(const UpgradeDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDataEngineImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

