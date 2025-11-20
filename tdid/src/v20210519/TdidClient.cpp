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

#include <tencentcloud/tdid/v20210519/TdidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdid::V20210519;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-19";
    const string ENDPOINT = "tdid.intl.tencentcloudapi.com";
}

TdidClient::TdidClient(const Credential &credential, const string &region) :
    TdidClient(credential, region, ClientProfile())
{
}

TdidClient::TdidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdidClient::AddLabelOutcome TdidClient::AddLabel(const AddLabelRequest &request)
{
    auto outcome = MakeRequest(request, "AddLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLabelResponse rsp = AddLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLabelOutcome(rsp);
        else
            return AddLabelOutcome(o.GetError());
    }
    else
    {
        return AddLabelOutcome(outcome.GetError());
    }
}

void TdidClient::AddLabelAsync(const AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddLabelRequest&;
    using Resp = AddLabelResponse;

    DoRequestAsync<Req, Resp>(
        "AddLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::AddLabelOutcomeCallable TdidClient::AddLabelCallable(const AddLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddLabelOutcome>>();
    AddLabelAsync(
    request,
    [prom](
        const TdidClient*,
        const AddLabelRequest&,
        AddLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CancelAuthorityIssuerOutcome TdidClient::CancelAuthorityIssuer(const CancelAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuthorityIssuerResponse rsp = CancelAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuthorityIssuerOutcome(rsp);
        else
            return CancelAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return CancelAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::CancelAuthorityIssuerAsync(const CancelAuthorityIssuerRequest& request, const CancelAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelAuthorityIssuerRequest&;
    using Resp = CancelAuthorityIssuerResponse;

    DoRequestAsync<Req, Resp>(
        "CancelAuthorityIssuer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CancelAuthorityIssuerOutcomeCallable TdidClient::CancelAuthorityIssuerCallable(const CancelAuthorityIssuerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelAuthorityIssuerOutcome>>();
    CancelAuthorityIssuerAsync(
    request,
    [prom](
        const TdidClient*,
        const CancelAuthorityIssuerRequest&,
        CancelAuthorityIssuerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CheckChainOutcome TdidClient::CheckChain(const CheckChainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckChainResponse rsp = CheckChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckChainOutcome(rsp);
        else
            return CheckChainOutcome(o.GetError());
    }
    else
    {
        return CheckChainOutcome(outcome.GetError());
    }
}

void TdidClient::CheckChainAsync(const CheckChainRequest& request, const CheckChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckChainRequest&;
    using Resp = CheckChainResponse;

    DoRequestAsync<Req, Resp>(
        "CheckChain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CheckChainOutcomeCallable TdidClient::CheckChainCallable(const CheckChainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckChainOutcome>>();
    CheckChainAsync(
    request,
    [prom](
        const TdidClient*,
        const CheckChainRequest&,
        CheckChainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CheckDidDeployOutcome TdidClient::CheckDidDeploy(const CheckDidDeployRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDidDeploy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDidDeployResponse rsp = CheckDidDeployResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDidDeployOutcome(rsp);
        else
            return CheckDidDeployOutcome(o.GetError());
    }
    else
    {
        return CheckDidDeployOutcome(outcome.GetError());
    }
}

void TdidClient::CheckDidDeployAsync(const CheckDidDeployRequest& request, const CheckDidDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDidDeployRequest&;
    using Resp = CheckDidDeployResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDidDeploy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CheckDidDeployOutcomeCallable TdidClient::CheckDidDeployCallable(const CheckDidDeployRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDidDeployOutcome>>();
    CheckDidDeployAsync(
    request,
    [prom](
        const TdidClient*,
        const CheckDidDeployRequest&,
        CheckDidDeployOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateCredentialOutcome TdidClient::CreateCredential(const CreateCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCredentialResponse rsp = CreateCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCredentialOutcome(rsp);
        else
            return CreateCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCredentialRequest&;
    using Resp = CreateCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateCredentialOutcomeCallable TdidClient::CreateCredentialCallable(const CreateCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCredentialOutcome>>();
    CreateCredentialAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateCredentialRequest&,
        CreateCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateDidServiceOutcome TdidClient::CreateDidService(const CreateDidServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDidService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDidServiceResponse rsp = CreateDidServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDidServiceOutcome(rsp);
        else
            return CreateDidServiceOutcome(o.GetError());
    }
    else
    {
        return CreateDidServiceOutcome(outcome.GetError());
    }
}

void TdidClient::CreateDidServiceAsync(const CreateDidServiceRequest& request, const CreateDidServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDidServiceRequest&;
    using Resp = CreateDidServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDidService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateDidServiceOutcomeCallable TdidClient::CreateDidServiceCallable(const CreateDidServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDidServiceOutcome>>();
    CreateDidServiceAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateDidServiceRequest&,
        CreateDidServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateLabelOutcome TdidClient::CreateLabel(const CreateLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLabelResponse rsp = CreateLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLabelOutcome(rsp);
        else
            return CreateLabelOutcome(o.GetError());
    }
    else
    {
        return CreateLabelOutcome(outcome.GetError());
    }
}

void TdidClient::CreateLabelAsync(const CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLabelRequest&;
    using Resp = CreateLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateLabelOutcomeCallable TdidClient::CreateLabelCallable(const CreateLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLabelOutcome>>();
    CreateLabelAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateLabelRequest&,
        CreateLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateSelectiveCredentialOutcome TdidClient::CreateSelectiveCredential(const CreateSelectiveCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSelectiveCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSelectiveCredentialResponse rsp = CreateSelectiveCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSelectiveCredentialOutcome(rsp);
        else
            return CreateSelectiveCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateSelectiveCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateSelectiveCredentialAsync(const CreateSelectiveCredentialRequest& request, const CreateSelectiveCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSelectiveCredentialRequest&;
    using Resp = CreateSelectiveCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSelectiveCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateSelectiveCredentialOutcomeCallable TdidClient::CreateSelectiveCredentialCallable(const CreateSelectiveCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSelectiveCredentialOutcome>>();
    CreateSelectiveCredentialAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateSelectiveCredentialRequest&,
        CreateSelectiveCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateTDidOutcome TdidClient::CreateTDid(const CreateTDidRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidResponse rsp = CreateTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidOutcome(rsp);
        else
            return CreateTDidOutcome(o.GetError());
    }
    else
    {
        return CreateTDidOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidAsync(const CreateTDidRequest& request, const CreateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDidRequest&;
    using Resp = CreateTDidResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateTDidOutcomeCallable TdidClient::CreateTDidCallable(const CreateTDidRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDidOutcome>>();
    CreateTDidAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateTDidRequest&,
        CreateTDidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateTDidByPrivateKeyOutcome TdidClient::CreateTDidByPrivateKey(const CreateTDidByPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPrivateKeyResponse rsp = CreateTDidByPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPrivateKeyOutcome(rsp);
        else
            return CreateTDidByPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPrivateKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPrivateKeyAsync(const CreateTDidByPrivateKeyRequest& request, const CreateTDidByPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDidByPrivateKeyRequest&;
    using Resp = CreateTDidByPrivateKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDidByPrivateKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateTDidByPrivateKeyOutcomeCallable TdidClient::CreateTDidByPrivateKeyCallable(const CreateTDidByPrivateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDidByPrivateKeyOutcome>>();
    CreateTDidByPrivateKeyAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateTDidByPrivateKeyRequest&,
        CreateTDidByPrivateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateTDidByPublicKeyOutcome TdidClient::CreateTDidByPublicKey(const CreateTDidByPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPublicKeyResponse rsp = CreateTDidByPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPublicKeyOutcome(rsp);
        else
            return CreateTDidByPublicKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPublicKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPublicKeyAsync(const CreateTDidByPublicKeyRequest& request, const CreateTDidByPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDidByPublicKeyRequest&;
    using Resp = CreateTDidByPublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDidByPublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateTDidByPublicKeyOutcomeCallable TdidClient::CreateTDidByPublicKeyCallable(const CreateTDidByPublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDidByPublicKeyOutcome>>();
    CreateTDidByPublicKeyAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateTDidByPublicKeyRequest&,
        CreateTDidByPublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::DeployByNameOutcome TdidClient::DeployByName(const DeployByNameRequest &request)
{
    auto outcome = MakeRequest(request, "DeployByName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployByNameResponse rsp = DeployByNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployByNameOutcome(rsp);
        else
            return DeployByNameOutcome(o.GetError());
    }
    else
    {
        return DeployByNameOutcome(outcome.GetError());
    }
}

void TdidClient::DeployByNameAsync(const DeployByNameRequest& request, const DeployByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployByNameRequest&;
    using Resp = DeployByNameResponse;

    DoRequestAsync<Req, Resp>(
        "DeployByName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::DeployByNameOutcomeCallable TdidClient::DeployByNameCallable(const DeployByNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployByNameOutcome>>();
    DeployByNameAsync(
    request,
    [prom](
        const TdidClient*,
        const DeployByNameRequest&,
        DeployByNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::DownCptOutcome TdidClient::DownCpt(const DownCptRequest &request)
{
    auto outcome = MakeRequest(request, "DownCpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownCptResponse rsp = DownCptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownCptOutcome(rsp);
        else
            return DownCptOutcome(o.GetError());
    }
    else
    {
        return DownCptOutcome(outcome.GetError());
    }
}

void TdidClient::DownCptAsync(const DownCptRequest& request, const DownCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownCptRequest&;
    using Resp = DownCptResponse;

    DoRequestAsync<Req, Resp>(
        "DownCpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::DownCptOutcomeCallable TdidClient::DownCptCallable(const DownCptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownCptOutcome>>();
    DownCptAsync(
    request,
    [prom](
        const TdidClient*,
        const DownCptRequest&,
        DownCptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::EnableHashOutcome TdidClient::EnableHash(const EnableHashRequest &request)
{
    auto outcome = MakeRequest(request, "EnableHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableHashResponse rsp = EnableHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableHashOutcome(rsp);
        else
            return EnableHashOutcome(o.GetError());
    }
    else
    {
        return EnableHashOutcome(outcome.GetError());
    }
}

void TdidClient::EnableHashAsync(const EnableHashRequest& request, const EnableHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableHashRequest&;
    using Resp = EnableHashResponse;

    DoRequestAsync<Req, Resp>(
        "EnableHash", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::EnableHashOutcomeCallable TdidClient::EnableHashCallable(const EnableHashRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableHashOutcome>>();
    EnableHashAsync(
    request,
    [prom](
        const TdidClient*,
        const EnableHashRequest&,
        EnableHashOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetAgencyTDidOutcome TdidClient::GetAgencyTDid(const GetAgencyTDidRequest &request)
{
    auto outcome = MakeRequest(request, "GetAgencyTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAgencyTDidResponse rsp = GetAgencyTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAgencyTDidOutcome(rsp);
        else
            return GetAgencyTDidOutcome(o.GetError());
    }
    else
    {
        return GetAgencyTDidOutcome(outcome.GetError());
    }
}

void TdidClient::GetAgencyTDidAsync(const GetAgencyTDidRequest& request, const GetAgencyTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAgencyTDidRequest&;
    using Resp = GetAgencyTDidResponse;

    DoRequestAsync<Req, Resp>(
        "GetAgencyTDid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetAgencyTDidOutcomeCallable TdidClient::GetAgencyTDidCallable(const GetAgencyTDidRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAgencyTDidOutcome>>();
    GetAgencyTDidAsync(
    request,
    [prom](
        const TdidClient*,
        const GetAgencyTDidRequest&,
        GetAgencyTDidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetAuthoritiesListOutcome TdidClient::GetAuthoritiesList(const GetAuthoritiesListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAuthoritiesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAuthoritiesListResponse rsp = GetAuthoritiesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAuthoritiesListOutcome(rsp);
        else
            return GetAuthoritiesListOutcome(o.GetError());
    }
    else
    {
        return GetAuthoritiesListOutcome(outcome.GetError());
    }
}

void TdidClient::GetAuthoritiesListAsync(const GetAuthoritiesListRequest& request, const GetAuthoritiesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAuthoritiesListRequest&;
    using Resp = GetAuthoritiesListResponse;

    DoRequestAsync<Req, Resp>(
        "GetAuthoritiesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetAuthoritiesListOutcomeCallable TdidClient::GetAuthoritiesListCallable(const GetAuthoritiesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAuthoritiesListOutcome>>();
    GetAuthoritiesListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetAuthoritiesListRequest&,
        GetAuthoritiesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetAuthorityIssuerOutcome TdidClient::GetAuthorityIssuer(const GetAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "GetAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAuthorityIssuerResponse rsp = GetAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAuthorityIssuerOutcome(rsp);
        else
            return GetAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return GetAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::GetAuthorityIssuerAsync(const GetAuthorityIssuerRequest& request, const GetAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAuthorityIssuerRequest&;
    using Resp = GetAuthorityIssuerResponse;

    DoRequestAsync<Req, Resp>(
        "GetAuthorityIssuer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetAuthorityIssuerOutcomeCallable TdidClient::GetAuthorityIssuerCallable(const GetAuthorityIssuerRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAuthorityIssuerOutcome>>();
    GetAuthorityIssuerAsync(
    request,
    [prom](
        const TdidClient*,
        const GetAuthorityIssuerRequest&,
        GetAuthorityIssuerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetConsortiumClusterListOutcome TdidClient::GetConsortiumClusterList(const GetConsortiumClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "GetConsortiumClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetConsortiumClusterListResponse rsp = GetConsortiumClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetConsortiumClusterListOutcome(rsp);
        else
            return GetConsortiumClusterListOutcome(o.GetError());
    }
    else
    {
        return GetConsortiumClusterListOutcome(outcome.GetError());
    }
}

void TdidClient::GetConsortiumClusterListAsync(const GetConsortiumClusterListRequest& request, const GetConsortiumClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetConsortiumClusterListRequest&;
    using Resp = GetConsortiumClusterListResponse;

    DoRequestAsync<Req, Resp>(
        "GetConsortiumClusterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetConsortiumClusterListOutcomeCallable TdidClient::GetConsortiumClusterListCallable(const GetConsortiumClusterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetConsortiumClusterListOutcome>>();
    GetConsortiumClusterListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetConsortiumClusterListRequest&,
        GetConsortiumClusterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetConsortiumListOutcome TdidClient::GetConsortiumList(const GetConsortiumListRequest &request)
{
    auto outcome = MakeRequest(request, "GetConsortiumList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetConsortiumListResponse rsp = GetConsortiumListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetConsortiumListOutcome(rsp);
        else
            return GetConsortiumListOutcome(o.GetError());
    }
    else
    {
        return GetConsortiumListOutcome(outcome.GetError());
    }
}

void TdidClient::GetConsortiumListAsync(const GetConsortiumListRequest& request, const GetConsortiumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetConsortiumListRequest&;
    using Resp = GetConsortiumListResponse;

    DoRequestAsync<Req, Resp>(
        "GetConsortiumList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetConsortiumListOutcomeCallable TdidClient::GetConsortiumListCallable(const GetConsortiumListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetConsortiumListOutcome>>();
    GetConsortiumListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetConsortiumListRequest&,
        GetConsortiumListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCptInfoOutcome TdidClient::GetCptInfo(const GetCptInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetCptInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCptInfoResponse rsp = GetCptInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCptInfoOutcome(rsp);
        else
            return GetCptInfoOutcome(o.GetError());
    }
    else
    {
        return GetCptInfoOutcome(outcome.GetError());
    }
}

void TdidClient::GetCptInfoAsync(const GetCptInfoRequest& request, const GetCptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCptInfoRequest&;
    using Resp = GetCptInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetCptInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCptInfoOutcomeCallable TdidClient::GetCptInfoCallable(const GetCptInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCptInfoOutcome>>();
    GetCptInfoAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCptInfoRequest&,
        GetCptInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCptListOutcome TdidClient::GetCptList(const GetCptListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCptList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCptListResponse rsp = GetCptListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCptListOutcome(rsp);
        else
            return GetCptListOutcome(o.GetError());
    }
    else
    {
        return GetCptListOutcome(outcome.GetError());
    }
}

void TdidClient::GetCptListAsync(const GetCptListRequest& request, const GetCptListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCptListRequest&;
    using Resp = GetCptListResponse;

    DoRequestAsync<Req, Resp>(
        "GetCptList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCptListOutcomeCallable TdidClient::GetCptListCallable(const GetCptListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCptListOutcome>>();
    GetCptListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCptListRequest&,
        GetCptListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCredentialCptRankOutcome TdidClient::GetCredentialCptRank(const GetCredentialCptRankRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialCptRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialCptRankResponse rsp = GetCredentialCptRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialCptRankOutcome(rsp);
        else
            return GetCredentialCptRankOutcome(o.GetError());
    }
    else
    {
        return GetCredentialCptRankOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialCptRankAsync(const GetCredentialCptRankRequest& request, const GetCredentialCptRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCredentialCptRankRequest&;
    using Resp = GetCredentialCptRankResponse;

    DoRequestAsync<Req, Resp>(
        "GetCredentialCptRank", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCredentialCptRankOutcomeCallable TdidClient::GetCredentialCptRankCallable(const GetCredentialCptRankRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCredentialCptRankOutcome>>();
    GetCredentialCptRankAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCredentialCptRankRequest&,
        GetCredentialCptRankOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCredentialIssueRankOutcome TdidClient::GetCredentialIssueRank(const GetCredentialIssueRankRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialIssueRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialIssueRankResponse rsp = GetCredentialIssueRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialIssueRankOutcome(rsp);
        else
            return GetCredentialIssueRankOutcome(o.GetError());
    }
    else
    {
        return GetCredentialIssueRankOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialIssueRankAsync(const GetCredentialIssueRankRequest& request, const GetCredentialIssueRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCredentialIssueRankRequest&;
    using Resp = GetCredentialIssueRankResponse;

    DoRequestAsync<Req, Resp>(
        "GetCredentialIssueRank", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCredentialIssueRankOutcomeCallable TdidClient::GetCredentialIssueRankCallable(const GetCredentialIssueRankRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCredentialIssueRankOutcome>>();
    GetCredentialIssueRankAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCredentialIssueRankRequest&,
        GetCredentialIssueRankOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCredentialIssueTrendOutcome TdidClient::GetCredentialIssueTrend(const GetCredentialIssueTrendRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialIssueTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialIssueTrendResponse rsp = GetCredentialIssueTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialIssueTrendOutcome(rsp);
        else
            return GetCredentialIssueTrendOutcome(o.GetError());
    }
    else
    {
        return GetCredentialIssueTrendOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialIssueTrendAsync(const GetCredentialIssueTrendRequest& request, const GetCredentialIssueTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCredentialIssueTrendRequest&;
    using Resp = GetCredentialIssueTrendResponse;

    DoRequestAsync<Req, Resp>(
        "GetCredentialIssueTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCredentialIssueTrendOutcomeCallable TdidClient::GetCredentialIssueTrendCallable(const GetCredentialIssueTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCredentialIssueTrendOutcome>>();
    GetCredentialIssueTrendAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCredentialIssueTrendRequest&,
        GetCredentialIssueTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCredentialStatusOutcome TdidClient::GetCredentialStatus(const GetCredentialStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialStatusResponse rsp = GetCredentialStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialStatusOutcome(rsp);
        else
            return GetCredentialStatusOutcome(o.GetError());
    }
    else
    {
        return GetCredentialStatusOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialStatusAsync(const GetCredentialStatusRequest& request, const GetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCredentialStatusRequest&;
    using Resp = GetCredentialStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetCredentialStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCredentialStatusOutcomeCallable TdidClient::GetCredentialStatusCallable(const GetCredentialStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCredentialStatusOutcome>>();
    GetCredentialStatusAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCredentialStatusRequest&,
        GetCredentialStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDataPanelOutcome TdidClient::GetDataPanel(const GetDataPanelRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataPanel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataPanelResponse rsp = GetDataPanelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataPanelOutcome(rsp);
        else
            return GetDataPanelOutcome(o.GetError());
    }
    else
    {
        return GetDataPanelOutcome(outcome.GetError());
    }
}

void TdidClient::GetDataPanelAsync(const GetDataPanelRequest& request, const GetDataPanelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataPanelRequest&;
    using Resp = GetDataPanelResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataPanel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDataPanelOutcomeCallable TdidClient::GetDataPanelCallable(const GetDataPanelRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataPanelOutcome>>();
    GetDataPanelAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDataPanelRequest&,
        GetDataPanelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDeployInfoOutcome TdidClient::GetDeployInfo(const GetDeployInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeployInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeployInfoResponse rsp = GetDeployInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeployInfoOutcome(rsp);
        else
            return GetDeployInfoOutcome(o.GetError());
    }
    else
    {
        return GetDeployInfoOutcome(outcome.GetError());
    }
}

void TdidClient::GetDeployInfoAsync(const GetDeployInfoRequest& request, const GetDeployInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeployInfoRequest&;
    using Resp = GetDeployInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeployInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDeployInfoOutcomeCallable TdidClient::GetDeployInfoCallable(const GetDeployInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeployInfoOutcome>>();
    GetDeployInfoAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDeployInfoRequest&,
        GetDeployInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDeployListOutcome TdidClient::GetDeployList(const GetDeployListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeployList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeployListResponse rsp = GetDeployListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeployListOutcome(rsp);
        else
            return GetDeployListOutcome(o.GetError());
    }
    else
    {
        return GetDeployListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDeployListAsync(const GetDeployListRequest& request, const GetDeployListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeployListRequest&;
    using Resp = GetDeployListResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeployList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDeployListOutcomeCallable TdidClient::GetDeployListCallable(const GetDeployListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeployListOutcome>>();
    GetDeployListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDeployListRequest&,
        GetDeployListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidClusterDetailOutcome TdidClient::GetDidClusterDetail(const GetDidClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidClusterDetailResponse rsp = GetDidClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidClusterDetailOutcome(rsp);
        else
            return GetDidClusterDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidClusterDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidClusterDetailAsync(const GetDidClusterDetailRequest& request, const GetDidClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidClusterDetailRequest&;
    using Resp = GetDidClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidClusterDetailOutcomeCallable TdidClient::GetDidClusterDetailCallable(const GetDidClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidClusterDetailOutcome>>();
    GetDidClusterDetailAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidClusterDetailRequest&,
        GetDidClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidClusterListOutcome TdidClient::GetDidClusterList(const GetDidClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidClusterListResponse rsp = GetDidClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidClusterListOutcome(rsp);
        else
            return GetDidClusterListOutcome(o.GetError());
    }
    else
    {
        return GetDidClusterListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidClusterListAsync(const GetDidClusterListRequest& request, const GetDidClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidClusterListRequest&;
    using Resp = GetDidClusterListResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidClusterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidClusterListOutcomeCallable TdidClient::GetDidClusterListCallable(const GetDidClusterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidClusterListOutcome>>();
    GetDidClusterListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidClusterListRequest&,
        GetDidClusterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidDetailOutcome TdidClient::GetDidDetail(const GetDidDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidDetailResponse rsp = GetDidDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidDetailOutcome(rsp);
        else
            return GetDidDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidDetailAsync(const GetDidDetailRequest& request, const GetDidDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidDetailRequest&;
    using Resp = GetDidDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidDetailOutcomeCallable TdidClient::GetDidDetailCallable(const GetDidDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidDetailOutcome>>();
    GetDidDetailAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidDetailRequest&,
        GetDidDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidDocumentOutcome TdidClient::GetDidDocument(const GetDidDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidDocumentResponse rsp = GetDidDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidDocumentOutcome(rsp);
        else
            return GetDidDocumentOutcome(o.GetError());
    }
    else
    {
        return GetDidDocumentOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidDocumentAsync(const GetDidDocumentRequest& request, const GetDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidDocumentRequest&;
    using Resp = GetDidDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidDocumentOutcomeCallable TdidClient::GetDidDocumentCallable(const GetDidDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidDocumentOutcome>>();
    GetDidDocumentAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidDocumentRequest&,
        GetDidDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidListOutcome TdidClient::GetDidList(const GetDidListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidListResponse rsp = GetDidListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidListOutcome(rsp);
        else
            return GetDidListOutcome(o.GetError());
    }
    else
    {
        return GetDidListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidListAsync(const GetDidListRequest& request, const GetDidListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidListRequest&;
    using Resp = GetDidListResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidListOutcomeCallable TdidClient::GetDidListCallable(const GetDidListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidListOutcome>>();
    GetDidListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidListRequest&,
        GetDidListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidRegisterTrendOutcome TdidClient::GetDidRegisterTrend(const GetDidRegisterTrendRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidRegisterTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidRegisterTrendResponse rsp = GetDidRegisterTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidRegisterTrendOutcome(rsp);
        else
            return GetDidRegisterTrendOutcome(o.GetError());
    }
    else
    {
        return GetDidRegisterTrendOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidRegisterTrendAsync(const GetDidRegisterTrendRequest& request, const GetDidRegisterTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidRegisterTrendRequest&;
    using Resp = GetDidRegisterTrendResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidRegisterTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidRegisterTrendOutcomeCallable TdidClient::GetDidRegisterTrendCallable(const GetDidRegisterTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidRegisterTrendOutcome>>();
    GetDidRegisterTrendAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidRegisterTrendRequest&,
        GetDidRegisterTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidServiceDetailOutcome TdidClient::GetDidServiceDetail(const GetDidServiceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidServiceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidServiceDetailResponse rsp = GetDidServiceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidServiceDetailOutcome(rsp);
        else
            return GetDidServiceDetailOutcome(o.GetError());
    }
    else
    {
        return GetDidServiceDetailOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidServiceDetailAsync(const GetDidServiceDetailRequest& request, const GetDidServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidServiceDetailRequest&;
    using Resp = GetDidServiceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidServiceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidServiceDetailOutcomeCallable TdidClient::GetDidServiceDetailCallable(const GetDidServiceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidServiceDetailOutcome>>();
    GetDidServiceDetailAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidServiceDetailRequest&,
        GetDidServiceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetDidServiceListOutcome TdidClient::GetDidServiceList(const GetDidServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDidServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDidServiceListResponse rsp = GetDidServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDidServiceListOutcome(rsp);
        else
            return GetDidServiceListOutcome(o.GetError());
    }
    else
    {
        return GetDidServiceListOutcome(outcome.GetError());
    }
}

void TdidClient::GetDidServiceListAsync(const GetDidServiceListRequest& request, const GetDidServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDidServiceListRequest&;
    using Resp = GetDidServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "GetDidServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetDidServiceListOutcomeCallable TdidClient::GetDidServiceListCallable(const GetDidServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDidServiceListOutcome>>();
    GetDidServiceListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetDidServiceListRequest&,
        GetDidServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetGroupListOutcome TdidClient::GetGroupList(const GetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupListResponse rsp = GetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupListOutcome(rsp);
        else
            return GetGroupListOutcome(o.GetError());
    }
    else
    {
        return GetGroupListOutcome(outcome.GetError());
    }
}

void TdidClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGroupListRequest&;
    using Resp = GetGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetGroupListOutcomeCallable TdidClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupListOutcome>>();
    GetGroupListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetGroupListRequest&,
        GetGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetLabelListOutcome TdidClient::GetLabelList(const GetLabelListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLabelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLabelListResponse rsp = GetLabelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLabelListOutcome(rsp);
        else
            return GetLabelListOutcome(o.GetError());
    }
    else
    {
        return GetLabelListOutcome(outcome.GetError());
    }
}

void TdidClient::GetLabelListAsync(const GetLabelListRequest& request, const GetLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLabelListRequest&;
    using Resp = GetLabelListResponse;

    DoRequestAsync<Req, Resp>(
        "GetLabelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetLabelListOutcomeCallable TdidClient::GetLabelListCallable(const GetLabelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLabelListOutcome>>();
    GetLabelListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetLabelListRequest&,
        GetLabelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetPolicyListOutcome TdidClient::GetPolicyList(const GetPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyListResponse rsp = GetPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyListOutcome(rsp);
        else
            return GetPolicyListOutcome(o.GetError());
    }
    else
    {
        return GetPolicyListOutcome(outcome.GetError());
    }
}

void TdidClient::GetPolicyListAsync(const GetPolicyListRequest& request, const GetPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPolicyListRequest&;
    using Resp = GetPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "GetPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetPolicyListOutcomeCallable TdidClient::GetPolicyListCallable(const GetPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPolicyListOutcome>>();
    GetPolicyListAsync(
    request,
    [prom](
        const TdidClient*,
        const GetPolicyListRequest&,
        GetPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetPublicKeyOutcome TdidClient::GetPublicKey(const GetPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPublicKeyResponse rsp = GetPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPublicKeyOutcome(rsp);
        else
            return GetPublicKeyOutcome(o.GetError());
    }
    else
    {
        return GetPublicKeyOutcome(outcome.GetError());
    }
}

void TdidClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPublicKeyRequest&;
    using Resp = GetPublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GetPublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetPublicKeyOutcomeCallable TdidClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPublicKeyOutcome>>();
    GetPublicKeyAsync(
    request,
    [prom](
        const TdidClient*,
        const GetPublicKeyRequest&,
        GetPublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::QueryPolicyOutcome TdidClient::QueryPolicy(const QueryPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPolicyResponse rsp = QueryPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPolicyOutcome(rsp);
        else
            return QueryPolicyOutcome(o.GetError());
    }
    else
    {
        return QueryPolicyOutcome(outcome.GetError());
    }
}

void TdidClient::QueryPolicyAsync(const QueryPolicyRequest& request, const QueryPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPolicyRequest&;
    using Resp = QueryPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "QueryPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::QueryPolicyOutcomeCallable TdidClient::QueryPolicyCallable(const QueryPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryPolicyOutcome>>();
    QueryPolicyAsync(
    request,
    [prom](
        const TdidClient*,
        const QueryPolicyRequest&,
        QueryPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::RecognizeAuthorityIssuerOutcome TdidClient::RecognizeAuthorityIssuer(const RecognizeAuthorityIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeAuthorityIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeAuthorityIssuerResponse rsp = RecognizeAuthorityIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeAuthorityIssuerOutcome(rsp);
        else
            return RecognizeAuthorityIssuerOutcome(o.GetError());
    }
    else
    {
        return RecognizeAuthorityIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::RecognizeAuthorityIssuerAsync(const RecognizeAuthorityIssuerRequest& request, const RecognizeAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeAuthorityIssuerRequest&;
    using Resp = RecognizeAuthorityIssuerResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeAuthorityIssuer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::RecognizeAuthorityIssuerOutcomeCallable TdidClient::RecognizeAuthorityIssuerCallable(const RecognizeAuthorityIssuerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeAuthorityIssuerOutcome>>();
    RecognizeAuthorityIssuerAsync(
    request,
    [prom](
        const TdidClient*,
        const RecognizeAuthorityIssuerRequest&,
        RecognizeAuthorityIssuerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::RegisterClaimPolicyOutcome TdidClient::RegisterClaimPolicy(const RegisterClaimPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterClaimPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterClaimPolicyResponse rsp = RegisterClaimPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterClaimPolicyOutcome(rsp);
        else
            return RegisterClaimPolicyOutcome(o.GetError());
    }
    else
    {
        return RegisterClaimPolicyOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterClaimPolicyAsync(const RegisterClaimPolicyRequest& request, const RegisterClaimPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterClaimPolicyRequest&;
    using Resp = RegisterClaimPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterClaimPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::RegisterClaimPolicyOutcomeCallable TdidClient::RegisterClaimPolicyCallable(const RegisterClaimPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterClaimPolicyOutcome>>();
    RegisterClaimPolicyAsync(
    request,
    [prom](
        const TdidClient*,
        const RegisterClaimPolicyRequest&,
        RegisterClaimPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::RegisterCptOutcome TdidClient::RegisterCpt(const RegisterCptRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterCpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterCptResponse rsp = RegisterCptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterCptOutcome(rsp);
        else
            return RegisterCptOutcome(o.GetError());
    }
    else
    {
        return RegisterCptOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterCptAsync(const RegisterCptRequest& request, const RegisterCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterCptRequest&;
    using Resp = RegisterCptResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterCpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::RegisterCptOutcomeCallable TdidClient::RegisterCptCallable(const RegisterCptRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterCptOutcome>>();
    RegisterCptAsync(
    request,
    [prom](
        const TdidClient*,
        const RegisterCptRequest&,
        RegisterCptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::RegisterIssuerOutcome TdidClient::RegisterIssuer(const RegisterIssuerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterIssuer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterIssuerResponse rsp = RegisterIssuerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterIssuerOutcome(rsp);
        else
            return RegisterIssuerOutcome(o.GetError());
    }
    else
    {
        return RegisterIssuerOutcome(outcome.GetError());
    }
}

void TdidClient::RegisterIssuerAsync(const RegisterIssuerRequest& request, const RegisterIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterIssuerRequest&;
    using Resp = RegisterIssuerResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterIssuer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::RegisterIssuerOutcomeCallable TdidClient::RegisterIssuerCallable(const RegisterIssuerRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterIssuerOutcome>>();
    RegisterIssuerAsync(
    request,
    [prom](
        const TdidClient*,
        const RegisterIssuerRequest&,
        RegisterIssuerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::RemoveHashOutcome TdidClient::RemoveHash(const RemoveHashRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveHash");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveHashResponse rsp = RemoveHashResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveHashOutcome(rsp);
        else
            return RemoveHashOutcome(o.GetError());
    }
    else
    {
        return RemoveHashOutcome(outcome.GetError());
    }
}

void TdidClient::RemoveHashAsync(const RemoveHashRequest& request, const RemoveHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveHashRequest&;
    using Resp = RemoveHashResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveHash", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::RemoveHashOutcomeCallable TdidClient::RemoveHashCallable(const RemoveHashRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveHashOutcome>>();
    RemoveHashAsync(
    request,
    [prom](
        const TdidClient*,
        const RemoveHashRequest&,
        RemoveHashOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::SetCredentialStatusOutcome TdidClient::SetCredentialStatus(const SetCredentialStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetCredentialStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCredentialStatusResponse rsp = SetCredentialStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCredentialStatusOutcome(rsp);
        else
            return SetCredentialStatusOutcome(o.GetError());
    }
    else
    {
        return SetCredentialStatusOutcome(outcome.GetError());
    }
}

void TdidClient::SetCredentialStatusAsync(const SetCredentialStatusRequest& request, const SetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetCredentialStatusRequest&;
    using Resp = SetCredentialStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetCredentialStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::SetCredentialStatusOutcomeCallable TdidClient::SetCredentialStatusCallable(const SetCredentialStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCredentialStatusOutcome>>();
    SetCredentialStatusAsync(
    request,
    [prom](
        const TdidClient*,
        const SetCredentialStatusRequest&,
        SetCredentialStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::VerifyCredentialOutcome TdidClient::VerifyCredential(const VerifyCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyCredentialResponse rsp = VerifyCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyCredentialOutcome(rsp);
        else
            return VerifyCredentialOutcome(o.GetError());
    }
    else
    {
        return VerifyCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyCredentialAsync(const VerifyCredentialRequest& request, const VerifyCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyCredentialRequest&;
    using Resp = VerifyCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::VerifyCredentialOutcomeCallable TdidClient::VerifyCredentialCallable(const VerifyCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyCredentialOutcome>>();
    VerifyCredentialAsync(
    request,
    [prom](
        const TdidClient*,
        const VerifyCredentialRequest&,
        VerifyCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

