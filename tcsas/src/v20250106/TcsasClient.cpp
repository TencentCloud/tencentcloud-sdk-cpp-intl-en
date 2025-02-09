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

#include <tencentcloud/tcsas/v20250106/TcsasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcsas::V20250106;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-06";
    const string ENDPOINT = "tcsas.tencentcloudapi.com";
}

TcsasClient::TcsasClient(const Credential &credential, const string &region) :
    TcsasClient(credential, region, ClientProfile())
{
}

TcsasClient::TcsasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcsasClient::AddTeamMemberOutcome TcsasClient::AddTeamMember(const AddTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTeamMemberResponse rsp = AddTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTeamMemberOutcome(rsp);
        else
            return AddTeamMemberOutcome(o.GetError());
    }
    else
    {
        return AddTeamMemberOutcome(outcome.GetError());
    }
}

void TcsasClient::AddTeamMemberAsync(const AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::AddTeamMemberOutcomeCallable TcsasClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->AddTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ConfigureMNPPreviewOutcome TcsasClient::ConfigureMNPPreview(const ConfigureMNPPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureMNPPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureMNPPreviewResponse rsp = ConfigureMNPPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureMNPPreviewOutcome(rsp);
        else
            return ConfigureMNPPreviewOutcome(o.GetError());
    }
    else
    {
        return ConfigureMNPPreviewOutcome(outcome.GetError());
    }
}

