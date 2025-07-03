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

#ifndef TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
#define TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAIAgentCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAIAgentCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAICallRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAICallResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateIVRSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateIVRSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAILatencyRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAILatencyResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIvrAudioListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIvrAudioListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/ForceMemberOfflineRequest.h>
#include <tencentcloud/ccc/v20200210/model/ForceMemberOfflineResponse.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/RestoreMemberOnlineRequest.h>
#include <tencentcloud/ccc/v20200210/model/RestoreMemberOnlineResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/TransferToManualRequest.h>
#include <tencentcloud/ccc/v20200210/model/TransferToManualResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioRequest.h>
#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioResponse.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            class CccClient : public AbstractClient
            {
            public:
                CccClient(const Credential &credential, const std::string &region);
                CccClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AbortAgentCruiseDialingCampaignResponse> AbortAgentCruiseDialingCampaignOutcome;
                typedef std::future<AbortAgentCruiseDialingCampaignOutcome> AbortAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::AbortAgentCruiseDialingCampaignRequest&, AbortAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortAgentCruiseDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::AbortPredictiveDialingCampaignResponse> AbortPredictiveDialingCampaignOutcome;
                typedef std::future<AbortPredictiveDialingCampaignOutcome> AbortPredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::AbortPredictiveDialingCampaignRequest&, AbortPredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortPredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::BindNumberCallOutSkillGroupResponse> BindNumberCallOutSkillGroupOutcome;
                typedef std::future<BindNumberCallOutSkillGroupOutcome> BindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindNumberCallOutSkillGroupRequest&, BindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindStaffSkillGroupListResponse> BindStaffSkillGroupListOutcome;
                typedef std::future<BindStaffSkillGroupListOutcome> BindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindStaffSkillGroupListRequest&, BindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAgentCallResponse> CreateAIAgentCallOutcome;
                typedef std::future<CreateAIAgentCallOutcome> CreateAIAgentCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAIAgentCallRequest&, CreateAIAgentCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAgentCallAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAICallResponse> CreateAICallOutcome;
                typedef std::future<CreateAICallOutcome> CreateAICallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAICallRequest&, CreateAICallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAICallAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdminURLResponse> CreateAdminURLOutcome;
                typedef std::future<CreateAdminURLOutcome> CreateAdminURLOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAdminURLRequest&, CreateAdminURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdminURLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentCruiseDialingCampaignResponse> CreateAgentCruiseDialingCampaignOutcome;
                typedef std::future<CreateAgentCruiseDialingCampaignOutcome> CreateAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAgentCruiseDialingCampaignRequest&, CreateAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentCruiseDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoCalloutTaskResponse> CreateAutoCalloutTaskOutcome;
                typedef std::future<CreateAutoCalloutTaskOutcome> CreateAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAutoCalloutTaskRequest&, CreateAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCCSkillGroupResponse> CreateCCCSkillGroupOutcome;
                typedef std::future<CreateCCCSkillGroupOutcome> CreateCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCCCSkillGroupRequest&, CreateCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCallOutSessionResponse> CreateCallOutSessionOutcome;
                typedef std::future<CreateCallOutSessionOutcome> CreateCallOutSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCallOutSessionRequest&, CreateCallOutSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCallOutSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExtensionResponse> CreateExtensionOutcome;
                typedef std::future<CreateExtensionOutcome> CreateExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateExtensionRequest&, CreateExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIVRSessionResponse> CreateIVRSessionOutcome;
                typedef std::future<CreateIVRSessionOutcome> CreateIVRSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateIVRSessionRequest&, CreateIVRSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIVRSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOwnNumberApplyResponse> CreateOwnNumberApplyOutcome;
                typedef std::future<CreateOwnNumberApplyOutcome> CreateOwnNumberApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateOwnNumberApplyRequest&, CreateOwnNumberApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOwnNumberApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePredictiveDialingCampaignResponse> CreatePredictiveDialingCampaignOutcome;
                typedef std::future<CreatePredictiveDialingCampaignOutcome> CreatePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreatePredictiveDialingCampaignRequest&, CreatePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSDKLoginTokenResponse> CreateSDKLoginTokenOutcome;
                typedef std::future<CreateSDKLoginTokenOutcome> CreateSDKLoginTokenOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateSDKLoginTokenRequest&, CreateSDKLoginTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDKLoginTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaffResponse> CreateStaffOutcome;
                typedef std::future<CreateStaffOutcome> CreateStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateStaffRequest&, CreateStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCCSkillGroupResponse> DeleteCCCSkillGroupOutcome;
                typedef std::future<DeleteCCCSkillGroupOutcome> DeleteCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteCCCSkillGroupRequest&, DeleteCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExtensionResponse> DeleteExtensionOutcome;
                typedef std::future<DeleteExtensionOutcome> DeleteExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteExtensionRequest&, DeleteExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePredictiveDialingCampaignResponse> DeletePredictiveDialingCampaignOutcome;
                typedef std::future<DeletePredictiveDialingCampaignOutcome> DeletePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeletePredictiveDialingCampaignRequest&, DeletePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStaffResponse> DeleteStaffOutcome;
                typedef std::future<DeleteStaffOutcome> DeleteStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteStaffRequest&, DeleteStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAICallExtractResultResponse> DescribeAICallExtractResultOutcome;
                typedef std::future<DescribeAICallExtractResultOutcome> DescribeAICallExtractResultOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAICallExtractResultRequest&, DescribeAICallExtractResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAICallExtractResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAILatencyResponse> DescribeAILatencyOutcome;
                typedef std::future<DescribeAILatencyOutcome> DescribeAILatencyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAILatencyRequest&, DescribeAILatencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAILatencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentCruiseDialingCampaignResponse> DescribeAgentCruiseDialingCampaignOutcome;
                typedef std::future<DescribeAgentCruiseDialingCampaignOutcome> DescribeAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAgentCruiseDialingCampaignRequest&, DescribeAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentCruiseDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoCalloutTaskResponse> DescribeAutoCalloutTaskOutcome;
                typedef std::future<DescribeAutoCalloutTaskOutcome> DescribeAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAutoCalloutTaskRequest&, DescribeAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoCalloutTasksResponse> DescribeAutoCalloutTasksOutcome;
                typedef std::future<DescribeAutoCalloutTasksOutcome> DescribeAutoCalloutTasksOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAutoCalloutTasksRequest&, DescribeAutoCalloutTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCalloutTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCCBuyInfoListResponse> DescribeCCCBuyInfoListOutcome;
                typedef std::future<DescribeCCCBuyInfoListOutcome> DescribeCCCBuyInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCCCBuyInfoListRequest&, DescribeCCCBuyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCCBuyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallInMetricsResponse> DescribeCallInMetricsOutcome;
                typedef std::future<DescribeCallInMetricsOutcome> DescribeCallInMetricsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCallInMetricsRequest&, DescribeCallInMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallInMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionResponse> DescribeExtensionOutcome;
                typedef std::future<DescribeExtensionOutcome> DescribeExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionRequest&, DescribeExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionsResponse> DescribeExtensionsOutcome;
                typedef std::future<DescribeExtensionsOutcome> DescribeExtensionsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionsRequest&, DescribeExtensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIvrAudioListResponse> DescribeIvrAudioListOutcome;
                typedef std::future<DescribeIvrAudioListOutcome> DescribeIvrAudioListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIvrAudioListRequest&, DescribeIvrAudioListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIvrAudioListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNumbersResponse> DescribeNumbersOutcome;
                typedef std::future<DescribeNumbersOutcome> DescribeNumbersOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeNumbersRequest&, DescribeNumbersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNumbersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePSTNActiveSessionListResponse> DescribePSTNActiveSessionListOutcome;
                typedef std::future<DescribePSTNActiveSessionListOutcome> DescribePSTNActiveSessionListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePSTNActiveSessionListRequest&, DescribePSTNActiveSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePSTNActiveSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingCampaignResponse> DescribePredictiveDialingCampaignOutcome;
                typedef std::future<DescribePredictiveDialingCampaignOutcome> DescribePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingCampaignRequest&, DescribePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingCampaignsResponse> DescribePredictiveDialingCampaignsOutcome;
                typedef std::future<DescribePredictiveDialingCampaignsOutcome> DescribePredictiveDialingCampaignsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingCampaignsRequest&, DescribePredictiveDialingCampaignsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingCampaignsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingSessionsResponse> DescribePredictiveDialingSessionsOutcome;
                typedef std::future<DescribePredictiveDialingSessionsOutcome> DescribePredictiveDialingSessionsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingSessionsRequest&, DescribePredictiveDialingSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectedTelCdrResponse> DescribeProtectedTelCdrOutcome;
                typedef std::future<DescribeProtectedTelCdrOutcome> DescribeProtectedTelCdrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeProtectedTelCdrRequest&, DescribeProtectedTelCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectedTelCdrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillGroupInfoListResponse> DescribeSkillGroupInfoListOutcome;
                typedef std::future<DescribeSkillGroupInfoListOutcome> DescribeSkillGroupInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeSkillGroupInfoListRequest&, DescribeSkillGroupInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillGroupInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStaffInfoListResponse> DescribeStaffInfoListOutcome;
                typedef std::future<DescribeStaffInfoListOutcome> DescribeStaffInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeStaffInfoListRequest&, DescribeStaffInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaffInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStaffStatusMetricsResponse> DescribeStaffStatusMetricsOutcome;
                typedef std::future<DescribeStaffStatusMetricsOutcome> DescribeStaffStatusMetricsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeStaffStatusMetricsRequest&, DescribeStaffStatusMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaffStatusMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelCallInfoResponse> DescribeTelCallInfoOutcome;
                typedef std::future<DescribeTelCallInfoOutcome> DescribeTelCallInfoOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelCallInfoRequest&, DescribeTelCallInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelCallInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelCdrResponse> DescribeTelCdrOutcome;
                typedef std::future<DescribeTelCdrOutcome> DescribeTelCdrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelCdrRequest&, DescribeTelCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelCdrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelRecordAsrResponse> DescribeTelRecordAsrOutcome;
                typedef std::future<DescribeTelRecordAsrOutcome> DescribeTelRecordAsrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelRecordAsrRequest&, DescribeTelRecordAsrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelRecordAsrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelSessionResponse> DescribeTelSessionOutcome;
                typedef std::future<DescribeTelSessionOutcome> DescribeTelSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelSessionRequest&, DescribeTelSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCCCPhoneNumberResponse> DisableCCCPhoneNumberOutcome;
                typedef std::future<DisableCCCPhoneNumberOutcome> DisableCCCPhoneNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DisableCCCPhoneNumberRequest&, DisableCCCPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCCCPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceMemberOfflineResponse> ForceMemberOfflineOutcome;
                typedef std::future<ForceMemberOfflineOutcome> ForceMemberOfflineOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ForceMemberOfflineRequest&, ForceMemberOfflineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceMemberOfflineAsyncHandler;
                typedef Outcome<Core::Error, Model::HangUpCallResponse> HangUpCallOutcome;
                typedef std::future<HangUpCallOutcome> HangUpCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::HangUpCallRequest&, HangUpCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HangUpCallAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtensionResponse> ModifyExtensionOutcome;
                typedef std::future<ModifyExtensionOutcome> ModifyExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyExtensionRequest&, ModifyExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOwnNumberApplyResponse> ModifyOwnNumberApplyOutcome;
                typedef std::future<ModifyOwnNumberApplyOutcome> ModifyOwnNumberApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyOwnNumberApplyRequest&, ModifyOwnNumberApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOwnNumberApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffResponse> ModifyStaffOutcome;
                typedef std::future<ModifyStaffOutcome> ModifyStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffRequest&, ModifyStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffPasswordResponse> ModifyStaffPasswordOutcome;
                typedef std::future<ModifyStaffPasswordOutcome> ModifyStaffPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffPasswordRequest&, ModifyStaffPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::PausePredictiveDialingCampaignResponse> PausePredictiveDialingCampaignOutcome;
                typedef std::future<PausePredictiveDialingCampaignOutcome> PausePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::PausePredictiveDialingCampaignRequest&, PausePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PausePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetExtensionPasswordResponse> ResetExtensionPasswordOutcome;
                typedef std::future<ResetExtensionPasswordOutcome> ResetExtensionPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResetExtensionPasswordRequest&, ResetExtensionPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetExtensionPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreMemberOnlineResponse> RestoreMemberOnlineOutcome;
                typedef std::future<RestoreMemberOnlineOutcome> RestoreMemberOnlineOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::RestoreMemberOnlineRequest&, RestoreMemberOnlineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreMemberOnlineAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumePredictiveDialingCampaignResponse> ResumePredictiveDialingCampaignOutcome;
                typedef std::future<ResumePredictiveDialingCampaignOutcome> ResumePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResumePredictiveDialingCampaignRequest&, ResumePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoCalloutTaskResponse> StopAutoCalloutTaskOutcome;
                typedef std::future<StopAutoCalloutTaskOutcome> StopAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::StopAutoCalloutTaskRequest&, StopAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferToManualResponse> TransferToManualOutcome;
                typedef std::future<TransferToManualOutcome> TransferToManualOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::TransferToManualRequest&, TransferToManualOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferToManualAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindNumberCallOutSkillGroupResponse> UnbindNumberCallOutSkillGroupOutcome;
                typedef std::future<UnbindNumberCallOutSkillGroupOutcome> UnbindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindNumberCallOutSkillGroupRequest&, UnbindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindStaffSkillGroupListResponse> UnbindStaffSkillGroupListOutcome;
                typedef std::future<UnbindStaffSkillGroupListOutcome> UnbindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindStaffSkillGroupListRequest&, UnbindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCCCSkillGroupResponse> UpdateCCCSkillGroupOutcome;
                typedef std::future<UpdateCCCSkillGroupOutcome> UpdateCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UpdateCCCSkillGroupRequest&, UpdateCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePredictiveDialingCampaignResponse> UpdatePredictiveDialingCampaignOutcome;
                typedef std::future<UpdatePredictiveDialingCampaignOutcome> UpdatePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UpdatePredictiveDialingCampaignRequest&, UpdatePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadIvrAudioResponse> UploadIvrAudioOutcome;
                typedef std::future<UploadIvrAudioOutcome> UploadIvrAudioOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UploadIvrAudioRequest&, UploadIvrAudioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadIvrAudioAsyncHandler;



                /**
                 *Stop Agent Cruise-style Outbound Call Task
                 * @param req AbortAgentCruiseDialingCampaignRequest
                 * @return AbortAgentCruiseDialingCampaignOutcome
                 */
                AbortAgentCruiseDialingCampaignOutcome AbortAgentCruiseDialingCampaign(const Model::AbortAgentCruiseDialingCampaignRequest &request);
                void AbortAgentCruiseDialingCampaignAsync(const Model::AbortAgentCruiseDialingCampaignRequest& request, const AbortAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortAgentCruiseDialingCampaignOutcomeCallable AbortAgentCruiseDialingCampaignCallable(const Model::AbortAgentCruiseDialingCampaignRequest& request);

                /**
                 *This API is used to pause the predictive outbound call task.
                 * @param req AbortPredictiveDialingCampaignRequest
                 * @return AbortPredictiveDialingCampaignOutcome
                 */
                AbortPredictiveDialingCampaignOutcome AbortPredictiveDialingCampaign(const Model::AbortPredictiveDialingCampaignRequest &request);
                void AbortPredictiveDialingCampaignAsync(const Model::AbortPredictiveDialingCampaignRequest& request, const AbortPredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortPredictiveDialingCampaignOutcomeCallable AbortPredictiveDialingCampaignCallable(const Model::AbortPredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to bind outbound skill group of number.
                 * @param req BindNumberCallOutSkillGroupRequest
                 * @return BindNumberCallOutSkillGroupOutcome
                 */
                BindNumberCallOutSkillGroupOutcome BindNumberCallOutSkillGroup(const Model::BindNumberCallOutSkillGroupRequest &request);
                void BindNumberCallOutSkillGroupAsync(const Model::BindNumberCallOutSkillGroupRequest& request, const BindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindNumberCallOutSkillGroupOutcomeCallable BindNumberCallOutSkillGroupCallable(const Model::BindNumberCallOutSkillGroupRequest& request);

                /**
                 *This API is used to bind the agent's skill group.
                 * @param req BindStaffSkillGroupListRequest
                 * @return BindStaffSkillGroupListOutcome
                 */
                BindStaffSkillGroupListOutcome BindStaffSkillGroupList(const Model::BindStaffSkillGroupListRequest &request);
                void BindStaffSkillGroupListAsync(const Model::BindStaffSkillGroupListRequest& request, const BindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindStaffSkillGroupListOutcomeCallable BindStaffSkillGroupListCallable(const Model::BindStaffSkillGroupListRequest& request);

                /**
                 *This API is used to initiate outbound calls using an AI model, limited to owned phone numbers only. Currently, a limited-time free trial of Advanced Agents is available.

Before initiating a call, please ensure your AI model is compatible with OpenAI, Azure, or Minimax protocols, and visit the model provider's website to obtain relevant authentication information. For detailed feature descriptions, please refer to the documentation [Tencent Cloud Contact Center AI Call Platform](https://www.tencentcloud.com/document/product/1229/70681).
                 * @param req CreateAIAgentCallRequest
                 * @return CreateAIAgentCallOutcome
                 */
                CreateAIAgentCallOutcome CreateAIAgentCall(const Model::CreateAIAgentCallRequest &request);
                void CreateAIAgentCallAsync(const Model::CreateAIAgentCallRequest& request, const CreateAIAgentCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAgentCallOutcomeCallable CreateAIAgentCallCallable(const Model::CreateAIAgentCallRequest& request);

                /**
                 *Used to make outbound calls by invoking AI models, limited to the use of proprietary phone numbers. Currently, the Advanced version seats are available for a **limited time** free trial.

Before initiating a call, please ensure your AI model is compatible with OpenAI, Azure, or Minimax protocols, and visit the model provider's website to obtain relevant authentication information. For detailed feature descriptions, please refer to the documentation [Tencent Cloud Contact Center AI Call Platform](https://www.tencentcloud.com/document/product/1229/66889).
                 * @param req CreateAICallRequest
                 * @return CreateAICallOutcome
                 */
                CreateAICallOutcome CreateAICall(const Model::CreateAICallRequest &request);
                void CreateAICallAsync(const Model::CreateAICallRequest& request, const CreateAICallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAICallOutcomeCallable CreateAICallCallable(const Model::CreateAICallRequest& request);

                /**
                 *This API is used to create a management access link.
                 * @param req CreateAdminURLRequest
                 * @return CreateAdminURLOutcome
                 */
                CreateAdminURLOutcome CreateAdminURL(const Model::CreateAdminURLRequest &request);
                void CreateAdminURLAsync(const Model::CreateAdminURLRequest& request, const CreateAdminURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdminURLOutcomeCallable CreateAdminURLCallable(const Model::CreateAdminURLRequest& request);

                /**
                 *Agent Cruise-style Outbound Call.
                 * @param req CreateAgentCruiseDialingCampaignRequest
                 * @return CreateAgentCruiseDialingCampaignOutcome
                 */
                CreateAgentCruiseDialingCampaignOutcome CreateAgentCruiseDialingCampaign(const Model::CreateAgentCruiseDialingCampaignRequest &request);
                void CreateAgentCruiseDialingCampaignAsync(const Model::CreateAgentCruiseDialingCampaignRequest& request, const CreateAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentCruiseDialingCampaignOutcomeCallable CreateAgentCruiseDialingCampaignCallable(const Model::CreateAgentCruiseDialingCampaignRequest& request);

                /**
                 *This API is used to create the automatic outbound call task.
                 * @param req CreateAutoCalloutTaskRequest
                 * @return CreateAutoCalloutTaskOutcome
                 */
                CreateAutoCalloutTaskOutcome CreateAutoCalloutTask(const Model::CreateAutoCalloutTaskRequest &request);
                void CreateAutoCalloutTaskAsync(const Model::CreateAutoCalloutTaskRequest& request, const CreateAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoCalloutTaskOutcomeCallable CreateAutoCalloutTaskCallable(const Model::CreateAutoCalloutTaskRequest& request);

                /**
                 *This API is used to create a new skill group.
                 * @param req CreateCCCSkillGroupRequest
                 * @return CreateCCCSkillGroupOutcome
                 */
                CreateCCCSkillGroupOutcome CreateCCCSkillGroup(const Model::CreateCCCSkillGroupRequest &request);
                void CreateCCCSkillGroupAsync(const Model::CreateCCCSkillGroupRequest& request, const CreateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCCSkillGroupOutcomeCallable CreateCCCSkillGroupCallable(const Model::CreateCCCSkillGroupRequest& request);

                /**
                 *This API is used to create an outbound call session. Currently, only dual calls are supported. That is, first use the platform number to call the agent mobile phone. After the agent answers, then make an outbound call to the user. Moreover, due to ISP frequency restrictions, the agent phone number must be added to the allowlist first to avoid frequency control leading to the failure of the outbound call. Therefore, before calling this API, the following operations have been completed.
1. The agent specified by UserId has already bound the mobile number. https://intl.cloud.tencent.com/document/product/679/76067?from_cn_redirect=1#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF.
2. The agent's bound mobile number has applied for and passed the outbound call allowlist.
This API is used to make calls. Currently, the agent side can only call the user's mobile phone, so the IsForceMobile field must be true.
4. Do not fill in the mobile number bound to the current UserId for the callee, otherwise it can lead to call failure due to a busy line.
                 * @param req CreateCallOutSessionRequest
                 * @return CreateCallOutSessionOutcome
                 */
                CreateCallOutSessionOutcome CreateCallOutSession(const Model::CreateCallOutSessionRequest &request);
                void CreateCallOutSessionAsync(const Model::CreateCallOutSessionRequest& request, const CreateCallOutSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCallOutSessionOutcomeCallable CreateCallOutSessionCallable(const Model::CreateCallOutSessionRequest& request);

                /**
                 *This API is used to create the telephone account.
                 * @param req CreateExtensionRequest
                 * @return CreateExtensionOutcome
                 */
                CreateExtensionOutcome CreateExtension(const Model::CreateExtensionRequest &request);
                void CreateExtensionAsync(const Model::CreateExtensionRequest& request, const CreateExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExtensionOutcomeCallable CreateExtensionCallable(const Model::CreateExtensionRequest& request);

                /**
                 *Create a session associated with IVR. This feature is supported only in the Advanced Version. Currently, it supports inbound and automatic outbound IVR types. Upon receiving the request, TCCC will first attempt to call the callee, then enter the IVR flow.
                 * @param req CreateIVRSessionRequest
                 * @return CreateIVRSessionOutcome
                 */
                CreateIVRSessionOutcome CreateIVRSession(const Model::CreateIVRSessionRequest &request);
                void CreateIVRSessionAsync(const Model::CreateIVRSessionRequest& request, const CreateIVRSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIVRSessionOutcomeCallable CreateIVRSessionCallable(const Model::CreateIVRSessionRequest& request);

                /**
                 *Create customer's own number access review
                 * @param req CreateOwnNumberApplyRequest
                 * @return CreateOwnNumberApplyOutcome
                 */
                CreateOwnNumberApplyOutcome CreateOwnNumberApply(const Model::CreateOwnNumberApplyRequest &request);
                void CreateOwnNumberApplyAsync(const Model::CreateOwnNumberApplyRequest& request, const CreateOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOwnNumberApplyOutcomeCallable CreateOwnNumberApplyCallable(const Model::CreateOwnNumberApplyRequest& request);

                /**
                 *This API is used to create the predictive outbound call task.
                 * @param req CreatePredictiveDialingCampaignRequest
                 * @return CreatePredictiveDialingCampaignOutcome
                 */
                CreatePredictiveDialingCampaignOutcome CreatePredictiveDialingCampaign(const Model::CreatePredictiveDialingCampaignRequest &request);
                void CreatePredictiveDialingCampaignAsync(const Model::CreatePredictiveDialingCampaignRequest& request, const CreatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePredictiveDialingCampaignOutcomeCallable CreatePredictiveDialingCampaignCallable(const Model::CreatePredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to create the SDK log-in token.
                 * @param req CreateSDKLoginTokenRequest
                 * @return CreateSDKLoginTokenOutcome
                 */
                CreateSDKLoginTokenOutcome CreateSDKLoginToken(const Model::CreateSDKLoginTokenRequest &request);
                void CreateSDKLoginTokenAsync(const Model::CreateSDKLoginTokenRequest& request, const CreateSDKLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSDKLoginTokenOutcomeCallable CreateSDKLoginTokenCallable(const Model::CreateSDKLoginTokenRequest& request);

                /**
                 *This API is used to create the customer service account.
                 * @param req CreateStaffRequest
                 * @return CreateStaffOutcome
                 */
                CreateStaffOutcome CreateStaff(const Model::CreateStaffRequest &request);
                void CreateStaffAsync(const Model::CreateStaffRequest& request, const CreateStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaffOutcomeCallable CreateStaffCallable(const Model::CreateStaffRequest& request);

                /**
                 *This API is used to delete a skill group.
                 * @param req DeleteCCCSkillGroupRequest
                 * @return DeleteCCCSkillGroupOutcome
                 */
                DeleteCCCSkillGroupOutcome DeleteCCCSkillGroup(const Model::DeleteCCCSkillGroupRequest &request);
                void DeleteCCCSkillGroupAsync(const Model::DeleteCCCSkillGroupRequest& request, const DeleteCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCCSkillGroupOutcomeCallable DeleteCCCSkillGroupCallable(const Model::DeleteCCCSkillGroupRequest& request);

                /**
                 *This API is used to delete telephone accounts.
                 * @param req DeleteExtensionRequest
                 * @return DeleteExtensionOutcome
                 */
                DeleteExtensionOutcome DeleteExtension(const Model::DeleteExtensionRequest &request);
                void DeleteExtensionAsync(const Model::DeleteExtensionRequest& request, const DeleteExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExtensionOutcomeCallable DeleteExtensionCallable(const Model::DeleteExtensionRequest& request);

                /**
                 *This API is used to delete the predictive outbound call task.
                 * @param req DeletePredictiveDialingCampaignRequest
                 * @return DeletePredictiveDialingCampaignOutcome
                 */
                DeletePredictiveDialingCampaignOutcome DeletePredictiveDialingCampaign(const Model::DeletePredictiveDialingCampaignRequest &request);
                void DeletePredictiveDialingCampaignAsync(const Model::DeletePredictiveDialingCampaignRequest& request, const DeletePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePredictiveDialingCampaignOutcomeCallable DeletePredictiveDialingCampaignCallable(const Model::DeletePredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to delete the agent information.
                 * @param req DeleteStaffRequest
                 * @return DeleteStaffOutcome
                 */
                DeleteStaffOutcome DeleteStaff(const Model::DeleteStaffRequest &request);
                void DeleteStaffAsync(const Model::DeleteStaffRequest& request, const DeleteStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStaffOutcomeCallable DeleteStaffCallable(const Model::DeleteStaffRequest& request);

                /**
                 *Obtain AI call content extraction result
                 * @param req DescribeAICallExtractResultRequest
                 * @return DescribeAICallExtractResultOutcome
                 */
                DescribeAICallExtractResultOutcome DescribeAICallExtractResult(const Model::DescribeAICallExtractResultRequest &request);
                void DescribeAICallExtractResultAsync(const Model::DescribeAICallExtractResultRequest& request, const DescribeAICallExtractResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAICallExtractResultOutcomeCallable DescribeAICallExtractResultCallable(const Model::DescribeAICallExtractResultRequest& request);

                /**
                 *This API is used to obtain AI latency information.
                 * @param req DescribeAILatencyRequest
                 * @return DescribeAILatencyOutcome
                 */
                DescribeAILatencyOutcome DescribeAILatency(const Model::DescribeAILatencyRequest &request);
                void DescribeAILatencyAsync(const Model::DescribeAILatencyRequest& request, const DescribeAILatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAILatencyOutcomeCallable DescribeAILatencyCallable(const Model::DescribeAILatencyRequest& request);

                /**
                 *Query Agent Cruise-style Outbound Call Task
                 * @param req DescribeAgentCruiseDialingCampaignRequest
                 * @return DescribeAgentCruiseDialingCampaignOutcome
                 */
                DescribeAgentCruiseDialingCampaignOutcome DescribeAgentCruiseDialingCampaign(const Model::DescribeAgentCruiseDialingCampaignRequest &request);
                void DescribeAgentCruiseDialingCampaignAsync(const Model::DescribeAgentCruiseDialingCampaignRequest& request, const DescribeAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentCruiseDialingCampaignOutcomeCallable DescribeAgentCruiseDialingCampaignCallable(const Model::DescribeAgentCruiseDialingCampaignRequest& request);

                /**
                 *This API is used to query automatic outbound call task details.
                 * @param req DescribeAutoCalloutTaskRequest
                 * @return DescribeAutoCalloutTaskOutcome
                 */
                DescribeAutoCalloutTaskOutcome DescribeAutoCalloutTask(const Model::DescribeAutoCalloutTaskRequest &request);
                void DescribeAutoCalloutTaskAsync(const Model::DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTaskOutcomeCallable DescribeAutoCalloutTaskCallable(const Model::DescribeAutoCalloutTaskRequest& request);

                /**
                 *Batch Query Automatic Outbound Call Tasks
                 * @param req DescribeAutoCalloutTasksRequest
                 * @return DescribeAutoCalloutTasksOutcome
                 */
                DescribeAutoCalloutTasksOutcome DescribeAutoCalloutTasks(const Model::DescribeAutoCalloutTasksRequest &request);
                void DescribeAutoCalloutTasksAsync(const Model::DescribeAutoCalloutTasksRequest& request, const DescribeAutoCalloutTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTasksOutcomeCallable DescribeAutoCalloutTasksCallable(const Model::DescribeAutoCalloutTasksRequest& request);

                /**
                 *This API is used to access the user purchasing information list.
                 * @param req DescribeCCCBuyInfoListRequest
                 * @return DescribeCCCBuyInfoListOutcome
                 */
                DescribeCCCBuyInfoListOutcome DescribeCCCBuyInfoList(const Model::DescribeCCCBuyInfoListRequest &request);
                void DescribeCCCBuyInfoListAsync(const Model::DescribeCCCBuyInfoListRequest& request, const DescribeCCCBuyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCCBuyInfoListOutcomeCallable DescribeCCCBuyInfoListCallable(const Model::DescribeCCCBuyInfoListRequest& request);

                /**
                 *This API is used to access the inbound real-time data statistical metrics.
                 * @param req DescribeCallInMetricsRequest
                 * @return DescribeCallInMetricsOutcome
                 */
                DescribeCallInMetricsOutcome DescribeCallInMetrics(const Model::DescribeCallInMetricsRequest &request);
                void DescribeCallInMetricsAsync(const Model::DescribeCallInMetricsRequest& request, const DescribeCallInMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallInMetricsOutcomeCallable DescribeCallInMetricsCallable(const Model::DescribeCallInMetricsRequest& request);

                /**
                 *This API is used to access the telephone information.
                 * @param req DescribeExtensionRequest
                 * @return DescribeExtensionOutcome
                 */
                DescribeExtensionOutcome DescribeExtension(const Model::DescribeExtensionRequest &request);
                void DescribeExtensionAsync(const Model::DescribeExtensionRequest& request, const DescribeExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtensionOutcomeCallable DescribeExtensionCallable(const Model::DescribeExtensionRequest& request);

                /**
                 *This API is used to query the telephone list information.
                 * @param req DescribeExtensionsRequest
                 * @return DescribeExtensionsOutcome
                 */
                DescribeExtensionsOutcome DescribeExtensions(const Model::DescribeExtensionsRequest &request);
                void DescribeExtensionsAsync(const Model::DescribeExtensionsRequest& request, const DescribeExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtensionsOutcomeCallable DescribeExtensionsCallable(const Model::DescribeExtensionsRequest& request);

                /**
                 *Query IVR Audio File List Information
                 * @param req DescribeIvrAudioListRequest
                 * @return DescribeIvrAudioListOutcome
                 */
                DescribeIvrAudioListOutcome DescribeIvrAudioList(const Model::DescribeIvrAudioListRequest &request);
                void DescribeIvrAudioListAsync(const Model::DescribeIvrAudioListRequest& request, const DescribeIvrAudioListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIvrAudioListOutcomeCallable DescribeIvrAudioListCallable(const Model::DescribeIvrAudioListRequest& request);

                /**
                 *This API is used to query the number list.
                 * @param req DescribeNumbersRequest
                 * @return DescribeNumbersOutcome
                 */
                DescribeNumbersOutcome DescribeNumbers(const Model::DescribeNumbersRequest &request);
                void DescribeNumbersAsync(const Model::DescribeNumbersRequest& request, const DescribeNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNumbersOutcomeCallable DescribeNumbersCallable(const Model::DescribeNumbersRequest& request);

                /**
                 *This API is used to access the current calling session list.
                 * @param req DescribePSTNActiveSessionListRequest
                 * @return DescribePSTNActiveSessionListOutcome
                 */
                DescribePSTNActiveSessionListOutcome DescribePSTNActiveSessionList(const Model::DescribePSTNActiveSessionListRequest &request);
                void DescribePSTNActiveSessionListAsync(const Model::DescribePSTNActiveSessionListRequest& request, const DescribePSTNActiveSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePSTNActiveSessionListOutcomeCallable DescribePSTNActiveSessionListCallable(const Model::DescribePSTNActiveSessionListRequest& request);

                /**
                 *This API is used to query the predictive outbound call task.
                 * @param req DescribePredictiveDialingCampaignRequest
                 * @return DescribePredictiveDialingCampaignOutcome
                 */
                DescribePredictiveDialingCampaignOutcome DescribePredictiveDialingCampaign(const Model::DescribePredictiveDialingCampaignRequest &request);
                void DescribePredictiveDialingCampaignAsync(const Model::DescribePredictiveDialingCampaignRequest& request, const DescribePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingCampaignOutcomeCallable DescribePredictiveDialingCampaignCallable(const Model::DescribePredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to query the predictive outbound call task list.
                 * @param req DescribePredictiveDialingCampaignsRequest
                 * @return DescribePredictiveDialingCampaignsOutcome
                 */
                DescribePredictiveDialingCampaignsOutcome DescribePredictiveDialingCampaigns(const Model::DescribePredictiveDialingCampaignsRequest &request);
                void DescribePredictiveDialingCampaignsAsync(const Model::DescribePredictiveDialingCampaignsRequest& request, const DescribePredictiveDialingCampaignsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingCampaignsOutcomeCallable DescribePredictiveDialingCampaignsCallable(const Model::DescribePredictiveDialingCampaignsRequest& request);

                /**
                 *This API is used to query the predictive outbound call list.
                 * @param req DescribePredictiveDialingSessionsRequest
                 * @return DescribePredictiveDialingSessionsOutcome
                 */
                DescribePredictiveDialingSessionsOutcome DescribePredictiveDialingSessions(const Model::DescribePredictiveDialingSessionsRequest &request);
                void DescribePredictiveDialingSessionsAsync(const Model::DescribePredictiveDialingSessionsRequest& request, const DescribePredictiveDialingSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingSessionsOutcomeCallable DescribePredictiveDialingSessionsCallable(const Model::DescribePredictiveDialingSessionsRequest& request);

                /**
                 *This API is used to access protected phone service records and recordings for both inbound and outbound calls.
                 * @param req DescribeProtectedTelCdrRequest
                 * @return DescribeProtectedTelCdrOutcome
                 */
                DescribeProtectedTelCdrOutcome DescribeProtectedTelCdr(const Model::DescribeProtectedTelCdrRequest &request);
                void DescribeProtectedTelCdrAsync(const Model::DescribeProtectedTelCdrRequest& request, const DescribeProtectedTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectedTelCdrOutcomeCallable DescribeProtectedTelCdrCallable(const Model::DescribeProtectedTelCdrRequest& request);

                /**
                 *This API is used to access the skill group information list.
                 * @param req DescribeSkillGroupInfoListRequest
                 * @return DescribeSkillGroupInfoListOutcome
                 */
                DescribeSkillGroupInfoListOutcome DescribeSkillGroupInfoList(const Model::DescribeSkillGroupInfoListRequest &request);
                void DescribeSkillGroupInfoListAsync(const Model::DescribeSkillGroupInfoListRequest& request, const DescribeSkillGroupInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillGroupInfoListOutcomeCallable DescribeSkillGroupInfoListCallable(const Model::DescribeSkillGroupInfoListRequest& request);

                /**
                 *This API is used to access the agent information list.
                 * @param req DescribeStaffInfoListRequest
                 * @return DescribeStaffInfoListOutcome
                 */
                DescribeStaffInfoListOutcome DescribeStaffInfoList(const Model::DescribeStaffInfoListRequest &request);
                void DescribeStaffInfoListAsync(const Model::DescribeStaffInfoListRequest& request, const DescribeStaffInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStaffInfoListOutcomeCallable DescribeStaffInfoListCallable(const Model::DescribeStaffInfoListRequest& request);

                /**
                 *This API is used to access the real-time status statistics metrics of the agent.
                 * @param req DescribeStaffStatusMetricsRequest
                 * @return DescribeStaffStatusMetricsOutcome
                 */
                DescribeStaffStatusMetricsOutcome DescribeStaffStatusMetrics(const Model::DescribeStaffStatusMetricsRequest &request);
                void DescribeStaffStatusMetricsAsync(const Model::DescribeStaffStatusMetricsRequest& request, const DescribeStaffStatusMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStaffStatusMetricsOutcomeCallable DescribeStaffStatusMetricsCallable(const Model::DescribeStaffStatusMetricsRequest& request);

                /**
                 *This API is used to access telephone consumption statistics by instance.
                 * @param req DescribeTelCallInfoRequest
                 * @return DescribeTelCallInfoOutcome
                 */
                DescribeTelCallInfoOutcome DescribeTelCallInfo(const Model::DescribeTelCallInfoRequest &request);
                void DescribeTelCallInfoAsync(const Model::DescribeTelCallInfoRequest& request, const DescribeTelCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelCallInfoOutcomeCallable DescribeTelCallInfoCallable(const Model::DescribeTelCallInfoRequest& request);

                /**
                 *This API is used to access phone service records and recordings.
                 * @param req DescribeTelCdrRequest
                 * @return DescribeTelCdrOutcome
                 */
                DescribeTelCdrOutcome DescribeTelCdr(const Model::DescribeTelCdrRequest &request);
                void DescribeTelCdrAsync(const Model::DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelCdrOutcomeCallable DescribeTelCdrCallable(const Model::DescribeTelCdrRequest& request);

                /**
                 *Pull conversation recording for text information
                 * @param req DescribeTelRecordAsrRequest
                 * @return DescribeTelRecordAsrOutcome
                 */
                DescribeTelRecordAsrOutcome DescribeTelRecordAsr(const Model::DescribeTelRecordAsrRequest &request);
                void DescribeTelRecordAsrAsync(const Model::DescribeTelRecordAsrRequest& request, const DescribeTelRecordAsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelRecordAsrOutcomeCallable DescribeTelRecordAsrCallable(const Model::DescribeTelRecordAsrRequest& request);

                /**
                 *This API is used to access the PSTN session information.
                 * @param req DescribeTelSessionRequest
                 * @return DescribeTelSessionOutcome
                 */
                DescribeTelSessionOutcome DescribeTelSession(const Model::DescribeTelSessionRequest &request);
                void DescribeTelSessionAsync(const Model::DescribeTelSessionRequest& request, const DescribeTelSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelSessionOutcomeCallable DescribeTelSessionCallable(const Model::DescribeTelSessionRequest& request);

                /**
                 *This API is used to disable numbers.
                 * @param req DisableCCCPhoneNumberRequest
                 * @return DisableCCCPhoneNumberOutcome
                 */
                DisableCCCPhoneNumberOutcome DisableCCCPhoneNumber(const Model::DisableCCCPhoneNumberRequest &request);
                void DisableCCCPhoneNumberAsync(const Model::DisableCCCPhoneNumberRequest& request, const DisableCCCPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCCCPhoneNumberOutcomeCallable DisableCCCPhoneNumberCallable(const Model::DisableCCCPhoneNumberRequest& request);

                /**
                 *This API is used to force customer service to go offline.
                 * @param req ForceMemberOfflineRequest
                 * @return ForceMemberOfflineOutcome
                 */
                ForceMemberOfflineOutcome ForceMemberOffline(const Model::ForceMemberOfflineRequest &request);
                void ForceMemberOfflineAsync(const Model::ForceMemberOfflineRequest& request, const ForceMemberOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceMemberOfflineOutcomeCallable ForceMemberOfflineCallable(const Model::ForceMemberOfflineRequest& request);

                /**
                 *This API is used to hang up the phone.
                 * @param req HangUpCallRequest
                 * @return HangUpCallOutcome
                 */
                HangUpCallOutcome HangUpCall(const Model::HangUpCallRequest &request);
                void HangUpCallAsync(const Model::HangUpCallRequest& request, const HangUpCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HangUpCallOutcomeCallable HangUpCallCallable(const Model::HangUpCallRequest& request);

                /**
                 *This API is used to modify telephone accounts (binding skill group, binding agent account).
                 * @param req ModifyExtensionRequest
                 * @return ModifyExtensionOutcome
                 */
                ModifyExtensionOutcome ModifyExtension(const Model::ModifyExtensionRequest &request);
                void ModifyExtensionAsync(const Model::ModifyExtensionRequest& request, const ModifyExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtensionOutcomeCallable ModifyExtensionCallable(const Model::ModifyExtensionRequest& request);

                /**
                 *Modify customer's own number approval form
                 * @param req ModifyOwnNumberApplyRequest
                 * @return ModifyOwnNumberApplyOutcome
                 */
                ModifyOwnNumberApplyOutcome ModifyOwnNumberApply(const Model::ModifyOwnNumberApplyRequest &request);
                void ModifyOwnNumberApplyAsync(const Model::ModifyOwnNumberApplyRequest& request, const ModifyOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOwnNumberApplyOutcomeCallable ModifyOwnNumberApplyCallable(const Model::ModifyOwnNumberApplyRequest& request);

                /**
                 *This API is used to modify the customer service account.
                 * @param req ModifyStaffRequest
                 * @return ModifyStaffOutcome
                 */
                ModifyStaffOutcome ModifyStaff(const Model::ModifyStaffRequest &request);
                void ModifyStaffAsync(const Model::ModifyStaffRequest& request, const ModifyStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffOutcomeCallable ModifyStaffCallable(const Model::ModifyStaffRequest& request);

                /**
                 *Modify Agent's Password
                 * @param req ModifyStaffPasswordRequest
                 * @return ModifyStaffPasswordOutcome
                 */
                ModifyStaffPasswordOutcome ModifyStaffPassword(const Model::ModifyStaffPasswordRequest &request);
                void ModifyStaffPasswordAsync(const Model::ModifyStaffPasswordRequest& request, const ModifyStaffPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffPasswordOutcomeCallable ModifyStaffPasswordCallable(const Model::ModifyStaffPasswordRequest& request);

                /**
                 *This API is used to pause the predictive outbound call task.
                 * @param req PausePredictiveDialingCampaignRequest
                 * @return PausePredictiveDialingCampaignOutcome
                 */
                PausePredictiveDialingCampaignOutcome PausePredictiveDialingCampaign(const Model::PausePredictiveDialingCampaignRequest &request);
                void PausePredictiveDialingCampaignAsync(const Model::PausePredictiveDialingCampaignRequest& request, const PausePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PausePredictiveDialingCampaignOutcomeCallable PausePredictiveDialingCampaignCallable(const Model::PausePredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to reset the telephone register password.
                 * @param req ResetExtensionPasswordRequest
                 * @return ResetExtensionPasswordOutcome
                 */
                ResetExtensionPasswordOutcome ResetExtensionPassword(const Model::ResetExtensionPasswordRequest &request);
                void ResetExtensionPasswordAsync(const Model::ResetExtensionPasswordRequest& request, const ResetExtensionPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetExtensionPasswordOutcomeCallable ResetExtensionPasswordCallable(const Model::ResetExtensionPasswordRequest& request);

                /**
                 *This API is used to restore customer service to go live.
                 * @param req RestoreMemberOnlineRequest
                 * @return RestoreMemberOnlineOutcome
                 */
                RestoreMemberOnlineOutcome RestoreMemberOnline(const Model::RestoreMemberOnlineRequest &request);
                void RestoreMemberOnlineAsync(const Model::RestoreMemberOnlineRequest& request, const RestoreMemberOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreMemberOnlineOutcomeCallable RestoreMemberOnlineCallable(const Model::RestoreMemberOnlineRequest& request);

                /**
                 *This API is used to resume the predictive outbound call task.
                 * @param req ResumePredictiveDialingCampaignRequest
                 * @return ResumePredictiveDialingCampaignOutcome
                 */
                ResumePredictiveDialingCampaignOutcome ResumePredictiveDialingCampaign(const Model::ResumePredictiveDialingCampaignRequest &request);
                void ResumePredictiveDialingCampaignAsync(const Model::ResumePredictiveDialingCampaignRequest& request, const ResumePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumePredictiveDialingCampaignOutcomeCallable ResumePredictiveDialingCampaignCallable(const Model::ResumePredictiveDialingCampaignRequest& request);

                /**
                 *This API is used to stop the automatic outbound call task.
                 * @param req StopAutoCalloutTaskRequest
                 * @return StopAutoCalloutTaskOutcome
                 */
                StopAutoCalloutTaskOutcome StopAutoCalloutTask(const Model::StopAutoCalloutTaskRequest &request);
                void StopAutoCalloutTaskAsync(const Model::StopAutoCalloutTaskRequest& request, const StopAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoCalloutTaskOutcomeCallable StopAutoCalloutTaskCallable(const Model::StopAutoCalloutTaskRequest& request);

                /**
                 *This API is used to transfer a session to an agent in specific scenarios.
                 * @param req TransferToManualRequest
                 * @return TransferToManualOutcome
                 */
                TransferToManualOutcome TransferToManual(const Model::TransferToManualRequest &request);
                void TransferToManualAsync(const Model::TransferToManualRequest& request, const TransferToManualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferToManualOutcomeCallable TransferToManualCallable(const Model::TransferToManualRequest& request);

                /**
                 *This API is used to unbind the number from the outbound call skill group.
                 * @param req UnbindNumberCallOutSkillGroupRequest
                 * @return UnbindNumberCallOutSkillGroupOutcome
                 */
                UnbindNumberCallOutSkillGroupOutcome UnbindNumberCallOutSkillGroup(const Model::UnbindNumberCallOutSkillGroupRequest &request);
                void UnbindNumberCallOutSkillGroupAsync(const Model::UnbindNumberCallOutSkillGroupRequest& request, const UnbindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindNumberCallOutSkillGroupOutcomeCallable UnbindNumberCallOutSkillGroupCallable(const Model::UnbindNumberCallOutSkillGroupRequest& request);

                /**
                 *This API is used to unbind the agent's skill group.
                 * @param req UnbindStaffSkillGroupListRequest
                 * @return UnbindStaffSkillGroupListOutcome
                 */
                UnbindStaffSkillGroupListOutcome UnbindStaffSkillGroupList(const Model::UnbindStaffSkillGroupListRequest &request);
                void UnbindStaffSkillGroupListAsync(const Model::UnbindStaffSkillGroupListRequest& request, const UnbindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindStaffSkillGroupListOutcomeCallable UnbindStaffSkillGroupListCallable(const Model::UnbindStaffSkillGroupListRequest& request);

                /**
                 *This API is used to update the skill group.
                 * @param req UpdateCCCSkillGroupRequest
                 * @return UpdateCCCSkillGroupOutcome
                 */
                UpdateCCCSkillGroupOutcome UpdateCCCSkillGroup(const Model::UpdateCCCSkillGroupRequest &request);
                void UpdateCCCSkillGroupAsync(const Model::UpdateCCCSkillGroupRequest& request, const UpdateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCCCSkillGroupOutcomeCallable UpdateCCCSkillGroupCallable(const Model::UpdateCCCSkillGroupRequest& request);

                /**
                 *This API is used to update the predictive outbound call task before it starts.
                 * @param req UpdatePredictiveDialingCampaignRequest
                 * @return UpdatePredictiveDialingCampaignOutcome
                 */
                UpdatePredictiveDialingCampaignOutcome UpdatePredictiveDialingCampaign(const Model::UpdatePredictiveDialingCampaignRequest &request);
                void UpdatePredictiveDialingCampaignAsync(const Model::UpdatePredictiveDialingCampaignRequest& request, const UpdatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePredictiveDialingCampaignOutcomeCallable UpdatePredictiveDialingCampaignCallable(const Model::UpdatePredictiveDialingCampaignRequest& request);

                /**
                 *Upload audio files used in IVR, with a daily upload limit of 50 files. (It is recommended to use temporary links stored in Tencent Cloud Cos for the audio file URL in the parameters)
                 * @param req UploadIvrAudioRequest
                 * @return UploadIvrAudioOutcome
                 */
                UploadIvrAudioOutcome UploadIvrAudio(const Model::UploadIvrAudioRequest &request);
                void UploadIvrAudioAsync(const Model::UploadIvrAudioRequest& request, const UploadIvrAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadIvrAudioOutcomeCallable UploadIvrAudioCallable(const Model::UploadIvrAudioRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
