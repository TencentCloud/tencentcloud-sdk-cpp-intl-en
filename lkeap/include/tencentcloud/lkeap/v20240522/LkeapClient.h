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

#ifndef TENCENTCLOUD_LKEAP_V20240522_LKEAPCLIENT_H_
#define TENCENTCLOUD_LKEAP_V20240522_LKEAPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowRequest.h>
#include <tencentcloud/lkeap/v20240522/model/CreateReconstructDocumentFlowResponse.h>
#include <tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowRequest.h>
#include <tencentcloud/lkeap/v20240522/model/CreateSplitDocumentFlowResponse.h>
#include <tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultRequest.h>
#include <tencentcloud/lkeap/v20240522/model/GetReconstructDocumentResultResponse.h>
#include <tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultRequest.h>
#include <tencentcloud/lkeap/v20240522/model/GetSplitDocumentResultResponse.h>
#include <tencentcloud/lkeap/v20240522/model/QueryRewriteRequest.h>
#include <tencentcloud/lkeap/v20240522/model/QueryRewriteResponse.h>
#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSERequest.h>
#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEResponse.h>
#include <tencentcloud/lkeap/v20240522/model/RunRerankRequest.h>
#include <tencentcloud/lkeap/v20240522/model/RunRerankResponse.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            class LkeapClient : public AbstractClient
            {
            public:
                LkeapClient(const Credential &credential, const std::string &region);
                LkeapClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateReconstructDocumentFlowResponse> CreateReconstructDocumentFlowOutcome;
                typedef std::future<CreateReconstructDocumentFlowOutcome> CreateReconstructDocumentFlowOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::CreateReconstructDocumentFlowRequest&, CreateReconstructDocumentFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReconstructDocumentFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSplitDocumentFlowResponse> CreateSplitDocumentFlowOutcome;
                typedef std::future<CreateSplitDocumentFlowOutcome> CreateSplitDocumentFlowOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::CreateSplitDocumentFlowRequest&, CreateSplitDocumentFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSplitDocumentFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::GetReconstructDocumentResultResponse> GetReconstructDocumentResultOutcome;
                typedef std::future<GetReconstructDocumentResultOutcome> GetReconstructDocumentResultOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::GetReconstructDocumentResultRequest&, GetReconstructDocumentResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetReconstructDocumentResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSplitDocumentResultResponse> GetSplitDocumentResultOutcome;
                typedef std::future<GetSplitDocumentResultOutcome> GetSplitDocumentResultOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::GetSplitDocumentResultRequest&, GetSplitDocumentResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSplitDocumentResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryRewriteResponse> QueryRewriteOutcome;
                typedef std::future<QueryRewriteOutcome> QueryRewriteOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::QueryRewriteRequest&, QueryRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::ReconstructDocumentSSEResponse> ReconstructDocumentSSEOutcome;
                typedef std::future<ReconstructDocumentSSEOutcome> ReconstructDocumentSSEOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::ReconstructDocumentSSERequest&, ReconstructDocumentSSEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReconstructDocumentSSEAsyncHandler;
                typedef Outcome<Core::Error, Model::RunRerankResponse> RunRerankOutcome;
                typedef std::future<RunRerankOutcome> RunRerankOutcomeCallable;
                typedef std::function<void(const LkeapClient*, const Model::RunRerankRequest&, RunRerankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunRerankAsyncHandler;



                /**
                 *This API is used to initiate requests for this asynchronous API, for initiating document parsing tasks.
Document parsing supports converting images or PDF files into Markdown format files, and can parse content elements including tables, formulas, images, headings, paragraphs, headers, and footers, and intelligently convert the content into reading order. Please refer to the input parameter list below for specific supported file types.
During the trial period, the QPS limit for a single account is only 1. If you need to access officially, please contact our R&D team.
                 * @param req CreateReconstructDocumentFlowRequest
                 * @return CreateReconstructDocumentFlowOutcome
                 */
                CreateReconstructDocumentFlowOutcome CreateReconstructDocumentFlow(const Model::CreateReconstructDocumentFlowRequest &request);
                void CreateReconstructDocumentFlowAsync(const Model::CreateReconstructDocumentFlowRequest& request, const CreateReconstructDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReconstructDocumentFlowOutcomeCallable CreateReconstructDocumentFlowCallable(const Model::CreateReconstructDocumentFlowRequest& request);

                /**
                 *This API is used to create document segmentation tasks, support various file types, possess mllm capacity, and can analyze and deeply understand the information in charts.
                 * @param req CreateSplitDocumentFlowRequest
                 * @return CreateSplitDocumentFlowOutcome
                 */
                CreateSplitDocumentFlowOutcome CreateSplitDocumentFlow(const Model::CreateSplitDocumentFlowRequest &request);
                void CreateSplitDocumentFlowAsync(const Model::CreateSplitDocumentFlowRequest& request, const CreateSplitDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSplitDocumentFlowOutcomeCallable CreateSplitDocumentFlowCallable(const Model::CreateSplitDocumentFlowRequest& request);

                /**
                 *This is an asynchronous API for querying results, which is used to obtain the result of document parsing.
                 * @param req GetReconstructDocumentResultRequest
                 * @return GetReconstructDocumentResultOutcome
                 */
                GetReconstructDocumentResultOutcome GetReconstructDocumentResult(const Model::GetReconstructDocumentResultRequest &request);
                void GetReconstructDocumentResultAsync(const Model::GetReconstructDocumentResultRequest& request, const GetReconstructDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetReconstructDocumentResultOutcomeCallable GetReconstructDocumentResultCallable(const Model::GetReconstructDocumentResultRequest& request);

                /**
                 *This API is used to query the results of document splitting tasks.
                 * @param req GetSplitDocumentResultRequest
                 * @return GetSplitDocumentResultOutcome
                 */
                GetSplitDocumentResultOutcome GetSplitDocumentResult(const Model::GetSplitDocumentResultRequest &request);
                void GetSplitDocumentResultAsync(const Model::GetSplitDocumentResultRequest& request, const GetSplitDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSplitDocumentResultOutcomeCallable GetSplitDocumentResultCallable(const Model::GetSplitDocumentResultRequest& request);

                /**
                 *QueryRewrite is mainly used in multi-round conversations for reference resolution and ellipsis completion. Using this API, you don't need to input prompt descriptions. A more accurate user query can be generated based on the conversation history. In terms of application scenarios, this API can be applied to various scenarios such as intelligent Q&A and conversational search.
There is a call limit for single-account for this API. If you need to increase the concurrency limit, please contact us (https://cloud.tencent.com/act/event/Online_service).
                 * @param req QueryRewriteRequest
                 * @return QueryRewriteOutcome
                 */
                QueryRewriteOutcome QueryRewrite(const Model::QueryRewriteRequest &request);
                void QueryRewriteAsync(const Model::QueryRewriteRequest& request, const QueryRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRewriteOutcomeCallable QueryRewriteCallable(const Model::QueryRewriteRequest& request);

                /**
                 *This API is used for quasi-real-time document parsing, using HTTP SSE protocol for communication.
                 * @param req ReconstructDocumentSSERequest
                 * @return ReconstructDocumentSSEOutcome
                 */
                ReconstructDocumentSSEOutcome ReconstructDocumentSSE(const Model::ReconstructDocumentSSERequest &request);
                void ReconstructDocumentSSEAsync(const Model::ReconstructDocumentSSERequest& request, const ReconstructDocumentSSEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReconstructDocumentSSEOutcomeCallable ReconstructDocumentSSECallable(const Model::ReconstructDocumentSSERequest& request);

                /**
                 *This API is used to reorder the results of multi-channel recall based on the rerank model of knowledge engine fine-tuning model technology, sort the segments according to the relevance between the query and the segment content from high to low score, and output the corresponding scoring results.
                 * @param req RunRerankRequest
                 * @return RunRerankOutcome
                 */
                RunRerankOutcome RunRerank(const Model::RunRerankRequest &request);
                void RunRerankAsync(const Model::RunRerankRequest& request, const RunRerankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunRerankOutcomeCallable RunRerankCallable(const Model::RunRerankRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_LKEAPCLIENT_H_
