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

#include <tencentcloud/waf/v20180125/WafClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Waf::V20180125;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-01-25";
    const string ENDPOINT = "waf.intl.tencentcloudapi.com";
}

WafClient::WafClient(const Credential &credential, const string &region) :
    WafClient(credential, region, ClientProfile())
{
}

WafClient::WafClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WafClient::AddAntiFakeUrlOutcome WafClient::AddAntiFakeUrl(const AddAntiFakeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "AddAntiFakeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAntiFakeUrlResponse rsp = AddAntiFakeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAntiFakeUrlOutcome(rsp);
        else
            return AddAntiFakeUrlOutcome(o.GetError());
    }
    else
    {
        return AddAntiFakeUrlOutcome(outcome.GetError());
    }
}

void WafClient::AddAntiFakeUrlAsync(const AddAntiFakeUrlRequest& request, const AddAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAntiFakeUrlRequest&;
    using Resp = AddAntiFakeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "AddAntiFakeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::AddAntiFakeUrlOutcomeCallable WafClient::AddAntiFakeUrlCallable(const AddAntiFakeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAntiFakeUrlOutcome>>();
    AddAntiFakeUrlAsync(
    request,
    [prom](
        const WafClient*,
        const AddAntiFakeUrlRequest&,
        AddAntiFakeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::AddAntiInfoLeakRulesOutcome WafClient::AddAntiInfoLeakRules(const AddAntiInfoLeakRulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddAntiInfoLeakRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAntiInfoLeakRulesResponse rsp = AddAntiInfoLeakRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAntiInfoLeakRulesOutcome(rsp);
        else
            return AddAntiInfoLeakRulesOutcome(o.GetError());
    }
    else
    {
        return AddAntiInfoLeakRulesOutcome(outcome.GetError());
    }
}

void WafClient::AddAntiInfoLeakRulesAsync(const AddAntiInfoLeakRulesRequest& request, const AddAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAntiInfoLeakRulesRequest&;
    using Resp = AddAntiInfoLeakRulesResponse;

    DoRequestAsync<Req, Resp>(
        "AddAntiInfoLeakRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::AddAntiInfoLeakRulesOutcomeCallable WafClient::AddAntiInfoLeakRulesCallable(const AddAntiInfoLeakRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAntiInfoLeakRulesOutcome>>();
    AddAntiInfoLeakRulesAsync(
    request,
    [prom](
        const WafClient*,
        const AddAntiInfoLeakRulesRequest&,
        AddAntiInfoLeakRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::AddCustomRuleOutcome WafClient::AddCustomRule(const AddCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomRuleResponse rsp = AddCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomRuleOutcome(rsp);
        else
            return AddCustomRuleOutcome(o.GetError());
    }
    else
    {
        return AddCustomRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddCustomRuleAsync(const AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCustomRuleRequest&;
    using Resp = AddCustomRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddCustomRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::AddCustomRuleOutcomeCallable WafClient::AddCustomRuleCallable(const AddCustomRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCustomRuleOutcome>>();
    AddCustomRuleAsync(
    request,
    [prom](
        const WafClient*,
        const AddCustomRuleRequest&,
        AddCustomRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::AddCustomWhiteRuleOutcome WafClient::AddCustomWhiteRule(const AddCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomWhiteRuleResponse rsp = AddCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomWhiteRuleOutcome(rsp);
        else
            return AddCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return AddCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::AddCustomWhiteRuleAsync(const AddCustomWhiteRuleRequest& request, const AddCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCustomWhiteRuleRequest&;
    using Resp = AddCustomWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddCustomWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::AddCustomWhiteRuleOutcomeCallable WafClient::AddCustomWhiteRuleCallable(const AddCustomWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCustomWhiteRuleOutcome>>();
    AddCustomWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const AddCustomWhiteRuleRequest&,
        AddCustomWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::AddSpartaProtectionOutcome WafClient::AddSpartaProtection(const AddSpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "AddSpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSpartaProtectionResponse rsp = AddSpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSpartaProtectionOutcome(rsp);
        else
            return AddSpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return AddSpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::AddSpartaProtectionAsync(const AddSpartaProtectionRequest& request, const AddSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddSpartaProtectionRequest&;
    using Resp = AddSpartaProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "AddSpartaProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::AddSpartaProtectionOutcomeCallable WafClient::AddSpartaProtectionCallable(const AddSpartaProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddSpartaProtectionOutcome>>();
    AddSpartaProtectionAsync(
    request,
    [prom](
        const WafClient*,
        const AddSpartaProtectionRequest&,
        AddSpartaProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::CreateDealsOutcome WafClient::CreateDeals(const CreateDealsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDealsResponse rsp = CreateDealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDealsOutcome(rsp);
        else
            return CreateDealsOutcome(o.GetError());
    }
    else
    {
        return CreateDealsOutcome(outcome.GetError());
    }
}

void WafClient::CreateDealsAsync(const CreateDealsRequest& request, const CreateDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDealsRequest&;
    using Resp = CreateDealsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::CreateDealsOutcomeCallable WafClient::CreateDealsCallable(const CreateDealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDealsOutcome>>();
    CreateDealsAsync(
    request,
    [prom](
        const WafClient*,
        const CreateDealsRequest&,
        CreateDealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::CreateHostOutcome WafClient::CreateHost(const CreateHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostResponse rsp = CreateHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostOutcome(rsp);
        else
            return CreateHostOutcome(o.GetError());
    }
    else
    {
        return CreateHostOutcome(outcome.GetError());
    }
}

void WafClient::CreateHostAsync(const CreateHostRequest& request, const CreateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHostRequest&;
    using Resp = CreateHostResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::CreateHostOutcomeCallable WafClient::CreateHostCallable(const CreateHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHostOutcome>>();
    CreateHostAsync(
    request,
    [prom](
        const WafClient*,
        const CreateHostRequest&,
        CreateHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::CreateIpAccessControlOutcome WafClient::CreateIpAccessControl(const CreateIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIpAccessControlResponse rsp = CreateIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIpAccessControlOutcome(rsp);
        else
            return CreateIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return CreateIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::CreateIpAccessControlAsync(const CreateIpAccessControlRequest& request, const CreateIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIpAccessControlRequest&;
    using Resp = CreateIpAccessControlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIpAccessControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::CreateIpAccessControlOutcomeCallable WafClient::CreateIpAccessControlCallable(const CreateIpAccessControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIpAccessControlOutcome>>();
    CreateIpAccessControlAsync(
    request,
    [prom](
        const WafClient*,
        const CreateIpAccessControlRequest&,
        CreateIpAccessControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::CreateOwaspWhiteRuleOutcome WafClient::CreateOwaspWhiteRule(const CreateOwaspWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOwaspWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOwaspWhiteRuleResponse rsp = CreateOwaspWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOwaspWhiteRuleOutcome(rsp);
        else
            return CreateOwaspWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return CreateOwaspWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::CreateOwaspWhiteRuleAsync(const CreateOwaspWhiteRuleRequest& request, const CreateOwaspWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOwaspWhiteRuleRequest&;
    using Resp = CreateOwaspWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOwaspWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::CreateOwaspWhiteRuleOutcomeCallable WafClient::CreateOwaspWhiteRuleCallable(const CreateOwaspWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOwaspWhiteRuleOutcome>>();
    CreateOwaspWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const CreateOwaspWhiteRuleRequest&,
        CreateOwaspWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteAntiFakeUrlOutcome WafClient::DeleteAntiFakeUrl(const DeleteAntiFakeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAntiFakeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAntiFakeUrlResponse rsp = DeleteAntiFakeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAntiFakeUrlOutcome(rsp);
        else
            return DeleteAntiFakeUrlOutcome(o.GetError());
    }
    else
    {
        return DeleteAntiFakeUrlOutcome(outcome.GetError());
    }
}

void WafClient::DeleteAntiFakeUrlAsync(const DeleteAntiFakeUrlRequest& request, const DeleteAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAntiFakeUrlRequest&;
    using Resp = DeleteAntiFakeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAntiFakeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteAntiFakeUrlOutcomeCallable WafClient::DeleteAntiFakeUrlCallable(const DeleteAntiFakeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAntiFakeUrlOutcome>>();
    DeleteAntiFakeUrlAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteAntiFakeUrlRequest&,
        DeleteAntiFakeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteAntiInfoLeakRuleOutcome WafClient::DeleteAntiInfoLeakRule(const DeleteAntiInfoLeakRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAntiInfoLeakRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAntiInfoLeakRuleResponse rsp = DeleteAntiInfoLeakRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAntiInfoLeakRuleOutcome(rsp);
        else
            return DeleteAntiInfoLeakRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAntiInfoLeakRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteAntiInfoLeakRuleAsync(const DeleteAntiInfoLeakRuleRequest& request, const DeleteAntiInfoLeakRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAntiInfoLeakRuleRequest&;
    using Resp = DeleteAntiInfoLeakRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAntiInfoLeakRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteAntiInfoLeakRuleOutcomeCallable WafClient::DeleteAntiInfoLeakRuleCallable(const DeleteAntiInfoLeakRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAntiInfoLeakRuleOutcome>>();
    DeleteAntiInfoLeakRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteAntiInfoLeakRuleRequest&,
        DeleteAntiInfoLeakRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteCCRuleOutcome WafClient::DeleteCCRule(const DeleteCCRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCRuleResponse rsp = DeleteCCRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCRuleOutcome(rsp);
        else
            return DeleteCCRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCCRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteCCRuleAsync(const DeleteCCRuleRequest& request, const DeleteCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCRuleRequest&;
    using Resp = DeleteCCRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteCCRuleOutcomeCallable WafClient::DeleteCCRuleCallable(const DeleteCCRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCRuleOutcome>>();
    DeleteCCRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteCCRuleRequest&,
        DeleteCCRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteCustomRuleOutcome WafClient::DeleteCustomRule(const DeleteCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomRuleResponse rsp = DeleteCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomRuleOutcome(rsp);
        else
            return DeleteCustomRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteCustomRuleAsync(const DeleteCustomRuleRequest& request, const DeleteCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomRuleRequest&;
    using Resp = DeleteCustomRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteCustomRuleOutcomeCallable WafClient::DeleteCustomRuleCallable(const DeleteCustomRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomRuleOutcome>>();
    DeleteCustomRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteCustomRuleRequest&,
        DeleteCustomRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteCustomWhiteRuleOutcome WafClient::DeleteCustomWhiteRule(const DeleteCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomWhiteRuleResponse rsp = DeleteCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomWhiteRuleOutcome(rsp);
        else
            return DeleteCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteCustomWhiteRuleAsync(const DeleteCustomWhiteRuleRequest& request, const DeleteCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomWhiteRuleRequest&;
    using Resp = DeleteCustomWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteCustomWhiteRuleOutcomeCallable WafClient::DeleteCustomWhiteRuleCallable(const DeleteCustomWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomWhiteRuleOutcome>>();
    DeleteCustomWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteCustomWhiteRuleRequest&,
        DeleteCustomWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteHostOutcome WafClient::DeleteHost(const DeleteHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostResponse rsp = DeleteHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostOutcome(rsp);
        else
            return DeleteHostOutcome(o.GetError());
    }
    else
    {
        return DeleteHostOutcome(outcome.GetError());
    }
}

void WafClient::DeleteHostAsync(const DeleteHostRequest& request, const DeleteHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHostRequest&;
    using Resp = DeleteHostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteHostOutcomeCallable WafClient::DeleteHostCallable(const DeleteHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHostOutcome>>();
    DeleteHostAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteHostRequest&,
        DeleteHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteIpAccessControlV2Outcome WafClient::DeleteIpAccessControlV2(const DeleteIpAccessControlV2Request &request)
{
    auto outcome = MakeRequest(request, "DeleteIpAccessControlV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIpAccessControlV2Response rsp = DeleteIpAccessControlV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIpAccessControlV2Outcome(rsp);
        else
            return DeleteIpAccessControlV2Outcome(o.GetError());
    }
    else
    {
        return DeleteIpAccessControlV2Outcome(outcome.GetError());
    }
}

void WafClient::DeleteIpAccessControlV2Async(const DeleteIpAccessControlV2Request& request, const DeleteIpAccessControlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIpAccessControlV2Request&;
    using Resp = DeleteIpAccessControlV2Response;

    DoRequestAsync<Req, Resp>(
        "DeleteIpAccessControlV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteIpAccessControlV2OutcomeCallable WafClient::DeleteIpAccessControlV2Callable(const DeleteIpAccessControlV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIpAccessControlV2Outcome>>();
    DeleteIpAccessControlV2Async(
    request,
    [prom](
        const WafClient*,
        const DeleteIpAccessControlV2Request&,
        DeleteIpAccessControlV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteOwaspRuleStatusOutcome WafClient::DeleteOwaspRuleStatus(const DeleteOwaspRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOwaspRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOwaspRuleStatusResponse rsp = DeleteOwaspRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOwaspRuleStatusOutcome(rsp);
        else
            return DeleteOwaspRuleStatusOutcome(o.GetError());
    }
    else
    {
        return DeleteOwaspRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::DeleteOwaspRuleStatusAsync(const DeleteOwaspRuleStatusRequest& request, const DeleteOwaspRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOwaspRuleStatusRequest&;
    using Resp = DeleteOwaspRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOwaspRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteOwaspRuleStatusOutcomeCallable WafClient::DeleteOwaspRuleStatusCallable(const DeleteOwaspRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOwaspRuleStatusOutcome>>();
    DeleteOwaspRuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteOwaspRuleStatusRequest&,
        DeleteOwaspRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteOwaspWhiteRuleOutcome WafClient::DeleteOwaspWhiteRule(const DeleteOwaspWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOwaspWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOwaspWhiteRuleResponse rsp = DeleteOwaspWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOwaspWhiteRuleOutcome(rsp);
        else
            return DeleteOwaspWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteOwaspWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::DeleteOwaspWhiteRuleAsync(const DeleteOwaspWhiteRuleRequest& request, const DeleteOwaspWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOwaspWhiteRuleRequest&;
    using Resp = DeleteOwaspWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOwaspWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteOwaspWhiteRuleOutcomeCallable WafClient::DeleteOwaspWhiteRuleCallable(const DeleteOwaspWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOwaspWhiteRuleOutcome>>();
    DeleteOwaspWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteOwaspWhiteRuleRequest&,
        DeleteOwaspWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteSessionOutcome WafClient::DeleteSession(const DeleteSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSessionResponse rsp = DeleteSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSessionOutcome(rsp);
        else
            return DeleteSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteSessionOutcome(outcome.GetError());
    }
}

void WafClient::DeleteSessionAsync(const DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSessionRequest&;
    using Resp = DeleteSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteSessionOutcomeCallable WafClient::DeleteSessionCallable(const DeleteSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSessionOutcome>>();
    DeleteSessionAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteSessionRequest&,
        DeleteSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DeleteSpartaProtectionOutcome WafClient::DeleteSpartaProtection(const DeleteSpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSpartaProtectionResponse rsp = DeleteSpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSpartaProtectionOutcome(rsp);
        else
            return DeleteSpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return DeleteSpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::DeleteSpartaProtectionAsync(const DeleteSpartaProtectionRequest& request, const DeleteSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSpartaProtectionRequest&;
    using Resp = DeleteSpartaProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSpartaProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DeleteSpartaProtectionOutcomeCallable WafClient::DeleteSpartaProtectionCallable(const DeleteSpartaProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSpartaProtectionOutcome>>();
    DeleteSpartaProtectionAsync(
    request,
    [prom](
        const WafClient*,
        const DeleteSpartaProtectionRequest&,
        DeleteSpartaProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeAntiFakeRulesOutcome WafClient::DescribeAntiFakeRules(const DescribeAntiFakeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAntiFakeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAntiFakeRulesResponse rsp = DescribeAntiFakeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAntiFakeRulesOutcome(rsp);
        else
            return DescribeAntiFakeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAntiFakeRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAntiFakeRulesAsync(const DescribeAntiFakeRulesRequest& request, const DescribeAntiFakeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAntiFakeRulesRequest&;
    using Resp = DescribeAntiFakeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAntiFakeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeAntiFakeRulesOutcomeCallable WafClient::DescribeAntiFakeRulesCallable(const DescribeAntiFakeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAntiFakeRulesOutcome>>();
    DescribeAntiFakeRulesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeAntiFakeRulesRequest&,
        DescribeAntiFakeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeAntiInfoLeakageRulesOutcome WafClient::DescribeAntiInfoLeakageRules(const DescribeAntiInfoLeakageRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAntiInfoLeakageRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAntiInfoLeakageRulesResponse rsp = DescribeAntiInfoLeakageRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAntiInfoLeakageRulesOutcome(rsp);
        else
            return DescribeAntiInfoLeakageRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAntiInfoLeakageRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAntiInfoLeakageRulesAsync(const DescribeAntiInfoLeakageRulesRequest& request, const DescribeAntiInfoLeakageRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAntiInfoLeakageRulesRequest&;
    using Resp = DescribeAntiInfoLeakageRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAntiInfoLeakageRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeAntiInfoLeakageRulesOutcomeCallable WafClient::DescribeAntiInfoLeakageRulesCallable(const DescribeAntiInfoLeakageRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAntiInfoLeakageRulesOutcome>>();
    DescribeAntiInfoLeakageRulesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeAntiInfoLeakageRulesRequest&,
        DescribeAntiInfoLeakageRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeAttackOverviewOutcome WafClient::DescribeAttackOverview(const DescribeAttackOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackOverviewResponse rsp = DescribeAttackOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackOverviewOutcome(rsp);
        else
            return DescribeAttackOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackOverviewOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAttackOverviewAsync(const DescribeAttackOverviewRequest& request, const DescribeAttackOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackOverviewRequest&;
    using Resp = DescribeAttackOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeAttackOverviewOutcomeCallable WafClient::DescribeAttackOverviewCallable(const DescribeAttackOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackOverviewOutcome>>();
    DescribeAttackOverviewAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeAttackOverviewRequest&,
        DescribeAttackOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeAttackTypeOutcome WafClient::DescribeAttackType(const DescribeAttackTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackTypeResponse rsp = DescribeAttackTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackTypeOutcome(rsp);
        else
            return DescribeAttackTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackTypeOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAttackTypeAsync(const DescribeAttackTypeRequest& request, const DescribeAttackTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackTypeRequest&;
    using Resp = DescribeAttackTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeAttackTypeOutcomeCallable WafClient::DescribeAttackTypeCallable(const DescribeAttackTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackTypeOutcome>>();
    DescribeAttackTypeAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeAttackTypeRequest&,
        DescribeAttackTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeBatchIpAccessControlOutcome WafClient::DescribeBatchIpAccessControl(const DescribeBatchIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchIpAccessControlResponse rsp = DescribeBatchIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchIpAccessControlOutcome(rsp);
        else
            return DescribeBatchIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::DescribeBatchIpAccessControlAsync(const DescribeBatchIpAccessControlRequest& request, const DescribeBatchIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchIpAccessControlRequest&;
    using Resp = DescribeBatchIpAccessControlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchIpAccessControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeBatchIpAccessControlOutcomeCallable WafClient::DescribeBatchIpAccessControlCallable(const DescribeBatchIpAccessControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchIpAccessControlOutcome>>();
    DescribeBatchIpAccessControlAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeBatchIpAccessControlRequest&,
        DescribeBatchIpAccessControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCCRuleOutcome WafClient::DescribeCCRule(const DescribeCCRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCRuleResponse rsp = DescribeCCRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCRuleOutcome(rsp);
        else
            return DescribeCCRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeCCRuleOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCCRuleAsync(const DescribeCCRuleRequest& request, const DescribeCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCRuleRequest&;
    using Resp = DescribeCCRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCCRuleOutcomeCallable WafClient::DescribeCCRuleCallable(const DescribeCCRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCRuleOutcome>>();
    DescribeCCRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCCRuleRequest&,
        DescribeCCRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCCRuleListOutcome WafClient::DescribeCCRuleList(const DescribeCCRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCRuleListResponse rsp = DescribeCCRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCRuleListOutcome(rsp);
        else
            return DescribeCCRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCRuleListOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCCRuleListAsync(const DescribeCCRuleListRequest& request, const DescribeCCRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCRuleListRequest&;
    using Resp = DescribeCCRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCCRuleListOutcomeCallable WafClient::DescribeCCRuleListCallable(const DescribeCCRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCRuleListOutcome>>();
    DescribeCCRuleListAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCCRuleListRequest&,
        DescribeCCRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCertificateVerifyResultOutcome WafClient::DescribeCertificateVerifyResult(const DescribeCertificateVerifyResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateVerifyResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateVerifyResultResponse rsp = DescribeCertificateVerifyResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateVerifyResultOutcome(rsp);
        else
            return DescribeCertificateVerifyResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateVerifyResultOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCertificateVerifyResultAsync(const DescribeCertificateVerifyResultRequest& request, const DescribeCertificateVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateVerifyResultRequest&;
    using Resp = DescribeCertificateVerifyResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateVerifyResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCertificateVerifyResultOutcomeCallable WafClient::DescribeCertificateVerifyResultCallable(const DescribeCertificateVerifyResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateVerifyResultOutcome>>();
    DescribeCertificateVerifyResultAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCertificateVerifyResultRequest&,
        DescribeCertificateVerifyResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCiphersDetailOutcome WafClient::DescribeCiphersDetail(const DescribeCiphersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCiphersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCiphersDetailResponse rsp = DescribeCiphersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCiphersDetailOutcome(rsp);
        else
            return DescribeCiphersDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCiphersDetailOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCiphersDetailAsync(const DescribeCiphersDetailRequest& request, const DescribeCiphersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCiphersDetailRequest&;
    using Resp = DescribeCiphersDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCiphersDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCiphersDetailOutcomeCallable WafClient::DescribeCiphersDetailCallable(const DescribeCiphersDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCiphersDetailOutcome>>();
    DescribeCiphersDetailAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCiphersDetailRequest&,
        DescribeCiphersDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCustomRuleListOutcome WafClient::DescribeCustomRuleList(const DescribeCustomRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomRuleListResponse rsp = DescribeCustomRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomRuleListOutcome(rsp);
        else
            return DescribeCustomRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomRuleListOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCustomRuleListAsync(const DescribeCustomRuleListRequest& request, const DescribeCustomRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomRuleListRequest&;
    using Resp = DescribeCustomRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCustomRuleListOutcomeCallable WafClient::DescribeCustomRuleListCallable(const DescribeCustomRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomRuleListOutcome>>();
    DescribeCustomRuleListAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCustomRuleListRequest&,
        DescribeCustomRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeCustomWhiteRuleOutcome WafClient::DescribeCustomWhiteRule(const DescribeCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomWhiteRuleResponse rsp = DescribeCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomWhiteRuleOutcome(rsp);
        else
            return DescribeCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::DescribeCustomWhiteRuleAsync(const DescribeCustomWhiteRuleRequest& request, const DescribeCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomWhiteRuleRequest&;
    using Resp = DescribeCustomWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeCustomWhiteRuleOutcomeCallable WafClient::DescribeCustomWhiteRuleCallable(const DescribeCustomWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomWhiteRuleOutcome>>();
    DescribeCustomWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeCustomWhiteRuleRequest&,
        DescribeCustomWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeDomainCountInfoOutcome WafClient::DescribeDomainCountInfo(const DescribeDomainCountInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCountInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCountInfoResponse rsp = DescribeDomainCountInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCountInfoOutcome(rsp);
        else
            return DescribeDomainCountInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCountInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainCountInfoAsync(const DescribeDomainCountInfoRequest& request, const DescribeDomainCountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainCountInfoRequest&;
    using Resp = DescribeDomainCountInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainCountInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeDomainCountInfoOutcomeCallable WafClient::DescribeDomainCountInfoCallable(const DescribeDomainCountInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainCountInfoOutcome>>();
    DescribeDomainCountInfoAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeDomainCountInfoRequest&,
        DescribeDomainCountInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeDomainDetailsClbOutcome WafClient::DescribeDomainDetailsClb(const DescribeDomainDetailsClbRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainDetailsClb");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainDetailsClbResponse rsp = DescribeDomainDetailsClbResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainDetailsClbOutcome(rsp);
        else
            return DescribeDomainDetailsClbOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainDetailsClbOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainDetailsClbAsync(const DescribeDomainDetailsClbRequest& request, const DescribeDomainDetailsClbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainDetailsClbRequest&;
    using Resp = DescribeDomainDetailsClbResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainDetailsClb", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeDomainDetailsClbOutcomeCallable WafClient::DescribeDomainDetailsClbCallable(const DescribeDomainDetailsClbRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainDetailsClbOutcome>>();
    DescribeDomainDetailsClbAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeDomainDetailsClbRequest&,
        DescribeDomainDetailsClbOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeDomainDetailsSaasOutcome WafClient::DescribeDomainDetailsSaas(const DescribeDomainDetailsSaasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainDetailsSaas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainDetailsSaasResponse rsp = DescribeDomainDetailsSaasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainDetailsSaasOutcome(rsp);
        else
            return DescribeDomainDetailsSaasOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainDetailsSaasOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainDetailsSaasAsync(const DescribeDomainDetailsSaasRequest& request, const DescribeDomainDetailsSaasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainDetailsSaasRequest&;
    using Resp = DescribeDomainDetailsSaasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainDetailsSaas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeDomainDetailsSaasOutcomeCallable WafClient::DescribeDomainDetailsSaasCallable(const DescribeDomainDetailsSaasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainDetailsSaasOutcome>>();
    DescribeDomainDetailsSaasAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeDomainDetailsSaasRequest&,
        DescribeDomainDetailsSaasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeDomainVerifyResultOutcome WafClient::DescribeDomainVerifyResult(const DescribeDomainVerifyResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainVerifyResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainVerifyResultResponse rsp = DescribeDomainVerifyResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainVerifyResultOutcome(rsp);
        else
            return DescribeDomainVerifyResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainVerifyResultOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainVerifyResultAsync(const DescribeDomainVerifyResultRequest& request, const DescribeDomainVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainVerifyResultRequest&;
    using Resp = DescribeDomainVerifyResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainVerifyResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeDomainVerifyResultOutcomeCallable WafClient::DescribeDomainVerifyResultCallable(const DescribeDomainVerifyResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainVerifyResultOutcome>>();
    DescribeDomainVerifyResultAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeDomainVerifyResultRequest&,
        DescribeDomainVerifyResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeDomainsOutcome WafClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeDomainsOutcomeCallable WafClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeFindDomainListOutcome WafClient::DescribeFindDomainList(const DescribeFindDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFindDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFindDomainListResponse rsp = DescribeFindDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFindDomainListOutcome(rsp);
        else
            return DescribeFindDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeFindDomainListOutcome(outcome.GetError());
    }
}

void WafClient::DescribeFindDomainListAsync(const DescribeFindDomainListRequest& request, const DescribeFindDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFindDomainListRequest&;
    using Resp = DescribeFindDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFindDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeFindDomainListOutcomeCallable WafClient::DescribeFindDomainListCallable(const DescribeFindDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFindDomainListOutcome>>();
    DescribeFindDomainListAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeFindDomainListRequest&,
        DescribeFindDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeHistogramOutcome WafClient::DescribeHistogram(const DescribeHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistogramResponse rsp = DescribeHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistogramOutcome(rsp);
        else
            return DescribeHistogramOutcome(o.GetError());
    }
    else
    {
        return DescribeHistogramOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHistogramAsync(const DescribeHistogramRequest& request, const DescribeHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHistogramRequest&;
    using Resp = DescribeHistogramResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHistogram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeHistogramOutcomeCallable WafClient::DescribeHistogramCallable(const DescribeHistogramRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHistogramOutcome>>();
    DescribeHistogramAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeHistogramRequest&,
        DescribeHistogramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeHostOutcome WafClient::DescribeHost(const DescribeHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostResponse rsp = DescribeHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostOutcome(rsp);
        else
            return DescribeHostOutcome(o.GetError());
    }
    else
    {
        return DescribeHostOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostAsync(const DescribeHostRequest& request, const DescribeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostRequest&;
    using Resp = DescribeHostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeHostOutcomeCallable WafClient::DescribeHostCallable(const DescribeHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostOutcome>>();
    DescribeHostAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeHostRequest&,
        DescribeHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeHostLimitOutcome WafClient::DescribeHostLimit(const DescribeHostLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLimitResponse rsp = DescribeHostLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLimitOutcome(rsp);
        else
            return DescribeHostLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLimitOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostLimitAsync(const DescribeHostLimitRequest& request, const DescribeHostLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostLimitRequest&;
    using Resp = DescribeHostLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeHostLimitOutcomeCallable WafClient::DescribeHostLimitCallable(const DescribeHostLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostLimitOutcome>>();
    DescribeHostLimitAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeHostLimitRequest&,
        DescribeHostLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeHostsOutcome WafClient::DescribeHosts(const DescribeHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsResponse rsp = DescribeHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsOutcome(rsp);
        else
            return DescribeHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostsRequest&;
    using Resp = DescribeHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeHostsOutcomeCallable WafClient::DescribeHostsCallable(const DescribeHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostsOutcome>>();
    DescribeHostsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeHostsRequest&,
        DescribeHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeInstancesOutcome WafClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void WafClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

WafClient::DescribeInstancesOutcomeCallable WafClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeIpAccessControlOutcome WafClient::DescribeIpAccessControl(const DescribeIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpAccessControlResponse rsp = DescribeIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpAccessControlOutcome(rsp);
        else
            return DescribeIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return DescribeIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::DescribeIpAccessControlAsync(const DescribeIpAccessControlRequest& request, const DescribeIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpAccessControlRequest&;
    using Resp = DescribeIpAccessControlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpAccessControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeIpAccessControlOutcomeCallable WafClient::DescribeIpAccessControlCallable(const DescribeIpAccessControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpAccessControlOutcome>>();
    DescribeIpAccessControlAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeIpAccessControlRequest&,
        DescribeIpAccessControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeModuleStatusOutcome WafClient::DescribeModuleStatus(const DescribeModuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleStatusResponse rsp = DescribeModuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleStatusOutcome(rsp);
        else
            return DescribeModuleStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::DescribeModuleStatusAsync(const DescribeModuleStatusRequest& request, const DescribeModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModuleStatusRequest&;
    using Resp = DescribeModuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeModuleStatusOutcomeCallable WafClient::DescribeModuleStatusCallable(const DescribeModuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModuleStatusOutcome>>();
    DescribeModuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeModuleStatusRequest&,
        DescribeModuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeObjectsOutcome WafClient::DescribeObjects(const DescribeObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeObjectsResponse rsp = DescribeObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeObjectsOutcome(rsp);
        else
            return DescribeObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeObjectsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeObjectsAsync(const DescribeObjectsRequest& request, const DescribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeObjectsRequest&;
    using Resp = DescribeObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeObjectsOutcomeCallable WafClient::DescribeObjectsCallable(const DescribeObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeObjectsOutcome>>();
    DescribeObjectsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeObjectsRequest&,
        DescribeObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeOwaspRuleTypesOutcome WafClient::DescribeOwaspRuleTypes(const DescribeOwaspRuleTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOwaspRuleTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOwaspRuleTypesResponse rsp = DescribeOwaspRuleTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOwaspRuleTypesOutcome(rsp);
        else
            return DescribeOwaspRuleTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeOwaspRuleTypesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeOwaspRuleTypesAsync(const DescribeOwaspRuleTypesRequest& request, const DescribeOwaspRuleTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOwaspRuleTypesRequest&;
    using Resp = DescribeOwaspRuleTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOwaspRuleTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeOwaspRuleTypesOutcomeCallable WafClient::DescribeOwaspRuleTypesCallable(const DescribeOwaspRuleTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOwaspRuleTypesOutcome>>();
    DescribeOwaspRuleTypesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeOwaspRuleTypesRequest&,
        DescribeOwaspRuleTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeOwaspRulesOutcome WafClient::DescribeOwaspRules(const DescribeOwaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOwaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOwaspRulesResponse rsp = DescribeOwaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOwaspRulesOutcome(rsp);
        else
            return DescribeOwaspRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeOwaspRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeOwaspRulesAsync(const DescribeOwaspRulesRequest& request, const DescribeOwaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOwaspRulesRequest&;
    using Resp = DescribeOwaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOwaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeOwaspRulesOutcomeCallable WafClient::DescribeOwaspRulesCallable(const DescribeOwaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOwaspRulesOutcome>>();
    DescribeOwaspRulesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeOwaspRulesRequest&,
        DescribeOwaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeOwaspWhiteRulesOutcome WafClient::DescribeOwaspWhiteRules(const DescribeOwaspWhiteRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOwaspWhiteRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOwaspWhiteRulesResponse rsp = DescribeOwaspWhiteRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOwaspWhiteRulesOutcome(rsp);
        else
            return DescribeOwaspWhiteRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeOwaspWhiteRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeOwaspWhiteRulesAsync(const DescribeOwaspWhiteRulesRequest& request, const DescribeOwaspWhiteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOwaspWhiteRulesRequest&;
    using Resp = DescribeOwaspWhiteRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOwaspWhiteRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeOwaspWhiteRulesOutcomeCallable WafClient::DescribeOwaspWhiteRulesCallable(const DescribeOwaspWhiteRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOwaspWhiteRulesOutcome>>();
    DescribeOwaspWhiteRulesAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeOwaspWhiteRulesRequest&,
        DescribeOwaspWhiteRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribePeakPointsOutcome WafClient::DescribePeakPoints(const DescribePeakPointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakPoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakPointsResponse rsp = DescribePeakPointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakPointsOutcome(rsp);
        else
            return DescribePeakPointsOutcome(o.GetError());
    }
    else
    {
        return DescribePeakPointsOutcome(outcome.GetError());
    }
}

void WafClient::DescribePeakPointsAsync(const DescribePeakPointsRequest& request, const DescribePeakPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePeakPointsRequest&;
    using Resp = DescribePeakPointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePeakPoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribePeakPointsOutcomeCallable WafClient::DescribePeakPointsCallable(const DescribePeakPointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePeakPointsOutcome>>();
    DescribePeakPointsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribePeakPointsRequest&,
        DescribePeakPointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribePolicyStatusOutcome WafClient::DescribePolicyStatus(const DescribePolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyStatusResponse rsp = DescribePolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyStatusOutcome(rsp);
        else
            return DescribePolicyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyStatusOutcome(outcome.GetError());
    }
}

void WafClient::DescribePolicyStatusAsync(const DescribePolicyStatusRequest& request, const DescribePolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyStatusRequest&;
    using Resp = DescribePolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribePolicyStatusOutcomeCallable WafClient::DescribePolicyStatusCallable(const DescribePolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyStatusOutcome>>();
    DescribePolicyStatusAsync(
    request,
    [prom](
        const WafClient*,
        const DescribePolicyStatusRequest&,
        DescribePolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribePortsOutcome WafClient::DescribePorts(const DescribePortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePortsResponse rsp = DescribePortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePortsOutcome(rsp);
        else
            return DescribePortsOutcome(o.GetError());
    }
    else
    {
        return DescribePortsOutcome(outcome.GetError());
    }
}

void WafClient::DescribePortsAsync(const DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePortsRequest&;
    using Resp = DescribePortsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribePortsOutcomeCallable WafClient::DescribePortsCallable(const DescribePortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePortsOutcome>>();
    DescribePortsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribePortsRequest&,
        DescribePortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeRuleLimitOutcome WafClient::DescribeRuleLimit(const DescribeRuleLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleLimitResponse rsp = DescribeRuleLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleLimitOutcome(rsp);
        else
            return DescribeRuleLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleLimitOutcome(outcome.GetError());
    }
}

void WafClient::DescribeRuleLimitAsync(const DescribeRuleLimitRequest& request, const DescribeRuleLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleLimitRequest&;
    using Resp = DescribeRuleLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeRuleLimitOutcomeCallable WafClient::DescribeRuleLimitCallable(const DescribeRuleLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleLimitOutcome>>();
    DescribeRuleLimitAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeRuleLimitRequest&,
        DescribeRuleLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeSessionOutcome WafClient::DescribeSession(const DescribeSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionResponse rsp = DescribeSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionOutcome(rsp);
        else
            return DescribeSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionOutcome(outcome.GetError());
    }
}

void WafClient::DescribeSessionAsync(const DescribeSessionRequest& request, const DescribeSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionRequest&;
    using Resp = DescribeSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeSessionOutcomeCallable WafClient::DescribeSessionCallable(const DescribeSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionOutcome>>();
    DescribeSessionAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeSessionRequest&,
        DescribeSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeSpartaProtectionInfoOutcome WafClient::DescribeSpartaProtectionInfo(const DescribeSpartaProtectionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpartaProtectionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpartaProtectionInfoResponse rsp = DescribeSpartaProtectionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpartaProtectionInfoOutcome(rsp);
        else
            return DescribeSpartaProtectionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSpartaProtectionInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeSpartaProtectionInfoAsync(const DescribeSpartaProtectionInfoRequest& request, const DescribeSpartaProtectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpartaProtectionInfoRequest&;
    using Resp = DescribeSpartaProtectionInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpartaProtectionInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeSpartaProtectionInfoOutcomeCallable WafClient::DescribeSpartaProtectionInfoCallable(const DescribeSpartaProtectionInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpartaProtectionInfoOutcome>>();
    DescribeSpartaProtectionInfoAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeSpartaProtectionInfoRequest&,
        DescribeSpartaProtectionInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeTlsVersionOutcome WafClient::DescribeTlsVersion(const DescribeTlsVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTlsVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTlsVersionResponse rsp = DescribeTlsVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTlsVersionOutcome(rsp);
        else
            return DescribeTlsVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeTlsVersionOutcome(outcome.GetError());
    }
}

void WafClient::DescribeTlsVersionAsync(const DescribeTlsVersionRequest& request, const DescribeTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTlsVersionRequest&;
    using Resp = DescribeTlsVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTlsVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeTlsVersionOutcomeCallable WafClient::DescribeTlsVersionCallable(const DescribeTlsVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTlsVersionOutcome>>();
    DescribeTlsVersionAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeTlsVersionRequest&,
        DescribeTlsVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeTopAttackDomainOutcome WafClient::DescribeTopAttackDomain(const DescribeTopAttackDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopAttackDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopAttackDomainResponse rsp = DescribeTopAttackDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopAttackDomainOutcome(rsp);
        else
            return DescribeTopAttackDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeTopAttackDomainOutcome(outcome.GetError());
    }
}

void WafClient::DescribeTopAttackDomainAsync(const DescribeTopAttackDomainRequest& request, const DescribeTopAttackDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopAttackDomainRequest&;
    using Resp = DescribeTopAttackDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopAttackDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeTopAttackDomainOutcomeCallable WafClient::DescribeTopAttackDomainCallable(const DescribeTopAttackDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopAttackDomainOutcome>>();
    DescribeTopAttackDomainAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeTopAttackDomainRequest&,
        DescribeTopAttackDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeUserClbWafRegionsOutcome WafClient::DescribeUserClbWafRegions(const DescribeUserClbWafRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserClbWafRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserClbWafRegionsResponse rsp = DescribeUserClbWafRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserClbWafRegionsOutcome(rsp);
        else
            return DescribeUserClbWafRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserClbWafRegionsOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserClbWafRegionsAsync(const DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserClbWafRegionsRequest&;
    using Resp = DescribeUserClbWafRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserClbWafRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeUserClbWafRegionsOutcomeCallable WafClient::DescribeUserClbWafRegionsCallable(const DescribeUserClbWafRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserClbWafRegionsOutcome>>();
    DescribeUserClbWafRegionsAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeUserClbWafRegionsRequest&,
        DescribeUserClbWafRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeUserDomainInfoOutcome WafClient::DescribeUserDomainInfo(const DescribeUserDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDomainInfoResponse rsp = DescribeUserDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDomainInfoOutcome(rsp);
        else
            return DescribeUserDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDomainInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserDomainInfoAsync(const DescribeUserDomainInfoRequest& request, const DescribeUserDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDomainInfoRequest&;
    using Resp = DescribeUserDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeUserDomainInfoOutcomeCallable WafClient::DescribeUserDomainInfoCallable(const DescribeUserDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDomainInfoOutcome>>();
    DescribeUserDomainInfoAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeUserDomainInfoRequest&,
        DescribeUserDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeUserLevelOutcome WafClient::DescribeUserLevel(const DescribeUserLevelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserLevelResponse rsp = DescribeUserLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserLevelOutcome(rsp);
        else
            return DescribeUserLevelOutcome(o.GetError());
    }
    else
    {
        return DescribeUserLevelOutcome(outcome.GetError());
    }
}

void WafClient::DescribeUserLevelAsync(const DescribeUserLevelRequest& request, const DescribeUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserLevelRequest&;
    using Resp = DescribeUserLevelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeUserLevelOutcomeCallable WafClient::DescribeUserLevelCallable(const DescribeUserLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserLevelOutcome>>();
    DescribeUserLevelAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeUserLevelRequest&,
        DescribeUserLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeVipInfoOutcome WafClient::DescribeVipInfo(const DescribeVipInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVipInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVipInfoResponse rsp = DescribeVipInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVipInfoOutcome(rsp);
        else
            return DescribeVipInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVipInfoOutcome(outcome.GetError());
    }
}

void WafClient::DescribeVipInfoAsync(const DescribeVipInfoRequest& request, const DescribeVipInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVipInfoRequest&;
    using Resp = DescribeVipInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVipInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeVipInfoOutcomeCallable WafClient::DescribeVipInfoCallable(const DescribeVipInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVipInfoOutcome>>();
    DescribeVipInfoAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeVipInfoRequest&,
        DescribeVipInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::DescribeWebshellStatusOutcome WafClient::DescribeWebshellStatus(const DescribeWebshellStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebshellStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebshellStatusResponse rsp = DescribeWebshellStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebshellStatusOutcome(rsp);
        else
            return DescribeWebshellStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeWebshellStatusOutcome(outcome.GetError());
    }
}

void WafClient::DescribeWebshellStatusAsync(const DescribeWebshellStatusRequest& request, const DescribeWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebshellStatusRequest&;
    using Resp = DescribeWebshellStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebshellStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::DescribeWebshellStatusOutcomeCallable WafClient::DescribeWebshellStatusCallable(const DescribeWebshellStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebshellStatusOutcome>>();
    DescribeWebshellStatusAsync(
    request,
    [prom](
        const WafClient*,
        const DescribeWebshellStatusRequest&,
        DescribeWebshellStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::FreshAntiFakeUrlOutcome WafClient::FreshAntiFakeUrl(const FreshAntiFakeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "FreshAntiFakeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreshAntiFakeUrlResponse rsp = FreshAntiFakeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreshAntiFakeUrlOutcome(rsp);
        else
            return FreshAntiFakeUrlOutcome(o.GetError());
    }
    else
    {
        return FreshAntiFakeUrlOutcome(outcome.GetError());
    }
}

void WafClient::FreshAntiFakeUrlAsync(const FreshAntiFakeUrlRequest& request, const FreshAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FreshAntiFakeUrlRequest&;
    using Resp = FreshAntiFakeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "FreshAntiFakeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::FreshAntiFakeUrlOutcomeCallable WafClient::FreshAntiFakeUrlCallable(const FreshAntiFakeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<FreshAntiFakeUrlOutcome>>();
    FreshAntiFakeUrlAsync(
    request,
    [prom](
        const WafClient*,
        const FreshAntiFakeUrlRequest&,
        FreshAntiFakeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::GenerateDealsAndPayNewOutcome WafClient::GenerateDealsAndPayNew(const GenerateDealsAndPayNewRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateDealsAndPayNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateDealsAndPayNewResponse rsp = GenerateDealsAndPayNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateDealsAndPayNewOutcome(rsp);
        else
            return GenerateDealsAndPayNewOutcome(o.GetError());
    }
    else
    {
        return GenerateDealsAndPayNewOutcome(outcome.GetError());
    }
}

void WafClient::GenerateDealsAndPayNewAsync(const GenerateDealsAndPayNewRequest& request, const GenerateDealsAndPayNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateDealsAndPayNewRequest&;
    using Resp = GenerateDealsAndPayNewResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateDealsAndPayNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::GenerateDealsAndPayNewOutcomeCallable WafClient::GenerateDealsAndPayNewCallable(const GenerateDealsAndPayNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateDealsAndPayNewOutcome>>();
    GenerateDealsAndPayNewAsync(
    request,
    [prom](
        const WafClient*,
        const GenerateDealsAndPayNewRequest&,
        GenerateDealsAndPayNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::GetAttackHistogramOutcome WafClient::GetAttackHistogram(const GetAttackHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttackHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttackHistogramResponse rsp = GetAttackHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttackHistogramOutcome(rsp);
        else
            return GetAttackHistogramOutcome(o.GetError());
    }
    else
    {
        return GetAttackHistogramOutcome(outcome.GetError());
    }
}

void WafClient::GetAttackHistogramAsync(const GetAttackHistogramRequest& request, const GetAttackHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAttackHistogramRequest&;
    using Resp = GetAttackHistogramResponse;

    DoRequestAsync<Req, Resp>(
        "GetAttackHistogram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::GetAttackHistogramOutcomeCallable WafClient::GetAttackHistogramCallable(const GetAttackHistogramRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAttackHistogramOutcome>>();
    GetAttackHistogramAsync(
    request,
    [prom](
        const WafClient*,
        const GetAttackHistogramRequest&,
        GetAttackHistogramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::GetAttackTotalCountOutcome WafClient::GetAttackTotalCount(const GetAttackTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttackTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttackTotalCountResponse rsp = GetAttackTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttackTotalCountOutcome(rsp);
        else
            return GetAttackTotalCountOutcome(o.GetError());
    }
    else
    {
        return GetAttackTotalCountOutcome(outcome.GetError());
    }
}

void WafClient::GetAttackTotalCountAsync(const GetAttackTotalCountRequest& request, const GetAttackTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAttackTotalCountRequest&;
    using Resp = GetAttackTotalCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetAttackTotalCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::GetAttackTotalCountOutcomeCallable WafClient::GetAttackTotalCountCallable(const GetAttackTotalCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAttackTotalCountOutcome>>();
    GetAttackTotalCountAsync(
    request,
    [prom](
        const WafClient*,
        const GetAttackTotalCountRequest&,
        GetAttackTotalCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::GetInstanceQpsLimitOutcome WafClient::GetInstanceQpsLimit(const GetInstanceQpsLimitRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceQpsLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceQpsLimitResponse rsp = GetInstanceQpsLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceQpsLimitOutcome(rsp);
        else
            return GetInstanceQpsLimitOutcome(o.GetError());
    }
    else
    {
        return GetInstanceQpsLimitOutcome(outcome.GetError());
    }
}

void WafClient::GetInstanceQpsLimitAsync(const GetInstanceQpsLimitRequest& request, const GetInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInstanceQpsLimitRequest&;
    using Resp = GetInstanceQpsLimitResponse;

    DoRequestAsync<Req, Resp>(
        "GetInstanceQpsLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::GetInstanceQpsLimitOutcomeCallable WafClient::GetInstanceQpsLimitCallable(const GetInstanceQpsLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInstanceQpsLimitOutcome>>();
    GetInstanceQpsLimitAsync(
    request,
    [prom](
        const WafClient*,
        const GetInstanceQpsLimitRequest&,
        GetInstanceQpsLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ImportIpAccessControlOutcome WafClient::ImportIpAccessControl(const ImportIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "ImportIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportIpAccessControlResponse rsp = ImportIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportIpAccessControlOutcome(rsp);
        else
            return ImportIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return ImportIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::ImportIpAccessControlAsync(const ImportIpAccessControlRequest& request, const ImportIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportIpAccessControlRequest&;
    using Resp = ImportIpAccessControlResponse;

    DoRequestAsync<Req, Resp>(
        "ImportIpAccessControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ImportIpAccessControlOutcomeCallable WafClient::ImportIpAccessControlCallable(const ImportIpAccessControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportIpAccessControlOutcome>>();
    ImportIpAccessControlAsync(
    request,
    [prom](
        const WafClient*,
        const ImportIpAccessControlRequest&,
        ImportIpAccessControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyAntiFakeUrlOutcome WafClient::ModifyAntiFakeUrl(const ModifyAntiFakeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAntiFakeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAntiFakeUrlResponse rsp = ModifyAntiFakeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAntiFakeUrlOutcome(rsp);
        else
            return ModifyAntiFakeUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyAntiFakeUrlOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAntiFakeUrlAsync(const ModifyAntiFakeUrlRequest& request, const ModifyAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAntiFakeUrlRequest&;
    using Resp = ModifyAntiFakeUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAntiFakeUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyAntiFakeUrlOutcomeCallable WafClient::ModifyAntiFakeUrlCallable(const ModifyAntiFakeUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAntiFakeUrlOutcome>>();
    ModifyAntiFakeUrlAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyAntiFakeUrlRequest&,
        ModifyAntiFakeUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyAntiFakeUrlStatusOutcome WafClient::ModifyAntiFakeUrlStatus(const ModifyAntiFakeUrlStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAntiFakeUrlStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAntiFakeUrlStatusResponse rsp = ModifyAntiFakeUrlStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAntiFakeUrlStatusOutcome(rsp);
        else
            return ModifyAntiFakeUrlStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAntiFakeUrlStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAntiFakeUrlStatusAsync(const ModifyAntiFakeUrlStatusRequest& request, const ModifyAntiFakeUrlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAntiFakeUrlStatusRequest&;
    using Resp = ModifyAntiFakeUrlStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAntiFakeUrlStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyAntiFakeUrlStatusOutcomeCallable WafClient::ModifyAntiFakeUrlStatusCallable(const ModifyAntiFakeUrlStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAntiFakeUrlStatusOutcome>>();
    ModifyAntiFakeUrlStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyAntiFakeUrlStatusRequest&,
        ModifyAntiFakeUrlStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyAntiInfoLeakRuleStatusOutcome WafClient::ModifyAntiInfoLeakRuleStatus(const ModifyAntiInfoLeakRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAntiInfoLeakRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAntiInfoLeakRuleStatusResponse rsp = ModifyAntiInfoLeakRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAntiInfoLeakRuleStatusOutcome(rsp);
        else
            return ModifyAntiInfoLeakRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAntiInfoLeakRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAntiInfoLeakRuleStatusAsync(const ModifyAntiInfoLeakRuleStatusRequest& request, const ModifyAntiInfoLeakRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAntiInfoLeakRuleStatusRequest&;
    using Resp = ModifyAntiInfoLeakRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAntiInfoLeakRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyAntiInfoLeakRuleStatusOutcomeCallable WafClient::ModifyAntiInfoLeakRuleStatusCallable(const ModifyAntiInfoLeakRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAntiInfoLeakRuleStatusOutcome>>();
    ModifyAntiInfoLeakRuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyAntiInfoLeakRuleStatusRequest&,
        ModifyAntiInfoLeakRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyAntiInfoLeakRulesOutcome WafClient::ModifyAntiInfoLeakRules(const ModifyAntiInfoLeakRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAntiInfoLeakRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAntiInfoLeakRulesResponse rsp = ModifyAntiInfoLeakRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAntiInfoLeakRulesOutcome(rsp);
        else
            return ModifyAntiInfoLeakRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyAntiInfoLeakRulesOutcome(outcome.GetError());
    }
}

void WafClient::ModifyAntiInfoLeakRulesAsync(const ModifyAntiInfoLeakRulesRequest& request, const ModifyAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAntiInfoLeakRulesRequest&;
    using Resp = ModifyAntiInfoLeakRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAntiInfoLeakRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyAntiInfoLeakRulesOutcomeCallable WafClient::ModifyAntiInfoLeakRulesCallable(const ModifyAntiInfoLeakRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAntiInfoLeakRulesOutcome>>();
    ModifyAntiInfoLeakRulesAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyAntiInfoLeakRulesRequest&,
        ModifyAntiInfoLeakRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyApiAnalyzeStatusOutcome WafClient::ModifyApiAnalyzeStatus(const ModifyApiAnalyzeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiAnalyzeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiAnalyzeStatusResponse rsp = ModifyApiAnalyzeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiAnalyzeStatusOutcome(rsp);
        else
            return ModifyApiAnalyzeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApiAnalyzeStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyApiAnalyzeStatusAsync(const ModifyApiAnalyzeStatusRequest& request, const ModifyApiAnalyzeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiAnalyzeStatusRequest&;
    using Resp = ModifyApiAnalyzeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiAnalyzeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyApiAnalyzeStatusOutcomeCallable WafClient::ModifyApiAnalyzeStatusCallable(const ModifyApiAnalyzeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiAnalyzeStatusOutcome>>();
    ModifyApiAnalyzeStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyApiAnalyzeStatusRequest&,
        ModifyApiAnalyzeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyBotStatusOutcome WafClient::ModifyBotStatus(const ModifyBotStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBotStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBotStatusResponse rsp = ModifyBotStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBotStatusOutcome(rsp);
        else
            return ModifyBotStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBotStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyBotStatusAsync(const ModifyBotStatusRequest& request, const ModifyBotStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBotStatusRequest&;
    using Resp = ModifyBotStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBotStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyBotStatusOutcomeCallable WafClient::ModifyBotStatusCallable(const ModifyBotStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBotStatusOutcome>>();
    ModifyBotStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyBotStatusRequest&,
        ModifyBotStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyCustomRuleOutcome WafClient::ModifyCustomRule(const ModifyCustomRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleResponse rsp = ModifyCustomRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleOutcome(rsp);
        else
            return ModifyCustomRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomRuleAsync(const ModifyCustomRuleRequest& request, const ModifyCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomRuleRequest&;
    using Resp = ModifyCustomRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyCustomRuleOutcomeCallable WafClient::ModifyCustomRuleCallable(const ModifyCustomRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomRuleOutcome>>();
    ModifyCustomRuleAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyCustomRuleRequest&,
        ModifyCustomRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyCustomRuleStatusOutcome WafClient::ModifyCustomRuleStatus(const ModifyCustomRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomRuleStatusResponse rsp = ModifyCustomRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomRuleStatusOutcome(rsp);
        else
            return ModifyCustomRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomRuleStatusAsync(const ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomRuleStatusRequest&;
    using Resp = ModifyCustomRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyCustomRuleStatusOutcomeCallable WafClient::ModifyCustomRuleStatusCallable(const ModifyCustomRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomRuleStatusOutcome>>();
    ModifyCustomRuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyCustomRuleStatusRequest&,
        ModifyCustomRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyCustomWhiteRuleOutcome WafClient::ModifyCustomWhiteRule(const ModifyCustomWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomWhiteRuleResponse rsp = ModifyCustomWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomWhiteRuleOutcome(rsp);
        else
            return ModifyCustomWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomWhiteRuleAsync(const ModifyCustomWhiteRuleRequest& request, const ModifyCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomWhiteRuleRequest&;
    using Resp = ModifyCustomWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyCustomWhiteRuleOutcomeCallable WafClient::ModifyCustomWhiteRuleCallable(const ModifyCustomWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomWhiteRuleOutcome>>();
    ModifyCustomWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyCustomWhiteRuleRequest&,
        ModifyCustomWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyCustomWhiteRuleStatusOutcome WafClient::ModifyCustomWhiteRuleStatus(const ModifyCustomWhiteRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomWhiteRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomWhiteRuleStatusResponse rsp = ModifyCustomWhiteRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomWhiteRuleStatusOutcome(rsp);
        else
            return ModifyCustomWhiteRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomWhiteRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyCustomWhiteRuleStatusAsync(const ModifyCustomWhiteRuleStatusRequest& request, const ModifyCustomWhiteRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomWhiteRuleStatusRequest&;
    using Resp = ModifyCustomWhiteRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomWhiteRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyCustomWhiteRuleStatusOutcomeCallable WafClient::ModifyCustomWhiteRuleStatusCallable(const ModifyCustomWhiteRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomWhiteRuleStatusOutcome>>();
    ModifyCustomWhiteRuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyCustomWhiteRuleStatusRequest&,
        ModifyCustomWhiteRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyDomainIpv6StatusOutcome WafClient::ModifyDomainIpv6Status(const ModifyDomainIpv6StatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainIpv6Status");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainIpv6StatusResponse rsp = ModifyDomainIpv6StatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainIpv6StatusOutcome(rsp);
        else
            return ModifyDomainIpv6StatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainIpv6StatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainIpv6StatusAsync(const ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainIpv6StatusRequest&;
    using Resp = ModifyDomainIpv6StatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainIpv6Status", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyDomainIpv6StatusOutcomeCallable WafClient::ModifyDomainIpv6StatusCallable(const ModifyDomainIpv6StatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainIpv6StatusOutcome>>();
    ModifyDomainIpv6StatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyDomainIpv6StatusRequest&,
        ModifyDomainIpv6StatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyDomainPostActionOutcome WafClient::ModifyDomainPostAction(const ModifyDomainPostActionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainPostAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainPostActionResponse rsp = ModifyDomainPostActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainPostActionOutcome(rsp);
        else
            return ModifyDomainPostActionOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainPostActionOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainPostActionAsync(const ModifyDomainPostActionRequest& request, const ModifyDomainPostActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainPostActionRequest&;
    using Resp = ModifyDomainPostActionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainPostAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyDomainPostActionOutcomeCallable WafClient::ModifyDomainPostActionCallable(const ModifyDomainPostActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainPostActionOutcome>>();
    ModifyDomainPostActionAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyDomainPostActionRequest&,
        ModifyDomainPostActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyDomainsCLSStatusOutcome WafClient::ModifyDomainsCLSStatus(const ModifyDomainsCLSStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainsCLSStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainsCLSStatusResponse rsp = ModifyDomainsCLSStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainsCLSStatusOutcome(rsp);
        else
            return ModifyDomainsCLSStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainsCLSStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyDomainsCLSStatusAsync(const ModifyDomainsCLSStatusRequest& request, const ModifyDomainsCLSStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainsCLSStatusRequest&;
    using Resp = ModifyDomainsCLSStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainsCLSStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyDomainsCLSStatusOutcomeCallable WafClient::ModifyDomainsCLSStatusCallable(const ModifyDomainsCLSStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainsCLSStatusOutcome>>();
    ModifyDomainsCLSStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyDomainsCLSStatusRequest&,
        ModifyDomainsCLSStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyHostOutcome WafClient::ModifyHost(const ModifyHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostResponse rsp = ModifyHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostOutcome(rsp);
        else
            return ModifyHostOutcome(o.GetError());
    }
    else
    {
        return ModifyHostOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostAsync(const ModifyHostRequest& request, const ModifyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHostRequest&;
    using Resp = ModifyHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyHostOutcomeCallable WafClient::ModifyHostCallable(const ModifyHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostOutcome>>();
    ModifyHostAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyHostRequest&,
        ModifyHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyHostFlowModeOutcome WafClient::ModifyHostFlowMode(const ModifyHostFlowModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostFlowMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostFlowModeResponse rsp = ModifyHostFlowModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostFlowModeOutcome(rsp);
        else
            return ModifyHostFlowModeOutcome(o.GetError());
    }
    else
    {
        return ModifyHostFlowModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostFlowModeAsync(const ModifyHostFlowModeRequest& request, const ModifyHostFlowModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHostFlowModeRequest&;
    using Resp = ModifyHostFlowModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostFlowMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyHostFlowModeOutcomeCallable WafClient::ModifyHostFlowModeCallable(const ModifyHostFlowModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostFlowModeOutcome>>();
    ModifyHostFlowModeAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyHostFlowModeRequest&,
        ModifyHostFlowModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyHostModeOutcome WafClient::ModifyHostMode(const ModifyHostModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostModeResponse rsp = ModifyHostModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostModeOutcome(rsp);
        else
            return ModifyHostModeOutcome(o.GetError());
    }
    else
    {
        return ModifyHostModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostModeAsync(const ModifyHostModeRequest& request, const ModifyHostModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHostModeRequest&;
    using Resp = ModifyHostModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyHostModeOutcomeCallable WafClient::ModifyHostModeCallable(const ModifyHostModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostModeOutcome>>();
    ModifyHostModeAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyHostModeRequest&,
        ModifyHostModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyHostStatusOutcome WafClient::ModifyHostStatus(const ModifyHostStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostStatusResponse rsp = ModifyHostStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostStatusOutcome(rsp);
        else
            return ModifyHostStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyHostStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyHostStatusAsync(const ModifyHostStatusRequest& request, const ModifyHostStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHostStatusRequest&;
    using Resp = ModifyHostStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyHostStatusOutcomeCallable WafClient::ModifyHostStatusCallable(const ModifyHostStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostStatusOutcome>>();
    ModifyHostStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyHostStatusRequest&,
        ModifyHostStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyInstanceElasticModeOutcome WafClient::ModifyInstanceElasticMode(const ModifyInstanceElasticModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceElasticMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceElasticModeResponse rsp = ModifyInstanceElasticModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceElasticModeOutcome(rsp);
        else
            return ModifyInstanceElasticModeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceElasticModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifyInstanceElasticModeAsync(const ModifyInstanceElasticModeRequest& request, const ModifyInstanceElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceElasticModeRequest&;
    using Resp = ModifyInstanceElasticModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceElasticMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyInstanceElasticModeOutcomeCallable WafClient::ModifyInstanceElasticModeCallable(const ModifyInstanceElasticModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceElasticModeOutcome>>();
    ModifyInstanceElasticModeAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyInstanceElasticModeRequest&,
        ModifyInstanceElasticModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyInstanceNameOutcome WafClient::ModifyInstanceName(const ModifyInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNameResponse rsp = ModifyInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNameOutcome(rsp);
        else
            return ModifyInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNameOutcome(outcome.GetError());
    }
}

void WafClient::ModifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNameRequest&;
    using Resp = ModifyInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyInstanceNameOutcomeCallable WafClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNameOutcome>>();
    ModifyInstanceNameAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyInstanceNameRequest&,
        ModifyInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyInstanceQpsLimitOutcome WafClient::ModifyInstanceQpsLimit(const ModifyInstanceQpsLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceQpsLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceQpsLimitResponse rsp = ModifyInstanceQpsLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceQpsLimitOutcome(rsp);
        else
            return ModifyInstanceQpsLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceQpsLimitOutcome(outcome.GetError());
    }
}

void WafClient::ModifyInstanceQpsLimitAsync(const ModifyInstanceQpsLimitRequest& request, const ModifyInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceQpsLimitRequest&;
    using Resp = ModifyInstanceQpsLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceQpsLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyInstanceQpsLimitOutcomeCallable WafClient::ModifyInstanceQpsLimitCallable(const ModifyInstanceQpsLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceQpsLimitOutcome>>();
    ModifyInstanceQpsLimitAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyInstanceQpsLimitRequest&,
        ModifyInstanceQpsLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyInstanceRenewFlagOutcome WafClient::ModifyInstanceRenewFlag(const ModifyInstanceRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceRenewFlagResponse rsp = ModifyInstanceRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceRenewFlagOutcome(rsp);
        else
            return ModifyInstanceRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceRenewFlagOutcome(outcome.GetError());
    }
}

void WafClient::ModifyInstanceRenewFlagAsync(const ModifyInstanceRenewFlagRequest& request, const ModifyInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRenewFlagRequest&;
    using Resp = ModifyInstanceRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyInstanceRenewFlagOutcomeCallable WafClient::ModifyInstanceRenewFlagCallable(const ModifyInstanceRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceRenewFlagOutcome>>();
    ModifyInstanceRenewFlagAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyInstanceRenewFlagRequest&,
        ModifyInstanceRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyIpAccessControlOutcome WafClient::ModifyIpAccessControl(const ModifyIpAccessControlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpAccessControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpAccessControlResponse rsp = ModifyIpAccessControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpAccessControlOutcome(rsp);
        else
            return ModifyIpAccessControlOutcome(o.GetError());
    }
    else
    {
        return ModifyIpAccessControlOutcome(outcome.GetError());
    }
}

void WafClient::ModifyIpAccessControlAsync(const ModifyIpAccessControlRequest& request, const ModifyIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIpAccessControlRequest&;
    using Resp = ModifyIpAccessControlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIpAccessControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyIpAccessControlOutcomeCallable WafClient::ModifyIpAccessControlCallable(const ModifyIpAccessControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIpAccessControlOutcome>>();
    ModifyIpAccessControlAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyIpAccessControlRequest&,
        ModifyIpAccessControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyModuleStatusOutcome WafClient::ModifyModuleStatus(const ModifyModuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleStatusResponse rsp = ModifyModuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleStatusOutcome(rsp);
        else
            return ModifyModuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyModuleStatusAsync(const ModifyModuleStatusRequest& request, const ModifyModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleStatusRequest&;
    using Resp = ModifyModuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyModuleStatusOutcomeCallable WafClient::ModifyModuleStatusCallable(const ModifyModuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleStatusOutcome>>();
    ModifyModuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyModuleStatusRequest&,
        ModifyModuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyObjectOutcome WafClient::ModifyObject(const ModifyObjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyObjectResponse rsp = ModifyObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyObjectOutcome(rsp);
        else
            return ModifyObjectOutcome(o.GetError());
    }
    else
    {
        return ModifyObjectOutcome(outcome.GetError());
    }
}

void WafClient::ModifyObjectAsync(const ModifyObjectRequest& request, const ModifyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyObjectRequest&;
    using Resp = ModifyObjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyObjectOutcomeCallable WafClient::ModifyObjectCallable(const ModifyObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyObjectOutcome>>();
    ModifyObjectAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyObjectRequest&,
        ModifyObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyOwaspRuleStatusOutcome WafClient::ModifyOwaspRuleStatus(const ModifyOwaspRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwaspRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwaspRuleStatusResponse rsp = ModifyOwaspRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwaspRuleStatusOutcome(rsp);
        else
            return ModifyOwaspRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyOwaspRuleStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyOwaspRuleStatusAsync(const ModifyOwaspRuleStatusRequest& request, const ModifyOwaspRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwaspRuleStatusRequest&;
    using Resp = ModifyOwaspRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwaspRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyOwaspRuleStatusOutcomeCallable WafClient::ModifyOwaspRuleStatusCallable(const ModifyOwaspRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwaspRuleStatusOutcome>>();
    ModifyOwaspRuleStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyOwaspRuleStatusRequest&,
        ModifyOwaspRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyOwaspRuleTypeActionOutcome WafClient::ModifyOwaspRuleTypeAction(const ModifyOwaspRuleTypeActionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwaspRuleTypeAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwaspRuleTypeActionResponse rsp = ModifyOwaspRuleTypeActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwaspRuleTypeActionOutcome(rsp);
        else
            return ModifyOwaspRuleTypeActionOutcome(o.GetError());
    }
    else
    {
        return ModifyOwaspRuleTypeActionOutcome(outcome.GetError());
    }
}

void WafClient::ModifyOwaspRuleTypeActionAsync(const ModifyOwaspRuleTypeActionRequest& request, const ModifyOwaspRuleTypeActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwaspRuleTypeActionRequest&;
    using Resp = ModifyOwaspRuleTypeActionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwaspRuleTypeAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyOwaspRuleTypeActionOutcomeCallable WafClient::ModifyOwaspRuleTypeActionCallable(const ModifyOwaspRuleTypeActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwaspRuleTypeActionOutcome>>();
    ModifyOwaspRuleTypeActionAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyOwaspRuleTypeActionRequest&,
        ModifyOwaspRuleTypeActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyOwaspRuleTypeLevelOutcome WafClient::ModifyOwaspRuleTypeLevel(const ModifyOwaspRuleTypeLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwaspRuleTypeLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwaspRuleTypeLevelResponse rsp = ModifyOwaspRuleTypeLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwaspRuleTypeLevelOutcome(rsp);
        else
            return ModifyOwaspRuleTypeLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyOwaspRuleTypeLevelOutcome(outcome.GetError());
    }
}

void WafClient::ModifyOwaspRuleTypeLevelAsync(const ModifyOwaspRuleTypeLevelRequest& request, const ModifyOwaspRuleTypeLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwaspRuleTypeLevelRequest&;
    using Resp = ModifyOwaspRuleTypeLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwaspRuleTypeLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyOwaspRuleTypeLevelOutcomeCallable WafClient::ModifyOwaspRuleTypeLevelCallable(const ModifyOwaspRuleTypeLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwaspRuleTypeLevelOutcome>>();
    ModifyOwaspRuleTypeLevelAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyOwaspRuleTypeLevelRequest&,
        ModifyOwaspRuleTypeLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyOwaspRuleTypeStatusOutcome WafClient::ModifyOwaspRuleTypeStatus(const ModifyOwaspRuleTypeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwaspRuleTypeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwaspRuleTypeStatusResponse rsp = ModifyOwaspRuleTypeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwaspRuleTypeStatusOutcome(rsp);
        else
            return ModifyOwaspRuleTypeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyOwaspRuleTypeStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyOwaspRuleTypeStatusAsync(const ModifyOwaspRuleTypeStatusRequest& request, const ModifyOwaspRuleTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwaspRuleTypeStatusRequest&;
    using Resp = ModifyOwaspRuleTypeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwaspRuleTypeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyOwaspRuleTypeStatusOutcomeCallable WafClient::ModifyOwaspRuleTypeStatusCallable(const ModifyOwaspRuleTypeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwaspRuleTypeStatusOutcome>>();
    ModifyOwaspRuleTypeStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyOwaspRuleTypeStatusRequest&,
        ModifyOwaspRuleTypeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyOwaspWhiteRuleOutcome WafClient::ModifyOwaspWhiteRule(const ModifyOwaspWhiteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwaspWhiteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwaspWhiteRuleResponse rsp = ModifyOwaspWhiteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwaspWhiteRuleOutcome(rsp);
        else
            return ModifyOwaspWhiteRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyOwaspWhiteRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyOwaspWhiteRuleAsync(const ModifyOwaspWhiteRuleRequest& request, const ModifyOwaspWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwaspWhiteRuleRequest&;
    using Resp = ModifyOwaspWhiteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwaspWhiteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyOwaspWhiteRuleOutcomeCallable WafClient::ModifyOwaspWhiteRuleCallable(const ModifyOwaspWhiteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwaspWhiteRuleOutcome>>();
    ModifyOwaspWhiteRuleAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyOwaspWhiteRuleRequest&,
        ModifyOwaspWhiteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyProtectionStatusOutcome WafClient::ModifyProtectionStatus(const ModifyProtectionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectionStatusResponse rsp = ModifyProtectionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectionStatusOutcome(rsp);
        else
            return ModifyProtectionStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectionStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyProtectionStatusAsync(const ModifyProtectionStatusRequest& request, const ModifyProtectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProtectionStatusRequest&;
    using Resp = ModifyProtectionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProtectionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyProtectionStatusOutcomeCallable WafClient::ModifyProtectionStatusCallable(const ModifyProtectionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProtectionStatusOutcome>>();
    ModifyProtectionStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyProtectionStatusRequest&,
        ModifyProtectionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifySpartaProtectionOutcome WafClient::ModifySpartaProtection(const ModifySpartaProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpartaProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpartaProtectionResponse rsp = ModifySpartaProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpartaProtectionOutcome(rsp);
        else
            return ModifySpartaProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifySpartaProtectionOutcome(outcome.GetError());
    }
}

void WafClient::ModifySpartaProtectionAsync(const ModifySpartaProtectionRequest& request, const ModifySpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySpartaProtectionRequest&;
    using Resp = ModifySpartaProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySpartaProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifySpartaProtectionOutcomeCallable WafClient::ModifySpartaProtectionCallable(const ModifySpartaProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySpartaProtectionOutcome>>();
    ModifySpartaProtectionAsync(
    request,
    [prom](
        const WafClient*,
        const ModifySpartaProtectionRequest&,
        ModifySpartaProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifySpartaProtectionModeOutcome WafClient::ModifySpartaProtectionMode(const ModifySpartaProtectionModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpartaProtectionMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpartaProtectionModeResponse rsp = ModifySpartaProtectionModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpartaProtectionModeOutcome(rsp);
        else
            return ModifySpartaProtectionModeOutcome(o.GetError());
    }
    else
    {
        return ModifySpartaProtectionModeOutcome(outcome.GetError());
    }
}

void WafClient::ModifySpartaProtectionModeAsync(const ModifySpartaProtectionModeRequest& request, const ModifySpartaProtectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySpartaProtectionModeRequest&;
    using Resp = ModifySpartaProtectionModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySpartaProtectionMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifySpartaProtectionModeOutcomeCallable WafClient::ModifySpartaProtectionModeCallable(const ModifySpartaProtectionModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySpartaProtectionModeOutcome>>();
    ModifySpartaProtectionModeAsync(
    request,
    [prom](
        const WafClient*,
        const ModifySpartaProtectionModeRequest&,
        ModifySpartaProtectionModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyUserLevelOutcome WafClient::ModifyUserLevel(const ModifyUserLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserLevelResponse rsp = ModifyUserLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserLevelOutcome(rsp);
        else
            return ModifyUserLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyUserLevelOutcome(outcome.GetError());
    }
}

void WafClient::ModifyUserLevelAsync(const ModifyUserLevelRequest& request, const ModifyUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserLevelRequest&;
    using Resp = ModifyUserLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyUserLevelOutcomeCallable WafClient::ModifyUserLevelCallable(const ModifyUserLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserLevelOutcome>>();
    ModifyUserLevelAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyUserLevelRequest&,
        ModifyUserLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyUserSignatureRuleOutcome WafClient::ModifyUserSignatureRule(const ModifyUserSignatureRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserSignatureRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserSignatureRuleResponse rsp = ModifyUserSignatureRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserSignatureRuleOutcome(rsp);
        else
            return ModifyUserSignatureRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyUserSignatureRuleOutcome(outcome.GetError());
    }
}

void WafClient::ModifyUserSignatureRuleAsync(const ModifyUserSignatureRuleRequest& request, const ModifyUserSignatureRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserSignatureRuleRequest&;
    using Resp = ModifyUserSignatureRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserSignatureRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyUserSignatureRuleOutcomeCallable WafClient::ModifyUserSignatureRuleCallable(const ModifyUserSignatureRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserSignatureRuleOutcome>>();
    ModifyUserSignatureRuleAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyUserSignatureRuleRequest&,
        ModifyUserSignatureRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::ModifyWebshellStatusOutcome WafClient::ModifyWebshellStatus(const ModifyWebshellStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebshellStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebshellStatusResponse rsp = ModifyWebshellStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebshellStatusOutcome(rsp);
        else
            return ModifyWebshellStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWebshellStatusOutcome(outcome.GetError());
    }
}

void WafClient::ModifyWebshellStatusAsync(const ModifyWebshellStatusRequest& request, const ModifyWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebshellStatusRequest&;
    using Resp = ModifyWebshellStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebshellStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::ModifyWebshellStatusOutcomeCallable WafClient::ModifyWebshellStatusCallable(const ModifyWebshellStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebshellStatusOutcome>>();
    ModifyWebshellStatusAsync(
    request,
    [prom](
        const WafClient*,
        const ModifyWebshellStatusRequest&,
        ModifyWebshellStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::RefreshAccessCheckResultOutcome WafClient::RefreshAccessCheckResult(const RefreshAccessCheckResultRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshAccessCheckResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshAccessCheckResultResponse rsp = RefreshAccessCheckResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshAccessCheckResultOutcome(rsp);
        else
            return RefreshAccessCheckResultOutcome(o.GetError());
    }
    else
    {
        return RefreshAccessCheckResultOutcome(outcome.GetError());
    }
}

void WafClient::RefreshAccessCheckResultAsync(const RefreshAccessCheckResultRequest& request, const RefreshAccessCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshAccessCheckResultRequest&;
    using Resp = RefreshAccessCheckResultResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshAccessCheckResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::RefreshAccessCheckResultOutcomeCallable WafClient::RefreshAccessCheckResultCallable(const RefreshAccessCheckResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshAccessCheckResultOutcome>>();
    RefreshAccessCheckResultAsync(
    request,
    [prom](
        const WafClient*,
        const RefreshAccessCheckResultRequest&,
        RefreshAccessCheckResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::SearchAttackLogOutcome WafClient::SearchAttackLog(const SearchAttackLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchAttackLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchAttackLogResponse rsp = SearchAttackLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchAttackLogOutcome(rsp);
        else
            return SearchAttackLogOutcome(o.GetError());
    }
    else
    {
        return SearchAttackLogOutcome(outcome.GetError());
    }
}

void WafClient::SearchAttackLogAsync(const SearchAttackLogRequest& request, const SearchAttackLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchAttackLogRequest&;
    using Resp = SearchAttackLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchAttackLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::SearchAttackLogOutcomeCallable WafClient::SearchAttackLogCallable(const SearchAttackLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchAttackLogOutcome>>();
    SearchAttackLogAsync(
    request,
    [prom](
        const WafClient*,
        const SearchAttackLogRequest&,
        SearchAttackLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::SwitchElasticModeOutcome WafClient::SwitchElasticMode(const SwitchElasticModeRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchElasticMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchElasticModeResponse rsp = SwitchElasticModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchElasticModeOutcome(rsp);
        else
            return SwitchElasticModeOutcome(o.GetError());
    }
    else
    {
        return SwitchElasticModeOutcome(outcome.GetError());
    }
}

void WafClient::SwitchElasticModeAsync(const SwitchElasticModeRequest& request, const SwitchElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchElasticModeRequest&;
    using Resp = SwitchElasticModeResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchElasticMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::SwitchElasticModeOutcomeCallable WafClient::SwitchElasticModeCallable(const SwitchElasticModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchElasticModeOutcome>>();
    SwitchElasticModeAsync(
    request,
    [prom](
        const WafClient*,
        const SwitchElasticModeRequest&,
        SwitchElasticModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::UpsertCCRuleOutcome WafClient::UpsertCCRule(const UpsertCCRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpsertCCRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpsertCCRuleResponse rsp = UpsertCCRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpsertCCRuleOutcome(rsp);
        else
            return UpsertCCRuleOutcome(o.GetError());
    }
    else
    {
        return UpsertCCRuleOutcome(outcome.GetError());
    }
}

void WafClient::UpsertCCRuleAsync(const UpsertCCRuleRequest& request, const UpsertCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpsertCCRuleRequest&;
    using Resp = UpsertCCRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpsertCCRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::UpsertCCRuleOutcomeCallable WafClient::UpsertCCRuleCallable(const UpsertCCRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpsertCCRuleOutcome>>();
    UpsertCCRuleAsync(
    request,
    [prom](
        const WafClient*,
        const UpsertCCRuleRequest&,
        UpsertCCRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WafClient::UpsertSessionOutcome WafClient::UpsertSession(const UpsertSessionRequest &request)
{
    auto outcome = MakeRequest(request, "UpsertSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpsertSessionResponse rsp = UpsertSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpsertSessionOutcome(rsp);
        else
            return UpsertSessionOutcome(o.GetError());
    }
    else
    {
        return UpsertSessionOutcome(outcome.GetError());
    }
}

void WafClient::UpsertSessionAsync(const UpsertSessionRequest& request, const UpsertSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpsertSessionRequest&;
    using Resp = UpsertSessionResponse;

    DoRequestAsync<Req, Resp>(
        "UpsertSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WafClient::UpsertSessionOutcomeCallable WafClient::UpsertSessionCallable(const UpsertSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpsertSessionOutcome>>();
    UpsertSessionAsync(
    request,
    [prom](
        const WafClient*,
        const UpsertSessionRequest&,
        UpsertSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

