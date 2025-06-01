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

#include <tencentcloud/billing/v20180709/BillingClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Billing::V20180709;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-09";
    const string ENDPOINT = "billing.intl.tencentcloudapi.com";
}

BillingClient::BillingClient(const Credential &credential, const string &region) :
    BillingClient(credential, region, ClientProfile())
{
}

BillingClient::BillingClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BillingClient::CreateAllocationRuleOutcome BillingClient::CreateAllocationRule(const CreateAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationRuleResponse rsp = CreateAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationRuleOutcome(rsp);
        else
            return CreateAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationRuleAsync(const CreateAllocationRuleRequest& request, const CreateAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAllocationRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::CreateAllocationRuleOutcomeCallable BillingClient::CreateAllocationRuleCallable(const CreateAllocationRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAllocationRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAllocationRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::CreateAllocationTagOutcome BillingClient::CreateAllocationTag(const CreateAllocationTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationTagResponse rsp = CreateAllocationTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationTagOutcome(rsp);
        else
            return CreateAllocationTagOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationTagOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationTagAsync(const CreateAllocationTagRequest& request, const CreateAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAllocationTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::CreateAllocationTagOutcomeCallable BillingClient::CreateAllocationTagCallable(const CreateAllocationTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAllocationTagOutcome()>>(
        [this, request]()
        {
            return this->CreateAllocationTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::CreateAllocationUnitOutcome BillingClient::CreateAllocationUnit(const CreateAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllocationUnitResponse rsp = CreateAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllocationUnitOutcome(rsp);
        else
            return CreateAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return CreateAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::CreateAllocationUnitAsync(const CreateAllocationUnitRequest& request, const CreateAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAllocationUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::CreateAllocationUnitOutcomeCallable BillingClient::CreateAllocationUnitCallable(const CreateAllocationUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAllocationUnitOutcome()>>(
        [this, request]()
        {
            return this->CreateAllocationUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::CreateGatherRuleOutcome BillingClient::CreateGatherRule(const CreateGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatherRuleResponse rsp = CreateGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatherRuleOutcome(rsp);
        else
            return CreateGatherRuleOutcome(o.GetError());
    }
    else
    {
        return CreateGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::CreateGatherRuleAsync(const CreateGatherRuleRequest& request, const CreateGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGatherRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::CreateGatherRuleOutcomeCallable BillingClient::CreateGatherRuleCallable(const CreateGatherRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGatherRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateGatherRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DeleteAllocationRuleOutcome BillingClient::DeleteAllocationRule(const DeleteAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationRuleResponse rsp = DeleteAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationRuleOutcome(rsp);
        else
            return DeleteAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationRuleAsync(const DeleteAllocationRuleRequest& request, const DeleteAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllocationRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DeleteAllocationRuleOutcomeCallable BillingClient::DeleteAllocationRuleCallable(const DeleteAllocationRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllocationRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllocationRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DeleteAllocationTagOutcome BillingClient::DeleteAllocationTag(const DeleteAllocationTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationTagResponse rsp = DeleteAllocationTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationTagOutcome(rsp);
        else
            return DeleteAllocationTagOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationTagOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationTagAsync(const DeleteAllocationTagRequest& request, const DeleteAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllocationTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DeleteAllocationTagOutcomeCallable BillingClient::DeleteAllocationTagCallable(const DeleteAllocationTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllocationTagOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllocationTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DeleteAllocationUnitOutcome BillingClient::DeleteAllocationUnit(const DeleteAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllocationUnitResponse rsp = DeleteAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllocationUnitOutcome(rsp);
        else
            return DeleteAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return DeleteAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteAllocationUnitAsync(const DeleteAllocationUnitRequest& request, const DeleteAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAllocationUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DeleteAllocationUnitOutcomeCallable BillingClient::DeleteAllocationUnitCallable(const DeleteAllocationUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAllocationUnitOutcome()>>(
        [this, request]()
        {
            return this->DeleteAllocationUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DeleteGatherRuleOutcome BillingClient::DeleteGatherRule(const DeleteGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatherRuleResponse rsp = DeleteGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatherRuleOutcome(rsp);
        else
            return DeleteGatherRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::DeleteGatherRuleAsync(const DeleteGatherRuleRequest& request, const DeleteGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGatherRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DeleteGatherRuleOutcomeCallable BillingClient::DeleteGatherRuleCallable(const DeleteGatherRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGatherRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteGatherRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeAccountBalanceOutcome BillingClient::DescribeAccountBalance(const DescribeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountBalanceResponse rsp = DescribeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountBalanceOutcome(rsp);
        else
            return DescribeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountBalanceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAccountBalanceAsync(const DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAccountBalanceOutcomeCallable BillingClient::DescribeAccountBalanceCallable(const DescribeAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeAllocationRuleDetailOutcome BillingClient::DescribeAllocationRuleDetail(const DescribeAllocationRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationRuleDetailResponse rsp = DescribeAllocationRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationRuleDetailOutcome(rsp);
        else
            return DescribeAllocationRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationRuleDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationRuleDetailAsync(const DescribeAllocationRuleDetailRequest& request, const DescribeAllocationRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllocationRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAllocationRuleDetailOutcomeCallable BillingClient::DescribeAllocationRuleDetailCallable(const DescribeAllocationRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllocationRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllocationRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeAllocationRuleSummaryOutcome BillingClient::DescribeAllocationRuleSummary(const DescribeAllocationRuleSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationRuleSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationRuleSummaryResponse rsp = DescribeAllocationRuleSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationRuleSummaryOutcome(rsp);
        else
            return DescribeAllocationRuleSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationRuleSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationRuleSummaryAsync(const DescribeAllocationRuleSummaryRequest& request, const DescribeAllocationRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllocationRuleSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAllocationRuleSummaryOutcomeCallable BillingClient::DescribeAllocationRuleSummaryCallable(const DescribeAllocationRuleSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllocationRuleSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllocationRuleSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeAllocationTreeOutcome BillingClient::DescribeAllocationTree(const DescribeAllocationTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationTreeResponse rsp = DescribeAllocationTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationTreeOutcome(rsp);
        else
            return DescribeAllocationTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationTreeOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationTreeAsync(const DescribeAllocationTreeRequest& request, const DescribeAllocationTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllocationTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAllocationTreeOutcomeCallable BillingClient::DescribeAllocationTreeCallable(const DescribeAllocationTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllocationTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllocationTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeAllocationUnitDetailOutcome BillingClient::DescribeAllocationUnitDetail(const DescribeAllocationUnitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllocationUnitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllocationUnitDetailResponse rsp = DescribeAllocationUnitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllocationUnitDetailOutcome(rsp);
        else
            return DescribeAllocationUnitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAllocationUnitDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAllocationUnitDetailAsync(const DescribeAllocationUnitDetailRequest& request, const DescribeAllocationUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllocationUnitDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAllocationUnitDetailOutcomeCallable BillingClient::DescribeAllocationUnitDetailCallable(const DescribeAllocationUnitDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllocationUnitDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllocationUnitDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillAdjustInfoOutcome BillingClient::DescribeBillAdjustInfo(const DescribeBillAdjustInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillAdjustInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillAdjustInfoResponse rsp = DescribeBillAdjustInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillAdjustInfoOutcome(rsp);
        else
            return DescribeBillAdjustInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBillAdjustInfoOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillAdjustInfoAsync(const DescribeBillAdjustInfoRequest& request, const DescribeBillAdjustInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillAdjustInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillAdjustInfoOutcomeCallable BillingClient::DescribeBillAdjustInfoCallable(const DescribeBillAdjustInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillAdjustInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillAdjustInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillDetailOutcome BillingClient::DescribeBillDetail(const DescribeBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailResponse rsp = DescribeBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailOutcome(rsp);
        else
            return DescribeBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDetailAsync(const DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillDetailOutcomeCallable BillingClient::DescribeBillDetailCallable(const DescribeBillDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillDetailForOrganizationOutcome BillingClient::DescribeBillDetailForOrganization(const DescribeBillDetailForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetailForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailForOrganizationResponse rsp = DescribeBillDetailForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailForOrganizationOutcome(rsp);
        else
            return DescribeBillDetailForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDetailForOrganizationAsync(const DescribeBillDetailForOrganizationRequest& request, const DescribeBillDetailForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDetailForOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillDetailForOrganizationOutcomeCallable BillingClient::DescribeBillDetailForOrganizationCallable(const DescribeBillDetailForOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillDetailForOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillDetailForOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillDownloadUrlOutcome BillingClient::DescribeBillDownloadUrl(const DescribeBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDownloadUrlResponse rsp = DescribeBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDownloadUrlOutcome(rsp);
        else
            return DescribeBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDownloadUrlOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDownloadUrlAsync(const DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillDownloadUrlOutcomeCallable BillingClient::DescribeBillDownloadUrlCallable(const DescribeBillDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillResourceSummaryOutcome BillingClient::DescribeBillResourceSummary(const DescribeBillResourceSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillResourceSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillResourceSummaryResponse rsp = DescribeBillResourceSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillResourceSummaryOutcome(rsp);
        else
            return DescribeBillResourceSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillResourceSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillResourceSummaryAsync(const DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillResourceSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillResourceSummaryOutcomeCallable BillingClient::DescribeBillResourceSummaryCallable(const DescribeBillResourceSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillResourceSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillResourceSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillResourceSummaryForOrganizationOutcome BillingClient::DescribeBillResourceSummaryForOrganization(const DescribeBillResourceSummaryForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillResourceSummaryForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillResourceSummaryForOrganizationResponse rsp = DescribeBillResourceSummaryForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillResourceSummaryForOrganizationOutcome(rsp);
        else
            return DescribeBillResourceSummaryForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillResourceSummaryForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillResourceSummaryForOrganizationAsync(const DescribeBillResourceSummaryForOrganizationRequest& request, const DescribeBillResourceSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillResourceSummaryForOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillResourceSummaryForOrganizationOutcomeCallable BillingClient::DescribeBillResourceSummaryForOrganizationCallable(const DescribeBillResourceSummaryForOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillResourceSummaryForOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillResourceSummaryForOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryOutcome BillingClient::DescribeBillSummary(const DescribeBillSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryResponse rsp = DescribeBillSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryOutcome(rsp);
        else
            return DescribeBillSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryAsync(const DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryOutcomeCallable BillingClient::DescribeBillSummaryCallable(const DescribeBillSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByPayModeOutcome BillingClient::DescribeBillSummaryByPayMode(const DescribeBillSummaryByPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByPayModeResponse rsp = DescribeBillSummaryByPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByPayModeOutcome(rsp);
        else
            return DescribeBillSummaryByPayModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByPayModeOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByPayModeAsync(const DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByPayModeOutcomeCallable BillingClient::DescribeBillSummaryByPayModeCallable(const DescribeBillSummaryByPayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByPayModeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByPayMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByProductOutcome BillingClient::DescribeBillSummaryByProduct(const DescribeBillSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProductResponse rsp = DescribeBillSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProductOutcome(rsp);
        else
            return DescribeBillSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProductAsync(const DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByProductOutcomeCallable BillingClient::DescribeBillSummaryByProductCallable(const DescribeBillSummaryByProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByProjectOutcome BillingClient::DescribeBillSummaryByProject(const DescribeBillSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProjectResponse rsp = DescribeBillSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProjectOutcome(rsp);
        else
            return DescribeBillSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProjectAsync(const DescribeBillSummaryByProjectRequest& request, const DescribeBillSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByProjectOutcomeCallable BillingClient::DescribeBillSummaryByProjectCallable(const DescribeBillSummaryByProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByRegionOutcome BillingClient::DescribeBillSummaryByRegion(const DescribeBillSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByRegionResponse rsp = DescribeBillSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByRegionOutcome(rsp);
        else
            return DescribeBillSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByRegionAsync(const DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByRegionOutcomeCallable BillingClient::DescribeBillSummaryByRegionCallable(const DescribeBillSummaryByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByTagOutcome BillingClient::DescribeBillSummaryByTag(const DescribeBillSummaryByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByTagResponse rsp = DescribeBillSummaryByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByTagOutcome(rsp);
        else
            return DescribeBillSummaryByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByTagOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByTagAsync(const DescribeBillSummaryByTagRequest& request, const DescribeBillSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByTagOutcomeCallable BillingClient::DescribeBillSummaryByTagCallable(const DescribeBillSummaryByTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByTagOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryForOrganizationOutcome BillingClient::DescribeBillSummaryForOrganization(const DescribeBillSummaryForOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryForOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryForOrganizationResponse rsp = DescribeBillSummaryForOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryForOrganizationOutcome(rsp);
        else
            return DescribeBillSummaryForOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryForOrganizationOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryForOrganizationAsync(const DescribeBillSummaryForOrganizationRequest& request, const DescribeBillSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryForOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryForOrganizationOutcomeCallable BillingClient::DescribeBillSummaryForOrganizationCallable(const DescribeBillSummaryForOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryForOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryForOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostDetailOutcome BillingClient::DescribeCostDetail(const DescribeCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostDetailResponse rsp = DescribeCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostDetailOutcome(rsp);
        else
            return DescribeCostDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCostDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostDetailAsync(const DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostDetailOutcomeCallable BillingClient::DescribeCostDetailCallable(const DescribeCostDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostExplorerSummaryOutcome BillingClient::DescribeCostExplorerSummary(const DescribeCostExplorerSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostExplorerSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostExplorerSummaryResponse rsp = DescribeCostExplorerSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostExplorerSummaryOutcome(rsp);
        else
            return DescribeCostExplorerSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCostExplorerSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostExplorerSummaryAsync(const DescribeCostExplorerSummaryRequest& request, const DescribeCostExplorerSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostExplorerSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostExplorerSummaryOutcomeCallable BillingClient::DescribeCostExplorerSummaryCallable(const DescribeCostExplorerSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostExplorerSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostExplorerSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByProductOutcome BillingClient::DescribeCostSummaryByProduct(const DescribeCostSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProductResponse rsp = DescribeCostSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProductOutcome(rsp);
        else
            return DescribeCostSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProductAsync(const DescribeCostSummaryByProductRequest& request, const DescribeCostSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByProductOutcomeCallable BillingClient::DescribeCostSummaryByProductCallable(const DescribeCostSummaryByProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByProjectOutcome BillingClient::DescribeCostSummaryByProject(const DescribeCostSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProjectResponse rsp = DescribeCostSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProjectOutcome(rsp);
        else
            return DescribeCostSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProjectAsync(const DescribeCostSummaryByProjectRequest& request, const DescribeCostSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByProjectOutcomeCallable BillingClient::DescribeCostSummaryByProjectCallable(const DescribeCostSummaryByProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByRegionOutcome BillingClient::DescribeCostSummaryByRegion(const DescribeCostSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByRegionResponse rsp = DescribeCostSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByRegionOutcome(rsp);
        else
            return DescribeCostSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByRegionAsync(const DescribeCostSummaryByRegionRequest& request, const DescribeCostSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByRegionOutcomeCallable BillingClient::DescribeCostSummaryByRegionCallable(const DescribeCostSummaryByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByResourceOutcome BillingClient::DescribeCostSummaryByResource(const DescribeCostSummaryByResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByResourceResponse rsp = DescribeCostSummaryByResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByResourceOutcome(rsp);
        else
            return DescribeCostSummaryByResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByResourceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByResourceAsync(const DescribeCostSummaryByResourceRequest& request, const DescribeCostSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByResourceOutcomeCallable BillingClient::DescribeCostSummaryByResourceCallable(const DescribeCostSummaryByResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeDealsByCondOutcome BillingClient::DescribeDealsByCond(const DescribeDealsByCondRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDealsByCond");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDealsByCondResponse rsp = DescribeDealsByCondResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDealsByCondOutcome(rsp);
        else
            return DescribeDealsByCondOutcome(o.GetError());
    }
    else
    {
        return DescribeDealsByCondOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDealsByCondAsync(const DescribeDealsByCondRequest& request, const DescribeDealsByCondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDealsByCond(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeDealsByCondOutcomeCallable BillingClient::DescribeDealsByCondCallable(const DescribeDealsByCondRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDealsByCondOutcome()>>(
        [this, request]()
        {
            return this->DescribeDealsByCond(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeDosageCosDetailByDateOutcome BillingClient::DescribeDosageCosDetailByDate(const DescribeDosageCosDetailByDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDosageCosDetailByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDosageCosDetailByDateResponse rsp = DescribeDosageCosDetailByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDosageCosDetailByDateOutcome(rsp);
        else
            return DescribeDosageCosDetailByDateOutcome(o.GetError());
    }
    else
    {
        return DescribeDosageCosDetailByDateOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDosageCosDetailByDateAsync(const DescribeDosageCosDetailByDateRequest& request, const DescribeDosageCosDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDosageCosDetailByDate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeDosageCosDetailByDateOutcomeCallable BillingClient::DescribeDosageCosDetailByDateCallable(const DescribeDosageCosDetailByDateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDosageCosDetailByDateOutcome()>>(
        [this, request]()
        {
            return this->DescribeDosageCosDetailByDate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeGatherRuleDetailOutcome BillingClient::DescribeGatherRuleDetail(const DescribeGatherRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatherRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatherRuleDetailResponse rsp = DescribeGatherRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatherRuleDetailOutcome(rsp);
        else
            return DescribeGatherRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGatherRuleDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeGatherRuleDetailAsync(const DescribeGatherRuleDetailRequest& request, const DescribeGatherRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatherRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeGatherRuleDetailOutcomeCallable BillingClient::DescribeGatherRuleDetailCallable(const DescribeGatherRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatherRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatherRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeTagListOutcome BillingClient::DescribeTagList(const DescribeTagListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagListResponse rsp = DescribeTagListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagListOutcome(rsp);
        else
            return DescribeTagListOutcome(o.GetError());
    }
    else
    {
        return DescribeTagListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeTagListAsync(const DescribeTagListRequest& request, const DescribeTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTagList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeTagListOutcomeCallable BillingClient::DescribeTagListCallable(const DescribeTagListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTagListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTagList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeVoucherInfoOutcome BillingClient::DescribeVoucherInfo(const DescribeVoucherInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoucherInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoucherInfoResponse rsp = DescribeVoucherInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoucherInfoOutcome(rsp);
        else
            return DescribeVoucherInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVoucherInfoOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeVoucherInfoAsync(const DescribeVoucherInfoRequest& request, const DescribeVoucherInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVoucherInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeVoucherInfoOutcomeCallable BillingClient::DescribeVoucherInfoCallable(const DescribeVoucherInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVoucherInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVoucherInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeVoucherUsageDetailsOutcome BillingClient::DescribeVoucherUsageDetails(const DescribeVoucherUsageDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoucherUsageDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoucherUsageDetailsResponse rsp = DescribeVoucherUsageDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoucherUsageDetailsOutcome(rsp);
        else
            return DescribeVoucherUsageDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeVoucherUsageDetailsOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeVoucherUsageDetailsAsync(const DescribeVoucherUsageDetailsRequest& request, const DescribeVoucherUsageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVoucherUsageDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeVoucherUsageDetailsOutcomeCallable BillingClient::DescribeVoucherUsageDetailsCallable(const DescribeVoucherUsageDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVoucherUsageDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVoucherUsageDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::ModifyAllocationRuleOutcome BillingClient::ModifyAllocationRule(const ModifyAllocationRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllocationRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllocationRuleResponse rsp = ModifyAllocationRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllocationRuleOutcome(rsp);
        else
            return ModifyAllocationRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAllocationRuleOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyAllocationRuleAsync(const ModifyAllocationRuleRequest& request, const ModifyAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllocationRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::ModifyAllocationRuleOutcomeCallable BillingClient::ModifyAllocationRuleCallable(const ModifyAllocationRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllocationRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllocationRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::ModifyAllocationUnitOutcome BillingClient::ModifyAllocationUnit(const ModifyAllocationUnitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAllocationUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAllocationUnitResponse rsp = ModifyAllocationUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAllocationUnitOutcome(rsp);
        else
            return ModifyAllocationUnitOutcome(o.GetError());
    }
    else
    {
        return ModifyAllocationUnitOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyAllocationUnitAsync(const ModifyAllocationUnitRequest& request, const ModifyAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAllocationUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::ModifyAllocationUnitOutcomeCallable BillingClient::ModifyAllocationUnitCallable(const ModifyAllocationUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAllocationUnitOutcome()>>(
        [this, request]()
        {
            return this->ModifyAllocationUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::ModifyGatherRuleOutcome BillingClient::ModifyGatherRule(const ModifyGatherRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatherRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatherRuleResponse rsp = ModifyGatherRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatherRuleOutcome(rsp);
        else
            return ModifyGatherRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGatherRuleOutcome(outcome.GetError());
    }
}

void BillingClient::ModifyGatherRuleAsync(const ModifyGatherRuleRequest& request, const ModifyGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGatherRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::ModifyGatherRuleOutcomeCallable BillingClient::ModifyGatherRuleCallable(const ModifyGatherRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGatherRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyGatherRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

