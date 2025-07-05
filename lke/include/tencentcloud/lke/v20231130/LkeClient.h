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

#ifndef TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_
#define TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelExistResponse.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferRequest.h>
#include <tencentcloud/lke/v20231130/model/CheckAttributeLabelReferResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAppRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAppResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateCorpRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateCorpResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQARequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateReconstructDocumentFlowRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateReconstructDocumentFlowResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/CreateReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQARequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQAResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAppResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeCallStatsGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeCallStatsGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeConcurrencyUsageGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeCorpRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeCorpResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeDocResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsagePieGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeKnowledgeUsagePieGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeQARequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeQAResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReferRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReferResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseInfoRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeReleaseInfoResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeRobotBizIDByAppKeyRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeRobotBizIDByAppKeyResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeSearchStatsGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeSearchStatsGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeSegmentsRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeSegmentsResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeStorageCredentialResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageGraphRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageGraphResponse.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextRequest.h>
#include <tencentcloud/lke/v20231130/model/DescribeUnsatisfiedReplyContextResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportQAListResponse.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ExportUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/GenerateQARequest.h>
#include <tencentcloud/lke/v20231130/model/GenerateQAResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAnswerTypeDataCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAnswerTypeDataCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppKnowledgeCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretRequest.h>
#include <tencentcloud/lke/v20231130/model/GetAppSecretResponse.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/GetDocPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/GetLikeDataCountRequest.h>
#include <tencentcloud/lke/v20231130/model/GetLikeDataCountResponse.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/GetMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/GetReconstructDocumentResultRequest.h>
#include <tencentcloud/lke/v20231130/model/GetReconstructDocumentResultResponse.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusRequest.h>
#include <tencentcloud/lke/v20231130/model/GetTaskStatusResponse.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenRequest.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenResponse.h>
#include <tencentcloud/lke/v20231130/model/GroupDocRequest.h>
#include <tencentcloud/lke/v20231130/model/GroupDocResponse.h>
#include <tencentcloud/lke/v20231130/model/GroupQARequest.h>
#include <tencentcloud/lke/v20231130/model/GroupQAResponse.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/IgnoreUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppCategoryRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppCategoryResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAppKnowledgeDetailRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAppKnowledgeDetailResponse.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ListDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ListDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/ListDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/ListModelRequest.h>
#include <tencentcloud/lke/v20231130/model/ListModelResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQARequest.h>
#include <tencentcloud/lke/v20231130/model/ListQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ListQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ListQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseConfigPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseConfigPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseDocPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseDocPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseQAPreviewRequest.h>
#include <tencentcloud/lke/v20231130/model/ListReleaseQAPreviewResponse.h>
#include <tencentcloud/lke/v20231130/model/ListSelectDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ListSelectDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyRequest.h>
#include <tencentcloud/lke/v20231130/model/ListUnsatisfiedReplyResponse.h>
#include <tencentcloud/lke/v20231130/model/ListUsageCallDetailRequest.h>
#include <tencentcloud/lke/v20231130/model/ListUsageCallDetailResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAppResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocCateRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyDocCateResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQARequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQAAttrRangeResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyQACateResponse.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionRequest.h>
#include <tencentcloud/lke/v20231130/model/ModifyRejectedQuestionResponse.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordRequest.h>
#include <tencentcloud/lke/v20231130/model/RateMsgRecordResponse.h>
#include <tencentcloud/lke/v20231130/model/RenameDocRequest.h>
#include <tencentcloud/lke/v20231130/model/RenameDocResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryDocAuditRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryDocAuditResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryDocParseRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryDocParseResponse.h>
#include <tencentcloud/lke/v20231130/model/RetryReleaseRequest.h>
#include <tencentcloud/lke/v20231130/model/RetryReleaseResponse.h>
#include <tencentcloud/lke/v20231130/model/SaveDocRequest.h>
#include <tencentcloud/lke/v20231130/model/SaveDocResponse.h>
#include <tencentcloud/lke/v20231130/model/StopDocParseRequest.h>
#include <tencentcloud/lke/v20231130/model/StopDocParseResponse.h>
#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelRequest.h>
#include <tencentcloud/lke/v20231130/model/UploadAttributeLabelResponse.h>
#include <tencentcloud/lke/v20231130/model/VerifyQARequest.h>
#include <tencentcloud/lke/v20231130/model/VerifyQAResponse.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            class LkeClient : public AbstractClient
            {
            public:
                LkeClient(const Credential &credential, const std::string &region);
                LkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckAttributeLabelExistResponse> CheckAttributeLabelExistOutcome;
                typedef std::future<CheckAttributeLabelExistOutcome> CheckAttributeLabelExistOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CheckAttributeLabelExistRequest&, CheckAttributeLabelExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAttributeLabelExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAttributeLabelReferResponse> CheckAttributeLabelReferOutcome;
                typedef std::future<CheckAttributeLabelReferOutcome> CheckAttributeLabelReferOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CheckAttributeLabelReferRequest&, CheckAttributeLabelReferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAttributeLabelReferAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAttributeLabelResponse> CreateAttributeLabelOutcome;
                typedef std::future<CreateAttributeLabelOutcome> CreateAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateAttributeLabelRequest&, CreateAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCorpResponse> CreateCorpOutcome;
                typedef std::future<CreateCorpOutcome> CreateCorpOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateCorpRequest&, CreateCorpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocCateResponse> CreateDocCateOutcome;
                typedef std::future<CreateDocCateOutcome> CreateDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateDocCateRequest&, CreateDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQAResponse> CreateQAOutcome;
                typedef std::future<CreateQAOutcome> CreateQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateQARequest&, CreateQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQAAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQACateResponse> CreateQACateOutcome;
                typedef std::future<CreateQACateOutcome> CreateQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateQACateRequest&, CreateQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReconstructDocumentFlowResponse> CreateReconstructDocumentFlowOutcome;
                typedef std::future<CreateReconstructDocumentFlowOutcome> CreateReconstructDocumentFlowOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateReconstructDocumentFlowRequest&, CreateReconstructDocumentFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReconstructDocumentFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRejectedQuestionResponse> CreateRejectedQuestionOutcome;
                typedef std::future<CreateRejectedQuestionOutcome> CreateRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateRejectedQuestionRequest&, CreateRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseResponse> CreateReleaseOutcome;
                typedef std::future<CreateReleaseOutcome> CreateReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::CreateReleaseRequest&, CreateReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttributeLabelResponse> DeleteAttributeLabelOutcome;
                typedef std::future<DeleteAttributeLabelOutcome> DeleteAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteAttributeLabelRequest&, DeleteAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocResponse> DeleteDocOutcome;
                typedef std::future<DeleteDocOutcome> DeleteDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteDocRequest&, DeleteDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocCateResponse> DeleteDocCateOutcome;
                typedef std::future<DeleteDocCateOutcome> DeleteDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteDocCateRequest&, DeleteDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQAResponse> DeleteQAOutcome;
                typedef std::future<DeleteQAOutcome> DeleteQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQARequest&, DeleteQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQACateResponse> DeleteQACateOutcome;
                typedef std::future<DeleteQACateOutcome> DeleteQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteQACateRequest&, DeleteQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRejectedQuestionResponse> DeleteRejectedQuestionOutcome;
                typedef std::future<DeleteRejectedQuestionOutcome> DeleteRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DeleteRejectedQuestionRequest&, DeleteRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttributeLabelResponse> DescribeAttributeLabelOutcome;
                typedef std::future<DescribeAttributeLabelOutcome> DescribeAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeAttributeLabelRequest&, DescribeAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallStatsGraphResponse> DescribeCallStatsGraphOutcome;
                typedef std::future<DescribeCallStatsGraphOutcome> DescribeCallStatsGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeCallStatsGraphRequest&, DescribeCallStatsGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallStatsGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrencyUsageResponse> DescribeConcurrencyUsageOutcome;
                typedef std::future<DescribeConcurrencyUsageOutcome> DescribeConcurrencyUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeConcurrencyUsageRequest&, DescribeConcurrencyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrencyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrencyUsageGraphResponse> DescribeConcurrencyUsageGraphOutcome;
                typedef std::future<DescribeConcurrencyUsageGraphOutcome> DescribeConcurrencyUsageGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeConcurrencyUsageGraphRequest&, DescribeConcurrencyUsageGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrencyUsageGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCorpResponse> DescribeCorpOutcome;
                typedef std::future<DescribeCorpOutcome> DescribeCorpOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeCorpRequest&, DescribeCorpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCorpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocResponse> DescribeDocOutcome;
                typedef std::future<DescribeDocOutcome> DescribeDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeDocRequest&, DescribeDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeUsageResponse> DescribeKnowledgeUsageOutcome;
                typedef std::future<DescribeKnowledgeUsageOutcome> DescribeKnowledgeUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeKnowledgeUsageRequest&, DescribeKnowledgeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKnowledgeUsagePieGraphResponse> DescribeKnowledgeUsagePieGraphOutcome;
                typedef std::future<DescribeKnowledgeUsagePieGraphOutcome> DescribeKnowledgeUsagePieGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeKnowledgeUsagePieGraphRequest&, DescribeKnowledgeUsagePieGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeUsagePieGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQAResponse> DescribeQAOutcome;
                typedef std::future<DescribeQAOutcome> DescribeQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeQARequest&, DescribeQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReferResponse> DescribeReferOutcome;
                typedef std::future<DescribeReferOutcome> DescribeReferOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReferRequest&, DescribeReferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReferAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseResponse> DescribeReleaseOutcome;
                typedef std::future<DescribeReleaseOutcome> DescribeReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReleaseRequest&, DescribeReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseInfoResponse> DescribeReleaseInfoOutcome;
                typedef std::future<DescribeReleaseInfoOutcome> DescribeReleaseInfoOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeReleaseInfoRequest&, DescribeReleaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRobotBizIDByAppKeyResponse> DescribeRobotBizIDByAppKeyOutcome;
                typedef std::future<DescribeRobotBizIDByAppKeyOutcome> DescribeRobotBizIDByAppKeyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeRobotBizIDByAppKeyRequest&, DescribeRobotBizIDByAppKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRobotBizIDByAppKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchStatsGraphResponse> DescribeSearchStatsGraphOutcome;
                typedef std::future<DescribeSearchStatsGraphOutcome> DescribeSearchStatsGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeSearchStatsGraphRequest&, DescribeSearchStatsGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchStatsGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSegmentsResponse> DescribeSegmentsOutcome;
                typedef std::future<DescribeSegmentsOutcome> DescribeSegmentsOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeSegmentsRequest&, DescribeSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageCredentialResponse> DescribeStorageCredentialOutcome;
                typedef std::future<DescribeStorageCredentialOutcome> DescribeStorageCredentialOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeStorageCredentialRequest&, DescribeStorageCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenUsageResponse> DescribeTokenUsageOutcome;
                typedef std::future<DescribeTokenUsageOutcome> DescribeTokenUsageOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeTokenUsageRequest&, DescribeTokenUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenUsageGraphResponse> DescribeTokenUsageGraphOutcome;
                typedef std::future<DescribeTokenUsageGraphOutcome> DescribeTokenUsageGraphOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeTokenUsageGraphRequest&, DescribeTokenUsageGraphOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenUsageGraphAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnsatisfiedReplyContextResponse> DescribeUnsatisfiedReplyContextOutcome;
                typedef std::future<DescribeUnsatisfiedReplyContextOutcome> DescribeUnsatisfiedReplyContextOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::DescribeUnsatisfiedReplyContextRequest&, DescribeUnsatisfiedReplyContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnsatisfiedReplyContextAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttributeLabelResponse> ExportAttributeLabelOutcome;
                typedef std::future<ExportAttributeLabelOutcome> ExportAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportAttributeLabelRequest&, ExportAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportQAListResponse> ExportQAListOutcome;
                typedef std::future<ExportQAListOutcome> ExportQAListOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportQAListRequest&, ExportQAListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportQAListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportUnsatisfiedReplyResponse> ExportUnsatisfiedReplyOutcome;
                typedef std::future<ExportUnsatisfiedReplyOutcome> ExportUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ExportUnsatisfiedReplyRequest&, ExportUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateQAResponse> GenerateQAOutcome;
                typedef std::future<GenerateQAOutcome> GenerateQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GenerateQARequest&, GenerateQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateQAAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAnswerTypeDataCountResponse> GetAnswerTypeDataCountOutcome;
                typedef std::future<GetAnswerTypeDataCountOutcome> GetAnswerTypeDataCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAnswerTypeDataCountRequest&, GetAnswerTypeDataCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAnswerTypeDataCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppKnowledgeCountResponse> GetAppKnowledgeCountOutcome;
                typedef std::future<GetAppKnowledgeCountOutcome> GetAppKnowledgeCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppKnowledgeCountRequest&, GetAppKnowledgeCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppKnowledgeCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAppSecretResponse> GetAppSecretOutcome;
                typedef std::future<GetAppSecretOutcome> GetAppSecretOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetAppSecretRequest&, GetAppSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAppSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDocPreviewResponse> GetDocPreviewOutcome;
                typedef std::future<GetDocPreviewOutcome> GetDocPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetDocPreviewRequest&, GetDocPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDocPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLikeDataCountResponse> GetLikeDataCountOutcome;
                typedef std::future<GetLikeDataCountOutcome> GetLikeDataCountOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetLikeDataCountRequest&, GetLikeDataCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLikeDataCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMsgRecordResponse> GetMsgRecordOutcome;
                typedef std::future<GetMsgRecordOutcome> GetMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetMsgRecordRequest&, GetMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::GetReconstructDocumentResultResponse> GetReconstructDocumentResultOutcome;
                typedef std::future<GetReconstructDocumentResultOutcome> GetReconstructDocumentResultOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetReconstructDocumentResultRequest&, GetReconstructDocumentResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetReconstructDocumentResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStatusResponse> GetTaskStatusOutcome;
                typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetTaskStatusRequest&, GetTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWsTokenResponse> GetWsTokenOutcome;
                typedef std::future<GetWsTokenOutcome> GetWsTokenOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GetWsTokenRequest&, GetWsTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWsTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupDocResponse> GroupDocOutcome;
                typedef std::future<GroupDocOutcome> GroupDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GroupDocRequest&, GroupDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupDocAsyncHandler;
                typedef Outcome<Core::Error, Model::GroupQAResponse> GroupQAOutcome;
                typedef std::future<GroupQAOutcome> GroupQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::GroupQARequest&, GroupQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GroupQAAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreUnsatisfiedReplyResponse> IgnoreUnsatisfiedReplyOutcome;
                typedef std::future<IgnoreUnsatisfiedReplyOutcome> IgnoreUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::IgnoreUnsatisfiedReplyRequest&, IgnoreUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAppResponse> ListAppOutcome;
                typedef std::future<ListAppOutcome> ListAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppRequest&, ListAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAppCategoryResponse> ListAppCategoryOutcome;
                typedef std::future<ListAppCategoryOutcome> ListAppCategoryOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppCategoryRequest&, ListAppCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAppKnowledgeDetailResponse> ListAppKnowledgeDetailOutcome;
                typedef std::future<ListAppKnowledgeDetailOutcome> ListAppKnowledgeDetailOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAppKnowledgeDetailRequest&, ListAppKnowledgeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAppKnowledgeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAttributeLabelResponse> ListAttributeLabelOutcome;
                typedef std::future<ListAttributeLabelOutcome> ListAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListAttributeLabelRequest&, ListAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDocResponse> ListDocOutcome;
                typedef std::future<ListDocOutcome> ListDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListDocRequest&, ListDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDocCateResponse> ListDocCateOutcome;
                typedef std::future<ListDocCateOutcome> ListDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListDocCateRequest&, ListDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::ListModelResponse> ListModelOutcome;
                typedef std::future<ListModelOutcome> ListModelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListModelRequest&, ListModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListModelAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQAResponse> ListQAOutcome;
                typedef std::future<ListQAOutcome> ListQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQARequest&, ListQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ListQACateResponse> ListQACateOutcome;
                typedef std::future<ListQACateOutcome> ListQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListQACateRequest&, ListQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRejectedQuestionResponse> ListRejectedQuestionOutcome;
                typedef std::future<ListRejectedQuestionOutcome> ListRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListRejectedQuestionRequest&, ListRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::ListRejectedQuestionPreviewResponse> ListRejectedQuestionPreviewOutcome;
                typedef std::future<ListRejectedQuestionPreviewOutcome> ListRejectedQuestionPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListRejectedQuestionPreviewRequest&, ListRejectedQuestionPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListRejectedQuestionPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseResponse> ListReleaseOutcome;
                typedef std::future<ListReleaseOutcome> ListReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseRequest&, ListReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseConfigPreviewResponse> ListReleaseConfigPreviewOutcome;
                typedef std::future<ListReleaseConfigPreviewOutcome> ListReleaseConfigPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseConfigPreviewRequest&, ListReleaseConfigPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseConfigPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseDocPreviewResponse> ListReleaseDocPreviewOutcome;
                typedef std::future<ListReleaseDocPreviewOutcome> ListReleaseDocPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseDocPreviewRequest&, ListReleaseDocPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseDocPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReleaseQAPreviewResponse> ListReleaseQAPreviewOutcome;
                typedef std::future<ListReleaseQAPreviewOutcome> ListReleaseQAPreviewOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListReleaseQAPreviewRequest&, ListReleaseQAPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReleaseQAPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSelectDocResponse> ListSelectDocOutcome;
                typedef std::future<ListSelectDocOutcome> ListSelectDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListSelectDocRequest&, ListSelectDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSelectDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUnsatisfiedReplyResponse> ListUnsatisfiedReplyOutcome;
                typedef std::future<ListUnsatisfiedReplyOutcome> ListUnsatisfiedReplyOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListUnsatisfiedReplyRequest&, ListUnsatisfiedReplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUnsatisfiedReplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ListUsageCallDetailResponse> ListUsageCallDetailOutcome;
                typedef std::future<ListUsageCallDetailOutcome> ListUsageCallDetailOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ListUsageCallDetailRequest&, ListUsageCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUsageCallDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAttributeLabelResponse> ModifyAttributeLabelOutcome;
                typedef std::future<ModifyAttributeLabelOutcome> ModifyAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyAttributeLabelRequest&, ModifyAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocResponse> ModifyDocOutcome;
                typedef std::future<ModifyDocOutcome> ModifyDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocRequest&, ModifyDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocAttrRangeResponse> ModifyDocAttrRangeOutcome;
                typedef std::future<ModifyDocAttrRangeOutcome> ModifyDocAttrRangeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocAttrRangeRequest&, ModifyDocAttrRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocAttrRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocCateResponse> ModifyDocCateOutcome;
                typedef std::future<ModifyDocCateOutcome> ModifyDocCateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyDocCateRequest&, ModifyDocCateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocCateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAResponse> ModifyQAOutcome;
                typedef std::future<ModifyQAOutcome> ModifyQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQARequest&, ModifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAAttrRangeResponse> ModifyQAAttrRangeOutcome;
                typedef std::future<ModifyQAAttrRangeOutcome> ModifyQAAttrRangeOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQAAttrRangeRequest&, ModifyQAAttrRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAAttrRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQACateResponse> ModifyQACateOutcome;
                typedef std::future<ModifyQACateOutcome> ModifyQACateOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyQACateRequest&, ModifyQACateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQACateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRejectedQuestionResponse> ModifyRejectedQuestionOutcome;
                typedef std::future<ModifyRejectedQuestionOutcome> ModifyRejectedQuestionOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::ModifyRejectedQuestionRequest&, ModifyRejectedQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRejectedQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::RateMsgRecordResponse> RateMsgRecordOutcome;
                typedef std::future<RateMsgRecordOutcome> RateMsgRecordOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RateMsgRecordRequest&, RateMsgRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RateMsgRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::RenameDocResponse> RenameDocOutcome;
                typedef std::future<RenameDocOutcome> RenameDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RenameDocRequest&, RenameDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenameDocAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDocAuditResponse> RetryDocAuditOutcome;
                typedef std::future<RetryDocAuditOutcome> RetryDocAuditOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryDocAuditRequest&, RetryDocAuditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDocAuditAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDocParseResponse> RetryDocParseOutcome;
                typedef std::future<RetryDocParseOutcome> RetryDocParseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryDocParseRequest&, RetryDocParseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDocParseAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryReleaseResponse> RetryReleaseOutcome;
                typedef std::future<RetryReleaseOutcome> RetryReleaseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::RetryReleaseRequest&, RetryReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveDocResponse> SaveDocOutcome;
                typedef std::future<SaveDocOutcome> SaveDocOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::SaveDocRequest&, SaveDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveDocAsyncHandler;
                typedef Outcome<Core::Error, Model::StopDocParseResponse> StopDocParseOutcome;
                typedef std::future<StopDocParseOutcome> StopDocParseOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::StopDocParseRequest&, StopDocParseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopDocParseAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadAttributeLabelResponse> UploadAttributeLabelOutcome;
                typedef std::future<UploadAttributeLabelOutcome> UploadAttributeLabelOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::UploadAttributeLabelRequest&, UploadAttributeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadAttributeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyQAResponse> VerifyQAOutcome;
                typedef std::future<VerifyQAOutcome> VerifyQAOutcomeCallable;
                typedef std::function<void(const LkeClient*, const Model::VerifyQARequest&, VerifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyQAAsyncHandler;



                /**
                 *This API is used to check if the label name under an attribute exist.
                 * @param req CheckAttributeLabelExistRequest
                 * @return CheckAttributeLabelExistOutcome
                 */
                CheckAttributeLabelExistOutcome CheckAttributeLabelExist(const Model::CheckAttributeLabelExistRequest &request);
                void CheckAttributeLabelExistAsync(const Model::CheckAttributeLabelExistRequest& request, const CheckAttributeLabelExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAttributeLabelExistOutcomeCallable CheckAttributeLabelExistCallable(const Model::CheckAttributeLabelExistRequest& request);

                /**
                 *This API is used to check attribute label references.
                 * @param req CheckAttributeLabelReferRequest
                 * @return CheckAttributeLabelReferOutcome
                 */
                CheckAttributeLabelReferOutcome CheckAttributeLabelRefer(const Model::CheckAttributeLabelReferRequest &request);
                void CheckAttributeLabelReferAsync(const Model::CheckAttributeLabelReferRequest& request, const CheckAttributeLabelReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAttributeLabelReferOutcomeCallable CheckAttributeLabelReferCallable(const Model::CheckAttributeLabelReferRequest& request);

                /**
                 *This API is used to create knowledge engine applications.
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *This API is used to create attributes.
                 * @param req CreateAttributeLabelRequest
                 * @return CreateAttributeLabelOutcome
                 */
                CreateAttributeLabelOutcome CreateAttributeLabel(const Model::CreateAttributeLabelRequest &request);
                void CreateAttributeLabelAsync(const Model::CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAttributeLabelOutcomeCallable CreateAttributeLabelCallable(const Model::CreateAttributeLabelRequest& request);

                /**
                 *This API is used to create enterprises.
                 * @param req CreateCorpRequest
                 * @return CreateCorpOutcome
                 */
                CreateCorpOutcome CreateCorp(const Model::CreateCorpRequest &request);
                void CreateCorpAsync(const Model::CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCorpOutcomeCallable CreateCorpCallable(const Model::CreateCorpRequest& request);

                /**
                 *This API is used to create doc categories.
                 * @param req CreateDocCateRequest
                 * @return CreateDocCateOutcome
                 */
                CreateDocCateOutcome CreateDocCate(const Model::CreateDocCateRequest &request);
                void CreateDocCateAsync(const Model::CreateDocCateRequest& request, const CreateDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocCateOutcomeCallable CreateDocCateCallable(const Model::CreateDocCateRequest& request);

                /**
                 *This API is used to enter Q&As.
                 * @param req CreateQARequest
                 * @return CreateQAOutcome
                 */
                CreateQAOutcome CreateQA(const Model::CreateQARequest &request);
                void CreateQAAsync(const Model::CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQAOutcomeCallable CreateQACallable(const Model::CreateQARequest& request);

                /**
                 *This API is used to create Q&A categories.
                 * @param req CreateQACateRequest
                 * @return CreateQACateOutcome
                 */
                CreateQACateOutcome CreateQACate(const Model::CreateQACateRequest &request);
                void CreateQACateAsync(const Model::CreateQACateRequest& request, const CreateQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQACateOutcomeCallable CreateQACateCallable(const Model::CreateQACateRequest& request);

                /**
                 *This API is used to initiate requests for this asynchronous API, for initiating document parsing tasks.
Document parsing supports converting images or PDF files into Markdown format files, and can parse content elements including tables, formulas, images, headings, paragraphs, headers, and footers, and intelligently convert the content into reading order.
During the trial period, the QPS limit for a single account is only 1. If you need to access officially, please contact our R&D team.
                 * @param req CreateReconstructDocumentFlowRequest
                 * @return CreateReconstructDocumentFlowOutcome
                 */
                CreateReconstructDocumentFlowOutcome CreateReconstructDocumentFlow(const Model::CreateReconstructDocumentFlowRequest &request);
                void CreateReconstructDocumentFlowAsync(const Model::CreateReconstructDocumentFlowRequest& request, const CreateReconstructDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReconstructDocumentFlowOutcomeCallable CreateReconstructDocumentFlowCallable(const Model::CreateReconstructDocumentFlowRequest& request);

                /**
                 *This API is used to create rejected questions.
                 * @param req CreateRejectedQuestionRequest
                 * @return CreateRejectedQuestionOutcome
                 */
                CreateRejectedQuestionOutcome CreateRejectedQuestion(const Model::CreateRejectedQuestionRequest &request);
                void CreateRejectedQuestionAsync(const Model::CreateRejectedQuestionRequest& request, const CreateRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRejectedQuestionOutcomeCallable CreateRejectedQuestionCallable(const Model::CreateRejectedQuestionRequest& request);

                /**
                 *This API is used to create a release.
                 * @param req CreateReleaseRequest
                 * @return CreateReleaseOutcome
                 */
                CreateReleaseOutcome CreateRelease(const Model::CreateReleaseRequest &request);
                void CreateReleaseAsync(const Model::CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseOutcomeCallable CreateReleaseCallable(const Model::CreateReleaseRequest& request);

                /**
                 *This API is used to delete applications.
                 * @param req DeleteAppRequest
                 * @return DeleteAppOutcome
                 */
                DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest &request);
                void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request);

                /**
                 *This API is used to delete attribute labels.
                 * @param req DeleteAttributeLabelRequest
                 * @return DeleteAttributeLabelOutcome
                 */
                DeleteAttributeLabelOutcome DeleteAttributeLabel(const Model::DeleteAttributeLabelRequest &request);
                void DeleteAttributeLabelAsync(const Model::DeleteAttributeLabelRequest& request, const DeleteAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttributeLabelOutcomeCallable DeleteAttributeLabelCallable(const Model::DeleteAttributeLabelRequest& request);

                /**
                 *This API is used to delete documents.
                 * @param req DeleteDocRequest
                 * @return DeleteDocOutcome
                 */
                DeleteDocOutcome DeleteDoc(const Model::DeleteDocRequest &request);
                void DeleteDocAsync(const Model::DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocOutcomeCallable DeleteDocCallable(const Model::DeleteDocRequest& request);

                /**
                 *This API is used to delete Doc categories.
                 * @param req DeleteDocCateRequest
                 * @return DeleteDocCateOutcome
                 */
                DeleteDocCateOutcome DeleteDocCate(const Model::DeleteDocCateRequest &request);
                void DeleteDocCateAsync(const Model::DeleteDocCateRequest& request, const DeleteDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocCateOutcomeCallable DeleteDocCateCallable(const Model::DeleteDocCateRequest& request);

                /**
                 *This API is used to delete Q&As.
                 * @param req DeleteQARequest
                 * @return DeleteQAOutcome
                 */
                DeleteQAOutcome DeleteQA(const Model::DeleteQARequest &request);
                void DeleteQAAsync(const Model::DeleteQARequest& request, const DeleteQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQAOutcomeCallable DeleteQACallable(const Model::DeleteQARequest& request);

                /**
                 *This API is used to delete categories.
                 * @param req DeleteQACateRequest
                 * @return DeleteQACateOutcome
                 */
                DeleteQACateOutcome DeleteQACate(const Model::DeleteQACateRequest &request);
                void DeleteQACateAsync(const Model::DeleteQACateRequest& request, const DeleteQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQACateOutcomeCallable DeleteQACateCallable(const Model::DeleteQACateRequest& request);

                /**
                 *This API is used to delete rejected questions.
                 * @param req DeleteRejectedQuestionRequest
                 * @return DeleteRejectedQuestionOutcome
                 */
                DeleteRejectedQuestionOutcome DeleteRejectedQuestion(const Model::DeleteRejectedQuestionRequest &request);
                void DeleteRejectedQuestionAsync(const Model::DeleteRejectedQuestionRequest& request, const DeleteRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRejectedQuestionOutcomeCallable DeleteRejectedQuestionCallable(const Model::DeleteRejectedQuestionRequest& request);

                /**
                 *This API is used to obtain application details under the corporate.
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *This API is used to query attribute label details.
                 * @param req DescribeAttributeLabelRequest
                 * @return DescribeAttributeLabelOutcome
                 */
                DescribeAttributeLabelOutcome DescribeAttributeLabel(const Model::DescribeAttributeLabelRequest &request);
                void DescribeAttributeLabelAsync(const Model::DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttributeLabelOutcomeCallable DescribeAttributeLabelCallable(const Model::DescribeAttributeLabelRequest& request);

                /**
                 *This API is used to show line chart of API calls.
                 * @param req DescribeCallStatsGraphRequest
                 * @return DescribeCallStatsGraphOutcome
                 */
                DescribeCallStatsGraphOutcome DescribeCallStatsGraph(const Model::DescribeCallStatsGraphRequest &request);
                void DescribeCallStatsGraphAsync(const Model::DescribeCallStatsGraphRequest& request, const DescribeCallStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallStatsGraphOutcomeCallable DescribeCallStatsGraphCallable(const Model::DescribeCallStatsGraphRequest& request);

                /**
                 *This API is used to response to concurrent calls.
                 * @param req DescribeConcurrencyUsageRequest
                 * @return DescribeConcurrencyUsageOutcome
                 */
                DescribeConcurrencyUsageOutcome DescribeConcurrencyUsage(const Model::DescribeConcurrencyUsageRequest &request);
                void DescribeConcurrencyUsageAsync(const Model::DescribeConcurrencyUsageRequest& request, const DescribeConcurrencyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrencyUsageOutcomeCallable DescribeConcurrencyUsageCallable(const Model::DescribeConcurrencyUsageRequest& request);

                /**
                 *This API is used to show line chart of concurrent calls.
                 * @param req DescribeConcurrencyUsageGraphRequest
                 * @return DescribeConcurrencyUsageGraphOutcome
                 */
                DescribeConcurrencyUsageGraphOutcome DescribeConcurrencyUsageGraph(const Model::DescribeConcurrencyUsageGraphRequest &request);
                void DescribeConcurrencyUsageGraphAsync(const Model::DescribeConcurrencyUsageGraphRequest& request, const DescribeConcurrencyUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrencyUsageGraphOutcomeCallable DescribeConcurrencyUsageGraphCallable(const Model::DescribeConcurrencyUsageGraphRequest& request);

                /**
                 *This API is used to query corporate details.
                 * @param req DescribeCorpRequest
                 * @return DescribeCorpOutcome
                 */
                DescribeCorpOutcome DescribeCorp(const Model::DescribeCorpRequest &request);
                void DescribeCorpAsync(const Model::DescribeCorpRequest& request, const DescribeCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCorpOutcomeCallable DescribeCorpCallable(const Model::DescribeCorpRequest& request);

                /**
                 *This API is used to query document details.
                 * @param req DescribeDocRequest
                 * @return DescribeDocOutcome
                 */
                DescribeDocOutcome DescribeDoc(const Model::DescribeDocRequest &request);
                void DescribeDocAsync(const Model::DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocOutcomeCallable DescribeDocCallable(const Model::DescribeDocRequest& request);

                /**
                 *This API is used to query the knowledge library usage.
                 * @param req DescribeKnowledgeUsageRequest
                 * @return DescribeKnowledgeUsageOutcome
                 */
                DescribeKnowledgeUsageOutcome DescribeKnowledgeUsage(const Model::DescribeKnowledgeUsageRequest &request);
                void DescribeKnowledgeUsageAsync(const Model::DescribeKnowledgeUsageRequest& request, const DescribeKnowledgeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeUsageOutcomeCallable DescribeKnowledgeUsageCallable(const Model::DescribeKnowledgeUsageRequest& request);

                /**
                 *This API is used to query pie chart of the enterprise knowledge base capacity .
                 * @param req DescribeKnowledgeUsagePieGraphRequest
                 * @return DescribeKnowledgeUsagePieGraphOutcome
                 */
                DescribeKnowledgeUsagePieGraphOutcome DescribeKnowledgeUsagePieGraph(const Model::DescribeKnowledgeUsagePieGraphRequest &request);
                void DescribeKnowledgeUsagePieGraphAsync(const Model::DescribeKnowledgeUsagePieGraphRequest& request, const DescribeKnowledgeUsagePieGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeUsagePieGraphOutcomeCallable DescribeKnowledgeUsagePieGraphCallable(const Model::DescribeKnowledgeUsagePieGraphRequest& request);

                /**
                 *This API is used to query Q&A details.
                 * @param req DescribeQARequest
                 * @return DescribeQAOutcome
                 */
                DescribeQAOutcome DescribeQA(const Model::DescribeQARequest &request);
                void DescribeQAAsync(const Model::DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQAOutcomeCallable DescribeQACallable(const Model::DescribeQARequest& request);

                /**
                 *This API is used to get the reference source details list.
                 * @param req DescribeReferRequest
                 * @return DescribeReferOutcome
                 */
                DescribeReferOutcome DescribeRefer(const Model::DescribeReferRequest &request);
                void DescribeReferAsync(const Model::DescribeReferRequest& request, const DescribeReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReferOutcomeCallable DescribeReferCallable(const Model::DescribeReferRequest& request);

                /**
                 *This API is used to query release details.
                 * @param req DescribeReleaseRequest
                 * @return DescribeReleaseOutcome
                 */
                DescribeReleaseOutcome DescribeRelease(const Model::DescribeReleaseRequest &request);
                void DescribeReleaseAsync(const Model::DescribeReleaseRequest& request, const DescribeReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseOutcomeCallable DescribeReleaseCallable(const Model::DescribeReleaseRequest& request);

                /**
                 *This API is used to pull the release button status and last release time.
                 * @param req DescribeReleaseInfoRequest
                 * @return DescribeReleaseInfoOutcome
                 */
                DescribeReleaseInfoOutcome DescribeReleaseInfo(const Model::DescribeReleaseInfoRequest &request);
                void DescribeReleaseInfoAsync(const Model::DescribeReleaseInfoRequest& request, const DescribeReleaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseInfoOutcomeCallable DescribeReleaseInfoCallable(const Model::DescribeReleaseInfoRequest& request);

                /**
                 *This API is used to get application business ID through appKey.
                 * @param req DescribeRobotBizIDByAppKeyRequest
                 * @return DescribeRobotBizIDByAppKeyOutcome
                 */
                DescribeRobotBizIDByAppKeyOutcome DescribeRobotBizIDByAppKey(const Model::DescribeRobotBizIDByAppKeyRequest &request);
                void DescribeRobotBizIDByAppKeyAsync(const Model::DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRobotBizIDByAppKeyOutcomeCallable DescribeRobotBizIDByAppKeyCallable(const Model::DescribeRobotBizIDByAppKeyRequest& request);

                /**
                 *This API is used to query line chart of search service calls.
                 * @param req DescribeSearchStatsGraphRequest
                 * @return DescribeSearchStatsGraphOutcome
                 */
                DescribeSearchStatsGraphOutcome DescribeSearchStatsGraph(const Model::DescribeSearchStatsGraphRequest &request);
                void DescribeSearchStatsGraphAsync(const Model::DescribeSearchStatsGraphRequest& request, const DescribeSearchStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchStatsGraphOutcomeCallable DescribeSearchStatsGraphCallable(const Model::DescribeSearchStatsGraphRequest& request);

                /**
                 *This API is used to get fragment details.
                 * @param req DescribeSegmentsRequest
                 * @return DescribeSegmentsOutcome
                 */
                DescribeSegmentsOutcome DescribeSegments(const Model::DescribeSegmentsRequest &request);
                void DescribeSegmentsAsync(const Model::DescribeSegmentsRequest& request, const DescribeSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSegmentsOutcomeCallable DescribeSegmentsCallable(const Model::DescribeSegmentsRequest& request);

                /**
                 *This API is used to get the temporary key for file upload.
                 * @param req DescribeStorageCredentialRequest
                 * @return DescribeStorageCredentialOutcome
                 */
                DescribeStorageCredentialOutcome DescribeStorageCredential(const Model::DescribeStorageCredentialRequest &request);
                void DescribeStorageCredentialAsync(const Model::DescribeStorageCredentialRequest& request, const DescribeStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageCredentialOutcomeCallable DescribeStorageCredentialCallable(const Model::DescribeStorageCredentialRequest& request);

                /**
                 *This API is used to query API call token details.
                 * @param req DescribeTokenUsageRequest
                 * @return DescribeTokenUsageOutcome
                 */
                DescribeTokenUsageOutcome DescribeTokenUsage(const Model::DescribeTokenUsageRequest &request);
                void DescribeTokenUsageAsync(const Model::DescribeTokenUsageRequest& request, const DescribeTokenUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenUsageOutcomeCallable DescribeTokenUsageCallable(const Model::DescribeTokenUsageRequest& request);

                /**
                 *This API is used to show API call token line chart.
                 * @param req DescribeTokenUsageGraphRequest
                 * @return DescribeTokenUsageGraphOutcome
                 */
                DescribeTokenUsageGraphOutcome DescribeTokenUsageGraph(const Model::DescribeTokenUsageGraphRequest &request);
                void DescribeTokenUsageGraphAsync(const Model::DescribeTokenUsageGraphRequest& request, const DescribeTokenUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenUsageGraphOutcomeCallable DescribeTokenUsageGraphCallable(const Model::DescribeTokenUsageGraphRequest& request);

                /**
                 *This API is used to get the context of dissatisfied responses.
                 * @param req DescribeUnsatisfiedReplyContextRequest
                 * @return DescribeUnsatisfiedReplyContextOutcome
                 */
                DescribeUnsatisfiedReplyContextOutcome DescribeUnsatisfiedReplyContext(const Model::DescribeUnsatisfiedReplyContextRequest &request);
                void DescribeUnsatisfiedReplyContextAsync(const Model::DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnsatisfiedReplyContextOutcomeCallable DescribeUnsatisfiedReplyContextCallable(const Model::DescribeUnsatisfiedReplyContextRequest& request);

                /**
                 *This API is used to export attribute labels.
                 * @param req ExportAttributeLabelRequest
                 * @return ExportAttributeLabelOutcome
                 */
                ExportAttributeLabelOutcome ExportAttributeLabel(const Model::ExportAttributeLabelRequest &request);
                void ExportAttributeLabelAsync(const Model::ExportAttributeLabelRequest& request, const ExportAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttributeLabelOutcomeCallable ExportAttributeLabelCallable(const Model::ExportAttributeLabelRequest& request);

                /**
                 *This API is used to export Q&A list.
                 * @param req ExportQAListRequest
                 * @return ExportQAListOutcome
                 */
                ExportQAListOutcome ExportQAList(const Model::ExportQAListRequest &request);
                void ExportQAListAsync(const Model::ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportQAListOutcomeCallable ExportQAListCallable(const Model::ExportQAListRequest& request);

                /**
                 *This API is used to export dissatisfied responses.
                 * @param req ExportUnsatisfiedReplyRequest
                 * @return ExportUnsatisfiedReplyOutcome
                 */
                ExportUnsatisfiedReplyOutcome ExportUnsatisfiedReply(const Model::ExportUnsatisfiedReplyRequest &request);
                void ExportUnsatisfiedReplyAsync(const Model::ExportUnsatisfiedReplyRequest& request, const ExportUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportUnsatisfiedReplyOutcomeCallable ExportUnsatisfiedReplyCallable(const Model::ExportUnsatisfiedReplyRequest& request);

                /**
                 *This API is used to generate Q%A from document.
                 * @param req GenerateQARequest
                 * @return GenerateQAOutcome
                 */
                GenerateQAOutcome GenerateQA(const Model::GenerateQARequest &request);
                void GenerateQAAsync(const Model::GenerateQARequest& request, const GenerateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateQAOutcomeCallable GenerateQACallable(const Model::GenerateQARequest& request);

                /**
                 *This API is used to get response type data statistics.
                 * @param req GetAnswerTypeDataCountRequest
                 * @return GetAnswerTypeDataCountOutcome
                 */
                GetAnswerTypeDataCountOutcome GetAnswerTypeDataCount(const Model::GetAnswerTypeDataCountRequest &request);
                void GetAnswerTypeDataCountAsync(const Model::GetAnswerTypeDataCountRequest& request, const GetAnswerTypeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAnswerTypeDataCountOutcomeCallable GetAnswerTypeDataCountCallable(const Model::GetAnswerTypeDataCountRequest& request);

                /**
                 *This API is used to get a model list.
                 * @param req GetAppKnowledgeCountRequest
                 * @return GetAppKnowledgeCountOutcome
                 */
                GetAppKnowledgeCountOutcome GetAppKnowledgeCount(const Model::GetAppKnowledgeCountRequest &request);
                void GetAppKnowledgeCountAsync(const Model::GetAppKnowledgeCountRequest& request, const GetAppKnowledgeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAppKnowledgeCountOutcomeCallable GetAppKnowledgeCountCallable(const Model::GetAppKnowledgeCountRequest& request);

                /**
                 *This API is used to get application secret keys.
                 * @param req GetAppSecretRequest
                 * @return GetAppSecretOutcome
                 */
                GetAppSecretOutcome GetAppSecret(const Model::GetAppSecretRequest &request);
                void GetAppSecretAsync(const Model::GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAppSecretOutcomeCallable GetAppSecretCallable(const Model::GetAppSecretRequest& request);

                /**
                 *This API is used to get document preview information.
                 * @param req GetDocPreviewRequest
                 * @return GetDocPreviewOutcome
                 */
                GetDocPreviewOutcome GetDocPreview(const Model::GetDocPreviewRequest &request);
                void GetDocPreviewAsync(const Model::GetDocPreviewRequest& request, const GetDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDocPreviewOutcomeCallable GetDocPreviewCallable(const Model::GetDocPreviewRequest& request);

                /**
                 *This API is used to get likes and dislikes data statistics.
                 * @param req GetLikeDataCountRequest
                 * @return GetLikeDataCountOutcome
                 */
                GetLikeDataCountOutcome GetLikeDataCount(const Model::GetLikeDataCountRequest &request);
                void GetLikeDataCountAsync(const Model::GetLikeDataCountRequest& request, const GetLikeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLikeDataCountOutcomeCallable GetLikeDataCountCallable(const Model::GetLikeDataCountRequest& request);

                /**
                 *This API is used to obtain chat history based on the session ID (only historical session data within the past 180 days will be retained).
                 * @param req GetMsgRecordRequest
                 * @return GetMsgRecordOutcome
                 */
                GetMsgRecordOutcome GetMsgRecord(const Model::GetMsgRecordRequest &request);
                void GetMsgRecordAsync(const Model::GetMsgRecordRequest& request, const GetMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMsgRecordOutcomeCallable GetMsgRecordCallable(const Model::GetMsgRecordRequest& request);

                /**
                 *This is an asynchronous APIs, used to get document parsing task results.
                 * @param req GetReconstructDocumentResultRequest
                 * @return GetReconstructDocumentResultOutcome
                 */
                GetReconstructDocumentResultOutcome GetReconstructDocumentResult(const Model::GetReconstructDocumentResultRequest &request);
                void GetReconstructDocumentResultAsync(const Model::GetReconstructDocumentResultRequest& request, const GetReconstructDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetReconstructDocumentResultOutcomeCallable GetReconstructDocumentResultCallable(const Model::GetReconstructDocumentResultRequest& request);

                /**
                 *This API is used to get the task status.
                 * @param req GetTaskStatusRequest
                 * @return GetTaskStatusOutcome
                 */
                GetTaskStatusOutcome GetTaskStatus(const Model::GetTaskStatusRequest &request);
                void GetTaskStatusAsync(const Model::GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskStatusOutcomeCallable GetTaskStatusCallable(const Model::GetTaskStatusRequest& request);

                /**
                 *This API is used to get ws token.
                 * @param req GetWsTokenRequest
                 * @return GetWsTokenOutcome
                 */
                GetWsTokenOutcome GetWsToken(const Model::GetWsTokenRequest &request);
                void GetWsTokenAsync(const Model::GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWsTokenOutcomeCallable GetWsTokenCallable(const Model::GetWsTokenRequest& request);

                /**
                 *DocGroup.
                 * @param req GroupDocRequest
                 * @return GroupDocOutcome
                 */
                GroupDocOutcome GroupDoc(const Model::GroupDocRequest &request);
                void GroupDocAsync(const Model::GroupDocRequest& request, const GroupDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupDocOutcomeCallable GroupDocCallable(const Model::GroupDocRequest& request);

                /**
                 *Q&A Group.
                 * @param req GroupQARequest
                 * @return GroupQAOutcome
                 */
                GroupQAOutcome GroupQA(const Model::GroupQARequest &request);
                void GroupQAAsync(const Model::GroupQARequest& request, const GroupQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GroupQAOutcomeCallable GroupQACallable(const Model::GroupQARequest& request);

                /**
                 *This API is used to ignore dissatisfied responses.
                 * @param req IgnoreUnsatisfiedReplyRequest
                 * @return IgnoreUnsatisfiedReplyOutcome
                 */
                IgnoreUnsatisfiedReplyOutcome IgnoreUnsatisfiedReply(const Model::IgnoreUnsatisfiedReplyRequest &request);
                void IgnoreUnsatisfiedReplyAsync(const Model::IgnoreUnsatisfiedReplyRequest& request, const IgnoreUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreUnsatisfiedReplyOutcomeCallable IgnoreUnsatisfiedReplyCallable(const Model::IgnoreUnsatisfiedReplyRequest& request);

                /**
                 *This API is used to get the application list under the corporate.
                 * @param req ListAppRequest
                 * @return ListAppOutcome
                 */
                ListAppOutcome ListApp(const Model::ListAppRequest &request);
                void ListAppAsync(const Model::ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppOutcomeCallable ListAppCallable(const Model::ListAppRequest& request);

                /**
                 *This API is used to get list of application types.
                 * @param req ListAppCategoryRequest
                 * @return ListAppCategoryOutcome
                 */
                ListAppCategoryOutcome ListAppCategory(const Model::ListAppCategoryRequest &request);
                void ListAppCategoryAsync(const Model::ListAppCategoryRequest& request, const ListAppCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppCategoryOutcomeCallable ListAppCategoryCallable(const Model::ListAppCategoryRequest& request);

                /**
                 *This API is used to query the knowledge base capacity details in a list.
                 * @param req ListAppKnowledgeDetailRequest
                 * @return ListAppKnowledgeDetailOutcome
                 */
                ListAppKnowledgeDetailOutcome ListAppKnowledgeDetail(const Model::ListAppKnowledgeDetailRequest &request);
                void ListAppKnowledgeDetailAsync(const Model::ListAppKnowledgeDetailRequest& request, const ListAppKnowledgeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAppKnowledgeDetailOutcomeCallable ListAppKnowledgeDetailCallable(const Model::ListAppKnowledgeDetailRequest& request);

                /**
                 *This API is used to query attribute label lists.
                 * @param req ListAttributeLabelRequest
                 * @return ListAttributeLabelOutcome
                 */
                ListAttributeLabelOutcome ListAttributeLabel(const Model::ListAttributeLabelRequest &request);
                void ListAttributeLabelAsync(const Model::ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAttributeLabelOutcomeCallable ListAttributeLabelCallable(const Model::ListAttributeLabelRequest& request);

                /**
                 *This API is used to get document list.
                 * @param req ListDocRequest
                 * @return ListDocOutcome
                 */
                ListDocOutcome ListDoc(const Model::ListDocRequest &request);
                void ListDocAsync(const Model::ListDocRequest& request, const ListDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDocOutcomeCallable ListDocCallable(const Model::ListDocRequest& request);

                /**
                 *This API is used to get document category.
                 * @param req ListDocCateRequest
                 * @return ListDocCateOutcome
                 */
                ListDocCateOutcome ListDocCate(const Model::ListDocCateRequest &request);
                void ListDocCateAsync(const Model::ListDocCateRequest& request, const ListDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDocCateOutcomeCallable ListDocCateCallable(const Model::ListDocCateRequest& request);

                /**
                 *This API is used to get the model list.
                 * @param req ListModelRequest
                 * @return ListModelOutcome
                 */
                ListModelOutcome ListModel(const Model::ListModelRequest &request);
                void ListModelAsync(const Model::ListModelRequest& request, const ListModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListModelOutcomeCallable ListModelCallable(const Model::ListModelRequest& request);

                /**
                 *This API is used to query Q&A lists.
                 * @param req ListQARequest
                 * @return ListQAOutcome
                 */
                ListQAOutcome ListQA(const Model::ListQARequest &request);
                void ListQAAsync(const Model::ListQARequest& request, const ListQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQAOutcomeCallable ListQACallable(const Model::ListQARequest& request);

                /**
                 *This API is used to get Q&A categories.
                 * @param req ListQACateRequest
                 * @return ListQACateOutcome
                 */
                ListQACateOutcome ListQACate(const Model::ListQACateRequest &request);
                void ListQACateAsync(const Model::ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListQACateOutcomeCallable ListQACateCallable(const Model::ListQACateRequest& request);

                /**
                 *This API is used to get rejected questions.
                 * @param req ListRejectedQuestionRequest
                 * @return ListRejectedQuestionOutcome
                 */
                ListRejectedQuestionOutcome ListRejectedQuestion(const Model::ListRejectedQuestionRequest &request);
                void ListRejectedQuestionAsync(const Model::ListRejectedQuestionRequest& request, const ListRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRejectedQuestionOutcomeCallable ListRejectedQuestionCallable(const Model::ListRejectedQuestionRequest& request);

                /**
                 *This API is used to release a preview of rejected questions.
                 * @param req ListRejectedQuestionPreviewRequest
                 * @return ListRejectedQuestionPreviewOutcome
                 */
                ListRejectedQuestionPreviewOutcome ListRejectedQuestionPreview(const Model::ListRejectedQuestionPreviewRequest &request);
                void ListRejectedQuestionPreviewAsync(const Model::ListRejectedQuestionPreviewRequest& request, const ListRejectedQuestionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListRejectedQuestionPreviewOutcomeCallable ListRejectedQuestionPreviewCallable(const Model::ListRejectedQuestionPreviewRequest& request);

                /**
                 *This API is used to get the release list.
                 * @param req ListReleaseRequest
                 * @return ListReleaseOutcome
                 */
                ListReleaseOutcome ListRelease(const Model::ListReleaseRequest &request);
                void ListReleaseAsync(const Model::ListReleaseRequest& request, const ListReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseOutcomeCallable ListReleaseCallable(const Model::ListReleaseRequest& request);

                /**
                 *This API is used to preview the release configuration items.
                 * @param req ListReleaseConfigPreviewRequest
                 * @return ListReleaseConfigPreviewOutcome
                 */
                ListReleaseConfigPreviewOutcome ListReleaseConfigPreview(const Model::ListReleaseConfigPreviewRequest &request);
                void ListReleaseConfigPreviewAsync(const Model::ListReleaseConfigPreviewRequest& request, const ListReleaseConfigPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseConfigPreviewOutcomeCallable ListReleaseConfigPreviewCallable(const Model::ListReleaseConfigPreviewRequest& request);

                /**
                 *This API is used to preview released documents.
                 * @param req ListReleaseDocPreviewRequest
                 * @return ListReleaseDocPreviewOutcome
                 */
                ListReleaseDocPreviewOutcome ListReleaseDocPreview(const Model::ListReleaseDocPreviewRequest &request);
                void ListReleaseDocPreviewAsync(const Model::ListReleaseDocPreviewRequest& request, const ListReleaseDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseDocPreviewOutcomeCallable ListReleaseDocPreviewCallable(const Model::ListReleaseDocPreviewRequest& request);

                /**
                 *List of documents.
                 * @param req ListReleaseQAPreviewRequest
                 * @return ListReleaseQAPreviewOutcome
                 */
                ListReleaseQAPreviewOutcome ListReleaseQAPreview(const Model::ListReleaseQAPreviewRequest &request);
                void ListReleaseQAPreviewAsync(const Model::ListReleaseQAPreviewRequest& request, const ListReleaseQAPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReleaseQAPreviewOutcomeCallable ListReleaseQAPreviewCallable(const Model::ListReleaseQAPreviewRequest& request);

                /**
                 *This API is used to get account information.
                 * @param req ListSelectDocRequest
                 * @return ListSelectDocOutcome
                 */
                ListSelectDocOutcome ListSelectDoc(const Model::ListSelectDocRequest &request);
                void ListSelectDocAsync(const Model::ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSelectDocOutcomeCallable ListSelectDocCallable(const Model::ListSelectDocRequest& request);

                /**
                 *This API is used to query a list of dissatisfied responses.
                 * @param req ListUnsatisfiedReplyRequest
                 * @return ListUnsatisfiedReplyOutcome
                 */
                ListUnsatisfiedReplyOutcome ListUnsatisfiedReply(const Model::ListUnsatisfiedReplyRequest &request);
                void ListUnsatisfiedReplyAsync(const Model::ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUnsatisfiedReplyOutcomeCallable ListUnsatisfiedReplyCallable(const Model::ListUnsatisfiedReplyRequest& request);

                /**
                 *This API is used to query single call details in a list.
                 * @param req ListUsageCallDetailRequest
                 * @return ListUsageCallDetailOutcome
                 */
                ListUsageCallDetailOutcome ListUsageCallDetail(const Model::ListUsageCallDetailRequest &request);
                void ListUsageCallDetailAsync(const Model::ListUsageCallDetailRequest& request, const ListUsageCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUsageCallDetailOutcomeCallable ListUsageCallDetailCallable(const Model::ListUsageCallDetailRequest& request);

                /**
                 *This API is used to modify application request structure.
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *This API is used to edit attribute labels.
                 * @param req ModifyAttributeLabelRequest
                 * @return ModifyAttributeLabelOutcome
                 */
                ModifyAttributeLabelOutcome ModifyAttributeLabel(const Model::ModifyAttributeLabelRequest &request);
                void ModifyAttributeLabelAsync(const Model::ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAttributeLabelOutcomeCallable ModifyAttributeLabelCallable(const Model::ModifyAttributeLabelRequest& request);

                /**
                 *This API is used to modify documents.
                 * @param req ModifyDocRequest
                 * @return ModifyDocOutcome
                 */
                ModifyDocOutcome ModifyDoc(const Model::ModifyDocRequest &request);
                void ModifyDocAsync(const Model::ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocOutcomeCallable ModifyDocCallable(const Model::ModifyDocRequest& request);

                /**
                 *This API is used to modify applicable scope of the document in batches.
                 * @param req ModifyDocAttrRangeRequest
                 * @return ModifyDocAttrRangeOutcome
                 */
                ModifyDocAttrRangeOutcome ModifyDocAttrRange(const Model::ModifyDocAttrRangeRequest &request);
                void ModifyDocAttrRangeAsync(const Model::ModifyDocAttrRangeRequest& request, const ModifyDocAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocAttrRangeOutcomeCallable ModifyDocAttrRangeCallable(const Model::ModifyDocAttrRangeRequest& request);

                /**
                 *This API is used to modify Doc categories.
                 * @param req ModifyDocCateRequest
                 * @return ModifyDocCateOutcome
                 */
                ModifyDocCateOutcome ModifyDocCate(const Model::ModifyDocCateRequest &request);
                void ModifyDocCateAsync(const Model::ModifyDocCateRequest& request, const ModifyDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocCateOutcomeCallable ModifyDocCateCallable(const Model::ModifyDocCateRequest& request);

                /**
                 *This API is used to update Q&As.
                 * @param req ModifyQARequest
                 * @return ModifyQAOutcome
                 */
                ModifyQAOutcome ModifyQA(const Model::ModifyQARequest &request);
                void ModifyQAAsync(const Model::ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAOutcomeCallable ModifyQACallable(const Model::ModifyQARequest& request);

                /**
                 *This API is used to modify Q&A applicable scope in batches.
                 * @param req ModifyQAAttrRangeRequest
                 * @return ModifyQAAttrRangeOutcome
                 */
                ModifyQAAttrRangeOutcome ModifyQAAttrRange(const Model::ModifyQAAttrRangeRequest &request);
                void ModifyQAAttrRangeAsync(const Model::ModifyQAAttrRangeRequest& request, const ModifyQAAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAAttrRangeOutcomeCallable ModifyQAAttrRangeCallable(const Model::ModifyQAAttrRangeRequest& request);

                /**
                 *This API is used to modify Q&A categories.
                 * @param req ModifyQACateRequest
                 * @return ModifyQACateOutcome
                 */
                ModifyQACateOutcome ModifyQACate(const Model::ModifyQACateRequest &request);
                void ModifyQACateAsync(const Model::ModifyQACateRequest& request, const ModifyQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQACateOutcomeCallable ModifyQACateCallable(const Model::ModifyQACateRequest& request);

                /**
                 *This API is used to modify rejected questions.
                 * @param req ModifyRejectedQuestionRequest
                 * @return ModifyRejectedQuestionOutcome
                 */
                ModifyRejectedQuestionOutcome ModifyRejectedQuestion(const Model::ModifyRejectedQuestionRequest &request);
                void ModifyRejectedQuestionAsync(const Model::ModifyRejectedQuestionRequest& request, const ModifyRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRejectedQuestionOutcomeCallable ModifyRejectedQuestionCallable(const Model::ModifyRejectedQuestionRequest& request);

                /**
                 *This API is used to show messages for likes and dislikes.
                 * @param req RateMsgRecordRequest
                 * @return RateMsgRecordOutcome
                 */
                RateMsgRecordOutcome RateMsgRecord(const Model::RateMsgRecordRequest &request);
                void RateMsgRecordAsync(const Model::RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RateMsgRecordOutcomeCallable RateMsgRecordCallable(const Model::RateMsgRecordRequest& request);

                /**
                 *This API is used to rename a document.
                 * @param req RenameDocRequest
                 * @return RenameDocOutcome
                 */
                RenameDocOutcome RenameDoc(const Model::RenameDocRequest &request);
                void RenameDocAsync(const Model::RenameDocRequest& request, const RenameDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenameDocOutcomeCallable RenameDocCallable(const Model::RenameDocRequest& request);

                /**
                 *This API is used to retry document parsing.
                 * @param req RetryDocAuditRequest
                 * @return RetryDocAuditOutcome
                 */
                RetryDocAuditOutcome RetryDocAudit(const Model::RetryDocAuditRequest &request);
                void RetryDocAuditAsync(const Model::RetryDocAuditRequest& request, const RetryDocAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDocAuditOutcomeCallable RetryDocAuditCallable(const Model::RetryDocAuditRequest& request);

                /**
                 *This API is used to retry document parsing.
                 * @param req RetryDocParseRequest
                 * @return RetryDocParseOutcome
                 */
                RetryDocParseOutcome RetryDocParse(const Model::RetryDocParseRequest &request);
                void RetryDocParseAsync(const Model::RetryDocParseRequest& request, const RetryDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDocParseOutcomeCallable RetryDocParseCallable(const Model::RetryDocParseRequest& request);

                /**
                 *This API is used to retry after release suspension.
                 * @param req RetryReleaseRequest
                 * @return RetryReleaseOutcome
                 */
                RetryReleaseOutcome RetryRelease(const Model::RetryReleaseRequest &request);
                void RetryReleaseAsync(const Model::RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryReleaseOutcomeCallable RetryReleaseCallable(const Model::RetryReleaseRequest& request);

                /**
                 *This API is used to save a knowledge base document Q&As.
Three steps to store a file in the knowledge library of the application: 
1. Obtain a temporary key. For more information, see [API Documentation](https://cloud.tencent.com/document/product/1759/105050). Different parameter combinations of the temporary key have different permissions. For more information, see [Tencent Cloud Agent Development Platform/TCADP COS Guide](https://cloud.tencent.com/document/product/1759/116238). 
2. Call the COS storage API provided by Tencent Cloud to store the file in the COS of TCADP. For details, see [COS SDK Overview](https://cloud.tencent.com/document/product/436/6474). Note that the temporary key method is used to operate COS. 
3. Call this API to store the basic information of the file in TCADP. 
For the above steps, see [Documentation](https://cloud.tencent.com/document/product/1759/108903). At the end of the documentation, there is a [code demo](https://cloud.tencent.com/document/product/1759/108903#demo), which can be used as a reference.
                 * @param req SaveDocRequest
                 * @return SaveDocOutcome
                 */
                SaveDocOutcome SaveDoc(const Model::SaveDocRequest &request);
                void SaveDocAsync(const Model::SaveDocRequest& request, const SaveDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveDocOutcomeCallable SaveDocCallable(const Model::SaveDocRequest& request);

                /**
                 *This API is used to terminate document parsing.
                 * @param req StopDocParseRequest
                 * @return StopDocParseOutcome
                 */
                StopDocParseOutcome StopDocParse(const Model::StopDocParseRequest &request);
                void StopDocParseAsync(const Model::StopDocParseRequest& request, const StopDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopDocParseOutcomeCallable StopDocParseCallable(const Model::StopDocParseRequest& request);

                /**
                 *This API is used to upload and import attribute labels.
                 * @param req UploadAttributeLabelRequest
                 * @return UploadAttributeLabelOutcome
                 */
                UploadAttributeLabelOutcome UploadAttributeLabel(const Model::UploadAttributeLabelRequest &request);
                void UploadAttributeLabelAsync(const Model::UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadAttributeLabelOutcomeCallable UploadAttributeLabelCallable(const Model::UploadAttributeLabelRequest& request);

                /**
                 *This API is used to verify Q&A.
                 * @param req VerifyQARequest
                 * @return VerifyQAOutcome
                 */
                VerifyQAOutcome VerifyQA(const Model::VerifyQARequest &request);
                void VerifyQAAsync(const Model::VerifyQARequest& request, const VerifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyQAOutcomeCallable VerifyQACallable(const Model::VerifyQARequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_LKECLIENT_H_
