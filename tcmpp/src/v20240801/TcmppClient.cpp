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

#include <tencentcloud/tcmpp/v20240801/TcmppClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcmpp::V20240801;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-08-01";
    const string ENDPOINT = "tcmpp.tencentcloudapi.com";
}

TcmppClient::TcmppClient(const Credential &credential, const string &region) :
    TcmppClient(credential, region, ClientProfile())
{
}

TcmppClient::TcmppClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcmppClient::AddTeamMemberOutcome TcmppClient::AddTeamMember(const AddTeamMemberRequest &request)
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

void TcmppClient::AddTeamMemberAsync(const AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::AddTeamMemberOutcomeCallable TcmppClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
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

TcmppClient::CheckGlobalDomainOutcome TcmppClient::CheckGlobalDomain(const CheckGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckGlobalDomainResponse rsp = CheckGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckGlobalDomainOutcome(rsp);
        else
            return CheckGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return CheckGlobalDomainOutcome(outcome.GetError());
    }
}

void TcmppClient::CheckGlobalDomainAsync(const CheckGlobalDomainRequest& request, const CheckGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CheckGlobalDomainOutcomeCallable TcmppClient::CheckGlobalDomainCallable(const CheckGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->CheckGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateApplicationOutcome TcmppClient::CreateApplication(const CreateApplicationRequest &request)
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

void TcmppClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateApplicationOutcomeCallable TcmppClient::CreateApplicationCallable(const CreateApplicationRequest &request)
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

TcmppClient::CreateConsoleMNPVersionCompileTaskOutcome TcmppClient::CreateConsoleMNPVersionCompileTask(const CreateConsoleMNPVersionCompileTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleMNPVersionCompileTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleMNPVersionCompileTaskResponse rsp = CreateConsoleMNPVersionCompileTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleMNPVersionCompileTaskOutcome(rsp);
        else
            return CreateConsoleMNPVersionCompileTaskOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleMNPVersionCompileTaskOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateConsoleMNPVersionCompileTaskAsync(const CreateConsoleMNPVersionCompileTaskRequest& request, const CreateConsoleMNPVersionCompileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsoleMNPVersionCompileTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateConsoleMNPVersionCompileTaskOutcomeCallable TcmppClient::CreateConsoleMNPVersionCompileTaskCallable(const CreateConsoleMNPVersionCompileTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsoleMNPVersionCompileTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateConsoleMNPVersionCompileTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateDomainOutcome TcmppClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateDomainOutcomeCallable TcmppClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateGlobalDomainOutcome TcmppClient::CreateGlobalDomain(const CreateGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalDomainResponse rsp = CreateGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalDomainOutcome(rsp);
        else
            return CreateGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalDomainOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateGlobalDomainAsync(const CreateGlobalDomainRequest& request, const CreateGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateGlobalDomainOutcomeCallable TcmppClient::CreateGlobalDomainCallable(const CreateGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateMNPOutcome TcmppClient::CreateMNP(const CreateMNPRequest &request)
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

void TcmppClient::CreateMNPAsync(const CreateMNPRequest& request, const CreateMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateMNPOutcomeCallable TcmppClient::CreateMNPCallable(const CreateMNPRequest &request)
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

TcmppClient::CreateOnlineApplyOutcome TcmppClient::CreateOnlineApply(const CreateOnlineApplyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOnlineApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOnlineApplyResponse rsp = CreateOnlineApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOnlineApplyOutcome(rsp);
        else
            return CreateOnlineApplyOutcome(o.GetError());
    }
    else
    {
        return CreateOnlineApplyOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateOnlineApplyAsync(const CreateOnlineApplyRequest& request, const CreateOnlineApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOnlineApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateOnlineApplyOutcomeCallable TcmppClient::CreateOnlineApplyCallable(const CreateOnlineApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOnlineApplyOutcome()>>(
        [this, request]()
        {
            return this->CreateOnlineApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreatePlatformAuditOutcome TcmppClient::CreatePlatformAudit(const CreatePlatformAuditRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlatformAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePlatformAuditResponse rsp = CreatePlatformAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePlatformAuditOutcome(rsp);
        else
            return CreatePlatformAuditOutcome(o.GetError());
    }
    else
    {
        return CreatePlatformAuditOutcome(outcome.GetError());
    }
}

void TcmppClient::CreatePlatformAuditAsync(const CreatePlatformAuditRequest& request, const CreatePlatformAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePlatformAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreatePlatformAuditOutcomeCallable TcmppClient::CreatePlatformAuditCallable(const CreatePlatformAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePlatformAuditOutcome()>>(
        [this, request]()
        {
            return this->CreatePlatformAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreatePresetKeyOutcome TcmppClient::CreatePresetKey(const CreatePresetKeyRequest &request)
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

void TcmppClient::CreatePresetKeyAsync(const CreatePresetKeyRequest& request, const CreatePresetKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePresetKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreatePresetKeyOutcomeCallable TcmppClient::CreatePresetKeyCallable(const CreatePresetKeyRequest &request)
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

TcmppClient::CreateSensitiveAPIOutcome TcmppClient::CreateSensitiveAPI(const CreateSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSensitiveAPIResponse rsp = CreateSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSensitiveAPIOutcome(rsp);
        else
            return CreateSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return CreateSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateSensitiveAPIAsync(const CreateSensitiveAPIRequest& request, const CreateSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateSensitiveAPIOutcomeCallable TcmppClient::CreateSensitiveAPICallable(const CreateSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->CreateSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateSensitiveApiApplyOutcome TcmppClient::CreateSensitiveApiApply(const CreateSensitiveApiApplyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSensitiveApiApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSensitiveApiApplyResponse rsp = CreateSensitiveApiApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSensitiveApiApplyOutcome(rsp);
        else
            return CreateSensitiveApiApplyOutcome(o.GetError());
    }
    else
    {
        return CreateSensitiveApiApplyOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateSensitiveApiApplyAsync(const CreateSensitiveApiApplyRequest& request, const CreateSensitiveApiApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSensitiveApiApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateSensitiveApiApplyOutcomeCallable TcmppClient::CreateSensitiveApiApplyCallable(const CreateSensitiveApiApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSensitiveApiApplyOutcome()>>(
        [this, request]()
        {
            return this->CreateSensitiveApiApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateTeamOutcome TcmppClient::CreateTeam(const CreateTeamRequest &request)
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

void TcmppClient::CreateTeamAsync(const CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateTeamOutcomeCallable TcmppClient::CreateTeamCallable(const CreateTeamRequest &request)
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

TcmppClient::CreateTeamMemberOutcome TcmppClient::CreateTeamMember(const CreateTeamMemberRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTeamMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTeamMemberResponse rsp = CreateTeamMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTeamMemberOutcome(rsp);
        else
            return CreateTeamMemberOutcome(o.GetError());
    }
    else
    {
        return CreateTeamMemberOutcome(outcome.GetError());
    }
}

void TcmppClient::CreateTeamMemberAsync(const CreateTeamMemberRequest& request, const CreateTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateTeamMemberOutcomeCallable TcmppClient::CreateTeamMemberCallable(const CreateTeamMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTeamMemberOutcome()>>(
        [this, request]()
        {
            return this->CreateTeamMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::CreateUserOutcome TcmppClient::CreateUser(const CreateUserRequest &request)
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

void TcmppClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::CreateUserOutcomeCallable TcmppClient::CreateUserCallable(const CreateUserRequest &request)
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

TcmppClient::DeleteApplicationOutcome TcmppClient::DeleteApplication(const DeleteApplicationRequest &request)
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

void TcmppClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteApplicationOutcomeCallable TcmppClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
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

TcmppClient::DeleteGlobalDomainOutcome TcmppClient::DeleteGlobalDomain(const DeleteGlobalDomainRequest &request)
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

void TcmppClient::DeleteGlobalDomainAsync(const DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteGlobalDomainOutcomeCallable TcmppClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
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

TcmppClient::DeleteMNPOutcome TcmppClient::DeleteMNP(const DeleteMNPRequest &request)
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

void TcmppClient::DeleteMNPAsync(const DeleteMNPRequest& request, const DeleteMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteMNPOutcomeCallable TcmppClient::DeleteMNPCallable(const DeleteMNPRequest &request)
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

TcmppClient::DeleteSensitiveAPIOutcome TcmppClient::DeleteSensitiveAPI(const DeleteSensitiveAPIRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSensitiveAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSensitiveAPIResponse rsp = DeleteSensitiveAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSensitiveAPIOutcome(rsp);
        else
            return DeleteSensitiveAPIOutcome(o.GetError());
    }
    else
    {
        return DeleteSensitiveAPIOutcome(outcome.GetError());
    }
}

void TcmppClient::DeleteSensitiveAPIAsync(const DeleteSensitiveAPIRequest& request, const DeleteSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSensitiveAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteSensitiveAPIOutcomeCallable TcmppClient::DeleteSensitiveAPICallable(const DeleteSensitiveAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSensitiveAPIOutcome()>>(
        [this, request]()
        {
            return this->DeleteSensitiveAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DeleteTeamOutcome TcmppClient::DeleteTeam(const DeleteTeamRequest &request)
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

void TcmppClient::DeleteTeamAsync(const DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteTeamOutcomeCallable TcmppClient::DeleteTeamCallable(const DeleteTeamRequest &request)
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

TcmppClient::DeleteTeamMemberOutcome TcmppClient::DeleteTeamMember(const DeleteTeamMemberRequest &request)
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

void TcmppClient::DeleteTeamMemberAsync(const DeleteTeamMemberRequest& request, const DeleteTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteTeamMemberOutcomeCallable TcmppClient::DeleteTeamMemberCallable(const DeleteTeamMemberRequest &request)
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

TcmppClient::DeleteUserOutcome TcmppClient::DeleteUser(const DeleteUserRequest &request)
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

void TcmppClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DeleteUserOutcomeCallable TcmppClient::DeleteUserCallable(const DeleteUserRequest &request)
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

TcmppClient::DescribeApplicationOutcome TcmppClient::DescribeApplication(const DescribeApplicationRequest &request)
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

void TcmppClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeApplicationOutcomeCallable TcmppClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
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

TcmppClient::DescribeApplicationConfigOutcome TcmppClient::DescribeApplicationConfig(const DescribeApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationConfigResponse rsp = DescribeApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationConfigOutcome(rsp);
        else
            return DescribeApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationConfigOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeApplicationConfigAsync(const DescribeApplicationConfigRequest& request, const DescribeApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeApplicationConfigOutcomeCallable TcmppClient::DescribeApplicationConfigCallable(const DescribeApplicationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeApplicationListOutcome TcmppClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
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

void TcmppClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeApplicationListOutcomeCallable TcmppClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
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

TcmppClient::DescribeApplicationMNPVersionAuditListOutcome TcmppClient::DescribeApplicationMNPVersionAuditList(const DescribeApplicationMNPVersionAuditListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationMNPVersionAuditList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationMNPVersionAuditListResponse rsp = DescribeApplicationMNPVersionAuditListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationMNPVersionAuditListOutcome(rsp);
        else
            return DescribeApplicationMNPVersionAuditListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationMNPVersionAuditListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeApplicationMNPVersionAuditListAsync(const DescribeApplicationMNPVersionAuditListRequest& request, const DescribeApplicationMNPVersionAuditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationMNPVersionAuditList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeApplicationMNPVersionAuditListOutcomeCallable TcmppClient::DescribeApplicationMNPVersionAuditListCallable(const DescribeApplicationMNPVersionAuditListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationMNPVersionAuditListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationMNPVersionAuditList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeConsoleMNPVersionCompileTaskOutcome TcmppClient::DescribeConsoleMNPVersionCompileTask(const DescribeConsoleMNPVersionCompileTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsoleMNPVersionCompileTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsoleMNPVersionCompileTaskResponse rsp = DescribeConsoleMNPVersionCompileTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsoleMNPVersionCompileTaskOutcome(rsp);
        else
            return DescribeConsoleMNPVersionCompileTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeConsoleMNPVersionCompileTaskOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeConsoleMNPVersionCompileTaskAsync(const DescribeConsoleMNPVersionCompileTaskRequest& request, const DescribeConsoleMNPVersionCompileTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsoleMNPVersionCompileTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeConsoleMNPVersionCompileTaskOutcomeCallable TcmppClient::DescribeConsoleMNPVersionCompileTaskCallable(const DescribeConsoleMNPVersionCompileTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsoleMNPVersionCompileTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsoleMNPVersionCompileTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeDomainInfoOutcome TcmppClient::DescribeDomainInfo(const DescribeDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainInfoResponse rsp = DescribeDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainInfoOutcome(rsp);
        else
            return DescribeDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainInfoOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeDomainInfoAsync(const DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeDomainInfoOutcomeCallable TcmppClient::DescribeDomainInfoCallable(const DescribeDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeDomainTeamListOutcome TcmppClient::DescribeDomainTeamList(const DescribeDomainTeamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainTeamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainTeamListResponse rsp = DescribeDomainTeamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainTeamListOutcome(rsp);
        else
            return DescribeDomainTeamListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainTeamListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeDomainTeamListAsync(const DescribeDomainTeamListRequest& request, const DescribeDomainTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainTeamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeDomainTeamListOutcomeCallable TcmppClient::DescribeDomainTeamListCallable(const DescribeDomainTeamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainTeamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainTeamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeGlobalDomainListOutcome TcmppClient::DescribeGlobalDomainList(const DescribeGlobalDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalDomainListResponse rsp = DescribeGlobalDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalDomainListOutcome(rsp);
        else
            return DescribeGlobalDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalDomainListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeGlobalDomainListAsync(const DescribeGlobalDomainListRequest& request, const DescribeGlobalDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGlobalDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeGlobalDomainListOutcomeCallable TcmppClient::DescribeGlobalDomainListCallable(const DescribeGlobalDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGlobalDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGlobalDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPBoardOutcome TcmppClient::DescribeMNPBoard(const DescribeMNPBoardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPBoard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPBoardResponse rsp = DescribeMNPBoardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPBoardOutcome(rsp);
        else
            return DescribeMNPBoardOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPBoardOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPBoardAsync(const DescribeMNPBoardRequest& request, const DescribeMNPBoardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPBoard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPBoardOutcomeCallable TcmppClient::DescribeMNPBoardCallable(const DescribeMNPBoardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPBoardOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPBoard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPDetailOutcome TcmppClient::DescribeMNPDetail(const DescribeMNPDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPDetailResponse rsp = DescribeMNPDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPDetailOutcome(rsp);
        else
            return DescribeMNPDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPDetailOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPDetailAsync(const DescribeMNPDetailRequest& request, const DescribeMNPDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPDetailOutcomeCallable TcmppClient::DescribeMNPDetailCallable(const DescribeMNPDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPManagerDetailOutcome TcmppClient::DescribeMNPManagerDetail(const DescribeMNPManagerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPManagerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPManagerDetailResponse rsp = DescribeMNPManagerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPManagerDetailOutcome(rsp);
        else
            return DescribeMNPManagerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPManagerDetailOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPManagerDetailAsync(const DescribeMNPManagerDetailRequest& request, const DescribeMNPManagerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPManagerDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPManagerDetailOutcomeCallable TcmppClient::DescribeMNPManagerDetailCallable(const DescribeMNPManagerDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPManagerDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPManagerDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPManagerListOutcome TcmppClient::DescribeMNPManagerList(const DescribeMNPManagerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPManagerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPManagerListResponse rsp = DescribeMNPManagerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPManagerListOutcome(rsp);
        else
            return DescribeMNPManagerListOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPManagerListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPManagerListAsync(const DescribeMNPManagerListRequest& request, const DescribeMNPManagerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPManagerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPManagerListOutcomeCallable TcmppClient::DescribeMNPManagerListCallable(const DescribeMNPManagerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPManagerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPManagerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPPrivacyOutcome TcmppClient::DescribeMNPPrivacy(const DescribeMNPPrivacyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPPrivacy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPPrivacyResponse rsp = DescribeMNPPrivacyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPPrivacyOutcome(rsp);
        else
            return DescribeMNPPrivacyOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPPrivacyOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPPrivacyAsync(const DescribeMNPPrivacyRequest& request, const DescribeMNPPrivacyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPPrivacy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPPrivacyOutcomeCallable TcmppClient::DescribeMNPPrivacyCallable(const DescribeMNPPrivacyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPPrivacyOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPPrivacy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPTypeOutcome TcmppClient::DescribeMNPType(const DescribeMNPTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPTypeResponse rsp = DescribeMNPTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPTypeOutcome(rsp);
        else
            return DescribeMNPTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPTypeOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPTypeAsync(const DescribeMNPTypeRequest& request, const DescribeMNPTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPTypeOutcomeCallable TcmppClient::DescribeMNPTypeCallable(const DescribeMNPTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeMNPVersionPreviewOutcome TcmppClient::DescribeMNPVersionPreview(const DescribeMNPVersionPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPVersionPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPVersionPreviewResponse rsp = DescribeMNPVersionPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPVersionPreviewOutcome(rsp);
        else
            return DescribeMNPVersionPreviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPVersionPreviewOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeMNPVersionPreviewAsync(const DescribeMNPVersionPreviewRequest& request, const DescribeMNPVersionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMNPVersionPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeMNPVersionPreviewOutcomeCallable TcmppClient::DescribeMNPVersionPreviewCallable(const DescribeMNPVersionPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMNPVersionPreviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeMNPVersionPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeOfflineMNPPackageOutcome TcmppClient::DescribeOfflineMNPPackage(const DescribeOfflineMNPPackageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineMNPPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineMNPPackageResponse rsp = DescribeOfflineMNPPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineMNPPackageOutcome(rsp);
        else
            return DescribeOfflineMNPPackageOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineMNPPackageOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeOfflineMNPPackageAsync(const DescribeOfflineMNPPackageRequest& request, const DescribeOfflineMNPPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineMNPPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeOfflineMNPPackageOutcomeCallable TcmppClient::DescribeOfflineMNPPackageCallable(const DescribeOfflineMNPPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineMNPPackageOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineMNPPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeOnlineVersionOutcome TcmppClient::DescribeOnlineVersion(const DescribeOnlineVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineVersionResponse rsp = DescribeOnlineVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineVersionOutcome(rsp);
        else
            return DescribeOnlineVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineVersionOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeOnlineVersionAsync(const DescribeOnlineVersionRequest& request, const DescribeOnlineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOnlineVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeOnlineVersionOutcomeCallable TcmppClient::DescribeOnlineVersionCallable(const DescribeOnlineVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOnlineVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeOnlineVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeRoleDetailOutcome TcmppClient::DescribeRoleDetail(const DescribeRoleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleDetailResponse rsp = DescribeRoleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleDetailOutcome(rsp);
        else
            return DescribeRoleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleDetailOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeRoleDetailAsync(const DescribeRoleDetailRequest& request, const DescribeRoleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeRoleDetailOutcomeCallable TcmppClient::DescribeRoleDetailCallable(const DescribeRoleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeRoleListOutcome TcmppClient::DescribeRoleList(const DescribeRoleListRequest &request)
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

void TcmppClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeRoleListOutcomeCallable TcmppClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
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

TcmppClient::DescribeSensitiveAPIAuditListOutcome TcmppClient::DescribeSensitiveAPIAuditList(const DescribeSensitiveAPIAuditListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveAPIAuditList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveAPIAuditListResponse rsp = DescribeSensitiveAPIAuditListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveAPIAuditListOutcome(rsp);
        else
            return DescribeSensitiveAPIAuditListOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveAPIAuditListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSensitiveAPIAuditListAsync(const DescribeSensitiveAPIAuditListRequest& request, const DescribeSensitiveAPIAuditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveAPIAuditList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSensitiveAPIAuditListOutcomeCallable TcmppClient::DescribeSensitiveAPIAuditListCallable(const DescribeSensitiveAPIAuditListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveAPIAuditListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveAPIAuditList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeSensitiveAPIListOutcome TcmppClient::DescribeSensitiveAPIList(const DescribeSensitiveAPIListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveAPIList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveAPIListResponse rsp = DescribeSensitiveAPIListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveAPIListOutcome(rsp);
        else
            return DescribeSensitiveAPIListOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveAPIListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSensitiveAPIListAsync(const DescribeSensitiveAPIListRequest& request, const DescribeSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveAPIList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSensitiveAPIListOutcomeCallable TcmppClient::DescribeSensitiveAPIListCallable(const DescribeSensitiveAPIListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveAPIListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveAPIList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeSensitiveApiApplyDetailOutcome TcmppClient::DescribeSensitiveApiApplyDetail(const DescribeSensitiveApiApplyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveApiApplyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveApiApplyDetailResponse rsp = DescribeSensitiveApiApplyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveApiApplyDetailOutcome(rsp);
        else
            return DescribeSensitiveApiApplyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveApiApplyDetailOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSensitiveApiApplyDetailAsync(const DescribeSensitiveApiApplyDetailRequest& request, const DescribeSensitiveApiApplyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveApiApplyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSensitiveApiApplyDetailOutcomeCallable TcmppClient::DescribeSensitiveApiApplyDetailCallable(const DescribeSensitiveApiApplyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveApiApplyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveApiApplyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeSensitiveApiAuthListOutcome TcmppClient::DescribeSensitiveApiAuthList(const DescribeSensitiveApiAuthListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveApiAuthList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveApiAuthListResponse rsp = DescribeSensitiveApiAuthListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveApiAuthListOutcome(rsp);
        else
            return DescribeSensitiveApiAuthListOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveApiAuthListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSensitiveApiAuthListAsync(const DescribeSensitiveApiAuthListRequest& request, const DescribeSensitiveApiAuthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveApiAuthList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSensitiveApiAuthListOutcomeCallable TcmppClient::DescribeSensitiveApiAuthListCallable(const DescribeSensitiveApiAuthListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveApiAuthListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveApiAuthList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeSimpleApplicationInfoListOutcome TcmppClient::DescribeSimpleApplicationInfoList(const DescribeSimpleApplicationInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleApplicationInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleApplicationInfoListResponse rsp = DescribeSimpleApplicationInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleApplicationInfoListOutcome(rsp);
        else
            return DescribeSimpleApplicationInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleApplicationInfoListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSimpleApplicationInfoListAsync(const DescribeSimpleApplicationInfoListRequest& request, const DescribeSimpleApplicationInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleApplicationInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSimpleApplicationInfoListOutcomeCallable TcmppClient::DescribeSimpleApplicationInfoListCallable(const DescribeSimpleApplicationInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleApplicationInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleApplicationInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeSimpleTeamListOutcome TcmppClient::DescribeSimpleTeamList(const DescribeSimpleTeamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleTeamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleTeamListResponse rsp = DescribeSimpleTeamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleTeamListOutcome(rsp);
        else
            return DescribeSimpleTeamListOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleTeamListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeSimpleTeamListAsync(const DescribeSimpleTeamListRequest& request, const DescribeSimpleTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleTeamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeSimpleTeamListOutcomeCallable TcmppClient::DescribeSimpleTeamListCallable(const DescribeSimpleTeamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleTeamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleTeamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeTeamOutcome TcmppClient::DescribeTeam(const DescribeTeamRequest &request)
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

void TcmppClient::DescribeTeamAsync(const DescribeTeamRequest& request, const DescribeTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTeamOutcomeCallable TcmppClient::DescribeTeamCallable(const DescribeTeamRequest &request)
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

TcmppClient::DescribeTeamDomainListOutcome TcmppClient::DescribeTeamDomainList(const DescribeTeamDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamDomainListResponse rsp = DescribeTeamDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamDomainListOutcome(rsp);
        else
            return DescribeTeamDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamDomainListOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeTeamDomainListAsync(const DescribeTeamDomainListRequest& request, const DescribeTeamDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTeamDomainListOutcomeCallable TcmppClient::DescribeTeamDomainListCallable(const DescribeTeamDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeamDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeTeamListOutcome TcmppClient::DescribeTeamList(const DescribeTeamListRequest &request)
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

void TcmppClient::DescribeTeamListAsync(const DescribeTeamListRequest& request, const DescribeTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTeamListOutcomeCallable TcmppClient::DescribeTeamListCallable(const DescribeTeamListRequest &request)
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

TcmppClient::DescribeTeamMemberListOutcome TcmppClient::DescribeTeamMemberList(const DescribeTeamMemberListRequest &request)
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

void TcmppClient::DescribeTeamMemberListAsync(const DescribeTeamMemberListRequest& request, const DescribeTeamMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamMemberList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTeamMemberListOutcomeCallable TcmppClient::DescribeTeamMemberListCallable(const DescribeTeamMemberListRequest &request)
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

TcmppClient::DescribeTeamMembersOutcome TcmppClient::DescribeTeamMembers(const DescribeTeamMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTeamMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTeamMembersResponse rsp = DescribeTeamMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTeamMembersOutcome(rsp);
        else
            return DescribeTeamMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeTeamMembersOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeTeamMembersAsync(const DescribeTeamMembersRequest& request, const DescribeTeamMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTeamMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTeamMembersOutcomeCallable TcmppClient::DescribeTeamMembersCallable(const DescribeTeamMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTeamMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeTeamMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeTempSecret4UploadFile2CosOutcome TcmppClient::DescribeTempSecret4UploadFile2Cos(const DescribeTempSecret4UploadFile2CosRequest &request)
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

void TcmppClient::DescribeTempSecret4UploadFile2CosAsync(const DescribeTempSecret4UploadFile2CosRequest& request, const DescribeTempSecret4UploadFile2CosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTempSecret4UploadFile2Cos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeTempSecret4UploadFile2CosOutcomeCallable TcmppClient::DescribeTempSecret4UploadFile2CosCallable(const DescribeTempSecret4UploadFile2CosRequest &request)
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

TcmppClient::DescribeUserDetailOutcome TcmppClient::DescribeUserDetail(const DescribeUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDetailResponse rsp = DescribeUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDetailOutcome(rsp);
        else
            return DescribeUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDetailOutcome(outcome.GetError());
    }
}

void TcmppClient::DescribeUserDetailAsync(const DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeUserDetailOutcomeCallable TcmppClient::DescribeUserDetailCallable(const DescribeUserDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::DescribeUserListOutcome TcmppClient::DescribeUserList(const DescribeUserListRequest &request)
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

void TcmppClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DescribeUserListOutcomeCallable TcmppClient::DescribeUserListCallable(const DescribeUserListRequest &request)
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

TcmppClient::DisableTeamDomainOutcome TcmppClient::DisableTeamDomain(const DisableTeamDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTeamDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTeamDomainResponse rsp = DisableTeamDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTeamDomainOutcome(rsp);
        else
            return DisableTeamDomainOutcome(o.GetError());
    }
    else
    {
        return DisableTeamDomainOutcome(outcome.GetError());
    }
}

void TcmppClient::DisableTeamDomainAsync(const DisableTeamDomainRequest& request, const DisableTeamDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableTeamDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::DisableTeamDomainOutcomeCallable TcmppClient::DisableTeamDomainCallable(const DisableTeamDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableTeamDomainOutcome()>>(
        [this, request]()
        {
            return this->DisableTeamDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyApplicationOutcome TcmppClient::ModifyApplication(const ModifyApplicationRequest &request)
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

void TcmppClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyApplicationOutcomeCallable TcmppClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
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

TcmppClient::ModifyApplicationAppKeyOutcome TcmppClient::ModifyApplicationAppKey(const ModifyApplicationAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationAppKeyResponse rsp = ModifyApplicationAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationAppKeyOutcome(rsp);
        else
            return ModifyApplicationAppKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationAppKeyOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyApplicationAppKeyAsync(const ModifyApplicationAppKeyRequest& request, const ModifyApplicationAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationAppKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyApplicationAppKeyOutcomeCallable TcmppClient::ModifyApplicationAppKeyCallable(const ModifyApplicationAppKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationAppKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationAppKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyApplicationAppUrlOutcome TcmppClient::ModifyApplicationAppUrl(const ModifyApplicationAppUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationAppUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationAppUrlResponse rsp = ModifyApplicationAppUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationAppUrlOutcome(rsp);
        else
            return ModifyApplicationAppUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationAppUrlOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyApplicationAppUrlAsync(const ModifyApplicationAppUrlRequest& request, const ModifyApplicationAppUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationAppUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyApplicationAppUrlOutcomeCallable TcmppClient::ModifyApplicationAppUrlCallable(const ModifyApplicationAppUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationAppUrlOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationAppUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyDomainOutcome TcmppClient::ModifyDomain(const ModifyDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainResponse rsp = ModifyDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOutcome(rsp);
        else
            return ModifyDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyDomainAsync(const ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyDomainOutcomeCallable TcmppClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyGlobalDomainOutcome TcmppClient::ModifyGlobalDomain(const ModifyGlobalDomainRequest &request)
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

void TcmppClient::ModifyGlobalDomainAsync(const ModifyGlobalDomainRequest& request, const ModifyGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyGlobalDomainOutcomeCallable TcmppClient::ModifyGlobalDomainCallable(const ModifyGlobalDomainRequest &request)
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

TcmppClient::ModifyMNPOutcome TcmppClient::ModifyMNP(const ModifyMNPRequest &request)
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

void TcmppClient::ModifyMNPAsync(const ModifyMNPRequest& request, const ModifyMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMNP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyMNPOutcomeCallable TcmppClient::ModifyMNPCallable(const ModifyMNPRequest &request)
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

TcmppClient::ModifyMNPStatusOfflineOutcome TcmppClient::ModifyMNPStatusOffline(const ModifyMNPStatusOfflineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMNPStatusOffline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMNPStatusOfflineResponse rsp = ModifyMNPStatusOfflineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMNPStatusOfflineOutcome(rsp);
        else
            return ModifyMNPStatusOfflineOutcome(o.GetError());
    }
    else
    {
        return ModifyMNPStatusOfflineOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyMNPStatusOfflineAsync(const ModifyMNPStatusOfflineRequest& request, const ModifyMNPStatusOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMNPStatusOffline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyMNPStatusOfflineOutcomeCallable TcmppClient::ModifyMNPStatusOfflineCallable(const ModifyMNPStatusOfflineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMNPStatusOfflineOutcome()>>(
        [this, request]()
        {
            return this->ModifyMNPStatusOffline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyMNPVersionPreviewOutcome TcmppClient::ModifyMNPVersionPreview(const ModifyMNPVersionPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMNPVersionPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMNPVersionPreviewResponse rsp = ModifyMNPVersionPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMNPVersionPreviewOutcome(rsp);
        else
            return ModifyMNPVersionPreviewOutcome(o.GetError());
    }
    else
    {
        return ModifyMNPVersionPreviewOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyMNPVersionPreviewAsync(const ModifyMNPVersionPreviewRequest& request, const ModifyMNPVersionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMNPVersionPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyMNPVersionPreviewOutcomeCallable TcmppClient::ModifyMNPVersionPreviewCallable(const ModifyMNPVersionPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMNPVersionPreviewOutcome()>>(
        [this, request]()
        {
            return this->ModifyMNPVersionPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyOnlineVersionOutcome TcmppClient::ModifyOnlineVersion(const ModifyOnlineVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOnlineVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOnlineVersionResponse rsp = ModifyOnlineVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOnlineVersionOutcome(rsp);
        else
            return ModifyOnlineVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyOnlineVersionOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyOnlineVersionAsync(const ModifyOnlineVersionRequest& request, const ModifyOnlineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOnlineVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyOnlineVersionOutcomeCallable TcmppClient::ModifyOnlineVersionCallable(const ModifyOnlineVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOnlineVersionOutcome()>>(
        [this, request]()
        {
            return this->ModifyOnlineVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyPlatformAuditStatusOutcome TcmppClient::ModifyPlatformAuditStatus(const ModifyPlatformAuditStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPlatformAuditStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPlatformAuditStatusResponse rsp = ModifyPlatformAuditStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPlatformAuditStatusOutcome(rsp);
        else
            return ModifyPlatformAuditStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPlatformAuditStatusOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyPlatformAuditStatusAsync(const ModifyPlatformAuditStatusRequest& request, const ModifyPlatformAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPlatformAuditStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyPlatformAuditStatusOutcomeCallable TcmppClient::ModifyPlatformAuditStatusCallable(const ModifyPlatformAuditStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPlatformAuditStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyPlatformAuditStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifySensitiveAPIAuditStatusOutcome TcmppClient::ModifySensitiveAPIAuditStatus(const ModifySensitiveAPIAuditStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySensitiveAPIAuditStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySensitiveAPIAuditStatusResponse rsp = ModifySensitiveAPIAuditStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySensitiveAPIAuditStatusOutcome(rsp);
        else
            return ModifySensitiveAPIAuditStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySensitiveAPIAuditStatusOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifySensitiveAPIAuditStatusAsync(const ModifySensitiveAPIAuditStatusRequest& request, const ModifySensitiveAPIAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySensitiveAPIAuditStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifySensitiveAPIAuditStatusOutcomeCallable TcmppClient::ModifySensitiveAPIAuditStatusCallable(const ModifySensitiveAPIAuditStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySensitiveAPIAuditStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySensitiveAPIAuditStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmppClient::ModifyTeamOutcome TcmppClient::ModifyTeam(const ModifyTeamRequest &request)
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

void TcmppClient::ModifyTeamAsync(const ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyTeamOutcomeCallable TcmppClient::ModifyTeamCallable(const ModifyTeamRequest &request)
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

TcmppClient::ModifyTeamMemberOutcome TcmppClient::ModifyTeamMember(const ModifyTeamMemberRequest &request)
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

void TcmppClient::ModifyTeamMemberAsync(const ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTeamMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyTeamMemberOutcomeCallable TcmppClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
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

TcmppClient::ModifyUserOutcome TcmppClient::ModifyUser(const ModifyUserRequest &request)
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

void TcmppClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyUserOutcomeCallable TcmppClient::ModifyUserCallable(const ModifyUserRequest &request)
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

TcmppClient::ModifyUserPasswordOutcome TcmppClient::ModifyUserPassword(const ModifyUserPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPasswordResponse rsp = ModifyUserPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPasswordOutcome(rsp);
        else
            return ModifyUserPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyUserPasswordOutcome(outcome.GetError());
    }
}

void TcmppClient::ModifyUserPasswordAsync(const ModifyUserPasswordRequest& request, const ModifyUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmppClient::ModifyUserPasswordOutcomeCallable TcmppClient::ModifyUserPasswordCallable(const ModifyUserPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

