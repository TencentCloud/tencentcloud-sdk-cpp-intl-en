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

#include <tencentcloud/lke/v20231130/LkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lke::V20231130;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-11-30";
    const string ENDPOINT = "lke.intl.tencentcloudapi.com";
}

LkeClient::LkeClient(const Credential &credential, const string &region) :
    LkeClient(credential, region, ClientProfile())
{
}

LkeClient::LkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LkeClient::CreateCorpOutcome LkeClient::CreateCorp(const CreateCorpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCorp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCorpResponse rsp = CreateCorpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCorpOutcome(rsp);
        else
            return CreateCorpOutcome(o.GetError());
    }
    else
    {
        return CreateCorpOutcome(outcome.GetError());
    }
}

void LkeClient::CreateCorpAsync(const CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCorp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateCorpOutcomeCallable LkeClient::CreateCorpCallable(const CreateCorpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCorpOutcome()>>(
        [this, request]()
        {
            return this->CreateCorp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateReconstructDocumentFlowOutcome LkeClient::CreateReconstructDocumentFlow(const CreateReconstructDocumentFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReconstructDocumentFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReconstructDocumentFlowResponse rsp = CreateReconstructDocumentFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReconstructDocumentFlowOutcome(rsp);
        else
            return CreateReconstructDocumentFlowOutcome(o.GetError());
    }
    else
    {
        return CreateReconstructDocumentFlowOutcome(outcome.GetError());
    }
}

void LkeClient::CreateReconstructDocumentFlowAsync(const CreateReconstructDocumentFlowRequest& request, const CreateReconstructDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReconstructDocumentFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateReconstructDocumentFlowOutcomeCallable LkeClient::CreateReconstructDocumentFlowCallable(const CreateReconstructDocumentFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReconstructDocumentFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateReconstructDocumentFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateReleaseOutcome LkeClient::CreateRelease(const CreateReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseResponse rsp = CreateReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseOutcome(rsp);
        else
            return CreateReleaseOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::CreateReleaseAsync(const CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateReleaseOutcomeCallable LkeClient::CreateReleaseCallable(const CreateReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReleaseOutcome()>>(
        [this, request]()
        {
            return this->CreateRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteAppOutcome LkeClient::DeleteApp(const DeleteAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppResponse rsp = DeleteAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppOutcome(rsp);
        else
            return DeleteAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAppOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteAppOutcomeCallable LkeClient::DeleteAppCallable(const DeleteAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteDocOutcome LkeClient::DeleteDoc(const DeleteDocRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocResponse rsp = DeleteDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocOutcome(rsp);
        else
            return DeleteDocOutcome(o.GetError());
    }
    else
    {
        return DeleteDocOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteDocAsync(const DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteDocOutcomeCallable LkeClient::DeleteDocCallable(const DeleteDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDocOutcome()>>(
        [this, request]()
        {
            return this->DeleteDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteQAOutcome LkeClient::DeleteQA(const DeleteQARequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQAResponse rsp = DeleteQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQAOutcome(rsp);
        else
            return DeleteQAOutcome(o.GetError());
    }
    else
    {
        return DeleteQAOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQAAsync(const DeleteQARequest& request, const DeleteQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteQAOutcomeCallable LkeClient::DeleteQACallable(const DeleteQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQAOutcome()>>(
        [this, request]()
        {
            return this->DeleteQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteQACateOutcome LkeClient::DeleteQACate(const DeleteQACateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQACateResponse rsp = DeleteQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQACateOutcome(rsp);
        else
            return DeleteQACateOutcome(o.GetError());
    }
    else
    {
        return DeleteQACateOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQACateAsync(const DeleteQACateRequest& request, const DeleteQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteQACateOutcomeCallable LkeClient::DeleteQACateCallable(const DeleteQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQACateOutcome()>>(
        [this, request]()
        {
            return this->DeleteQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteRejectedQuestionOutcome LkeClient::DeleteRejectedQuestion(const DeleteRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRejectedQuestionResponse rsp = DeleteRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRejectedQuestionOutcome(rsp);
        else
            return DeleteRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return DeleteRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteRejectedQuestionAsync(const DeleteRejectedQuestionRequest& request, const DeleteRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteRejectedQuestionOutcomeCallable LkeClient::DeleteRejectedQuestionCallable(const DeleteRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->DeleteRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeAttributeLabelOutcome LkeClient::DescribeAttributeLabel(const DescribeAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttributeLabelResponse rsp = DescribeAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttributeLabelOutcome(rsp);
        else
            return DescribeAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return DescribeAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeAttributeLabelAsync(const DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeAttributeLabelOutcomeCallable LkeClient::DescribeAttributeLabelCallable(const DescribeAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeCallStatsGraphOutcome LkeClient::DescribeCallStatsGraph(const DescribeCallStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallStatsGraphResponse rsp = DescribeCallStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallStatsGraphOutcome(rsp);
        else
            return DescribeCallStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeCallStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeCallStatsGraphAsync(const DescribeCallStatsGraphRequest& request, const DescribeCallStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallStatsGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeCallStatsGraphOutcomeCallable LkeClient::DescribeCallStatsGraphCallable(const DescribeCallStatsGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallStatsGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallStatsGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeConcurrencyUsageOutcome LkeClient::DescribeConcurrencyUsage(const DescribeConcurrencyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageResponse rsp = DescribeConcurrencyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageOutcome(rsp);
        else
            return DescribeConcurrencyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageAsync(const DescribeConcurrencyUsageRequest& request, const DescribeConcurrencyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrencyUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeConcurrencyUsageOutcomeCallable LkeClient::DescribeConcurrencyUsageCallable(const DescribeConcurrencyUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrencyUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrencyUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeConcurrencyUsageGraphOutcome LkeClient::DescribeConcurrencyUsageGraph(const DescribeConcurrencyUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageGraphResponse rsp = DescribeConcurrencyUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageGraphOutcome(rsp);
        else
            return DescribeConcurrencyUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageGraphAsync(const DescribeConcurrencyUsageGraphRequest& request, const DescribeConcurrencyUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrencyUsageGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeConcurrencyUsageGraphOutcomeCallable LkeClient::DescribeConcurrencyUsageGraphCallable(const DescribeConcurrencyUsageGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrencyUsageGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrencyUsageGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeDocOutcome LkeClient::DescribeDoc(const DescribeDocRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocResponse rsp = DescribeDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocOutcome(rsp);
        else
            return DescribeDocOutcome(o.GetError());
    }
    else
    {
        return DescribeDocOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeDocAsync(const DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeDocOutcomeCallable LkeClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocOutcome()>>(
        [this, request]()
        {
            return this->DescribeDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeKnowledgeUsageOutcome LkeClient::DescribeKnowledgeUsage(const DescribeKnowledgeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsageResponse rsp = DescribeKnowledgeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsageOutcome(rsp);
        else
            return DescribeKnowledgeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsageAsync(const DescribeKnowledgeUsageRequest& request, const DescribeKnowledgeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeKnowledgeUsageOutcomeCallable LkeClient::DescribeKnowledgeUsageCallable(const DescribeKnowledgeUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcome LkeClient::DescribeKnowledgeUsagePieGraph(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsagePieGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsagePieGraphResponse rsp = DescribeKnowledgeUsagePieGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsagePieGraphOutcome(rsp);
        else
            return DescribeKnowledgeUsagePieGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsagePieGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsagePieGraphAsync(const DescribeKnowledgeUsagePieGraphRequest& request, const DescribeKnowledgeUsagePieGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeUsagePieGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcomeCallable LkeClient::DescribeKnowledgeUsagePieGraphCallable(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeUsagePieGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeUsagePieGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeReleaseOutcome LkeClient::DescribeRelease(const DescribeReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseResponse rsp = DescribeReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseOutcome(rsp);
        else
            return DescribeReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReleaseAsync(const DescribeReleaseRequest& request, const DescribeReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeReleaseOutcomeCallable LkeClient::DescribeReleaseCallable(const DescribeReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeRobotBizIDByAppKeyOutcome LkeClient::DescribeRobotBizIDByAppKey(const DescribeRobotBizIDByAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRobotBizIDByAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRobotBizIDByAppKeyResponse rsp = DescribeRobotBizIDByAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRobotBizIDByAppKeyOutcome(rsp);
        else
            return DescribeRobotBizIDByAppKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeRobotBizIDByAppKeyOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeRobotBizIDByAppKeyAsync(const DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRobotBizIDByAppKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeRobotBizIDByAppKeyOutcomeCallable LkeClient::DescribeRobotBizIDByAppKeyCallable(const DescribeRobotBizIDByAppKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRobotBizIDByAppKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeRobotBizIDByAppKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeSearchStatsGraphOutcome LkeClient::DescribeSearchStatsGraph(const DescribeSearchStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchStatsGraphResponse rsp = DescribeSearchStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchStatsGraphOutcome(rsp);
        else
            return DescribeSearchStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSearchStatsGraphAsync(const DescribeSearchStatsGraphRequest& request, const DescribeSearchStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchStatsGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeSearchStatsGraphOutcomeCallable LkeClient::DescribeSearchStatsGraphCallable(const DescribeSearchStatsGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchStatsGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchStatsGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeTokenUsageOutcome LkeClient::DescribeTokenUsage(const DescribeTokenUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageResponse rsp = DescribeTokenUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageOutcome(rsp);
        else
            return DescribeTokenUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageAsync(const DescribeTokenUsageRequest& request, const DescribeTokenUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTokenUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeTokenUsageOutcomeCallable LkeClient::DescribeTokenUsageCallable(const DescribeTokenUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTokenUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeTokenUsageGraphOutcome LkeClient::DescribeTokenUsageGraph(const DescribeTokenUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageGraphResponse rsp = DescribeTokenUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageGraphOutcome(rsp);
        else
            return DescribeTokenUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageGraphAsync(const DescribeTokenUsageGraphRequest& request, const DescribeTokenUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTokenUsageGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeTokenUsageGraphOutcomeCallable LkeClient::DescribeTokenUsageGraphCallable(const DescribeTokenUsageGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenUsageGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeTokenUsageGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeUnsatisfiedReplyContextOutcome LkeClient::DescribeUnsatisfiedReplyContext(const DescribeUnsatisfiedReplyContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnsatisfiedReplyContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnsatisfiedReplyContextResponse rsp = DescribeUnsatisfiedReplyContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnsatisfiedReplyContextOutcome(rsp);
        else
            return DescribeUnsatisfiedReplyContextOutcome(o.GetError());
    }
    else
    {
        return DescribeUnsatisfiedReplyContextOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeUnsatisfiedReplyContextAsync(const DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnsatisfiedReplyContext(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeUnsatisfiedReplyContextOutcomeCallable LkeClient::DescribeUnsatisfiedReplyContextCallable(const DescribeUnsatisfiedReplyContextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnsatisfiedReplyContextOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnsatisfiedReplyContext(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ExportQAListOutcome LkeClient::ExportQAList(const ExportQAListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportQAListResponse rsp = ExportQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportQAListOutcome(rsp);
        else
            return ExportQAListOutcome(o.GetError());
    }
    else
    {
        return ExportQAListOutcome(outcome.GetError());
    }
}

void LkeClient::ExportQAListAsync(const ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportQAList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ExportQAListOutcomeCallable LkeClient::ExportQAListCallable(const ExportQAListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportQAListOutcome()>>(
        [this, request]()
        {
            return this->ExportQAList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ExportUnsatisfiedReplyOutcome LkeClient::ExportUnsatisfiedReply(const ExportUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ExportUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportUnsatisfiedReplyResponse rsp = ExportUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportUnsatisfiedReplyOutcome(rsp);
        else
            return ExportUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ExportUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ExportUnsatisfiedReplyAsync(const ExportUnsatisfiedReplyRequest& request, const ExportUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ExportUnsatisfiedReplyOutcomeCallable LkeClient::ExportUnsatisfiedReplyCallable(const ExportUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->ExportUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GenerateQAOutcome LkeClient::GenerateQA(const GenerateQARequest &request)
{
    auto outcome = MakeRequest(request, "GenerateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateQAResponse rsp = GenerateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateQAOutcome(rsp);
        else
            return GenerateQAOutcome(o.GetError());
    }
    else
    {
        return GenerateQAOutcome(outcome.GetError());
    }
}

void LkeClient::GenerateQAAsync(const GenerateQARequest& request, const GenerateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GenerateQAOutcomeCallable LkeClient::GenerateQACallable(const GenerateQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateQAOutcome()>>(
        [this, request]()
        {
            return this->GenerateQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetMsgRecordOutcome LkeClient::GetMsgRecord(const GetMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "GetMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMsgRecordResponse rsp = GetMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMsgRecordOutcome(rsp);
        else
            return GetMsgRecordOutcome(o.GetError());
    }
    else
    {
        return GetMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::GetMsgRecordAsync(const GetMsgRecordRequest& request, const GetMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMsgRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetMsgRecordOutcomeCallable LkeClient::GetMsgRecordCallable(const GetMsgRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMsgRecordOutcome()>>(
        [this, request]()
        {
            return this->GetMsgRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetTaskStatusOutcome LkeClient::GetTaskStatus(const GetTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskStatusResponse rsp = GetTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskStatusOutcome(rsp);
        else
            return GetTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetTaskStatusOutcome(outcome.GetError());
    }
}

void LkeClient::GetTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetTaskStatusOutcomeCallable LkeClient::GetTaskStatusCallable(const GetTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->GetTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetWsTokenOutcome LkeClient::GetWsToken(const GetWsTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetWsToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWsTokenResponse rsp = GetWsTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWsTokenOutcome(rsp);
        else
            return GetWsTokenOutcome(o.GetError());
    }
    else
    {
        return GetWsTokenOutcome(outcome.GetError());
    }
}

void LkeClient::GetWsTokenAsync(const GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWsToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetWsTokenOutcomeCallable LkeClient::GetWsTokenCallable(const GetWsTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWsTokenOutcome()>>(
        [this, request]()
        {
            return this->GetWsToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::IgnoreUnsatisfiedReplyOutcome LkeClient::IgnoreUnsatisfiedReply(const IgnoreUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreUnsatisfiedReplyResponse rsp = IgnoreUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreUnsatisfiedReplyOutcome(rsp);
        else
            return IgnoreUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return IgnoreUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::IgnoreUnsatisfiedReplyAsync(const IgnoreUnsatisfiedReplyRequest& request, const IgnoreUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IgnoreUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::IgnoreUnsatisfiedReplyOutcomeCallable LkeClient::IgnoreUnsatisfiedReplyCallable(const IgnoreUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IgnoreUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->IgnoreUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAppOutcome LkeClient::ListApp(const ListAppRequest &request)
{
    auto outcome = MakeRequest(request, "ListApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppResponse rsp = ListAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppOutcome(rsp);
        else
            return ListAppOutcome(o.GetError());
    }
    else
    {
        return ListAppOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppAsync(const ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAppOutcomeCallable LkeClient::ListAppCallable(const ListAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAppOutcome()>>(
        [this, request]()
        {
            return this->ListApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAttributeLabelOutcome LkeClient::ListAttributeLabel(const ListAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttributeLabelResponse rsp = ListAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttributeLabelOutcome(rsp);
        else
            return ListAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ListAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ListAttributeLabelAsync(const ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAttributeLabelOutcomeCallable LkeClient::ListAttributeLabelCallable(const ListAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ListAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListQACateOutcome LkeClient::ListQACate(const ListQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ListQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQACateResponse rsp = ListQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQACateOutcome(rsp);
        else
            return ListQACateOutcome(o.GetError());
    }
    else
    {
        return ListQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ListQACateAsync(const ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListQACateOutcomeCallable LkeClient::ListQACateCallable(const ListQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListQACateOutcome()>>(
        [this, request]()
        {
            return this->ListQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListRejectedQuestionOutcome LkeClient::ListRejectedQuestion(const ListRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ListRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRejectedQuestionResponse rsp = ListRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRejectedQuestionOutcome(rsp);
        else
            return ListRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ListRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ListRejectedQuestionAsync(const ListRejectedQuestionRequest& request, const ListRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListRejectedQuestionOutcomeCallable LkeClient::ListRejectedQuestionCallable(const ListRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->ListRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReleaseConfigPreviewOutcome LkeClient::ListReleaseConfigPreview(const ListReleaseConfigPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseConfigPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseConfigPreviewResponse rsp = ListReleaseConfigPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseConfigPreviewOutcome(rsp);
        else
            return ListReleaseConfigPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseConfigPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseConfigPreviewAsync(const ListReleaseConfigPreviewRequest& request, const ListReleaseConfigPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReleaseConfigPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReleaseConfigPreviewOutcomeCallable LkeClient::ListReleaseConfigPreviewCallable(const ListReleaseConfigPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReleaseConfigPreviewOutcome()>>(
        [this, request]()
        {
            return this->ListReleaseConfigPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListSelectDocOutcome LkeClient::ListSelectDoc(const ListSelectDocRequest &request)
{
    auto outcome = MakeRequest(request, "ListSelectDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSelectDocResponse rsp = ListSelectDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSelectDocOutcome(rsp);
        else
            return ListSelectDocOutcome(o.GetError());
    }
    else
    {
        return ListSelectDocOutcome(outcome.GetError());
    }
}

void LkeClient::ListSelectDocAsync(const ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSelectDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListSelectDocOutcomeCallable LkeClient::ListSelectDocCallable(const ListSelectDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSelectDocOutcome()>>(
        [this, request]()
        {
            return this->ListSelectDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListUnsatisfiedReplyOutcome LkeClient::ListUnsatisfiedReply(const ListUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ListUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUnsatisfiedReplyResponse rsp = ListUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUnsatisfiedReplyOutcome(rsp);
        else
            return ListUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ListUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ListUnsatisfiedReplyAsync(const ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListUnsatisfiedReplyOutcomeCallable LkeClient::ListUnsatisfiedReplyCallable(const ListUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->ListUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListUsageCallDetailOutcome LkeClient::ListUsageCallDetail(const ListUsageCallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsageCallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsageCallDetailResponse rsp = ListUsageCallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsageCallDetailOutcome(rsp);
        else
            return ListUsageCallDetailOutcome(o.GetError());
    }
    else
    {
        return ListUsageCallDetailOutcome(outcome.GetError());
    }
}

void LkeClient::ListUsageCallDetailAsync(const ListUsageCallDetailRequest& request, const ListUsageCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsageCallDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListUsageCallDetailOutcomeCallable LkeClient::ListUsageCallDetailCallable(const ListUsageCallDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsageCallDetailOutcome()>>(
        [this, request]()
        {
            return this->ListUsageCallDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyAppOutcome LkeClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyAppOutcomeCallable LkeClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyAttributeLabelOutcome LkeClient::ModifyAttributeLabel(const ModifyAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAttributeLabelResponse rsp = ModifyAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAttributeLabelOutcome(rsp);
        else
            return ModifyAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyAttributeLabelAsync(const ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyAttributeLabelOutcomeCallable LkeClient::ModifyAttributeLabelCallable(const ModifyAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ModifyAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocOutcome LkeClient::ModifyDoc(const ModifyDocRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocResponse rsp = ModifyDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocOutcome(rsp);
        else
            return ModifyDocOutcome(o.GetError());
    }
    else
    {
        return ModifyDocOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAsync(const ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocOutcomeCallable LkeClient::ModifyDocCallable(const ModifyDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocOutcome()>>(
        [this, request]()
        {
            return this->ModifyDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocAttrRangeOutcome LkeClient::ModifyDocAttrRange(const ModifyDocAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocAttrRangeResponse rsp = ModifyDocAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocAttrRangeOutcome(rsp);
        else
            return ModifyDocAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyDocAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAttrRangeAsync(const ModifyDocAttrRangeRequest& request, const ModifyDocAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDocAttrRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocAttrRangeOutcomeCallable LkeClient::ModifyDocAttrRangeCallable(const ModifyDocAttrRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocAttrRangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDocAttrRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocCateOutcome LkeClient::ModifyDocCate(const ModifyDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocCateResponse rsp = ModifyDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocCateOutcome(rsp);
        else
            return ModifyDocCateOutcome(o.GetError());
    }
    else
    {
        return ModifyDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocCateAsync(const ModifyDocCateRequest& request, const ModifyDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDocCate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocCateOutcomeCallable LkeClient::ModifyDocCateCallable(const ModifyDocCateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocCateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDocCate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQAOutcome LkeClient::ModifyQA(const ModifyQARequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAResponse rsp = ModifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAOutcome(rsp);
        else
            return ModifyQAOutcome(o.GetError());
    }
    else
    {
        return ModifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAsync(const ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQAOutcomeCallable LkeClient::ModifyQACallable(const ModifyQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQAOutcome()>>(
        [this, request]()
        {
            return this->ModifyQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQAAttrRangeOutcome LkeClient::ModifyQAAttrRange(const ModifyQAAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQAAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAAttrRangeResponse rsp = ModifyQAAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAAttrRangeOutcome(rsp);
        else
            return ModifyQAAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyQAAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAttrRangeAsync(const ModifyQAAttrRangeRequest& request, const ModifyQAAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQAAttrRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQAAttrRangeOutcomeCallable LkeClient::ModifyQAAttrRangeCallable(const ModifyQAAttrRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQAAttrRangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyQAAttrRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQACateOutcome LkeClient::ModifyQACate(const ModifyQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQACateResponse rsp = ModifyQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQACateOutcome(rsp);
        else
            return ModifyQACateOutcome(o.GetError());
    }
    else
    {
        return ModifyQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQACateAsync(const ModifyQACateRequest& request, const ModifyQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQACateOutcomeCallable LkeClient::ModifyQACateCallable(const ModifyQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQACateOutcome()>>(
        [this, request]()
        {
            return this->ModifyQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyRejectedQuestionOutcome LkeClient::ModifyRejectedQuestion(const ModifyRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRejectedQuestionResponse rsp = ModifyRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRejectedQuestionOutcome(rsp);
        else
            return ModifyRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ModifyRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyRejectedQuestionAsync(const ModifyRejectedQuestionRequest& request, const ModifyRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyRejectedQuestionOutcomeCallable LkeClient::ModifyRejectedQuestionCallable(const ModifyRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->ModifyRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RateMsgRecordOutcome LkeClient::RateMsgRecord(const RateMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "RateMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RateMsgRecordResponse rsp = RateMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RateMsgRecordOutcome(rsp);
        else
            return RateMsgRecordOutcome(o.GetError());
    }
    else
    {
        return RateMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::RateMsgRecordAsync(const RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RateMsgRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RateMsgRecordOutcomeCallable LkeClient::RateMsgRecordCallable(const RateMsgRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RateMsgRecordOutcome()>>(
        [this, request]()
        {
            return this->RateMsgRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryDocAuditOutcome LkeClient::RetryDocAudit(const RetryDocAuditRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocAuditResponse rsp = RetryDocAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocAuditOutcome(rsp);
        else
            return RetryDocAuditOutcome(o.GetError());
    }
    else
    {
        return RetryDocAuditOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocAuditAsync(const RetryDocAuditRequest& request, const RetryDocAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDocAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryDocAuditOutcomeCallable LkeClient::RetryDocAuditCallable(const RetryDocAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryDocAuditOutcome()>>(
        [this, request]()
        {
            return this->RetryDocAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryDocParseOutcome LkeClient::RetryDocParse(const RetryDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocParseResponse rsp = RetryDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocParseOutcome(rsp);
        else
            return RetryDocParseOutcome(o.GetError());
    }
    else
    {
        return RetryDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocParseAsync(const RetryDocParseRequest& request, const RetryDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDocParse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryDocParseOutcomeCallable LkeClient::RetryDocParseCallable(const RetryDocParseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryDocParseOutcome()>>(
        [this, request]()
        {
            return this->RetryDocParse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryReleaseOutcome LkeClient::RetryRelease(const RetryReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryReleaseResponse rsp = RetryReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryReleaseOutcome(rsp);
        else
            return RetryReleaseOutcome(o.GetError());
    }
    else
    {
        return RetryReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::RetryReleaseAsync(const RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryReleaseOutcomeCallable LkeClient::RetryReleaseCallable(const RetryReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryReleaseOutcome()>>(
        [this, request]()
        {
            return this->RetryRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::SaveDocOutcome LkeClient::SaveDoc(const SaveDocRequest &request)
{
    auto outcome = MakeRequest(request, "SaveDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveDocResponse rsp = SaveDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveDocOutcome(rsp);
        else
            return SaveDocOutcome(o.GetError());
    }
    else
    {
        return SaveDocOutcome(outcome.GetError());
    }
}

void LkeClient::SaveDocAsync(const SaveDocRequest& request, const SaveDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::SaveDocOutcomeCallable LkeClient::SaveDocCallable(const SaveDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveDocOutcome()>>(
        [this, request]()
        {
            return this->SaveDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::StopDocParseOutcome LkeClient::StopDocParse(const StopDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "StopDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDocParseResponse rsp = StopDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDocParseOutcome(rsp);
        else
            return StopDocParseOutcome(o.GetError());
    }
    else
    {
        return StopDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::StopDocParseAsync(const StopDocParseRequest& request, const StopDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopDocParse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::StopDocParseOutcomeCallable LkeClient::StopDocParseCallable(const StopDocParseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopDocParseOutcome()>>(
        [this, request]()
        {
            return this->StopDocParse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::UploadAttributeLabelOutcome LkeClient::UploadAttributeLabel(const UploadAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "UploadAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadAttributeLabelResponse rsp = UploadAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadAttributeLabelOutcome(rsp);
        else
            return UploadAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return UploadAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::UploadAttributeLabelAsync(const UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::UploadAttributeLabelOutcomeCallable LkeClient::UploadAttributeLabelCallable(const UploadAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->UploadAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::VerifyQAOutcome LkeClient::VerifyQA(const VerifyQARequest &request)
{
    auto outcome = MakeRequest(request, "VerifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyQAResponse rsp = VerifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyQAOutcome(rsp);
        else
            return VerifyQAOutcome(o.GetError());
    }
    else
    {
        return VerifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::VerifyQAAsync(const VerifyQARequest& request, const VerifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::VerifyQAOutcomeCallable LkeClient::VerifyQACallable(const VerifyQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyQAOutcome()>>(
        [this, request]()
        {
            return this->VerifyQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

