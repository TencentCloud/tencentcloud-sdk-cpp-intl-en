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
    const string ENDPOINT = "tcr.intl.tencentcloudapi.com";
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
    using Req = const CheckInstanceRequest&;
    using Resp = CheckInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CheckInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CheckInstanceOutcomeCallable TcrClient::CheckInstanceCallable(const CheckInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckInstanceOutcome>>();
    CheckInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const CheckInstanceRequest&,
        CheckInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CheckInstanceNameOutcome TcrClient::CheckInstanceName(const CheckInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstanceNameResponse rsp = CheckInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstanceNameOutcome(rsp);
        else
            return CheckInstanceNameOutcome(o.GetError());
    }
    else
    {
        return CheckInstanceNameOutcome(outcome.GetError());
    }
}

void TcrClient::CheckInstanceNameAsync(const CheckInstanceNameRequest& request, const CheckInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckInstanceNameRequest&;
    using Resp = CheckInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CheckInstanceNameOutcomeCallable TcrClient::CheckInstanceNameCallable(const CheckInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckInstanceNameOutcome>>();
    CheckInstanceNameAsync(
    request,
    [prom](
        const TcrClient*,
        const CheckInstanceNameRequest&,
        CheckInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateImageAccelerationServiceOutcome TcrClient::CreateImageAccelerationService(const CreateImageAccelerationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageAccelerationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageAccelerationServiceResponse rsp = CreateImageAccelerationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageAccelerationServiceOutcome(rsp);
        else
            return CreateImageAccelerationServiceOutcome(o.GetError());
    }
    else
    {
        return CreateImageAccelerationServiceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateImageAccelerationServiceAsync(const CreateImageAccelerationServiceRequest& request, const CreateImageAccelerationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageAccelerationServiceRequest&;
    using Resp = CreateImageAccelerationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageAccelerationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateImageAccelerationServiceOutcomeCallable TcrClient::CreateImageAccelerationServiceCallable(const CreateImageAccelerationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageAccelerationServiceOutcome>>();
    CreateImageAccelerationServiceAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateImageAccelerationServiceRequest&,
        CreateImageAccelerationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateImmutableTagRulesRequest&;
    using Resp = CreateImmutableTagRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImmutableTagRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateImmutableTagRulesOutcomeCallable TcrClient::CreateImmutableTagRulesCallable(const CreateImmutableTagRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImmutableTagRulesOutcome>>();
    CreateImmutableTagRulesAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateImmutableTagRulesRequest&,
        CreateImmutableTagRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateInstanceOutcome TcrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateInstanceOutcomeCallable TcrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateInstanceCustomizedDomainOutcome TcrClient::CreateInstanceCustomizedDomain(const CreateInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceCustomizedDomainResponse rsp = CreateInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceCustomizedDomainOutcome(rsp);
        else
            return CreateInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceCustomizedDomainAsync(const CreateInstanceCustomizedDomainRequest& request, const CreateInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceCustomizedDomainRequest&;
    using Resp = CreateInstanceCustomizedDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceCustomizedDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateInstanceCustomizedDomainOutcomeCallable TcrClient::CreateInstanceCustomizedDomainCallable(const CreateInstanceCustomizedDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceCustomizedDomainOutcome>>();
    CreateInstanceCustomizedDomainAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateInstanceCustomizedDomainRequest&,
        CreateInstanceCustomizedDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateInstanceTokenOutcome TcrClient::CreateInstanceToken(const CreateInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceTokenResponse rsp = CreateInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceTokenOutcome(rsp);
        else
            return CreateInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceTokenAsync(const CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceTokenRequest&;
    using Resp = CreateInstanceTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateInstanceTokenOutcomeCallable TcrClient::CreateInstanceTokenCallable(const CreateInstanceTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceTokenOutcome>>();
    CreateInstanceTokenAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateInstanceTokenRequest&,
        CreateInstanceTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateMultipleSecurityPolicyRequest&;
    using Resp = CreateMultipleSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultipleSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateMultipleSecurityPolicyOutcomeCallable TcrClient::CreateMultipleSecurityPolicyCallable(const CreateMultipleSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultipleSecurityPolicyOutcome>>();
    CreateMultipleSecurityPolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateMultipleSecurityPolicyRequest&,
        CreateMultipleSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateNamespaceOutcome TcrClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNamespaceRequest&;
    using Resp = CreateNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateNamespaceOutcomeCallable TcrClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNamespaceOutcome>>();
    CreateNamespaceAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateNamespaceRequest&,
        CreateNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateReplicationInstanceRequest&;
    using Resp = CreateReplicationInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReplicationInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateReplicationInstanceOutcomeCallable TcrClient::CreateReplicationInstanceCallable(const CreateReplicationInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReplicationInstanceOutcome>>();
    CreateReplicationInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateReplicationInstanceRequest&,
        CreateReplicationInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateRepositoryOutcome TcrClient::CreateRepository(const CreateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryResponse rsp = CreateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryOutcome(rsp);
        else
            return CreateRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRepositoryRequest&;
    using Resp = CreateRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateRepositoryOutcomeCallable TcrClient::CreateRepositoryCallable(const CreateRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRepositoryOutcome>>();
    CreateRepositoryAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateRepositoryRequest&,
        CreateRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateSecurityPolicyOutcome TcrClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityPolicyResponse rsp = CreateSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityPolicyOutcome(rsp);
        else
            return CreateSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityPolicyRequest&;
    using Resp = CreateSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateSecurityPolicyOutcomeCallable TcrClient::CreateSecurityPolicyCallable(const CreateSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityPolicyOutcome>>();
    CreateSecurityPolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateSecurityPolicyRequest&,
        CreateSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateServiceAccountOutcome TcrClient::CreateServiceAccount(const CreateServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceAccountResponse rsp = CreateServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceAccountOutcome(rsp);
        else
            return CreateServiceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::CreateServiceAccountAsync(const CreateServiceAccountRequest& request, const CreateServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceAccountRequest&;
    using Resp = CreateServiceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServiceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateServiceAccountOutcomeCallable TcrClient::CreateServiceAccountCallable(const CreateServiceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceAccountOutcome>>();
    CreateServiceAccountAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateServiceAccountRequest&,
        CreateServiceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateSignatureOutcome TcrClient::CreateSignature(const CreateSignatureRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignatureResponse rsp = CreateSignatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignatureOutcome(rsp);
        else
            return CreateSignatureOutcome(o.GetError());
    }
    else
    {
        return CreateSignatureOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSignatureAsync(const CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSignatureRequest&;
    using Resp = CreateSignatureResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSignature", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateSignatureOutcomeCallable TcrClient::CreateSignatureCallable(const CreateSignatureRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSignatureOutcome>>();
    CreateSignatureAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateSignatureRequest&,
        CreateSignatureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateSignaturePolicyOutcome TcrClient::CreateSignaturePolicy(const CreateSignaturePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignaturePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignaturePolicyResponse rsp = CreateSignaturePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignaturePolicyOutcome(rsp);
        else
            return CreateSignaturePolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSignaturePolicyOutcome(outcome.GetError());
    }
}

void TcrClient::CreateSignaturePolicyAsync(const CreateSignaturePolicyRequest& request, const CreateSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSignaturePolicyRequest&;
    using Resp = CreateSignaturePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSignaturePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateSignaturePolicyOutcomeCallable TcrClient::CreateSignaturePolicyCallable(const CreateSignaturePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSignaturePolicyOutcome>>();
    CreateSignaturePolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateSignaturePolicyRequest&,
        CreateSignaturePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateTagRetentionExecutionOutcome TcrClient::CreateTagRetentionExecution(const CreateTagRetentionExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTagRetentionExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagRetentionExecutionResponse rsp = CreateTagRetentionExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagRetentionExecutionOutcome(rsp);
        else
            return CreateTagRetentionExecutionOutcome(o.GetError());
    }
    else
    {
        return CreateTagRetentionExecutionOutcome(outcome.GetError());
    }
}

void TcrClient::CreateTagRetentionExecutionAsync(const CreateTagRetentionExecutionRequest& request, const CreateTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTagRetentionExecutionRequest&;
    using Resp = CreateTagRetentionExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTagRetentionExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateTagRetentionExecutionOutcomeCallable TcrClient::CreateTagRetentionExecutionCallable(const CreateTagRetentionExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTagRetentionExecutionOutcome>>();
    CreateTagRetentionExecutionAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateTagRetentionExecutionRequest&,
        CreateTagRetentionExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateTagRetentionRuleOutcome TcrClient::CreateTagRetentionRule(const CreateTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagRetentionRuleResponse rsp = CreateTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagRetentionRuleOutcome(rsp);
        else
            return CreateTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return CreateTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::CreateTagRetentionRuleAsync(const CreateTagRetentionRuleRequest& request, const CreateTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTagRetentionRuleRequest&;
    using Resp = CreateTagRetentionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTagRetentionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateTagRetentionRuleOutcomeCallable TcrClient::CreateTagRetentionRuleCallable(const CreateTagRetentionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTagRetentionRuleOutcome>>();
    CreateTagRetentionRuleAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateTagRetentionRuleRequest&,
        CreateTagRetentionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::CreateWebhookTriggerOutcome TcrClient::CreateWebhookTrigger(const CreateWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebhookTriggerResponse rsp = CreateWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebhookTriggerOutcome(rsp);
        else
            return CreateWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::CreateWebhookTriggerAsync(const CreateWebhookTriggerRequest& request, const CreateWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebhookTriggerRequest&;
    using Resp = CreateWebhookTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebhookTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::CreateWebhookTriggerOutcomeCallable TcrClient::CreateWebhookTriggerCallable(const CreateWebhookTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebhookTriggerOutcome>>();
    CreateWebhookTriggerAsync(
    request,
    [prom](
        const TcrClient*,
        const CreateWebhookTriggerRequest&,
        CreateWebhookTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteImageOutcome TcrClient::DeleteImage(const DeleteImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageResponse rsp = DeleteImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageOutcome(rsp);
        else
            return DeleteImageOutcome(o.GetError());
    }
    else
    {
        return DeleteImageOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImageRequest&;
    using Resp = DeleteImageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteImageOutcomeCallable TcrClient::DeleteImageCallable(const DeleteImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageOutcome>>();
    DeleteImageAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteImageRequest&,
        DeleteImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteImageAccelerateServiceOutcome TcrClient::DeleteImageAccelerateService(const DeleteImageAccelerateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageAccelerateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageAccelerateServiceResponse rsp = DeleteImageAccelerateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageAccelerateServiceOutcome(rsp);
        else
            return DeleteImageAccelerateServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteImageAccelerateServiceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageAccelerateServiceAsync(const DeleteImageAccelerateServiceRequest& request, const DeleteImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImageAccelerateServiceRequest&;
    using Resp = DeleteImageAccelerateServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImageAccelerateService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteImageAccelerateServiceOutcomeCallable TcrClient::DeleteImageAccelerateServiceCallable(const DeleteImageAccelerateServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageAccelerateServiceOutcome>>();
    DeleteImageAccelerateServiceAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteImageAccelerateServiceRequest&,
        DeleteImageAccelerateServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteImmutableTagRulesRequest&;
    using Resp = DeleteImmutableTagRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImmutableTagRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteImmutableTagRulesOutcomeCallable TcrClient::DeleteImmutableTagRulesCallable(const DeleteImmutableTagRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImmutableTagRulesOutcome>>();
    DeleteImmutableTagRulesAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteImmutableTagRulesRequest&,
        DeleteImmutableTagRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteInstanceOutcome TcrClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteInstanceOutcomeCallable TcrClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteInstanceCustomizedDomainOutcome TcrClient::DeleteInstanceCustomizedDomain(const DeleteInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceCustomizedDomainResponse rsp = DeleteInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceCustomizedDomainOutcome(rsp);
        else
            return DeleteInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceCustomizedDomainAsync(const DeleteInstanceCustomizedDomainRequest& request, const DeleteInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceCustomizedDomainRequest&;
    using Resp = DeleteInstanceCustomizedDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstanceCustomizedDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteInstanceCustomizedDomainOutcomeCallable TcrClient::DeleteInstanceCustomizedDomainCallable(const DeleteInstanceCustomizedDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceCustomizedDomainOutcome>>();
    DeleteInstanceCustomizedDomainAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteInstanceCustomizedDomainRequest&,
        DeleteInstanceCustomizedDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteInstanceTokenOutcome TcrClient::DeleteInstanceToken(const DeleteInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceTokenResponse rsp = DeleteInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceTokenOutcome(rsp);
        else
            return DeleteInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceTokenAsync(const DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceTokenRequest&;
    using Resp = DeleteInstanceTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstanceToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteInstanceTokenOutcomeCallable TcrClient::DeleteInstanceTokenCallable(const DeleteInstanceTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceTokenOutcome>>();
    DeleteInstanceTokenAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteInstanceTokenRequest&,
        DeleteInstanceTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteMultipleSecurityPolicyRequest&;
    using Resp = DeleteMultipleSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMultipleSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteMultipleSecurityPolicyOutcomeCallable TcrClient::DeleteMultipleSecurityPolicyCallable(const DeleteMultipleSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMultipleSecurityPolicyOutcome>>();
    DeleteMultipleSecurityPolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteMultipleSecurityPolicyRequest&,
        DeleteMultipleSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteNamespaceOutcome TcrClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNamespaceRequest&;
    using Resp = DeleteNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteNamespaceOutcomeCallable TcrClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNamespaceOutcome>>();
    DeleteNamespaceAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteNamespaceRequest&,
        DeleteNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteReplicationInstanceOutcome TcrClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReplicationInstanceResponse rsp = DeleteReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReplicationInstanceOutcome(rsp);
        else
            return DeleteReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteReplicationInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReplicationInstanceRequest&;
    using Resp = DeleteReplicationInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReplicationInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteReplicationInstanceOutcomeCallable TcrClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReplicationInstanceOutcome>>();
    DeleteReplicationInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteReplicationInstanceRequest&,
        DeleteReplicationInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteRepositoryOutcome TcrClient::DeleteRepository(const DeleteRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryResponse rsp = DeleteRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryOutcome(rsp);
        else
            return DeleteRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRepositoryRequest&;
    using Resp = DeleteRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteRepositoryOutcomeCallable TcrClient::DeleteRepositoryCallable(const DeleteRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRepositoryOutcome>>();
    DeleteRepositoryAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteRepositoryRequest&,
        DeleteRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteRepositoryTagsOutcome TcrClient::DeleteRepositoryTags(const DeleteRepositoryTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepositoryTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryTagsResponse rsp = DeleteRepositoryTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryTagsOutcome(rsp);
        else
            return DeleteRepositoryTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryTagsOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryTagsAsync(const DeleteRepositoryTagsRequest& request, const DeleteRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRepositoryTagsRequest&;
    using Resp = DeleteRepositoryTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRepositoryTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteRepositoryTagsOutcomeCallable TcrClient::DeleteRepositoryTagsCallable(const DeleteRepositoryTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRepositoryTagsOutcome>>();
    DeleteRepositoryTagsAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteRepositoryTagsRequest&,
        DeleteRepositoryTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteSecurityPolicyOutcome TcrClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityPolicyResponse rsp = DeleteSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityPolicyOutcome(rsp);
        else
            return DeleteSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityPolicyRequest&;
    using Resp = DeleteSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteSecurityPolicyOutcomeCallable TcrClient::DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityPolicyOutcome>>();
    DeleteSecurityPolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteSecurityPolicyRequest&,
        DeleteSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteServiceAccountOutcome TcrClient::DeleteServiceAccount(const DeleteServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceAccountResponse rsp = DeleteServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceAccountOutcome(rsp);
        else
            return DeleteServiceAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteServiceAccountAsync(const DeleteServiceAccountRequest& request, const DeleteServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceAccountRequest&;
    using Resp = DeleteServiceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteServiceAccountOutcomeCallable TcrClient::DeleteServiceAccountCallable(const DeleteServiceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceAccountOutcome>>();
    DeleteServiceAccountAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteServiceAccountRequest&,
        DeleteServiceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteSignaturePolicyOutcome TcrClient::DeleteSignaturePolicy(const DeleteSignaturePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSignaturePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSignaturePolicyResponse rsp = DeleteSignaturePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSignaturePolicyOutcome(rsp);
        else
            return DeleteSignaturePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteSignaturePolicyOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteSignaturePolicyAsync(const DeleteSignaturePolicyRequest& request, const DeleteSignaturePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSignaturePolicyRequest&;
    using Resp = DeleteSignaturePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSignaturePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteSignaturePolicyOutcomeCallable TcrClient::DeleteSignaturePolicyCallable(const DeleteSignaturePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSignaturePolicyOutcome>>();
    DeleteSignaturePolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteSignaturePolicyRequest&,
        DeleteSignaturePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteTagRetentionRuleOutcome TcrClient::DeleteTagRetentionRule(const DeleteTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagRetentionRuleResponse rsp = DeleteTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagRetentionRuleOutcome(rsp);
        else
            return DeleteTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteTagRetentionRuleAsync(const DeleteTagRetentionRuleRequest& request, const DeleteTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagRetentionRuleRequest&;
    using Resp = DeleteTagRetentionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTagRetentionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteTagRetentionRuleOutcomeCallable TcrClient::DeleteTagRetentionRuleCallable(const DeleteTagRetentionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagRetentionRuleOutcome>>();
    DeleteTagRetentionRuleAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteTagRetentionRuleRequest&,
        DeleteTagRetentionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DeleteWebhookTriggerOutcome TcrClient::DeleteWebhookTrigger(const DeleteWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebhookTriggerResponse rsp = DeleteWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebhookTriggerOutcome(rsp);
        else
            return DeleteWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteWebhookTriggerAsync(const DeleteWebhookTriggerRequest& request, const DeleteWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebhookTriggerRequest&;
    using Resp = DeleteWebhookTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebhookTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DeleteWebhookTriggerOutcomeCallable TcrClient::DeleteWebhookTriggerCallable(const DeleteWebhookTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebhookTriggerOutcome>>();
    DeleteWebhookTriggerAsync(
    request,
    [prom](
        const TcrClient*,
        const DeleteWebhookTriggerRequest&,
        DeleteWebhookTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeChartDownloadInfoOutcome TcrClient::DescribeChartDownloadInfo(const DescribeChartDownloadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChartDownloadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChartDownloadInfoResponse rsp = DescribeChartDownloadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChartDownloadInfoOutcome(rsp);
        else
            return DescribeChartDownloadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeChartDownloadInfoOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeChartDownloadInfoAsync(const DescribeChartDownloadInfoRequest& request, const DescribeChartDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChartDownloadInfoRequest&;
    using Resp = DescribeChartDownloadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChartDownloadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeChartDownloadInfoOutcomeCallable TcrClient::DescribeChartDownloadInfoCallable(const DescribeChartDownloadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChartDownloadInfoOutcome>>();
    DescribeChartDownloadInfoAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeChartDownloadInfoRequest&,
        DescribeChartDownloadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeExternalEndpointStatusOutcome TcrClient::DescribeExternalEndpointStatus(const DescribeExternalEndpointStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalEndpointStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalEndpointStatusResponse rsp = DescribeExternalEndpointStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalEndpointStatusOutcome(rsp);
        else
            return DescribeExternalEndpointStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalEndpointStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeExternalEndpointStatusAsync(const DescribeExternalEndpointStatusRequest& request, const DescribeExternalEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExternalEndpointStatusRequest&;
    using Resp = DescribeExternalEndpointStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExternalEndpointStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeExternalEndpointStatusOutcomeCallable TcrClient::DescribeExternalEndpointStatusCallable(const DescribeExternalEndpointStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExternalEndpointStatusOutcome>>();
    DescribeExternalEndpointStatusAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeExternalEndpointStatusRequest&,
        DescribeExternalEndpointStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeGCJobsOutcome TcrClient::DescribeGCJobs(const DescribeGCJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGCJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGCJobsResponse rsp = DescribeGCJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGCJobsOutcome(rsp);
        else
            return DescribeGCJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeGCJobsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeGCJobsAsync(const DescribeGCJobsRequest& request, const DescribeGCJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGCJobsRequest&;
    using Resp = DescribeGCJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGCJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeGCJobsOutcomeCallable TcrClient::DescribeGCJobsCallable(const DescribeGCJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGCJobsOutcome>>();
    DescribeGCJobsAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeGCJobsRequest&,
        DescribeGCJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeImageAccelerateServiceOutcome TcrClient::DescribeImageAccelerateService(const DescribeImageAccelerateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAccelerateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAccelerateServiceResponse rsp = DescribeImageAccelerateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAccelerateServiceOutcome(rsp);
        else
            return DescribeImageAccelerateServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAccelerateServiceOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageAccelerateServiceAsync(const DescribeImageAccelerateServiceRequest& request, const DescribeImageAccelerateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAccelerateServiceRequest&;
    using Resp = DescribeImageAccelerateServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAccelerateService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeImageAccelerateServiceOutcomeCallable TcrClient::DescribeImageAccelerateServiceCallable(const DescribeImageAccelerateServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAccelerateServiceOutcome>>();
    DescribeImageAccelerateServiceAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeImageAccelerateServiceRequest&,
        DescribeImageAccelerateServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeImageManifestsOutcome TcrClient::DescribeImageManifests(const DescribeImageManifestsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageManifests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageManifestsResponse rsp = DescribeImageManifestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageManifestsOutcome(rsp);
        else
            return DescribeImageManifestsOutcome(o.GetError());
    }
    else
    {
        return DescribeImageManifestsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageManifestsAsync(const DescribeImageManifestsRequest& request, const DescribeImageManifestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageManifestsRequest&;
    using Resp = DescribeImageManifestsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageManifests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeImageManifestsOutcomeCallable TcrClient::DescribeImageManifestsCallable(const DescribeImageManifestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageManifestsOutcome>>();
    DescribeImageManifestsAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeImageManifestsRequest&,
        DescribeImageManifestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeImagesOutcome TcrClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeImagesOutcomeCallable TcrClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImmutableTagRulesRequest&;
    using Resp = DescribeImmutableTagRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImmutableTagRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeImmutableTagRulesOutcomeCallable TcrClient::DescribeImmutableTagRulesCallable(const DescribeImmutableTagRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImmutableTagRulesOutcome>>();
    DescribeImmutableTagRulesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeImmutableTagRulesRequest&,
        DescribeImmutableTagRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInstanceAllNamespacesOutcome TcrClient::DescribeInstanceAllNamespaces(const DescribeInstanceAllNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAllNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAllNamespacesResponse rsp = DescribeInstanceAllNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAllNamespacesOutcome(rsp);
        else
            return DescribeInstanceAllNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAllNamespacesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceAllNamespacesAsync(const DescribeInstanceAllNamespacesRequest& request, const DescribeInstanceAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceAllNamespacesRequest&;
    using Resp = DescribeInstanceAllNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceAllNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInstanceAllNamespacesOutcomeCallable TcrClient::DescribeInstanceAllNamespacesCallable(const DescribeInstanceAllNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceAllNamespacesOutcome>>();
    DescribeInstanceAllNamespacesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInstanceAllNamespacesRequest&,
        DescribeInstanceAllNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInstanceCustomizedDomainOutcome TcrClient::DescribeInstanceCustomizedDomain(const DescribeInstanceCustomizedDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCustomizedDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCustomizedDomainResponse rsp = DescribeInstanceCustomizedDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCustomizedDomainOutcome(rsp);
        else
            return DescribeInstanceCustomizedDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCustomizedDomainOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceCustomizedDomainAsync(const DescribeInstanceCustomizedDomainRequest& request, const DescribeInstanceCustomizedDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceCustomizedDomainRequest&;
    using Resp = DescribeInstanceCustomizedDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceCustomizedDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInstanceCustomizedDomainOutcomeCallable TcrClient::DescribeInstanceCustomizedDomainCallable(const DescribeInstanceCustomizedDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceCustomizedDomainOutcome>>();
    DescribeInstanceCustomizedDomainAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInstanceCustomizedDomainRequest&,
        DescribeInstanceCustomizedDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInstanceStatusOutcome TcrClient::DescribeInstanceStatus(const DescribeInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStatusResponse rsp = DescribeInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStatusOutcome(rsp);
        else
            return DescribeInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceStatusRequest&;
    using Resp = DescribeInstanceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInstanceStatusOutcomeCallable TcrClient::DescribeInstanceStatusCallable(const DescribeInstanceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceStatusOutcome>>();
    DescribeInstanceStatusAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInstanceStatusRequest&,
        DescribeInstanceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInstanceTokenOutcome TcrClient::DescribeInstanceToken(const DescribeInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTokenResponse rsp = DescribeInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTokenOutcome(rsp);
        else
            return DescribeInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceTokenAsync(const DescribeInstanceTokenRequest& request, const DescribeInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTokenRequest&;
    using Resp = DescribeInstanceTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInstanceTokenOutcomeCallable TcrClient::DescribeInstanceTokenCallable(const DescribeInstanceTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTokenOutcome>>();
    DescribeInstanceTokenAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInstanceTokenRequest&,
        DescribeInstanceTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInstancesOutcome TcrClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInstancesOutcomeCallable TcrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeInternalEndpointsOutcome TcrClient::DescribeInternalEndpoints(const DescribeInternalEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternalEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternalEndpointsResponse rsp = DescribeInternalEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternalEndpointsOutcome(rsp);
        else
            return DescribeInternalEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeInternalEndpointsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInternalEndpointsAsync(const DescribeInternalEndpointsRequest& request, const DescribeInternalEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInternalEndpointsRequest&;
    using Resp = DescribeInternalEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInternalEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeInternalEndpointsOutcomeCallable TcrClient::DescribeInternalEndpointsCallable(const DescribeInternalEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInternalEndpointsOutcome>>();
    DescribeInternalEndpointsAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeInternalEndpointsRequest&,
        DescribeInternalEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeNamespacesOutcome TcrClient::DescribeNamespaces(const DescribeNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacesResponse rsp = DescribeNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacesOutcome(rsp);
        else
            return DescribeNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNamespacesRequest&;
    using Resp = DescribeNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeNamespacesOutcomeCallable TcrClient::DescribeNamespacesCallable(const DescribeNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNamespacesOutcome>>();
    DescribeNamespacesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeNamespacesRequest&,
        DescribeNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeRegionsOutcome TcrClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeRegionsOutcomeCallable TcrClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeReplicationInstanceCreateTasksRequest&;
    using Resp = DescribeReplicationInstanceCreateTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplicationInstanceCreateTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeReplicationInstanceCreateTasksOutcomeCallable TcrClient::DescribeReplicationInstanceCreateTasksCallable(const DescribeReplicationInstanceCreateTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplicationInstanceCreateTasksOutcome>>();
    DescribeReplicationInstanceCreateTasksAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeReplicationInstanceCreateTasksRequest&,
        DescribeReplicationInstanceCreateTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeReplicationInstanceSyncStatusRequest&;
    using Resp = DescribeReplicationInstanceSyncStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplicationInstanceSyncStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeReplicationInstanceSyncStatusOutcomeCallable TcrClient::DescribeReplicationInstanceSyncStatusCallable(const DescribeReplicationInstanceSyncStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplicationInstanceSyncStatusOutcome>>();
    DescribeReplicationInstanceSyncStatusAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeReplicationInstanceSyncStatusRequest&,
        DescribeReplicationInstanceSyncStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeReplicationInstancesRequest&;
    using Resp = DescribeReplicationInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplicationInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeReplicationInstancesOutcomeCallable TcrClient::DescribeReplicationInstancesCallable(const DescribeReplicationInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplicationInstancesOutcome>>();
    DescribeReplicationInstancesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeReplicationInstancesRequest&,
        DescribeReplicationInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeRepositoriesOutcome TcrClient::DescribeRepositories(const DescribeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoriesResponse rsp = DescribeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoriesOutcome(rsp);
        else
            return DescribeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoriesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRepositoriesRequest&;
    using Resp = DescribeRepositoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRepositories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeRepositoriesOutcomeCallable TcrClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRepositoriesOutcome>>();
    DescribeRepositoriesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeRepositoriesRequest&,
        DescribeRepositoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeSecurityPoliciesOutcome TcrClient::DescribeSecurityPolicies(const DescribeSecurityPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPoliciesResponse rsp = DescribeSecurityPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPoliciesOutcome(rsp);
        else
            return DescribeSecurityPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPoliciesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeSecurityPoliciesAsync(const DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPoliciesRequest&;
    using Resp = DescribeSecurityPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeSecurityPoliciesOutcomeCallable TcrClient::DescribeSecurityPoliciesCallable(const DescribeSecurityPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPoliciesOutcome>>();
    DescribeSecurityPoliciesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeSecurityPoliciesRequest&,
        DescribeSecurityPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeServiceAccountsOutcome TcrClient::DescribeServiceAccounts(const DescribeServiceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceAccountsResponse rsp = DescribeServiceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceAccountsOutcome(rsp);
        else
            return DescribeServiceAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceAccountsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeServiceAccountsAsync(const DescribeServiceAccountsRequest& request, const DescribeServiceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceAccountsRequest&;
    using Resp = DescribeServiceAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeServiceAccountsOutcomeCallable TcrClient::DescribeServiceAccountsCallable(const DescribeServiceAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceAccountsOutcome>>();
    DescribeServiceAccountsAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeServiceAccountsRequest&,
        DescribeServiceAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeTagRetentionExecutionOutcome TcrClient::DescribeTagRetentionExecution(const DescribeTagRetentionExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionExecutionResponse rsp = DescribeTagRetentionExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionExecutionOutcome(rsp);
        else
            return DescribeTagRetentionExecutionOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionExecutionOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionExecutionAsync(const DescribeTagRetentionExecutionRequest& request, const DescribeTagRetentionExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagRetentionExecutionRequest&;
    using Resp = DescribeTagRetentionExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagRetentionExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeTagRetentionExecutionOutcomeCallable TcrClient::DescribeTagRetentionExecutionCallable(const DescribeTagRetentionExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagRetentionExecutionOutcome>>();
    DescribeTagRetentionExecutionAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeTagRetentionExecutionRequest&,
        DescribeTagRetentionExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeTagRetentionExecutionTaskOutcome TcrClient::DescribeTagRetentionExecutionTask(const DescribeTagRetentionExecutionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionExecutionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionExecutionTaskResponse rsp = DescribeTagRetentionExecutionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionExecutionTaskOutcome(rsp);
        else
            return DescribeTagRetentionExecutionTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionExecutionTaskOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionExecutionTaskAsync(const DescribeTagRetentionExecutionTaskRequest& request, const DescribeTagRetentionExecutionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagRetentionExecutionTaskRequest&;
    using Resp = DescribeTagRetentionExecutionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagRetentionExecutionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeTagRetentionExecutionTaskOutcomeCallable TcrClient::DescribeTagRetentionExecutionTaskCallable(const DescribeTagRetentionExecutionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagRetentionExecutionTaskOutcome>>();
    DescribeTagRetentionExecutionTaskAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeTagRetentionExecutionTaskRequest&,
        DescribeTagRetentionExecutionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeTagRetentionRulesOutcome TcrClient::DescribeTagRetentionRules(const DescribeTagRetentionRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagRetentionRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagRetentionRulesResponse rsp = DescribeTagRetentionRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagRetentionRulesOutcome(rsp);
        else
            return DescribeTagRetentionRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagRetentionRulesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeTagRetentionRulesAsync(const DescribeTagRetentionRulesRequest& request, const DescribeTagRetentionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagRetentionRulesRequest&;
    using Resp = DescribeTagRetentionRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagRetentionRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeTagRetentionRulesOutcomeCallable TcrClient::DescribeTagRetentionRulesCallable(const DescribeTagRetentionRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagRetentionRulesOutcome>>();
    DescribeTagRetentionRulesAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeTagRetentionRulesRequest&,
        DescribeTagRetentionRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeWebhookTriggerOutcome TcrClient::DescribeWebhookTrigger(const DescribeWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerResponse rsp = DescribeWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerOutcome(rsp);
        else
            return DescribeWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerAsync(const DescribeWebhookTriggerRequest& request, const DescribeWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebhookTriggerRequest&;
    using Resp = DescribeWebhookTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebhookTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeWebhookTriggerOutcomeCallable TcrClient::DescribeWebhookTriggerCallable(const DescribeWebhookTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebhookTriggerOutcome>>();
    DescribeWebhookTriggerAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeWebhookTriggerRequest&,
        DescribeWebhookTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DescribeWebhookTriggerLogOutcome TcrClient::DescribeWebhookTriggerLog(const DescribeWebhookTriggerLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTriggerLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerLogResponse rsp = DescribeWebhookTriggerLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerLogOutcome(rsp);
        else
            return DescribeWebhookTriggerLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerLogOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerLogAsync(const DescribeWebhookTriggerLogRequest& request, const DescribeWebhookTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebhookTriggerLogRequest&;
    using Resp = DescribeWebhookTriggerLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebhookTriggerLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DescribeWebhookTriggerLogOutcomeCallable TcrClient::DescribeWebhookTriggerLogCallable(const DescribeWebhookTriggerLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebhookTriggerLogOutcome>>();
    DescribeWebhookTriggerLogAsync(
    request,
    [prom](
        const TcrClient*,
        const DescribeWebhookTriggerLogRequest&,
        DescribeWebhookTriggerLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DownloadHelmChartOutcome TcrClient::DownloadHelmChart(const DownloadHelmChartRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadHelmChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadHelmChartResponse rsp = DownloadHelmChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadHelmChartOutcome(rsp);
        else
            return DownloadHelmChartOutcome(o.GetError());
    }
    else
    {
        return DownloadHelmChartOutcome(outcome.GetError());
    }
}

void TcrClient::DownloadHelmChartAsync(const DownloadHelmChartRequest& request, const DownloadHelmChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadHelmChartRequest&;
    using Resp = DownloadHelmChartResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadHelmChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DownloadHelmChartOutcomeCallable TcrClient::DownloadHelmChartCallable(const DownloadHelmChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadHelmChartOutcome>>();
    DownloadHelmChartAsync(
    request,
    [prom](
        const TcrClient*,
        const DownloadHelmChartRequest&,
        DownloadHelmChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::DuplicateImageOutcome TcrClient::DuplicateImage(const DuplicateImageRequest &request)
{
    auto outcome = MakeRequest(request, "DuplicateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DuplicateImageResponse rsp = DuplicateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DuplicateImageOutcome(rsp);
        else
            return DuplicateImageOutcome(o.GetError());
    }
    else
    {
        return DuplicateImageOutcome(outcome.GetError());
    }
}

void TcrClient::DuplicateImageAsync(const DuplicateImageRequest& request, const DuplicateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DuplicateImageRequest&;
    using Resp = DuplicateImageResponse;

    DoRequestAsync<Req, Resp>(
        "DuplicateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::DuplicateImageOutcomeCallable TcrClient::DuplicateImageCallable(const DuplicateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DuplicateImageOutcome>>();
    DuplicateImageAsync(
    request,
    [prom](
        const TcrClient*,
        const DuplicateImageRequest&,
        DuplicateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ManageExternalEndpointOutcome TcrClient::ManageExternalEndpoint(const ManageExternalEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ManageExternalEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageExternalEndpointResponse rsp = ManageExternalEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageExternalEndpointOutcome(rsp);
        else
            return ManageExternalEndpointOutcome(o.GetError());
    }
    else
    {
        return ManageExternalEndpointOutcome(outcome.GetError());
    }
}

void TcrClient::ManageExternalEndpointAsync(const ManageExternalEndpointRequest& request, const ManageExternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManageExternalEndpointRequest&;
    using Resp = ManageExternalEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ManageExternalEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ManageExternalEndpointOutcomeCallable TcrClient::ManageExternalEndpointCallable(const ManageExternalEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageExternalEndpointOutcome>>();
    ManageExternalEndpointAsync(
    request,
    [prom](
        const TcrClient*,
        const ManageExternalEndpointRequest&,
        ManageExternalEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ManageInternalEndpointOutcome TcrClient::ManageInternalEndpoint(const ManageInternalEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ManageInternalEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageInternalEndpointResponse rsp = ManageInternalEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageInternalEndpointOutcome(rsp);
        else
            return ManageInternalEndpointOutcome(o.GetError());
    }
    else
    {
        return ManageInternalEndpointOutcome(outcome.GetError());
    }
}

void TcrClient::ManageInternalEndpointAsync(const ManageInternalEndpointRequest& request, const ManageInternalEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManageInternalEndpointRequest&;
    using Resp = ManageInternalEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ManageInternalEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ManageInternalEndpointOutcomeCallable TcrClient::ManageInternalEndpointCallable(const ManageInternalEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageInternalEndpointOutcome>>();
    ManageInternalEndpointAsync(
    request,
    [prom](
        const TcrClient*,
        const ManageInternalEndpointRequest&,
        ManageInternalEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ManageReplicationRequest&;
    using Resp = ManageReplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ManageReplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ManageReplicationOutcomeCallable TcrClient::ManageReplicationCallable(const ManageReplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageReplicationOutcome>>();
    ManageReplicationAsync(
    request,
    [prom](
        const TcrClient*,
        const ManageReplicationRequest&,
        ManageReplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyImmutableTagRulesRequest&;
    using Resp = ModifyImmutableTagRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImmutableTagRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyImmutableTagRulesOutcomeCallable TcrClient::ModifyImmutableTagRulesCallable(const ModifyImmutableTagRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImmutableTagRulesOutcome>>();
    ModifyImmutableTagRulesAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyImmutableTagRulesRequest&,
        ModifyImmutableTagRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyInstanceOutcomeCallable TcrClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyInstanceTokenOutcome TcrClient::ModifyInstanceToken(const ModifyInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceTokenResponse rsp = ModifyInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceTokenOutcome(rsp);
        else
            return ModifyInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyInstanceTokenAsync(const ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceTokenRequest&;
    using Resp = ModifyInstanceTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyInstanceTokenOutcomeCallable TcrClient::ModifyInstanceTokenCallable(const ModifyInstanceTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceTokenOutcome>>();
    ModifyInstanceTokenAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyInstanceTokenRequest&,
        ModifyInstanceTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyNamespaceOutcome TcrClient::ModifyNamespace(const ModifyNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNamespaceResponse rsp = ModifyNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNamespaceOutcome(rsp);
        else
            return ModifyNamespaceOutcome(o.GetError());
    }
    else
    {
        return ModifyNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyNamespaceAsync(const ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNamespaceRequest&;
    using Resp = ModifyNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyNamespaceOutcomeCallable TcrClient::ModifyNamespaceCallable(const ModifyNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNamespaceOutcome>>();
    ModifyNamespaceAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyNamespaceRequest&,
        ModifyNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyRepositoryOutcome TcrClient::ModifyRepository(const ModifyRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryResponse rsp = ModifyRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryOutcome(rsp);
        else
            return ModifyRepositoryOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryAsync(const ModifyRepositoryRequest& request, const ModifyRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRepositoryRequest&;
    using Resp = ModifyRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyRepositoryOutcomeCallable TcrClient::ModifyRepositoryCallable(const ModifyRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRepositoryOutcome>>();
    ModifyRepositoryAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyRepositoryRequest&,
        ModifyRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifySecurityPolicyOutcome TcrClient::ModifySecurityPolicy(const ModifySecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityPolicyResponse rsp = ModifySecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityPolicyOutcome(rsp);
        else
            return ModifySecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityPolicyOutcome(outcome.GetError());
    }
}

void TcrClient::ModifySecurityPolicyAsync(const ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityPolicyRequest&;
    using Resp = ModifySecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifySecurityPolicyOutcomeCallable TcrClient::ModifySecurityPolicyCallable(const ModifySecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityPolicyOutcome>>();
    ModifySecurityPolicyAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifySecurityPolicyRequest&,
        ModifySecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyServiceAccountOutcome TcrClient::ModifyServiceAccount(const ModifyServiceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceAccountResponse rsp = ModifyServiceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceAccountOutcome(rsp);
        else
            return ModifyServiceAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceAccountOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyServiceAccountAsync(const ModifyServiceAccountRequest& request, const ModifyServiceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceAccountRequest&;
    using Resp = ModifyServiceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServiceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyServiceAccountOutcomeCallable TcrClient::ModifyServiceAccountCallable(const ModifyServiceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceAccountOutcome>>();
    ModifyServiceAccountAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyServiceAccountRequest&,
        ModifyServiceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyServiceAccountPasswordOutcome TcrClient::ModifyServiceAccountPassword(const ModifyServiceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceAccountPasswordResponse rsp = ModifyServiceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceAccountPasswordOutcome(rsp);
        else
            return ModifyServiceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceAccountPasswordOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyServiceAccountPasswordAsync(const ModifyServiceAccountPasswordRequest& request, const ModifyServiceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceAccountPasswordRequest&;
    using Resp = ModifyServiceAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServiceAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyServiceAccountPasswordOutcomeCallable TcrClient::ModifyServiceAccountPasswordCallable(const ModifyServiceAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceAccountPasswordOutcome>>();
    ModifyServiceAccountPasswordAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyServiceAccountPasswordRequest&,
        ModifyServiceAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyTagRetentionRuleOutcome TcrClient::ModifyTagRetentionRule(const ModifyTagRetentionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTagRetentionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTagRetentionRuleResponse rsp = ModifyTagRetentionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTagRetentionRuleOutcome(rsp);
        else
            return ModifyTagRetentionRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyTagRetentionRuleOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyTagRetentionRuleAsync(const ModifyTagRetentionRuleRequest& request, const ModifyTagRetentionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTagRetentionRuleRequest&;
    using Resp = ModifyTagRetentionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTagRetentionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyTagRetentionRuleOutcomeCallable TcrClient::ModifyTagRetentionRuleCallable(const ModifyTagRetentionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTagRetentionRuleOutcome>>();
    ModifyTagRetentionRuleAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyTagRetentionRuleRequest&,
        ModifyTagRetentionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::ModifyWebhookTriggerOutcome TcrClient::ModifyWebhookTrigger(const ModifyWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebhookTriggerResponse rsp = ModifyWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebhookTriggerOutcome(rsp);
        else
            return ModifyWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return ModifyWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyWebhookTriggerAsync(const ModifyWebhookTriggerRequest& request, const ModifyWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebhookTriggerRequest&;
    using Resp = ModifyWebhookTriggerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebhookTrigger", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::ModifyWebhookTriggerOutcomeCallable TcrClient::ModifyWebhookTriggerCallable(const ModifyWebhookTriggerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebhookTriggerOutcome>>();
    ModifyWebhookTriggerAsync(
    request,
    [prom](
        const TcrClient*,
        const ModifyWebhookTriggerRequest&,
        ModifyWebhookTriggerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcrClient::RenewInstanceOutcome TcrClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstanceRequest&;
    using Resp = RenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcrClient::RenewInstanceOutcomeCallable TcrClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstanceOutcome>>();
    RenewInstanceAsync(
    request,
    [prom](
        const TcrClient*,
        const RenewInstanceRequest&,
        RenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

