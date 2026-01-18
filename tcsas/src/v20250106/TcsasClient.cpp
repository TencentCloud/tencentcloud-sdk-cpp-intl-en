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
    const string ENDPOINT = "tcsas.intl.tencentcloudapi.com";
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
    using Req = const AddTeamMemberRequest&;
    using Resp = AddTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "AddTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::AddTeamMemberOutcomeCallable TcsasClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTeamMemberOutcome>>();
    AddTeamMemberAsync(
    request,
    [prom](
        const TcsasClient*,
        const AddTeamMemberRequest&,
        AddTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ConfigureMNPPreviewRequest&;
    using Resp = ConfigureMNPPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureMNPPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ConfigureMNPPreviewOutcomeCallable TcsasClient::ConfigureMNPPreviewCallable(const ConfigureMNPPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureMNPPreviewOutcome>>();
    ConfigureMNPPreviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const ConfigureMNPPreviewRequest&,
        ConfigureMNPPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApplicationRequest&;
    using Resp = CreateApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateApplicationOutcomeCallable TcsasClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::CreateApplicationConfigOutcome TcsasClient::CreateApplicationConfig(const CreateApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationConfigResponse rsp = CreateApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationConfigOutcome(rsp);
        else
            return CreateApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationConfigOutcome(outcome.GetError());
    }
}

void TcsasClient::CreateApplicationConfigAsync(const CreateApplicationConfigRequest& request, const CreateApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationConfigRequest&;
    using Resp = CreateApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateApplicationConfigOutcomeCallable TcsasClient::CreateApplicationConfigCallable(const CreateApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationConfigOutcome>>();
    CreateApplicationConfigAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateApplicationConfigRequest&,
        CreateApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApplicationSensitiveAPIRequest&;
    using Resp = CreateApplicationSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateApplicationSensitiveAPIOutcomeCallable TcsasClient::CreateApplicationSensitiveAPICallable(const CreateApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationSensitiveAPIOutcome>>();
    CreateApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateApplicationSensitiveAPIRequest&,
        CreateApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateGlobalDomainACLRequest&;
    using Resp = CreateGlobalDomainACLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalDomainACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateGlobalDomainACLOutcomeCallable TcsasClient::CreateGlobalDomainACLCallable(const CreateGlobalDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalDomainACLOutcome>>();
    CreateGlobalDomainACLAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateGlobalDomainACLRequest&,
        CreateGlobalDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPRequest&;
    using Resp = CreateMNPResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateMNPOutcomeCallable TcsasClient::CreateMNPCallable(const CreateMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPOutcome>>();
    CreateMNPAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateMNPRequest&,
        CreateMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPApprovalRequest&;
    using Resp = CreateMNPApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNPApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateMNPApprovalOutcomeCallable TcsasClient::CreateMNPApprovalCallable(const CreateMNPApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPApprovalOutcome>>();
    CreateMNPApprovalAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateMNPApprovalRequest&,
        CreateMNPApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPDomainACLRequest&;
    using Resp = CreateMNPDomainACLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNPDomainACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateMNPDomainACLOutcomeCallable TcsasClient::CreateMNPDomainACLCallable(const CreateMNPDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPDomainACLOutcome>>();
    CreateMNPDomainACLAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateMNPDomainACLRequest&,
        CreateMNPDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPSensitiveAPIPermissionApprovalRequest&;
    using Resp = CreateMNPSensitiveAPIPermissionApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNPSensitiveAPIPermissionApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::CreateMNPSensitiveAPIPermissionApprovalCallable(const CreateMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPSensitiveAPIPermissionApprovalOutcome>>();
    CreateMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateMNPSensitiveAPIPermissionApprovalRequest&,
        CreateMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPVersionRequest&;
    using Resp = CreateMNPVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNPVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateMNPVersionOutcomeCallable TcsasClient::CreateMNPVersionCallable(const CreateMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPVersionOutcome>>();
    CreateMNPVersionAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateMNPVersionRequest&,
        CreateMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePresetKeyRequest&;
    using Resp = CreatePresetKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePresetKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreatePresetKeyOutcomeCallable TcsasClient::CreatePresetKeyCallable(const CreatePresetKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePresetKeyOutcome>>();
    CreatePresetKeyAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreatePresetKeyRequest&,
        CreatePresetKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTeamRequest&;
    using Resp = CreateTeamResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateTeamOutcomeCallable TcsasClient::CreateTeamCallable(const CreateTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTeamOutcome>>();
    CreateTeamAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateTeamRequest&,
        CreateTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::CreateUserOutcomeCallable TcsasClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const TcsasClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApplicationRequest&;
    using Resp = DeleteApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteApplicationOutcomeCallable TcsasClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationOutcome>>();
    DeleteApplicationAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteApplicationRequest&,
        DeleteApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApplicationSensitiveAPIRequest&;
    using Resp = DeleteApplicationSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteApplicationSensitiveAPIOutcomeCallable TcsasClient::DeleteApplicationSensitiveAPICallable(const DeleteApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationSensitiveAPIOutcome>>();
    DeleteApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteApplicationSensitiveAPIRequest&,
        DeleteApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGlobalDomainRequest&;
    using Resp = DeleteGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteGlobalDomainOutcomeCallable TcsasClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalDomainOutcome>>();
    DeleteGlobalDomainAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteGlobalDomainRequest&,
        DeleteGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteMNPRequest&;
    using Resp = DeleteMNPResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteMNPOutcomeCallable TcsasClient::DeleteMNPCallable(const DeleteMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMNPOutcome>>();
    DeleteMNPAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteMNPRequest&,
        DeleteMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTeamRequest&;
    using Resp = DeleteTeamResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteTeamOutcomeCallable TcsasClient::DeleteTeamCallable(const DeleteTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamOutcome>>();
    DeleteTeamAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteTeamRequest&,
        DeleteTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTeamMemberRequest&;
    using Resp = DeleteTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteTeamMemberOutcomeCallable TcsasClient::DeleteTeamMemberCallable(const DeleteTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamMemberOutcome>>();
    DeleteTeamMemberAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteTeamMemberRequest&,
        DeleteTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DeleteUserOutcomeCallable TcsasClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const TcsasClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeAPPDataDetailLineChartOutcome TcsasClient::DescribeAPPDataDetailLineChart(const DescribeAPPDataDetailLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPPDataDetailLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPPDataDetailLineChartResponse rsp = DescribeAPPDataDetailLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPPDataDetailLineChartOutcome(rsp);
        else
            return DescribeAPPDataDetailLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeAPPDataDetailLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeAPPDataDetailLineChartAsync(const DescribeAPPDataDetailLineChartRequest& request, const DescribeAPPDataDetailLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPPDataDetailLineChartRequest&;
    using Resp = DescribeAPPDataDetailLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPPDataDetailLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeAPPDataDetailLineChartOutcomeCallable TcsasClient::DescribeAPPDataDetailLineChartCallable(const DescribeAPPDataDetailLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPPDataDetailLineChartOutcome>>();
    DescribeAPPDataDetailLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeAPPDataDetailLineChartRequest&,
        DescribeAPPDataDetailLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeAPPDataOverviewOutcome TcsasClient::DescribeAPPDataOverview(const DescribeAPPDataOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPPDataOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPPDataOverviewResponse rsp = DescribeAPPDataOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPPDataOverviewOutcome(rsp);
        else
            return DescribeAPPDataOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAPPDataOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeAPPDataOverviewAsync(const DescribeAPPDataOverviewRequest& request, const DescribeAPPDataOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPPDataOverviewRequest&;
    using Resp = DescribeAPPDataOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPPDataOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeAPPDataOverviewOutcomeCallable TcsasClient::DescribeAPPDataOverviewCallable(const DescribeAPPDataOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPPDataOverviewOutcome>>();
    DescribeAPPDataOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeAPPDataOverviewRequest&,
        DescribeAPPDataOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeAdvertisingLineChartOutcome TcsasClient::DescribeAdvertisingLineChart(const DescribeAdvertisingLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdvertisingLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdvertisingLineChartResponse rsp = DescribeAdvertisingLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdvertisingLineChartOutcome(rsp);
        else
            return DescribeAdvertisingLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeAdvertisingLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeAdvertisingLineChartAsync(const DescribeAdvertisingLineChartRequest& request, const DescribeAdvertisingLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAdvertisingLineChartRequest&;
    using Resp = DescribeAdvertisingLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdvertisingLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeAdvertisingLineChartOutcomeCallable TcsasClient::DescribeAdvertisingLineChartCallable(const DescribeAdvertisingLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdvertisingLineChartOutcome>>();
    DescribeAdvertisingLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeAdvertisingLineChartRequest&,
        DescribeAdvertisingLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeAdvertisingOverviewOutcome TcsasClient::DescribeAdvertisingOverview(const DescribeAdvertisingOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdvertisingOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdvertisingOverviewResponse rsp = DescribeAdvertisingOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdvertisingOverviewOutcome(rsp);
        else
            return DescribeAdvertisingOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAdvertisingOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeAdvertisingOverviewAsync(const DescribeAdvertisingOverviewRequest& request, const DescribeAdvertisingOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAdvertisingOverviewRequest&;
    using Resp = DescribeAdvertisingOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdvertisingOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeAdvertisingOverviewOutcomeCallable TcsasClient::DescribeAdvertisingOverviewCallable(const DescribeAdvertisingOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdvertisingOverviewOutcome>>();
    DescribeAdvertisingOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeAdvertisingOverviewRequest&,
        DescribeAdvertisingOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationRequest&;
    using Resp = DescribeApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeApplicationOutcomeCallable TcsasClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationOutcome>>();
    DescribeApplicationAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeApplicationRequest&,
        DescribeApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationConfigFileRequest&;
    using Resp = DescribeApplicationConfigFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationConfigFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeApplicationConfigFileOutcomeCallable TcsasClient::DescribeApplicationConfigFileCallable(const DescribeApplicationConfigFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationConfigFileOutcome>>();
    DescribeApplicationConfigFileAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeApplicationConfigFileRequest&,
        DescribeApplicationConfigFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeApplicationConfigInfosOutcome TcsasClient::DescribeApplicationConfigInfos(const DescribeApplicationConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationConfigInfosResponse rsp = DescribeApplicationConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationConfigInfosOutcome(rsp);
        else
            return DescribeApplicationConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationConfigInfosOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeApplicationConfigInfosAsync(const DescribeApplicationConfigInfosRequest& request, const DescribeApplicationConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationConfigInfosRequest&;
    using Resp = DescribeApplicationConfigInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationConfigInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeApplicationConfigInfosOutcomeCallable TcsasClient::DescribeApplicationConfigInfosCallable(const DescribeApplicationConfigInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationConfigInfosOutcome>>();
    DescribeApplicationConfigInfosAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeApplicationConfigInfosRequest&,
        DescribeApplicationConfigInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationListRequest&;
    using Resp = DescribeApplicationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeApplicationListOutcomeCallable TcsasClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationListOutcome>>();
    DescribeApplicationListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeApplicationListRequest&,
        DescribeApplicationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationSensitiveAPIListRequest&;
    using Resp = DescribeApplicationSensitiveAPIListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationSensitiveAPIList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeApplicationSensitiveAPIListOutcomeCallable TcsasClient::DescribeApplicationSensitiveAPIListCallable(const DescribeApplicationSensitiveAPIListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationSensitiveAPIListOutcome>>();
    DescribeApplicationSensitiveAPIListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeApplicationSensitiveAPIListRequest&,
        DescribeApplicationSensitiveAPIListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGlobalDomainACLRequest&;
    using Resp = DescribeGlobalDomainACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalDomainACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeGlobalDomainACLOutcomeCallable TcsasClient::DescribeGlobalDomainACLCallable(const DescribeGlobalDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalDomainACLOutcome>>();
    DescribeGlobalDomainACLAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeGlobalDomainACLRequest&,
        DescribeGlobalDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeGlobalOverviewDataSummaryOutcome TcsasClient::DescribeGlobalOverviewDataSummary(const DescribeGlobalOverviewDataSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalOverviewDataSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalOverviewDataSummaryResponse rsp = DescribeGlobalOverviewDataSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalOverviewDataSummaryOutcome(rsp);
        else
            return DescribeGlobalOverviewDataSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalOverviewDataSummaryOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeGlobalOverviewDataSummaryAsync(const DescribeGlobalOverviewDataSummaryRequest& request, const DescribeGlobalOverviewDataSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalOverviewDataSummaryRequest&;
    using Resp = DescribeGlobalOverviewDataSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalOverviewDataSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeGlobalOverviewDataSummaryOutcomeCallable TcsasClient::DescribeGlobalOverviewDataSummaryCallable(const DescribeGlobalOverviewDataSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalOverviewDataSummaryOutcome>>();
    DescribeGlobalOverviewDataSummaryAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeGlobalOverviewDataSummaryRequest&,
        DescribeGlobalOverviewDataSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeGlobalOverviewReportDetailOutcome TcsasClient::DescribeGlobalOverviewReportDetail(const DescribeGlobalOverviewReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalOverviewReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalOverviewReportDetailResponse rsp = DescribeGlobalOverviewReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalOverviewReportDetailOutcome(rsp);
        else
            return DescribeGlobalOverviewReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalOverviewReportDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeGlobalOverviewReportDetailAsync(const DescribeGlobalOverviewReportDetailRequest& request, const DescribeGlobalOverviewReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalOverviewReportDetailRequest&;
    using Resp = DescribeGlobalOverviewReportDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalOverviewReportDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeGlobalOverviewReportDetailOutcomeCallable TcsasClient::DescribeGlobalOverviewReportDetailCallable(const DescribeGlobalOverviewReportDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalOverviewReportDetailOutcome>>();
    DescribeGlobalOverviewReportDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeGlobalOverviewReportDetailRequest&,
        DescribeGlobalOverviewReportDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAccessAnalysisDetailOutcome TcsasClient::DescribeMNGAccessAnalysisDetail(const DescribeMNGAccessAnalysisDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAccessAnalysisDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAccessAnalysisDetailResponse rsp = DescribeMNGAccessAnalysisDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAccessAnalysisDetailOutcome(rsp);
        else
            return DescribeMNGAccessAnalysisDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAccessAnalysisDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAccessAnalysisDetailAsync(const DescribeMNGAccessAnalysisDetailRequest& request, const DescribeMNGAccessAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAccessAnalysisDetailRequest&;
    using Resp = DescribeMNGAccessAnalysisDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAccessAnalysisDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAccessAnalysisDetailOutcomeCallable TcsasClient::DescribeMNGAccessAnalysisDetailCallable(const DescribeMNGAccessAnalysisDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAccessAnalysisDetailOutcome>>();
    DescribeMNGAccessAnalysisDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAccessAnalysisDetailRequest&,
        DescribeMNGAccessAnalysisDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAccessAnalysisLineChartOutcome TcsasClient::DescribeMNGAccessAnalysisLineChart(const DescribeMNGAccessAnalysisLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAccessAnalysisLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAccessAnalysisLineChartResponse rsp = DescribeMNGAccessAnalysisLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAccessAnalysisLineChartOutcome(rsp);
        else
            return DescribeMNGAccessAnalysisLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAccessAnalysisLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAccessAnalysisLineChartAsync(const DescribeMNGAccessAnalysisLineChartRequest& request, const DescribeMNGAccessAnalysisLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAccessAnalysisLineChartRequest&;
    using Resp = DescribeMNGAccessAnalysisLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAccessAnalysisLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAccessAnalysisLineChartOutcomeCallable TcsasClient::DescribeMNGAccessAnalysisLineChartCallable(const DescribeMNGAccessAnalysisLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAccessAnalysisLineChartOutcome>>();
    DescribeMNGAccessAnalysisLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAccessAnalysisLineChartRequest&,
        DescribeMNGAccessAnalysisLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAccessAnalysisOverviewOutcome TcsasClient::DescribeMNGAccessAnalysisOverview(const DescribeMNGAccessAnalysisOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAccessAnalysisOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAccessAnalysisOverviewResponse rsp = DescribeMNGAccessAnalysisOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAccessAnalysisOverviewOutcome(rsp);
        else
            return DescribeMNGAccessAnalysisOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAccessAnalysisOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAccessAnalysisOverviewAsync(const DescribeMNGAccessAnalysisOverviewRequest& request, const DescribeMNGAccessAnalysisOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAccessAnalysisOverviewRequest&;
    using Resp = DescribeMNGAccessAnalysisOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAccessAnalysisOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAccessAnalysisOverviewOutcomeCallable TcsasClient::DescribeMNGAccessAnalysisOverviewCallable(const DescribeMNGAccessAnalysisOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAccessAnalysisOverviewOutcome>>();
    DescribeMNGAccessAnalysisOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAccessAnalysisOverviewRequest&,
        DescribeMNGAccessAnalysisOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGActiveUserRealTimeStatisticsOutcome TcsasClient::DescribeMNGActiveUserRealTimeStatistics(const DescribeMNGActiveUserRealTimeStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGActiveUserRealTimeStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGActiveUserRealTimeStatisticsResponse rsp = DescribeMNGActiveUserRealTimeStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGActiveUserRealTimeStatisticsOutcome(rsp);
        else
            return DescribeMNGActiveUserRealTimeStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGActiveUserRealTimeStatisticsOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGActiveUserRealTimeStatisticsAsync(const DescribeMNGActiveUserRealTimeStatisticsRequest& request, const DescribeMNGActiveUserRealTimeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGActiveUserRealTimeStatisticsRequest&;
    using Resp = DescribeMNGActiveUserRealTimeStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGActiveUserRealTimeStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGActiveUserRealTimeStatisticsOutcomeCallable TcsasClient::DescribeMNGActiveUserRealTimeStatisticsCallable(const DescribeMNGActiveUserRealTimeStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGActiveUserRealTimeStatisticsOutcome>>();
    DescribeMNGActiveUserRealTimeStatisticsAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGActiveUserRealTimeStatisticsRequest&,
        DescribeMNGActiveUserRealTimeStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAdvertisingDetailOutcome TcsasClient::DescribeMNGAdvertisingDetail(const DescribeMNGAdvertisingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAdvertisingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAdvertisingDetailResponse rsp = DescribeMNGAdvertisingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAdvertisingDetailOutcome(rsp);
        else
            return DescribeMNGAdvertisingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAdvertisingDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAdvertisingDetailAsync(const DescribeMNGAdvertisingDetailRequest& request, const DescribeMNGAdvertisingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAdvertisingDetailRequest&;
    using Resp = DescribeMNGAdvertisingDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAdvertisingDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAdvertisingDetailOutcomeCallable TcsasClient::DescribeMNGAdvertisingDetailCallable(const DescribeMNGAdvertisingDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAdvertisingDetailOutcome>>();
    DescribeMNGAdvertisingDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAdvertisingDetailRequest&,
        DescribeMNGAdvertisingDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAdvertisingLineChartOutcome TcsasClient::DescribeMNGAdvertisingLineChart(const DescribeMNGAdvertisingLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAdvertisingLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAdvertisingLineChartResponse rsp = DescribeMNGAdvertisingLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAdvertisingLineChartOutcome(rsp);
        else
            return DescribeMNGAdvertisingLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAdvertisingLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAdvertisingLineChartAsync(const DescribeMNGAdvertisingLineChartRequest& request, const DescribeMNGAdvertisingLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAdvertisingLineChartRequest&;
    using Resp = DescribeMNGAdvertisingLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAdvertisingLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAdvertisingLineChartOutcomeCallable TcsasClient::DescribeMNGAdvertisingLineChartCallable(const DescribeMNGAdvertisingLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAdvertisingLineChartOutcome>>();
    DescribeMNGAdvertisingLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAdvertisingLineChartRequest&,
        DescribeMNGAdvertisingLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGAdvertisingOverviewOutcome TcsasClient::DescribeMNGAdvertisingOverview(const DescribeMNGAdvertisingOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGAdvertisingOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGAdvertisingOverviewResponse rsp = DescribeMNGAdvertisingOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGAdvertisingOverviewOutcome(rsp);
        else
            return DescribeMNGAdvertisingOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGAdvertisingOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGAdvertisingOverviewAsync(const DescribeMNGAdvertisingOverviewRequest& request, const DescribeMNGAdvertisingOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGAdvertisingOverviewRequest&;
    using Resp = DescribeMNGAdvertisingOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGAdvertisingOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGAdvertisingOverviewOutcomeCallable TcsasClient::DescribeMNGAdvertisingOverviewCallable(const DescribeMNGAdvertisingOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGAdvertisingOverviewOutcome>>();
    DescribeMNGAdvertisingOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGAdvertisingOverviewRequest&,
        DescribeMNGAdvertisingOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGMAUDataDetailOutcome TcsasClient::DescribeMNGMAUDataDetail(const DescribeMNGMAUDataDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAUDataDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAUDataDetailResponse rsp = DescribeMNGMAUDataDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAUDataDetailOutcome(rsp);
        else
            return DescribeMNGMAUDataDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAUDataDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAUDataDetailAsync(const DescribeMNGMAUDataDetailRequest& request, const DescribeMNGMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAUDataDetailRequest&;
    using Resp = DescribeMNGMAUDataDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAUDataDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAUDataDetailOutcomeCallable TcsasClient::DescribeMNGMAUDataDetailCallable(const DescribeMNGMAUDataDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAUDataDetailOutcome>>();
    DescribeMNGMAUDataDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAUDataDetailRequest&,
        DescribeMNGMAUDataDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGMAULineChartOutcome TcsasClient::DescribeMNGMAULineChart(const DescribeMNGMAULineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAULineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAULineChartResponse rsp = DescribeMNGMAULineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAULineChartOutcome(rsp);
        else
            return DescribeMNGMAULineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAULineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAULineChartAsync(const DescribeMNGMAULineChartRequest& request, const DescribeMNGMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAULineChartRequest&;
    using Resp = DescribeMNGMAULineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAULineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAULineChartOutcomeCallable TcsasClient::DescribeMNGMAULineChartCallable(const DescribeMNGMAULineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAULineChartOutcome>>();
    DescribeMNGMAULineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAULineChartRequest&,
        DescribeMNGMAULineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardOutcome TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCard(const DescribeMNGMAUMonthlyComparisonMetricCardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAUMonthlyComparisonMetricCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAUMonthlyComparisonMetricCardResponse rsp = DescribeMNGMAUMonthlyComparisonMetricCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(rsp);
        else
            return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardAsync(const DescribeMNGMAUMonthlyComparisonMetricCardRequest& request, const DescribeMNGMAUMonthlyComparisonMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAUMonthlyComparisonMetricCardRequest&;
    using Resp = DescribeMNGMAUMonthlyComparisonMetricCardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAUMonthlyComparisonMetricCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardOutcomeCallable TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardCallable(const DescribeMNGMAUMonthlyComparisonMetricCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAUMonthlyComparisonMetricCardOutcome>>();
    DescribeMNGMAUMonthlyComparisonMetricCardAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAUMonthlyComparisonMetricCardRequest&,
        DescribeMNGMAUMonthlyComparisonMetricCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGPaymentLineChartOutcome TcsasClient::DescribeMNGPaymentLineChart(const DescribeMNGPaymentLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGPaymentLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGPaymentLineChartResponse rsp = DescribeMNGPaymentLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGPaymentLineChartOutcome(rsp);
        else
            return DescribeMNGPaymentLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGPaymentLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGPaymentLineChartAsync(const DescribeMNGPaymentLineChartRequest& request, const DescribeMNGPaymentLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGPaymentLineChartRequest&;
    using Resp = DescribeMNGPaymentLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGPaymentLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGPaymentLineChartOutcomeCallable TcsasClient::DescribeMNGPaymentLineChartCallable(const DescribeMNGPaymentLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGPaymentLineChartOutcome>>();
    DescribeMNGPaymentLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGPaymentLineChartRequest&,
        DescribeMNGPaymentLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGPaymentOverviewOutcome TcsasClient::DescribeMNGPaymentOverview(const DescribeMNGPaymentOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGPaymentOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGPaymentOverviewResponse rsp = DescribeMNGPaymentOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGPaymentOverviewOutcome(rsp);
        else
            return DescribeMNGPaymentOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGPaymentOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGPaymentOverviewAsync(const DescribeMNGPaymentOverviewRequest& request, const DescribeMNGPaymentOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGPaymentOverviewRequest&;
    using Resp = DescribeMNGPaymentOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGPaymentOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGPaymentOverviewOutcomeCallable TcsasClient::DescribeMNGPaymentOverviewCallable(const DescribeMNGPaymentOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGPaymentOverviewOutcome>>();
    DescribeMNGPaymentOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGPaymentOverviewRequest&,
        DescribeMNGPaymentOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGPaymentReportDetailOutcome TcsasClient::DescribeMNGPaymentReportDetail(const DescribeMNGPaymentReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGPaymentReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGPaymentReportDetailResponse rsp = DescribeMNGPaymentReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGPaymentReportDetailOutcome(rsp);
        else
            return DescribeMNGPaymentReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGPaymentReportDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGPaymentReportDetailAsync(const DescribeMNGPaymentReportDetailRequest& request, const DescribeMNGPaymentReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGPaymentReportDetailRequest&;
    using Resp = DescribeMNGPaymentReportDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGPaymentReportDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGPaymentReportDetailOutcomeCallable TcsasClient::DescribeMNGPaymentReportDetailCallable(const DescribeMNGPaymentReportDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGPaymentReportDetailOutcome>>();
    DescribeMNGPaymentReportDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGPaymentReportDetailRequest&,
        DescribeMNGPaymentReportDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGPaymentRetentionAnalysisOutcome TcsasClient::DescribeMNGPaymentRetentionAnalysis(const DescribeMNGPaymentRetentionAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGPaymentRetentionAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGPaymentRetentionAnalysisResponse rsp = DescribeMNGPaymentRetentionAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGPaymentRetentionAnalysisOutcome(rsp);
        else
            return DescribeMNGPaymentRetentionAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGPaymentRetentionAnalysisOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGPaymentRetentionAnalysisAsync(const DescribeMNGPaymentRetentionAnalysisRequest& request, const DescribeMNGPaymentRetentionAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGPaymentRetentionAnalysisRequest&;
    using Resp = DescribeMNGPaymentRetentionAnalysisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGPaymentRetentionAnalysis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGPaymentRetentionAnalysisOutcomeCallable TcsasClient::DescribeMNGPaymentRetentionAnalysisCallable(const DescribeMNGPaymentRetentionAnalysisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGPaymentRetentionAnalysisOutcome>>();
    DescribeMNGPaymentRetentionAnalysisAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGPaymentRetentionAnalysisRequest&,
        DescribeMNGPaymentRetentionAnalysisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGRetentionDataOutcome TcsasClient::DescribeMNGRetentionData(const DescribeMNGRetentionDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGRetentionData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGRetentionDataResponse rsp = DescribeMNGRetentionDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGRetentionDataOutcome(rsp);
        else
            return DescribeMNGRetentionDataOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGRetentionDataOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGRetentionDataAsync(const DescribeMNGRetentionDataRequest& request, const DescribeMNGRetentionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGRetentionDataRequest&;
    using Resp = DescribeMNGRetentionDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGRetentionData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGRetentionDataOutcomeCallable TcsasClient::DescribeMNGRetentionDataCallable(const DescribeMNGRetentionDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGRetentionDataOutcome>>();
    DescribeMNGRetentionDataAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGRetentionDataRequest&,
        DescribeMNGRetentionDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPRequest&;
    using Resp = DescribeMNPResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPOutcomeCallable TcsasClient::DescribeMNPCallable(const DescribeMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPOutcome>>();
    DescribeMNPAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPRequest&,
        DescribeMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPAccessAnalysisOverviewOutcome TcsasClient::DescribeMNPAccessAnalysisOverview(const DescribeMNPAccessAnalysisOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPAccessAnalysisOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPAccessAnalysisOverviewResponse rsp = DescribeMNPAccessAnalysisOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPAccessAnalysisOverviewOutcome(rsp);
        else
            return DescribeMNPAccessAnalysisOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPAccessAnalysisOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPAccessAnalysisOverviewAsync(const DescribeMNPAccessAnalysisOverviewRequest& request, const DescribeMNPAccessAnalysisOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPAccessAnalysisOverviewRequest&;
    using Resp = DescribeMNPAccessAnalysisOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPAccessAnalysisOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPAccessAnalysisOverviewOutcomeCallable TcsasClient::DescribeMNPAccessAnalysisOverviewCallable(const DescribeMNPAccessAnalysisOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPAccessAnalysisOverviewOutcome>>();
    DescribeMNPAccessAnalysisOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPAccessAnalysisOverviewRequest&,
        DescribeMNPAccessAnalysisOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPActiveUserRealTimeStatisticsOutcome TcsasClient::DescribeMNPActiveUserRealTimeStatistics(const DescribeMNPActiveUserRealTimeStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPActiveUserRealTimeStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPActiveUserRealTimeStatisticsResponse rsp = DescribeMNPActiveUserRealTimeStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPActiveUserRealTimeStatisticsOutcome(rsp);
        else
            return DescribeMNPActiveUserRealTimeStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPActiveUserRealTimeStatisticsOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPActiveUserRealTimeStatisticsAsync(const DescribeMNPActiveUserRealTimeStatisticsRequest& request, const DescribeMNPActiveUserRealTimeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPActiveUserRealTimeStatisticsRequest&;
    using Resp = DescribeMNPActiveUserRealTimeStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPActiveUserRealTimeStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPActiveUserRealTimeStatisticsOutcomeCallable TcsasClient::DescribeMNPActiveUserRealTimeStatisticsCallable(const DescribeMNPActiveUserRealTimeStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPActiveUserRealTimeStatisticsOutcome>>();
    DescribeMNPActiveUserRealTimeStatisticsAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPActiveUserRealTimeStatisticsRequest&,
        DescribeMNPActiveUserRealTimeStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPAdvertisingDetailOutcome TcsasClient::DescribeMNPAdvertisingDetail(const DescribeMNPAdvertisingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPAdvertisingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPAdvertisingDetailResponse rsp = DescribeMNPAdvertisingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPAdvertisingDetailOutcome(rsp);
        else
            return DescribeMNPAdvertisingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPAdvertisingDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPAdvertisingDetailAsync(const DescribeMNPAdvertisingDetailRequest& request, const DescribeMNPAdvertisingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPAdvertisingDetailRequest&;
    using Resp = DescribeMNPAdvertisingDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPAdvertisingDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPAdvertisingDetailOutcomeCallable TcsasClient::DescribeMNPAdvertisingDetailCallable(const DescribeMNPAdvertisingDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPAdvertisingDetailOutcome>>();
    DescribeMNPAdvertisingDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPAdvertisingDetailRequest&,
        DescribeMNPAdvertisingDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPAllStageVersionsRequest&;
    using Resp = DescribeMNPAllStageVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPAllStageVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPAllStageVersionsOutcomeCallable TcsasClient::DescribeMNPAllStageVersionsCallable(const DescribeMNPAllStageVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPAllStageVersionsOutcome>>();
    DescribeMNPAllStageVersionsAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPAllStageVersionsRequest&,
        DescribeMNPAllStageVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPApprovalListRequest&;
    using Resp = DescribeMNPApprovalListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPApprovalList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPApprovalListOutcomeCallable TcsasClient::DescribeMNPApprovalListCallable(const DescribeMNPApprovalListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPApprovalListOutcome>>();
    DescribeMNPApprovalListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPApprovalListRequest&,
        DescribeMNPApprovalListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPCategoryRequest&;
    using Resp = DescribeMNPCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPCategoryOutcomeCallable TcsasClient::DescribeMNPCategoryCallable(const DescribeMNPCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPCategoryOutcome>>();
    DescribeMNPCategoryAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPCategoryRequest&,
        DescribeMNPCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPDomainACLRequest&;
    using Resp = DescribeMNPDomainACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPDomainACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPDomainACLOutcomeCallable TcsasClient::DescribeMNPDomainACLCallable(const DescribeMNPDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPDomainACLOutcome>>();
    DescribeMNPDomainACLAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPDomainACLRequest&,
        DescribeMNPDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPListRequest&;
    using Resp = DescribeMNPListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPListOutcomeCallable TcsasClient::DescribeMNPListCallable(const DescribeMNPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPListOutcome>>();
    DescribeMNPListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPListRequest&,
        DescribeMNPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAUDataDetailOutcome TcsasClient::DescribeMNPMAUDataDetail(const DescribeMNPMAUDataDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAUDataDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAUDataDetailResponse rsp = DescribeMNPMAUDataDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAUDataDetailOutcome(rsp);
        else
            return DescribeMNPMAUDataDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAUDataDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAUDataDetailAsync(const DescribeMNPMAUDataDetailRequest& request, const DescribeMNPMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAUDataDetailRequest&;
    using Resp = DescribeMNPMAUDataDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAUDataDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAUDataDetailOutcomeCallable TcsasClient::DescribeMNPMAUDataDetailCallable(const DescribeMNPMAUDataDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAUDataDetailOutcome>>();
    DescribeMNPMAUDataDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAUDataDetailRequest&,
        DescribeMNPMAUDataDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAULineChartOutcome TcsasClient::DescribeMNPMAULineChart(const DescribeMNPMAULineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAULineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAULineChartResponse rsp = DescribeMNPMAULineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAULineChartOutcome(rsp);
        else
            return DescribeMNPMAULineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAULineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAULineChartAsync(const DescribeMNPMAULineChartRequest& request, const DescribeMNPMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAULineChartRequest&;
    using Resp = DescribeMNPMAULineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAULineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAULineChartOutcomeCallable TcsasClient::DescribeMNPMAULineChartCallable(const DescribeMNPMAULineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAULineChartOutcome>>();
    DescribeMNPMAULineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAULineChartRequest&,
        DescribeMNPMAULineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAUMetricCardOutcome TcsasClient::DescribeMNPMAUMetricCard(const DescribeMNPMAUMetricCardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAUMetricCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAUMetricCardResponse rsp = DescribeMNPMAUMetricCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAUMetricCardOutcome(rsp);
        else
            return DescribeMNPMAUMetricCardOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAUMetricCardOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAUMetricCardAsync(const DescribeMNPMAUMetricCardRequest& request, const DescribeMNPMAUMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAUMetricCardRequest&;
    using Resp = DescribeMNPMAUMetricCardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAUMetricCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAUMetricCardOutcomeCallable TcsasClient::DescribeMNPMAUMetricCardCallable(const DescribeMNPMAUMetricCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAUMetricCardOutcome>>();
    DescribeMNPMAUMetricCardAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAUMetricCardRequest&,
        DescribeMNPMAUMetricCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPOfflinePackageURLRequest&;
    using Resp = DescribeMNPOfflinePackageURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPOfflinePackageURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPOfflinePackageURLOutcomeCallable TcsasClient::DescribeMNPOfflinePackageURLCallable(const DescribeMNPOfflinePackageURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPOfflinePackageURLOutcome>>();
    DescribeMNPOfflinePackageURLAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPOfflinePackageURLRequest&,
        DescribeMNPOfflinePackageURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPPageAnalysisDetailOutcome TcsasClient::DescribeMNPPageAnalysisDetail(const DescribeMNPPageAnalysisDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPPageAnalysisDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPPageAnalysisDetailResponse rsp = DescribeMNPPageAnalysisDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPPageAnalysisDetailOutcome(rsp);
        else
            return DescribeMNPPageAnalysisDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPPageAnalysisDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPPageAnalysisDetailAsync(const DescribeMNPPageAnalysisDetailRequest& request, const DescribeMNPPageAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPPageAnalysisDetailRequest&;
    using Resp = DescribeMNPPageAnalysisDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPPageAnalysisDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPPageAnalysisDetailOutcomeCallable TcsasClient::DescribeMNPPageAnalysisDetailCallable(const DescribeMNPPageAnalysisDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPPageAnalysisDetailOutcome>>();
    DescribeMNPPageAnalysisDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPPageAnalysisDetailRequest&,
        DescribeMNPPageAnalysisDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPPreviewRequest&;
    using Resp = DescribeMNPPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPPreviewOutcomeCallable TcsasClient::DescribeMNPPreviewCallable(const DescribeMNPPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPPreviewOutcome>>();
    DescribeMNPPreviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPPreviewRequest&,
        DescribeMNPPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPReleasedVersionHistoryRequest&;
    using Resp = DescribeMNPReleasedVersionHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPReleasedVersionHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPReleasedVersionHistoryOutcomeCallable TcsasClient::DescribeMNPReleasedVersionHistoryCallable(const DescribeMNPReleasedVersionHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPReleasedVersionHistoryOutcome>>();
    DescribeMNPReleasedVersionHistoryAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPReleasedVersionHistoryRequest&,
        DescribeMNPReleasedVersionHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPReportDataLineChartOutcome TcsasClient::DescribeMNPReportDataLineChart(const DescribeMNPReportDataLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPReportDataLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPReportDataLineChartResponse rsp = DescribeMNPReportDataLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPReportDataLineChartOutcome(rsp);
        else
            return DescribeMNPReportDataLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPReportDataLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPReportDataLineChartAsync(const DescribeMNPReportDataLineChartRequest& request, const DescribeMNPReportDataLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPReportDataLineChartRequest&;
    using Resp = DescribeMNPReportDataLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPReportDataLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPReportDataLineChartOutcomeCallable TcsasClient::DescribeMNPReportDataLineChartCallable(const DescribeMNPReportDataLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPReportDataLineChartOutcome>>();
    DescribeMNPReportDataLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPReportDataLineChartRequest&,
        DescribeMNPReportDataLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPReportDetailOutcome TcsasClient::DescribeMNPReportDetail(const DescribeMNPReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPReportDetailResponse rsp = DescribeMNPReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPReportDetailOutcome(rsp);
        else
            return DescribeMNPReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPReportDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPReportDetailAsync(const DescribeMNPReportDetailRequest& request, const DescribeMNPReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPReportDetailRequest&;
    using Resp = DescribeMNPReportDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPReportDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPReportDetailOutcomeCallable TcsasClient::DescribeMNPReportDetailCallable(const DescribeMNPReportDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPReportDetailOutcome>>();
    DescribeMNPReportDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPReportDetailRequest&,
        DescribeMNPReportDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPRetentionDataOutcome TcsasClient::DescribeMNPRetentionData(const DescribeMNPRetentionDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPRetentionData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPRetentionDataResponse rsp = DescribeMNPRetentionDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPRetentionDataOutcome(rsp);
        else
            return DescribeMNPRetentionDataOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPRetentionDataOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPRetentionDataAsync(const DescribeMNPRetentionDataRequest& request, const DescribeMNPRetentionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPRetentionDataRequest&;
    using Resp = DescribeMNPRetentionDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPRetentionData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPRetentionDataOutcomeCallable TcsasClient::DescribeMNPRetentionDataCallable(const DescribeMNPRetentionDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPRetentionDataOutcome>>();
    DescribeMNPRetentionDataAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPRetentionDataRequest&,
        DescribeMNPRetentionDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPSensitiveAPIPermissionApprovalRequest&;
    using Resp = DescribeMNPSensitiveAPIPermissionApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPSensitiveAPIPermissionApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalCallable(const DescribeMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionApprovalOutcome>>();
    DescribeMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPSensitiveAPIPermissionApprovalRequest&,
        DescribeMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPSensitiveAPIPermissionApprovalListRequest&;
    using Resp = DescribeMNPSensitiveAPIPermissionApprovalListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPSensitiveAPIPermissionApprovalList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionApprovalListCallable(const DescribeMNPSensitiveAPIPermissionApprovalListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionApprovalListOutcome>>();
    DescribeMNPSensitiveAPIPermissionApprovalListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPSensitiveAPIPermissionApprovalListRequest&,
        DescribeMNPSensitiveAPIPermissionApprovalListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPSensitiveAPIPermissionListRequest&;
    using Resp = DescribeMNPSensitiveAPIPermissionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPSensitiveAPIPermissionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPSensitiveAPIPermissionListOutcomeCallable TcsasClient::DescribeMNPSensitiveAPIPermissionListCallable(const DescribeMNPSensitiveAPIPermissionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionListOutcome>>();
    DescribeMNPSensitiveAPIPermissionListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPSensitiveAPIPermissionListRequest&,
        DescribeMNPSensitiveAPIPermissionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPVersionRequest&;
    using Resp = DescribeMNPVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPVersionOutcomeCallable TcsasClient::DescribeMNPVersionCallable(const DescribeMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPVersionOutcome>>();
    DescribeMNPVersionAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPVersionRequest&,
        DescribeMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribePaymentDataDetailOutcome TcsasClient::DescribePaymentDataDetail(const DescribePaymentDataDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePaymentDataDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePaymentDataDetailResponse rsp = DescribePaymentDataDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePaymentDataDetailOutcome(rsp);
        else
            return DescribePaymentDataDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePaymentDataDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribePaymentDataDetailAsync(const DescribePaymentDataDetailRequest& request, const DescribePaymentDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePaymentDataDetailRequest&;
    using Resp = DescribePaymentDataDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePaymentDataDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribePaymentDataDetailOutcomeCallable TcsasClient::DescribePaymentDataDetailCallable(const DescribePaymentDataDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePaymentDataDetailOutcome>>();
    DescribePaymentDataDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribePaymentDataDetailRequest&,
        DescribePaymentDataDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribePaymentDataLineChartOutcome TcsasClient::DescribePaymentDataLineChart(const DescribePaymentDataLineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePaymentDataLineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePaymentDataLineChartResponse rsp = DescribePaymentDataLineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePaymentDataLineChartOutcome(rsp);
        else
            return DescribePaymentDataLineChartOutcome(o.GetError());
    }
    else
    {
        return DescribePaymentDataLineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribePaymentDataLineChartAsync(const DescribePaymentDataLineChartRequest& request, const DescribePaymentDataLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePaymentDataLineChartRequest&;
    using Resp = DescribePaymentDataLineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePaymentDataLineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribePaymentDataLineChartOutcomeCallable TcsasClient::DescribePaymentDataLineChartCallable(const DescribePaymentDataLineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePaymentDataLineChartOutcome>>();
    DescribePaymentDataLineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribePaymentDataLineChartRequest&,
        DescribePaymentDataLineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribePaymentDataOverviewOutcome TcsasClient::DescribePaymentDataOverview(const DescribePaymentDataOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePaymentDataOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePaymentDataOverviewResponse rsp = DescribePaymentDataOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePaymentDataOverviewOutcome(rsp);
        else
            return DescribePaymentDataOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePaymentDataOverviewOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribePaymentDataOverviewAsync(const DescribePaymentDataOverviewRequest& request, const DescribePaymentDataOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePaymentDataOverviewRequest&;
    using Resp = DescribePaymentDataOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePaymentDataOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribePaymentDataOverviewOutcomeCallable TcsasClient::DescribePaymentDataOverviewCallable(const DescribePaymentDataOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePaymentDataOverviewOutcome>>();
    DescribePaymentDataOverviewAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribePaymentDataOverviewRequest&,
        DescribePaymentDataOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRoleListRequest&;
    using Resp = DescribeRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeRoleListOutcomeCallable TcsasClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleListOutcome>>();
    DescribeRoleListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeRoleListRequest&,
        DescribeRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamRequest&;
    using Resp = DescribeTeamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeTeamOutcomeCallable TcsasClient::DescribeTeamCallable(const DescribeTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamOutcome>>();
    DescribeTeamAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeTeamRequest&,
        DescribeTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamListRequest&;
    using Resp = DescribeTeamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeTeamListOutcomeCallable TcsasClient::DescribeTeamListCallable(const DescribeTeamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamListOutcome>>();
    DescribeTeamListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeTeamListRequest&,
        DescribeTeamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamMemberListRequest&;
    using Resp = DescribeTeamMemberListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamMemberList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeTeamMemberListOutcomeCallable TcsasClient::DescribeTeamMemberListCallable(const DescribeTeamMemberListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamMemberListOutcome>>();
    DescribeTeamMemberListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeTeamMemberListRequest&,
        DescribeTeamMemberListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTempSecret4UploadFile2CosRequest&;
    using Resp = DescribeTempSecret4UploadFile2CosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTempSecret4UploadFile2Cos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeTempSecret4UploadFile2CosOutcomeCallable TcsasClient::DescribeTempSecret4UploadFile2CosCallable(const DescribeTempSecret4UploadFile2CosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTempSecret4UploadFile2CosOutcome>>();
    DescribeTempSecret4UploadFile2CosAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeTempSecret4UploadFile2CosRequest&,
        DescribeTempSecret4UploadFile2CosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserRequest&;
    using Resp = DescribeUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeUserOutcomeCallable TcsasClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOutcome>>();
    DescribeUserAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeUserRequest&,
        DescribeUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserListRequest&;
    using Resp = DescribeUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeUserListOutcomeCallable TcsasClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableApplicationSensitiveAPIRequest&;
    using Resp = DisableApplicationSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "DisableApplicationSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DisableApplicationSensitiveAPIOutcomeCallable TcsasClient::DisableApplicationSensitiveAPICallable(const DisableApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableApplicationSensitiveAPIOutcome>>();
    DisableApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcsasClient*,
        const DisableApplicationSensitiveAPIRequest&,
        DisableApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableApplicationSensitiveAPIRequest&;
    using Resp = EnableApplicationSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "EnableApplicationSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::EnableApplicationSensitiveAPIOutcomeCallable TcsasClient::EnableApplicationSensitiveAPICallable(const EnableApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableApplicationSensitiveAPIOutcome>>();
    EnableApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcsasClient*,
        const EnableApplicationSensitiveAPIRequest&,
        EnableApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyApplicationOutcomeCallable TcsasClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::ModifyApplicationConfigOutcome TcsasClient::ModifyApplicationConfig(const ModifyApplicationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationConfigResponse rsp = ModifyApplicationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationConfigOutcome(rsp);
        else
            return ModifyApplicationConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationConfigOutcome(outcome.GetError());
    }
}

void TcsasClient::ModifyApplicationConfigAsync(const ModifyApplicationConfigRequest& request, const ModifyApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationConfigRequest&;
    using Resp = ModifyApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyApplicationConfigOutcomeCallable TcsasClient::ModifyApplicationConfigCallable(const ModifyApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationConfigOutcome>>();
    ModifyApplicationConfigAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyApplicationConfigRequest&,
        ModifyApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGlobalDomainRequest&;
    using Resp = ModifyGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyGlobalDomainOutcomeCallable TcsasClient::ModifyGlobalDomainCallable(const ModifyGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalDomainOutcome>>();
    ModifyGlobalDomainAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyGlobalDomainRequest&,
        ModifyGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMNPRequest&;
    using Resp = ModifyMNPResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyMNPOutcomeCallable TcsasClient::ModifyMNPCallable(const ModifyMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPOutcome>>();
    ModifyMNPAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyMNPRequest&,
        ModifyMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMNPDomainRequest&;
    using Resp = ModifyMNPDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMNPDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyMNPDomainOutcomeCallable TcsasClient::ModifyMNPDomainCallable(const ModifyMNPDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPDomainOutcome>>();
    ModifyMNPDomainAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyMNPDomainRequest&,
        ModifyMNPDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTeamRequest&;
    using Resp = ModifyTeamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyTeamOutcomeCallable TcsasClient::ModifyTeamCallable(const ModifyTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamOutcome>>();
    ModifyTeamAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyTeamRequest&,
        ModifyTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTeamMemberRequest&;
    using Resp = ModifyTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyTeamMemberOutcomeCallable TcsasClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamMemberOutcome>>();
    ModifyTeamMemberAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyTeamMemberRequest&,
        ModifyTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ModifyUserOutcomeCallable TcsasClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const TcsasClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMNPApprovalRequest&;
    using Resp = ProcessMNPApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMNPApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ProcessMNPApprovalOutcomeCallable TcsasClient::ProcessMNPApprovalCallable(const ProcessMNPApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMNPApprovalOutcome>>();
    ProcessMNPApprovalAsync(
    request,
    [prom](
        const TcsasClient*,
        const ProcessMNPApprovalRequest&,
        ProcessMNPApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMNPSensitiveAPIPermissionApprovalRequest&;
    using Resp = ProcessMNPSensitiveAPIPermissionApprovalResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMNPSensitiveAPIPermissionApproval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable TcsasClient::ProcessMNPSensitiveAPIPermissionApprovalCallable(const ProcessMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMNPSensitiveAPIPermissionApprovalOutcome>>();
    ProcessMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcsasClient*,
        const ProcessMNPSensitiveAPIPermissionApprovalRequest&,
        ProcessMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReleaseMNPVersionRequest&;
    using Resp = ReleaseMNPVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseMNPVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::ReleaseMNPVersionOutcomeCallable TcsasClient::ReleaseMNPVersionCallable(const ReleaseMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseMNPVersionOutcome>>();
    ReleaseMNPVersionAsync(
    request,
    [prom](
        const TcsasClient*,
        const ReleaseMNPVersionRequest&,
        ReleaseMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveMNPRequest&;
    using Resp = RemoveMNPResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::RemoveMNPOutcomeCallable TcsasClient::RemoveMNPCallable(const RemoveMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMNPOutcome>>();
    RemoveMNPAsync(
    request,
    [prom](
        const TcsasClient*,
        const RemoveMNPRequest&,
        RemoveMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RollbackMNPVersionRequest&;
    using Resp = RollbackMNPVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackMNPVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::RollbackMNPVersionOutcomeCallable TcsasClient::RollbackMNPVersionCallable(const RollbackMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackMNPVersionOutcome>>();
    RollbackMNPVersionAsync(
    request,
    [prom](
        const TcsasClient*,
        const RollbackMNPVersionRequest&,
        RollbackMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

