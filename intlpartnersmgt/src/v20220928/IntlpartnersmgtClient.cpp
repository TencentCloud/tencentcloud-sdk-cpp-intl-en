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
    const string ENDPOINT = "intlpartnersmgt.tencentcloudapi.com";
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

IntlpartnersmgtClient::QueryCreditQuotaOutcome IntlpartnersmgtClient::QueryCreditQuota(const QueryCreditQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditQuotaResponse rsp = QueryCreditQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditQuotaOutcome(rsp);
        else
            return QueryCreditQuotaOutcome(o.GetError());
    }
    else
    {
        return QueryCreditQuotaOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditQuotaAsync(const QueryCreditQuotaRequest& request, const QueryCreditQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCreditQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCreditQuotaOutcomeCallable IntlpartnersmgtClient::QueryCreditQuotaCallable(const QueryCreditQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCreditQuotaOutcome()>>(
        [this, request]()
        {
            return this->QueryCreditQuota(request);
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

