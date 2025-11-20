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

#include <tencentcloud/teo/v20220106/TeoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Teo::V20220106;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-06";
    const string ENDPOINT = "teo.intl.tencentcloudapi.com";
}

TeoClient::TeoClient(const Credential &credential, const string &region) :
    TeoClient(credential, region, ClientProfile())
{
}

TeoClient::TeoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TeoClient::CheckCertificateOutcome TeoClient::CheckCertificate(const CheckCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateResponse rsp = CheckCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateOutcome(rsp);
        else
            return CheckCertificateOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::CheckCertificateAsync(const CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckCertificateRequest&;
    using Resp = CheckCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CheckCertificateOutcomeCallable TeoClient::CheckCertificateCallable(const CheckCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCertificateOutcome>>();
    CheckCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const CheckCertificateRequest&,
        CheckCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateApplicationProxyOutcome TeoClient::CreateApplicationProxy(const CreateApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyResponse rsp = CreateApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyOutcome(rsp);
        else
            return CreateApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyAsync(const CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationProxyRequest&;
    using Resp = CreateApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateApplicationProxyOutcomeCallable TeoClient::CreateApplicationProxyCallable(const CreateApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProxyOutcome>>();
    CreateApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateApplicationProxyRequest&,
        CreateApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateApplicationProxyRuleOutcome TeoClient::CreateApplicationProxyRule(const CreateApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyRuleResponse rsp = CreateApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyRuleOutcome(rsp);
        else
            return CreateApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyRuleAsync(const CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationProxyRuleRequest&;
    using Resp = CreateApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateApplicationProxyRuleOutcomeCallable TeoClient::CreateApplicationProxyRuleCallable(const CreateApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProxyRuleOutcome>>();
    CreateApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateApplicationProxyRuleRequest&,
        CreateApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateApplicationProxyRulesOutcome TeoClient::CreateApplicationProxyRules(const CreateApplicationProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyRulesResponse rsp = CreateApplicationProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyRulesOutcome(rsp);
        else
            return CreateApplicationProxyRulesOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyRulesAsync(const CreateApplicationProxyRulesRequest& request, const CreateApplicationProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationProxyRulesRequest&;
    using Resp = CreateApplicationProxyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProxyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateApplicationProxyRulesOutcomeCallable TeoClient::CreateApplicationProxyRulesCallable(const CreateApplicationProxyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProxyRulesOutcome>>();
    CreateApplicationProxyRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateApplicationProxyRulesRequest&,
        CreateApplicationProxyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateCustomErrorPageOutcome TeoClient::CreateCustomErrorPage(const CreateCustomErrorPageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomErrorPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomErrorPageResponse rsp = CreateCustomErrorPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomErrorPageOutcome(rsp);
        else
            return CreateCustomErrorPageOutcome(o.GetError());
    }
    else
    {
        return CreateCustomErrorPageOutcome(outcome.GetError());
    }
}

void TeoClient::CreateCustomErrorPageAsync(const CreateCustomErrorPageRequest& request, const CreateCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomErrorPageRequest&;
    using Resp = CreateCustomErrorPageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomErrorPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateCustomErrorPageOutcomeCallable TeoClient::CreateCustomErrorPageCallable(const CreateCustomErrorPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomErrorPageOutcome>>();
    CreateCustomErrorPageAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateCustomErrorPageRequest&,
        CreateCustomErrorPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateDnsRecordOutcome TeoClient::CreateDnsRecord(const CreateDnsRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDnsRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDnsRecordResponse rsp = CreateDnsRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDnsRecordOutcome(rsp);
        else
            return CreateDnsRecordOutcome(o.GetError());
    }
    else
    {
        return CreateDnsRecordOutcome(outcome.GetError());
    }
}

void TeoClient::CreateDnsRecordAsync(const CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDnsRecordRequest&;
    using Resp = CreateDnsRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDnsRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateDnsRecordOutcomeCallable TeoClient::CreateDnsRecordCallable(const CreateDnsRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDnsRecordOutcome>>();
    CreateDnsRecordAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateDnsRecordRequest&,
        CreateDnsRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateLoadBalancingOutcome TeoClient::CreateLoadBalancing(const CreateLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancingResponse rsp = CreateLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancingOutcome(rsp);
        else
            return CreateLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLoadBalancingAsync(const CreateLoadBalancingRequest& request, const CreateLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadBalancingRequest&;
    using Resp = CreateLoadBalancingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateLoadBalancingOutcomeCallable TeoClient::CreateLoadBalancingCallable(const CreateLoadBalancingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancingOutcome>>();
    CreateLoadBalancingAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateLoadBalancingRequest&,
        CreateLoadBalancingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateOriginGroupOutcome TeoClient::CreateOriginGroup(const CreateOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOriginGroupResponse rsp = CreateOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOriginGroupOutcome(rsp);
        else
            return CreateOriginGroupOutcome(o.GetError());
    }
    else
    {
        return CreateOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::CreateOriginGroupAsync(const CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOriginGroupRequest&;
    using Resp = CreateOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateOriginGroupOutcomeCallable TeoClient::CreateOriginGroupCallable(const CreateOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOriginGroupOutcome>>();
    CreateOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateOriginGroupRequest&,
        CreateOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreatePrefetchTaskOutcome TeoClient::CreatePrefetchTask(const CreatePrefetchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrefetchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrefetchTaskResponse rsp = CreatePrefetchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrefetchTaskOutcome(rsp);
        else
            return CreatePrefetchTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePrefetchTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePrefetchTaskAsync(const CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrefetchTaskRequest&;
    using Resp = CreatePrefetchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrefetchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrefetchTaskOutcome>>();
    CreatePrefetchTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePrefetchTaskRequest&,
        CreatePrefetchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreatePurgeTaskOutcome TeoClient::CreatePurgeTask(const CreatePurgeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePurgeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePurgeTaskResponse rsp = CreatePurgeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePurgeTaskOutcome(rsp);
        else
            return CreatePurgeTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePurgeTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePurgeTaskAsync(const CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePurgeTaskRequest&;
    using Resp = CreatePurgeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePurgeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePurgeTaskOutcome>>();
    CreatePurgeTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePurgeTaskRequest&,
        CreatePurgeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateZoneOutcome TeoClient::CreateZone(const CreateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateZoneResponse rsp = CreateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateZoneOutcome(rsp);
        else
            return CreateZoneOutcome(o.GetError());
    }
    else
    {
        return CreateZoneOutcome(outcome.GetError());
    }
}

void TeoClient::CreateZoneAsync(const CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateZoneRequest&;
    using Resp = CreateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "CreateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateZoneOutcomeCallable TeoClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateZoneOutcome>>();
    CreateZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateZoneRequest&,
        CreateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteApplicationProxyOutcome TeoClient::DeleteApplicationProxy(const DeleteApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyResponse rsp = DeleteApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyOutcome(rsp);
        else
            return DeleteApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyAsync(const DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationProxyRequest&;
    using Resp = DeleteApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteApplicationProxyOutcomeCallable TeoClient::DeleteApplicationProxyCallable(const DeleteApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationProxyOutcome>>();
    DeleteApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteApplicationProxyRequest&,
        DeleteApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteApplicationProxyRuleOutcome TeoClient::DeleteApplicationProxyRule(const DeleteApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyRuleResponse rsp = DeleteApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyRuleOutcome(rsp);
        else
            return DeleteApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyRuleAsync(const DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationProxyRuleRequest&;
    using Resp = DeleteApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteApplicationProxyRuleOutcomeCallable TeoClient::DeleteApplicationProxyRuleCallable(const DeleteApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationProxyRuleOutcome>>();
    DeleteApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteApplicationProxyRuleRequest&,
        DeleteApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteDnsRecordsOutcome TeoClient::DeleteDnsRecords(const DeleteDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDnsRecordsResponse rsp = DeleteDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDnsRecordsOutcome(rsp);
        else
            return DeleteDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DeleteDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteDnsRecordsAsync(const DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDnsRecordsRequest&;
    using Resp = DeleteDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteDnsRecordsOutcomeCallable TeoClient::DeleteDnsRecordsCallable(const DeleteDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDnsRecordsOutcome>>();
    DeleteDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteDnsRecordsRequest&,
        DeleteDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteLoadBalancingOutcome TeoClient::DeleteLoadBalancing(const DeleteLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancingResponse rsp = DeleteLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancingOutcome(rsp);
        else
            return DeleteLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteLoadBalancingAsync(const DeleteLoadBalancingRequest& request, const DeleteLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancingRequest&;
    using Resp = DeleteLoadBalancingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteLoadBalancingOutcomeCallable TeoClient::DeleteLoadBalancingCallable(const DeleteLoadBalancingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancingOutcome>>();
    DeleteLoadBalancingAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteLoadBalancingRequest&,
        DeleteLoadBalancingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteOriginGroupOutcome TeoClient::DeleteOriginGroup(const DeleteOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOriginGroupResponse rsp = DeleteOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOriginGroupOutcome(rsp);
        else
            return DeleteOriginGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteOriginGroupAsync(const DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOriginGroupRequest&;
    using Resp = DeleteOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteOriginGroupOutcomeCallable TeoClient::DeleteOriginGroupCallable(const DeleteOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOriginGroupOutcome>>();
    DeleteOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteOriginGroupRequest&,
        DeleteOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteZoneOutcome TeoClient::DeleteZone(const DeleteZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteZoneResponse rsp = DeleteZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteZoneOutcome(rsp);
        else
            return DeleteZoneOutcome(o.GetError());
    }
    else
    {
        return DeleteZoneOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteZoneAsync(const DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteZoneRequest&;
    using Resp = DeleteZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteZoneOutcomeCallable TeoClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteZoneOutcome>>();
    DeleteZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteZoneRequest&,
        DeleteZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeApplicationProxyOutcome TeoClient::DescribeApplicationProxy(const DescribeApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProxyResponse rsp = DescribeApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProxyOutcome(rsp);
        else
            return DescribeApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeApplicationProxyAsync(const DescribeApplicationProxyRequest& request, const DescribeApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationProxyRequest&;
    using Resp = DescribeApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeApplicationProxyOutcomeCallable TeoClient::DescribeApplicationProxyCallable(const DescribeApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationProxyOutcome>>();
    DescribeApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeApplicationProxyRequest&,
        DescribeApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeApplicationProxyDetailOutcome TeoClient::DescribeApplicationProxyDetail(const DescribeApplicationProxyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProxyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProxyDetailResponse rsp = DescribeApplicationProxyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProxyDetailOutcome(rsp);
        else
            return DescribeApplicationProxyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProxyDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeApplicationProxyDetailAsync(const DescribeApplicationProxyDetailRequest& request, const DescribeApplicationProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationProxyDetailRequest&;
    using Resp = DescribeApplicationProxyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationProxyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeApplicationProxyDetailOutcomeCallable TeoClient::DescribeApplicationProxyDetailCallable(const DescribeApplicationProxyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationProxyDetailOutcome>>();
    DescribeApplicationProxyDetailAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeApplicationProxyDetailRequest&,
        DescribeApplicationProxyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeBotLogOutcome TeoClient::DescribeBotLog(const DescribeBotLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotLogResponse rsp = DescribeBotLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotLogOutcome(rsp);
        else
            return DescribeBotLogOutcome(o.GetError());
    }
    else
    {
        return DescribeBotLogOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotLogAsync(const DescribeBotLogRequest& request, const DescribeBotLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBotLogRequest&;
    using Resp = DescribeBotLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBotLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeBotLogOutcomeCallable TeoClient::DescribeBotLogCallable(const DescribeBotLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBotLogOutcome>>();
    DescribeBotLogAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeBotLogRequest&,
        DescribeBotLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeBotManagedRulesOutcome TeoClient::DescribeBotManagedRules(const DescribeBotManagedRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotManagedRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotManagedRulesResponse rsp = DescribeBotManagedRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotManagedRulesOutcome(rsp);
        else
            return DescribeBotManagedRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBotManagedRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotManagedRulesAsync(const DescribeBotManagedRulesRequest& request, const DescribeBotManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBotManagedRulesRequest&;
    using Resp = DescribeBotManagedRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBotManagedRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeBotManagedRulesOutcomeCallable TeoClient::DescribeBotManagedRulesCallable(const DescribeBotManagedRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBotManagedRulesOutcome>>();
    DescribeBotManagedRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeBotManagedRulesRequest&,
        DescribeBotManagedRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeCnameStatusOutcome TeoClient::DescribeCnameStatus(const DescribeCnameStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCnameStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCnameStatusResponse rsp = DescribeCnameStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCnameStatusOutcome(rsp);
        else
            return DescribeCnameStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCnameStatusOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeCnameStatusAsync(const DescribeCnameStatusRequest& request, const DescribeCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCnameStatusRequest&;
    using Resp = DescribeCnameStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCnameStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeCnameStatusOutcomeCallable TeoClient::DescribeCnameStatusCallable(const DescribeCnameStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCnameStatusOutcome>>();
    DescribeCnameStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeCnameStatusRequest&,
        DescribeCnameStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDoSPolicyOutcome TeoClient::DescribeDDoSPolicy(const DescribeDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSPolicyResponse rsp = DescribeDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSPolicyOutcome(rsp);
        else
            return DescribeDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSPolicyAsync(const DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSPolicyRequest&;
    using Resp = DescribeDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDoSPolicyOutcomeCallable TeoClient::DescribeDDoSPolicyCallable(const DescribeDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSPolicyOutcome>>();
    DescribeDDoSPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDoSPolicyRequest&,
        DescribeDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosAttackDataOutcome TeoClient::DescribeDDosAttackData(const DescribeDDosAttackDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosAttackData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosAttackDataResponse rsp = DescribeDDosAttackDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosAttackDataOutcome(rsp);
        else
            return DescribeDDosAttackDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosAttackDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosAttackDataAsync(const DescribeDDosAttackDataRequest& request, const DescribeDDosAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosAttackDataRequest&;
    using Resp = DescribeDDosAttackDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosAttackData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosAttackDataOutcomeCallable TeoClient::DescribeDDosAttackDataCallable(const DescribeDDosAttackDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosAttackDataOutcome>>();
    DescribeDDosAttackDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosAttackDataRequest&,
        DescribeDDosAttackDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosAttackEventOutcome TeoClient::DescribeDDosAttackEvent(const DescribeDDosAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosAttackEventResponse rsp = DescribeDDosAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosAttackEventOutcome(rsp);
        else
            return DescribeDDosAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosAttackEventAsync(const DescribeDDosAttackEventRequest& request, const DescribeDDosAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosAttackEventRequest&;
    using Resp = DescribeDDosAttackEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosAttackEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosAttackEventOutcomeCallable TeoClient::DescribeDDosAttackEventCallable(const DescribeDDosAttackEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosAttackEventOutcome>>();
    DescribeDDosAttackEventAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosAttackEventRequest&,
        DescribeDDosAttackEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosAttackEventDetailOutcome TeoClient::DescribeDDosAttackEventDetail(const DescribeDDosAttackEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosAttackEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosAttackEventDetailResponse rsp = DescribeDDosAttackEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosAttackEventDetailOutcome(rsp);
        else
            return DescribeDDosAttackEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosAttackEventDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosAttackEventDetailAsync(const DescribeDDosAttackEventDetailRequest& request, const DescribeDDosAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosAttackEventDetailRequest&;
    using Resp = DescribeDDosAttackEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosAttackEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosAttackEventDetailOutcomeCallable TeoClient::DescribeDDosAttackEventDetailCallable(const DescribeDDosAttackEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosAttackEventDetailOutcome>>();
    DescribeDDosAttackEventDetailAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosAttackEventDetailRequest&,
        DescribeDDosAttackEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosAttackSourceEventOutcome TeoClient::DescribeDDosAttackSourceEvent(const DescribeDDosAttackSourceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosAttackSourceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosAttackSourceEventResponse rsp = DescribeDDosAttackSourceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosAttackSourceEventOutcome(rsp);
        else
            return DescribeDDosAttackSourceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosAttackSourceEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosAttackSourceEventAsync(const DescribeDDosAttackSourceEventRequest& request, const DescribeDDosAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosAttackSourceEventRequest&;
    using Resp = DescribeDDosAttackSourceEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosAttackSourceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosAttackSourceEventOutcomeCallable TeoClient::DescribeDDosAttackSourceEventCallable(const DescribeDDosAttackSourceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosAttackSourceEventOutcome>>();
    DescribeDDosAttackSourceEventAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosAttackSourceEventRequest&,
        DescribeDDosAttackSourceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosAttackTopDataOutcome TeoClient::DescribeDDosAttackTopData(const DescribeDDosAttackTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosAttackTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosAttackTopDataResponse rsp = DescribeDDosAttackTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosAttackTopDataOutcome(rsp);
        else
            return DescribeDDosAttackTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosAttackTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosAttackTopDataAsync(const DescribeDDosAttackTopDataRequest& request, const DescribeDDosAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosAttackTopDataRequest&;
    using Resp = DescribeDDosAttackTopDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosAttackTopData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosAttackTopDataOutcomeCallable TeoClient::DescribeDDosAttackTopDataCallable(const DescribeDDosAttackTopDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosAttackTopDataOutcome>>();
    DescribeDDosAttackTopDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosAttackTopDataRequest&,
        DescribeDDosAttackTopDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDosMajorAttackEventOutcome TeoClient::DescribeDDosMajorAttackEvent(const DescribeDDosMajorAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDosMajorAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDosMajorAttackEventResponse rsp = DescribeDDosMajorAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDosMajorAttackEventOutcome(rsp);
        else
            return DescribeDDosMajorAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDosMajorAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDosMajorAttackEventAsync(const DescribeDDosMajorAttackEventRequest& request, const DescribeDDosMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDosMajorAttackEventRequest&;
    using Resp = DescribeDDosMajorAttackEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDosMajorAttackEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDosMajorAttackEventOutcomeCallable TeoClient::DescribeDDosMajorAttackEventCallable(const DescribeDDosMajorAttackEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDosMajorAttackEventOutcome>>();
    DescribeDDosMajorAttackEventAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDosMajorAttackEventRequest&,
        DescribeDDosMajorAttackEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDefaultCertificatesOutcome TeoClient::DescribeDefaultCertificates(const DescribeDefaultCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultCertificatesResponse rsp = DescribeDefaultCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultCertificatesOutcome(rsp);
        else
            return DescribeDefaultCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultCertificatesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDefaultCertificatesAsync(const DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefaultCertificatesRequest&;
    using Resp = DescribeDefaultCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDefaultCertificatesOutcomeCallable TeoClient::DescribeDefaultCertificatesCallable(const DescribeDefaultCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultCertificatesOutcome>>();
    DescribeDefaultCertificatesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDefaultCertificatesRequest&,
        DescribeDefaultCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDnsDataOutcome TeoClient::DescribeDnsData(const DescribeDnsDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsDataResponse rsp = DescribeDnsDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsDataOutcome(rsp);
        else
            return DescribeDnsDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsDataAsync(const DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDnsDataRequest&;
    using Resp = DescribeDnsDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDnsData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDnsDataOutcomeCallable TeoClient::DescribeDnsDataCallable(const DescribeDnsDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDnsDataOutcome>>();
    DescribeDnsDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDnsDataRequest&,
        DescribeDnsDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDnsRecordsOutcome TeoClient::DescribeDnsRecords(const DescribeDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsRecordsResponse rsp = DescribeDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsRecordsOutcome(rsp);
        else
            return DescribeDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsRecordsAsync(const DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDnsRecordsRequest&;
    using Resp = DescribeDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDnsRecordsOutcomeCallable TeoClient::DescribeDnsRecordsCallable(const DescribeDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDnsRecordsOutcome>>();
    DescribeDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDnsRecordsRequest&,
        DescribeDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDnssecOutcome TeoClient::DescribeDnssec(const DescribeDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnssecResponse rsp = DescribeDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnssecOutcome(rsp);
        else
            return DescribeDnssecOutcome(o.GetError());
    }
    else
    {
        return DescribeDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnssecAsync(const DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDnssecRequest&;
    using Resp = DescribeDnssecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDnssec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDnssecOutcomeCallable TeoClient::DescribeDnssecCallable(const DescribeDnssecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDnssecOutcome>>();
    DescribeDnssecAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDnssecRequest&,
        DescribeDnssecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeHostsCertificateOutcome TeoClient::DescribeHostsCertificate(const DescribeHostsCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostsCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsCertificateResponse rsp = DescribeHostsCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsCertificateOutcome(rsp);
        else
            return DescribeHostsCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeHostsCertificateAsync(const DescribeHostsCertificateRequest& request, const DescribeHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostsCertificateRequest&;
    using Resp = DescribeHostsCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostsCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeHostsCertificateOutcomeCallable TeoClient::DescribeHostsCertificateCallable(const DescribeHostsCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostsCertificateOutcome>>();
    DescribeHostsCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeHostsCertificateRequest&,
        DescribeHostsCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeHostsSettingOutcome TeoClient::DescribeHostsSetting(const DescribeHostsSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostsSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsSettingResponse rsp = DescribeHostsSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsSettingOutcome(rsp);
        else
            return DescribeHostsSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeHostsSettingAsync(const DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostsSettingRequest&;
    using Resp = DescribeHostsSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostsSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeHostsSettingOutcomeCallable TeoClient::DescribeHostsSettingCallable(const DescribeHostsSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostsSettingOutcome>>();
    DescribeHostsSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeHostsSettingRequest&,
        DescribeHostsSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeIdentificationOutcome TeoClient::DescribeIdentification(const DescribeIdentificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentificationResponse rsp = DescribeIdentificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentificationOutcome(rsp);
        else
            return DescribeIdentificationOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentificationOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeIdentificationAsync(const DescribeIdentificationRequest& request, const DescribeIdentificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdentificationRequest&;
    using Resp = DescribeIdentificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdentification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeIdentificationOutcomeCallable TeoClient::DescribeIdentificationCallable(const DescribeIdentificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdentificationOutcome>>();
    DescribeIdentificationAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeIdentificationRequest&,
        DescribeIdentificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeLoadBalancingOutcome TeoClient::DescribeLoadBalancing(const DescribeLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancingResponse rsp = DescribeLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancingOutcome(rsp);
        else
            return DescribeLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLoadBalancingAsync(const DescribeLoadBalancingRequest& request, const DescribeLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancingRequest&;
    using Resp = DescribeLoadBalancingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeLoadBalancingOutcomeCallable TeoClient::DescribeLoadBalancingCallable(const DescribeLoadBalancingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancingOutcome>>();
    DescribeLoadBalancingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeLoadBalancingRequest&,
        DescribeLoadBalancingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeLoadBalancingDetailOutcome TeoClient::DescribeLoadBalancingDetail(const DescribeLoadBalancingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancingDetailResponse rsp = DescribeLoadBalancingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancingDetailOutcome(rsp);
        else
            return DescribeLoadBalancingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancingDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLoadBalancingDetailAsync(const DescribeLoadBalancingDetailRequest& request, const DescribeLoadBalancingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancingDetailRequest&;
    using Resp = DescribeLoadBalancingDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancingDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeLoadBalancingDetailOutcomeCallable TeoClient::DescribeLoadBalancingDetailCallable(const DescribeLoadBalancingDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancingDetailOutcome>>();
    DescribeLoadBalancingDetailAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeLoadBalancingDetailRequest&,
        DescribeLoadBalancingDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeOriginGroupOutcome TeoClient::DescribeOriginGroup(const DescribeOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginGroupResponse rsp = DescribeOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginGroupOutcome(rsp);
        else
            return DescribeOriginGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginGroupAsync(const DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOriginGroupRequest&;
    using Resp = DescribeOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginGroupOutcomeCallable TeoClient::DescribeOriginGroupCallable(const DescribeOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginGroupOutcome>>();
    DescribeOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginGroupRequest&,
        DescribeOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeOriginGroupDetailOutcome TeoClient::DescribeOriginGroupDetail(const DescribeOriginGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginGroupDetailResponse rsp = DescribeOriginGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginGroupDetailOutcome(rsp);
        else
            return DescribeOriginGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginGroupDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginGroupDetailAsync(const DescribeOriginGroupDetailRequest& request, const DescribeOriginGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOriginGroupDetailRequest&;
    using Resp = DescribeOriginGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginGroupDetailOutcomeCallable TeoClient::DescribeOriginGroupDetailCallable(const DescribeOriginGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginGroupDetailOutcome>>();
    DescribeOriginGroupDetailAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginGroupDetailRequest&,
        DescribeOriginGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeOverviewL7DataOutcome TeoClient::DescribeOverviewL7Data(const DescribeOverviewL7DataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewL7Data");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewL7DataResponse rsp = DescribeOverviewL7DataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewL7DataOutcome(rsp);
        else
            return DescribeOverviewL7DataOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewL7DataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOverviewL7DataAsync(const DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewL7DataRequest&;
    using Resp = DescribeOverviewL7DataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewL7Data", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOverviewL7DataOutcomeCallable TeoClient::DescribeOverviewL7DataCallable(const DescribeOverviewL7DataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewL7DataOutcome>>();
    DescribeOverviewL7DataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOverviewL7DataRequest&,
        DescribeOverviewL7DataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribePrefetchTasksOutcome TeoClient::DescribePrefetchTasks(const DescribePrefetchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrefetchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrefetchTasksResponse rsp = DescribePrefetchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrefetchTasksOutcome(rsp);
        else
            return DescribePrefetchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePrefetchTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePrefetchTasksAsync(const DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrefetchTasksRequest&;
    using Resp = DescribePrefetchTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrefetchTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrefetchTasksOutcome>>();
    DescribePrefetchTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePrefetchTasksRequest&,
        DescribePrefetchTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribePurgeTasksOutcome TeoClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePurgeTasksRequest&;
    using Resp = DescribePurgeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurgeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeTasksOutcome>>();
    DescribePurgeTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePurgeTasksRequest&,
        DescribePurgeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPolicyOutcome TeoClient::DescribeSecurityPolicy(const DescribeSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyResponse rsp = DescribeSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyOutcome(rsp);
        else
            return DescribeSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyAsync(const DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyRequest&;
    using Resp = DescribeSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyOutcomeCallable TeoClient::DescribeSecurityPolicyCallable(const DescribeSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyOutcome>>();
    DescribeSecurityPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyRequest&,
        DescribeSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPolicyListOutcome TeoClient::DescribeSecurityPolicyList(const DescribeSecurityPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyListResponse rsp = DescribeSecurityPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyListOutcome(rsp);
        else
            return DescribeSecurityPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyListAsync(const DescribeSecurityPolicyListRequest& request, const DescribeSecurityPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyListRequest&;
    using Resp = DescribeSecurityPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyListOutcomeCallable TeoClient::DescribeSecurityPolicyListCallable(const DescribeSecurityPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyListOutcome>>();
    DescribeSecurityPolicyListAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyListRequest&,
        DescribeSecurityPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPolicyManagedRulesOutcome TeoClient::DescribeSecurityPolicyManagedRules(const DescribeSecurityPolicyManagedRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyManagedRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyManagedRulesResponse rsp = DescribeSecurityPolicyManagedRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyManagedRulesOutcome(rsp);
        else
            return DescribeSecurityPolicyManagedRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyManagedRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyManagedRulesAsync(const DescribeSecurityPolicyManagedRulesRequest& request, const DescribeSecurityPolicyManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyManagedRulesRequest&;
    using Resp = DescribeSecurityPolicyManagedRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyManagedRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyManagedRulesOutcomeCallable TeoClient::DescribeSecurityPolicyManagedRulesCallable(const DescribeSecurityPolicyManagedRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyManagedRulesOutcome>>();
    DescribeSecurityPolicyManagedRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyManagedRulesRequest&,
        DescribeSecurityPolicyManagedRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPolicyManagedRulesIdOutcome TeoClient::DescribeSecurityPolicyManagedRulesId(const DescribeSecurityPolicyManagedRulesIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyManagedRulesId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyManagedRulesIdResponse rsp = DescribeSecurityPolicyManagedRulesIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyManagedRulesIdOutcome(rsp);
        else
            return DescribeSecurityPolicyManagedRulesIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyManagedRulesIdOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyManagedRulesIdAsync(const DescribeSecurityPolicyManagedRulesIdRequest& request, const DescribeSecurityPolicyManagedRulesIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyManagedRulesIdRequest&;
    using Resp = DescribeSecurityPolicyManagedRulesIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyManagedRulesId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyManagedRulesIdOutcomeCallable TeoClient::DescribeSecurityPolicyManagedRulesIdCallable(const DescribeSecurityPolicyManagedRulesIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyManagedRulesIdOutcome>>();
    DescribeSecurityPolicyManagedRulesIdAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyManagedRulesIdRequest&,
        DescribeSecurityPolicyManagedRulesIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPolicyRegionsOutcome TeoClient::DescribeSecurityPolicyRegions(const DescribeSecurityPolicyRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyRegionsResponse rsp = DescribeSecurityPolicyRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyRegionsOutcome(rsp);
        else
            return DescribeSecurityPolicyRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyRegionsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyRegionsAsync(const DescribeSecurityPolicyRegionsRequest& request, const DescribeSecurityPolicyRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyRegionsRequest&;
    using Resp = DescribeSecurityPolicyRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyRegionsOutcomeCallable TeoClient::DescribeSecurityPolicyRegionsCallable(const DescribeSecurityPolicyRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyRegionsOutcome>>();
    DescribeSecurityPolicyRegionsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyRegionsRequest&,
        DescribeSecurityPolicyRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityPortraitRulesOutcome TeoClient::DescribeSecurityPortraitRules(const DescribeSecurityPortraitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPortraitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPortraitRulesResponse rsp = DescribeSecurityPortraitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPortraitRulesOutcome(rsp);
        else
            return DescribeSecurityPortraitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPortraitRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPortraitRulesAsync(const DescribeSecurityPortraitRulesRequest& request, const DescribeSecurityPortraitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPortraitRulesRequest&;
    using Resp = DescribeSecurityPortraitRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPortraitRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPortraitRulesOutcomeCallable TeoClient::DescribeSecurityPortraitRulesCallable(const DescribeSecurityPortraitRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPortraitRulesOutcome>>();
    DescribeSecurityPortraitRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPortraitRulesRequest&,
        DescribeSecurityPortraitRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTimingL4DataOutcome TeoClient::DescribeTimingL4Data(const DescribeTimingL4DataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL4Data");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL4DataResponse rsp = DescribeTimingL4DataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL4DataOutcome(rsp);
        else
            return DescribeTimingL4DataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL4DataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL4DataAsync(const DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimingL4DataRequest&;
    using Resp = DescribeTimingL4DataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL4Data", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL4DataOutcomeCallable TeoClient::DescribeTimingL4DataCallable(const DescribeTimingL4DataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL4DataOutcome>>();
    DescribeTimingL4DataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL4DataRequest&,
        DescribeTimingL4DataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTimingL7AnalysisDataOutcome TeoClient::DescribeTimingL7AnalysisData(const DescribeTimingL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL7AnalysisDataResponse rsp = DescribeTimingL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL7AnalysisDataOutcome(rsp);
        else
            return DescribeTimingL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL7AnalysisDataAsync(const DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimingL7AnalysisDataRequest&;
    using Resp = DescribeTimingL7AnalysisDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL7AnalysisData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL7AnalysisDataOutcomeCallable TeoClient::DescribeTimingL7AnalysisDataCallable(const DescribeTimingL7AnalysisDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL7AnalysisDataOutcome>>();
    DescribeTimingL7AnalysisDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL7AnalysisDataRequest&,
        DescribeTimingL7AnalysisDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTimingL7CacheDataOutcome TeoClient::DescribeTimingL7CacheData(const DescribeTimingL7CacheDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL7CacheData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL7CacheDataResponse rsp = DescribeTimingL7CacheDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL7CacheDataOutcome(rsp);
        else
            return DescribeTimingL7CacheDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL7CacheDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL7CacheDataAsync(const DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimingL7CacheDataRequest&;
    using Resp = DescribeTimingL7CacheDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL7CacheData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL7CacheDataOutcomeCallable TeoClient::DescribeTimingL7CacheDataCallable(const DescribeTimingL7CacheDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL7CacheDataOutcome>>();
    DescribeTimingL7CacheDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL7CacheDataRequest&,
        DescribeTimingL7CacheDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTopL7AnalysisDataOutcome TeoClient::DescribeTopL7AnalysisData(const DescribeTopL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopL7AnalysisDataResponse rsp = DescribeTopL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopL7AnalysisDataOutcome(rsp);
        else
            return DescribeTopL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTopL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTopL7AnalysisDataAsync(const DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopL7AnalysisDataRequest&;
    using Resp = DescribeTopL7AnalysisDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopL7AnalysisData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTopL7AnalysisDataOutcomeCallable TeoClient::DescribeTopL7AnalysisDataCallable(const DescribeTopL7AnalysisDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopL7AnalysisDataOutcome>>();
    DescribeTopL7AnalysisDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTopL7AnalysisDataRequest&,
        DescribeTopL7AnalysisDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTopL7CacheDataOutcome TeoClient::DescribeTopL7CacheData(const DescribeTopL7CacheDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopL7CacheData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopL7CacheDataResponse rsp = DescribeTopL7CacheDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopL7CacheDataOutcome(rsp);
        else
            return DescribeTopL7CacheDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTopL7CacheDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTopL7CacheDataAsync(const DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopL7CacheDataRequest&;
    using Resp = DescribeTopL7CacheDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopL7CacheData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTopL7CacheDataOutcomeCallable TeoClient::DescribeTopL7CacheDataCallable(const DescribeTopL7CacheDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopL7CacheDataOutcome>>();
    DescribeTopL7CacheDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTopL7CacheDataRequest&,
        DescribeTopL7CacheDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebManagedRulesAttackEventsOutcome TeoClient::DescribeWebManagedRulesAttackEvents(const DescribeWebManagedRulesAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesAttackEventsResponse rsp = DescribeWebManagedRulesAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesAttackEventsOutcome(rsp);
        else
            return DescribeWebManagedRulesAttackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesAttackEventsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesAttackEventsAsync(const DescribeWebManagedRulesAttackEventsRequest& request, const DescribeWebManagedRulesAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebManagedRulesAttackEventsRequest&;
    using Resp = DescribeWebManagedRulesAttackEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebManagedRulesAttackEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebManagedRulesAttackEventsOutcomeCallable TeoClient::DescribeWebManagedRulesAttackEventsCallable(const DescribeWebManagedRulesAttackEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebManagedRulesAttackEventsOutcome>>();
    DescribeWebManagedRulesAttackEventsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebManagedRulesAttackEventsRequest&,
        DescribeWebManagedRulesAttackEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebManagedRulesDataOutcome TeoClient::DescribeWebManagedRulesData(const DescribeWebManagedRulesDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesDataResponse rsp = DescribeWebManagedRulesDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesDataOutcome(rsp);
        else
            return DescribeWebManagedRulesDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesDataAsync(const DescribeWebManagedRulesDataRequest& request, const DescribeWebManagedRulesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebManagedRulesDataRequest&;
    using Resp = DescribeWebManagedRulesDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebManagedRulesData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebManagedRulesDataOutcomeCallable TeoClient::DescribeWebManagedRulesDataCallable(const DescribeWebManagedRulesDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebManagedRulesDataOutcome>>();
    DescribeWebManagedRulesDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebManagedRulesDataRequest&,
        DescribeWebManagedRulesDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebManagedRulesLogOutcome TeoClient::DescribeWebManagedRulesLog(const DescribeWebManagedRulesLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesLogResponse rsp = DescribeWebManagedRulesLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesLogOutcome(rsp);
        else
            return DescribeWebManagedRulesLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesLogOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesLogAsync(const DescribeWebManagedRulesLogRequest& request, const DescribeWebManagedRulesLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebManagedRulesLogRequest&;
    using Resp = DescribeWebManagedRulesLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebManagedRulesLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebManagedRulesLogOutcomeCallable TeoClient::DescribeWebManagedRulesLogCallable(const DescribeWebManagedRulesLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebManagedRulesLogOutcome>>();
    DescribeWebManagedRulesLogAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebManagedRulesLogRequest&,
        DescribeWebManagedRulesLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebManagedRulesTopDataOutcome TeoClient::DescribeWebManagedRulesTopData(const DescribeWebManagedRulesTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesTopDataResponse rsp = DescribeWebManagedRulesTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesTopDataOutcome(rsp);
        else
            return DescribeWebManagedRulesTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesTopDataAsync(const DescribeWebManagedRulesTopDataRequest& request, const DescribeWebManagedRulesTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebManagedRulesTopDataRequest&;
    using Resp = DescribeWebManagedRulesTopDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebManagedRulesTopData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebManagedRulesTopDataOutcomeCallable TeoClient::DescribeWebManagedRulesTopDataCallable(const DescribeWebManagedRulesTopDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebManagedRulesTopDataOutcome>>();
    DescribeWebManagedRulesTopDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebManagedRulesTopDataRequest&,
        DescribeWebManagedRulesTopDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebProtectionAttackEventsOutcome TeoClient::DescribeWebProtectionAttackEvents(const DescribeWebProtectionAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionAttackEventsResponse rsp = DescribeWebProtectionAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionAttackEventsOutcome(rsp);
        else
            return DescribeWebProtectionAttackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionAttackEventsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionAttackEventsAsync(const DescribeWebProtectionAttackEventsRequest& request, const DescribeWebProtectionAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebProtectionAttackEventsRequest&;
    using Resp = DescribeWebProtectionAttackEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebProtectionAttackEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebProtectionAttackEventsOutcomeCallable TeoClient::DescribeWebProtectionAttackEventsCallable(const DescribeWebProtectionAttackEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebProtectionAttackEventsOutcome>>();
    DescribeWebProtectionAttackEventsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebProtectionAttackEventsRequest&,
        DescribeWebProtectionAttackEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebProtectionDataOutcome TeoClient::DescribeWebProtectionData(const DescribeWebProtectionDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionDataResponse rsp = DescribeWebProtectionDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionDataOutcome(rsp);
        else
            return DescribeWebProtectionDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionDataAsync(const DescribeWebProtectionDataRequest& request, const DescribeWebProtectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebProtectionDataRequest&;
    using Resp = DescribeWebProtectionDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebProtectionData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebProtectionDataOutcomeCallable TeoClient::DescribeWebProtectionDataCallable(const DescribeWebProtectionDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebProtectionDataOutcome>>();
    DescribeWebProtectionDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebProtectionDataRequest&,
        DescribeWebProtectionDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebProtectionLogOutcome TeoClient::DescribeWebProtectionLog(const DescribeWebProtectionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionLogResponse rsp = DescribeWebProtectionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionLogOutcome(rsp);
        else
            return DescribeWebProtectionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionLogOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionLogAsync(const DescribeWebProtectionLogRequest& request, const DescribeWebProtectionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebProtectionLogRequest&;
    using Resp = DescribeWebProtectionLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebProtectionLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebProtectionLogOutcomeCallable TeoClient::DescribeWebProtectionLogCallable(const DescribeWebProtectionLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebProtectionLogOutcome>>();
    DescribeWebProtectionLogAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebProtectionLogRequest&,
        DescribeWebProtectionLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeZoneDDoSPolicyOutcome TeoClient::DescribeZoneDDoSPolicy(const DescribeZoneDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneDDoSPolicyResponse rsp = DescribeZoneDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneDDoSPolicyOutcome(rsp);
        else
            return DescribeZoneDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneDDoSPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneDDoSPolicyAsync(const DescribeZoneDDoSPolicyRequest& request, const DescribeZoneDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZoneDDoSPolicyRequest&;
    using Resp = DescribeZoneDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZoneDDoSPolicyOutcomeCallable TeoClient::DescribeZoneDDoSPolicyCallable(const DescribeZoneDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneDDoSPolicyOutcome>>();
    DescribeZoneDDoSPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZoneDDoSPolicyRequest&,
        DescribeZoneDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeZoneDetailsOutcome TeoClient::DescribeZoneDetails(const DescribeZoneDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneDetailsResponse rsp = DescribeZoneDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneDetailsOutcome(rsp);
        else
            return DescribeZoneDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneDetailsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneDetailsAsync(const DescribeZoneDetailsRequest& request, const DescribeZoneDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZoneDetailsRequest&;
    using Resp = DescribeZoneDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZoneDetailsOutcomeCallable TeoClient::DescribeZoneDetailsCallable(const DescribeZoneDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneDetailsOutcome>>();
    DescribeZoneDetailsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZoneDetailsRequest&,
        DescribeZoneDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeZoneSettingOutcome TeoClient::DescribeZoneSetting(const DescribeZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneSettingResponse rsp = DescribeZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneSettingOutcome(rsp);
        else
            return DescribeZoneSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneSettingAsync(const DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZoneSettingRequest&;
    using Resp = DescribeZoneSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZoneSettingOutcomeCallable TeoClient::DescribeZoneSettingCallable(const DescribeZoneSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneSettingOutcome>>();
    DescribeZoneSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZoneSettingRequest&,
        DescribeZoneSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeZonesOutcome TeoClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DownloadL7LogsOutcome TeoClient::DownloadL7Logs(const DownloadL7LogsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadL7Logs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadL7LogsResponse rsp = DownloadL7LogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadL7LogsOutcome(rsp);
        else
            return DownloadL7LogsOutcome(o.GetError());
    }
    else
    {
        return DownloadL7LogsOutcome(outcome.GetError());
    }
}

void TeoClient::DownloadL7LogsAsync(const DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadL7LogsRequest&;
    using Resp = DownloadL7LogsResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadL7Logs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DownloadL7LogsOutcomeCallable TeoClient::DownloadL7LogsCallable(const DownloadL7LogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadL7LogsOutcome>>();
    DownloadL7LogsAsync(
    request,
    [prom](
        const TeoClient*,
        const DownloadL7LogsRequest&,
        DownloadL7LogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::IdentifyZoneOutcome TeoClient::IdentifyZone(const IdentifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "IdentifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IdentifyZoneResponse rsp = IdentifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IdentifyZoneOutcome(rsp);
        else
            return IdentifyZoneOutcome(o.GetError());
    }
    else
    {
        return IdentifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::IdentifyZoneAsync(const IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IdentifyZoneRequest&;
    using Resp = IdentifyZoneResponse;

    DoRequestAsync<Req, Resp>(
        "IdentifyZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::IdentifyZoneOutcomeCallable TeoClient::IdentifyZoneCallable(const IdentifyZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<IdentifyZoneOutcome>>();
    IdentifyZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const IdentifyZoneRequest&,
        IdentifyZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ImportDnsRecordsOutcome TeoClient::ImportDnsRecords(const ImportDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportDnsRecordsResponse rsp = ImportDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportDnsRecordsOutcome(rsp);
        else
            return ImportDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return ImportDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::ImportDnsRecordsAsync(const ImportDnsRecordsRequest& request, const ImportDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportDnsRecordsRequest&;
    using Resp = ImportDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ImportDnsRecordsOutcomeCallable TeoClient::ImportDnsRecordsCallable(const ImportDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportDnsRecordsOutcome>>();
    ImportDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const ImportDnsRecordsRequest&,
        ImportDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyApplicationProxyOutcome TeoClient::ModifyApplicationProxy(const ModifyApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyResponse rsp = ModifyApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyOutcome(rsp);
        else
            return ModifyApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyAsync(const ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationProxyRequest&;
    using Resp = ModifyApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyOutcomeCallable TeoClient::ModifyApplicationProxyCallable(const ModifyApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyOutcome>>();
    ModifyApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRequest&,
        ModifyApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyApplicationProxyRuleOutcome TeoClient::ModifyApplicationProxyRule(const ModifyApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleResponse rsp = ModifyApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleOutcome(rsp);
        else
            return ModifyApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleAsync(const ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationProxyRuleRequest&;
    using Resp = ModifyApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyRuleOutcomeCallable TeoClient::ModifyApplicationProxyRuleCallable(const ModifyApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyRuleOutcome>>();
    ModifyApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRuleRequest&,
        ModifyApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyApplicationProxyRuleStatusOutcome TeoClient::ModifyApplicationProxyRuleStatus(const ModifyApplicationProxyRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleStatusResponse rsp = ModifyApplicationProxyRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleStatusOutcome(rsp);
        else
            return ModifyApplicationProxyRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleStatusAsync(const ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationProxyRuleStatusRequest&;
    using Resp = ModifyApplicationProxyRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyRuleStatusOutcomeCallable TeoClient::ModifyApplicationProxyRuleStatusCallable(const ModifyApplicationProxyRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyRuleStatusOutcome>>();
    ModifyApplicationProxyRuleStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRuleStatusRequest&,
        ModifyApplicationProxyRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyApplicationProxyStatusOutcome TeoClient::ModifyApplicationProxyStatus(const ModifyApplicationProxyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyStatusResponse rsp = ModifyApplicationProxyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyStatusOutcome(rsp);
        else
            return ModifyApplicationProxyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyStatusAsync(const ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationProxyStatusRequest&;
    using Resp = ModifyApplicationProxyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyStatusOutcomeCallable TeoClient::ModifyApplicationProxyStatusCallable(const ModifyApplicationProxyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyStatusOutcome>>();
    ModifyApplicationProxyStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyStatusRequest&,
        ModifyApplicationProxyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDDoSPolicyOutcome TeoClient::ModifyDDoSPolicy(const ModifyDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyResponse rsp = ModifyDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyOutcome(rsp);
        else
            return ModifyDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDDoSPolicyAsync(const ModifyDDoSPolicyRequest& request, const ModifyDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSPolicyRequest&;
    using Resp = ModifyDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDDoSPolicyOutcomeCallable TeoClient::ModifyDDoSPolicyCallable(const ModifyDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSPolicyOutcome>>();
    ModifyDDoSPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDDoSPolicyRequest&,
        ModifyDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDDoSPolicyHostOutcome TeoClient::ModifyDDoSPolicyHost(const ModifyDDoSPolicyHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicyHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyHostResponse rsp = ModifyDDoSPolicyHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyHostOutcome(rsp);
        else
            return ModifyDDoSPolicyHostOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyHostOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDDoSPolicyHostAsync(const ModifyDDoSPolicyHostRequest& request, const ModifyDDoSPolicyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSPolicyHostRequest&;
    using Resp = ModifyDDoSPolicyHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSPolicyHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDDoSPolicyHostOutcomeCallable TeoClient::ModifyDDoSPolicyHostCallable(const ModifyDDoSPolicyHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSPolicyHostOutcome>>();
    ModifyDDoSPolicyHostAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDDoSPolicyHostRequest&,
        ModifyDDoSPolicyHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDefaultCertificateOutcome TeoClient::ModifyDefaultCertificate(const ModifyDefaultCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultCertificateResponse rsp = ModifyDefaultCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultCertificateOutcome(rsp);
        else
            return ModifyDefaultCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDefaultCertificateAsync(const ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDefaultCertificateRequest&;
    using Resp = ModifyDefaultCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDefaultCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDefaultCertificateOutcomeCallable TeoClient::ModifyDefaultCertificateCallable(const ModifyDefaultCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDefaultCertificateOutcome>>();
    ModifyDefaultCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDefaultCertificateRequest&,
        ModifyDefaultCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDnsRecordOutcome TeoClient::ModifyDnsRecord(const ModifyDnsRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnsRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnsRecordResponse rsp = ModifyDnsRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnsRecordOutcome(rsp);
        else
            return ModifyDnsRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyDnsRecordOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnsRecordAsync(const ModifyDnsRecordRequest& request, const ModifyDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDnsRecordRequest&;
    using Resp = ModifyDnsRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDnsRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDnsRecordOutcomeCallable TeoClient::ModifyDnsRecordCallable(const ModifyDnsRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDnsRecordOutcome>>();
    ModifyDnsRecordAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDnsRecordRequest&,
        ModifyDnsRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDnssecOutcome TeoClient::ModifyDnssec(const ModifyDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnssecResponse rsp = ModifyDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnssecOutcome(rsp);
        else
            return ModifyDnssecOutcome(o.GetError());
    }
    else
    {
        return ModifyDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnssecAsync(const ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDnssecRequest&;
    using Resp = ModifyDnssecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDnssec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDnssecOutcomeCallable TeoClient::ModifyDnssecCallable(const ModifyDnssecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDnssecOutcome>>();
    ModifyDnssecAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDnssecRequest&,
        ModifyDnssecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyHostsCertificateOutcome TeoClient::ModifyHostsCertificate(const ModifyHostsCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostsCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostsCertificateResponse rsp = ModifyHostsCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostsCertificateOutcome(rsp);
        else
            return ModifyHostsCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyHostsCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyHostsCertificateAsync(const ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHostsCertificateRequest&;
    using Resp = ModifyHostsCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostsCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyHostsCertificateOutcomeCallable TeoClient::ModifyHostsCertificateCallable(const ModifyHostsCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostsCertificateOutcome>>();
    ModifyHostsCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyHostsCertificateRequest&,
        ModifyHostsCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyLoadBalancingOutcome TeoClient::ModifyLoadBalancing(const ModifyLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancingResponse rsp = ModifyLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancingOutcome(rsp);
        else
            return ModifyLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLoadBalancingAsync(const ModifyLoadBalancingRequest& request, const ModifyLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancingRequest&;
    using Resp = ModifyLoadBalancingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyLoadBalancingOutcomeCallable TeoClient::ModifyLoadBalancingCallable(const ModifyLoadBalancingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancingOutcome>>();
    ModifyLoadBalancingAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyLoadBalancingRequest&,
        ModifyLoadBalancingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyLoadBalancingStatusOutcome TeoClient::ModifyLoadBalancingStatus(const ModifyLoadBalancingStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancingStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancingStatusResponse rsp = ModifyLoadBalancingStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancingStatusOutcome(rsp);
        else
            return ModifyLoadBalancingStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancingStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLoadBalancingStatusAsync(const ModifyLoadBalancingStatusRequest& request, const ModifyLoadBalancingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancingStatusRequest&;
    using Resp = ModifyLoadBalancingStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancingStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyLoadBalancingStatusOutcomeCallable TeoClient::ModifyLoadBalancingStatusCallable(const ModifyLoadBalancingStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancingStatusOutcome>>();
    ModifyLoadBalancingStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyLoadBalancingStatusRequest&,
        ModifyLoadBalancingStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyOriginGroupOutcome TeoClient::ModifyOriginGroup(const ModifyOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOriginGroupResponse rsp = ModifyOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOriginGroupOutcome(rsp);
        else
            return ModifyOriginGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyOriginGroupAsync(const ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOriginGroupRequest&;
    using Resp = ModifyOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyOriginGroupOutcomeCallable TeoClient::ModifyOriginGroupCallable(const ModifyOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOriginGroupOutcome>>();
    ModifyOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyOriginGroupRequest&,
        ModifyOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifySecurityPolicyOutcome TeoClient::ModifySecurityPolicy(const ModifySecurityPolicyRequest &request)
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

void TeoClient::ModifySecurityPolicyAsync(const ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TeoClient::ModifySecurityPolicyOutcomeCallable TeoClient::ModifySecurityPolicyCallable(const ModifySecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityPolicyOutcome>>();
    ModifySecurityPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityPolicyRequest&,
        ModifySecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyZoneOutcome TeoClient::ModifyZone(const ModifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneResponse rsp = ModifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneOutcome(rsp);
        else
            return ModifyZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneAsync(const ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneRequest&;
    using Resp = ModifyZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneOutcomeCallable TeoClient::ModifyZoneCallable(const ModifyZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneOutcome>>();
    ModifyZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneRequest&,
        ModifyZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyZoneCnameSpeedUpOutcome TeoClient::ModifyZoneCnameSpeedUp(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneCnameSpeedUp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneCnameSpeedUpResponse rsp = ModifyZoneCnameSpeedUpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneCnameSpeedUpOutcome(rsp);
        else
            return ModifyZoneCnameSpeedUpOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneCnameSpeedUpOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneCnameSpeedUpAsync(const ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneCnameSpeedUpRequest&;
    using Resp = ModifyZoneCnameSpeedUpResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneCnameSpeedUp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneCnameSpeedUpOutcomeCallable TeoClient::ModifyZoneCnameSpeedUpCallable(const ModifyZoneCnameSpeedUpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneCnameSpeedUpOutcome>>();
    ModifyZoneCnameSpeedUpAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneCnameSpeedUpRequest&,
        ModifyZoneCnameSpeedUpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyZoneSettingOutcome TeoClient::ModifyZoneSetting(const ModifyZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneSettingResponse rsp = ModifyZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneSettingOutcome(rsp);
        else
            return ModifyZoneSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneSettingAsync(const ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneSettingRequest&;
    using Resp = ModifyZoneSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneSettingOutcomeCallable TeoClient::ModifyZoneSettingCallable(const ModifyZoneSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneSettingOutcome>>();
    ModifyZoneSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneSettingRequest&,
        ModifyZoneSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyZoneStatusOutcome TeoClient::ModifyZoneStatus(const ModifyZoneStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneStatusResponse rsp = ModifyZoneStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneStatusOutcome(rsp);
        else
            return ModifyZoneStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneStatusAsync(const ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneStatusRequest&;
    using Resp = ModifyZoneStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneStatusOutcomeCallable TeoClient::ModifyZoneStatusCallable(const ModifyZoneStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneStatusOutcome>>();
    ModifyZoneStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneStatusRequest&,
        ModifyZoneStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ReclaimZoneOutcome TeoClient::ReclaimZone(const ReclaimZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ReclaimZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReclaimZoneResponse rsp = ReclaimZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReclaimZoneOutcome(rsp);
        else
            return ReclaimZoneOutcome(o.GetError());
    }
    else
    {
        return ReclaimZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ReclaimZoneAsync(const ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReclaimZoneRequest&;
    using Resp = ReclaimZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ReclaimZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ReclaimZoneOutcomeCallable TeoClient::ReclaimZoneCallable(const ReclaimZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReclaimZoneOutcome>>();
    ReclaimZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const ReclaimZoneRequest&,
        ReclaimZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ScanDnsRecordsOutcome TeoClient::ScanDnsRecords(const ScanDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "ScanDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanDnsRecordsResponse rsp = ScanDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanDnsRecordsOutcome(rsp);
        else
            return ScanDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return ScanDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::ScanDnsRecordsAsync(const ScanDnsRecordsRequest& request, const ScanDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanDnsRecordsRequest&;
    using Resp = ScanDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "ScanDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ScanDnsRecordsOutcomeCallable TeoClient::ScanDnsRecordsCallable(const ScanDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanDnsRecordsOutcome>>();
    ScanDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const ScanDnsRecordsRequest&,
        ScanDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

