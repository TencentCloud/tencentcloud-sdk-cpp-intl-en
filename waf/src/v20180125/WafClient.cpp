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
    const string ENDPOINT = "waf.tencentcloudapi.com";
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAntiFakeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddAntiFakeUrlOutcomeCallable WafClient::AddAntiFakeUrlCallable(const AddAntiFakeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAntiFakeUrlOutcome()>>(
        [this, request]()
        {
            return this->AddAntiFakeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAntiInfoLeakRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddAntiInfoLeakRulesOutcomeCallable WafClient::AddAntiInfoLeakRulesCallable(const AddAntiInfoLeakRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAntiInfoLeakRulesOutcome()>>(
        [this, request]()
        {
            return this->AddAntiInfoLeakRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddCustomRuleOutcomeCallable WafClient::AddCustomRuleCallable(const AddCustomRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomRuleOutcome()>>(
        [this, request]()
        {
            return this->AddCustomRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddCustomWhiteRuleOutcomeCallable WafClient::AddCustomWhiteRuleCallable(const AddCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->AddCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::AddSpartaProtectionOutcomeCallable WafClient::AddSpartaProtectionCallable(const AddSpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->AddSpartaProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateDealsOutcomeCallable WafClient::CreateDealsCallable(const CreateDealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDealsOutcome()>>(
        [this, request]()
        {
            return this->CreateDeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateHostOutcomeCallable WafClient::CreateHostCallable(const CreateHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostOutcome()>>(
        [this, request]()
        {
            return this->CreateHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::CreateIpAccessControlOutcomeCallable WafClient::CreateIpAccessControlCallable(const CreateIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->CreateIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAntiFakeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteAntiFakeUrlOutcomeCallable WafClient::DeleteAntiFakeUrlCallable(const DeleteAntiFakeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAntiFakeUrlOutcome()>>(
        [this, request]()
        {
            return this->DeleteAntiFakeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAntiInfoLeakRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteAntiInfoLeakRuleOutcomeCallable WafClient::DeleteAntiInfoLeakRuleCallable(const DeleteAntiInfoLeakRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAntiInfoLeakRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAntiInfoLeakRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteCCRuleOutcomeCallable WafClient::DeleteCCRuleCallable(const DeleteCCRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteCustomRuleOutcomeCallable WafClient::DeleteCustomRuleCallable(const DeleteCustomRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteCustomWhiteRuleOutcomeCallable WafClient::DeleteCustomWhiteRuleCallable(const DeleteCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteHostOutcomeCallable WafClient::DeleteHostCallable(const DeleteHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIpAccessControlV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteIpAccessControlV2OutcomeCallable WafClient::DeleteIpAccessControlV2Callable(const DeleteIpAccessControlV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIpAccessControlV2Outcome()>>(
        [this, request]()
        {
            return this->DeleteIpAccessControlV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteSessionOutcomeCallable WafClient::DeleteSessionCallable(const DeleteSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSessionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DeleteSpartaProtectionOutcomeCallable WafClient::DeleteSpartaProtectionCallable(const DeleteSpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSpartaProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAntiFakeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAntiFakeRulesOutcomeCallable WafClient::DescribeAntiFakeRulesCallable(const DescribeAntiFakeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAntiFakeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAntiFakeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeAntiFakeUrlOutcome WafClient::DescribeAntiFakeUrl(const DescribeAntiFakeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAntiFakeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAntiFakeUrlResponse rsp = DescribeAntiFakeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAntiFakeUrlOutcome(rsp);
        else
            return DescribeAntiFakeUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeAntiFakeUrlOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAntiFakeUrlAsync(const DescribeAntiFakeUrlRequest& request, const DescribeAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAntiFakeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAntiFakeUrlOutcomeCallable WafClient::DescribeAntiFakeUrlCallable(const DescribeAntiFakeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAntiFakeUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeAntiFakeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WafClient::DescribeAntiInfoLeakRulesOutcome WafClient::DescribeAntiInfoLeakRules(const DescribeAntiInfoLeakRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAntiInfoLeakRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAntiInfoLeakRulesResponse rsp = DescribeAntiInfoLeakRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAntiInfoLeakRulesOutcome(rsp);
        else
            return DescribeAntiInfoLeakRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAntiInfoLeakRulesOutcome(outcome.GetError());
    }
}

void WafClient::DescribeAntiInfoLeakRulesAsync(const DescribeAntiInfoLeakRulesRequest& request, const DescribeAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAntiInfoLeakRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAntiInfoLeakRulesOutcomeCallable WafClient::DescribeAntiInfoLeakRulesCallable(const DescribeAntiInfoLeakRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAntiInfoLeakRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAntiInfoLeakRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAntiInfoLeakageRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAntiInfoLeakageRulesOutcomeCallable WafClient::DescribeAntiInfoLeakageRulesCallable(const DescribeAntiInfoLeakageRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAntiInfoLeakageRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAntiInfoLeakageRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttackType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeAttackTypeOutcomeCallable WafClient::DescribeAttackTypeCallable(const DescribeAttackTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttackTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttackType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeBatchIpAccessControlOutcomeCallable WafClient::DescribeBatchIpAccessControlCallable(const DescribeBatchIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCCRuleOutcomeCallable WafClient::DescribeCCRuleCallable(const DescribeCCRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCCRuleListOutcomeCallable WafClient::DescribeCCRuleListCallable(const DescribeCCRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateVerifyResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCertificateVerifyResultOutcomeCallable WafClient::DescribeCertificateVerifyResultCallable(const DescribeCertificateVerifyResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateVerifyResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateVerifyResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCiphersDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCiphersDetailOutcomeCallable WafClient::DescribeCiphersDetailCallable(const DescribeCiphersDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCiphersDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCiphersDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCustomRuleListOutcomeCallable WafClient::DescribeCustomRuleListCallable(const DescribeCustomRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeCustomWhiteRuleOutcomeCallable WafClient::DescribeCustomWhiteRuleCallable(const DescribeCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainCountInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainCountInfoOutcomeCallable WafClient::DescribeDomainCountInfoCallable(const DescribeDomainCountInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainCountInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainCountInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainDetailsClb(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainDetailsClbOutcomeCallable WafClient::DescribeDomainDetailsClbCallable(const DescribeDomainDetailsClbRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainDetailsClbOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainDetailsClb(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainDetailsSaas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainDetailsSaasOutcomeCallable WafClient::DescribeDomainDetailsSaasCallable(const DescribeDomainDetailsSaasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainDetailsSaasOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainDetailsSaas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainVerifyResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainVerifyResultOutcomeCallable WafClient::DescribeDomainVerifyResultCallable(const DescribeDomainVerifyResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainVerifyResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainVerifyResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeDomainsOutcomeCallable WafClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFindDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeFindDomainListOutcomeCallable WafClient::DescribeFindDomainListCallable(const DescribeFindDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFindDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFindDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistogram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHistogramOutcomeCallable WafClient::DescribeHistogramCallable(const DescribeHistogramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistogramOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistogram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostOutcomeCallable WafClient::DescribeHostCallable(const DescribeHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostLimitOutcomeCallable WafClient::DescribeHostLimitCallable(const DescribeHostLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeHostsOutcomeCallable WafClient::DescribeHostsCallable(const DescribeHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeInstancesOutcomeCallable WafClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeIpAccessControlOutcomeCallable WafClient::DescribeIpAccessControlCallable(const DescribeIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeModuleStatusOutcomeCallable WafClient::DescribeModuleStatusCallable(const DescribeModuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModuleStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeModuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeObjectsOutcomeCallable WafClient::DescribeObjectsCallable(const DescribeObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeObjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakPoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePeakPointsOutcomeCallable WafClient::DescribePeakPointsCallable(const DescribePeakPointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakPointsOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakPoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePolicyStatusOutcomeCallable WafClient::DescribePolicyStatusCallable(const DescribePolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePorts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribePortsOutcomeCallable WafClient::DescribePortsCallable(const DescribePortsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePortsOutcome()>>(
        [this, request]()
        {
            return this->DescribePorts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeRuleLimitOutcomeCallable WafClient::DescribeRuleLimitCallable(const DescribeRuleLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeSessionOutcomeCallable WafClient::DescribeSessionCallable(const DescribeSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSessionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpartaProtectionInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeSpartaProtectionInfoOutcomeCallable WafClient::DescribeSpartaProtectionInfoCallable(const DescribeSpartaProtectionInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpartaProtectionInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpartaProtectionInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTlsVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeTlsVersionOutcomeCallable WafClient::DescribeTlsVersionCallable(const DescribeTlsVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTlsVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTlsVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopAttackDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeTopAttackDomainOutcomeCallable WafClient::DescribeTopAttackDomainCallable(const DescribeTopAttackDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopAttackDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopAttackDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserClbWafRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserClbWafRegionsOutcomeCallable WafClient::DescribeUserClbWafRegionsCallable(const DescribeUserClbWafRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserClbWafRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserClbWafRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserDomainInfoOutcomeCallable WafClient::DescribeUserDomainInfoCallable(const DescribeUserDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeUserLevelOutcomeCallable WafClient::DescribeUserLevelCallable(const DescribeUserLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserLevelOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVipInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeVipInfoOutcomeCallable WafClient::DescribeVipInfoCallable(const DescribeVipInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVipInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVipInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebshellStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::DescribeWebshellStatusOutcomeCallable WafClient::DescribeWebshellStatusCallable(const DescribeWebshellStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebshellStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebshellStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreshAntiFakeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::FreshAntiFakeUrlOutcomeCallable WafClient::FreshAntiFakeUrlCallable(const FreshAntiFakeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreshAntiFakeUrlOutcome()>>(
        [this, request]()
        {
            return this->FreshAntiFakeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateDealsAndPayNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GenerateDealsAndPayNewOutcomeCallable WafClient::GenerateDealsAndPayNewCallable(const GenerateDealsAndPayNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateDealsAndPayNewOutcome()>>(
        [this, request]()
        {
            return this->GenerateDealsAndPayNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAttackTotalCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GetAttackTotalCountOutcomeCallable WafClient::GetAttackTotalCountCallable(const GetAttackTotalCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAttackTotalCountOutcome()>>(
        [this, request]()
        {
            return this->GetAttackTotalCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInstanceQpsLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::GetInstanceQpsLimitOutcomeCallable WafClient::GetInstanceQpsLimitCallable(const GetInstanceQpsLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInstanceQpsLimitOutcome()>>(
        [this, request]()
        {
            return this->GetInstanceQpsLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ImportIpAccessControlOutcomeCallable WafClient::ImportIpAccessControlCallable(const ImportIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->ImportIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAntiFakeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAntiFakeUrlOutcomeCallable WafClient::ModifyAntiFakeUrlCallable(const ModifyAntiFakeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAntiFakeUrlOutcome()>>(
        [this, request]()
        {
            return this->ModifyAntiFakeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAntiFakeUrlStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAntiFakeUrlStatusOutcomeCallable WafClient::ModifyAntiFakeUrlStatusCallable(const ModifyAntiFakeUrlStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAntiFakeUrlStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAntiFakeUrlStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAntiInfoLeakRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAntiInfoLeakRuleStatusOutcomeCallable WafClient::ModifyAntiInfoLeakRuleStatusCallable(const ModifyAntiInfoLeakRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAntiInfoLeakRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAntiInfoLeakRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAntiInfoLeakRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyAntiInfoLeakRulesOutcomeCallable WafClient::ModifyAntiInfoLeakRulesCallable(const ModifyAntiInfoLeakRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAntiInfoLeakRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAntiInfoLeakRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApiAnalyzeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyApiAnalyzeStatusOutcomeCallable WafClient::ModifyApiAnalyzeStatusCallable(const ModifyApiAnalyzeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApiAnalyzeStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApiAnalyzeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBotStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyBotStatusOutcomeCallable WafClient::ModifyBotStatusCallable(const ModifyBotStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBotStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBotStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomRuleOutcomeCallable WafClient::ModifyCustomRuleCallable(const ModifyCustomRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomRuleStatusOutcomeCallable WafClient::ModifyCustomRuleStatusCallable(const ModifyCustomRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomWhiteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomWhiteRuleOutcomeCallable WafClient::ModifyCustomWhiteRuleCallable(const ModifyCustomWhiteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomWhiteRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomWhiteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomWhiteRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyCustomWhiteRuleStatusOutcomeCallable WafClient::ModifyCustomWhiteRuleStatusCallable(const ModifyCustomWhiteRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomWhiteRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomWhiteRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainIpv6Status(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyDomainIpv6StatusOutcomeCallable WafClient::ModifyDomainIpv6StatusCallable(const ModifyDomainIpv6StatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainIpv6StatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainIpv6Status(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainsCLSStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyDomainsCLSStatusOutcomeCallable WafClient::ModifyDomainsCLSStatusCallable(const ModifyDomainsCLSStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainsCLSStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainsCLSStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostOutcomeCallable WafClient::ModifyHostCallable(const ModifyHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostFlowMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostFlowModeOutcomeCallable WafClient::ModifyHostFlowModeCallable(const ModifyHostFlowModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostFlowModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostFlowMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostModeOutcomeCallable WafClient::ModifyHostModeCallable(const ModifyHostModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyHostStatusOutcomeCallable WafClient::ModifyHostStatusCallable(const ModifyHostStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceElasticMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyInstanceElasticModeOutcomeCallable WafClient::ModifyInstanceElasticModeCallable(const ModifyInstanceElasticModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceElasticModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceElasticMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyInstanceNameOutcomeCallable WafClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceQpsLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyInstanceQpsLimitOutcomeCallable WafClient::ModifyInstanceQpsLimitCallable(const ModifyInstanceQpsLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceQpsLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceQpsLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyInstanceRenewFlagOutcomeCallable WafClient::ModifyInstanceRenewFlagCallable(const ModifyInstanceRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIpAccessControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyIpAccessControlOutcomeCallable WafClient::ModifyIpAccessControlCallable(const ModifyIpAccessControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIpAccessControlOutcome()>>(
        [this, request]()
        {
            return this->ModifyIpAccessControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyModuleStatusOutcomeCallable WafClient::ModifyModuleStatusCallable(const ModifyModuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyObjectOutcomeCallable WafClient::ModifyObjectCallable(const ModifyObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyObjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProtectionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyProtectionStatusOutcomeCallable WafClient::ModifyProtectionStatusCallable(const ModifyProtectionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProtectionStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyProtectionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySpartaProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifySpartaProtectionOutcomeCallable WafClient::ModifySpartaProtectionCallable(const ModifySpartaProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySpartaProtectionOutcome()>>(
        [this, request]()
        {
            return this->ModifySpartaProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySpartaProtectionMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifySpartaProtectionModeOutcomeCallable WafClient::ModifySpartaProtectionModeCallable(const ModifySpartaProtectionModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySpartaProtectionModeOutcome()>>(
        [this, request]()
        {
            return this->ModifySpartaProtectionMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyUserLevelOutcomeCallable WafClient::ModifyUserLevelCallable(const ModifyUserLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserSignatureRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyUserSignatureRuleOutcomeCallable WafClient::ModifyUserSignatureRuleCallable(const ModifyUserSignatureRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserSignatureRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserSignatureRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebshellStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::ModifyWebshellStatusOutcomeCallable WafClient::ModifyWebshellStatusCallable(const ModifyWebshellStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebshellStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebshellStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefreshAccessCheckResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::RefreshAccessCheckResultOutcomeCallable WafClient::RefreshAccessCheckResultCallable(const RefreshAccessCheckResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefreshAccessCheckResultOutcome()>>(
        [this, request]()
        {
            return this->RefreshAccessCheckResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchElasticMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::SwitchElasticModeOutcomeCallable WafClient::SwitchElasticModeCallable(const SwitchElasticModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchElasticModeOutcome()>>(
        [this, request]()
        {
            return this->SwitchElasticMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpsertCCRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::UpsertCCRuleOutcomeCallable WafClient::UpsertCCRuleCallable(const UpsertCCRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpsertCCRuleOutcome()>>(
        [this, request]()
        {
            return this->UpsertCCRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpsertSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WafClient::UpsertSessionOutcomeCallable WafClient::UpsertSessionCallable(const UpsertSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpsertSessionOutcome()>>(
        [this, request]()
        {
            return this->UpsertSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

