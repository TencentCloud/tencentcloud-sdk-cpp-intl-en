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
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h>
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
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignResponse.h>


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

                typedef Outcome<Core::Error, Model::AbortPredictiveDialingCampaignResponse> AbortPredictiveDialingCampaignOutcome;
                typedef std::future<AbortPredictiveDialingCampaignOutcome> AbortPredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::AbortPredictiveDialingCampaignRequest&, AbortPredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortPredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::BindNumberCallOutSkillGroupResponse> BindNumberCallOutSkillGroupOutcome;
                typedef std::future<BindNumberCallOutSkillGroupOutcome> BindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindNumberCallOutSkillGroupRequest&, BindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindStaffSkillGroupListResponse> BindStaffSkillGroupListOutcome;
                typedef std::future<BindStaffSkillGroupListOutcome> BindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindStaffSkillGroupListRequest&, BindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdminURLResponse> CreateAdminURLOutcome;
                typedef std::future<CreateAdminURLOutcome> CreateAdminURLOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAdminURLRequest&, CreateAdminURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdminURLAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreatePredictiveDialingCampaignResponse> CreatePredictiveDialingCampaignOutcome;
                typedef std::future<CreatePredictiveDialingCampaignOutcome> CreatePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreatePredictiveDialingCampaignRequest&, CreatePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSDKLoginTokenResponse> CreateSDKLoginTokenOutcome;
                typedef std::future<CreateSDKLoginTokenOutcome> CreateSDKLoginTokenOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateSDKLoginTokenRequest&, CreateSDKLoginTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDKLoginTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaffResponse> CreateStaffOutcome;
                typedef std::future<CreateStaffOutcome> CreateStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateStaffRequest&, CreateStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExtensionResponse> DeleteExtensionOutcome;
                typedef std::future<DeleteExtensionOutcome> DeleteExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteExtensionRequest&, DeleteExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePredictiveDialingCampaignResponse> DeletePredictiveDialingCampaignOutcome;
                typedef std::future<DeletePredictiveDialingCampaignOutcome> DeletePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeletePredictiveDialingCampaignRequest&, DeletePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStaffResponse> DeleteStaffOutcome;
                typedef std::future<DeleteStaffOutcome> DeleteStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteStaffRequest&, DeleteStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStaffAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTelSessionResponse> DescribeTelSessionOutcome;
                typedef std::future<DescribeTelSessionOutcome> DescribeTelSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelSessionRequest&, DescribeTelSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCCCPhoneNumberResponse> DisableCCCPhoneNumberOutcome;
                typedef std::future<DisableCCCPhoneNumberOutcome> DisableCCCPhoneNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DisableCCCPhoneNumberRequest&, DisableCCCPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCCCPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::HangUpCallResponse> HangUpCallOutcome;
                typedef std::future<HangUpCallOutcome> HangUpCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::HangUpCallRequest&, HangUpCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HangUpCallAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtensionResponse> ModifyExtensionOutcome;
                typedef std::future<ModifyExtensionOutcome> ModifyExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyExtensionRequest&, ModifyExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffResponse> ModifyStaffOutcome;
                typedef std::future<ModifyStaffOutcome> ModifyStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffRequest&, ModifyStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::PausePredictiveDialingCampaignResponse> PausePredictiveDialingCampaignOutcome;
                typedef std::future<PausePredictiveDialingCampaignOutcome> PausePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::PausePredictiveDialingCampaignRequest&, PausePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PausePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetExtensionPasswordResponse> ResetExtensionPasswordOutcome;
                typedef std::future<ResetExtensionPasswordOutcome> ResetExtensionPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResetExtensionPasswordRequest&, ResetExtensionPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetExtensionPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumePredictiveDialingCampaignResponse> ResumePredictiveDialingCampaignOutcome;
                typedef std::future<ResumePredictiveDialingCampaignOutcome> ResumePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResumePredictiveDialingCampaignRequest&, ResumePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoCalloutTaskResponse> StopAutoCalloutTaskOutcome;
                typedef std::future<StopAutoCalloutTaskOutcome> StopAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::StopAutoCalloutTaskRequest&, StopAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoCalloutTaskAsyncHandler;
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
                 *This API is used to create a management access link.
                 * @param req CreateAdminURLRequest
                 * @return CreateAdminURLOutcome
                 */
                CreateAdminURLOutcome CreateAdminURL(const Model::CreateAdminURLRequest &request);
                void CreateAdminURLAsync(const Model::CreateAdminURLRequest& request, const CreateAdminURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdminURLOutcomeCallable CreateAdminURLCallable(const Model::CreateAdminURLRequest& request);

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
                 *This API is used to create outbound sessions. Currently, only dual call is supported. That is, firstly, please use the platform number to call the agent's cell phone. After the agent answers, then please make outbound calls to the user. Due to ISP frequency restrictions, the agent's phone number must first be added to the allowlist to avoid frequency control which may lead to the failure of the outbound call.
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
                 *This API is used to query automatic outbound call task details.
                 * @param req DescribeAutoCalloutTaskRequest
                 * @return DescribeAutoCalloutTaskOutcome
                 */
                DescribeAutoCalloutTaskOutcome DescribeAutoCalloutTask(const Model::DescribeAutoCalloutTaskRequest &request);
                void DescribeAutoCalloutTaskAsync(const Model::DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTaskOutcomeCallable DescribeAutoCalloutTaskCallable(const Model::DescribeAutoCalloutTaskRequest& request);

                /**
                 *This API is used to query auto-task outbound calls in batch.
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
                 *This API is used to modify the customer service account.
                 * @param req ModifyStaffRequest
                 * @return ModifyStaffOutcome
                 */
                ModifyStaffOutcome ModifyStaff(const Model::ModifyStaffRequest &request);
                void ModifyStaffAsync(const Model::ModifyStaffRequest& request, const ModifyStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffOutcomeCallable ModifyStaffCallable(const Model::ModifyStaffRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
