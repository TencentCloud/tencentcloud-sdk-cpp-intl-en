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

#ifndef TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
#define TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/adp/v20260520/model/CallMCPToolRequest.h>
#include <tencentcloud/adp/v20260520/model/CallMCPToolResponse.h>
#include <tencentcloud/adp/v20260520/model/CheckLabelRequest.h>
#include <tencentcloud/adp/v20260520/model/CheckLabelResponse.h>
#include <tencentcloud/adp/v20260520/model/CopyAgentFromAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CopyAgentFromAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CopyAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CopyAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateAppRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateAppResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateChannelRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateChannelResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateKBRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateKBResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateLabelRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateLabelResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateMsgRecordCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateMsgRecordCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/CreatePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/CreatePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateQAGenerationTaskRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateQAGenerationTaskResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateQAListRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateQAListResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSimilarQuestionRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSimilarQuestionResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillShareRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSkillShareResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateSpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateSpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateWebSocketTokenRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateWebSocketTokenResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkflowRunRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkflowRunResponse.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkspaceCredentialRequest.h>
#include <tencentcloud/adp/v20260520/model/CreateWorkspaceCredentialResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteChannelRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteChannelResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteDocListRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteDocListResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteKBRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteKBResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteLabelListRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteLabelListResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteMsgRecordCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteMsgRecordCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/DeletePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/DeletePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteQAListRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteQAListResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillShareRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSkillShareResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteSpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteSpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/DeleteVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/DeleteVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAccountListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAccountListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentDetailRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentDetailResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentReleasePreviewListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentReleasePreviewListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAgentSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppStatisticsOverviewRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppStatisticsOverviewResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerInstanceRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerInstanceResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerRunLogListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerRunLogListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAppTriggerSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogMetaRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeAuditLogMetaResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeCategoryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeCategoryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeChannelRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeChannelResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeChannelListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeChannelListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConcurrencyLimitDetailListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConcurrencyLimitDetailListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConflictQARequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConflictQAResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConflictQASummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConflictQASummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConsumptionDetailListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConsumptionDetailListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeDocRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeDocResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeDocSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeDocSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeKBRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeKBResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeKBSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeKBSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeLabelRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeLabelResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeLabelSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeLabelSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeLatestReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeLatestReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeMetricOverviewListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeMetricOverviewListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeModelListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeModelListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeMsgRecordCategoryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeMsgRecordCategoryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeMsgRecordListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeMsgRecordListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeNodeBatchRunRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeNodeBatchRunResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeNodeRunDetailRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeNodeRunDetailResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribePluginSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeQARequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeQAResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeQASummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeQASummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseSummaryRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeReleaseSummaryResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeResourceSummaryRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeResourceSummaryResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillCategoryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillCategoryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillDetailRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillDetailResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillReferenceListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillReferenceListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSkillSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSpaceListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSpaceListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeSystemVariableListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeSystemVariableListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeUsageDetailListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeUsageDetailListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeUsageSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeUsageSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeVariableListResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeWorkflowRunRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeWorkflowRunResponse.h>
#include <tencentcloud/adp/v20260520/model/DescribeWorkflowRunSummaryListRequest.h>
#include <tencentcloud/adp/v20260520/model/DescribeWorkflowRunSummaryListResponse.h>
#include <tencentcloud/adp/v20260520/model/ExportQARequest.h>
#include <tencentcloud/adp/v20260520/model/ExportQAResponse.h>
#include <tencentcloud/adp/v20260520/model/FavoritePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/FavoritePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/FavoriteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/FavoriteSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ImportDocListRequest.h>
#include <tencentcloud/adp/v20260520/model/ImportDocListResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyAgentRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyAgentResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyChannelRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyChannelResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyConflictQARequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyConflictQAResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyDocRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyDocResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyDocListRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyDocListResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyKBRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyKBResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyLabelRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyLabelResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyMsgRecordCategoryRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyMsgRecordCategoryResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyPluginRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyPluginResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyQARequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyQAResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyQAListRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyQAListResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifySkillRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifySkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifySpaceRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifySpaceResponse.h>
#include <tencentcloud/adp/v20260520/model/ModifyVariableRequest.h>
#include <tencentcloud/adp/v20260520/model/ModifyVariableResponse.h>
#include <tencentcloud/adp/v20260520/model/PauseAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/PauseAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/ReadMCPResourceRequest.h>
#include <tencentcloud/adp/v20260520/model/ReadMCPResourceResponse.h>
#include <tencentcloud/adp/v20260520/model/ReleaseSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/ReleaseSkillResponse.h>
#include <tencentcloud/adp/v20260520/model/ResetConversationRequest.h>
#include <tencentcloud/adp/v20260520/model/ResetConversationResponse.h>
#include <tencentcloud/adp/v20260520/model/ResumeAppTriggerRequest.h>
#include <tencentcloud/adp/v20260520/model/ResumeAppTriggerResponse.h>
#include <tencentcloud/adp/v20260520/model/ResumeWorkflowRunRequest.h>
#include <tencentcloud/adp/v20260520/model/ResumeWorkflowRunResponse.h>
#include <tencentcloud/adp/v20260520/model/RetryReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/RetryReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/RollbackReleaseRequest.h>
#include <tencentcloud/adp/v20260520/model/RollbackReleaseResponse.h>
#include <tencentcloud/adp/v20260520/model/RunAppTriggerNowRequest.h>
#include <tencentcloud/adp/v20260520/model/RunAppTriggerNowResponse.h>
#include <tencentcloud/adp/v20260520/model/SaveWorkflowDebugContextRequest.h>
#include <tencentcloud/adp/v20260520/model/SaveWorkflowDebugContextResponse.h>
#include <tencentcloud/adp/v20260520/model/SaveWorkflowToolNodeOutputRequest.h>
#include <tencentcloud/adp/v20260520/model/SaveWorkflowToolNodeOutputResponse.h>
#include <tencentcloud/adp/v20260520/model/SearchKnowledgeRequest.h>
#include <tencentcloud/adp/v20260520/model/SearchKnowledgeResponse.h>
#include <tencentcloud/adp/v20260520/model/StopWorkflowRunListRequest.h>
#include <tencentcloud/adp/v20260520/model/StopWorkflowRunListResponse.h>
#include <tencentcloud/adp/v20260520/model/UnfavoritePluginRequest.h>
#include <tencentcloud/adp/v20260520/model/UnfavoritePluginResponse.h>
#include <tencentcloud/adp/v20260520/model/UnfavoriteSkillRequest.h>
#include <tencentcloud/adp/v20260520/model/UnfavoriteSkillResponse.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            class AdpClient : public AbstractClient
            {
            public:
                AdpClient(const Credential &credential, const std::string &region);
                AdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CallMCPToolResponse> CallMCPToolOutcome;
                typedef std::future<CallMCPToolOutcome> CallMCPToolOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CallMCPToolRequest&, CallMCPToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallMCPToolAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLabelResponse> CheckLabelOutcome;
                typedef std::future<CheckLabelOutcome> CheckLabelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CheckLabelRequest&, CheckLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAgentFromAppResponse> CopyAgentFromAppOutcome;
                typedef std::future<CopyAgentFromAppOutcome> CopyAgentFromAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CopyAgentFromAppRequest&, CopyAgentFromAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAgentFromAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAppResponse> CopyAppOutcome;
                typedef std::future<CopyAppOutcome> CopyAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CopyAppRequest&, CopyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentResponse> CreateAgentOutcome;
                typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateAgentRequest&, CreateAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppTriggerResponse> CreateAppTriggerOutcome;
                typedef std::future<CreateAppTriggerOutcome> CreateAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateAppTriggerRequest&, CreateAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCategoryResponse> CreateCategoryOutcome;
                typedef std::future<CreateCategoryOutcome> CreateCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateCategoryRequest&, CreateCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelResponse> CreateChannelOutcome;
                typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateChannelRequest&, CreateChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConversationResponse> CreateConversationOutcome;
                typedef std::future<CreateConversationOutcome> CreateConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateConversationRequest&, CreateConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKBResponse> CreateKBOutcome;
                typedef std::future<CreateKBOutcome> CreateKBOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateKBRequest&, CreateKBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKBAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLabelResponse> CreateLabelOutcome;
                typedef std::future<CreateLabelOutcome> CreateLabelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateLabelRequest&, CreateLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMsgRecordCategoryResponse> CreateMsgRecordCategoryOutcome;
                typedef std::future<CreateMsgRecordCategoryOutcome> CreateMsgRecordCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateMsgRecordCategoryRequest&, CreateMsgRecordCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMsgRecordCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePluginResponse> CreatePluginOutcome;
                typedef std::future<CreatePluginOutcome> CreatePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreatePluginRequest&, CreatePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQAGenerationTaskResponse> CreateQAGenerationTaskOutcome;
                typedef std::future<CreateQAGenerationTaskOutcome> CreateQAGenerationTaskOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateQAGenerationTaskRequest&, CreateQAGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQAGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQAListResponse> CreateQAListOutcome;
                typedef std::future<CreateQAListOutcome> CreateQAListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateQAListRequest&, CreateQAListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQAListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseResponse> CreateReleaseOutcome;
                typedef std::future<CreateReleaseOutcome> CreateReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateReleaseRequest&, CreateReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSimilarQuestionResponse> CreateSimilarQuestionOutcome;
                typedef std::future<CreateSimilarQuestionOutcome> CreateSimilarQuestionOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSimilarQuestionRequest&, CreateSimilarQuestionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimilarQuestionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillResponse> CreateSkillOutcome;
                typedef std::future<CreateSkillOutcome> CreateSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSkillRequest&, CreateSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillShareResponse> CreateSkillShareOutcome;
                typedef std::future<CreateSkillShareOutcome> CreateSkillShareOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSkillShareRequest&, CreateSkillShareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillShareAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSpaceResponse> CreateSpaceOutcome;
                typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateSpaceRequest&, CreateSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVariableResponse> CreateVariableOutcome;
                typedef std::future<CreateVariableOutcome> CreateVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateVariableRequest&, CreateVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebSocketTokenResponse> CreateWebSocketTokenOutcome;
                typedef std::future<CreateWebSocketTokenOutcome> CreateWebSocketTokenOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateWebSocketTokenRequest&, CreateWebSocketTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebSocketTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowRunResponse> CreateWorkflowRunOutcome;
                typedef std::future<CreateWorkflowRunOutcome> CreateWorkflowRunOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateWorkflowRunRequest&, CreateWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceCredentialResponse> CreateWorkspaceCredentialOutcome;
                typedef std::future<CreateWorkspaceCredentialOutcome> CreateWorkspaceCredentialOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::CreateWorkspaceCredentialRequest&, CreateWorkspaceCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentResponse> DeleteAgentOutcome;
                typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteAgentRequest&, DeleteAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppTriggerResponse> DeleteAppTriggerOutcome;
                typedef std::future<DeleteAppTriggerOutcome> DeleteAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteAppTriggerRequest&, DeleteAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCategoryResponse> DeleteCategoryOutcome;
                typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteCategoryRequest&, DeleteCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteChannelResponse> DeleteChannelOutcome;
                typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteChannelRequest&, DeleteChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteConversationResponse> DeleteConversationOutcome;
                typedef std::future<DeleteConversationOutcome> DeleteConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteConversationRequest&, DeleteConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocListResponse> DeleteDocListOutcome;
                typedef std::future<DeleteDocListOutcome> DeleteDocListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteDocListRequest&, DeleteDocListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKBResponse> DeleteKBOutcome;
                typedef std::future<DeleteKBOutcome> DeleteKBOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteKBRequest&, DeleteKBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKBAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLabelListResponse> DeleteLabelListOutcome;
                typedef std::future<DeleteLabelListOutcome> DeleteLabelListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteLabelListRequest&, DeleteLabelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMsgRecordCategoryResponse> DeleteMsgRecordCategoryOutcome;
                typedef std::future<DeleteMsgRecordCategoryOutcome> DeleteMsgRecordCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteMsgRecordCategoryRequest&, DeleteMsgRecordCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMsgRecordCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePluginResponse> DeletePluginOutcome;
                typedef std::future<DeletePluginOutcome> DeletePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeletePluginRequest&, DeletePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQAListResponse> DeleteQAListOutcome;
                typedef std::future<DeleteQAListOutcome> DeleteQAListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteQAListRequest&, DeleteQAListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQAListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSkillResponse> DeleteSkillOutcome;
                typedef std::future<DeleteSkillOutcome> DeleteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSkillRequest&, DeleteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSkillShareResponse> DeleteSkillShareOutcome;
                typedef std::future<DeleteSkillShareOutcome> DeleteSkillShareOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSkillShareRequest&, DeleteSkillShareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillShareAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSpaceResponse> DeleteSpaceOutcome;
                typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteSpaceRequest&, DeleteSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVariableResponse> DeleteVariableOutcome;
                typedef std::future<DeleteVariableOutcome> DeleteVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DeleteVariableRequest&, DeleteVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountListResponse> DescribeAccountListOutcome;
                typedef std::future<DescribeAccountListOutcome> DescribeAccountListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAccountListRequest&, DescribeAccountListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDetailResponse> DescribeAgentDetailOutcome;
                typedef std::future<DescribeAgentDetailOutcome> DescribeAgentDetailOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentDetailRequest&, DescribeAgentDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentReleasePreviewListResponse> DescribeAgentReleasePreviewListOutcome;
                typedef std::future<DescribeAgentReleasePreviewListOutcome> DescribeAgentReleasePreviewListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentReleasePreviewListRequest&, DescribeAgentReleasePreviewListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentReleasePreviewListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentSummaryListResponse> DescribeAgentSummaryListOutcome;
                typedef std::future<DescribeAgentSummaryListOutcome> DescribeAgentSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAgentSummaryListRequest&, DescribeAgentSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppStatisticsOverviewResponse> DescribeAppStatisticsOverviewOutcome;
                typedef std::future<DescribeAppStatisticsOverviewOutcome> DescribeAppStatisticsOverviewOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppStatisticsOverviewRequest&, DescribeAppStatisticsOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppStatisticsOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppSummaryListResponse> DescribeAppSummaryListOutcome;
                typedef std::future<DescribeAppSummaryListOutcome> DescribeAppSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppSummaryListRequest&, DescribeAppSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppTriggerResponse> DescribeAppTriggerOutcome;
                typedef std::future<DescribeAppTriggerOutcome> DescribeAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppTriggerRequest&, DescribeAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppTriggerInstanceResponse> DescribeAppTriggerInstanceOutcome;
                typedef std::future<DescribeAppTriggerInstanceOutcome> DescribeAppTriggerInstanceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppTriggerInstanceRequest&, DescribeAppTriggerInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppTriggerInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppTriggerRunLogListResponse> DescribeAppTriggerRunLogListOutcome;
                typedef std::future<DescribeAppTriggerRunLogListOutcome> DescribeAppTriggerRunLogListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppTriggerRunLogListRequest&, DescribeAppTriggerRunLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppTriggerRunLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppTriggerSummaryListResponse> DescribeAppTriggerSummaryListOutcome;
                typedef std::future<DescribeAppTriggerSummaryListOutcome> DescribeAppTriggerSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAppTriggerSummaryListRequest&, DescribeAppTriggerSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppTriggerSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogListResponse> DescribeAuditLogListOutcome;
                typedef std::future<DescribeAuditLogListOutcome> DescribeAuditLogListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAuditLogListRequest&, DescribeAuditLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogMetaResponse> DescribeAuditLogMetaOutcome;
                typedef std::future<DescribeAuditLogMetaOutcome> DescribeAuditLogMetaOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeAuditLogMetaRequest&, DescribeAuditLogMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCategoryListResponse> DescribeCategoryListOutcome;
                typedef std::future<DescribeCategoryListOutcome> DescribeCategoryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeCategoryListRequest&, DescribeCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelResponse> DescribeChannelOutcome;
                typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeChannelRequest&, DescribeChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelListResponse> DescribeChannelListOutcome;
                typedef std::future<DescribeChannelListOutcome> DescribeChannelListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeChannelListRequest&, DescribeChannelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrencyLimitDetailListResponse> DescribeConcurrencyLimitDetailListOutcome;
                typedef std::future<DescribeConcurrencyLimitDetailListOutcome> DescribeConcurrencyLimitDetailListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConcurrencyLimitDetailListRequest&, DescribeConcurrencyLimitDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrencyLimitDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConflictQAResponse> DescribeConflictQAOutcome;
                typedef std::future<DescribeConflictQAOutcome> DescribeConflictQAOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConflictQARequest&, DescribeConflictQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConflictQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConflictQASummaryListResponse> DescribeConflictQASummaryListOutcome;
                typedef std::future<DescribeConflictQASummaryListOutcome> DescribeConflictQASummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConflictQASummaryListRequest&, DescribeConflictQASummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConflictQASummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConsumptionDetailListResponse> DescribeConsumptionDetailListOutcome;
                typedef std::future<DescribeConsumptionDetailListOutcome> DescribeConsumptionDetailListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConsumptionDetailListRequest&, DescribeConsumptionDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumptionDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationResponse> DescribeConversationOutcome;
                typedef std::future<DescribeConversationOutcome> DescribeConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationRequest&, DescribeConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationListResponse> DescribeConversationListOutcome;
                typedef std::future<DescribeConversationListOutcome> DescribeConversationListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationListRequest&, DescribeConversationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConversationMessageListResponse> DescribeConversationMessageListOutcome;
                typedef std::future<DescribeConversationMessageListOutcome> DescribeConversationMessageListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeConversationMessageListRequest&, DescribeConversationMessageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConversationMessageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocResponse> DescribeDocOutcome;
                typedef std::future<DescribeDocOutcome> DescribeDocOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeDocRequest&, DescribeDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocSummaryListResponse> DescribeDocSummaryListOutcome;
                typedef std::future<DescribeDocSummaryListOutcome> DescribeDocSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeDocSummaryListRequest&, DescribeDocSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBResponse> DescribeKBOutcome;
                typedef std::future<DescribeKBOutcome> DescribeKBOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeKBRequest&, DescribeKBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBSummaryListResponse> DescribeKBSummaryListOutcome;
                typedef std::future<DescribeKBSummaryListOutcome> DescribeKBSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeKBSummaryListRequest&, DescribeKBSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLabelResponse> DescribeLabelOutcome;
                typedef std::future<DescribeLabelOutcome> DescribeLabelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeLabelRequest&, DescribeLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLabelSummaryListResponse> DescribeLabelSummaryListOutcome;
                typedef std::future<DescribeLabelSummaryListOutcome> DescribeLabelSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeLabelSummaryListRequest&, DescribeLabelSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLabelSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLatestReleaseResponse> DescribeLatestReleaseOutcome;
                typedef std::future<DescribeLatestReleaseOutcome> DescribeLatestReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeLatestReleaseRequest&, DescribeLatestReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMetricOverviewListResponse> DescribeMetricOverviewListOutcome;
                typedef std::future<DescribeMetricOverviewListOutcome> DescribeMetricOverviewListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeMetricOverviewListRequest&, DescribeMetricOverviewListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricOverviewListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelListResponse> DescribeModelListOutcome;
                typedef std::future<DescribeModelListOutcome> DescribeModelListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeModelListRequest&, DescribeModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMsgRecordCategoryListResponse> DescribeMsgRecordCategoryListOutcome;
                typedef std::future<DescribeMsgRecordCategoryListOutcome> DescribeMsgRecordCategoryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeMsgRecordCategoryListRequest&, DescribeMsgRecordCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsgRecordCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMsgRecordListResponse> DescribeMsgRecordListOutcome;
                typedef std::future<DescribeMsgRecordListOutcome> DescribeMsgRecordListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeMsgRecordListRequest&, DescribeMsgRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsgRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeBatchRunResponse> DescribeNodeBatchRunOutcome;
                typedef std::future<DescribeNodeBatchRunOutcome> DescribeNodeBatchRunOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeNodeBatchRunRequest&, DescribeNodeBatchRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeBatchRunAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeRunDetailResponse> DescribeNodeRunDetailOutcome;
                typedef std::future<DescribeNodeRunDetailOutcome> DescribeNodeRunDetailOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeNodeRunDetailRequest&, DescribeNodeRunDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeRunDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginResponse> DescribePluginOutcome;
                typedef std::future<DescribePluginOutcome> DescribePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribePluginRequest&, DescribePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePluginSummaryListResponse> DescribePluginSummaryListOutcome;
                typedef std::future<DescribePluginSummaryListOutcome> DescribePluginSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribePluginSummaryListRequest&, DescribePluginSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQAResponse> DescribeQAOutcome;
                typedef std::future<DescribeQAOutcome> DescribeQAOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeQARequest&, DescribeQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQASummaryListResponse> DescribeQASummaryListOutcome;
                typedef std::future<DescribeQASummaryListOutcome> DescribeQASummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeQASummaryListRequest&, DescribeQASummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQASummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseListResponse> DescribeReleaseListOutcome;
                typedef std::future<DescribeReleaseListOutcome> DescribeReleaseListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeReleaseListRequest&, DescribeReleaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReleaseSummaryResponse> DescribeReleaseSummaryOutcome;
                typedef std::future<DescribeReleaseSummaryOutcome> DescribeReleaseSummaryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeReleaseSummaryRequest&, DescribeReleaseSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleaseSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceSummaryResponse> DescribeResourceSummaryOutcome;
                typedef std::future<DescribeResourceSummaryOutcome> DescribeResourceSummaryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeResourceSummaryRequest&, DescribeResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillCategoryListResponse> DescribeSkillCategoryListOutcome;
                typedef std::future<DescribeSkillCategoryListOutcome> DescribeSkillCategoryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillCategoryListRequest&, DescribeSkillCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillDetailResponse> DescribeSkillDetailOutcome;
                typedef std::future<DescribeSkillDetailOutcome> DescribeSkillDetailOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillDetailRequest&, DescribeSkillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillReferenceListResponse> DescribeSkillReferenceListOutcome;
                typedef std::future<DescribeSkillReferenceListOutcome> DescribeSkillReferenceListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillReferenceListRequest&, DescribeSkillReferenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillReferenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillSummaryListResponse> DescribeSkillSummaryListOutcome;
                typedef std::future<DescribeSkillSummaryListOutcome> DescribeSkillSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSkillSummaryListRequest&, DescribeSkillSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceListResponse> DescribeSpaceListOutcome;
                typedef std::future<DescribeSpaceListOutcome> DescribeSpaceListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSpaceListRequest&, DescribeSpaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemVariableListResponse> DescribeSystemVariableListOutcome;
                typedef std::future<DescribeSystemVariableListOutcome> DescribeSystemVariableListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeSystemVariableListRequest&, DescribeSystemVariableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemVariableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageDetailListResponse> DescribeUsageDetailListOutcome;
                typedef std::future<DescribeUsageDetailListOutcome> DescribeUsageDetailListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeUsageDetailListRequest&, DescribeUsageDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageSummaryListResponse> DescribeUsageSummaryListOutcome;
                typedef std::future<DescribeUsageSummaryListOutcome> DescribeUsageSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeUsageSummaryListRequest&, DescribeUsageSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVariableResponse> DescribeVariableOutcome;
                typedef std::future<DescribeVariableOutcome> DescribeVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeVariableRequest&, DescribeVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVariableListResponse> DescribeVariableListOutcome;
                typedef std::future<DescribeVariableListOutcome> DescribeVariableListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeVariableListRequest&, DescribeVariableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVariableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowRunResponse> DescribeWorkflowRunOutcome;
                typedef std::future<DescribeWorkflowRunOutcome> DescribeWorkflowRunOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeWorkflowRunRequest&, DescribeWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowRunSummaryListResponse> DescribeWorkflowRunSummaryListOutcome;
                typedef std::future<DescribeWorkflowRunSummaryListOutcome> DescribeWorkflowRunSummaryListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::DescribeWorkflowRunSummaryListRequest&, DescribeWorkflowRunSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowRunSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportQAResponse> ExportQAOutcome;
                typedef std::future<ExportQAOutcome> ExportQAOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ExportQARequest&, ExportQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportQAAsyncHandler;
                typedef Outcome<Core::Error, Model::FavoritePluginResponse> FavoritePluginOutcome;
                typedef std::future<FavoritePluginOutcome> FavoritePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::FavoritePluginRequest&, FavoritePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FavoritePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::FavoriteSkillResponse> FavoriteSkillOutcome;
                typedef std::future<FavoriteSkillOutcome> FavoriteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::FavoriteSkillRequest&, FavoriteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FavoriteSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportDocListResponse> ImportDocListOutcome;
                typedef std::future<ImportDocListOutcome> ImportDocListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ImportDocListRequest&, ImportDocListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportDocListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentResponse> ModifyAgentOutcome;
                typedef std::future<ModifyAgentOutcome> ModifyAgentOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyAgentRequest&, ModifyAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppTriggerResponse> ModifyAppTriggerOutcome;
                typedef std::future<ModifyAppTriggerOutcome> ModifyAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyAppTriggerRequest&, ModifyAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCategoryResponse> ModifyCategoryOutcome;
                typedef std::future<ModifyCategoryOutcome> ModifyCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyCategoryRequest&, ModifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChannelResponse> ModifyChannelOutcome;
                typedef std::future<ModifyChannelOutcome> ModifyChannelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyChannelRequest&, ModifyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConflictQAResponse> ModifyConflictQAOutcome;
                typedef std::future<ModifyConflictQAOutcome> ModifyConflictQAOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyConflictQARequest&, ModifyConflictQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConflictQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyConversationResponse> ModifyConversationOutcome;
                typedef std::future<ModifyConversationOutcome> ModifyConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyConversationRequest&, ModifyConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocResponse> ModifyDocOutcome;
                typedef std::future<ModifyDocOutcome> ModifyDocOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyDocRequest&, ModifyDocOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDocListResponse> ModifyDocListOutcome;
                typedef std::future<ModifyDocListOutcome> ModifyDocListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyDocListRequest&, ModifyDocListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDocListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKBResponse> ModifyKBOutcome;
                typedef std::future<ModifyKBOutcome> ModifyKBOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyKBRequest&, ModifyKBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKBAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLabelResponse> ModifyLabelOutcome;
                typedef std::future<ModifyLabelOutcome> ModifyLabelOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyLabelRequest&, ModifyLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMsgRecordCategoryResponse> ModifyMsgRecordCategoryOutcome;
                typedef std::future<ModifyMsgRecordCategoryOutcome> ModifyMsgRecordCategoryOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyMsgRecordCategoryRequest&, ModifyMsgRecordCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMsgRecordCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPluginResponse> ModifyPluginOutcome;
                typedef std::future<ModifyPluginOutcome> ModifyPluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyPluginRequest&, ModifyPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAResponse> ModifyQAOutcome;
                typedef std::future<ModifyQAOutcome> ModifyQAOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyQARequest&, ModifyQAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQAListResponse> ModifyQAListOutcome;
                typedef std::future<ModifyQAListOutcome> ModifyQAListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyQAListRequest&, ModifyQAListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQAListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySkillResponse> ModifySkillOutcome;
                typedef std::future<ModifySkillOutcome> ModifySkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifySkillRequest&, ModifySkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpaceResponse> ModifySpaceOutcome;
                typedef std::future<ModifySpaceOutcome> ModifySpaceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifySpaceRequest&, ModifySpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVariableResponse> ModifyVariableOutcome;
                typedef std::future<ModifyVariableOutcome> ModifyVariableOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ModifyVariableRequest&, ModifyVariableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVariableAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseAppTriggerResponse> PauseAppTriggerOutcome;
                typedef std::future<PauseAppTriggerOutcome> PauseAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::PauseAppTriggerRequest&, PauseAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::ReadMCPResourceResponse> ReadMCPResourceOutcome;
                typedef std::future<ReadMCPResourceOutcome> ReadMCPResourceOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ReadMCPResourceRequest&, ReadMCPResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReadMCPResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseSkillResponse> ReleaseSkillOutcome;
                typedef std::future<ReleaseSkillOutcome> ReleaseSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ReleaseSkillRequest&, ReleaseSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetConversationResponse> ResetConversationOutcome;
                typedef std::future<ResetConversationOutcome> ResetConversationOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ResetConversationRequest&, ResetConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeAppTriggerResponse> ResumeAppTriggerOutcome;
                typedef std::future<ResumeAppTriggerOutcome> ResumeAppTriggerOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ResumeAppTriggerRequest&, ResumeAppTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeAppTriggerAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeWorkflowRunResponse> ResumeWorkflowRunOutcome;
                typedef std::future<ResumeWorkflowRunOutcome> ResumeWorkflowRunOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::ResumeWorkflowRunRequest&, ResumeWorkflowRunOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeWorkflowRunAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryReleaseResponse> RetryReleaseOutcome;
                typedef std::future<RetryReleaseOutcome> RetryReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::RetryReleaseRequest&, RetryReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackReleaseResponse> RollbackReleaseOutcome;
                typedef std::future<RollbackReleaseOutcome> RollbackReleaseOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::RollbackReleaseRequest&, RollbackReleaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackReleaseAsyncHandler;
                typedef Outcome<Core::Error, Model::RunAppTriggerNowResponse> RunAppTriggerNowOutcome;
                typedef std::future<RunAppTriggerNowOutcome> RunAppTriggerNowOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::RunAppTriggerNowRequest&, RunAppTriggerNowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunAppTriggerNowAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveWorkflowDebugContextResponse> SaveWorkflowDebugContextOutcome;
                typedef std::future<SaveWorkflowDebugContextOutcome> SaveWorkflowDebugContextOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::SaveWorkflowDebugContextRequest&, SaveWorkflowDebugContextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveWorkflowDebugContextAsyncHandler;
                typedef Outcome<Core::Error, Model::SaveWorkflowToolNodeOutputResponse> SaveWorkflowToolNodeOutputOutcome;
                typedef std::future<SaveWorkflowToolNodeOutputOutcome> SaveWorkflowToolNodeOutputOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::SaveWorkflowToolNodeOutputRequest&, SaveWorkflowToolNodeOutputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaveWorkflowToolNodeOutputAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchKnowledgeResponse> SearchKnowledgeOutcome;
                typedef std::future<SearchKnowledgeOutcome> SearchKnowledgeOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::SearchKnowledgeRequest&, SearchKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWorkflowRunListResponse> StopWorkflowRunListOutcome;
                typedef std::future<StopWorkflowRunListOutcome> StopWorkflowRunListOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::StopWorkflowRunListRequest&, StopWorkflowRunListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWorkflowRunListAsyncHandler;
                typedef Outcome<Core::Error, Model::UnfavoritePluginResponse> UnfavoritePluginOutcome;
                typedef std::future<UnfavoritePluginOutcome> UnfavoritePluginOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::UnfavoritePluginRequest&, UnfavoritePluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnfavoritePluginAsyncHandler;
                typedef Outcome<Core::Error, Model::UnfavoriteSkillResponse> UnfavoriteSkillOutcome;
                typedef std::future<UnfavoriteSkillOutcome> UnfavoriteSkillOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::UnfavoriteSkillRequest&, UnfavoriteSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnfavoriteSkillAsyncHandler;



                /**
                 *Tool call triggered by a user in the MCP App iframe.
                 * @param req CallMCPToolRequest
                 * @return CallMCPToolOutcome
                 */
                CallMCPToolOutcome CallMCPTool(const Model::CallMCPToolRequest &request);
                void CallMCPToolAsync(const Model::CallMCPToolRequest& request, const CallMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallMCPToolOutcomeCallable CallMCPToolCallable(const Model::CallMCPToolRequest& request);

                /**
                 *Validate tags
                 * @param req CheckLabelRequest
                 * @return CheckLabelOutcome
                 */
                CheckLabelOutcome CheckLabel(const Model::CheckLabelRequest &request);
                void CheckLabelAsync(const Model::CheckLabelRequest& request, const CheckLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLabelOutcomeCallable CheckLabelCallable(const Model::CheckLabelRequest& request);

                /**
                 *This API is used to replicate an Agent. Currently only support claw mode.
                 * @param req CopyAgentFromAppRequest
                 * @return CopyAgentFromAppOutcome
                 */
                CopyAgentFromAppOutcome CopyAgentFromApp(const Model::CopyAgentFromAppRequest &request);
                void CopyAgentFromAppAsync(const Model::CopyAgentFromAppRequest& request, const CopyAgentFromAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAgentFromAppOutcomeCallable CopyAgentFromAppCallable(const Model::CopyAgentFromAppRequest& request);

                /**
                 *Copy an application
                 * @param req CopyAppRequest
                 * @return CopyAppOutcome
                 */
                CopyAppOutcome CopyApp(const Model::CopyAppRequest &request);
                void CopyAppAsync(const Model::CopyAppRequest& request, const CopyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAppOutcomeCallable CopyAppCallable(const Model::CopyAppRequest& request);

                /**
                 *This API is used to create an Agent. Currently only support claw mode.
                 * @param req CreateAgentRequest
                 * @return CreateAgentOutcome
                 */
                CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest &request);
                void CreateAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentOutcomeCallable CreateAgentCallable(const Model::CreateAgentRequest& request);

                /**
                 *This API is used to create an application.
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *CreateAppTrigger
                 * @param req CreateAppTriggerRequest
                 * @return CreateAppTriggerOutcome
                 */
                CreateAppTriggerOutcome CreateAppTrigger(const Model::CreateAppTriggerRequest &request);
                void CreateAppTriggerAsync(const Model::CreateAppTriggerRequest& request, const CreateAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppTriggerOutcomeCallable CreateAppTriggerCallable(const Model::CreateAppTriggerRequest& request);

                /**
                 *Create a category
                 * @param req CreateCategoryRequest
                 * @return CreateCategoryOutcome
                 */
                CreateCategoryOutcome CreateCategory(const Model::CreateCategoryRequest &request);
                void CreateCategoryAsync(const Model::CreateCategoryRequest& request, const CreateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCategoryOutcomeCallable CreateCategoryCallable(const Model::CreateCategoryRequest& request);

                /**
                 *Create a channel (distinguish B-end application release channels from C-end IM channels by scene)
                 * @param req CreateChannelRequest
                 * @return CreateChannelOutcome
                 */
                CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest &request);
                void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request);

                /**
                 *Create session
                 * @param req CreateConversationRequest
                 * @return CreateConversationOutcome
                 */
                CreateConversationOutcome CreateConversation(const Model::CreateConversationRequest &request);
                void CreateConversationAsync(const Model::CreateConversationRequest& request, const CreateConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConversationOutcomeCallable CreateConversationCallable(const Model::CreateConversationRequest& request);

                /**
                 *This API is used to create a knowledge base.
                 * @param req CreateKBRequest
                 * @return CreateKBOutcome
                 */
                CreateKBOutcome CreateKB(const Model::CreateKBRequest &request);
                void CreateKBAsync(const Model::CreateKBRequest& request, const CreateKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKBOutcomeCallable CreateKBCallable(const Model::CreateKBRequest& request);

                /**
                 *Create a tag
                 * @param req CreateLabelRequest
                 * @return CreateLabelOutcome
                 */
                CreateLabelOutcome CreateLabel(const Model::CreateLabelRequest &request);
                void CreateLabelAsync(const Model::CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLabelOutcomeCallable CreateLabelCallable(const Model::CreateLabelRequest& request);

                /**
                 *This API is used to create a message record category, with support for specifying the category name and parent category. A ParentId of 0 indicates a level-1 category.
                 * @param req CreateMsgRecordCategoryRequest
                 * @return CreateMsgRecordCategoryOutcome
                 */
                CreateMsgRecordCategoryOutcome CreateMsgRecordCategory(const Model::CreateMsgRecordCategoryRequest &request);
                void CreateMsgRecordCategoryAsync(const Model::CreateMsgRecordCategoryRequest& request, const CreateMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMsgRecordCategoryOutcomeCallable CreateMsgRecordCategoryCallable(const Model::CreateMsgRecordCategoryRequest& request);

                /**
                 *This API is used to query plugin details.
                 * @param req CreatePluginRequest
                 * @return CreatePluginOutcome
                 */
                CreatePluginOutcome CreatePlugin(const Model::CreatePluginRequest &request);
                void CreatePluginAsync(const Model::CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePluginOutcomeCallable CreatePluginCallable(const Model::CreatePluginRequest& request);

                /**
                 *Create a QA generation task
                 * @param req CreateQAGenerationTaskRequest
                 * @return CreateQAGenerationTaskOutcome
                 */
                CreateQAGenerationTaskOutcome CreateQAGenerationTask(const Model::CreateQAGenerationTaskRequest &request);
                void CreateQAGenerationTaskAsync(const Model::CreateQAGenerationTaskRequest& request, const CreateQAGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQAGenerationTaskOutcomeCallable CreateQAGenerationTaskCallable(const Model::CreateQAGenerationTaskRequest& request);

                /**
                 *Batch create QA
                 * @param req CreateQAListRequest
                 * @return CreateQAListOutcome
                 */
                CreateQAListOutcome CreateQAList(const Model::CreateQAListRequest &request);
                void CreateQAListAsync(const Model::CreateQAListRequest& request, const CreateQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQAListOutcomeCallable CreateQAListCallable(const Model::CreateQAListRequest& request);

                /**
                 *Add new release task
                 * @param req CreateReleaseRequest
                 * @return CreateReleaseOutcome
                 */
                CreateReleaseOutcome CreateRelease(const Model::CreateReleaseRequest &request);
                void CreateReleaseAsync(const Model::CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseOutcomeCallable CreateReleaseCallable(const Model::CreateReleaseRequest& request);

                /**
                 *This API is used to create a similar question generation task.
                 * @param req CreateSimilarQuestionRequest
                 * @return CreateSimilarQuestionOutcome
                 */
                CreateSimilarQuestionOutcome CreateSimilarQuestion(const Model::CreateSimilarQuestionRequest &request);
                void CreateSimilarQuestionAsync(const Model::CreateSimilarQuestionRequest& request, const CreateSimilarQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSimilarQuestionOutcomeCallable CreateSimilarQuestionCallable(const Model::CreateSimilarQuestionRequest& request);

                /**
                 *Creates a skill
                 * @param req CreateSkillRequest
                 * @return CreateSkillOutcome
                 */
                CreateSkillOutcome CreateSkill(const Model::CreateSkillRequest &request);
                void CreateSkillAsync(const Model::CreateSkillRequest& request, const CreateSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillOutcomeCallable CreateSkillCallable(const Model::CreateSkillRequest& request);

                /**
                 *Submit a custom Skill for enterprise-level shared approval (two-segment: submit, approve, callback to create a shared task)
                 * @param req CreateSkillShareRequest
                 * @return CreateSkillShareOutcome
                 */
                CreateSkillShareOutcome CreateSkillShare(const Model::CreateSkillShareRequest &request);
                void CreateSkillShareAsync(const Model::CreateSkillShareRequest& request, const CreateSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillShareOutcomeCallable CreateSkillShareCallable(const Model::CreateSkillShareRequest& request);

                /**
                 *Create a space
                 * @param req CreateSpaceRequest
                 * @return CreateSpaceOutcome
                 */
                CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest &request);
                void CreateSpaceAsync(const Model::CreateSpaceRequest& request, const CreateSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSpaceOutcomeCallable CreateSpaceCallable(const Model::CreateSpaceRequest& request);

                /**
                 *This API is used to create parameter variables.
                 * @param req CreateVariableRequest
                 * @return CreateVariableOutcome
                 */
                CreateVariableOutcome CreateVariable(const Model::CreateVariableRequest &request);
                void CreateVariableAsync(const Model::CreateVariableRequest& request, const CreateVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVariableOutcomeCallable CreateVariableCallable(const Model::CreateVariableRequest& request);

                /**
                 *This API is used to create a WebSocket Token.
                 * @param req CreateWebSocketTokenRequest
                 * @return CreateWebSocketTokenOutcome
                 */
                CreateWebSocketTokenOutcome CreateWebSocketToken(const Model::CreateWebSocketTokenRequest &request);
                void CreateWebSocketTokenAsync(const Model::CreateWebSocketTokenRequest& request, const CreateWebSocketTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebSocketTokenOutcomeCallable CreateWebSocketTokenCallable(const Model::CreateWebSocketTokenRequest& request);

                /**
                 *This API is used to create an asynchronous running instance of a workflow. After successful creation, the workflow runs asynchronously in the backend. The API returns the workflow running instance ID (WorkflowRunId) and other information. You can call the DescribeWorkflowRun API to query the workflow running details.
Note: Asynchronous execution of a workflow is application-based. The corresponding application configuration must be set to "Single Workflow Mode" before it can be successfully created.
                 * @param req CreateWorkflowRunRequest
                 * @return CreateWorkflowRunOutcome
                 */
                CreateWorkflowRunOutcome CreateWorkflowRun(const Model::CreateWorkflowRunRequest &request);
                void CreateWorkflowRunAsync(const Model::CreateWorkflowRunRequest& request, const CreateWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowRunOutcomeCallable CreateWorkflowRunCallable(const Model::CreateWorkflowRunRequest& request);

                /**
                 *Create a workspace credential
                 * @param req CreateWorkspaceCredentialRequest
                 * @return CreateWorkspaceCredentialOutcome
                 */
                CreateWorkspaceCredentialOutcome CreateWorkspaceCredential(const Model::CreateWorkspaceCredentialRequest &request);
                void CreateWorkspaceCredentialAsync(const Model::CreateWorkspaceCredentialRequest& request, const CreateWorkspaceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceCredentialOutcomeCallable CreateWorkspaceCredentialCallable(const Model::CreateWorkspaceCredentialRequest& request);

                /**
                 *This API is used to delete an Agent.
                 * @param req DeleteAgentRequest
                 * @return DeleteAgentOutcome
                 */
                DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest &request);
                void DeleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentOutcomeCallable DeleteAgentCallable(const Model::DeleteAgentRequest& request);

                /**
                 *This API is used to delete applications
                 * @param req DeleteAppRequest
                 * @return DeleteAppOutcome
                 */
                DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest &request);
                void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request);

                /**
                 *DeleteAppTrigger
                 * @param req DeleteAppTriggerRequest
                 * @return DeleteAppTriggerOutcome
                 */
                DeleteAppTriggerOutcome DeleteAppTrigger(const Model::DeleteAppTriggerRequest &request);
                void DeleteAppTriggerAsync(const Model::DeleteAppTriggerRequest& request, const DeleteAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppTriggerOutcomeCallable DeleteAppTriggerCallable(const Model::DeleteAppTriggerRequest& request);

                /**
                 *Delete a category
                 * @param req DeleteCategoryRequest
                 * @return DeleteCategoryOutcome
                 */
                DeleteCategoryOutcome DeleteCategory(const Model::DeleteCategoryRequest &request);
                void DeleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCategoryOutcomeCallable DeleteCategoryCallable(const Model::DeleteCategoryRequest& request);

                /**
                 *Delete a channel (scenarios are distinguished by scene)
                 * @param req DeleteChannelRequest
                 * @return DeleteChannelOutcome
                 */
                DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest &request);
                void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request);

                /**
                 *Delete conversation
                 * @param req DeleteConversationRequest
                 * @return DeleteConversationOutcome
                 */
                DeleteConversationOutcome DeleteConversation(const Model::DeleteConversationRequest &request);
                void DeleteConversationAsync(const Model::DeleteConversationRequest& request, const DeleteConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConversationOutcomeCallable DeleteConversationCallable(const Model::DeleteConversationRequest& request);

                /**
                 *Delete documents in batches
                 * @param req DeleteDocListRequest
                 * @return DeleteDocListOutcome
                 */
                DeleteDocListOutcome DeleteDocList(const Model::DeleteDocListRequest &request);
                void DeleteDocListAsync(const Model::DeleteDocListRequest& request, const DeleteDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocListOutcomeCallable DeleteDocListCallable(const Model::DeleteDocListRequest& request);

                /**
                 *This API is used to delete the knowledge base.
                 * @param req DeleteKBRequest
                 * @return DeleteKBOutcome
                 */
                DeleteKBOutcome DeleteKB(const Model::DeleteKBRequest &request);
                void DeleteKBAsync(const Model::DeleteKBRequest& request, const DeleteKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKBOutcomeCallable DeleteKBCallable(const Model::DeleteKBRequest& request);

                /**
                 *Batch deletes tags
                 * @param req DeleteLabelListRequest
                 * @return DeleteLabelListOutcome
                 */
                DeleteLabelListOutcome DeleteLabelList(const Model::DeleteLabelListRequest &request);
                void DeleteLabelListAsync(const Model::DeleteLabelListRequest& request, const DeleteLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLabelListOutcomeCallable DeleteLabelListCallable(const Model::DeleteLabelListRequest& request);

                /**
                 *Deletes a specified message record category
                 * @param req DeleteMsgRecordCategoryRequest
                 * @return DeleteMsgRecordCategoryOutcome
                 */
                DeleteMsgRecordCategoryOutcome DeleteMsgRecordCategory(const Model::DeleteMsgRecordCategoryRequest &request);
                void DeleteMsgRecordCategoryAsync(const Model::DeleteMsgRecordCategoryRequest& request, const DeleteMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMsgRecordCategoryOutcomeCallable DeleteMsgRecordCategoryCallable(const Model::DeleteMsgRecordCategoryRequest& request);

                /**
                 *Modify a plug-in
                 * @param req DeletePluginRequest
                 * @return DeletePluginOutcome
                 */
                DeletePluginOutcome DeletePlugin(const Model::DeletePluginRequest &request);
                void DeletePluginAsync(const Model::DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePluginOutcomeCallable DeletePluginCallable(const Model::DeletePluginRequest& request);

                /**
                 *Delete QAs in batches
                 * @param req DeleteQAListRequest
                 * @return DeleteQAListOutcome
                 */
                DeleteQAListOutcome DeleteQAList(const Model::DeleteQAListRequest &request);
                void DeleteQAListAsync(const Model::DeleteQAListRequest& request, const DeleteQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQAListOutcomeCallable DeleteQAListCallable(const Model::DeleteQAListRequest& request);

                /**
                 *Delete a Custom Skill Authorization: creator ∨ (edit permission ∧ delete permission) Denied scenarios: non-Custom type / shared / in security detection / pending listing approval / pending delisting approval
                 * @param req DeleteSkillRequest
                 * @return DeleteSkillOutcome
                 */
                DeleteSkillOutcome DeleteSkill(const Model::DeleteSkillRequest &request);
                void DeleteSkillAsync(const Model::DeleteSkillRequest& request, const DeleteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSkillOutcomeCallable DeleteSkillCallable(const Model::DeleteSkillRequest& request);

                /**
                 *Submit a shared Skill delisting approval (v2, two-segment: submit → approve → callback to delist the shared Skill) Authorization: right to erasure Denied scenarios: not shared / pending listing approval / pending delisting approval
                 * @param req DeleteSkillShareRequest
                 * @return DeleteSkillShareOutcome
                 */
                DeleteSkillShareOutcome DeleteSkillShare(const Model::DeleteSkillShareRequest &request);
                void DeleteSkillShareAsync(const Model::DeleteSkillShareRequest& request, const DeleteSkillShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSkillShareOutcomeCallable DeleteSkillShareCallable(const Model::DeleteSkillShareRequest& request);

                /**
                 *Delete a space
                 * @param req DeleteSpaceRequest
                 * @return DeleteSpaceOutcome
                 */
                DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest &request);
                void DeleteSpaceAsync(const Model::DeleteSpaceRequest& request, const DeleteSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSpaceOutcomeCallable DeleteSpaceCallable(const Model::DeleteSpaceRequest& request);

                /**
                 *Delete a parameter variable
                 * @param req DeleteVariableRequest
                 * @return DeleteVariableOutcome
                 */
                DeleteVariableOutcome DeleteVariable(const Model::DeleteVariableRequest &request);
                void DeleteVariableAsync(const Model::DeleteVariableRequest& request, const DeleteVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVariableOutcomeCallable DeleteVariableCallable(const Model::DeleteVariableRequest& request);

                /**
                 *View the employee list of a business
                 * @param req DescribeAccountListRequest
                 * @return DescribeAccountListOutcome
                 */
                DescribeAccountListOutcome DescribeAccountList(const Model::DescribeAccountListRequest &request);
                void DescribeAccountListAsync(const Model::DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountListOutcomeCallable DescribeAccountListCallable(const Model::DescribeAccountListRequest& request);

                /**
                 *Query Agent details
                 * @param req DescribeAgentDetailRequest
                 * @return DescribeAgentDetailOutcome
                 */
                DescribeAgentDetailOutcome DescribeAgentDetail(const Model::DescribeAgentDetailRequest &request);
                void DescribeAgentDetailAsync(const Model::DescribeAgentDetailRequest& request, const DescribeAgentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDetailOutcomeCallable DescribeAgentDetailCallable(const Model::DescribeAgentDetailRequest& request);

                /**
                 *Get the release preview list of agents under an application
                 * @param req DescribeAgentReleasePreviewListRequest
                 * @return DescribeAgentReleasePreviewListOutcome
                 */
                DescribeAgentReleasePreviewListOutcome DescribeAgentReleasePreviewList(const Model::DescribeAgentReleasePreviewListRequest &request);
                void DescribeAgentReleasePreviewListAsync(const Model::DescribeAgentReleasePreviewListRequest& request, const DescribeAgentReleasePreviewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentReleasePreviewListOutcomeCallable DescribeAgentReleasePreviewListCallable(const Model::DescribeAgentReleasePreviewListRequest& request);

                /**
                 *Queries the abstract information list of an Agent.
                 * @param req DescribeAgentSummaryListRequest
                 * @return DescribeAgentSummaryListOutcome
                 */
                DescribeAgentSummaryListOutcome DescribeAgentSummaryList(const Model::DescribeAgentSummaryListRequest &request);
                void DescribeAgentSummaryListAsync(const Model::DescribeAgentSummaryListRequest& request, const DescribeAgentSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentSummaryListOutcomeCallable DescribeAgentSummaryListCallable(const Model::DescribeAgentSummaryListRequest& request);

                /**
                 *This API is used to obtain application information.
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *This API is used to query the invocation statistics overview under an application view, including the total number of calls, call success rate, avg duration of total tokens, and avg duration of first tokens. For RAG applications, it also returns the count and proportion of calls for each response method for drawing a pie chart.
                 * @param req DescribeAppStatisticsOverviewRequest
                 * @return DescribeAppStatisticsOverviewOutcome
                 */
                DescribeAppStatisticsOverviewOutcome DescribeAppStatisticsOverview(const Model::DescribeAppStatisticsOverviewRequest &request);
                void DescribeAppStatisticsOverviewAsync(const Model::DescribeAppStatisticsOverviewRequest& request, const DescribeAppStatisticsOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppStatisticsOverviewOutcomeCallable DescribeAppStatisticsOverviewCallable(const Model::DescribeAppStatisticsOverviewRequest& request);

                /**
                 *Retrieve the abstract list of applications.
                 * @param req DescribeAppSummaryListRequest
                 * @return DescribeAppSummaryListOutcome
                 */
                DescribeAppSummaryListOutcome DescribeAppSummaryList(const Model::DescribeAppSummaryListRequest &request);
                void DescribeAppSummaryListAsync(const Model::DescribeAppSummaryListRequest& request, const DescribeAppSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppSummaryListOutcomeCallable DescribeAppSummaryListCallable(const Model::DescribeAppSummaryListRequest& request);

                /**
                 *DescribeAppTrigger
                 * @param req DescribeAppTriggerRequest
                 * @return DescribeAppTriggerOutcome
                 */
                DescribeAppTriggerOutcome DescribeAppTrigger(const Model::DescribeAppTriggerRequest &request);
                void DescribeAppTriggerAsync(const Model::DescribeAppTriggerRequest& request, const DescribeAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppTriggerOutcomeCallable DescribeAppTriggerCallable(const Model::DescribeAppTriggerRequest& request);

                /**
                 *DescribeAppTriggerInstance
                 * @param req DescribeAppTriggerInstanceRequest
                 * @return DescribeAppTriggerInstanceOutcome
                 */
                DescribeAppTriggerInstanceOutcome DescribeAppTriggerInstance(const Model::DescribeAppTriggerInstanceRequest &request);
                void DescribeAppTriggerInstanceAsync(const Model::DescribeAppTriggerInstanceRequest& request, const DescribeAppTriggerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppTriggerInstanceOutcomeCallable DescribeAppTriggerInstanceCallable(const Model::DescribeAppTriggerInstanceRequest& request);

                /**
                 *DescribeAppTriggerRunLogList
                 * @param req DescribeAppTriggerRunLogListRequest
                 * @return DescribeAppTriggerRunLogListOutcome
                 */
                DescribeAppTriggerRunLogListOutcome DescribeAppTriggerRunLogList(const Model::DescribeAppTriggerRunLogListRequest &request);
                void DescribeAppTriggerRunLogListAsync(const Model::DescribeAppTriggerRunLogListRequest& request, const DescribeAppTriggerRunLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppTriggerRunLogListOutcomeCallable DescribeAppTriggerRunLogListCallable(const Model::DescribeAppTriggerRunLogListRequest& request);

                /**
                 *DescribeAppTriggerSummaryList
                 * @param req DescribeAppTriggerSummaryListRequest
                 * @return DescribeAppTriggerSummaryListOutcome
                 */
                DescribeAppTriggerSummaryListOutcome DescribeAppTriggerSummaryList(const Model::DescribeAppTriggerSummaryListRequest &request);
                void DescribeAppTriggerSummaryListAsync(const Model::DescribeAppTriggerSummaryListRequest& request, const DescribeAppTriggerSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppTriggerSummaryListOutcomeCallable DescribeAppTriggerSummaryListCallable(const Model::DescribeAppTriggerSummaryListRequest& request);

                /**
                 *View operation log list
                 * @param req DescribeAuditLogListRequest
                 * @return DescribeAuditLogListOutcome
                 */
                DescribeAuditLogListOutcome DescribeAuditLogList(const Model::DescribeAuditLogListRequest &request);
                void DescribeAuditLogListAsync(const Model::DescribeAuditLogListRequest& request, const DescribeAuditLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogListOutcomeCallable DescribeAuditLogListCallable(const Model::DescribeAuditLogListRequest& request);

                /**
                 *This API is used to obtain meta-information of audit logs.
                 * @param req DescribeAuditLogMetaRequest
                 * @return DescribeAuditLogMetaOutcome
                 */
                DescribeAuditLogMetaOutcome DescribeAuditLogMeta(const Model::DescribeAuditLogMetaRequest &request);
                void DescribeAuditLogMetaAsync(const Model::DescribeAuditLogMetaRequest& request, const DescribeAuditLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogMetaOutcomeCallable DescribeAuditLogMetaCallable(const Model::DescribeAuditLogMetaRequest& request);

                /**
                 *Query the classification list
                 * @param req DescribeCategoryListRequest
                 * @return DescribeCategoryListOutcome
                 */
                DescribeCategoryListOutcome DescribeCategoryList(const Model::DescribeCategoryListRequest &request);
                void DescribeCategoryListAsync(const Model::DescribeCategoryListRequest& request, const DescribeCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCategoryListOutcomeCallable DescribeCategoryListCallable(const Model::DescribeCategoryListRequest& request);

                /**
                 *Query channel details (case-sensitive by scenario)
                 * @param req DescribeChannelRequest
                 * @return DescribeChannelOutcome
                 */
                DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest &request);
                void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request);

                /**
                 *This API is used to obtain the channel list by scenario.
                 * @param req DescribeChannelListRequest
                 * @return DescribeChannelListOutcome
                 */
                DescribeChannelListOutcome DescribeChannelList(const Model::DescribeChannelListRequest &request);
                void DescribeChannelListAsync(const Model::DescribeChannelListRequest& request, const DescribeChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelListOutcomeCallable DescribeChannelListCallable(const Model::DescribeChannelListRequest& request);

                /**
                 *Query concurrency overrun details, including QPM/TPM overruns and exclusive concurrency overruns. Return the overrun time, space, app, model, and request content.
                 * @param req DescribeConcurrencyLimitDetailListRequest
                 * @return DescribeConcurrencyLimitDetailListOutcome
                 */
                DescribeConcurrencyLimitDetailListOutcome DescribeConcurrencyLimitDetailList(const Model::DescribeConcurrencyLimitDetailListRequest &request);
                void DescribeConcurrencyLimitDetailListAsync(const Model::DescribeConcurrencyLimitDetailListRequest& request, const DescribeConcurrencyLimitDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrencyLimitDetailListOutcomeCallable DescribeConcurrencyLimitDetailListCallable(const Model::DescribeConcurrencyLimitDetailListRequest& request);

                /**
                 *Queries the conflict query details
                 * @param req DescribeConflictQARequest
                 * @return DescribeConflictQAOutcome
                 */
                DescribeConflictQAOutcome DescribeConflictQA(const Model::DescribeConflictQARequest &request);
                void DescribeConflictQAAsync(const Model::DescribeConflictQARequest& request, const DescribeConflictQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConflictQAOutcomeCallable DescribeConflictQACallable(const Model::DescribeConflictQARequest& request);

                /**
                 *Query the conflict list
                 * @param req DescribeConflictQASummaryListRequest
                 * @return DescribeConflictQASummaryListOutcome
                 */
                DescribeConflictQASummaryListOutcome DescribeConflictQASummaryList(const Model::DescribeConflictQASummaryListRequest &request);
                void DescribeConflictQASummaryListAsync(const Model::DescribeConflictQASummaryListRequest& request, const DescribeConflictQASummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConflictQASummaryListOutcomeCallable DescribeConflictQASummaryListCallable(const Model::DescribeConflictQASummaryListRequest& request);

                /**
                 *Query resource consumption details, including billing fields such as consumption type, consumption target, consumption scenario, package, and PU consumption.
                 * @param req DescribeConsumptionDetailListRequest
                 * @return DescribeConsumptionDetailListOutcome
                 */
                DescribeConsumptionDetailListOutcome DescribeConsumptionDetailList(const Model::DescribeConsumptionDetailListRequest &request);
                void DescribeConsumptionDetailListAsync(const Model::DescribeConsumptionDetailListRequest& request, const DescribeConsumptionDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConsumptionDetailListOutcomeCallable DescribeConsumptionDetailListCallable(const Model::DescribeConsumptionDetailListRequest& request);

                /**
                 *View session information.
                 * @param req DescribeConversationRequest
                 * @return DescribeConversationOutcome
                 */
                DescribeConversationOutcome DescribeConversation(const Model::DescribeConversationRequest &request);
                void DescribeConversationAsync(const Model::DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationOutcomeCallable DescribeConversationCallable(const Model::DescribeConversationRequest& request);

                /**
                 *Get session list.
                 * @param req DescribeConversationListRequest
                 * @return DescribeConversationListOutcome
                 */
                DescribeConversationListOutcome DescribeConversationList(const Model::DescribeConversationListRequest &request);
                void DescribeConversationListAsync(const Model::DescribeConversationListRequest& request, const DescribeConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationListOutcomeCallable DescribeConversationListCallable(const Model::DescribeConversationListRequest& request);

                /**
                 *Get historical messages of a conversation.
                 * @param req DescribeConversationMessageListRequest
                 * @return DescribeConversationMessageListOutcome
                 */
                DescribeConversationMessageListOutcome DescribeConversationMessageList(const Model::DescribeConversationMessageListRequest &request);
                void DescribeConversationMessageListAsync(const Model::DescribeConversationMessageListRequest& request, const DescribeConversationMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConversationMessageListOutcomeCallable DescribeConversationMessageListCallable(const Model::DescribeConversationMessageListRequest& request);

                /**
                 *Queries the details of a document.
                 * @param req DescribeDocRequest
                 * @return DescribeDocOutcome
                 */
                DescribeDocOutcome DescribeDoc(const Model::DescribeDocRequest &request);
                void DescribeDocAsync(const Model::DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocOutcomeCallable DescribeDocCallable(const Model::DescribeDocRequest& request);

                /**
                 *Query the abstract list of a document.
                 * @param req DescribeDocSummaryListRequest
                 * @return DescribeDocSummaryListOutcome
                 */
                DescribeDocSummaryListOutcome DescribeDocSummaryList(const Model::DescribeDocSummaryListRequest &request);
                void DescribeDocSummaryListAsync(const Model::DescribeDocSummaryListRequest& request, const DescribeDocSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocSummaryListOutcomeCallable DescribeDocSummaryListCallable(const Model::DescribeDocSummaryListRequest& request);

                /**
                 *Query knowledge base details
                 * @param req DescribeKBRequest
                 * @return DescribeKBOutcome
                 */
                DescribeKBOutcome DescribeKB(const Model::DescribeKBRequest &request);
                void DescribeKBAsync(const Model::DescribeKBRequest& request, const DescribeKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBOutcomeCallable DescribeKBCallable(const Model::DescribeKBRequest& request);

                /**
                 *Queries the knowledge base list
                 * @param req DescribeKBSummaryListRequest
                 * @return DescribeKBSummaryListOutcome
                 */
                DescribeKBSummaryListOutcome DescribeKBSummaryList(const Model::DescribeKBSummaryListRequest &request);
                void DescribeKBSummaryListAsync(const Model::DescribeKBSummaryListRequest& request, const DescribeKBSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBSummaryListOutcomeCallable DescribeKBSummaryListCallable(const Model::DescribeKBSummaryListRequest& request);

                /**
                 *Queries tag details.
                 * @param req DescribeLabelRequest
                 * @return DescribeLabelOutcome
                 */
                DescribeLabelOutcome DescribeLabel(const Model::DescribeLabelRequest &request);
                void DescribeLabelAsync(const Model::DescribeLabelRequest& request, const DescribeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLabelOutcomeCallable DescribeLabelCallable(const Model::DescribeLabelRequest& request);

                /**
                 *Querying the Tag List
                 * @param req DescribeLabelSummaryListRequest
                 * @return DescribeLabelSummaryListOutcome
                 */
                DescribeLabelSummaryListOutcome DescribeLabelSummaryList(const Model::DescribeLabelSummaryListRequest &request);
                void DescribeLabelSummaryListAsync(const Model::DescribeLabelSummaryListRequest& request, const DescribeLabelSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLabelSummaryListOutcomeCallable DescribeLabelSummaryListCallable(const Model::DescribeLabelSummaryListRequest& request);

                /**
                 *Pull the latest release info (including release time, status, and channel).
                 * @param req DescribeLatestReleaseRequest
                 * @return DescribeLatestReleaseOutcome
                 */
                DescribeLatestReleaseOutcome DescribeLatestRelease(const Model::DescribeLatestReleaseRequest &request);
                void DescribeLatestReleaseAsync(const Model::DescribeLatestReleaseRequest& request, const DescribeLatestReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLatestReleaseOutcomeCallable DescribeLatestReleaseCallable(const Model::DescribeLatestReleaseRequest& request);

                /**
                 *Query the overview KPI card data of dashboards, distinguish resource dashboards from business dashboards by resource_type, and return the KPI metric list of each domain.
                 * @param req DescribeMetricOverviewListRequest
                 * @return DescribeMetricOverviewListOutcome
                 */
                DescribeMetricOverviewListOutcome DescribeMetricOverviewList(const Model::DescribeMetricOverviewListRequest &request);
                void DescribeMetricOverviewListAsync(const Model::DescribeMetricOverviewListRequest& request, const DescribeMetricOverviewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMetricOverviewListOutcomeCallable DescribeMetricOverviewListCallable(const Model::DescribeMetricOverviewListRequest& request);

                /**
                 *Query the model list
                 * @param req DescribeModelListRequest
                 * @return DescribeModelListOutcome
                 */
                DescribeModelListOutcome DescribeModelList(const Model::DescribeModelListRequest &request);
                void DescribeModelListAsync(const Model::DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelListOutcomeCallable DescribeModelListCallable(const Model::DescribeModelListRequest& request);

                /**
                 *Query the message record category tree of an app, return categories and subcategories, number of records under each category, and operation permissions.
                 * @param req DescribeMsgRecordCategoryListRequest
                 * @return DescribeMsgRecordCategoryListOutcome
                 */
                DescribeMsgRecordCategoryListOutcome DescribeMsgRecordCategoryList(const Model::DescribeMsgRecordCategoryListRequest &request);
                void DescribeMsgRecordCategoryListAsync(const Model::DescribeMsgRecordCategoryListRequest& request, const DescribeMsgRecordCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsgRecordCategoryListOutcomeCallable DescribeMsgRecordCategoryListCallable(const Model::DescribeMsgRecordCategoryListRequest& request);

                /**
                 *This API is used to query the dialogue message record list of an application. It supports filtering by channel type, feedback type, intent, call result, and other conditions, and supports cursor pagination and sorting by creation time.
                 * @param req DescribeMsgRecordListRequest
                 * @return DescribeMsgRecordListOutcome
                 */
                DescribeMsgRecordListOutcome DescribeMsgRecordList(const Model::DescribeMsgRecordListRequest &request);
                void DescribeMsgRecordListAsync(const Model::DescribeMsgRecordListRequest& request, const DescribeMsgRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsgRecordListOutcomeCallable DescribeMsgRecordListCallable(const Model::DescribeMsgRecordListRequest& request);

                /**
                 *DescribeNodeBatchRun
                 * @param req DescribeNodeBatchRunRequest
                 * @return DescribeNodeBatchRunOutcome
                 */
                DescribeNodeBatchRunOutcome DescribeNodeBatchRun(const Model::DescribeNodeBatchRunRequest &request);
                void DescribeNodeBatchRunAsync(const Model::DescribeNodeBatchRunRequest& request, const DescribeNodeBatchRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeBatchRunOutcomeCallable DescribeNodeBatchRunCallable(const Model::DescribeNodeBatchRunRequest& request);

                /**
                 *View workflow node running details.
                 * @param req DescribeNodeRunDetailRequest
                 * @return DescribeNodeRunDetailOutcome
                 */
                DescribeNodeRunDetailOutcome DescribeNodeRunDetail(const Model::DescribeNodeRunDetailRequest &request);
                void DescribeNodeRunDetailAsync(const Model::DescribeNodeRunDetailRequest& request, const DescribeNodeRunDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeRunDetailOutcomeCallable DescribeNodeRunDetailCallable(const Model::DescribeNodeRunDetailRequest& request);

                /**
                 *This API is used to query plugin details.
                 * @param req DescribePluginRequest
                 * @return DescribePluginOutcome
                 */
                DescribePluginOutcome DescribePlugin(const Model::DescribePluginRequest &request);
                void DescribePluginAsync(const Model::DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginOutcomeCallable DescribePluginCallable(const Model::DescribePluginRequest& request);

                /**
                 *Querying the List of Plugins
                 * @param req DescribePluginSummaryListRequest
                 * @return DescribePluginSummaryListOutcome
                 */
                DescribePluginSummaryListOutcome DescribePluginSummaryList(const Model::DescribePluginSummaryListRequest &request);
                void DescribePluginSummaryListAsync(const Model::DescribePluginSummaryListRequest& request, const DescribePluginSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePluginSummaryListOutcomeCallable DescribePluginSummaryListCallable(const Model::DescribePluginSummaryListRequest& request);

                /**
                 *Query QA details
                 * @param req DescribeQARequest
                 * @return DescribeQAOutcome
                 */
                DescribeQAOutcome DescribeQA(const Model::DescribeQARequest &request);
                void DescribeQAAsync(const Model::DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQAOutcomeCallable DescribeQACallable(const Model::DescribeQARequest& request);

                /**
                 *Queries the QA list
                 * @param req DescribeQASummaryListRequest
                 * @return DescribeQASummaryListOutcome
                 */
                DescribeQASummaryListOutcome DescribeQASummaryList(const Model::DescribeQASummaryListRequest &request);
                void DescribeQASummaryListAsync(const Model::DescribeQASummaryListRequest& request, const DescribeQASummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQASummaryListOutcomeCallable DescribeQASummaryListCallable(const Model::DescribeQASummaryListRequest& request);

                /**
                 *Release record list
                 * @param req DescribeReleaseListRequest
                 * @return DescribeReleaseListOutcome
                 */
                DescribeReleaseListOutcome DescribeReleaseList(const Model::DescribeReleaseListRequest &request);
                void DescribeReleaseListAsync(const Model::DescribeReleaseListRequest& request, const DescribeReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseListOutcomeCallable DescribeReleaseListCallable(const Model::DescribeReleaseListRequest& request);

                /**
                 *Queries a publication task
                 * @param req DescribeReleaseSummaryRequest
                 * @return DescribeReleaseSummaryOutcome
                 */
                DescribeReleaseSummaryOutcome DescribeReleaseSummary(const Model::DescribeReleaseSummaryRequest &request);
                void DescribeReleaseSummaryAsync(const Model::DescribeReleaseSummaryRequest& request, const DescribeReleaseSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleaseSummaryOutcomeCallable DescribeReleaseSummaryCallable(const Model::DescribeReleaseSummaryRequest& request);

                /**
                 *This API is used to obtain user resource package and value-added package usage information.
                 * @param req DescribeResourceSummaryRequest
                 * @return DescribeResourceSummaryOutcome
                 */
                DescribeResourceSummaryOutcome DescribeResourceSummary(const Model::DescribeResourceSummaryRequest &request);
                void DescribeResourceSummaryAsync(const Model::DescribeResourceSummaryRequest& request, const DescribeResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceSummaryOutcomeCallable DescribeResourceSummaryCallable(const Model::DescribeResourceSummaryRequest& request);

                /**
                 *Query the Skill classification list
                 * @param req DescribeSkillCategoryListRequest
                 * @return DescribeSkillCategoryListOutcome
                 */
                DescribeSkillCategoryListOutcome DescribeSkillCategoryList(const Model::DescribeSkillCategoryListRequest &request);
                void DescribeSkillCategoryListAsync(const Model::DescribeSkillCategoryListRequest& request, const DescribeSkillCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillCategoryListOutcomeCallable DescribeSkillCategoryListCallable(const Model::DescribeSkillCategoryListRequest& request);

                /**
                 *Query skill details
                 * @param req DescribeSkillDetailRequest
                 * @return DescribeSkillDetailOutcome
                 */
                DescribeSkillDetailOutcome DescribeSkillDetail(const Model::DescribeSkillDetailRequest &request);
                void DescribeSkillDetailAsync(const Model::DescribeSkillDetailRequest& request, const DescribeSkillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillDetailOutcomeCallable DescribeSkillDetailCallable(const Model::DescribeSkillDetailRequest& request);

                /**
                 *This API is used to query the list of details where a certain Skill is referenced, grouped by SkillRefType: OpenClaw, cloud agent, or business assistant agent. Authentication: same as DescribeSkillDetail.
                 * @param req DescribeSkillReferenceListRequest
                 * @return DescribeSkillReferenceListOutcome
                 */
                DescribeSkillReferenceListOutcome DescribeSkillReferenceList(const Model::DescribeSkillReferenceListRequest &request);
                void DescribeSkillReferenceListAsync(const Model::DescribeSkillReferenceListRequest& request, const DescribeSkillReferenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillReferenceListOutcomeCallable DescribeSkillReferenceListCallable(const Model::DescribeSkillReferenceListRequest& request);

                /**
                 *Query the Skill list
                 * @param req DescribeSkillSummaryListRequest
                 * @return DescribeSkillSummaryListOutcome
                 */
                DescribeSkillSummaryListOutcome DescribeSkillSummaryList(const Model::DescribeSkillSummaryListRequest &request);
                void DescribeSkillSummaryListAsync(const Model::DescribeSkillSummaryListRequest& request, const DescribeSkillSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillSummaryListOutcomeCallable DescribeSkillSummaryListCallable(const Model::DescribeSkillSummaryListRequest& request);

                /**
                 *This API is used to obtain the space list.
                 * @param req DescribeSpaceListRequest
                 * @return DescribeSpaceListOutcome
                 */
                DescribeSpaceListOutcome DescribeSpaceList(const Model::DescribeSpaceListRequest &request);
                void DescribeSpaceListAsync(const Model::DescribeSpaceListRequest& request, const DescribeSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceListOutcomeCallable DescribeSpaceListCallable(const Model::DescribeSpaceListRequest& request);

                /**
                 *Obtain system variables
                 * @param req DescribeSystemVariableListRequest
                 * @return DescribeSystemVariableListOutcome
                 */
                DescribeSystemVariableListOutcome DescribeSystemVariableList(const Model::DescribeSystemVariableListRequest &request);
                void DescribeSystemVariableListAsync(const Model::DescribeSystemVariableListRequest& request, const DescribeSystemVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemVariableListOutcomeCallable DescribeSystemVariableListCallable(const Model::DescribeSystemVariableListRequest& request);

                /**
                 *This API is used to query time series details of resource invocations, including two types of resources: models and plug-ins. It returns detailed information of each call record in chronological order.
                 * @param req DescribeUsageDetailListRequest
                 * @return DescribeUsageDetailListOutcome
                 */
                DescribeUsageDetailListOutcome DescribeUsageDetailList(const Model::DescribeUsageDetailListRequest &request);
                void DescribeUsageDetailListAsync(const Model::DescribeUsageDetailListRequest& request, const DescribeUsageDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageDetailListOutcomeCallable DescribeUsageDetailListCallable(const Model::DescribeUsageDetailListRequest& request);

                /**
                 *This API is used to query aggregated details of resource usage, including three types of resources: models, plug-ins, and platforms. It displays indicators such as call count and Token consumption, aggregated by space or application dimension.
                 * @param req DescribeUsageSummaryListRequest
                 * @return DescribeUsageSummaryListOutcome
                 */
                DescribeUsageSummaryListOutcome DescribeUsageSummaryList(const Model::DescribeUsageSummaryListRequest &request);
                void DescribeUsageSummaryListAsync(const Model::DescribeUsageSummaryListRequest& request, const DescribeUsageSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageSummaryListOutcomeCallable DescribeUsageSummaryListCallable(const Model::DescribeUsageSummaryListRequest& request);

                /**
                 *Get parameter variables
                 * @param req DescribeVariableRequest
                 * @return DescribeVariableOutcome
                 */
                DescribeVariableOutcome DescribeVariable(const Model::DescribeVariableRequest &request);
                void DescribeVariableAsync(const Model::DescribeVariableRequest& request, const DescribeVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVariableOutcomeCallable DescribeVariableCallable(const Model::DescribeVariableRequest& request);

                /**
                 *Gets the parameter variable list
                 * @param req DescribeVariableListRequest
                 * @return DescribeVariableListOutcome
                 */
                DescribeVariableListOutcome DescribeVariableList(const Model::DescribeVariableListRequest &request);
                void DescribeVariableListAsync(const Model::DescribeVariableListRequest& request, const DescribeVariableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVariableListOutcomeCallable DescribeVariableListCallable(const Model::DescribeVariableListRequest& request);

                /**
                 *Queries workflow running details.
                 * @param req DescribeWorkflowRunRequest
                 * @return DescribeWorkflowRunOutcome
                 */
                DescribeWorkflowRunOutcome DescribeWorkflowRun(const Model::DescribeWorkflowRunRequest &request);
                void DescribeWorkflowRunAsync(const Model::DescribeWorkflowRunRequest& request, const DescribeWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowRunOutcomeCallable DescribeWorkflowRunCallable(const Model::DescribeWorkflowRunRequest& request);

                /**
                 *Query the list of workflow running instances
                 * @param req DescribeWorkflowRunSummaryListRequest
                 * @return DescribeWorkflowRunSummaryListOutcome
                 */
                DescribeWorkflowRunSummaryListOutcome DescribeWorkflowRunSummaryList(const Model::DescribeWorkflowRunSummaryListRequest &request);
                void DescribeWorkflowRunSummaryListAsync(const Model::DescribeWorkflowRunSummaryListRequest& request, const DescribeWorkflowRunSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowRunSummaryListOutcomeCallable DescribeWorkflowRunSummaryListCallable(const Model::DescribeWorkflowRunSummaryListRequest& request);

                /**
                 *Asynchronously export QAs.
                 * @param req ExportQARequest
                 * @return ExportQAOutcome
                 */
                ExportQAOutcome ExportQA(const Model::ExportQARequest &request);
                void ExportQAAsync(const Model::ExportQARequest& request, const ExportQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportQAOutcomeCallable ExportQACallable(const Model::ExportQARequest& request);

                /**
                 *Favorite a plug-in
                 * @param req FavoritePluginRequest
                 * @return FavoritePluginOutcome
                 */
                FavoritePluginOutcome FavoritePlugin(const Model::FavoritePluginRequest &request);
                void FavoritePluginAsync(const Model::FavoritePluginRequest& request, const FavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FavoritePluginOutcomeCallable FavoritePluginCallable(const Model::FavoritePluginRequest& request);

                /**
                 *Favorites a skill
                 * @param req FavoriteSkillRequest
                 * @return FavoriteSkillOutcome
                 */
                FavoriteSkillOutcome FavoriteSkill(const Model::FavoriteSkillRequest &request);
                void FavoriteSkillAsync(const Model::FavoriteSkillRequest& request, const FavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FavoriteSkillOutcomeCallable FavoriteSkillCallable(const Model::FavoriteSkillRequest& request);

                /**
                 *Batch imports documents
                 * @param req ImportDocListRequest
                 * @return ImportDocListOutcome
                 */
                ImportDocListOutcome ImportDocList(const Model::ImportDocListRequest &request);
                void ImportDocListAsync(const Model::ImportDocListRequest& request, const ImportDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportDocListOutcomeCallable ImportDocListCallable(const Model::ImportDocListRequest& request);

                /**
                 *Modify Agent configuration information
                 * @param req ModifyAgentRequest
                 * @return ModifyAgentOutcome
                 */
                ModifyAgentOutcome ModifyAgent(const Model::ModifyAgentRequest &request);
                void ModifyAgentAsync(const Model::ModifyAgentRequest& request, const ModifyAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentOutcomeCallable ModifyAgentCallable(const Model::ModifyAgentRequest& request);

                /**
                 *Modifies applications
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *ModifyAppTrigger
                 * @param req ModifyAppTriggerRequest
                 * @return ModifyAppTriggerOutcome
                 */
                ModifyAppTriggerOutcome ModifyAppTrigger(const Model::ModifyAppTriggerRequest &request);
                void ModifyAppTriggerAsync(const Model::ModifyAppTriggerRequest& request, const ModifyAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppTriggerOutcomeCallable ModifyAppTriggerCallable(const Model::ModifyAppTriggerRequest& request);

                /**
                 *Modify category
                 * @param req ModifyCategoryRequest
                 * @return ModifyCategoryOutcome
                 */
                ModifyCategoryOutcome ModifyCategory(const Model::ModifyCategoryRequest &request);
                void ModifyCategoryAsync(const Model::ModifyCategoryRequest& request, const ModifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCategoryOutcomeCallable ModifyCategoryCallable(const Model::ModifyCategoryRequest& request);

                /**
                 *This API is used to modify a channel, including remarks and the callback robot ID of a WeCom chatbot channel.
                 * @param req ModifyChannelRequest
                 * @return ModifyChannelOutcome
                 */
                ModifyChannelOutcome ModifyChannel(const Model::ModifyChannelRequest &request);
                void ModifyChannelAsync(const Model::ModifyChannelRequest& request, const ModifyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChannelOutcomeCallable ModifyChannelCallable(const Model::ModifyChannelRequest& request);

                /**
                 *Modify a conflict
                 * @param req ModifyConflictQARequest
                 * @return ModifyConflictQAOutcome
                 */
                ModifyConflictQAOutcome ModifyConflictQA(const Model::ModifyConflictQARequest &request);
                void ModifyConflictQAAsync(const Model::ModifyConflictQARequest& request, const ModifyConflictQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConflictQAOutcomeCallable ModifyConflictQACallable(const Model::ModifyConflictQARequest& request);

                /**
                 *Modify session information.
                 * @param req ModifyConversationRequest
                 * @return ModifyConversationOutcome
                 */
                ModifyConversationOutcome ModifyConversation(const Model::ModifyConversationRequest &request);
                void ModifyConversationAsync(const Model::ModifyConversationRequest& request, const ModifyConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyConversationOutcomeCallable ModifyConversationCallable(const Model::ModifyConversationRequest& request);

                /**
                 *Modify a single document
                 * @param req ModifyDocRequest
                 * @return ModifyDocOutcome
                 */
                ModifyDocOutcome ModifyDoc(const Model::ModifyDocRequest &request);
                void ModifyDocAsync(const Model::ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocOutcomeCallable ModifyDocCallable(const Model::ModifyDocRequest& request);

                /**
                 *Batch modify documents.
                 * @param req ModifyDocListRequest
                 * @return ModifyDocListOutcome
                 */
                ModifyDocListOutcome ModifyDocList(const Model::ModifyDocListRequest &request);
                void ModifyDocListAsync(const Model::ModifyDocListRequest& request, const ModifyDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDocListOutcomeCallable ModifyDocListCallable(const Model::ModifyDocListRequest& request);

                /**
                 *This API is used to modify the knowledge base.
                 * @param req ModifyKBRequest
                 * @return ModifyKBOutcome
                 */
                ModifyKBOutcome ModifyKB(const Model::ModifyKBRequest &request);
                void ModifyKBAsync(const Model::ModifyKBRequest& request, const ModifyKBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKBOutcomeCallable ModifyKBCallable(const Model::ModifyKBRequest& request);

                /**
                 *Modify a tag
                 * @param req ModifyLabelRequest
                 * @return ModifyLabelOutcome
                 */
                ModifyLabelOutcome ModifyLabel(const Model::ModifyLabelRequest &request);
                void ModifyLabelAsync(const Model::ModifyLabelRequest& request, const ModifyLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLabelOutcomeCallable ModifyLabelCallable(const Model::ModifyLabelRequest& request);

                /**
                 *Modify the name of a specified message record category
                 * @param req ModifyMsgRecordCategoryRequest
                 * @return ModifyMsgRecordCategoryOutcome
                 */
                ModifyMsgRecordCategoryOutcome ModifyMsgRecordCategory(const Model::ModifyMsgRecordCategoryRequest &request);
                void ModifyMsgRecordCategoryAsync(const Model::ModifyMsgRecordCategoryRequest& request, const ModifyMsgRecordCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMsgRecordCategoryOutcomeCallable ModifyMsgRecordCategoryCallable(const Model::ModifyMsgRecordCategoryRequest& request);

                /**
                 *Modify a plug-in
                 * @param req ModifyPluginRequest
                 * @return ModifyPluginOutcome
                 */
                ModifyPluginOutcome ModifyPlugin(const Model::ModifyPluginRequest &request);
                void ModifyPluginAsync(const Model::ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPluginOutcomeCallable ModifyPluginCallable(const Model::ModifyPluginRequest& request);

                /**
                 *Modify single QA
                 * @param req ModifyQARequest
                 * @return ModifyQAOutcome
                 */
                ModifyQAOutcome ModifyQA(const Model::ModifyQARequest &request);
                void ModifyQAAsync(const Model::ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAOutcomeCallable ModifyQACallable(const Model::ModifyQARequest& request);

                /**
                 *Batch modify QAs
                 * @param req ModifyQAListRequest
                 * @return ModifyQAListOutcome
                 */
                ModifyQAListOutcome ModifyQAList(const Model::ModifyQAListRequest &request);
                void ModifyQAListAsync(const Model::ModifyQAListRequest& request, const ModifyQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQAListOutcomeCallable ModifyQAListCallable(const Model::ModifyQAListRequest& request);

                /**
                 *Modify a Skill
                 * @param req ModifySkillRequest
                 * @return ModifySkillOutcome
                 */
                ModifySkillOutcome ModifySkill(const Model::ModifySkillRequest &request);
                void ModifySkillAsync(const Model::ModifySkillRequest& request, const ModifySkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySkillOutcomeCallable ModifySkillCallable(const Model::ModifySkillRequest& request);

                /**
                 *Edit a space
                 * @param req ModifySpaceRequest
                 * @return ModifySpaceOutcome
                 */
                ModifySpaceOutcome ModifySpace(const Model::ModifySpaceRequest &request);
                void ModifySpaceAsync(const Model::ModifySpaceRequest& request, const ModifySpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpaceOutcomeCallable ModifySpaceCallable(const Model::ModifySpaceRequest& request);

                /**
                 *Update parameter variables
                 * @param req ModifyVariableRequest
                 * @return ModifyVariableOutcome
                 */
                ModifyVariableOutcome ModifyVariable(const Model::ModifyVariableRequest &request);
                void ModifyVariableAsync(const Model::ModifyVariableRequest& request, const ModifyVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVariableOutcomeCallable ModifyVariableCallable(const Model::ModifyVariableRequest& request);

                /**
                 *PauseAppTrigger
                 * @param req PauseAppTriggerRequest
                 * @return PauseAppTriggerOutcome
                 */
                PauseAppTriggerOutcome PauseAppTrigger(const Model::PauseAppTriggerRequest &request);
                void PauseAppTriggerAsync(const Model::PauseAppTriggerRequest& request, const PauseAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseAppTriggerOutcomeCallable PauseAppTriggerCallable(const Model::PauseAppTriggerRequest& request);

                /**
                 *This API is used to read MCP UI resources in HTML for frontend iframe to load the MCP App interface.
                 * @param req ReadMCPResourceRequest
                 * @return ReadMCPResourceOutcome
                 */
                ReadMCPResourceOutcome ReadMCPResource(const Model::ReadMCPResourceRequest &request);
                void ReadMCPResourceAsync(const Model::ReadMCPResourceRequest& request, const ReadMCPResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReadMCPResourceOutcomeCallable ReadMCPResourceCallable(const Model::ReadMCPResourceRequest& request);

                /**
                 *This API is used to list a skill.
                 * @param req ReleaseSkillRequest
                 * @return ReleaseSkillOutcome
                 */
                ReleaseSkillOutcome ReleaseSkill(const Model::ReleaseSkillRequest &request);
                void ReleaseSkillAsync(const Model::ReleaseSkillRequest& request, const ReleaseSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseSkillOutcomeCallable ReleaseSkillCallable(const Model::ReleaseSkillRequest& request);

                /**
                 *Reset a session
Note: Resetting is not supported for the current Claw mode application session.
                 * @param req ResetConversationRequest
                 * @return ResetConversationOutcome
                 */
                ResetConversationOutcome ResetConversation(const Model::ResetConversationRequest &request);
                void ResetConversationAsync(const Model::ResetConversationRequest& request, const ResetConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetConversationOutcomeCallable ResetConversationCallable(const Model::ResetConversationRequest& request);

                /**
                 *ResumeAppTrigger
                 * @param req ResumeAppTriggerRequest
                 * @return ResumeAppTriggerOutcome
                 */
                ResumeAppTriggerOutcome ResumeAppTrigger(const Model::ResumeAppTriggerRequest &request);
                void ResumeAppTriggerAsync(const Model::ResumeAppTriggerRequest& request, const ResumeAppTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeAppTriggerOutcomeCallable ResumeAppTriggerCallable(const Model::ResumeAppTriggerRequest& request);

                /**
                 *Resume a workflow asynchronous execution instance that is waiting for input.
                 * @param req ResumeWorkflowRunRequest
                 * @return ResumeWorkflowRunOutcome
                 */
                ResumeWorkflowRunOutcome ResumeWorkflowRun(const Model::ResumeWorkflowRunRequest &request);
                void ResumeWorkflowRunAsync(const Model::ResumeWorkflowRunRequest& request, const ResumeWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeWorkflowRunOutcomeCallable ResumeWorkflowRunCallable(const Model::ResumeWorkflowRunRequest& request);

                /**
                 *Retry publishing (republish after suspension)
                 * @param req RetryReleaseRequest
                 * @return RetryReleaseOutcome
                 */
                RetryReleaseOutcome RetryRelease(const Model::RetryReleaseRequest &request);
                void RetryReleaseAsync(const Model::RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryReleaseOutcomeCallable RetryReleaseCallable(const Model::RetryReleaseRequest& request);

                /**
                 *Roll back a release
                 * @param req RollbackReleaseRequest
                 * @return RollbackReleaseOutcome
                 */
                RollbackReleaseOutcome RollbackRelease(const Model::RollbackReleaseRequest &request);
                void RollbackReleaseAsync(const Model::RollbackReleaseRequest& request, const RollbackReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackReleaseOutcomeCallable RollbackReleaseCallable(const Model::RollbackReleaseRequest& request);

                /**
                 *RunAppTriggerNow
                 * @param req RunAppTriggerNowRequest
                 * @return RunAppTriggerNowOutcome
                 */
                RunAppTriggerNowOutcome RunAppTriggerNow(const Model::RunAppTriggerNowRequest &request);
                void RunAppTriggerNowAsync(const Model::RunAppTriggerNowRequest& request, const RunAppTriggerNowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunAppTriggerNowOutcomeCallable RunAppTriggerNowCallable(const Model::RunAppTriggerNowRequest& request);

                /**
                 *SaveWorkflowDebugContext
                 * @param req SaveWorkflowDebugContextRequest
                 * @return SaveWorkflowDebugContextOutcome
                 */
                SaveWorkflowDebugContextOutcome SaveWorkflowDebugContext(const Model::SaveWorkflowDebugContextRequest &request);
                void SaveWorkflowDebugContextAsync(const Model::SaveWorkflowDebugContextRequest& request, const SaveWorkflowDebugContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveWorkflowDebugContextOutcomeCallable SaveWorkflowDebugContextCallable(const Model::SaveWorkflowDebugContextRequest& request);

                /**
                 *SaveWorkflowToolNodeOutput
                 * @param req SaveWorkflowToolNodeOutputRequest
                 * @return SaveWorkflowToolNodeOutputOutcome
                 */
                SaveWorkflowToolNodeOutputOutcome SaveWorkflowToolNodeOutput(const Model::SaveWorkflowToolNodeOutputRequest &request);
                void SaveWorkflowToolNodeOutputAsync(const Model::SaveWorkflowToolNodeOutputRequest& request, const SaveWorkflowToolNodeOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaveWorkflowToolNodeOutputOutcomeCallable SaveWorkflowToolNodeOutputCallable(const Model::SaveWorkflowToolNodeOutputRequest& request);

                /**
                 *Knowledge retrieval
                 * @param req SearchKnowledgeRequest
                 * @return SearchKnowledgeOutcome
                 */
                SearchKnowledgeOutcome SearchKnowledge(const Model::SearchKnowledgeRequest &request);
                void SearchKnowledgeAsync(const Model::SearchKnowledgeRequest& request, const SearchKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKnowledgeOutcomeCallable SearchKnowledgeCallable(const Model::SearchKnowledgeRequest& request);

                /**
                 *Batch stop running workflow instances.
                 * @param req StopWorkflowRunListRequest
                 * @return StopWorkflowRunListOutcome
                 */
                StopWorkflowRunListOutcome StopWorkflowRunList(const Model::StopWorkflowRunListRequest &request);
                void StopWorkflowRunListAsync(const Model::StopWorkflowRunListRequest& request, const StopWorkflowRunListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWorkflowRunListOutcomeCallable StopWorkflowRunListCallable(const Model::StopWorkflowRunListRequest& request);

                /**
                 *Unfavorite a plug-in
                 * @param req UnfavoritePluginRequest
                 * @return UnfavoritePluginOutcome
                 */
                UnfavoritePluginOutcome UnfavoritePlugin(const Model::UnfavoritePluginRequest &request);
                void UnfavoritePluginAsync(const Model::UnfavoritePluginRequest& request, const UnfavoritePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnfavoritePluginOutcomeCallable UnfavoritePluginCallable(const Model::UnfavoritePluginRequest& request);

                /**
                 *Unfavorites a skill
                 * @param req UnfavoriteSkillRequest
                 * @return UnfavoriteSkillOutcome
                 */
                UnfavoriteSkillOutcome UnfavoriteSkill(const Model::UnfavoriteSkillRequest &request);
                void UnfavoriteSkillAsync(const Model::UnfavoriteSkillRequest& request, const UnfavoriteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnfavoriteSkillOutcomeCallable UnfavoriteSkillCallable(const Model::UnfavoriteSkillRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
