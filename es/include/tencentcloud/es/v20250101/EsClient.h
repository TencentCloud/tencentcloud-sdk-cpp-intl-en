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

#ifndef TENCENTCLOUD_ES_V20250101_ESCLIENT_H_
#define TENCENTCLOUD_ES_V20250101_ESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentRequest.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentResponse.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentAsyncRequest.h>
#include <tencentcloud/es/v20250101/model/ChunkDocumentAsyncResponse.h>
#include <tencentcloud/es/v20250101/model/GetDocumentChunkResultRequest.h>
#include <tencentcloud/es/v20250101/model/GetDocumentChunkResultResponse.h>
#include <tencentcloud/es/v20250101/model/GetDocumentParseResultRequest.h>
#include <tencentcloud/es/v20250101/model/GetDocumentParseResultResponse.h>
#include <tencentcloud/es/v20250101/model/GetMultiModalEmbeddingRequest.h>
#include <tencentcloud/es/v20250101/model/GetMultiModalEmbeddingResponse.h>
#include <tencentcloud/es/v20250101/model/GetTextEmbeddingRequest.h>
#include <tencentcloud/es/v20250101/model/GetTextEmbeddingResponse.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentRequest.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentResponse.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentAsyncRequest.h>
#include <tencentcloud/es/v20250101/model/ParseDocumentAsyncResponse.h>
#include <tencentcloud/es/v20250101/model/RunRerankRequest.h>
#include <tencentcloud/es/v20250101/model/RunRerankResponse.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            class EsClient : public AbstractClient
            {
            public:
                EsClient(const Credential &credential, const std::string &region);
                EsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChunkDocumentResponse> ChunkDocumentOutcome;
                typedef std::future<ChunkDocumentOutcome> ChunkDocumentOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ChunkDocumentRequest&, ChunkDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChunkDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::ChunkDocumentAsyncResponse> ChunkDocumentAsyncOutcome;
                typedef std::future<ChunkDocumentAsyncOutcome> ChunkDocumentAsyncOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ChunkDocumentAsyncRequest&, ChunkDocumentAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChunkDocumentAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocumentChunkResultResponse> GetDocumentChunkResultOutcome;
                typedef std::future<GetDocumentChunkResultOutcome> GetDocumentChunkResultOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetDocumentChunkResultRequest&, GetDocumentChunkResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocumentChunkResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocumentParseResultResponse> GetDocumentParseResultOutcome;
                typedef std::future<GetDocumentParseResultOutcome> GetDocumentParseResultOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetDocumentParseResultRequest&, GetDocumentParseResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocumentParseResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMultiModalEmbeddingResponse> GetMultiModalEmbeddingOutcome;
                typedef std::future<GetMultiModalEmbeddingOutcome> GetMultiModalEmbeddingOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetMultiModalEmbeddingRequest&, GetMultiModalEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiModalEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTextEmbeddingResponse> GetTextEmbeddingOutcome;
                typedef std::future<GetTextEmbeddingOutcome> GetTextEmbeddingOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetTextEmbeddingRequest&, GetTextEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTextEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseDocumentResponse> ParseDocumentOutcome;
                typedef std::future<ParseDocumentOutcome> ParseDocumentOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ParseDocumentRequest&, ParseDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseDocumentAsyncResponse> ParseDocumentAsyncOutcome;
                typedef std::future<ParseDocumentAsyncOutcome> ParseDocumentAsyncOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::ParseDocumentAsyncRequest&, ParseDocumentAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseDocumentAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::RunRerankResponse> RunRerankOutcome;
                typedef std::future<RunRerankOutcome> RunRerankOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RunRerankRequest&, RunRerankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunRerankAsyncHandler;



                /**
                 *Text segmentation is a technology that splits long text into short fragments for adapting to model input, improving processing efficiency, or information retrieval. It balances fragment length and semantic consistency, suitable for NLP and data analysis scenarios.
This API is used to slice text based on delimiter rules. It has a single-account call limit. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req ChunkDocumentRequest
                 * @return ChunkDocumentOutcome
                 */
                ChunkDocumentOutcome ChunkDocument(const Model::ChunkDocumentRequest &request);
                void ChunkDocumentAsync(const Model::ChunkDocumentRequest& request, const ChunkDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChunkDocumentOutcomeCallable ChunkDocumentCallable(const Model::ChunkDocumentRequest& request);

                /**
                 *Text segmentation is a technology that splits long text into short clips for adapting to model input, improving processing efficiency, or information retrieval. It balances clip length and semantic consistency, suitable for NLP and data analysis scenarios.
This API is an async API with a model dimensional call limit. Each model has a qps limit of 5. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req ChunkDocumentAsyncRequest
                 * @return ChunkDocumentAsyncOutcome
                 */
                ChunkDocumentAsyncOutcome ChunkDocumentAsync(const Model::ChunkDocumentAsyncRequest &request);
                void ChunkDocumentAsyncAsync(const Model::ChunkDocumentAsyncRequest& request, const ChunkDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChunkDocumentAsyncOutcomeCallable ChunkDocumentAsyncCallable(const Model::ChunkDocumentAsyncRequest& request);

                /**
                 *Retrieve document slices
                 * @param req GetDocumentChunkResultRequest
                 * @return GetDocumentChunkResultOutcome
                 */
                GetDocumentChunkResultOutcome GetDocumentChunkResult(const Model::GetDocumentChunkResultRequest &request);
                void GetDocumentChunkResultAsync(const Model::GetDocumentChunkResultRequest& request, const GetDocumentChunkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocumentChunkResultOutcomeCallable GetDocumentChunkResultCallable(const Model::GetDocumentChunkResultRequest& request);

                /**
                 *This API is used to retrieve the asynchronous processing result of document parsing.
                 * @param req GetDocumentParseResultRequest
                 * @return GetDocumentParseResultOutcome
                 */
                GetDocumentParseResultOutcome GetDocumentParseResult(const Model::GetDocumentParseResultRequest &request);
                void GetDocumentParseResultAsync(const Model::GetDocumentParseResultRequest& request, const GetDocumentParseResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocumentParseResultOutcomeCallable GetDocumentParseResultCallable(const Model::GetDocumentParseResultRequest& request);

                /**
                 *Embedding is a technology that maps high-dimensional data to a low-dimensional space, usually used for converting unstructured data such as text, images, or audio into vector representation, making it easier to input into machine models for processing, and the distance between vectors can reflect the similarity between objects. 
This API has a model dimensional call limit. Each model has a qps limit of 10. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req GetMultiModalEmbeddingRequest
                 * @return GetMultiModalEmbeddingOutcome
                 */
                GetMultiModalEmbeddingOutcome GetMultiModalEmbedding(const Model::GetMultiModalEmbeddingRequest &request);
                void GetMultiModalEmbeddingAsync(const Model::GetMultiModalEmbeddingRequest& request, const GetMultiModalEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMultiModalEmbeddingOutcomeCallable GetMultiModalEmbeddingCallable(const Model::GetMultiModalEmbeddingRequest& request);

                /**
                 *Embedding is a technology that maps high-dimensional data to a low-dimensional space, usually used for converting unstructured data such as text, images, or audio into vector representation, making it easier to input into machine models for processing, and the distance between vectors can reflect the similarity between objects.
This API has a model dimensional call limit. Each model has a qps limit of 20. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req GetTextEmbeddingRequest
                 * @return GetTextEmbeddingOutcome
                 */
                GetTextEmbeddingOutcome GetTextEmbedding(const Model::GetTextEmbeddingRequest &request);
                void GetTextEmbeddingAsync(const Model::GetTextEmbeddingRequest& request, const GetTextEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTextEmbeddingOutcomeCallable GetTextEmbeddingCallable(const Model::GetTextEmbeddingRequest& request);

                /**
                 *This service can accurately convert various types of documents into a standard format to meet the requirements for building an enterprise knowledge base, migrating technical documentation, and structured storage for content platforms.
This API has a model dimensional call limit. Each model has a qps limit of 5. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req ParseDocumentRequest
                 * @return ParseDocumentOutcome
                 */
                ParseDocumentOutcome ParseDocument(const Model::ParseDocumentRequest &request);
                void ParseDocumentAsync(const Model::ParseDocumentRequest& request, const ParseDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseDocumentOutcomeCallable ParseDocumentCallable(const Model::ParseDocumentRequest& request);

                /**
                 *This service accurately converts various format documents into standard format, meeting requirements for Enterprise Knowledge Base construction, technical documentation migration, and structured storage for content platforms.
This API is an async API with a model dimensional call limit. Each model has a qps limit of 5. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
                 * @param req ParseDocumentAsyncRequest
                 * @return ParseDocumentAsyncOutcome
                 */
                ParseDocumentAsyncOutcome ParseDocumentAsync(const Model::ParseDocumentAsyncRequest &request);
                void ParseDocumentAsyncAsync(const Model::ParseDocumentAsyncRequest& request, const ParseDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseDocumentAsyncOutcomeCallable ParseDocumentAsyncCallable(const Model::ParseDocumentAsyncRequest& request);

                /**
                 *Rearrangement refers to the process in RAG where, by assessing the relevance between documents and queries, the most relevant documents are placed at the front. This ensures that the language model prioritizes high-ranking context when generating responses, improving the accuracy and reliability of generated results. It can also be used for filtering to reduce large model costs.
This API has a single-account call limit. If you need to increase the concurrent limit, please contact us (https://www.tencentcloud.com/act/event/Online_service?from_cn_redirect=1).
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

#endif // !TENCENTCLOUD_ES_V20250101_ESCLIENT_H_