void TcsasClient::ConfigureMNPPreviewAsync(const ConfigureMNPPreviewRequest& request, const ConfigureMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfigureMNPPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ConfigureMNPPreviewOutcomeCallable TcsasClient::ConfigureMNPPreviewCallable(const ConfigureMNPPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfigureMNPPreviewOutcome()>>(
        [this, request]()
        {
            return this->ConfigureMNPPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateApplicationOutcome TcsasClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateApplicationOutcomeCallable TcsasClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
        [this, request]()
        {
            return this->CreateApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateApplicationSensitiveAPIOutcome TcsasClient::CreateApplicationSensitiveAPI(const CreateApplicationSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationSensitiveAPIResponse rsp = CreateApplicationSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationSensitiveAPIOutcome(rsp);
        else
            return CreateApplicationSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateApplicationSensitiveAPIAsync(const CreateApplicationSensitiveAPIRequest& request, const CreateApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateApplicationSensitiveAPIOutcomeCallable TcsasClient::CreateApplicationSensitiveAPICallable(const CreateApplicationSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateGlobalDomainACLOutcome TcsasClient::CreateGlobalDomainACL(const CreateGlobalDomainACLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalDomainACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalDomainACLResponse rsp = CreateGlobalDomainACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalDomainACLOutcome(rsp);
        else
            return CreateGlobalDomainACLOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalDomainACLOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateGlobalDomainACLAsync(const CreateGlobalDomainACLRequest& request, const CreateGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGlobalDomainACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateGlobalDomainACLOutcomeCallable TcsasClient::CreateGlobalDomainACLCallable(const CreateGlobalDomainACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGlobalDomainACLOutcome()>>(
        [this, request]()
        {
            return this->CreateGlobalDomainACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateMNPOutcome TcsasClient::CreateMNP(const CreateMNPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMNP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMNPResponse rsp = CreateMNPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMNPOutcome(rsp);
        else
            return CreateMNPOutcome(o.GetError());
    }
    else
    {
        return CreateMNPOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateMNPAsync(const CreateMNPRequest& request, const CreateMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateMNPOutcomeCallable TcsasClient::CreateMNPCallable(const CreateMNPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMNPOutcome()>>(
        [this, request]()
        {
            return this->CreateMNP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateMNPApprovalOutcome TcsasClient::CreateMNPApproval(const CreateMNPApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMNPApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMNPApprovalResponse rsp = CreateMNPApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMNPApprovalOutcome(rsp);
        else
            return CreateMNPApprovalOutcome(o.GetError());
    }
    else
    {
        return CreateMNPApprovalOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateMNPApprovalAsync(const CreateMNPApprovalRequest& request, const CreateMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNPApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateMNPApprovalOutcomeCallable TcsasClient::CreateMNPApprovalCallable(const CreateMNPApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMNPApprovalOutcome()>>(
        [this, request]()
        {
            return this->CreateMNPApproval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateMNPDomainACLOutcome TcsasClient::CreateMNPDomainACL(const CreateMNPDomainACLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMNPDomainACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMNPDomainACLResponse rsp = CreateMNPDomainACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMNPDomainACLOutcome(rsp);
        else
            return CreateMNPDomainACLOutcome(o.GetError());
    }
    else
    {
        return CreateMNPDomainACLOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateMNPDomainACLAsync(const CreateMNPDomainACLRequest& request, const CreateMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNPDomainACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateMNPDomainACLOutcomeCallable TcsasClient::CreateMNPDomainACLCallable(const CreateMNPDomainACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMNPDomainACLOutcome()>>(
        [this, request]()
        {
            return this->CreateMNPDomainACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateMNPSensitiveAPIPermissionApprovalOutcome TcsasClient::CreateMNPSensitiveAPIPermissionApproval(const CreateMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMNPSensitiveAPIPermissionApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMNPSensitiveAPIPermissionApprovalResponse rsp = CreateMNPSensitiveAPIPermissionApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMNPSensitiveAPIPermissionApprovalOutcome(rsp);
        else
            return CreateMNPSensitiveAPIPermissionApprovalOutcome(o.GetError());
    }
    else
    {
        return CreateMNPSensitiveAPIPermissionApprovalOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateMNPSensitiveAPIPermissionApprovalAsync(const CreateMNPSensitiveAPIPermissionApprovalRequest& request, const CreateMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNPSensitiveAPIPermissionApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::CreateMNPSensitiveAPIPermissionApprovalCallable(const CreateMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMNPSensitiveAPIPermissionApprovalOutcome()>>(
        [this, request]()
        {
            return this->CreateMNPSensitiveAPIPermissionApproval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateMNPVersionOutcome TcsasClient::CreateMNPVersion(const CreateMNPVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMNPVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMNPVersionResponse rsp = CreateMNPVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMNPVersionOutcome(rsp);
        else
            return CreateMNPVersionOutcome(o.GetError());
    }
    else
    {
        return CreateMNPVersionOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateMNPVersionAsync(const CreateMNPVersionRequest& request, const CreateMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNPVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateMNPVersionOutcomeCallable TcsasClient::CreateMNPVersionCallable(const CreateMNPVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMNPVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateMNPVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreatePresetKeyOutcome TcsasClient::CreatePresetKey(const CreatePresetKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresetKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresetKeyResponse rsp = CreatePresetKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresetKeyOutcome(rsp);
        else
            return CreatePresetKeyOutcome(o.GetError());
    }
    else
    {
        return CreatePresetKeyOutcome(outcome.GetError());
    }
}

void TcsasClient::CreatePresetKeyAsync(const CreatePresetKeyRequest& request, const CreatePresetKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePresetKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreatePresetKeyOutcomeCallable TcsasClient::CreatePresetKeyCallable(const CreatePresetKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePresetKeyOutcome()>>(
        [this, request]()
        {
            return this->CreatePresetKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateTeamOutcome TcsasClient::CreateTeam(const CreateTeamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTeamResponse rsp = CreateTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTeamOutcome(rsp);
        else
            return CreateTeamOutcome(o.GetError());
    }
    else
    {
        return CreateTeamOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateTeamAsync(const CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateTeamOutcomeCallable TcsasClient::CreateTeamCallable(const CreateTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTeamOutcome()>>(
        [this, request]()
        {
            return this->CreateTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::CreateUserOutcome TcsasClient::CreateUser(const CreateUserRequest &request)
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

void TcsasClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::CreateUserOutcomeCallable TcsasClient::CreateUserCallable(const CreateUserRequest &request)
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

TcsasClient::DeleteApplicationOutcome TcsasClient::DeleteApplication(const DeleteApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationResponse rsp = DeleteApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationOutcome(rsp);
        else
            return DeleteApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteApplicationOutcomeCallable TcsasClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteApplicationSensitiveAPIOutcome TcsasClient::DeleteApplicationSensitiveAPI(const DeleteApplicationSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationSensitiveAPIResponse rsp = DeleteApplicationSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationSensitiveAPIOutcome(rsp);
        else
            return DeleteApplicationSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteApplicationSensitiveAPIAsync(const DeleteApplicationSensitiveAPIRequest& request, const DeleteApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteApplicationSensitiveAPIOutcomeCallable TcsasClient::DeleteApplicationSensitiveAPICallable(const DeleteApplicationSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteGlobalDomainOutcome TcsasClient::DeleteGlobalDomain(const DeleteGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalDomainResponse rsp = DeleteGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalDomainOutcome(rsp);
        else
            return DeleteGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalDomainOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteGlobalDomainAsync(const DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteGlobalDomainOutcomeCallable TcsasClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteMNPOutcome TcsasClient::DeleteMNP(const DeleteMNPRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMNP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMNPResponse rsp = DeleteMNPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMNPOutcome(rsp);
        else
            return DeleteMNPOutcome(o.GetError());
    }
    else
    {
        return DeleteMNPOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteMNPAsync(const DeleteMNPRequest& request, const DeleteMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteMNPOutcomeCallable TcsasClient::DeleteMNPCallable(const DeleteMNPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMNPOutcome()>>(
        [this, request]()
        {
            return this->DeleteMNP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteTeamOutcome TcsasClient::DeleteTeam(const DeleteTeamRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamResponse rsp = DeleteTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamOutcome(rsp);
        else
            return DeleteTeamOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteTeamAsync(const DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteTeamOutcomeCallable TcsasClient::DeleteTeamCallable(const DeleteTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTeamOutcome()>>(
        [this, request]()
        {
            return this->DeleteTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteTeamMemberOutcome TcsasClient::DeleteTeamMember(const DeleteTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTeamMemberResponse rsp = DeleteTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTeamMemberOutcome(rsp);
        else
            return DeleteTeamMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteTeamMemberOutcome(outcome.GetError());
    }
}

void TcsasClient::DeleteTeamMemberAsync(const DeleteTeamMemberRequest& request, const DeleteTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteTeamMemberOutcomeCallable TcsasClient::DeleteTeamMemberCallable(const DeleteTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->DeleteTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DeleteUserOutcome TcsasClient::DeleteUser(const DeleteUserRequest &request)
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

void TcsasClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DeleteUserOutcomeCallable TcsasClient::DeleteUserCallable(const DeleteUserRequest &request)
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

TcsasClient::DescribeApplicationOutcome TcsasClient::DescribeApplication(const DescribeApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationResponse rsp = DescribeApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationOutcome(rsp);
        else
            return DescribeApplicationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeApplicationOutcomeCallable TcsasClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeApplicationConfigFileOutcome TcsasClient::DescribeApplicationConfigFile(const DescribeApplicationConfigFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationConfigFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationConfigFileResponse rsp = DescribeApplicationConfigFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationConfigFileOutcome(rsp);
        else
            return DescribeApplicationConfigFileOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationConfigFileOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeApplicationConfigFileAsync(const DescribeApplicationConfigFileRequest& request, const DescribeApplicationConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationConfigFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeApplicationConfigFileOutcomeCallable TcsasClient::DescribeApplicationConfigFileCallable(const DescribeApplicationConfigFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationConfigFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationConfigFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeApplicationListOutcome TcsasClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeApplicationListOutcomeCallable TcsasClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeApplicationSensitiveAPIListOutcome TcsasClient::DescribeApplicationSensitiveAPIList(const DescribeApplicationSensitiveAPIListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationSensitiveAPIList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationSensitiveAPIListResponse rsp = DescribeApplicationSensitiveAPIListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationSensitiveAPIListOutcome(rsp);
        else
            return DescribeApplicationSensitiveAPIListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationSensitiveAPIListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeApplicationSensitiveAPIListAsync(const DescribeApplicationSensitiveAPIListRequest& request, const DescribeApplicationSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationSensitiveAPIList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeApplicationSensitiveAPIListOutcomeCallable TcsasClient::DescribeApplicationSensitiveAPIListCallable(const DescribeApplicationSensitiveAPIListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationSensitiveAPIListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationSensitiveAPIList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeGlobalDomainACLOutcome TcsasClient::DescribeGlobalDomainACL(const DescribeGlobalDomainACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalDomainACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalDomainACLResponse rsp = DescribeGlobalDomainACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalDomainACLOutcome(rsp);
        else
            return DescribeGlobalDomainACLOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalDomainACLOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeGlobalDomainACLAsync(const DescribeGlobalDomainACLRequest& request, const DescribeGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGlobalDomainACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeGlobalDomainACLOutcomeCallable TcsasClient::DescribeGlobalDomainACLCallable(const DescribeGlobalDomainACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGlobalDomainACLOutcome()>>(
        [this, request]()
        {
            return this->DescribeGlobalDomainACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPOutcome TcsasClient::DescribeMNP(const DescribeMNPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPResponse rsp = DescribeMNPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPOutcome(rsp);
        else
            return DescribeMNPOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPAsync(const DescribeMNPRequest& request, const DescribeMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPOutcomeCallable TcsasClient::DescribeMNPCallable(const DescribeMNPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPAllStageVersionsOutcome TcsasClient::DescribeMNPAllStageVersions(const DescribeMNPAllStageVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPAllStageVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPAllStageVersionsResponse rsp = DescribeMNPAllStageVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPAllStageVersionsOutcome(rsp);
        else
            return DescribeMNPAllStageVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPAllStageVersionsOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPAllStageVersionsAsync(const DescribeMNPAllStageVersionsRequest& request, const DescribeMNPAllStageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPAllStageVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPAllStageVersionsOutcomeCallable TcsasClient::DescribeMNPAllStageVersionsCallable(const DescribeMNPAllStageVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPAllStageVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPAllStageVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPApprovalListOutcome TcsasClient::DescribeMNPApprovalList(const DescribeMNPApprovalListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPApprovalList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPApprovalListResponse rsp = DescribeMNPApprovalListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPApprovalListOutcome(rsp);
        else
            return DescribeMNPApprovalListOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPApprovalListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPApprovalListAsync(const DescribeMNPApprovalListRequest& request, const DescribeMNPApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPApprovalList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPApprovalListOutcomeCallable TcsasClient::DescribeMNPApprovalListCallable(const DescribeMNPApprovalListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPApprovalListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPApprovalList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPCategoryOutcome TcsasClient::DescribeMNPCategory(const DescribeMNPCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPCategoryResponse rsp = DescribeMNPCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPCategoryOutcome(rsp);
        else
            return DescribeMNPCategoryOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPCategoryOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPCategoryAsync(const DescribeMNPCategoryRequest& request, const DescribeMNPCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPCategoryOutcomeCallable TcsasClient::DescribeMNPCategoryCallable(const DescribeMNPCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPCategoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPDomainACLOutcome TcsasClient::DescribeMNPDomainACL(const DescribeMNPDomainACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPDomainACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPDomainACLResponse rsp = DescribeMNPDomainACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPDomainACLOutcome(rsp);
        else
            return DescribeMNPDomainACLOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPDomainACLOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPDomainACLAsync(const DescribeMNPDomainACLRequest& request, const DescribeMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPDomainACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPDomainACLOutcomeCallable TcsasClient::DescribeMNPDomainACLCallable(const DescribeMNPDomainACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPDomainACLOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPDomainACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPListOutcome TcsasClient::DescribeMNPList(const DescribeMNPListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPListResponse rsp = DescribeMNPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPListOutcome(rsp);
        else
            return DescribeMNPListOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPListAsync(const DescribeMNPListRequest& request, const DescribeMNPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPListOutcomeCallable TcsasClient::DescribeMNPListCallable(const DescribeMNPListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPOfflinePackageURLOutcome TcsasClient::DescribeMNPOfflinePackageURL(const DescribeMNPOfflinePackageURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPOfflinePackageURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPOfflinePackageURLResponse rsp = DescribeMNPOfflinePackageURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPOfflinePackageURLOutcome(rsp);
        else
            return DescribeMNPOfflinePackageURLOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPOfflinePackageURLOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPOfflinePackageURLAsync(const DescribeMNPOfflinePackageURLRequest& request, const DescribeMNPOfflinePackageURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPOfflinePackageURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPOfflinePackageURLOutcomeCallable TcsasClient::DescribeMNPOfflinePackageURLCallable(const DescribeMNPOfflinePackageURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPOfflinePackageURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPOfflinePackageURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPPreviewOutcome TcsasClient::DescribeMNPPreview(const DescribeMNPPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPPreviewResponse rsp = DescribeMNPPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPPreviewOutcome(rsp);
        else
            return DescribeMNPPreviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPPreviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPPreviewAsync(const DescribeMNPPreviewRequest& request, const DescribeMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPPreviewOutcomeCallable TcsasClient::DescribeMNPPreviewCallable(const DescribeMNPPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPPreviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPReleasedVersionHistoryOutcome TcsasClient::DescribeMNPReleasedVersionHistory(const DescribeMNPReleasedVersionHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPReleasedVersionHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPReleasedVersionHistoryResponse rsp = DescribeMNPReleasedVersionHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPReleasedVersionHistoryOutcome(rsp);
        else
            return DescribeMNPReleasedVersionHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPReleasedVersionHistoryOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPReleasedVersionHistoryAsync(const DescribeMNPReleasedVersionHistoryRequest& request, const DescribeMNPReleasedVersionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPReleasedVersionHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPReleasedVersionHistoryOutcomeCallable TcsasClient::DescribeMNPReleasedVersionHistoryCallable(const DescribeMNPReleasedVersionHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPReleasedVersionHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPReleasedVersionHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalOutcome TcsasClient::DescribeMNPSensitiveAPIPermissionApproval(const DescribeMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPSensitiveAPIPermissionApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPSensitiveAPIPermissionApprovalResponse rsp = DescribeMNPSensitiveAPIPermissionApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPSensitiveAPIPermissionApprovalOutcome(rsp);
        else
            return DescribeMNPSensitiveAPIPermissionApprovalOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPSensitiveAPIPermissionApprovalOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalAsync(const DescribeMNPSensitiveAPIPermissionApprovalRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPSensitiveAPIPermissionApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalCallable(const DescribeMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPSensitiveAPIPermissionApprovalOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPSensitiveAPIPermissionApproval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListOutcome TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalList(const DescribeMNPSensitiveAPIPermissionApprovalListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPSensitiveAPIPermissionApprovalList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPSensitiveAPIPermissionApprovalListResponse rsp = DescribeMNPSensitiveAPIPermissionApprovalListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPSensitiveAPIPermissionApprovalListOutcome(rsp);
        else
            return DescribeMNPSensitiveAPIPermissionApprovalListOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPSensitiveAPIPermissionApprovalListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListAsync(const DescribeMNPSensitiveAPIPermissionApprovalListRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPSensitiveAPIPermissionApprovalList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListCallable(const DescribeMNPSensitiveAPIPermissionApprovalListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPSensitiveAPIPermissionApprovalListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPSensitiveAPIPermissionApprovalList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPSensitiveAPIPermissionListOutcome TcsasClient::DescribeMNPSensitiveAPIPermissionList(const DescribeMNPSensitiveAPIPermissionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPSensitiveAPIPermissionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPSensitiveAPIPermissionListResponse rsp = DescribeMNPSensitiveAPIPermissionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPSensitiveAPIPermissionListOutcome(rsp);
        else
            return DescribeMNPSensitiveAPIPermissionListOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPSensitiveAPIPermissionListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPSensitiveAPIPermissionListAsync(const DescribeMNPSensitiveAPIPermissionListRequest& request, const DescribeMNPSensitiveAPIPermissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPSensitiveAPIPermissionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPSensitiveAPIPermissionListOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionListCallable(const DescribeMNPSensitiveAPIPermissionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPSensitiveAPIPermissionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPSensitiveAPIPermissionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeMNPVersionOutcome TcsasClient::DescribeMNPVersion(const DescribeMNPVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPVersionResponse rsp = DescribeMNPVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPVersionOutcome(rsp);
        else
            return DescribeMNPVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPVersionOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPVersionAsync(const DescribeMNPVersionRequest& request, const DescribeMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeMNPVersionOutcomeCallable TcsasClient::DescribeMNPVersionCallable(const DescribeMNPVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeRoleListOutcome TcsasClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeRoleListOutcomeCallable TcsasClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeTeamOutcome TcsasClient::DescribeTeam(const DescribeTeamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamResponse rsp = DescribeTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamOutcome(rsp);
        else
            return DescribeTeamOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeTeamAsync(const DescribeTeamRequest& request, const DescribeTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeTeamOutcomeCallable TcsasClient::DescribeTeamCallable(const DescribeTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeTeamListOutcome TcsasClient::DescribeTeamList(const DescribeTeamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamListResponse rsp = DescribeTeamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamListOutcome(rsp);
        else
            return DescribeTeamListOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeTeamListAsync(const DescribeTeamListRequest& request, const DescribeTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeTeamListOutcomeCallable TcsasClient::DescribeTeamListCallable(const DescribeTeamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeTeamMemberListOutcome TcsasClient::DescribeTeamMemberList(const DescribeTeamMemberListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamMemberList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamMemberListResponse rsp = DescribeTeamMemberListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamMemberListOutcome(rsp);
        else
            return DescribeTeamMemberListOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamMemberListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeTeamMemberListAsync(const DescribeTeamMemberListRequest& request, const DescribeTeamMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamMemberList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeTeamMemberListOutcomeCallable TcsasClient::DescribeTeamMemberListCallable(const DescribeTeamMemberListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamMemberListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeamMemberList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeTempSecret4UploadFile2CosOutcome TcsasClient::DescribeTempSecret4UploadFile2Cos(const DescribeTempSecret4UploadFile2CosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTempSecret4UploadFile2Cos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTempSecret4UploadFile2CosResponse rsp = DescribeTempSecret4UploadFile2CosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTempSecret4UploadFile2CosOutcome(rsp);
        else
            return DescribeTempSecret4UploadFile2CosOutcome(o.GetError());
    }
    else
    {
        return DescribeTempSecret4UploadFile2CosOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeTempSecret4UploadFile2CosAsync(const DescribeTempSecret4UploadFile2CosRequest& request, const DescribeTempSecret4UploadFile2CosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTempSecret4UploadFile2Cos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeTempSecret4UploadFile2CosOutcomeCallable TcsasClient::DescribeTempSecret4UploadFile2CosCallable(const DescribeTempSecret4UploadFile2CosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTempSecret4UploadFile2CosOutcome()>>(
        [this, request]()
        {
            return this->DescribeTempSecret4UploadFile2Cos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeUserOutcome TcsasClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeUserOutcomeCallable TcsasClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DescribeUserListOutcome TcsasClient::DescribeUserList(const DescribeUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserListResponse rsp = DescribeUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserListOutcome(rsp);
        else
            return DescribeUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserListOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DescribeUserListOutcomeCallable TcsasClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::DisableApplicationSensitiveAPIOutcome TcsasClient::DisableApplicationSensitiveAPI(const DisableApplicationSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "DisableApplicationSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableApplicationSensitiveAPIResponse rsp = DisableApplicationSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableApplicationSensitiveAPIOutcome(rsp);
        else
            return DisableApplicationSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return DisableApplicationSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcsasClient::DisableApplicationSensitiveAPIAsync(const DisableApplicationSensitiveAPIRequest& request, const DisableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableApplicationSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::DisableApplicationSensitiveAPIOutcomeCallable TcsasClient::DisableApplicationSensitiveAPICallable(const DisableApplicationSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableApplicationSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->DisableApplicationSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::EnableApplicationSensitiveAPIOutcome TcsasClient::EnableApplicationSensitiveAPI(const EnableApplicationSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "EnableApplicationSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableApplicationSensitiveAPIResponse rsp = EnableApplicationSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableApplicationSensitiveAPIOutcome(rsp);
        else
            return EnableApplicationSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return EnableApplicationSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcsasClient::EnableApplicationSensitiveAPIAsync(const EnableApplicationSensitiveAPIRequest& request, const EnableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableApplicationSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::EnableApplicationSensitiveAPIOutcomeCallable TcsasClient::EnableApplicationSensitiveAPICallable(const EnableApplicationSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableApplicationSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->EnableApplicationSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyApplicationOutcome TcsasClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyApplicationOutcomeCallable TcsasClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyGlobalDomainOutcome TcsasClient::ModifyGlobalDomain(const ModifyGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalDomainResponse rsp = ModifyGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalDomainOutcome(rsp);
        else
            return ModifyGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalDomainOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyGlobalDomainAsync(const ModifyGlobalDomainRequest& request, const ModifyGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyGlobalDomainOutcomeCallable TcsasClient::ModifyGlobalDomainCallable(const ModifyGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyMNPOutcome TcsasClient::ModifyMNP(const ModifyMNPRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMNP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMNPResponse rsp = ModifyMNPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMNPOutcome(rsp);
        else
            return ModifyMNPOutcome(o.GetError());
    }
    else
    {
        return ModifyMNPOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyMNPAsync(const ModifyMNPRequest& request, const ModifyMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyMNPOutcomeCallable TcsasClient::ModifyMNPCallable(const ModifyMNPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMNPOutcome()>>(
        [this, request]()
        {
            return this->ModifyMNP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyMNPDomainOutcome TcsasClient::ModifyMNPDomain(const ModifyMNPDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMNPDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMNPDomainResponse rsp = ModifyMNPDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMNPDomainOutcome(rsp);
        else
            return ModifyMNPDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyMNPDomainOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyMNPDomainAsync(const ModifyMNPDomainRequest& request, const ModifyMNPDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMNPDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyMNPDomainOutcomeCallable TcsasClient::ModifyMNPDomainCallable(const ModifyMNPDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMNPDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyMNPDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyTeamOutcome TcsasClient::ModifyTeam(const ModifyTeamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamResponse rsp = ModifyTeamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamOutcome(rsp);
        else
            return ModifyTeamOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyTeamAsync(const ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyTeamOutcomeCallable TcsasClient::ModifyTeamCallable(const ModifyTeamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTeamOutcome()>>(
        [this, request]()
        {
            return this->ModifyTeam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyTeamMemberOutcome TcsasClient::ModifyTeamMember(const ModifyTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTeamMemberResponse rsp = ModifyTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTeamMemberOutcome(rsp);
        else
            return ModifyTeamMemberOutcome(o.GetError());
    }
    else
    {
        return ModifyTeamMemberOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyTeamMemberAsync(const ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyTeamMemberOutcomeCallable TcsasClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->ModifyTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ModifyUserOutcome TcsasClient::ModifyUser(const ModifyUserRequest &request)
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

void TcsasClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ModifyUserOutcomeCallable TcsasClient::ModifyUserCallable(const ModifyUserRequest &request)
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

TcsasClient::ProcessMNPApprovalOutcome TcsasClient::ProcessMNPApproval(const ProcessMNPApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMNPApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMNPApprovalResponse rsp = ProcessMNPApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMNPApprovalOutcome(rsp);
        else
            return ProcessMNPApprovalOutcome(o.GetError());
    }
    else
    {
        return ProcessMNPApprovalOutcome(outcome.GetError());
    }
}

void TcsasClient::ProcessMNPApprovalAsync(const ProcessMNPApprovalRequest& request, const ProcessMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMNPApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ProcessMNPApprovalOutcomeCallable TcsasClient::ProcessMNPApprovalCallable(const ProcessMNPApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMNPApprovalOutcome()>>(
        [this, request]()
        {
            return this->ProcessMNPApproval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalOutcome TcsasClient::ProcessMNPSensitiveAPIPermissionApproval(const ProcessMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMNPSensitiveAPIPermissionApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMNPSensitiveAPIPermissionApprovalResponse rsp = ProcessMNPSensitiveAPIPermissionApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMNPSensitiveAPIPermissionApprovalOutcome(rsp);
        else
            return ProcessMNPSensitiveAPIPermissionApprovalOutcome(o.GetError());
    }
    else
    {
        return ProcessMNPSensitiveAPIPermissionApprovalOutcome(outcome.GetError());
    }
}

void TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalAsync(const ProcessMNPSensitiveAPIPermissionApprovalRequest& request, const ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMNPSensitiveAPIPermissionApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalCallable(const ProcessMNPSensitiveAPIPermissionApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMNPSensitiveAPIPermissionApprovalOutcome()>>(
        [this, request]()
        {
            return this->ProcessMNPSensitiveAPIPermissionApproval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::ReleaseMNPVersionOutcome TcsasClient::ReleaseMNPVersion(const ReleaseMNPVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseMNPVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseMNPVersionResponse rsp = ReleaseMNPVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseMNPVersionOutcome(rsp);
        else
            return ReleaseMNPVersionOutcome(o.GetError());
    }
    else
    {
        return ReleaseMNPVersionOutcome(outcome.GetError());
    }
}

void TcsasClient::ReleaseMNPVersionAsync(const ReleaseMNPVersionRequest& request, const ReleaseMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseMNPVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::ReleaseMNPVersionOutcomeCallable TcsasClient::ReleaseMNPVersionCallable(const ReleaseMNPVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseMNPVersionOutcome()>>(
        [this, request]()
        {
            return this->ReleaseMNPVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::RemoveMNPOutcome TcsasClient::RemoveMNP(const RemoveMNPRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMNP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMNPResponse rsp = RemoveMNPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMNPOutcome(rsp);
        else
            return RemoveMNPOutcome(o.GetError());
    }
    else
    {
        return RemoveMNPOutcome(outcome.GetError());
    }
}

void TcsasClient::RemoveMNPAsync(const RemoveMNPRequest& request, const RemoveMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::RemoveMNPOutcomeCallable TcsasClient::RemoveMNPCallable(const RemoveMNPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveMNPOutcome()>>(
        [this, request]()
        {
            return this->RemoveMNP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcsasClient::RollbackMNPVersionOutcome TcsasClient::RollbackMNPVersion(const RollbackMNPVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackMNPVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackMNPVersionResponse rsp = RollbackMNPVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackMNPVersionOutcome(rsp);
        else
            return RollbackMNPVersionOutcome(o.GetError());
    }
    else
    {
        return RollbackMNPVersionOutcome(outcome.GetError());
    }
}

void TcsasClient::RollbackMNPVersionAsync(const RollbackMNPVersionRequest& request, const RollbackMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackMNPVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcsasClient::RollbackMNPVersionOutcomeCallable TcsasClient::RollbackMNPVersionCallable(const RollbackMNPVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackMNPVersionOutcome()>>(
        [this, request]()
        {
            return this->RollbackMNPVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

