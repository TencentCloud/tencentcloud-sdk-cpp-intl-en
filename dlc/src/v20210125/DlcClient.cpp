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
    using Req = const AddUsersToWorkGroupRequest&;
    using Resp = AddUsersToWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddUsersToWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AddUsersToWorkGroupOutcomeCallable DlcClient::AddUsersToWorkGroupCallable(const AddUsersToWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUsersToWorkGroupOutcome>>();
    AddUsersToWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const AddUsersToWorkGroupRequest&,
        AddUsersToWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AlterDMSDatabaseRequest&;
    using Resp = AlterDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "AlterDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AlterDMSDatabaseOutcomeCallable DlcClient::AlterDMSDatabaseCallable(const AlterDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<AlterDMSDatabaseOutcome>>();
    AlterDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const AlterDMSDatabaseRequest&,
        AlterDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachDataMaskPolicyRequest&;
    using Resp = AttachDataMaskPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachDataMaskPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachDataMaskPolicyOutcomeCallable DlcClient::AttachDataMaskPolicyCallable(const AttachDataMaskPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDataMaskPolicyOutcome>>();
    AttachDataMaskPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachDataMaskPolicyRequest&,
        AttachDataMaskPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachUserPolicyRequest&;
    using Resp = AttachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachUserPolicyOutcomeCallable DlcClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachUserPolicyOutcome>>();
    AttachUserPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachUserPolicyRequest&,
        AttachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachWorkGroupPolicyRequest&;
    using Resp = AttachWorkGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachWorkGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::AttachWorkGroupPolicyOutcomeCallable DlcClient::AttachWorkGroupPolicyCallable(const AttachWorkGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachWorkGroupPolicyOutcome>>();
    AttachWorkGroupPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const AttachWorkGroupPolicyRequest&,
        AttachWorkGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindWorkGroupsToUserRequest&;
    using Resp = BindWorkGroupsToUserResponse;

    DoRequestAsync<Req, Resp>(
        "BindWorkGroupsToUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::BindWorkGroupsToUserOutcomeCallable DlcClient::BindWorkGroupsToUserCallable(const BindWorkGroupsToUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindWorkGroupsToUserOutcome>>();
    BindWorkGroupsToUserAsync(
    request,
    [prom](
        const DlcClient*,
        const BindWorkGroupsToUserRequest&,
        BindWorkGroupsToUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelSparkSessionBatchSQLRequest&;
    using Resp = CancelSparkSessionBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "CancelSparkSessionBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelSparkSessionBatchSQLOutcomeCallable DlcClient::CancelSparkSessionBatchSQLCallable(const CancelSparkSessionBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelSparkSessionBatchSQLOutcome>>();
    CancelSparkSessionBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelSparkSessionBatchSQLRequest&,
        CancelSparkSessionBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelTaskRequest&;
    using Resp = CancelTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CancelTaskOutcomeCallable DlcClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTaskOutcome>>();
    CancelTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CancelTaskRequest&,
        CancelTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckDataEngineConfigPairsValidityRequest&;
    using Resp = CheckDataEngineConfigPairsValidityResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineConfigPairsValidity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineConfigPairsValidityOutcomeCallable DlcClient::CheckDataEngineConfigPairsValidityCallable(const CheckDataEngineConfigPairsValidityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineConfigPairsValidityOutcome>>();
    CheckDataEngineConfigPairsValidityAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineConfigPairsValidityRequest&,
        CheckDataEngineConfigPairsValidityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckDataEngineImageCanBeRollbackRequest&;
    using Resp = CheckDataEngineImageCanBeRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineImageCanBeRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcomeCallable DlcClient::CheckDataEngineImageCanBeRollbackCallable(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineImageCanBeRollbackOutcome>>();
    CheckDataEngineImageCanBeRollbackAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineImageCanBeRollbackRequest&,
        CheckDataEngineImageCanBeRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckDataEngineImageCanBeUpgradeRequest&;
    using Resp = CheckDataEngineImageCanBeUpgradeResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDataEngineImageCanBeUpgrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcomeCallable DlcClient::CheckDataEngineImageCanBeUpgradeCallable(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDataEngineImageCanBeUpgradeOutcome>>();
    CheckDataEngineImageCanBeUpgradeAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckDataEngineImageCanBeUpgradeRequest&,
        CheckDataEngineImageCanBeUpgradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckGrantedPermissionRequest&;
    using Resp = CheckGrantedPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "CheckGrantedPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CheckGrantedPermissionOutcomeCallable DlcClient::CheckGrantedPermissionCallable(const CheckGrantedPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckGrantedPermissionOutcome>>();
    CheckGrantedPermissionAsync(
    request,
    [prom](
        const DlcClient*,
        const CheckGrantedPermissionRequest&,
        CheckGrantedPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CopyDLCTableRequest&;
    using Resp = CopyDLCTableResponse;

    DoRequestAsync<Req, Resp>(
        "CopyDLCTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CopyDLCTableOutcomeCallable DlcClient::CopyDLCTableCallable(const CopyDLCTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyDLCTableOutcome>>();
    CopyDLCTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CopyDLCTableRequest&,
        CopyDLCTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCHDFSBindingProductRequest&;
    using Resp = CreateCHDFSBindingProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCHDFSBindingProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateCHDFSBindingProductOutcomeCallable DlcClient::CreateCHDFSBindingProductCallable(const CreateCHDFSBindingProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCHDFSBindingProductOutcome>>();
    CreateCHDFSBindingProductAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateCHDFSBindingProductRequest&,
        CreateCHDFSBindingProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDLCTableRequest&;
    using Resp = CreateDLCTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDLCTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDLCTableOutcomeCallable DlcClient::CreateDLCTableCallable(const CreateDLCTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDLCTableOutcome>>();
    CreateDLCTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDLCTableRequest&,
        CreateDLCTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDMSDatabaseRequest&;
    using Resp = CreateDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDMSDatabaseOutcomeCallable DlcClient::CreateDMSDatabaseCallable(const CreateDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDMSDatabaseOutcome>>();
    CreateDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDMSDatabaseRequest&,
        CreateDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDataEngineRequest&;
    using Resp = CreateDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDataEngineOutcomeCallable DlcClient::CreateDataEngineCallable(const CreateDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataEngineOutcome>>();
    CreateDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDataEngineRequest&,
        CreateDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDataMaskStrategyRequest&;
    using Resp = CreateDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateDataMaskStrategyOutcomeCallable DlcClient::CreateDataMaskStrategyCallable(const CreateDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataMaskStrategyOutcome>>();
    CreateDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateDataMaskStrategyRequest&,
        CreateDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateInternalTableRequest&;
    using Resp = CreateInternalTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInternalTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateInternalTableOutcomeCallable DlcClient::CreateInternalTableCallable(const CreateInternalTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInternalTableOutcome>>();
    CreateInternalTableAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateInternalTableRequest&,
        CreateInternalTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateResultDownloadRequest&;
    using Resp = CreateResultDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResultDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateResultDownloadOutcomeCallable DlcClient::CreateResultDownloadCallable(const CreateResultDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResultDownloadOutcome>>();
    CreateResultDownloadAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateResultDownloadRequest&,
        CreateResultDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSparkAppRequest&;
    using Resp = CreateSparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkAppOutcomeCallable DlcClient::CreateSparkAppCallable(const CreateSparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkAppOutcome>>();
    CreateSparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkAppRequest&,
        CreateSparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSparkAppTaskRequest&;
    using Resp = CreateSparkAppTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkAppTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkAppTaskOutcomeCallable DlcClient::CreateSparkAppTaskCallable(const CreateSparkAppTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkAppTaskOutcome>>();
    CreateSparkAppTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkAppTaskRequest&,
        CreateSparkAppTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSparkSessionBatchSQLRequest&;
    using Resp = CreateSparkSessionBatchSQLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSparkSessionBatchSQL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateSparkSessionBatchSQLOutcomeCallable DlcClient::CreateSparkSessionBatchSQLCallable(const CreateSparkSessionBatchSQLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSparkSessionBatchSQLOutcome>>();
    CreateSparkSessionBatchSQLAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateSparkSessionBatchSQLRequest&,
        CreateSparkSessionBatchSQLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStoreLocationRequest&;
    using Resp = CreateStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateStoreLocationOutcomeCallable DlcClient::CreateStoreLocationCallable(const CreateStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStoreLocationOutcome>>();
    CreateStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateStoreLocationRequest&,
        CreateStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTaskOutcomeCallable DlcClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTasksRequest&;
    using Resp = CreateTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateTasksOutcomeCallable DlcClient::CreateTasksCallable(const CreateTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTasksOutcome>>();
    CreateTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateTasksRequest&,
        CreateTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateUserOutcomeCallable DlcClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWorkGroupRequest&;
    using Resp = CreateWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::CreateWorkGroupOutcomeCallable DlcClient::CreateWorkGroupCallable(const CreateWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkGroupOutcome>>();
    CreateWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const CreateWorkGroupRequest&,
        CreateWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCHDFSBindingProductRequest&;
    using Resp = DeleteCHDFSBindingProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCHDFSBindingProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteCHDFSBindingProductOutcomeCallable DlcClient::DeleteCHDFSBindingProductCallable(const DeleteCHDFSBindingProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCHDFSBindingProductOutcome>>();
    DeleteCHDFSBindingProductAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteCHDFSBindingProductRequest&,
        DeleteCHDFSBindingProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDataEngineRequest&;
    using Resp = DeleteDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteDataEngineOutcomeCallable DlcClient::DeleteDataEngineCallable(const DeleteDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataEngineOutcome>>();
    DeleteDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteDataEngineRequest&,
        DeleteDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDataMaskStrategyRequest&;
    using Resp = DeleteDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteDataMaskStrategyOutcomeCallable DlcClient::DeleteDataMaskStrategyCallable(const DeleteDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataMaskStrategyOutcome>>();
    DeleteDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteDataMaskStrategyRequest&,
        DeleteDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSparkAppRequest&;
    using Resp = DeleteSparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteSparkAppOutcomeCallable DlcClient::DeleteSparkAppCallable(const DeleteSparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSparkAppOutcome>>();
    DeleteSparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteSparkAppRequest&,
        DeleteSparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteThirdPartyAccessUserRequest&;
    using Resp = DeleteThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteThirdPartyAccessUserOutcomeCallable DlcClient::DeleteThirdPartyAccessUserCallable(const DeleteThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteThirdPartyAccessUserOutcome>>();
    DeleteThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteThirdPartyAccessUserRequest&,
        DeleteThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteUserOutcomeCallable DlcClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUsersFromWorkGroupRequest&;
    using Resp = DeleteUsersFromWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsersFromWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteUsersFromWorkGroupOutcomeCallable DlcClient::DeleteUsersFromWorkGroupCallable(const DeleteUsersFromWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersFromWorkGroupOutcome>>();
    DeleteUsersFromWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteUsersFromWorkGroupRequest&,
        DeleteUsersFromWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWorkGroupRequest&;
    using Resp = DeleteWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DeleteWorkGroupOutcomeCallable DlcClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkGroupOutcome>>();
    DeleteWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const DeleteWorkGroupRequest&,
        DeleteWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAdvancedStoreLocationRequest&;
    using Resp = DescribeAdvancedStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdvancedStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeAdvancedStoreLocationOutcomeCallable DlcClient::DescribeAdvancedStoreLocationCallable(const DescribeAdvancedStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdvancedStoreLocationOutcome>>();
    DescribeAdvancedStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeAdvancedStoreLocationRequest&,
        DescribeAdvancedStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDLCCatalogAccessRequest&;
    using Resp = DescribeDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDLCCatalogAccessOutcomeCallable DlcClient::DescribeDLCCatalogAccessCallable(const DescribeDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLCCatalogAccessOutcome>>();
    DescribeDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDLCCatalogAccessRequest&,
        DescribeDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDLCTableRequest&;
    using Resp = DescribeDLCTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLCTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDLCTableOutcomeCallable DlcClient::DescribeDLCTableCallable(const DescribeDLCTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLCTableOutcome>>();
    DescribeDLCTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDLCTableRequest&,
        DescribeDLCTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDLCTableListRequest&;
    using Resp = DescribeDLCTableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDLCTableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDLCTableListOutcomeCallable DlcClient::DescribeDLCTableListCallable(const DescribeDLCTableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDLCTableListOutcome>>();
    DescribeDLCTableListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDLCTableListRequest&,
        DescribeDLCTableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDMSDatabaseRequest&;
    using Resp = DescribeDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSDatabaseOutcomeCallable DlcClient::DescribeDMSDatabaseCallable(const DescribeDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSDatabaseOutcome>>();
    DescribeDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSDatabaseRequest&,
        DescribeDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDMSDatabaseListRequest&;
    using Resp = DescribeDMSDatabaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDMSDatabaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDMSDatabaseListOutcomeCallable DlcClient::DescribeDMSDatabaseListCallable(const DescribeDMSDatabaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDMSDatabaseListOutcome>>();
    DescribeDMSDatabaseListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDMSDatabaseListRequest&,
        DescribeDMSDatabaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataEngineRequest&;
    using Resp = DescribeDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineOutcomeCallable DlcClient::DescribeDataEngineCallable(const DescribeDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineOutcome>>();
    DescribeDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineRequest&,
        DescribeDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataEngineImageVersionsRequest&;
    using Resp = DescribeDataEngineImageVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEngineImageVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEngineImageVersionsOutcomeCallable DlcClient::DescribeDataEngineImageVersionsCallable(const DescribeDataEngineImageVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEngineImageVersionsOutcome>>();
    DescribeDataEngineImageVersionsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEngineImageVersionsRequest&,
        DescribeDataEngineImageVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataEnginePythonSparkImagesRequest&;
    using Resp = DescribeDataEnginePythonSparkImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEnginePythonSparkImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcomeCallable DlcClient::DescribeDataEnginePythonSparkImagesCallable(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEnginePythonSparkImagesOutcome>>();
    DescribeDataEnginePythonSparkImagesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEnginePythonSparkImagesRequest&,
        DescribeDataEnginePythonSparkImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataEnginesScaleDetailRequest&;
    using Resp = DescribeDataEnginesScaleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataEnginesScaleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataEnginesScaleDetailOutcomeCallable DlcClient::DescribeDataEnginesScaleDetailCallable(const DescribeDataEnginesScaleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataEnginesScaleDetailOutcome>>();
    DescribeDataEnginesScaleDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataEnginesScaleDetailRequest&,
        DescribeDataEnginesScaleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataMaskStrategiesRequest&;
    using Resp = DescribeDataMaskStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataMaskStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeDataMaskStrategiesOutcomeCallable DlcClient::DescribeDataMaskStrategiesCallable(const DescribeDataMaskStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataMaskStrategiesOutcome>>();
    DescribeDataMaskStrategiesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeDataMaskStrategiesRequest&,
        DescribeDataMaskStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEngineUsageInfoRequest&;
    using Resp = DescribeEngineUsageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEngineUsageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeEngineUsageInfoOutcomeCallable DlcClient::DescribeEngineUsageInfoCallable(const DescribeEngineUsageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEngineUsageInfoOutcome>>();
    DescribeEngineUsageInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeEngineUsageInfoRequest&,
        DescribeEngineUsageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeForbiddenTableProRequest&;
    using Resp = DescribeForbiddenTableProResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForbiddenTablePro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeForbiddenTableProOutcomeCallable DlcClient::DescribeForbiddenTableProCallable(const DescribeForbiddenTableProRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForbiddenTableProOutcome>>();
    DescribeForbiddenTableProAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeForbiddenTableProRequest&,
        DescribeForbiddenTableProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeJobRequest&;
    using Resp = DescribeJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeJobOutcomeCallable DlcClient::DescribeJobCallable(const DescribeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobOutcome>>();
    DescribeJobAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeJobRequest&,
        DescribeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeJobsRequest&;
    using Resp = DescribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeJobsOutcomeCallable DlcClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLakeFsDirSummaryRequest&;
    using Resp = DescribeLakeFsDirSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLakeFsDirSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeLakeFsDirSummaryOutcomeCallable DlcClient::DescribeLakeFsDirSummaryCallable(const DescribeLakeFsDirSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLakeFsDirSummaryOutcome>>();
    DescribeLakeFsDirSummaryAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeLakeFsDirSummaryRequest&,
        DescribeLakeFsDirSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLakeFsInfoRequest&;
    using Resp = DescribeLakeFsInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLakeFsInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeLakeFsInfoOutcomeCallable DlcClient::DescribeLakeFsInfoCallable(const DescribeLakeFsInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLakeFsInfoOutcome>>();
    DescribeLakeFsInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeLakeFsInfoRequest&,
        DescribeLakeFsInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOtherCHDFSBindingListRequest&;
    using Resp = DescribeOtherCHDFSBindingListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOtherCHDFSBindingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeOtherCHDFSBindingListOutcomeCallable DlcClient::DescribeOtherCHDFSBindingListCallable(const DescribeOtherCHDFSBindingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOtherCHDFSBindingListOutcome>>();
    DescribeOtherCHDFSBindingListAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeOtherCHDFSBindingListRequest&,
        DescribeOtherCHDFSBindingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeQueryRequest&;
    using Resp = DescribeQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeQueryOutcomeCallable DlcClient::DescribeQueryCallable(const DescribeQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQueryOutcome>>();
    DescribeQueryAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeQueryRequest&,
        DescribeQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeResultDownloadRequest&;
    using Resp = DescribeResultDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResultDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeResultDownloadOutcomeCallable DlcClient::DescribeResultDownloadCallable(const DescribeResultDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResultDownloadOutcome>>();
    DescribeResultDownloadAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeResultDownloadRequest&,
        DescribeResultDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSessionImageVersionRequest&;
    using Resp = DescribeSessionImageVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionImageVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSessionImageVersionOutcomeCallable DlcClient::DescribeSessionImageVersionCallable(const DescribeSessionImageVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionImageVersionOutcome>>();
    DescribeSessionImageVersionAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSessionImageVersionRequest&,
        DescribeSessionImageVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSparkAppJobRequest&;
    using Resp = DescribeSparkAppJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppJobOutcomeCallable DlcClient::DescribeSparkAppJobCallable(const DescribeSparkAppJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppJobOutcome>>();
    DescribeSparkAppJobAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppJobRequest&,
        DescribeSparkAppJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSparkAppJobsRequest&;
    using Resp = DescribeSparkAppJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppJobsOutcomeCallable DlcClient::DescribeSparkAppJobsCallable(const DescribeSparkAppJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppJobsOutcome>>();
    DescribeSparkAppJobsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppJobsRequest&,
        DescribeSparkAppJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSparkAppTasksRequest&;
    using Resp = DescribeSparkAppTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkAppTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkAppTasksOutcomeCallable DlcClient::DescribeSparkAppTasksCallable(const DescribeSparkAppTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkAppTasksOutcome>>();
    DescribeSparkAppTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkAppTasksRequest&,
        DescribeSparkAppTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSparkSessionBatchSqlLogRequest&;
    using Resp = DescribeSparkSessionBatchSqlLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkSessionBatchSqlLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcomeCallable DlcClient::DescribeSparkSessionBatchSqlLogCallable(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkSessionBatchSqlLogOutcome>>();
    DescribeSparkSessionBatchSqlLogAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSparkSessionBatchSqlLogRequest&,
        DescribeSparkSessionBatchSqlLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStoreLocationRequest&;
    using Resp = DescribeStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeStoreLocationOutcomeCallable DlcClient::DescribeStoreLocationCallable(const DescribeStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStoreLocationOutcome>>();
    DescribeStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeStoreLocationRequest&,
        DescribeStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSubUserAccessPolicyRequest&;
    using Resp = DescribeSubUserAccessPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubUserAccessPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeSubUserAccessPolicyOutcomeCallable DlcClient::DescribeSubUserAccessPolicyCallable(const DescribeSubUserAccessPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubUserAccessPolicyOutcome>>();
    DescribeSubUserAccessPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeSubUserAccessPolicyRequest&,
        DescribeSubUserAccessPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTablesNameRequest&;
    using Resp = DescribeTablesNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTablesName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTablesNameOutcomeCallable DlcClient::DescribeTablesNameCallable(const DescribeTablesNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTablesNameOutcome>>();
    DescribeTablesNameAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTablesNameRequest&,
        DescribeTablesNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskResultOutcomeCallable DlcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskStatisticsRequest&;
    using Resp = DescribeTaskStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTaskStatisticsOutcomeCallable DlcClient::DescribeTaskStatisticsCallable(const DescribeTaskStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatisticsOutcome>>();
    DescribeTaskStatisticsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTaskStatisticsRequest&,
        DescribeTaskStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeTasksOutcomeCallable DlcClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeThirdPartyAccessUserRequest&;
    using Resp = DescribeThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeThirdPartyAccessUserOutcomeCallable DlcClient::DescribeThirdPartyAccessUserCallable(const DescribeThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeThirdPartyAccessUserOutcome>>();
    DescribeThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeThirdPartyAccessUserRequest&,
        DescribeThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUpdatableDataEnginesRequest&;
    using Resp = DescribeUpdatableDataEnginesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpdatableDataEngines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUpdatableDataEnginesOutcomeCallable DlcClient::DescribeUpdatableDataEnginesCallable(const DescribeUpdatableDataEnginesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpdatableDataEnginesOutcome>>();
    DescribeUpdatableDataEnginesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUpdatableDataEnginesRequest&,
        DescribeUpdatableDataEnginesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserDataEngineConfigRequest&;
    using Resp = DescribeUserDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserDataEngineConfigOutcomeCallable DlcClient::DescribeUserDataEngineConfigCallable(const DescribeUserDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDataEngineConfigOutcome>>();
    DescribeUserDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserDataEngineConfigRequest&,
        DescribeUserDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserInfoRequest&;
    using Resp = DescribeUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserInfoOutcomeCallable DlcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInfoOutcome>>();
    DescribeUserInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserInfoRequest&,
        DescribeUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserRolesRequest&;
    using Resp = DescribeUserRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserRolesOutcomeCallable DlcClient::DescribeUserRolesCallable(const DescribeUserRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserRolesOutcome>>();
    DescribeUserRolesAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserRolesRequest&,
        DescribeUserRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserTypeRequest&;
    using Resp = DescribeUserTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUserTypeOutcomeCallable DlcClient::DescribeUserTypeCallable(const DescribeUserTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserTypeOutcome>>();
    DescribeUserTypeAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUserTypeRequest&,
        DescribeUserTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUsersRequest&;
    using Resp = DescribeUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeUsersOutcomeCallable DlcClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWorkGroupInfoRequest&;
    using Resp = DescribeWorkGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeWorkGroupInfoOutcomeCallable DlcClient::DescribeWorkGroupInfoCallable(const DescribeWorkGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkGroupInfoOutcome>>();
    DescribeWorkGroupInfoAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeWorkGroupInfoRequest&,
        DescribeWorkGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWorkGroupsRequest&;
    using Resp = DescribeWorkGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DescribeWorkGroupsOutcomeCallable DlcClient::DescribeWorkGroupsCallable(const DescribeWorkGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkGroupsOutcome>>();
    DescribeWorkGroupsAsync(
    request,
    [prom](
        const DlcClient*,
        const DescribeWorkGroupsRequest&,
        DescribeWorkGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachUserPolicyRequest&;
    using Resp = DetachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DetachUserPolicyOutcomeCallable DlcClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachUserPolicyOutcome>>();
    DetachUserPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DetachUserPolicyRequest&,
        DetachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachWorkGroupPolicyRequest&;
    using Resp = DetachWorkGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachWorkGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DetachWorkGroupPolicyOutcomeCallable DlcClient::DetachWorkGroupPolicyCallable(const DetachWorkGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachWorkGroupPolicyOutcome>>();
    DetachWorkGroupPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const DetachWorkGroupPolicyRequest&,
        DetachWorkGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DropDLCTableRequest&;
    using Resp = DropDLCTableResponse;

    DoRequestAsync<Req, Resp>(
        "DropDLCTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDLCTableOutcomeCallable DlcClient::DropDLCTableCallable(const DropDLCTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDLCTableOutcome>>();
    DropDLCTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDLCTableRequest&,
        DropDLCTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DropDMSDatabaseRequest&;
    using Resp = DropDMSDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "DropDMSDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDMSDatabaseOutcomeCallable DlcClient::DropDMSDatabaseCallable(const DropDMSDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDMSDatabaseOutcome>>();
    DropDMSDatabaseAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDMSDatabaseRequest&,
        DropDMSDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DropDMSTableRequest&;
    using Resp = DropDMSTableResponse;

    DoRequestAsync<Req, Resp>(
        "DropDMSTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::DropDMSTableOutcomeCallable DlcClient::DropDMSTableCallable(const DropDMSTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropDMSTableOutcome>>();
    DropDMSTableAsync(
    request,
    [prom](
        const DlcClient*,
        const DropDMSTableRequest&,
        DropDMSTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GenerateCreateMangedTableSqlRequest&;
    using Resp = GenerateCreateMangedTableSqlResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateCreateMangedTableSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GenerateCreateMangedTableSqlOutcomeCallable DlcClient::GenerateCreateMangedTableSqlCallable(const GenerateCreateMangedTableSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateCreateMangedTableSqlOutcome>>();
    GenerateCreateMangedTableSqlAsync(
    request,
    [prom](
        const DlcClient*,
        const GenerateCreateMangedTableSqlRequest&,
        GenerateCreateMangedTableSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetOptimizerPolicyRequest&;
    using Resp = GetOptimizerPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "GetOptimizerPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GetOptimizerPolicyOutcomeCallable DlcClient::GetOptimizerPolicyCallable(const GetOptimizerPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOptimizerPolicyOutcome>>();
    GetOptimizerPolicyAsync(
    request,
    [prom](
        const DlcClient*,
        const GetOptimizerPolicyRequest&,
        GetOptimizerPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GrantDLCCatalogAccessRequest&;
    using Resp = GrantDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "GrantDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::GrantDLCCatalogAccessOutcomeCallable DlcClient::GrantDLCCatalogAccessCallable(const GrantDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantDLCCatalogAccessOutcome>>();
    GrantDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const GrantDLCCatalogAccessRequest&,
        GrantDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAdvancedStoreLocationRequest&;
    using Resp = ModifyAdvancedStoreLocationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAdvancedStoreLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyAdvancedStoreLocationOutcomeCallable DlcClient::ModifyAdvancedStoreLocationCallable(const ModifyAdvancedStoreLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAdvancedStoreLocationOutcome>>();
    ModifyAdvancedStoreLocationAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyAdvancedStoreLocationRequest&,
        ModifyAdvancedStoreLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDataEngineDescriptionRequest&;
    using Resp = ModifyDataEngineDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataEngineDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyDataEngineDescriptionOutcomeCallable DlcClient::ModifyDataEngineDescriptionCallable(const ModifyDataEngineDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataEngineDescriptionOutcome>>();
    ModifyDataEngineDescriptionAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyDataEngineDescriptionRequest&,
        ModifyDataEngineDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGovernEventRuleRequest&;
    using Resp = ModifyGovernEventRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGovernEventRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyGovernEventRuleOutcomeCallable DlcClient::ModifyGovernEventRuleCallable(const ModifyGovernEventRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGovernEventRuleOutcome>>();
    ModifyGovernEventRuleAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyGovernEventRuleRequest&,
        ModifyGovernEventRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySparkAppRequest&;
    using Resp = ModifySparkAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySparkApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifySparkAppOutcomeCallable DlcClient::ModifySparkAppCallable(const ModifySparkAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySparkAppOutcome>>();
    ModifySparkAppAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifySparkAppRequest&,
        ModifySparkAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySparkAppBatchRequest&;
    using Resp = ModifySparkAppBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySparkAppBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifySparkAppBatchOutcomeCallable DlcClient::ModifySparkAppBatchCallable(const ModifySparkAppBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySparkAppBatchOutcome>>();
    ModifySparkAppBatchAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifySparkAppBatchRequest&,
        ModifySparkAppBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyUserOutcomeCallable DlcClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserTypeRequest&;
    using Resp = ModifyUserTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyUserTypeOutcomeCallable DlcClient::ModifyUserTypeCallable(const ModifyUserTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserTypeOutcome>>();
    ModifyUserTypeAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyUserTypeRequest&,
        ModifyUserTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyWorkGroupRequest&;
    using Resp = ModifyWorkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::ModifyWorkGroupOutcomeCallable DlcClient::ModifyWorkGroupCallable(const ModifyWorkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkGroupOutcome>>();
    ModifyWorkGroupAsync(
    request,
    [prom](
        const DlcClient*,
        const ModifyWorkGroupRequest&,
        ModifyWorkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryResultRequest&;
    using Resp = QueryResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryResultOutcomeCallable DlcClient::QueryResultCallable(const QueryResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryResultOutcome>>();
    QueryResultAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryResultRequest&,
        QueryResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryTaskCostDetailRequest&;
    using Resp = QueryTaskCostDetailResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTaskCostDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::QueryTaskCostDetailOutcomeCallable DlcClient::QueryTaskCostDetailCallable(const QueryTaskCostDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTaskCostDetailOutcome>>();
    QueryTaskCostDetailAsync(
    request,
    [prom](
        const DlcClient*,
        const QueryTaskCostDetailRequest&,
        QueryTaskCostDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RegisterThirdPartyAccessUserRequest&;
    using Resp = RegisterThirdPartyAccessUserResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterThirdPartyAccessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RegisterThirdPartyAccessUserOutcomeCallable DlcClient::RegisterThirdPartyAccessUserCallable(const RegisterThirdPartyAccessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterThirdPartyAccessUserOutcome>>();
    RegisterThirdPartyAccessUserAsync(
    request,
    [prom](
        const DlcClient*,
        const RegisterThirdPartyAccessUserRequest&,
        RegisterThirdPartyAccessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RenewDataEngineRequest&;
    using Resp = RenewDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RenewDataEngineOutcomeCallable DlcClient::RenewDataEngineCallable(const RenewDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDataEngineOutcome>>();
    RenewDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const RenewDataEngineRequest&,
        RenewDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RestartDataEngineRequest&;
    using Resp = RestartDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RestartDataEngineOutcomeCallable DlcClient::RestartDataEngineCallable(const RestartDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDataEngineOutcome>>();
    RestartDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const RestartDataEngineRequest&,
        RestartDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RevokeDLCCatalogAccessRequest&;
    using Resp = RevokeDLCCatalogAccessResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeDLCCatalogAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RevokeDLCCatalogAccessOutcomeCallable DlcClient::RevokeDLCCatalogAccessCallable(const RevokeDLCCatalogAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeDLCCatalogAccessOutcome>>();
    RevokeDLCCatalogAccessAsync(
    request,
    [prom](
        const DlcClient*,
        const RevokeDLCCatalogAccessRequest&,
        RevokeDLCCatalogAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RollbackDataEngineImageRequest&;
    using Resp = RollbackDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::RollbackDataEngineImageOutcomeCallable DlcClient::RollbackDataEngineImageCallable(const RollbackDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackDataEngineImageOutcome>>();
    RollbackDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const RollbackDataEngineImageRequest&,
        RollbackDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SuspendResumeDataEngineRequest&;
    using Resp = SuspendResumeDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "SuspendResumeDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SuspendResumeDataEngineOutcomeCallable DlcClient::SuspendResumeDataEngineCallable(const SuspendResumeDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SuspendResumeDataEngineOutcome>>();
    SuspendResumeDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const SuspendResumeDataEngineRequest&,
        SuspendResumeDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SwitchDataEngineRequest&;
    using Resp = SwitchDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SwitchDataEngineOutcomeCallable DlcClient::SwitchDataEngineCallable(const SwitchDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDataEngineOutcome>>();
    SwitchDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const SwitchDataEngineRequest&,
        SwitchDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SwitchDataEngineImageRequest&;
    using Resp = SwitchDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::SwitchDataEngineImageOutcomeCallable DlcClient::SwitchDataEngineImageCallable(const SwitchDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDataEngineImageOutcome>>();
    SwitchDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const SwitchDataEngineImageRequest&,
        SwitchDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UnbindWorkGroupsFromUserRequest&;
    using Resp = UnbindWorkGroupsFromUserResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindWorkGroupsFromUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UnbindWorkGroupsFromUserOutcomeCallable DlcClient::UnbindWorkGroupsFromUserCallable(const UnbindWorkGroupsFromUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindWorkGroupsFromUserOutcome>>();
    UnbindWorkGroupsFromUserAsync(
    request,
    [prom](
        const DlcClient*,
        const UnbindWorkGroupsFromUserRequest&,
        UnbindWorkGroupsFromUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateDataEngineRequest&;
    using Resp = UpdateDataEngineResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataEngine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataEngineOutcomeCallable DlcClient::UpdateDataEngineCallable(const UpdateDataEngineRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataEngineOutcome>>();
    UpdateDataEngineAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataEngineRequest&,
        UpdateDataEngineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateDataEngineConfigRequest&;
    using Resp = UpdateDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataEngineConfigOutcomeCallable DlcClient::UpdateDataEngineConfigCallable(const UpdateDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataEngineConfigOutcome>>();
    UpdateDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataEngineConfigRequest&,
        UpdateDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateDataMaskStrategyRequest&;
    using Resp = UpdateDataMaskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDataMaskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateDataMaskStrategyOutcomeCallable DlcClient::UpdateDataMaskStrategyCallable(const UpdateDataMaskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDataMaskStrategyOutcome>>();
    UpdateDataMaskStrategyAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateDataMaskStrategyRequest&,
        UpdateDataMaskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateRowFilterRequest&;
    using Resp = UpdateRowFilterResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRowFilter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateRowFilterOutcomeCallable DlcClient::UpdateRowFilterCallable(const UpdateRowFilterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRowFilterOutcome>>();
    UpdateRowFilterAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateRowFilterRequest&,
        UpdateRowFilterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateUserDataEngineConfigRequest&;
    using Resp = UpdateUserDataEngineConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserDataEngineConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpdateUserDataEngineConfigOutcomeCallable DlcClient::UpdateUserDataEngineConfigCallable(const UpdateUserDataEngineConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserDataEngineConfigOutcome>>();
    UpdateUserDataEngineConfigAsync(
    request,
    [prom](
        const DlcClient*,
        const UpdateUserDataEngineConfigRequest&,
        UpdateUserDataEngineConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpgradeDataEngineImageRequest&;
    using Resp = UpgradeDataEngineImageResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDataEngineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DlcClient::UpgradeDataEngineImageOutcomeCallable DlcClient::UpgradeDataEngineImageCallable(const UpgradeDataEngineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDataEngineImageOutcome>>();
    UpgradeDataEngineImageAsync(
    request,
    [prom](
        const DlcClient*,
        const UpgradeDataEngineImageRequest&,
        UpgradeDataEngineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

