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

#include <tencentcloud/teo/v20220901/TeoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Teo::V20220901;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-01";
    const string ENDPOINT = "teo.tencentcloudapi.com";
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CheckCertificateOutcomeCallable TeoClient::CheckCertificateCallable(const CheckCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateCredentialOutcome TeoClient::CreateCredential(const CreateCredentialRequest &request)
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

void TeoClient::CreateCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateCredentialOutcomeCallable TeoClient::CreateCredentialCallable(const CreateCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDnsRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateDnsRecordOutcomeCallable TeoClient::CreateDnsRecordCallable(const CreateDnsRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDnsRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateDnsRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLogSetOutcome TeoClient::CreateLogSet(const CreateLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogSetResponse rsp = CreateLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogSetOutcome(rsp);
        else
            return CreateLogSetOutcome(o.GetError());
    }
    else
    {
        return CreateLogSetOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLogSetAsync(const CreateLogSetRequest& request, const CreateLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLogSetOutcomeCallable TeoClient::CreateLogSetCallable(const CreateLogSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogSetOutcome()>>(
        [this, request]()
        {
            return this->CreateLogSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLogTopicTaskOutcome TeoClient::CreateLogTopicTask(const CreateLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogTopicTaskResponse rsp = CreateLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogTopicTaskOutcome(rsp);
        else
            return CreateLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLogTopicTaskAsync(const CreateLogTopicTaskRequest& request, const CreateLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLogTopicTaskOutcomeCallable TeoClient::CreateLogTopicTaskCallable(const CreateLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePlanForZoneOutcome TeoClient::CreatePlanForZone(const CreatePlanForZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlanForZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePlanForZoneResponse rsp = CreatePlanForZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePlanForZoneOutcome(rsp);
        else
            return CreatePlanForZoneOutcome(o.GetError());
    }
    else
    {
        return CreatePlanForZoneOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePlanForZoneAsync(const CreatePlanForZoneRequest& request, const CreatePlanForZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePlanForZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePlanForZoneOutcomeCallable TeoClient::CreatePlanForZoneCallable(const CreatePlanForZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePlanForZoneOutcome()>>(
        [this, request]()
        {
            return this->CreatePlanForZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrefetchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrefetchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePrefetchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePurgeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePurgeTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePurgeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateReplayTaskOutcome TeoClient::CreateReplayTask(const CreateReplayTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReplayTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReplayTaskResponse rsp = CreateReplayTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReplayTaskOutcome(rsp);
        else
            return CreateReplayTaskOutcome(o.GetError());
    }
    else
    {
        return CreateReplayTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreateReplayTaskAsync(const CreateReplayTaskRequest& request, const CreateReplayTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReplayTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateReplayTaskOutcomeCallable TeoClient::CreateReplayTaskCallable(const CreateReplayTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReplayTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateReplayTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateRuleOutcome TeoClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateRuleOutcomeCallable TeoClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateZoneOutcomeCallable TeoClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateZoneOutcome()>>(
        [this, request]()
        {
            return this->CreateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteDnsRecordsOutcomeCallable TeoClient::DeleteDnsRecordsCallable(const DeleteDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteLogTopicTaskOutcome TeoClient::DeleteLogTopicTask(const DeleteLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogTopicTaskResponse rsp = DeleteLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogTopicTaskOutcome(rsp);
        else
            return DeleteLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteLogTopicTaskAsync(const DeleteLogTopicTaskRequest& request, const DeleteLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteLogTopicTaskOutcomeCallable TeoClient::DeleteLogTopicTaskCallable(const DeleteLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteRulesOutcome TeoClient::DeleteRules(const DeleteRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRulesResponse rsp = DeleteRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRulesOutcome(rsp);
        else
            return DeleteRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteRulesAsync(const DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteRulesOutcomeCallable TeoClient::DeleteRulesCallable(const DeleteRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteZoneOutcomeCallable TeoClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteZoneOutcome()>>(
        [this, request]()
        {
            return this->DeleteZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAddableEntityListOutcome TeoClient::DescribeAddableEntityList(const DescribeAddableEntityListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddableEntityList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddableEntityListResponse rsp = DescribeAddableEntityListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddableEntityListOutcome(rsp);
        else
            return DescribeAddableEntityListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddableEntityListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAddableEntityListAsync(const DescribeAddableEntityListRequest& request, const DescribeAddableEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddableEntityList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAddableEntityListOutcomeCallable TeoClient::DescribeAddableEntityListCallable(const DescribeAddableEntityListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddableEntityListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddableEntityList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAvailablePlansOutcome TeoClient::DescribeAvailablePlans(const DescribeAvailablePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailablePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailablePlansResponse rsp = DescribeAvailablePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailablePlansOutcome(rsp);
        else
            return DescribeAvailablePlansOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailablePlansOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAvailablePlansAsync(const DescribeAvailablePlansRequest& request, const DescribeAvailablePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailablePlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAvailablePlansOutcomeCallable TeoClient::DescribeAvailablePlansCallable(const DescribeAvailablePlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailablePlansOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailablePlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBillingDataOutcome TeoClient::DescribeBillingData(const DescribeBillingDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingDataResponse rsp = DescribeBillingDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingDataOutcome(rsp);
        else
            return DescribeBillingDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBillingDataAsync(const DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBillingDataOutcomeCallable TeoClient::DescribeBillingDataCallable(const DescribeBillingDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotClientIpListOutcome TeoClient::DescribeBotClientIpList(const DescribeBotClientIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotClientIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotClientIpListResponse rsp = DescribeBotClientIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotClientIpListOutcome(rsp);
        else
            return DescribeBotClientIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeBotClientIpListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotClientIpListAsync(const DescribeBotClientIpListRequest& request, const DescribeBotClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotClientIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotClientIpListOutcomeCallable TeoClient::DescribeBotClientIpListCallable(const DescribeBotClientIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotClientIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotClientIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotDataOutcome TeoClient::DescribeBotData(const DescribeBotDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotDataResponse rsp = DescribeBotDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotDataOutcome(rsp);
        else
            return DescribeBotDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBotDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotDataAsync(const DescribeBotDataRequest& request, const DescribeBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotDataOutcomeCallable TeoClient::DescribeBotDataCallable(const DescribeBotDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotHitRuleDetailOutcome TeoClient::DescribeBotHitRuleDetail(const DescribeBotHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotHitRuleDetailResponse rsp = DescribeBotHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotHitRuleDetailOutcome(rsp);
        else
            return DescribeBotHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBotHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotHitRuleDetailAsync(const DescribeBotHitRuleDetailRequest& request, const DescribeBotHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotHitRuleDetailOutcomeCallable TeoClient::DescribeBotHitRuleDetailCallable(const DescribeBotHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotLogOutcomeCallable TeoClient::DescribeBotLogCallable(const DescribeBotLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotTopDataOutcome TeoClient::DescribeBotTopData(const DescribeBotTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotTopDataResponse rsp = DescribeBotTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotTopDataOutcome(rsp);
        else
            return DescribeBotTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBotTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotTopDataAsync(const DescribeBotTopDataRequest& request, const DescribeBotTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotTopDataOutcomeCallable TeoClient::DescribeBotTopDataCallable(const DescribeBotTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeClientRuleListOutcome TeoClient::DescribeClientRuleList(const DescribeClientRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientRuleListResponse rsp = DescribeClientRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientRuleListOutcome(rsp);
        else
            return DescribeClientRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeClientRuleListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeClientRuleListAsync(const DescribeClientRuleListRequest& request, const DescribeClientRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeClientRuleListOutcomeCallable TeoClient::DescribeClientRuleListCallable(const DescribeClientRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeContentQuotaOutcome TeoClient::DescribeContentQuota(const DescribeContentQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContentQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContentQuotaResponse rsp = DescribeContentQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContentQuotaOutcome(rsp);
        else
            return DescribeContentQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeContentQuotaOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeContentQuotaAsync(const DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeContentQuotaOutcomeCallable TeoClient::DescribeContentQuotaCallable(const DescribeContentQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContentQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeContentQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackDataOutcome TeoClient::DescribeDDoSAttackData(const DescribeDDoSAttackDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackDataResponse rsp = DescribeDDoSAttackDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackDataOutcome(rsp);
        else
            return DescribeDDoSAttackDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackDataAsync(const DescribeDDoSAttackDataRequest& request, const DescribeDDoSAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackDataOutcomeCallable TeoClient::DescribeDDoSAttackDataCallable(const DescribeDDoSAttackDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackEventOutcome TeoClient::DescribeDDoSAttackEvent(const DescribeDDoSAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackEventResponse rsp = DescribeDDoSAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackEventOutcome(rsp);
        else
            return DescribeDDoSAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackEventAsync(const DescribeDDoSAttackEventRequest& request, const DescribeDDoSAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackEventOutcomeCallable TeoClient::DescribeDDoSAttackEventCallable(const DescribeDDoSAttackEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackEventDetailOutcome TeoClient::DescribeDDoSAttackEventDetail(const DescribeDDoSAttackEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackEventDetailResponse rsp = DescribeDDoSAttackEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackEventDetailOutcome(rsp);
        else
            return DescribeDDoSAttackEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackEventDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackEventDetailAsync(const DescribeDDoSAttackEventDetailRequest& request, const DescribeDDoSAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackEventDetailOutcomeCallable TeoClient::DescribeDDoSAttackEventDetailCallable(const DescribeDDoSAttackEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackSourceEventOutcome TeoClient::DescribeDDoSAttackSourceEvent(const DescribeDDoSAttackSourceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackSourceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackSourceEventResponse rsp = DescribeDDoSAttackSourceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackSourceEventOutcome(rsp);
        else
            return DescribeDDoSAttackSourceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackSourceEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackSourceEventAsync(const DescribeDDoSAttackSourceEventRequest& request, const DescribeDDoSAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackSourceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackSourceEventOutcomeCallable TeoClient::DescribeDDoSAttackSourceEventCallable(const DescribeDDoSAttackSourceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackSourceEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackSourceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackTopDataOutcome TeoClient::DescribeDDoSAttackTopData(const DescribeDDoSAttackTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackTopDataResponse rsp = DescribeDDoSAttackTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackTopDataOutcome(rsp);
        else
            return DescribeDDoSAttackTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackTopDataAsync(const DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackTopDataOutcomeCallable TeoClient::DescribeDDoSAttackTopDataCallable(const DescribeDDoSAttackTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSBlockListOutcome TeoClient::DescribeDDoSBlockList(const DescribeDDoSBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlockListResponse rsp = DescribeDDoSBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlockListOutcome(rsp);
        else
            return DescribeDDoSBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlockListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSBlockListAsync(const DescribeDDoSBlockListRequest& request, const DescribeDDoSBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSBlockListOutcomeCallable TeoClient::DescribeDDoSBlockListCallable(const DescribeDDoSBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSBlockListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSMajorAttackEventOutcome TeoClient::DescribeDDoSMajorAttackEvent(const DescribeDDoSMajorAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSMajorAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSMajorAttackEventResponse rsp = DescribeDDoSMajorAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSMajorAttackEventOutcome(rsp);
        else
            return DescribeDDoSMajorAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSMajorAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSMajorAttackEventAsync(const DescribeDDoSMajorAttackEventRequest& request, const DescribeDDoSMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSMajorAttackEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSMajorAttackEventOutcomeCallable TeoClient::DescribeDDoSMajorAttackEventCallable(const DescribeDDoSMajorAttackEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSMajorAttackEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSMajorAttackEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDefaultCertificatesOutcomeCallable TeoClient::DescribeDefaultCertificatesCallable(const DescribeDefaultCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsDataOutcomeCallable TeoClient::DescribeDnsDataCallable(const DescribeDnsDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsRecordsOutcomeCallable TeoClient::DescribeDnsRecordsCallable(const DescribeDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnssecOutcomeCallable TeoClient::DescribeDnssecCallable(const DescribeDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnssecOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostsSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeHostsSettingOutcomeCallable TeoClient::DescribeHostsSettingCallable(const DescribeHostsSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostsSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeIdentificationsOutcome TeoClient::DescribeIdentifications(const DescribeIdentificationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentifications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentificationsResponse rsp = DescribeIdentificationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentificationsOutcome(rsp);
        else
            return DescribeIdentificationsOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentificationsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeIdentificationsAsync(const DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdentifications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeIdentificationsOutcomeCallable TeoClient::DescribeIdentificationsCallable(const DescribeIdentificationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdentificationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdentifications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogSetsOutcome TeoClient::DescribeLogSets(const DescribeLogSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogSetsResponse rsp = DescribeLogSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogSetsOutcome(rsp);
        else
            return DescribeLogSetsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogSetsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogSetsAsync(const DescribeLogSetsRequest& request, const DescribeLogSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogSets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogSetsOutcomeCallable TeoClient::DescribeLogSetsCallable(const DescribeLogSetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogSetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogSets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogTopicTaskDetailOutcome TeoClient::DescribeLogTopicTaskDetail(const DescribeLogTopicTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogTopicTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTopicTaskDetailResponse rsp = DescribeLogTopicTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTopicTaskDetailOutcome(rsp);
        else
            return DescribeLogTopicTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTopicTaskDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogTopicTaskDetailAsync(const DescribeLogTopicTaskDetailRequest& request, const DescribeLogTopicTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogTopicTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogTopicTaskDetailOutcomeCallable TeoClient::DescribeLogTopicTaskDetailCallable(const DescribeLogTopicTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogTopicTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogTopicTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogTopicTasksOutcome TeoClient::DescribeLogTopicTasks(const DescribeLogTopicTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogTopicTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTopicTasksResponse rsp = DescribeLogTopicTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTopicTasksOutcome(rsp);
        else
            return DescribeLogTopicTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTopicTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogTopicTasksAsync(const DescribeLogTopicTasksRequest& request, const DescribeLogTopicTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogTopicTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogTopicTasksOutcomeCallable TeoClient::DescribeLogTopicTasksCallable(const DescribeLogTopicTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogTopicTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogTopicTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewL7Data(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeOverviewL7DataOutcomeCallable TeoClient::DescribeOverviewL7DataCallable(const DescribeOverviewL7DataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewL7DataOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewL7Data(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrefetchTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrefetchTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePrefetchTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurgeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePurgeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeRulesOutcome TeoClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRulesOutcomeCallable TeoClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeRulesSettingOutcome TeoClient::DescribeRulesSetting(const DescribeRulesSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRulesSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesSettingResponse rsp = DescribeRulesSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesSettingOutcome(rsp);
        else
            return DescribeRulesSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeRulesSettingAsync(const DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRulesSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRulesSettingOutcomeCallable TeoClient::DescribeRulesSettingCallable(const DescribeRulesSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeRulesSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSingleL7AnalysisDataOutcome TeoClient::DescribeSingleL7AnalysisData(const DescribeSingleL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSingleL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSingleL7AnalysisDataResponse rsp = DescribeSingleL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSingleL7AnalysisDataOutcome(rsp);
        else
            return DescribeSingleL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeSingleL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSingleL7AnalysisDataAsync(const DescribeSingleL7AnalysisDataRequest& request, const DescribeSingleL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSingleL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSingleL7AnalysisDataOutcomeCallable TeoClient::DescribeSingleL7AnalysisDataCallable(const DescribeSingleL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSingleL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeSingleL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL4Data(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL4DataOutcomeCallable TeoClient::DescribeTimingL4DataCallable(const DescribeTimingL4DataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL4DataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL4Data(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL7AnalysisDataOutcomeCallable TeoClient::DescribeTimingL7AnalysisDataCallable(const DescribeTimingL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL7CacheData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL7CacheDataOutcomeCallable TeoClient::DescribeTimingL7CacheDataCallable(const DescribeTimingL7CacheDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL7CacheDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL7CacheData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTopL7AnalysisDataOutcomeCallable TeoClient::DescribeTopL7AnalysisDataCallable(const DescribeTopL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopL7CacheData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTopL7CacheDataOutcomeCallable TeoClient::DescribeTopL7CacheDataCallable(const DescribeTopL7CacheDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopL7CacheDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopL7CacheData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesDataOutcomeCallable TeoClient::DescribeWebManagedRulesDataCallable(const DescribeWebManagedRulesDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebManagedRulesHitRuleDetailOutcome TeoClient::DescribeWebManagedRulesHitRuleDetail(const DescribeWebManagedRulesHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesHitRuleDetailResponse rsp = DescribeWebManagedRulesHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesHitRuleDetailOutcome(rsp);
        else
            return DescribeWebManagedRulesHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesHitRuleDetailAsync(const DescribeWebManagedRulesHitRuleDetailRequest& request, const DescribeWebManagedRulesHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesHitRuleDetailOutcomeCallable TeoClient::DescribeWebManagedRulesHitRuleDetailCallable(const DescribeWebManagedRulesHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesLogOutcomeCallable TeoClient::DescribeWebManagedRulesLogCallable(const DescribeWebManagedRulesLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionAttackEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionAttackEventsOutcomeCallable TeoClient::DescribeWebProtectionAttackEventsCallable(const DescribeWebProtectionAttackEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionAttackEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionAttackEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionClientIpListOutcome TeoClient::DescribeWebProtectionClientIpList(const DescribeWebProtectionClientIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionClientIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionClientIpListResponse rsp = DescribeWebProtectionClientIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionClientIpListOutcome(rsp);
        else
            return DescribeWebProtectionClientIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionClientIpListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionClientIpListAsync(const DescribeWebProtectionClientIpListRequest& request, const DescribeWebProtectionClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionClientIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionClientIpListOutcomeCallable TeoClient::DescribeWebProtectionClientIpListCallable(const DescribeWebProtectionClientIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionClientIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionClientIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionDataOutcomeCallable TeoClient::DescribeWebProtectionDataCallable(const DescribeWebProtectionDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionHitRuleDetailOutcome TeoClient::DescribeWebProtectionHitRuleDetail(const DescribeWebProtectionHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionHitRuleDetailResponse rsp = DescribeWebProtectionHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionHitRuleDetailOutcome(rsp);
        else
            return DescribeWebProtectionHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionHitRuleDetailAsync(const DescribeWebProtectionHitRuleDetailRequest& request, const DescribeWebProtectionHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionHitRuleDetailOutcomeCallable TeoClient::DescribeWebProtectionHitRuleDetailCallable(const DescribeWebProtectionHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionTopDataOutcome TeoClient::DescribeWebProtectionTopData(const DescribeWebProtectionTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionTopDataResponse rsp = DescribeWebProtectionTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionTopDataOutcome(rsp);
        else
            return DescribeWebProtectionTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionTopDataAsync(const DescribeWebProtectionTopDataRequest& request, const DescribeWebProtectionTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionTopDataOutcomeCallable TeoClient::DescribeWebProtectionTopDataCallable(const DescribeWebProtectionTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneSettingOutcomeCallable TeoClient::DescribeZoneSettingCallable(const DescribeZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DownloadL4LogsOutcome TeoClient::DownloadL4Logs(const DownloadL4LogsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadL4Logs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadL4LogsResponse rsp = DownloadL4LogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadL4LogsOutcome(rsp);
        else
            return DownloadL4LogsOutcome(o.GetError());
    }
    else
    {
        return DownloadL4LogsOutcome(outcome.GetError());
    }
}

void TeoClient::DownloadL4LogsAsync(const DownloadL4LogsRequest& request, const DownloadL4LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadL4Logs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DownloadL4LogsOutcomeCallable TeoClient::DownloadL4LogsCallable(const DownloadL4LogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadL4LogsOutcome()>>(
        [this, request]()
        {
            return this->DownloadL4Logs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadL7Logs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DownloadL7LogsOutcomeCallable TeoClient::DownloadL7LogsCallable(const DownloadL7LogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadL7LogsOutcome()>>(
        [this, request]()
        {
            return this->DownloadL7Logs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IdentifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::IdentifyZoneOutcomeCallable TeoClient::IdentifyZoneCallable(const IdentifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IdentifyZoneOutcome()>>(
        [this, request]()
        {
            return this->IdentifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDefaultCertificateOutcomeCallable TeoClient::ModifyDefaultCertificateCallable(const ModifyDefaultCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnsRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnsRecordOutcomeCallable TeoClient::ModifyDnsRecordCallable(const ModifyDnsRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnsRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnsRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnssecOutcomeCallable TeoClient::ModifyDnssecCallable(const ModifyDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnssecOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostsCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyHostsCertificateOutcomeCallable TeoClient::ModifyHostsCertificateCallable(const ModifyHostsCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostsCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostsCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyLogTopicTaskOutcome TeoClient::ModifyLogTopicTask(const ModifyLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogTopicTaskResponse rsp = ModifyLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogTopicTaskOutcome(rsp);
        else
            return ModifyLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLogTopicTaskAsync(const ModifyLogTopicTaskRequest& request, const ModifyLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyLogTopicTaskOutcomeCallable TeoClient::ModifyLogTopicTaskCallable(const ModifyLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyRuleOutcome TeoClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyRuleOutcomeCallable TeoClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyRulePriorityOutcome TeoClient::ModifyRulePriority(const ModifyRulePriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRulePriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRulePriorityResponse rsp = ModifyRulePriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRulePriorityOutcome(rsp);
        else
            return ModifyRulePriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyRulePriorityOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyRulePriorityAsync(const ModifyRulePriorityRequest& request, const ModifyRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRulePriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyRulePriorityOutcomeCallable TeoClient::ModifyRulePriorityCallable(const ModifyRulePriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRulePriorityOutcome()>>(
        [this, request]()
        {
            return this->ModifyRulePriority(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneOutcomeCallable TeoClient::ModifyZoneCallable(const ModifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneOutcome()>>(
        [this, request]()
        {
            return this->ModifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneCnameSpeedUp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneCnameSpeedUpOutcomeCallable TeoClient::ModifyZoneCnameSpeedUpCallable(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneCnameSpeedUpOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneCnameSpeedUp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneSettingOutcomeCallable TeoClient::ModifyZoneSettingCallable(const ModifyZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneStatusOutcomeCallable TeoClient::ModifyZoneStatusCallable(const ModifyZoneStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReclaimZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ReclaimZoneOutcomeCallable TeoClient::ReclaimZoneCallable(const ReclaimZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReclaimZoneOutcome()>>(
        [this, request]()
        {
            return this->ReclaimZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::SwitchLogTopicTaskOutcome TeoClient::SwitchLogTopicTask(const SwitchLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchLogTopicTaskResponse rsp = SwitchLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchLogTopicTaskOutcome(rsp);
        else
            return SwitchLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return SwitchLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::SwitchLogTopicTaskAsync(const SwitchLogTopicTaskRequest& request, const SwitchLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::SwitchLogTopicTaskOutcomeCallable TeoClient::SwitchLogTopicTaskCallable(const SwitchLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->SwitchLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

