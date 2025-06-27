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

#include <tencentcloud/intlpartnersmgt/v20220928/IntlpartnersmgtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Intlpartnersmgt::V20220928;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-28";
    const string ENDPOINT = "intlpartnersmgt.intl.tencentcloudapi.com";
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region) :
    IntlpartnersmgtClient(credential, region, ClientProfile())
{
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IntlpartnersmgtClient::AllocateCreditPoolOutcome IntlpartnersmgtClient::AllocateCreditPool(const AllocateCreditPoolRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateCreditPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateCreditPoolResponse rsp = AllocateCreditPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateCreditPoolOutcome(rsp);
        else
            return AllocateCreditPoolOutcome(o.GetError());
    }
    else
    {
        return AllocateCreditPoolOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::AllocateCreditPoolAsync(const AllocateCreditPoolRequest& request, const AllocateCreditPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateCreditPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::AllocateCreditPoolOutcomeCallable IntlpartnersmgtClient::AllocateCreditPoolCallable(const AllocateCreditPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateCreditPoolOutcome()>>(
        [this, request]()
        {
            return this->AllocateCreditPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::AllocateCustomerCreditOutcome IntlpartnersmgtClient::AllocateCustomerCredit(const AllocateCustomerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateCustomerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateCustomerCreditResponse rsp = AllocateCustomerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateCustomerCreditOutcome(rsp);
        else
            return AllocateCustomerCreditOutcome(o.GetError());
    }
    else
    {
        return AllocateCustomerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::AllocateCustomerCreditAsync(const AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateCustomerCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::AllocateCustomerCreditOutcomeCallable IntlpartnersmgtClient::AllocateCustomerCreditCallable(const AllocateCustomerCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateCustomerCreditOutcome()>>(
        [this, request]()
        {
            return this->AllocateCustomerCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::ApproveClientApplyOutcome IntlpartnersmgtClient::ApproveClientApply(const ApproveClientApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ApproveClientApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApproveClientApplyResponse rsp = ApproveClientApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApproveClientApplyOutcome(rsp);
        else
            return ApproveClientApplyOutcome(o.GetError());
    }
    else
    {
        return ApproveClientApplyOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ApproveClientApplyAsync(const ApproveClientApplyRequest& request, const ApproveClientApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApproveClientApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::ApproveClientApplyOutcomeCallable IntlpartnersmgtClient::ApproveClientApplyCallable(const ApproveClientApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApproveClientApplyOutcome()>>(
        [this, request]()
        {
            return this->ApproveClientApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::ApproveSubAgentApplyOutcome IntlpartnersmgtClient::ApproveSubAgentApply(const ApproveSubAgentApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ApproveSubAgentApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApproveSubAgentApplyResponse rsp = ApproveSubAgentApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApproveSubAgentApplyOutcome(rsp);
        else
            return ApproveSubAgentApplyOutcome(o.GetError());
    }
    else
    {
        return ApproveSubAgentApplyOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ApproveSubAgentApplyAsync(const ApproveSubAgentApplyRequest& request, const ApproveSubAgentApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApproveSubAgentApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::ApproveSubAgentApplyOutcomeCallable IntlpartnersmgtClient::ApproveSubAgentApplyCallable(const ApproveSubAgentApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApproveSubAgentApplyOutcome()>>(
        [this, request]()
        {
            return this->ApproveSubAgentApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::CreateAccountOutcome IntlpartnersmgtClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::CreateAccountOutcomeCallable IntlpartnersmgtClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::CreateAndSendClientInvitationMailOutcome IntlpartnersmgtClient::CreateAndSendClientInvitationMail(const CreateAndSendClientInvitationMailRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndSendClientInvitationMail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndSendClientInvitationMailResponse rsp = CreateAndSendClientInvitationMailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndSendClientInvitationMailOutcome(rsp);
        else
            return CreateAndSendClientInvitationMailOutcome(o.GetError());
    }
    else
    {
        return CreateAndSendClientInvitationMailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::CreateAndSendClientInvitationMailAsync(const CreateAndSendClientInvitationMailRequest& request, const CreateAndSendClientInvitationMailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndSendClientInvitationMail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::CreateAndSendClientInvitationMailOutcomeCallable IntlpartnersmgtClient::CreateAndSendClientInvitationMailCallable(const CreateAndSendClientInvitationMailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndSendClientInvitationMailOutcome()>>(
        [this, request]()
        {
            return this->CreateAndSendClientInvitationMail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeBillDetailOutcome IntlpartnersmgtClient::DescribeBillDetail(const DescribeBillDetailRequest &request)
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

void IntlpartnersmgtClient::DescribeBillDetailAsync(const DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillDetailOutcomeCallable IntlpartnersmgtClient::DescribeBillDetailCallable(const DescribeBillDetailRequest &request)
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

IntlpartnersmgtClient::DescribeBillDownloadUrlOutcome IntlpartnersmgtClient::DescribeBillDownloadUrl(const DescribeBillDownloadUrlRequest &request)
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

void IntlpartnersmgtClient::DescribeBillDownloadUrlAsync(const DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeBillDownloadUrlCallable(const DescribeBillDownloadUrlRequest &request)
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

IntlpartnersmgtClient::DescribeBillSummaryOutcome IntlpartnersmgtClient::DescribeBillSummary(const DescribeBillSummaryRequest &request)
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

void IntlpartnersmgtClient::DescribeBillSummaryAsync(const DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillSummaryOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryCallable(const DescribeBillSummaryRequest &request)
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

IntlpartnersmgtClient::DescribeBillSummaryByPayModeOutcome IntlpartnersmgtClient::DescribeBillSummaryByPayMode(const DescribeBillSummaryByPayModeRequest &request)
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

void IntlpartnersmgtClient::DescribeBillSummaryByPayModeAsync(const DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillSummaryByPayModeOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByPayModeCallable(const DescribeBillSummaryByPayModeRequest &request)
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

IntlpartnersmgtClient::DescribeBillSummaryByProductOutcome IntlpartnersmgtClient::DescribeBillSummaryByProduct(const DescribeBillSummaryByProductRequest &request)
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

void IntlpartnersmgtClient::DescribeBillSummaryByProductAsync(const DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillSummaryByProductOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByProductCallable(const DescribeBillSummaryByProductRequest &request)
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

IntlpartnersmgtClient::DescribeBillSummaryByRegionOutcome IntlpartnersmgtClient::DescribeBillSummaryByRegion(const DescribeBillSummaryByRegionRequest &request)
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

void IntlpartnersmgtClient::DescribeBillSummaryByRegionAsync(const DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeBillSummaryByRegionOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByRegionCallable(const DescribeBillSummaryByRegionRequest &request)
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

IntlpartnersmgtClient::DescribeCustomerBillDetailOutcome IntlpartnersmgtClient::DescribeCustomerBillDetail(const DescribeCustomerBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDetailResponse rsp = DescribeCustomerBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDetailOutcome(rsp);
        else
            return DescribeCustomerBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDetailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDetailAsync(const DescribeCustomerBillDetailRequest& request, const DescribeCustomerBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerBillDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerBillDetailOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDetailCallable(const DescribeCustomerBillDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerBillDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerBillDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillDetailByDayOutcome IntlpartnersmgtClient::DescribeCustomerBillDetailByDay(const DescribeCustomerBillDetailByDayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDetailByDay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDetailByDayResponse rsp = DescribeCustomerBillDetailByDayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDetailByDayOutcome(rsp);
        else
            return DescribeCustomerBillDetailByDayOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDetailByDayOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDetailByDayAsync(const DescribeCustomerBillDetailByDayRequest& request, const DescribeCustomerBillDetailByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerBillDetailByDay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerBillDetailByDayOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDetailByDayCallable(const DescribeCustomerBillDetailByDayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerBillDetailByDayOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerBillDetailByDay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlOutcome IntlpartnersmgtClient::DescribeCustomerBillDownloadUrl(const DescribeCustomerBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDownloadUrlResponse rsp = DescribeCustomerBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDownloadUrlOutcome(rsp);
        else
            return DescribeCustomerBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDownloadUrlOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlAsync(const DescribeCustomerBillDownloadUrlRequest& request, const DescribeCustomerBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlCallable(const DescribeCustomerBillDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerBillDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerBillDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillSummaryOutcome IntlpartnersmgtClient::DescribeCustomerBillSummary(const DescribeCustomerBillSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillSummaryResponse rsp = DescribeCustomerBillSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillSummaryOutcome(rsp);
        else
            return DescribeCustomerBillSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillSummaryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillSummaryAsync(const DescribeCustomerBillSummaryRequest& request, const DescribeCustomerBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerBillSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerBillSummaryOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillSummaryCallable(const DescribeCustomerBillSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerBillSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerBillSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeCustomerInfoOutcome IntlpartnersmgtClient::DescribeCustomerInfo(const DescribeCustomerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerInfoResponse rsp = DescribeCustomerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerInfoOutcome(rsp);
        else
            return DescribeCustomerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerInfoOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerInfoAsync(const DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerInfoOutcomeCallable IntlpartnersmgtClient::DescribeCustomerInfoCallable(const DescribeCustomerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeCustomerUinOutcome IntlpartnersmgtClient::DescribeCustomerUin(const DescribeCustomerUinRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerUinResponse rsp = DescribeCustomerUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerUinOutcome(rsp);
        else
            return DescribeCustomerUinOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerUinAsync(const DescribeCustomerUinRequest& request, const DescribeCustomerUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerUin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeCustomerUinOutcomeCallable IntlpartnersmgtClient::DescribeCustomerUinCallable(const DescribeCustomerUinRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerUinOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerUin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::DescribeRebateDownloadUrlOutcome IntlpartnersmgtClient::DescribeRebateDownloadUrl(const DescribeRebateDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRebateDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRebateDownloadUrlResponse rsp = DescribeRebateDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRebateDownloadUrlOutcome(rsp);
        else
            return DescribeRebateDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeRebateDownloadUrlOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeRebateDownloadUrlAsync(const DescribeRebateDownloadUrlRequest& request, const DescribeRebateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRebateDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::DescribeRebateDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeRebateDownloadUrlCallable(const DescribeRebateDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRebateDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeRebateDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::ForceQNOutcome IntlpartnersmgtClient::ForceQN(const ForceQNRequest &request)
{
    auto outcome = MakeRequest(request, "ForceQN");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForceQNResponse rsp = ForceQNResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForceQNOutcome(rsp);
        else
            return ForceQNOutcome(o.GetError());
    }
    else
    {
        return ForceQNOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ForceQNAsync(const ForceQNRequest& request, const ForceQNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForceQN(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::ForceQNOutcomeCallable IntlpartnersmgtClient::ForceQNCallable(const ForceQNRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForceQNOutcome()>>(
        [this, request]()
        {
            return this->ForceQN(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::GetCountryCodesOutcome IntlpartnersmgtClient::GetCountryCodes(const GetCountryCodesRequest &request)
{
    auto outcome = MakeRequest(request, "GetCountryCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCountryCodesResponse rsp = GetCountryCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCountryCodesOutcome(rsp);
        else
            return GetCountryCodesOutcome(o.GetError());
    }
    else
    {
        return GetCountryCodesOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::GetCountryCodesAsync(const GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCountryCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::GetCountryCodesOutcomeCallable IntlpartnersmgtClient::GetCountryCodesCallable(const GetCountryCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCountryCodesOutcome()>>(
        [this, request]()
        {
            return this->GetCountryCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::GetTradeConfigListOutcome IntlpartnersmgtClient::GetTradeConfigList(const GetTradeConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTradeConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTradeConfigListResponse rsp = GetTradeConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTradeConfigListOutcome(rsp);
        else
            return GetTradeConfigListOutcome(o.GetError());
    }
    else
    {
        return GetTradeConfigListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::GetTradeConfigListAsync(const GetTradeConfigListRequest& request, const GetTradeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTradeConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::GetTradeConfigListOutcomeCallable IntlpartnersmgtClient::GetTradeConfigListCallable(const GetTradeConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTradeConfigListOutcome()>>(
        [this, request]()
        {
            return this->GetTradeConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::ModifyClientRemarkOutcome IntlpartnersmgtClient::ModifyClientRemark(const ModifyClientRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClientRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClientRemarkResponse rsp = ModifyClientRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClientRemarkOutcome(rsp);
        else
            return ModifyClientRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyClientRemarkOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ModifyClientRemarkAsync(const ModifyClientRemarkRequest& request, const ModifyClientRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClientRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::ModifyClientRemarkOutcomeCallable IntlpartnersmgtClient::ModifyClientRemarkCallable(const ModifyClientRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClientRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyClientRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryAccountVerificationStatusOutcome IntlpartnersmgtClient::QueryAccountVerificationStatus(const QueryAccountVerificationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAccountVerificationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAccountVerificationStatusResponse rsp = QueryAccountVerificationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAccountVerificationStatusOutcome(rsp);
        else
            return QueryAccountVerificationStatusOutcome(o.GetError());
    }
    else
    {
        return QueryAccountVerificationStatusOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryAccountVerificationStatusAsync(const QueryAccountVerificationStatusRequest& request, const QueryAccountVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAccountVerificationStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryAccountVerificationStatusOutcomeCallable IntlpartnersmgtClient::QueryAccountVerificationStatusCallable(const QueryAccountVerificationStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAccountVerificationStatusOutcome()>>(
        [this, request]()
        {
            return this->QueryAccountVerificationStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcome IntlpartnersmgtClient::QueryCreditAllocationHistory(const QueryCreditAllocationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditAllocationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditAllocationHistoryResponse rsp = QueryCreditAllocationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditAllocationHistoryOutcome(rsp);
        else
            return QueryCreditAllocationHistoryOutcome(o.GetError());
    }
    else
    {
        return QueryCreditAllocationHistoryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditAllocationHistoryAsync(const QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCreditAllocationHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcomeCallable IntlpartnersmgtClient::QueryCreditAllocationHistoryCallable(const QueryCreditAllocationHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCreditAllocationHistoryOutcome()>>(
        [this, request]()
        {
            return this->QueryCreditAllocationHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCreditByUinListOutcome IntlpartnersmgtClient::QueryCreditByUinList(const QueryCreditByUinListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditByUinList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditByUinListResponse rsp = QueryCreditByUinListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditByUinListOutcome(rsp);
        else
            return QueryCreditByUinListOutcome(o.GetError());
    }
    else
    {
        return QueryCreditByUinListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditByUinListAsync(const QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCreditByUinList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCreditByUinListOutcomeCallable IntlpartnersmgtClient::QueryCreditByUinListCallable(const QueryCreditByUinListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCreditByUinListOutcome()>>(
        [this, request]()
        {
            return this->QueryCreditByUinList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCustomerBillingQuotaOutcome IntlpartnersmgtClient::QueryCustomerBillingQuota(const QueryCustomerBillingQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomerBillingQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomerBillingQuotaResponse rsp = QueryCustomerBillingQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomerBillingQuotaOutcome(rsp);
        else
            return QueryCustomerBillingQuotaOutcome(o.GetError());
    }
    else
    {
        return QueryCustomerBillingQuotaOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCustomerBillingQuotaAsync(const QueryCustomerBillingQuotaRequest& request, const QueryCustomerBillingQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCustomerBillingQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCustomerBillingQuotaOutcomeCallable IntlpartnersmgtClient::QueryCustomerBillingQuotaCallable(const QueryCustomerBillingQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCustomerBillingQuotaOutcome()>>(
        [this, request]()
        {
            return this->QueryCustomerBillingQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCustomersCreditOutcome IntlpartnersmgtClient::QueryCustomersCredit(const QueryCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomersCreditResponse rsp = QueryCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomersCreditOutcome(rsp);
        else
            return QueryCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCustomersCreditAsync(const QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCustomersCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryCustomersCreditCallable(const QueryCustomersCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCustomersCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryCustomersCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcome IntlpartnersmgtClient::QueryDirectCustomersCredit(const QueryDirectCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDirectCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDirectCustomersCreditResponse rsp = QueryDirectCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDirectCustomersCreditOutcome(rsp);
        else
            return QueryDirectCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryDirectCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryDirectCustomersCreditAsync(const QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDirectCustomersCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryDirectCustomersCreditCallable(const QueryDirectCustomersCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDirectCustomersCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryDirectCustomersCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryInvitationInfoOutcome IntlpartnersmgtClient::QueryInvitationInfo(const QueryInvitationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInvitationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInvitationInfoResponse rsp = QueryInvitationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInvitationInfoOutcome(rsp);
        else
            return QueryInvitationInfoOutcome(o.GetError());
    }
    else
    {
        return QueryInvitationInfoOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryInvitationInfoAsync(const QueryInvitationInfoRequest& request, const QueryInvitationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryInvitationInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryInvitationInfoOutcomeCallable IntlpartnersmgtClient::QueryInvitationInfoCallable(const QueryInvitationInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryInvitationInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryInvitationInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryPartnerCreditOutcome IntlpartnersmgtClient::QueryPartnerCredit(const QueryPartnerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPartnerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPartnerCreditResponse rsp = QueryPartnerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPartnerCreditOutcome(rsp);
        else
            return QueryPartnerCreditOutcome(o.GetError());
    }
    else
    {
        return QueryPartnerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPartnerCreditAsync(const QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPartnerCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryPartnerCreditOutcomeCallable IntlpartnersmgtClient::QueryPartnerCreditCallable(const QueryPartnerCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPartnerCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryPartnerCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryPendingClientsV2Outcome IntlpartnersmgtClient::QueryPendingClientsV2(const QueryPendingClientsV2Request &request)
{
    auto outcome = MakeRequest(request, "QueryPendingClientsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPendingClientsV2Response rsp = QueryPendingClientsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPendingClientsV2Outcome(rsp);
        else
            return QueryPendingClientsV2Outcome(o.GetError());
    }
    else
    {
        return QueryPendingClientsV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPendingClientsV2Async(const QueryPendingClientsV2Request& request, const QueryPendingClientsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPendingClientsV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryPendingClientsV2OutcomeCallable IntlpartnersmgtClient::QueryPendingClientsV2Callable(const QueryPendingClientsV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPendingClientsV2Outcome()>>(
        [this, request]()
        {
            return this->QueryPendingClientsV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryPendingSubAgentsV2Outcome IntlpartnersmgtClient::QueryPendingSubAgentsV2(const QueryPendingSubAgentsV2Request &request)
{
    auto outcome = MakeRequest(request, "QueryPendingSubAgentsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPendingSubAgentsV2Response rsp = QueryPendingSubAgentsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPendingSubAgentsV2Outcome(rsp);
        else
            return QueryPendingSubAgentsV2Outcome(o.GetError());
    }
    else
    {
        return QueryPendingSubAgentsV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPendingSubAgentsV2Async(const QueryPendingSubAgentsV2Request& request, const QueryPendingSubAgentsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPendingSubAgentsV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryPendingSubAgentsV2OutcomeCallable IntlpartnersmgtClient::QueryPendingSubAgentsV2Callable(const QueryPendingSubAgentsV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPendingSubAgentsV2Outcome()>>(
        [this, request]()
        {
            return this->QueryPendingSubAgentsV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryPolicyProductListByCodeOutcome IntlpartnersmgtClient::QueryPolicyProductListByCode(const QueryPolicyProductListByCodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPolicyProductListByCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPolicyProductListByCodeResponse rsp = QueryPolicyProductListByCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPolicyProductListByCodeOutcome(rsp);
        else
            return QueryPolicyProductListByCodeOutcome(o.GetError());
    }
    else
    {
        return QueryPolicyProductListByCodeOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPolicyProductListByCodeAsync(const QueryPolicyProductListByCodeRequest& request, const QueryPolicyProductListByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPolicyProductListByCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryPolicyProductListByCodeOutcomeCallable IntlpartnersmgtClient::QueryPolicyProductListByCodeCallable(const QueryPolicyProductListByCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPolicyProductListByCodeOutcome()>>(
        [this, request]()
        {
            return this->QueryPolicyProductListByCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QuerySubAgentsDetailV2Outcome IntlpartnersmgtClient::QuerySubAgentsDetailV2(const QuerySubAgentsDetailV2Request &request)
{
    auto outcome = MakeRequest(request, "QuerySubAgentsDetailV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuerySubAgentsDetailV2Response rsp = QuerySubAgentsDetailV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuerySubAgentsDetailV2Outcome(rsp);
        else
            return QuerySubAgentsDetailV2Outcome(o.GetError());
    }
    else
    {
        return QuerySubAgentsDetailV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QuerySubAgentsDetailV2Async(const QuerySubAgentsDetailV2Request& request, const QuerySubAgentsDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuerySubAgentsDetailV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QuerySubAgentsDetailV2OutcomeCallable IntlpartnersmgtClient::QuerySubAgentsDetailV2Callable(const QuerySubAgentsDetailV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<QuerySubAgentsDetailV2Outcome()>>(
        [this, request]()
        {
            return this->QuerySubAgentsDetailV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryT1IndirectCustomersDetailOutcome IntlpartnersmgtClient::QueryT1IndirectCustomersDetail(const QueryT1IndirectCustomersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryT1IndirectCustomersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryT1IndirectCustomersDetailResponse rsp = QueryT1IndirectCustomersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryT1IndirectCustomersDetailOutcome(rsp);
        else
            return QueryT1IndirectCustomersDetailOutcome(o.GetError());
    }
    else
    {
        return QueryT1IndirectCustomersDetailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryT1IndirectCustomersDetailAsync(const QueryT1IndirectCustomersDetailRequest& request, const QueryT1IndirectCustomersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryT1IndirectCustomersDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryT1IndirectCustomersDetailOutcomeCallable IntlpartnersmgtClient::QueryT1IndirectCustomersDetailCallable(const QueryT1IndirectCustomersDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryT1IndirectCustomersDetailOutcome()>>(
        [this, request]()
        {
            return this->QueryT1IndirectCustomersDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcome IntlpartnersmgtClient::QueryVoucherAmountByUin(const QueryVoucherAmountByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherAmountByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherAmountByUinResponse rsp = QueryVoucherAmountByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherAmountByUinOutcome(rsp);
        else
            return QueryVoucherAmountByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherAmountByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherAmountByUinAsync(const QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherAmountByUin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherAmountByUinCallable(const QueryVoucherAmountByUinRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherAmountByUinOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherAmountByUin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcome IntlpartnersmgtClient::QueryVoucherListByUin(const QueryVoucherListByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherListByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherListByUinResponse rsp = QueryVoucherListByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherListByUinOutcome(rsp);
        else
            return QueryVoucherListByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherListByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherListByUinAsync(const QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherListByUin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherListByUinCallable(const QueryVoucherListByUinRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherListByUinOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherListByUin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherPoolOutcome IntlpartnersmgtClient::QueryVoucherPool(const QueryVoucherPoolRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherPoolResponse rsp = QueryVoucherPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherPoolOutcome(rsp);
        else
            return QueryVoucherPoolOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherPoolOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherPoolAsync(const QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherPoolOutcomeCallable IntlpartnersmgtClient::QueryVoucherPoolCallable(const QueryVoucherPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherPoolOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::SendVerifyCodeOutcome IntlpartnersmgtClient::SendVerifyCode(const SendVerifyCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendVerifyCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendVerifyCodeResponse rsp = SendVerifyCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendVerifyCodeOutcome(rsp);
        else
            return SendVerifyCodeOutcome(o.GetError());
    }
    else
    {
        return SendVerifyCodeOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::SendVerifyCodeAsync(const SendVerifyCodeRequest& request, const SendVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendVerifyCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::SendVerifyCodeOutcomeCallable IntlpartnersmgtClient::SendVerifyCodeCallable(const SendVerifyCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendVerifyCodeOutcome()>>(
        [this, request]()
        {
            return this->SendVerifyCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

