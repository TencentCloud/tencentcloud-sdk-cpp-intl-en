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

#include <tencentcloud/lkeap/v20240522/LkeapClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lkeap::V20240522;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-22";
    const string ENDPOINT = "lkeap.intl.tencentcloudapi.com";
}

LkeapClient::LkeapClient(const Credential &credential, const string &region) :
    LkeapClient(credential, region, ClientProfile())
{
}

LkeapClient::LkeapClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LkeapClient::CreateReconstructDocumentFlowOutcome LkeapClient::CreateReconstructDocumentFlow(const CreateReconstructDocumentFlowRequest &request)
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

void LkeapClient::CreateReconstructDocumentFlowAsync(const CreateReconstructDocumentFlowRequest& request, const CreateReconstructDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReconstructDocumentFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateReconstructDocumentFlowOutcomeCallable LkeapClient::CreateReconstructDocumentFlowCallable(const CreateReconstructDocumentFlowRequest &request)
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

LkeapClient::CreateSplitDocumentFlowOutcome LkeapClient::CreateSplitDocumentFlow(const CreateSplitDocumentFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSplitDocumentFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSplitDocumentFlowResponse rsp = CreateSplitDocumentFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSplitDocumentFlowOutcome(rsp);
        else
            return CreateSplitDocumentFlowOutcome(o.GetError());
    }
    else
    {
        return CreateSplitDocumentFlowOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateSplitDocumentFlowAsync(const CreateSplitDocumentFlowRequest& request, const CreateSplitDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSplitDocumentFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateSplitDocumentFlowOutcomeCallable LkeapClient::CreateSplitDocumentFlowCallable(const CreateSplitDocumentFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSplitDocumentFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateSplitDocumentFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::GetEmbeddingOutcome LkeapClient::GetEmbedding(const GetEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmbeddingResponse rsp = GetEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmbeddingOutcome(rsp);
        else
            return GetEmbeddingOutcome(o.GetError());
    }
    else
    {
        return GetEmbeddingOutcome(outcome.GetError());
    }
}

void LkeapClient::GetEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetEmbeddingOutcomeCallable LkeapClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->GetEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::GetReconstructDocumentResultOutcome LkeapClient::GetReconstructDocumentResult(const GetReconstructDocumentResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetReconstructDocumentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReconstructDocumentResultResponse rsp = GetReconstructDocumentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReconstructDocumentResultOutcome(rsp);
        else
            return GetReconstructDocumentResultOutcome(o.GetError());
    }
    else
    {
        return GetReconstructDocumentResultOutcome(outcome.GetError());
    }
}

void LkeapClient::GetReconstructDocumentResultAsync(const GetReconstructDocumentResultRequest& request, const GetReconstructDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReconstructDocumentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetReconstructDocumentResultOutcomeCallable LkeapClient::GetReconstructDocumentResultCallable(const GetReconstructDocumentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReconstructDocumentResultOutcome()>>(
        [this, request]()
        {
            return this->GetReconstructDocumentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::GetSplitDocumentResultOutcome LkeapClient::GetSplitDocumentResult(const GetSplitDocumentResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetSplitDocumentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSplitDocumentResultResponse rsp = GetSplitDocumentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSplitDocumentResultOutcome(rsp);
        else
            return GetSplitDocumentResultOutcome(o.GetError());
    }
    else
    {
        return GetSplitDocumentResultOutcome(outcome.GetError());
    }
}

void LkeapClient::GetSplitDocumentResultAsync(const GetSplitDocumentResultRequest& request, const GetSplitDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSplitDocumentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetSplitDocumentResultOutcomeCallable LkeapClient::GetSplitDocumentResultCallable(const GetSplitDocumentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSplitDocumentResultOutcome()>>(
        [this, request]()
        {
            return this->GetSplitDocumentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::QueryRewriteOutcome LkeapClient::QueryRewrite(const QueryRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRewriteResponse rsp = QueryRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRewriteOutcome(rsp);
        else
            return QueryRewriteOutcome(o.GetError());
    }
    else
    {
        return QueryRewriteOutcome(outcome.GetError());
    }
}

void LkeapClient::QueryRewriteAsync(const QueryRewriteRequest& request, const QueryRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::QueryRewriteOutcomeCallable LkeapClient::QueryRewriteCallable(const QueryRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRewriteOutcome()>>(
        [this, request]()
        {
            return this->QueryRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::ReconstructDocumentSSEOutcome LkeapClient::ReconstructDocumentSSE(const ReconstructDocumentSSERequest &request)
{
    auto outcome = MakeRequest(request, "ReconstructDocumentSSE");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReconstructDocumentSSEResponse rsp = ReconstructDocumentSSEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReconstructDocumentSSEOutcome(rsp);
        else
            return ReconstructDocumentSSEOutcome(o.GetError());
    }
    else
    {
        return ReconstructDocumentSSEOutcome(outcome.GetError());
    }
}

void LkeapClient::ReconstructDocumentSSEAsync(const ReconstructDocumentSSERequest& request, const ReconstructDocumentSSEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReconstructDocumentSSE(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ReconstructDocumentSSEOutcomeCallable LkeapClient::ReconstructDocumentSSECallable(const ReconstructDocumentSSERequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReconstructDocumentSSEOutcome()>>(
        [this, request]()
        {
            return this->ReconstructDocumentSSE(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeapClient::RunRerankOutcome LkeapClient::RunRerank(const RunRerankRequest &request)
{
    auto outcome = MakeRequest(request, "RunRerank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunRerankResponse rsp = RunRerankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunRerankOutcome(rsp);
        else
            return RunRerankOutcome(o.GetError());
    }
    else
    {
        return RunRerankOutcome(outcome.GetError());
    }
}

void LkeapClient::RunRerankAsync(const RunRerankRequest& request, const RunRerankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunRerank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::RunRerankOutcomeCallable LkeapClient::RunRerankCallable(const RunRerankRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunRerankOutcome()>>(
        [this, request]()
        {
            return this->RunRerank(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

