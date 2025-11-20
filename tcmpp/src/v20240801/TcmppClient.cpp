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
    const string ENDPOINT = "tcmpp.intl.tencentcloudapi.com";
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
    using Req = const AddTeamMemberRequest&;
    using Resp = AddTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "AddTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::AddTeamMemberOutcomeCallable TcmppClient::AddTeamMemberCallable(const AddTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTeamMemberOutcome>>();
    AddTeamMemberAsync(
    request,
    [prom](
        const TcmppClient*,
        const AddTeamMemberRequest&,
        AddTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckGlobalDomainRequest&;
    using Resp = CheckGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CheckGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CheckGlobalDomainOutcomeCallable TcmppClient::CheckGlobalDomainCallable(const CheckGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckGlobalDomainOutcome>>();
    CheckGlobalDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const CheckGlobalDomainRequest&,
        CheckGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::ConfigureMNPPreviewOutcome TcmppClient::ConfigureMNPPreview(const ConfigureMNPPreviewRequest &request)
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

void TcmppClient::ConfigureMNPPreviewAsync(const ConfigureMNPPreviewRequest& request, const ConfigureMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::ConfigureMNPPreviewOutcomeCallable TcmppClient::ConfigureMNPPreviewCallable(const ConfigureMNPPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureMNPPreviewOutcome>>();
    ConfigureMNPPreviewAsync(
    request,
    [prom](
        const TcmppClient*,
        const ConfigureMNPPreviewRequest&,
        ConfigureMNPPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApplicationRequest&;
    using Resp = CreateApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateApplicationOutcomeCallable TcmppClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateApplicationSensitiveAPIOutcome TcmppClient::CreateApplicationSensitiveAPI(const CreateApplicationSensitiveAPIRequest &request)
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

void TcmppClient::CreateApplicationSensitiveAPIAsync(const CreateApplicationSensitiveAPIRequest& request, const CreateApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateApplicationSensitiveAPIOutcomeCallable TcmppClient::CreateApplicationSensitiveAPICallable(const CreateApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationSensitiveAPIOutcome>>();
    CreateApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateApplicationSensitiveAPIRequest&,
        CreateApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateConsoleMNPVersionCompileTaskRequest&;
    using Resp = CreateConsoleMNPVersionCompileTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsoleMNPVersionCompileTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateConsoleMNPVersionCompileTaskOutcomeCallable TcmppClient::CreateConsoleMNPVersionCompileTaskCallable(const CreateConsoleMNPVersionCompileTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsoleMNPVersionCompileTaskOutcome>>();
    CreateConsoleMNPVersionCompileTaskAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateConsoleMNPVersionCompileTaskRequest&,
        CreateConsoleMNPVersionCompileTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateDomainOutcomeCallable TcmppClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateGlobalDomainRequest&;
    using Resp = CreateGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateGlobalDomainOutcomeCallable TcmppClient::CreateGlobalDomainCallable(const CreateGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalDomainOutcome>>();
    CreateGlobalDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateGlobalDomainRequest&,
        CreateGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateGlobalDomainACLOutcome TcmppClient::CreateGlobalDomainACL(const CreateGlobalDomainACLRequest &request)
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

void TcmppClient::CreateGlobalDomainACLAsync(const CreateGlobalDomainACLRequest& request, const CreateGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateGlobalDomainACLOutcomeCallable TcmppClient::CreateGlobalDomainACLCallable(const CreateGlobalDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalDomainACLOutcome>>();
    CreateGlobalDomainACLAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateGlobalDomainACLRequest&,
        CreateGlobalDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMNPRequest&;
    using Resp = CreateMNPResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateMNPOutcomeCallable TcmppClient::CreateMNPCallable(const CreateMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPOutcome>>();
    CreateMNPAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateMNPRequest&,
        CreateMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateMNPApprovalOutcome TcmppClient::CreateMNPApproval(const CreateMNPApprovalRequest &request)
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

void TcmppClient::CreateMNPApprovalAsync(const CreateMNPApprovalRequest& request, const CreateMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateMNPApprovalOutcomeCallable TcmppClient::CreateMNPApprovalCallable(const CreateMNPApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPApprovalOutcome>>();
    CreateMNPApprovalAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateMNPApprovalRequest&,
        CreateMNPApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateMNPDomainACLOutcome TcmppClient::CreateMNPDomainACL(const CreateMNPDomainACLRequest &request)
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

void TcmppClient::CreateMNPDomainACLAsync(const CreateMNPDomainACLRequest& request, const CreateMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateMNPDomainACLOutcomeCallable TcmppClient::CreateMNPDomainACLCallable(const CreateMNPDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPDomainACLOutcome>>();
    CreateMNPDomainACLAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateMNPDomainACLRequest&,
        CreateMNPDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateMNPSensitiveAPIPermissionApprovalOutcome TcmppClient::CreateMNPSensitiveAPIPermissionApproval(const CreateMNPSensitiveAPIPermissionApprovalRequest &request)
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

void TcmppClient::CreateMNPSensitiveAPIPermissionApprovalAsync(const CreateMNPSensitiveAPIPermissionApprovalRequest& request, const CreateMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable TcmppClient::CreateMNPSensitiveAPIPermissionApprovalCallable(const CreateMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPSensitiveAPIPermissionApprovalOutcome>>();
    CreateMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateMNPSensitiveAPIPermissionApprovalRequest&,
        CreateMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::CreateMNPVersionOutcome TcmppClient::CreateMNPVersion(const CreateMNPVersionRequest &request)
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

void TcmppClient::CreateMNPVersionAsync(const CreateMNPVersionRequest& request, const CreateMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::CreateMNPVersionOutcomeCallable TcmppClient::CreateMNPVersionCallable(const CreateMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMNPVersionOutcome>>();
    CreateMNPVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateMNPVersionRequest&,
        CreateMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOnlineApplyRequest&;
    using Resp = CreateOnlineApplyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOnlineApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateOnlineApplyOutcomeCallable TcmppClient::CreateOnlineApplyCallable(const CreateOnlineApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOnlineApplyOutcome>>();
    CreateOnlineApplyAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateOnlineApplyRequest&,
        CreateOnlineApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePlatformAuditRequest&;
    using Resp = CreatePlatformAuditResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePlatformAudit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreatePlatformAuditOutcomeCallable TcmppClient::CreatePlatformAuditCallable(const CreatePlatformAuditRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePlatformAuditOutcome>>();
    CreatePlatformAuditAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreatePlatformAuditRequest&,
        CreatePlatformAuditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePresetKeyRequest&;
    using Resp = CreatePresetKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePresetKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreatePresetKeyOutcomeCallable TcmppClient::CreatePresetKeyCallable(const CreatePresetKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePresetKeyOutcome>>();
    CreatePresetKeyAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreatePresetKeyRequest&,
        CreatePresetKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSensitiveAPIRequest&;
    using Resp = CreateSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateSensitiveAPIOutcomeCallable TcmppClient::CreateSensitiveAPICallable(const CreateSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSensitiveAPIOutcome>>();
    CreateSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateSensitiveAPIRequest&,
        CreateSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSensitiveApiApplyRequest&;
    using Resp = CreateSensitiveApiApplyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSensitiveApiApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateSensitiveApiApplyOutcomeCallable TcmppClient::CreateSensitiveApiApplyCallable(const CreateSensitiveApiApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSensitiveApiApplyOutcome>>();
    CreateSensitiveApiApplyAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateSensitiveApiApplyRequest&,
        CreateSensitiveApiApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTeamRequest&;
    using Resp = CreateTeamResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateTeamOutcomeCallable TcmppClient::CreateTeamCallable(const CreateTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTeamOutcome>>();
    CreateTeamAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateTeamRequest&,
        CreateTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTeamMemberRequest&;
    using Resp = CreateTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateTeamMemberOutcomeCallable TcmppClient::CreateTeamMemberCallable(const CreateTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTeamMemberOutcome>>();
    CreateTeamMemberAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateTeamMemberRequest&,
        CreateTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::CreateUserOutcomeCallable TcmppClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const TcmppClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApplicationRequest&;
    using Resp = DeleteApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteApplicationOutcomeCallable TcmppClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationOutcome>>();
    DeleteApplicationAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteApplicationRequest&,
        DeleteApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DeleteApplicationSensitiveAPIOutcome TcmppClient::DeleteApplicationSensitiveAPI(const DeleteApplicationSensitiveAPIRequest &request)
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

void TcmppClient::DeleteApplicationSensitiveAPIAsync(const DeleteApplicationSensitiveAPIRequest& request, const DeleteApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DeleteApplicationSensitiveAPIOutcomeCallable TcmppClient::DeleteApplicationSensitiveAPICallable(const DeleteApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationSensitiveAPIOutcome>>();
    DeleteApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteApplicationSensitiveAPIRequest&,
        DeleteApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGlobalDomainRequest&;
    using Resp = DeleteGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteGlobalDomainOutcomeCallable TcmppClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalDomainOutcome>>();
    DeleteGlobalDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteGlobalDomainRequest&,
        DeleteGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteMNPRequest&;
    using Resp = DeleteMNPResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteMNPOutcomeCallable TcmppClient::DeleteMNPCallable(const DeleteMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMNPOutcome>>();
    DeleteMNPAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteMNPRequest&,
        DeleteMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSensitiveAPIRequest&;
    using Resp = DeleteSensitiveAPIResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSensitiveAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteSensitiveAPIOutcomeCallable TcmppClient::DeleteSensitiveAPICallable(const DeleteSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSensitiveAPIOutcome>>();
    DeleteSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteSensitiveAPIRequest&,
        DeleteSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTeamRequest&;
    using Resp = DeleteTeamResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteTeamOutcomeCallable TcmppClient::DeleteTeamCallable(const DeleteTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamOutcome>>();
    DeleteTeamAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteTeamRequest&,
        DeleteTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTeamMemberRequest&;
    using Resp = DeleteTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteTeamMemberOutcomeCallable TcmppClient::DeleteTeamMemberCallable(const DeleteTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTeamMemberOutcome>>();
    DeleteTeamMemberAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteTeamMemberRequest&,
        DeleteTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DeleteUserOutcomeCallable TcmppClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const TcmppClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationRequest&;
    using Resp = DescribeApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeApplicationOutcomeCallable TcmppClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationOutcome>>();
    DescribeApplicationAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationRequest&,
        DescribeApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationConfigRequest&;
    using Resp = DescribeApplicationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeApplicationConfigOutcomeCallable TcmppClient::DescribeApplicationConfigCallable(const DescribeApplicationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationConfigOutcome>>();
    DescribeApplicationConfigAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationConfigRequest&,
        DescribeApplicationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeApplicationConfigFileOutcome TcmppClient::DescribeApplicationConfigFile(const DescribeApplicationConfigFileRequest &request)
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

void TcmppClient::DescribeApplicationConfigFileAsync(const DescribeApplicationConfigFileRequest& request, const DescribeApplicationConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeApplicationConfigFileOutcomeCallable TcmppClient::DescribeApplicationConfigFileCallable(const DescribeApplicationConfigFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationConfigFileOutcome>>();
    DescribeApplicationConfigFileAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationConfigFileRequest&,
        DescribeApplicationConfigFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationListRequest&;
    using Resp = DescribeApplicationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeApplicationListOutcomeCallable TcmppClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationListOutcome>>();
    DescribeApplicationListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationListRequest&,
        DescribeApplicationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationMNPVersionAuditListRequest&;
    using Resp = DescribeApplicationMNPVersionAuditListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationMNPVersionAuditList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeApplicationMNPVersionAuditListOutcomeCallable TcmppClient::DescribeApplicationMNPVersionAuditListCallable(const DescribeApplicationMNPVersionAuditListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationMNPVersionAuditListOutcome>>();
    DescribeApplicationMNPVersionAuditListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationMNPVersionAuditListRequest&,
        DescribeApplicationMNPVersionAuditListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeApplicationSensitiveAPIListOutcome TcmppClient::DescribeApplicationSensitiveAPIList(const DescribeApplicationSensitiveAPIListRequest &request)
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

void TcmppClient::DescribeApplicationSensitiveAPIListAsync(const DescribeApplicationSensitiveAPIListRequest& request, const DescribeApplicationSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeApplicationSensitiveAPIListOutcomeCallable TcmppClient::DescribeApplicationSensitiveAPIListCallable(const DescribeApplicationSensitiveAPIListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationSensitiveAPIListOutcome>>();
    DescribeApplicationSensitiveAPIListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeApplicationSensitiveAPIListRequest&,
        DescribeApplicationSensitiveAPIListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeConsoleMNPVersionCompileTaskRequest&;
    using Resp = DescribeConsoleMNPVersionCompileTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsoleMNPVersionCompileTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeConsoleMNPVersionCompileTaskOutcomeCallable TcmppClient::DescribeConsoleMNPVersionCompileTaskCallable(const DescribeConsoleMNPVersionCompileTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsoleMNPVersionCompileTaskOutcome>>();
    DescribeConsoleMNPVersionCompileTaskAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeConsoleMNPVersionCompileTaskRequest&,
        DescribeConsoleMNPVersionCompileTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDomainInfoRequest&;
    using Resp = DescribeDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeDomainInfoOutcomeCallable TcmppClient::DescribeDomainInfoCallable(const DescribeDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainInfoOutcome>>();
    DescribeDomainInfoAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeDomainInfoRequest&,
        DescribeDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDomainTeamListRequest&;
    using Resp = DescribeDomainTeamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainTeamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeDomainTeamListOutcomeCallable TcmppClient::DescribeDomainTeamListCallable(const DescribeDomainTeamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainTeamListOutcome>>();
    DescribeDomainTeamListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeDomainTeamListRequest&,
        DescribeDomainTeamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeGlobalDomainACLOutcome TcmppClient::DescribeGlobalDomainACL(const DescribeGlobalDomainACLRequest &request)
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

void TcmppClient::DescribeGlobalDomainACLAsync(const DescribeGlobalDomainACLRequest& request, const DescribeGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeGlobalDomainACLOutcomeCallable TcmppClient::DescribeGlobalDomainACLCallable(const DescribeGlobalDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalDomainACLOutcome>>();
    DescribeGlobalDomainACLAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeGlobalDomainACLRequest&,
        DescribeGlobalDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGlobalDomainListRequest&;
    using Resp = DescribeGlobalDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeGlobalDomainListOutcomeCallable TcmppClient::DescribeGlobalDomainListCallable(const DescribeGlobalDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalDomainListOutcome>>();
    DescribeGlobalDomainListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeGlobalDomainListRequest&,
        DescribeGlobalDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPOutcome TcmppClient::DescribeMNP(const DescribeMNPRequest &request)
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

void TcmppClient::DescribeMNPAsync(const DescribeMNPRequest& request, const DescribeMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPOutcomeCallable TcmppClient::DescribeMNPCallable(const DescribeMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPOutcome>>();
    DescribeMNPAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPRequest&,
        DescribeMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPAllStageVersionsOutcome TcmppClient::DescribeMNPAllStageVersions(const DescribeMNPAllStageVersionsRequest &request)
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

void TcmppClient::DescribeMNPAllStageVersionsAsync(const DescribeMNPAllStageVersionsRequest& request, const DescribeMNPAllStageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPAllStageVersionsOutcomeCallable TcmppClient::DescribeMNPAllStageVersionsCallable(const DescribeMNPAllStageVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPAllStageVersionsOutcome>>();
    DescribeMNPAllStageVersionsAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPAllStageVersionsRequest&,
        DescribeMNPAllStageVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPApprovalListOutcome TcmppClient::DescribeMNPApprovalList(const DescribeMNPApprovalListRequest &request)
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

void TcmppClient::DescribeMNPApprovalListAsync(const DescribeMNPApprovalListRequest& request, const DescribeMNPApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPApprovalListOutcomeCallable TcmppClient::DescribeMNPApprovalListCallable(const DescribeMNPApprovalListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPApprovalListOutcome>>();
    DescribeMNPApprovalListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPApprovalListRequest&,
        DescribeMNPApprovalListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPBoardRequest&;
    using Resp = DescribeMNPBoardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPBoard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPBoardOutcomeCallable TcmppClient::DescribeMNPBoardCallable(const DescribeMNPBoardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPBoardOutcome>>();
    DescribeMNPBoardAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPBoardRequest&,
        DescribeMNPBoardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPCategoryOutcome TcmppClient::DescribeMNPCategory(const DescribeMNPCategoryRequest &request)
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

void TcmppClient::DescribeMNPCategoryAsync(const DescribeMNPCategoryRequest& request, const DescribeMNPCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPCategoryOutcomeCallable TcmppClient::DescribeMNPCategoryCallable(const DescribeMNPCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPCategoryOutcome>>();
    DescribeMNPCategoryAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPCategoryRequest&,
        DescribeMNPCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPDetailRequest&;
    using Resp = DescribeMNPDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPDetailOutcomeCallable TcmppClient::DescribeMNPDetailCallable(const DescribeMNPDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPDetailOutcome>>();
    DescribeMNPDetailAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPDetailRequest&,
        DescribeMNPDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPDomainACLOutcome TcmppClient::DescribeMNPDomainACL(const DescribeMNPDomainACLRequest &request)
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

void TcmppClient::DescribeMNPDomainACLAsync(const DescribeMNPDomainACLRequest& request, const DescribeMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPDomainACLOutcomeCallable TcmppClient::DescribeMNPDomainACLCallable(const DescribeMNPDomainACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPDomainACLOutcome>>();
    DescribeMNPDomainACLAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPDomainACLRequest&,
        DescribeMNPDomainACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPListOutcome TcmppClient::DescribeMNPList(const DescribeMNPListRequest &request)
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

void TcmppClient::DescribeMNPListAsync(const DescribeMNPListRequest& request, const DescribeMNPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPListOutcomeCallable TcmppClient::DescribeMNPListCallable(const DescribeMNPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPListOutcome>>();
    DescribeMNPListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPListRequest&,
        DescribeMNPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPManagerDetailRequest&;
    using Resp = DescribeMNPManagerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPManagerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPManagerDetailOutcomeCallable TcmppClient::DescribeMNPManagerDetailCallable(const DescribeMNPManagerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPManagerDetailOutcome>>();
    DescribeMNPManagerDetailAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPManagerDetailRequest&,
        DescribeMNPManagerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPManagerListRequest&;
    using Resp = DescribeMNPManagerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPManagerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPManagerListOutcomeCallable TcmppClient::DescribeMNPManagerListCallable(const DescribeMNPManagerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPManagerListOutcome>>();
    DescribeMNPManagerListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPManagerListRequest&,
        DescribeMNPManagerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPOfflinePackageURLOutcome TcmppClient::DescribeMNPOfflinePackageURL(const DescribeMNPOfflinePackageURLRequest &request)
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

void TcmppClient::DescribeMNPOfflinePackageURLAsync(const DescribeMNPOfflinePackageURLRequest& request, const DescribeMNPOfflinePackageURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPOfflinePackageURLOutcomeCallable TcmppClient::DescribeMNPOfflinePackageURLCallable(const DescribeMNPOfflinePackageURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPOfflinePackageURLOutcome>>();
    DescribeMNPOfflinePackageURLAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPOfflinePackageURLRequest&,
        DescribeMNPOfflinePackageURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPPreviewOutcome TcmppClient::DescribeMNPPreview(const DescribeMNPPreviewRequest &request)
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

void TcmppClient::DescribeMNPPreviewAsync(const DescribeMNPPreviewRequest& request, const DescribeMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPPreviewOutcomeCallable TcmppClient::DescribeMNPPreviewCallable(const DescribeMNPPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPPreviewOutcome>>();
    DescribeMNPPreviewAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPPreviewRequest&,
        DescribeMNPPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPPrivacyRequest&;
    using Resp = DescribeMNPPrivacyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPPrivacy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPPrivacyOutcomeCallable TcmppClient::DescribeMNPPrivacyCallable(const DescribeMNPPrivacyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPPrivacyOutcome>>();
    DescribeMNPPrivacyAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPPrivacyRequest&,
        DescribeMNPPrivacyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPReleasedVersionHistoryOutcome TcmppClient::DescribeMNPReleasedVersionHistory(const DescribeMNPReleasedVersionHistoryRequest &request)
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

void TcmppClient::DescribeMNPReleasedVersionHistoryAsync(const DescribeMNPReleasedVersionHistoryRequest& request, const DescribeMNPReleasedVersionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPReleasedVersionHistoryOutcomeCallable TcmppClient::DescribeMNPReleasedVersionHistoryCallable(const DescribeMNPReleasedVersionHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPReleasedVersionHistoryOutcome>>();
    DescribeMNPReleasedVersionHistoryAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPReleasedVersionHistoryRequest&,
        DescribeMNPReleasedVersionHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalOutcome TcmppClient::DescribeMNPSensitiveAPIPermissionApproval(const DescribeMNPSensitiveAPIPermissionApprovalRequest &request)
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

void TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalAsync(const DescribeMNPSensitiveAPIPermissionApprovalRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalCallable(const DescribeMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionApprovalOutcome>>();
    DescribeMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPSensitiveAPIPermissionApprovalRequest&,
        DescribeMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalListOutcome TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalList(const DescribeMNPSensitiveAPIPermissionApprovalListRequest &request)
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

void TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalListAsync(const DescribeMNPSensitiveAPIPermissionApprovalListRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable TcmppClient::DescribeMNPSensitiveAPIPermissionApprovalListCallable(const DescribeMNPSensitiveAPIPermissionApprovalListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionApprovalListOutcome>>();
    DescribeMNPSensitiveAPIPermissionApprovalListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPSensitiveAPIPermissionApprovalListRequest&,
        DescribeMNPSensitiveAPIPermissionApprovalListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPSensitiveAPIPermissionListOutcome TcmppClient::DescribeMNPSensitiveAPIPermissionList(const DescribeMNPSensitiveAPIPermissionListRequest &request)
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

void TcmppClient::DescribeMNPSensitiveAPIPermissionListAsync(const DescribeMNPSensitiveAPIPermissionListRequest& request, const DescribeMNPSensitiveAPIPermissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPSensitiveAPIPermissionListOutcomeCallable TcmppClient::DescribeMNPSensitiveAPIPermissionListCallable(const DescribeMNPSensitiveAPIPermissionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPSensitiveAPIPermissionListOutcome>>();
    DescribeMNPSensitiveAPIPermissionListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPSensitiveAPIPermissionListRequest&,
        DescribeMNPSensitiveAPIPermissionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPTypeRequest&;
    using Resp = DescribeMNPTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPTypeOutcomeCallable TcmppClient::DescribeMNPTypeCallable(const DescribeMNPTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPTypeOutcome>>();
    DescribeMNPTypeAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPTypeRequest&,
        DescribeMNPTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeMNPVersionOutcome TcmppClient::DescribeMNPVersion(const DescribeMNPVersionRequest &request)
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

void TcmppClient::DescribeMNPVersionAsync(const DescribeMNPVersionRequest& request, const DescribeMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeMNPVersionOutcomeCallable TcmppClient::DescribeMNPVersionCallable(const DescribeMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPVersionOutcome>>();
    DescribeMNPVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPVersionRequest&,
        DescribeMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMNPVersionPreviewRequest&;
    using Resp = DescribeMNPVersionPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPVersionPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeMNPVersionPreviewOutcomeCallable TcmppClient::DescribeMNPVersionPreviewCallable(const DescribeMNPVersionPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPVersionPreviewOutcome>>();
    DescribeMNPVersionPreviewAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeMNPVersionPreviewRequest&,
        DescribeMNPVersionPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOfflineMNPPackageRequest&;
    using Resp = DescribeOfflineMNPPackageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOfflineMNPPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeOfflineMNPPackageOutcomeCallable TcmppClient::DescribeOfflineMNPPackageCallable(const DescribeOfflineMNPPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOfflineMNPPackageOutcome>>();
    DescribeOfflineMNPPackageAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeOfflineMNPPackageRequest&,
        DescribeOfflineMNPPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOnlineVersionRequest&;
    using Resp = DescribeOnlineVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeOnlineVersionOutcomeCallable TcmppClient::DescribeOnlineVersionCallable(const DescribeOnlineVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineVersionOutcome>>();
    DescribeOnlineVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeOnlineVersionRequest&,
        DescribeOnlineVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRoleDetailRequest&;
    using Resp = DescribeRoleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeRoleDetailOutcomeCallable TcmppClient::DescribeRoleDetailCallable(const DescribeRoleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleDetailOutcome>>();
    DescribeRoleDetailAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeRoleDetailRequest&,
        DescribeRoleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRoleListRequest&;
    using Resp = DescribeRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeRoleListOutcomeCallable TcmppClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleListOutcome>>();
    DescribeRoleListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeRoleListRequest&,
        DescribeRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSensitiveAPIAuditListRequest&;
    using Resp = DescribeSensitiveAPIAuditListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveAPIAuditList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSensitiveAPIAuditListOutcomeCallable TcmppClient::DescribeSensitiveAPIAuditListCallable(const DescribeSensitiveAPIAuditListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveAPIAuditListOutcome>>();
    DescribeSensitiveAPIAuditListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSensitiveAPIAuditListRequest&,
        DescribeSensitiveAPIAuditListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSensitiveAPIListRequest&;
    using Resp = DescribeSensitiveAPIListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveAPIList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSensitiveAPIListOutcomeCallable TcmppClient::DescribeSensitiveAPIListCallable(const DescribeSensitiveAPIListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveAPIListOutcome>>();
    DescribeSensitiveAPIListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSensitiveAPIListRequest&,
        DescribeSensitiveAPIListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSensitiveApiApplyDetailRequest&;
    using Resp = DescribeSensitiveApiApplyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveApiApplyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSensitiveApiApplyDetailOutcomeCallable TcmppClient::DescribeSensitiveApiApplyDetailCallable(const DescribeSensitiveApiApplyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveApiApplyDetailOutcome>>();
    DescribeSensitiveApiApplyDetailAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSensitiveApiApplyDetailRequest&,
        DescribeSensitiveApiApplyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSensitiveApiAuthListRequest&;
    using Resp = DescribeSensitiveApiAuthListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveApiAuthList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSensitiveApiAuthListOutcomeCallable TcmppClient::DescribeSensitiveApiAuthListCallable(const DescribeSensitiveApiAuthListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveApiAuthListOutcome>>();
    DescribeSensitiveApiAuthListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSensitiveApiAuthListRequest&,
        DescribeSensitiveApiAuthListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSimpleApplicationInfoListRequest&;
    using Resp = DescribeSimpleApplicationInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleApplicationInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSimpleApplicationInfoListOutcomeCallable TcmppClient::DescribeSimpleApplicationInfoListCallable(const DescribeSimpleApplicationInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleApplicationInfoListOutcome>>();
    DescribeSimpleApplicationInfoListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSimpleApplicationInfoListRequest&,
        DescribeSimpleApplicationInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSimpleTeamListRequest&;
    using Resp = DescribeSimpleTeamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleTeamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeSimpleTeamListOutcomeCallable TcmppClient::DescribeSimpleTeamListCallable(const DescribeSimpleTeamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleTeamListOutcome>>();
    DescribeSimpleTeamListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeSimpleTeamListRequest&,
        DescribeSimpleTeamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamRequest&;
    using Resp = DescribeTeamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTeamOutcomeCallable TcmppClient::DescribeTeamCallable(const DescribeTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamOutcome>>();
    DescribeTeamAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTeamRequest&,
        DescribeTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamDomainListRequest&;
    using Resp = DescribeTeamDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTeamDomainListOutcomeCallable TcmppClient::DescribeTeamDomainListCallable(const DescribeTeamDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamDomainListOutcome>>();
    DescribeTeamDomainListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTeamDomainListRequest&,
        DescribeTeamDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamListRequest&;
    using Resp = DescribeTeamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTeamListOutcomeCallable TcmppClient::DescribeTeamListCallable(const DescribeTeamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamListOutcome>>();
    DescribeTeamListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTeamListRequest&,
        DescribeTeamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamMemberListRequest&;
    using Resp = DescribeTeamMemberListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamMemberList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTeamMemberListOutcomeCallable TcmppClient::DescribeTeamMemberListCallable(const DescribeTeamMemberListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamMemberListOutcome>>();
    DescribeTeamMemberListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTeamMemberListRequest&,
        DescribeTeamMemberListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTeamMembersRequest&;
    using Resp = DescribeTeamMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTeamMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTeamMembersOutcomeCallable TcmppClient::DescribeTeamMembersCallable(const DescribeTeamMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTeamMembersOutcome>>();
    DescribeTeamMembersAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTeamMembersRequest&,
        DescribeTeamMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTempSecret4UploadFile2CosRequest&;
    using Resp = DescribeTempSecret4UploadFile2CosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTempSecret4UploadFile2Cos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeTempSecret4UploadFile2CosOutcomeCallable TcmppClient::DescribeTempSecret4UploadFile2CosCallable(const DescribeTempSecret4UploadFile2CosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTempSecret4UploadFile2CosOutcome>>();
    DescribeTempSecret4UploadFile2CosAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeTempSecret4UploadFile2CosRequest&,
        DescribeTempSecret4UploadFile2CosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DescribeUserOutcome TcmppClient::DescribeUser(const DescribeUserRequest &request)
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

void TcmppClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DescribeUserOutcomeCallable TcmppClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOutcome>>();
    DescribeUserAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeUserRequest&,
        DescribeUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserDetailRequest&;
    using Resp = DescribeUserDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeUserDetailOutcomeCallable TcmppClient::DescribeUserDetailCallable(const DescribeUserDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDetailOutcome>>();
    DescribeUserDetailAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeUserDetailRequest&,
        DescribeUserDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserListRequest&;
    using Resp = DescribeUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DescribeUserListOutcomeCallable TcmppClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const TcmppClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::DisableApplicationSensitiveAPIOutcome TcmppClient::DisableApplicationSensitiveAPI(const DisableApplicationSensitiveAPIRequest &request)
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

void TcmppClient::DisableApplicationSensitiveAPIAsync(const DisableApplicationSensitiveAPIRequest& request, const DisableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::DisableApplicationSensitiveAPIOutcomeCallable TcmppClient::DisableApplicationSensitiveAPICallable(const DisableApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableApplicationSensitiveAPIOutcome>>();
    DisableApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const DisableApplicationSensitiveAPIRequest&,
        DisableApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableTeamDomainRequest&;
    using Resp = DisableTeamDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DisableTeamDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::DisableTeamDomainOutcomeCallable TcmppClient::DisableTeamDomainCallable(const DisableTeamDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableTeamDomainOutcome>>();
    DisableTeamDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const DisableTeamDomainRequest&,
        DisableTeamDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::EnableApplicationSensitiveAPIOutcome TcmppClient::EnableApplicationSensitiveAPI(const EnableApplicationSensitiveAPIRequest &request)
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

void TcmppClient::EnableApplicationSensitiveAPIAsync(const EnableApplicationSensitiveAPIRequest& request, const EnableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::EnableApplicationSensitiveAPIOutcomeCallable TcmppClient::EnableApplicationSensitiveAPICallable(const EnableApplicationSensitiveAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableApplicationSensitiveAPIOutcome>>();
    EnableApplicationSensitiveAPIAsync(
    request,
    [prom](
        const TcmppClient*,
        const EnableApplicationSensitiveAPIRequest&,
        EnableApplicationSensitiveAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyApplicationOutcomeCallable TcmppClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationAppKeyRequest&;
    using Resp = ModifyApplicationAppKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationAppKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyApplicationAppKeyOutcomeCallable TcmppClient::ModifyApplicationAppKeyCallable(const ModifyApplicationAppKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationAppKeyOutcome>>();
    ModifyApplicationAppKeyAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyApplicationAppKeyRequest&,
        ModifyApplicationAppKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationAppUrlRequest&;
    using Resp = ModifyApplicationAppUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationAppUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyApplicationAppUrlOutcomeCallable TcmppClient::ModifyApplicationAppUrlCallable(const ModifyApplicationAppUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationAppUrlOutcome>>();
    ModifyApplicationAppUrlAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyApplicationAppUrlRequest&,
        ModifyApplicationAppUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDomainRequest&;
    using Resp = ModifyDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyDomainOutcomeCallable TcmppClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOutcome>>();
    ModifyDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyDomainRequest&,
        ModifyDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGlobalDomainRequest&;
    using Resp = ModifyGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyGlobalDomainOutcomeCallable TcmppClient::ModifyGlobalDomainCallable(const ModifyGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalDomainOutcome>>();
    ModifyGlobalDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyGlobalDomainRequest&,
        ModifyGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMNPRequest&;
    using Resp = ModifyMNPResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMNP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyMNPOutcomeCallable TcmppClient::ModifyMNPCallable(const ModifyMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPOutcome>>();
    ModifyMNPAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyMNPRequest&,
        ModifyMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::ModifyMNPDomainOutcome TcmppClient::ModifyMNPDomain(const ModifyMNPDomainRequest &request)
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

void TcmppClient::ModifyMNPDomainAsync(const ModifyMNPDomainRequest& request, const ModifyMNPDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::ModifyMNPDomainOutcomeCallable TcmppClient::ModifyMNPDomainCallable(const ModifyMNPDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPDomainOutcome>>();
    ModifyMNPDomainAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyMNPDomainRequest&,
        ModifyMNPDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMNPStatusOfflineRequest&;
    using Resp = ModifyMNPStatusOfflineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMNPStatusOffline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyMNPStatusOfflineOutcomeCallable TcmppClient::ModifyMNPStatusOfflineCallable(const ModifyMNPStatusOfflineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPStatusOfflineOutcome>>();
    ModifyMNPStatusOfflineAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyMNPStatusOfflineRequest&,
        ModifyMNPStatusOfflineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMNPVersionPreviewRequest&;
    using Resp = ModifyMNPVersionPreviewResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMNPVersionPreview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyMNPVersionPreviewOutcomeCallable TcmppClient::ModifyMNPVersionPreviewCallable(const ModifyMNPVersionPreviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMNPVersionPreviewOutcome>>();
    ModifyMNPVersionPreviewAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyMNPVersionPreviewRequest&,
        ModifyMNPVersionPreviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyOnlineVersionRequest&;
    using Resp = ModifyOnlineVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOnlineVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyOnlineVersionOutcomeCallable TcmppClient::ModifyOnlineVersionCallable(const ModifyOnlineVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOnlineVersionOutcome>>();
    ModifyOnlineVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyOnlineVersionRequest&,
        ModifyOnlineVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPlatformAuditStatusRequest&;
    using Resp = ModifyPlatformAuditStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPlatformAuditStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyPlatformAuditStatusOutcomeCallable TcmppClient::ModifyPlatformAuditStatusCallable(const ModifyPlatformAuditStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPlatformAuditStatusOutcome>>();
    ModifyPlatformAuditStatusAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyPlatformAuditStatusRequest&,
        ModifyPlatformAuditStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySensitiveAPIAuditStatusRequest&;
    using Resp = ModifySensitiveAPIAuditStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySensitiveAPIAuditStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifySensitiveAPIAuditStatusOutcomeCallable TcmppClient::ModifySensitiveAPIAuditStatusCallable(const ModifySensitiveAPIAuditStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySensitiveAPIAuditStatusOutcome>>();
    ModifySensitiveAPIAuditStatusAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifySensitiveAPIAuditStatusRequest&,
        ModifySensitiveAPIAuditStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTeamRequest&;
    using Resp = ModifyTeamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyTeamOutcomeCallable TcmppClient::ModifyTeamCallable(const ModifyTeamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamOutcome>>();
    ModifyTeamAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyTeamRequest&,
        ModifyTeamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTeamMemberRequest&;
    using Resp = ModifyTeamMemberResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTeamMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyTeamMemberOutcomeCallable TcmppClient::ModifyTeamMemberCallable(const ModifyTeamMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTeamMemberOutcome>>();
    ModifyTeamMemberAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyTeamMemberRequest&,
        ModifyTeamMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyUserOutcomeCallable TcmppClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserPasswordRequest&;
    using Resp = ModifyUserPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmppClient::ModifyUserPasswordOutcomeCallable TcmppClient::ModifyUserPasswordCallable(const ModifyUserPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserPasswordOutcome>>();
    ModifyUserPasswordAsync(
    request,
    [prom](
        const TcmppClient*,
        const ModifyUserPasswordRequest&,
        ModifyUserPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::ProcessMNPApprovalOutcome TcmppClient::ProcessMNPApproval(const ProcessMNPApprovalRequest &request)
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

void TcmppClient::ProcessMNPApprovalAsync(const ProcessMNPApprovalRequest& request, const ProcessMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::ProcessMNPApprovalOutcomeCallable TcmppClient::ProcessMNPApprovalCallable(const ProcessMNPApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMNPApprovalOutcome>>();
    ProcessMNPApprovalAsync(
    request,
    [prom](
        const TcmppClient*,
        const ProcessMNPApprovalRequest&,
        ProcessMNPApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::ProcessMNPSensitiveAPIPermissionApprovalOutcome TcmppClient::ProcessMNPSensitiveAPIPermissionApproval(const ProcessMNPSensitiveAPIPermissionApprovalRequest &request)
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

void TcmppClient::ProcessMNPSensitiveAPIPermissionApprovalAsync(const ProcessMNPSensitiveAPIPermissionApprovalRequest& request, const ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable TcmppClient::ProcessMNPSensitiveAPIPermissionApprovalCallable(const ProcessMNPSensitiveAPIPermissionApprovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMNPSensitiveAPIPermissionApprovalOutcome>>();
    ProcessMNPSensitiveAPIPermissionApprovalAsync(
    request,
    [prom](
        const TcmppClient*,
        const ProcessMNPSensitiveAPIPermissionApprovalRequest&,
        ProcessMNPSensitiveAPIPermissionApprovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::ReleaseMNPVersionOutcome TcmppClient::ReleaseMNPVersion(const ReleaseMNPVersionRequest &request)
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

void TcmppClient::ReleaseMNPVersionAsync(const ReleaseMNPVersionRequest& request, const ReleaseMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::ReleaseMNPVersionOutcomeCallable TcmppClient::ReleaseMNPVersionCallable(const ReleaseMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseMNPVersionOutcome>>();
    ReleaseMNPVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const ReleaseMNPVersionRequest&,
        ReleaseMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::RemoveMNPOutcome TcmppClient::RemoveMNP(const RemoveMNPRequest &request)
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

void TcmppClient::RemoveMNPAsync(const RemoveMNPRequest& request, const RemoveMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::RemoveMNPOutcomeCallable TcmppClient::RemoveMNPCallable(const RemoveMNPRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMNPOutcome>>();
    RemoveMNPAsync(
    request,
    [prom](
        const TcmppClient*,
        const RemoveMNPRequest&,
        RemoveMNPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmppClient::RollbackMNPVersionOutcome TcmppClient::RollbackMNPVersion(const RollbackMNPVersionRequest &request)
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

void TcmppClient::RollbackMNPVersionAsync(const RollbackMNPVersionRequest& request, const RollbackMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcmppClient::RollbackMNPVersionOutcomeCallable TcmppClient::RollbackMNPVersionCallable(const RollbackMNPVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackMNPVersionOutcome>>();
    RollbackMNPVersionAsync(
    request,
    [prom](
        const TcmppClient*,
        const RollbackMNPVersionRequest&,
        RollbackMNPVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

