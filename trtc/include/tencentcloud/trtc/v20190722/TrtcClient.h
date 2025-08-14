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

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/ControlAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/ControlAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudSliceTaskRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateCloudSliceTaskResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudSliceTaskRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeleteCloudSliceTaskResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudSliceTaskRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCloudSliceTaskResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeMixTranscodingUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordingUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordingUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRelayUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRelayUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeScaleInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeScaleInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketQualityDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCMarketScaleDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeQualityDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTRTCRealTimeScaleDataResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcRoomUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcUsageRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcUsageResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUnusualEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUnusualEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudModerationRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudModerationResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudRecordingResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudSliceTaskRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyCloudSliceTaskResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/SetUserBlockedRequest.h>
#include <tencentcloud/trtc/v20190722/model/SetUserBlockedResponse.h>
#include <tencentcloud/trtc/v20190722/model/SetUserBlockedByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/SetUserBlockedByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopAITranscriptionRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopAITranscriptionResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopPublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopStreamIngestResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopWebRecordRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopWebRecordResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdateAIConversationRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdateAIConversationResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdatePublishCdnStreamResponse.h>
#include <tencentcloud/trtc/v20190722/model/UpdateStreamIngestRequest.h>
#include <tencentcloud/trtc/v20190722/model/UpdateStreamIngestResponse.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            class TrtcClient : public AbstractClient
            {
            public:
                TrtcClient(const Credential &credential, const std::string &region);
                TrtcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ControlAIConversationResponse> ControlAIConversationOutcome;
                typedef std::future<ControlAIConversationOutcome> ControlAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ControlAIConversationRequest&, ControlAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudModerationResponse> CreateCloudModerationOutcome;
                typedef std::future<CreateCloudModerationOutcome> CreateCloudModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudModerationRequest&, CreateCloudModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudRecordingResponse> CreateCloudRecordingOutcome;
                typedef std::future<CreateCloudRecordingOutcome> CreateCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudRecordingRequest&, CreateCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudSliceTaskResponse> CreateCloudSliceTaskOutcome;
                typedef std::future<CreateCloudSliceTaskOutcome> CreateCloudSliceTaskOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateCloudSliceTaskRequest&, CreateCloudSliceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudSliceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudModerationResponse> DeleteCloudModerationOutcome;
                typedef std::future<DeleteCloudModerationOutcome> DeleteCloudModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudModerationRequest&, DeleteCloudModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudRecordingResponse> DeleteCloudRecordingOutcome;
                typedef std::future<DeleteCloudRecordingOutcome> DeleteCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudRecordingRequest&, DeleteCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudSliceTaskResponse> DeleteCloudSliceTaskOutcome;
                typedef std::future<DeleteCloudSliceTaskOutcome> DeleteCloudSliceTaskOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeleteCloudSliceTaskRequest&, DeleteCloudSliceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudSliceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIConversationResponse> DescribeAIConversationOutcome;
                typedef std::future<DescribeAIConversationOutcome> DescribeAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAIConversationRequest&, DescribeAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAITranscriptionResponse> DescribeAITranscriptionOutcome;
                typedef std::future<DescribeAITranscriptionOutcome> DescribeAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAITranscriptionRequest&, DescribeAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallDetailInfoResponse> DescribeCallDetailInfoOutcome;
                typedef std::future<DescribeCallDetailInfoOutcome> DescribeCallDetailInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailInfoRequest&, DescribeCallDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudModerationResponse> DescribeCloudModerationOutcome;
                typedef std::future<DescribeCloudModerationOutcome> DescribeCloudModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudModerationRequest&, DescribeCloudModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudRecordingResponse> DescribeCloudRecordingOutcome;
                typedef std::future<DescribeCloudRecordingOutcome> DescribeCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudRecordingRequest&, DescribeCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudSliceTaskResponse> DescribeCloudSliceTaskOutcome;
                typedef std::future<DescribeCloudSliceTaskOutcome> DescribeCloudSliceTaskOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCloudSliceTaskRequest&, DescribeCloudSliceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudSliceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMixTranscodingUsageResponse> DescribeMixTranscodingUsageOutcome;
                typedef std::future<DescribeMixTranscodingUsageOutcome> DescribeMixTranscodingUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeMixTranscodingUsageRequest&, DescribeMixTranscodingUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMixTranscodingUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingUsageResponse> DescribeRecordingUsageOutcome;
                typedef std::future<DescribeRecordingUsageOutcome> DescribeRecordingUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRecordingUsageRequest&, DescribeRecordingUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelayUsageResponse> DescribeRelayUsageOutcome;
                typedef std::future<DescribeRelayUsageOutcome> DescribeRelayUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRelayUsageRequest&, DescribeRelayUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelayUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomInfoResponse> DescribeRoomInfoOutcome;
                typedef std::future<DescribeRoomInfoOutcome> DescribeRoomInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInfoRequest&, DescribeRoomInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScaleInfoResponse> DescribeScaleInfoOutcome;
                typedef std::future<DescribeScaleInfoOutcome> DescribeScaleInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeScaleInfoRequest&, DescribeScaleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScaleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamIngestResponse> DescribeStreamIngestOutcome;
                typedef std::future<DescribeStreamIngestOutcome> DescribeStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeStreamIngestRequest&, DescribeStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketQualityDataResponse> DescribeTRTCMarketQualityDataOutcome;
                typedef std::future<DescribeTRTCMarketQualityDataOutcome> DescribeTRTCMarketQualityDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketQualityDataRequest&, DescribeTRTCMarketQualityDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketQualityDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCMarketScaleDataResponse> DescribeTRTCMarketScaleDataOutcome;
                typedef std::future<DescribeTRTCMarketScaleDataOutcome> DescribeTRTCMarketScaleDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCMarketScaleDataRequest&, DescribeTRTCMarketScaleDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCMarketScaleDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeQualityDataResponse> DescribeTRTCRealTimeQualityDataOutcome;
                typedef std::future<DescribeTRTCRealTimeQualityDataOutcome> DescribeTRTCRealTimeQualityDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeQualityDataRequest&, DescribeTRTCRealTimeQualityDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeQualityDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTRTCRealTimeScaleDataResponse> DescribeTRTCRealTimeScaleDataOutcome;
                typedef std::future<DescribeTRTCRealTimeScaleDataOutcome> DescribeTRTCRealTimeScaleDataOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTRTCRealTimeScaleDataRequest&, DescribeTRTCRealTimeScaleDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTRTCRealTimeScaleDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcRoomUsageResponse> DescribeTrtcRoomUsageOutcome;
                typedef std::future<DescribeTrtcRoomUsageOutcome> DescribeTrtcRoomUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcRoomUsageRequest&, DescribeTrtcRoomUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcRoomUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcUsageResponse> DescribeTrtcUsageOutcome;
                typedef std::future<DescribeTrtcUsageOutcome> DescribeTrtcUsageOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcUsageRequest&, DescribeTrtcUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnusualEventResponse> DescribeUnusualEventOutcome;
                typedef std::future<DescribeUnusualEventOutcome> DescribeUnusualEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUnusualEventRequest&, DescribeUnusualEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnusualEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserEventResponse> DescribeUserEventOutcome;
                typedef std::future<DescribeUserEventOutcome> DescribeUserEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserEventRequest&, DescribeUserEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebRecordResponse> DescribeWebRecordOutcome;
                typedef std::future<DescribeWebRecordOutcome> DescribeWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeWebRecordRequest&, DescribeWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdResponse> DismissRoomByStrRoomIdOutcome;
                typedef std::future<DismissRoomByStrRoomIdOutcome> DismissRoomByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomByStrRoomIdRequest&, DismissRoomByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudModerationResponse> ModifyCloudModerationOutcome;
                typedef std::future<ModifyCloudModerationOutcome> ModifyCloudModerationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudModerationRequest&, ModifyCloudModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudModerationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudRecordingResponse> ModifyCloudRecordingOutcome;
                typedef std::future<ModifyCloudRecordingOutcome> ModifyCloudRecordingOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudRecordingRequest&, ModifyCloudRecordingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudRecordingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudSliceTaskResponse> ModifyCloudSliceTaskOutcome;
                typedef std::future<ModifyCloudSliceTaskOutcome> ModifyCloudSliceTaskOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyCloudSliceTaskRequest&, ModifyCloudSliceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudSliceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::SetUserBlockedResponse> SetUserBlockedOutcome;
                typedef std::future<SetUserBlockedOutcome> SetUserBlockedOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::SetUserBlockedRequest&, SetUserBlockedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetUserBlockedAsyncHandler;
                typedef Outcome<Core::Error, Model::SetUserBlockedByStrRoomIdResponse> SetUserBlockedByStrRoomIdOutcome;
                typedef std::future<SetUserBlockedByStrRoomIdOutcome> SetUserBlockedByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::SetUserBlockedByStrRoomIdRequest&, SetUserBlockedByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetUserBlockedByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAIConversationResponse> StartAIConversationOutcome;
                typedef std::future<StartAIConversationOutcome> StartAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartAIConversationRequest&, StartAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAITranscriptionResponse> StartAITranscriptionOutcome;
                typedef std::future<StartAITranscriptionOutcome> StartAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartAITranscriptionRequest&, StartAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishCdnStreamResponse> StartPublishCdnStreamOutcome;
                typedef std::future<StartPublishCdnStreamOutcome> StartPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartPublishCdnStreamRequest&, StartPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamIngestResponse> StartStreamIngestOutcome;
                typedef std::future<StartStreamIngestOutcome> StartStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartStreamIngestRequest&, StartStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::StartWebRecordResponse> StartWebRecordOutcome;
                typedef std::future<StartWebRecordOutcome> StartWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartWebRecordRequest&, StartWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAIConversationResponse> StopAIConversationOutcome;
                typedef std::future<StopAIConversationOutcome> StopAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopAIConversationRequest&, StopAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAITranscriptionResponse> StopAITranscriptionOutcome;
                typedef std::future<StopAITranscriptionOutcome> StopAITranscriptionOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopAITranscriptionRequest&, StopAITranscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAITranscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishCdnStreamResponse> StopPublishCdnStreamOutcome;
                typedef std::future<StopPublishCdnStreamOutcome> StopPublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopPublishCdnStreamRequest&, StopPublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamIngestResponse> StopStreamIngestOutcome;
                typedef std::future<StopStreamIngestOutcome> StopStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopStreamIngestRequest&, StopStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamIngestAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWebRecordResponse> StopWebRecordOutcome;
                typedef std::future<StopWebRecordOutcome> StopWebRecordOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopWebRecordRequest&, StopWebRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWebRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAIConversationResponse> UpdateAIConversationOutcome;
                typedef std::future<UpdateAIConversationOutcome> UpdateAIConversationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdateAIConversationRequest&, UpdateAIConversationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAIConversationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePublishCdnStreamResponse> UpdatePublishCdnStreamOutcome;
                typedef std::future<UpdatePublishCdnStreamOutcome> UpdatePublishCdnStreamOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdatePublishCdnStreamRequest&, UpdatePublishCdnStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublishCdnStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateStreamIngestResponse> UpdateStreamIngestOutcome;
                typedef std::future<UpdateStreamIngestOutcome> UpdateStreamIngestOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::UpdateStreamIngestRequest&, UpdateStreamIngestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStreamIngestAsyncHandler;



                /**
                 *Provides server-side control of AI Conversation
                 * @param req ControlAIConversationRequest
                 * @return ControlAIConversationOutcome
                 */
                ControlAIConversationOutcome ControlAIConversation(const Model::ControlAIConversationRequest &request);
                void ControlAIConversationAsync(const Model::ControlAIConversationRequest& request, const ControlAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlAIConversationOutcomeCallable ControlAIConversationCallable(const Model::ControlAIConversationRequest& request);

                /**
                 *API description:
This API is used to enable the cloud moderation feature to complete audio and video slicing, video frame extraction, and audio stream recording in the room, and submit them to the specified moderation supplier for completing the moderation.

This API is used to achieve the following goals:
* This API is used to specify the moderation parameters (ModerationParams) to specify the detailed parameters required for moderation.
* This API is used to specify the storage parameter (SliceStorageParams) to specify the cloud storage you want to upload the file complying with the moderation policy to. Currently, Tencent Cloud Object Storage (COS) and third-party AWS are supported.
                 * @param req CreateCloudModerationRequest
                 * @return CreateCloudModerationOutcome
                 */
                CreateCloudModerationOutcome CreateCloudModeration(const Model::CreateCloudModerationRequest &request);
                void CreateCloudModerationAsync(const Model::CreateCloudModerationRequest& request, const CreateCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudModerationOutcomeCallable CreateCloudModerationCallable(const Model::CreateCloudModerationRequest& request);

                /**
                 *API description:
This API is used to start an on-cloud recording task. It records the audio and video streams in a room and saves them to the specified cloud storage. You can use this API to record the streams in a room separately, or you can mix the streams first and then record the mixed stream.

You can use this API to perform the following operations:
* Specify the anchors whose streams you want or do not want to record by using the `RecordParams` parameter
* Specify the storage service you want to save recording files to by using the `StorageParams` parameter. Currently, you can save recording files to Tencent Cloud VOD or COS.
* Specify transcoding settings for mixed-stream recording, including video resolution, video bitrate, frame rate, and audio quality, by using `MixTranscodeParams`
* Specify the layout of different videos in mixed-stream recording mode or select an auto-arranged layout template

Key concepts:
* Single-stream recording: Record the audio and video of each subscribed user (`UserId`) in a room and save the recording files to the storage you specify.
Mixed-stream recording: Mix the audios and videos of subscribed users (`UserId`) in a room, record the mixed stream, and save the recording files to the storage you specify. After a recording task ends, you can go to the VOD console (https://console.tencentcloud.com/vod/media) or [COS console](https://console.cloud.tencent.com/cos/bucket) to view the recording files.
                 * @param req CreateCloudRecordingRequest
                 * @return CreateCloudRecordingOutcome
                 */
                CreateCloudRecordingOutcome CreateCloudRecording(const Model::CreateCloudRecordingRequest &request);
                void CreateCloudRecordingAsync(const Model::CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudRecordingOutcomeCallable CreateCloudRecordingCallable(const Model::CreateCloudRecordingRequest& request);

                /**
                 *API description:
This API is used to enable the cloud slicing feature, completing audio and video slicing tasks in the room, and uploading them to the specified cloud storage.
This API is used to achieve the following goals:
* This API is used to specify the slicing parameter (SliceParams) to define the blocklist or allowlist of the anchors that require slicing.
* This API is used to specify the storage parameter (SliceStorageParams) to specify the cloud storage you want to upload to. Currently, Tencent Cloud Object Storage (COS) and third-party AWS are supported.
                 * @param req CreateCloudSliceTaskRequest
                 * @return CreateCloudSliceTaskOutcome
                 */
                CreateCloudSliceTaskOutcome CreateCloudSliceTask(const Model::CreateCloudSliceTaskRequest &request);
                void CreateCloudSliceTaskAsync(const Model::CreateCloudSliceTaskRequest& request, const CreateCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudSliceTaskOutcomeCallable CreateCloudSliceTaskCallable(const Model::CreateCloudSliceTaskRequest& request);

                /**
                 *This API is used to stop submission for moderation after the cloud moderation task is successfully started.
                 * @param req DeleteCloudModerationRequest
                 * @return DeleteCloudModerationOutcome
                 */
                DeleteCloudModerationOutcome DeleteCloudModeration(const Model::DeleteCloudModerationRequest &request);
                void DeleteCloudModerationAsync(const Model::DeleteCloudModerationRequest& request, const DeleteCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudModerationOutcomeCallable DeleteCloudModerationCallable(const Model::DeleteCloudModerationRequest& request);

                /**
                 *This API is used to stop a recording task. If a task is stopped successfully, but the uploading of recording files has not completed, the backend will continue to upload the files and will notify you via a callback when the upload is completed.
                 * @param req DeleteCloudRecordingRequest
                 * @return DeleteCloudRecordingOutcome
                 */
                DeleteCloudRecordingOutcome DeleteCloudRecording(const Model::DeleteCloudRecordingRequest &request);
                void DeleteCloudRecordingAsync(const Model::DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudRecordingOutcomeCallable DeleteCloudRecordingCallable(const Model::DeleteCloudRecordingRequest& request);

                /**
                 *This API is used to stop the slicing task after it is started. Successfully stopping the slicing does not mean that all files are fully transmitted; if the transmission is not completed, the backend will continue to upload files. After the upload is successful, a notification is sent to the customer, prompting that all files have been transmitted, through the event callback.
                 * @param req DeleteCloudSliceTaskRequest
                 * @return DeleteCloudSliceTaskOutcome
                 */
                DeleteCloudSliceTaskOutcome DeleteCloudSliceTask(const Model::DeleteCloudSliceTaskRequest &request);
                void DeleteCloudSliceTaskAsync(const Model::DeleteCloudSliceTaskRequest& request, const DeleteCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudSliceTaskOutcomeCallable DeleteCloudSliceTaskCallable(const Model::DeleteCloudSliceTaskRequest& request);

                /**
                 *Describe the AI conversation task status
                 * @param req DescribeAIConversationRequest
                 * @return DescribeAIConversationOutcome
                 */
                DescribeAIConversationOutcome DescribeAIConversation(const Model::DescribeAIConversationRequest &request);
                void DescribeAIConversationAsync(const Model::DescribeAIConversationRequest& request, const DescribeAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIConversationOutcomeCallable DescribeAIConversationCallable(const Model::DescribeAIConversationRequest& request);

                /**
                 *Describe AI transcription task status
                 * @param req DescribeAITranscriptionRequest
                 * @return DescribeAITranscriptionOutcome
                 */
                DescribeAITranscriptionOutcome DescribeAITranscription(const Model::DescribeAITranscriptionRequest &request);
                void DescribeAITranscriptionAsync(const Model::DescribeAITranscriptionRequest& request, const DescribeAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAITranscriptionOutcomeCallable DescribeAITranscriptionCallable(const Model::DescribeAITranscriptionRequest& request);

                /**
                 *This API (the old `DescribeCallDetail`) is used to query the user list and call quality data of a specified time range in the last 14 days. If `DataType` is not null, the data of up to six users during a period of up to one hour can be queried (the period can start and end on different days). If `DataType` is null, the data of up to 100 users can be returned per page (the value of `PageSize` cannot exceed 100). Six users are queried by default. The period queried cannot exceed four hours. This API is used to query call quality and is not recommended for billing purposes.
**Note**:
1. You can use this API to query historical data or for reconciliation purposes, but we do not recommend you use it for crucial business logic.
2. If you need to call this API, please upgrade the monitoring dashboard version to "Standard". For more details, please refer to: https://trtc.io/document/54481?product=pricing.
                 * @param req DescribeCallDetailInfoRequest
                 * @return DescribeCallDetailInfoOutcome
                 */
                DescribeCallDetailInfoOutcome DescribeCallDetailInfo(const Model::DescribeCallDetailInfoRequest &request);
                void DescribeCallDetailInfoAsync(const Model::DescribeCallDetailInfoRequest& request, const DescribeCallDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailInfoOutcomeCallable DescribeCallDetailInfoCallable(const Model::DescribeCallDetailInfoRequest& request);

                /**
                 *This API is used to query the status of the moderation task and information about the subscription blocklist and allowlist after the task is started, which is valid only when the task is in progress. An error will be returned if the task is exited.
                 * @param req DescribeCloudModerationRequest
                 * @return DescribeCloudModerationOutcome
                 */
                DescribeCloudModerationOutcome DescribeCloudModeration(const Model::DescribeCloudModerationRequest &request);
                void DescribeCloudModerationAsync(const Model::DescribeCloudModerationRequest& request, const DescribeCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudModerationOutcomeCallable DescribeCloudModerationCallable(const Model::DescribeCloudModerationRequest& request);

                /**
                 *This API is used to query the status of a recording task after it starts. It works only when a task is in progress. If the task has already ended when this API is called, an error will be returned.
If a recording file is being uploaded to VOD, the response parameter `StorageFileList` will not contain the information of the recording file. Please listen for the recording file callback to get the information.
                 * @param req DescribeCloudRecordingRequest
                 * @return DescribeCloudRecordingOutcome
                 */
                DescribeCloudRecordingOutcome DescribeCloudRecording(const Model::DescribeCloudRecordingRequest &request);
                void DescribeCloudRecordingAsync(const Model::DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudRecordingOutcomeCallable DescribeCloudRecordingCallable(const Model::DescribeCloudRecordingRequest& request);

                /**
                 *This API is used to query the status of the slicing task after it is started, which is valid only when the task is in progress. An error will be returned if the task is exited.
                 * @param req DescribeCloudSliceTaskRequest
                 * @return DescribeCloudSliceTaskOutcome
                 */
                DescribeCloudSliceTaskOutcome DescribeCloudSliceTask(const Model::DescribeCloudSliceTaskRequest &request);
                void DescribeCloudSliceTaskAsync(const Model::DescribeCloudSliceTaskRequest& request, const DescribeCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudSliceTaskOutcomeCallable DescribeCloudSliceTaskCallable(const Model::DescribeCloudSliceTaskRequest& request);

                /**
                 *This API is used to query your usage of TRTC’s On-Cloud MixTranscoding service.
- If the period queried is one day or shorter, the statistics returned are on a five-minute basis. If the period queried is longer than one day, the statistics returned are on a daily basis.
- The period queried per request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- You can use this API to query your historical usage or to reconcile data, but we do not recommend you use it for crucial business logic.
- The rate limit of this API is five calls per second.
                 * @param req DescribeMixTranscodingUsageRequest
                 * @return DescribeMixTranscodingUsageOutcome
                 */
                DescribeMixTranscodingUsageOutcome DescribeMixTranscodingUsage(const Model::DescribeMixTranscodingUsageRequest &request);
                void DescribeMixTranscodingUsageAsync(const Model::DescribeMixTranscodingUsageRequest& request, const DescribeMixTranscodingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMixTranscodingUsageOutcomeCallable DescribeMixTranscodingUsageCallable(const Model::DescribeMixTranscodingUsageRequest& request);

                /**
                 *This API is used to query your TRTC recording usage.
- If the period queried is one day or shorter, the statistics returned are on a five-minute basis. If the period queried is longer than one day, the statistics returned are on a daily basis.
- The period queried per request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- You can use this API to query your historical usage or to reconcile data, but we do not recommend you use it for crucial business logic.
- The rate limit of this API is five calls per second.
                 * @param req DescribeRecordingUsageRequest
                 * @return DescribeRecordingUsageOutcome
                 */
                DescribeRecordingUsageOutcome DescribeRecordingUsage(const Model::DescribeRecordingUsageRequest &request);
                void DescribeRecordingUsageAsync(const Model::DescribeRecordingUsageRequest& request, const DescribeRecordingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingUsageOutcomeCallable DescribeRecordingUsageCallable(const Model::DescribeRecordingUsageRequest& request);

                /**
                 *This API is used to query your usage of TRTC’s relay to CDN service.
- If the period queried is one day or shorter, the statistics returned are on a five-minute basis. If the period queried is longer than one day, the statistics returned are on a daily basis.
- The period queried per request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- You can use this API to query your historical usage or to reconcile data, but we do not recommend you use it for crucial business logic.
- The rate limit of this API is five calls per second.
                 * @param req DescribeRelayUsageRequest
                 * @return DescribeRelayUsageOutcome
                 */
                DescribeRelayUsageOutcome DescribeRelayUsage(const Model::DescribeRelayUsageRequest &request);
                void DescribeRelayUsageAsync(const Model::DescribeRelayUsageRequest& request, const DescribeRelayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelayUsageOutcomeCallable DescribeRelayUsageCallable(const Model::DescribeRelayUsageRequest& request);

                /**
                 *This API (the old `DescribeRoomInformation`) is used to query the rooms of an application (`SDKAppID`) in the last 14 days. Up to 100 records can be returned per call (10 are returned by default).
**Note**:
1. You can use this API to query historical data or for reconciliation purposes, but we do not recommend you use it for crucial business logic.
2. If you need to call this API, please upgrade the monitoring dashboard version to "Standard". For more details, please refer to: https://trtc.io/document/54481
                 * @param req DescribeRoomInfoRequest
                 * @return DescribeRoomInfoOutcome
                 */
                DescribeRoomInfoOutcome DescribeRoomInfo(const Model::DescribeRoomInfoRequest &request);
                void DescribeRoomInfoAsync(const Model::DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInfoOutcomeCallable DescribeRoomInfoCallable(const Model::DescribeRoomInfoRequest& request);

                /**
                 *This API (the old `DescribeHistoryScale`) is used to query the daily number of rooms and users of an application (`SDKAppID`) in the last 14 days. Data for the current day cannot be queried.
                 * @param req DescribeScaleInfoRequest
                 * @return DescribeScaleInfoOutcome
                 */
                DescribeScaleInfoOutcome DescribeScaleInfo(const Model::DescribeScaleInfoRequest &request);
                void DescribeScaleInfoAsync(const Model::DescribeScaleInfoRequest& request, const DescribeScaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScaleInfoOutcomeCallable DescribeScaleInfoCallable(const Model::DescribeScaleInfoRequest& request);

                /**
                 *You can query the status of the Relay task.
                 * @param req DescribeStreamIngestRequest
                 * @return DescribeStreamIngestOutcome
                 */
                DescribeStreamIngestOutcome DescribeStreamIngest(const Model::DescribeStreamIngestRequest &request);
                void DescribeStreamIngestAsync(const Model::DescribeStreamIngestRequest& request, const DescribeStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamIngestOutcomeCallable DescribeStreamIngestCallable(const Model::DescribeStreamIngestRequest& request);

                /**
                 *Query TRTC Monitoring Dashboard - Data Dashboard Quality Metrics (including the following metrics)
joinSuccessRate: Join channel success rate.
joinSuccessIn5sRate: Join channel success rate within 5s.
audioFreezeRate: Audio stutter rate.
videoFreezeRate: Video stutter rate.
networkDelay: Lag rate.
Note:
1. To call the API, you need to activate the monitoring dashboard Standard Edition and Premium Edition, the monitoring dashboard Free Edition does not support calling. Monitoring dashboard version features and billing overview: https://trtc.io/document/54481.
2. The query time range depends on the monitoring dashboard function version, premium edition can query the last 30 days.
                 * @param req DescribeTRTCMarketQualityDataRequest
                 * @return DescribeTRTCMarketQualityDataOutcome
                 */
                DescribeTRTCMarketQualityDataOutcome DescribeTRTCMarketQualityData(const Model::DescribeTRTCMarketQualityDataRequest &request);
                void DescribeTRTCMarketQualityDataAsync(const Model::DescribeTRTCMarketQualityDataRequest& request, const DescribeTRTCMarketQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketQualityDataOutcomeCallable DescribeTRTCMarketQualityDataCallable(const Model::DescribeTRTCMarketQualityDataRequest& request);

                /**
                 *Query TRTC Monitoring Dashboard - Data Dashboard Scale Metrics (will return userCount, roomCount, peakCurrentUsers, peakCurrentChannels)
- userCount: number of users in the call,
- roomCount: number of rooms in the call, counted as one call channel from the time a user joins the channel to the time all users leave the channel.
- peakCurrentChannels: peak number of channels online at the same time.
- peakCurrentUsers: peak number of users online at the same time.
Note:
1. To call the interface, you need to activate the monitoring dashboard Standard Edition and Premium Edition, the monitoring dashboard Free Edition does not support calling, for monitoring dashboard version features and billing overview: https://trtc.io/document/54481.
2. The query time range depends on the monitoring dashboard function version, premium edition can query up to 60 days.
                 * @param req DescribeTRTCMarketScaleDataRequest
                 * @return DescribeTRTCMarketScaleDataOutcome
                 */
                DescribeTRTCMarketScaleDataOutcome DescribeTRTCMarketScaleData(const Model::DescribeTRTCMarketScaleDataRequest &request);
                void DescribeTRTCMarketScaleDataAsync(const Model::DescribeTRTCMarketScaleDataRequest& request, const DescribeTRTCMarketScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCMarketScaleDataOutcomeCallable DescribeTRTCMarketScaleDataCallable(const Model::DescribeTRTCMarketScaleDataRequest& request);

                /**
                 *Query TRTC Monitoring Dashboard - Real-Time Monitoring Quality Metrics (return the following metrics)
 -Video stutter rate
 -Audio stutter rate
 Note:
 1. To call the API, you need to activate the Monitoring Dashboard Standard Edition and Premium Edition. The Monitoring Dashboard Free Edition does not support calling. For monitoring dashboard version features and billing overview, please visit: https://trtc.io/document/54481.
 2. The query time range depends on the monitoring dashboard function version. The premium edition can query up to 1 hours
                 * @param req DescribeTRTCRealTimeQualityDataRequest
                 * @return DescribeTRTCRealTimeQualityDataOutcome
                 */
                DescribeTRTCRealTimeQualityDataOutcome DescribeTRTCRealTimeQualityData(const Model::DescribeTRTCRealTimeQualityDataRequest &request);
                void DescribeTRTCRealTimeQualityDataAsync(const Model::DescribeTRTCRealTimeQualityDataRequest& request, const DescribeTRTCRealTimeQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeQualityDataOutcomeCallable DescribeTRTCRealTimeQualityDataCallable(const Model::DescribeTRTCRealTimeQualityDataRequest& request);

                /**
                 *Query TRTC Monitoring Dashboard - Real-Time Monitoring Scale Metrics (the following metrics will be returned) -userCount (Online users) -roomCount (Online rooms) Note: 1. To call the interface, you need to activate the monitoring dashboard Standard Edition and Premium Edition, the monitoring dashboard Free Edition does not support calling. For monitoring dashboard version features and billing overview, please visit: https://trtc.io/document/54481. 2. The query time range depends on the function version of the monitoring dashboard. The premium edition can query the last 1 hours
                 * @param req DescribeTRTCRealTimeScaleDataRequest
                 * @return DescribeTRTCRealTimeScaleDataOutcome
                 */
                DescribeTRTCRealTimeScaleDataOutcome DescribeTRTCRealTimeScaleData(const Model::DescribeTRTCRealTimeScaleDataRequest &request);
                void DescribeTRTCRealTimeScaleDataAsync(const Model::DescribeTRTCRealTimeScaleDataRequest& request, const DescribeTRTCRealTimeScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTRTCRealTimeScaleDataOutcomeCallable DescribeTRTCRealTimeScaleDataCallable(const Model::DescribeTRTCRealTimeScaleDataRequest& request);

                /**
                 *This API is used to query usage data grouped by room.
- The queried period cannot exceed 24 hours. If the period spans two different days, the data returned may not be accurate due to a delay in data collection. You can make multiple calls to query the usage on different days.
- You can use this API to query your historical usage or to reconcile data, but we do not recommend you use it for crucial business logic.
- The rate limit of this API is one call every 15 seconds.
                 * @param req DescribeTrtcRoomUsageRequest
                 * @return DescribeTrtcRoomUsageOutcome
                 */
                DescribeTrtcRoomUsageOutcome DescribeTrtcRoomUsage(const Model::DescribeTrtcRoomUsageRequest &request);
                void DescribeTrtcRoomUsageAsync(const Model::DescribeTrtcRoomUsageRequest& request, const DescribeTrtcRoomUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcRoomUsageOutcomeCallable DescribeTrtcRoomUsageCallable(const Model::DescribeTrtcRoomUsageRequest& request);

                /**
                 *This API is used to query your TRTC audio/video duration.
- If the period queried is one day or shorter, the statistics returned are on a five-minute basis. If the period queried is longer than one day, the statistics returned are on a daily basis.
- The period queried per request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- You can use this API to query your historical usage or to reconcile data, but we do not recommend you use it for crucial business logic.
- The rate limit of this API is five calls per second.
                 * @param req DescribeTrtcUsageRequest
                 * @return DescribeTrtcUsageOutcome
                 */
                DescribeTrtcUsageOutcome DescribeTrtcUsage(const Model::DescribeTrtcUsageRequest &request);
                void DescribeTrtcUsageAsync(const Model::DescribeTrtcUsageRequest& request, const DescribeTrtcUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcUsageOutcomeCallable DescribeTrtcUsageCallable(const Model::DescribeTrtcUsageRequest& request);

                /**
                 *This API (the old `DescribeAbnormalEvent`) is used to query up to 20 random abnormal user experiences of an application (`SDKAppID`) in the last 14 days. The start and end time can be on two different days, but they cannot be more than one hour apart.
For details about the error events, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
**Note**:
1. You can use this API to query historical data or for reconciliation purposes, but we do not recommend you use it for crucial business logic.
2. If you need to call this API, please upgrade the monitoring dashboard version to "Standard". For more details, please refer to: https://www.tencentcloud.com/document/product/647/54481.
                 * @param req DescribeUnusualEventRequest
                 * @return DescribeUnusualEventOutcome
                 */
                DescribeUnusualEventOutcome DescribeUnusualEvent(const Model::DescribeUnusualEventRequest &request);
                void DescribeUnusualEventAsync(const Model::DescribeUnusualEventRequest& request, const DescribeUnusualEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnusualEventOutcomeCallable DescribeUnusualEventCallable(const Model::DescribeUnusualEventRequest& request);

                /**
                 *This API (the old `DescribeDetailEvent`) is used to query the events of a call in the last 14 days, including user entry and exit, turning the camera on/off, etc.
**Note**:
1. You can use this API to query historical data or for reconciliation purposes, but we do not recommend you use it for crucial business logic.
2. If you need to call this API, please upgrade the monitoring dashboard version to "Standard". For more details, please refer to: https://trtc.io/document/54481?product=pricing.
                 * @param req DescribeUserEventRequest
                 * @return DescribeUserEventOutcome
                 */
                DescribeUserEventOutcome DescribeUserEvent(const Model::DescribeUserEventRequest &request);
                void DescribeUserEventAsync(const Model::DescribeUserEventRequest& request, const DescribeUserEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserEventOutcomeCallable DescribeUserEventCallable(const Model::DescribeUserEventRequest& request);

                /**
                 *This API (the old `DescribeUserInformation`) is used to query the user list of a specified time range (up to four hours) in the last 14 days. The data of up to 100 users can be returned per page (six are returned by default).
**Note**:
1. You can use this API to query historical data or for reconciliation purposes, but we do not recommend you use it for crucial business logic.
2. If you need to call this API, please upgrade the monitoring dashboard version to "Standard". For more details, please refer to: https://trtc.io/document/60214?product=pricing.
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *Queries the status of a web-page recording task
                 * @param req DescribeWebRecordRequest
                 * @return DescribeWebRecordOutcome
                 */
                DescribeWebRecordOutcome DescribeWebRecord(const Model::DescribeWebRecordRequest &request);
                void DescribeWebRecordAsync(const Model::DescribeWebRecordRequest& request, const DescribeWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebRecordOutcomeCallable DescribeWebRecordCallable(const Model::DescribeWebRecordRequest& request);

                /**
                 *This API is used to remove all users from a room and dismiss the room. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *This API is used to remove all users from a room and close the room. It works on all platforms. For Android, iOS, Windows, and macOS, you need to update the TRTC SDK to version 6.6 or above.
                 * @param req DismissRoomByStrRoomIdRequest
                 * @return DismissRoomByStrRoomIdOutcome
                 */
                DismissRoomByStrRoomIdOutcome DismissRoomByStrRoomId(const Model::DismissRoomByStrRoomIdRequest &request);
                void DismissRoomByStrRoomIdAsync(const Model::DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomByStrRoomIdOutcomeCallable DismissRoomByStrRoomIdCallable(const Model::DismissRoomByStrRoomIdRequest& request);

                /**
                 *This API is used to update the subscription blocklist and allowlist after the cloud moderation task is successfully started.
                 * @param req ModifyCloudModerationRequest
                 * @return ModifyCloudModerationOutcome
                 */
                ModifyCloudModerationOutcome ModifyCloudModeration(const Model::ModifyCloudModerationRequest &request);
                void ModifyCloudModerationAsync(const Model::ModifyCloudModerationRequest& request, const ModifyCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudModerationOutcomeCallable ModifyCloudModerationCallable(const Model::ModifyCloudModerationRequest& request);

                /**
                 *This API is used to modify a recording task. It works only when a task is in progress. If the task has already ended when this API is called, an error will be returned. You need to specify all the parameters for each request instead of just the ones you want to modify.
                 * @param req ModifyCloudRecordingRequest
                 * @return ModifyCloudRecordingOutcome
                 */
                ModifyCloudRecordingOutcome ModifyCloudRecording(const Model::ModifyCloudRecordingRequest &request);
                void ModifyCloudRecordingAsync(const Model::ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudRecordingOutcomeCallable ModifyCloudRecordingCallable(const Model::ModifyCloudRecordingRequest& request);

                /**
                 *This API is used to update the slicing task after it is started. It can be used to update the allowlist or blocklist for the specified subscription stream.
                 * @param req ModifyCloudSliceTaskRequest
                 * @return ModifyCloudSliceTaskOutcome
                 */
                ModifyCloudSliceTaskOutcome ModifyCloudSliceTask(const Model::ModifyCloudSliceTaskRequest &request);
                void ModifyCloudSliceTaskAsync(const Model::ModifyCloudSliceTaskRequest& request, const ModifyCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudSliceTaskOutcomeCallable ModifyCloudSliceTaskCallable(const Model::ModifyCloudSliceTaskRequest& request);

                /**
                 *This API is used to remove a user from a room. It is applicable to scenarios where the anchor, room owner, or admin wants to kick out a user. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

                /**
                 *This API is used to remove a user from a room. It allows the anchor, room owner, or admin to kick out a user, and works on all platforms. For Android, iOS, Windows, and macOS, you need to update the TRTC SDK to version 6.6 or above.
                 * @param req RemoveUserByStrRoomIdRequest
                 * @return RemoveUserByStrRoomIdOutcome
                 */
                RemoveUserByStrRoomIdOutcome RemoveUserByStrRoomId(const Model::RemoveUserByStrRoomIdRequest &request);
                void RemoveUserByStrRoomIdAsync(const Model::RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserByStrRoomIdOutcomeCallable RemoveUserByStrRoomIdCallable(const Model::RemoveUserByStrRoomIdRequest& request);

                /**
                 *This API is used to disable or enable the audio and video of a user. It can be used by an anchor, room owner, or admin to block or unblock a user. It supports platforms including Android, iOS, Windows, macOS, web, and WeChat Mini Program. Use this API if the room ID is a number.
                 * @param req SetUserBlockedRequest
                 * @return SetUserBlockedOutcome
                 */
                SetUserBlockedOutcome SetUserBlocked(const Model::SetUserBlockedRequest &request);
                void SetUserBlockedAsync(const Model::SetUserBlockedRequest& request, const SetUserBlockedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetUserBlockedOutcomeCallable SetUserBlockedCallable(const Model::SetUserBlockedRequest& request);

                /**
                 *This API allows an anchor, room owner, admin to mute/unmute a user. It can be used on platforms including Android, iOS, Windows, macOS, web, and WeChat Mini Program. Use this API when the room ID is a string.
                 * @param req SetUserBlockedByStrRoomIdRequest
                 * @return SetUserBlockedByStrRoomIdOutcome
                 */
                SetUserBlockedByStrRoomIdOutcome SetUserBlockedByStrRoomId(const Model::SetUserBlockedByStrRoomIdRequest &request);
                void SetUserBlockedByStrRoomIdAsync(const Model::SetUserBlockedByStrRoomIdRequest& request, const SetUserBlockedByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetUserBlockedByStrRoomIdOutcomeCallable SetUserBlockedByStrRoomIdCallable(const Model::SetUserBlockedByStrRoomIdRequest& request);

                /**
                 *Initiate AI conversation task, where the AI bot enters the TRTC room to engage in AI conversation with specified members in the room. This is suitable for scenarios such as intelligent customer service and AI language teachers. The TRTC AI conversation feature has built-in speech-to-text capabilities , allowing customers to flexibly specify third-party AI model (LLM) services and text-to-speech (TTS) services. For more [feature details](https://cloud.tencent.com/document/product/647/108901).
                 * @param req StartAIConversationRequest
                 * @return StartAIConversationOutcome
                 */
                StartAIConversationOutcome StartAIConversation(const Model::StartAIConversationRequest &request);
                void StartAIConversationAsync(const Model::StartAIConversationRequest& request, const StartAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAIConversationOutcomeCallable StartAIConversationCallable(const Model::StartAIConversationRequest& request);

                /**
                 *Initiate the transcription bot. The backend will pull the stream through the bot to perform real-time speech recognition and deliver subtitles and transcription messages. The transcription bot supports two stream pulling modes, controlled by the `TranscriptionMode` field:
- Pull the stream of the entire room.
- Pull the stream of a specific user.

The server delivers subtitles and transcription messages in real-time through TRTC's custom messages, with `CmdId` fixed at 1. The client only needs to listen for the callback of custom messages. For example, see the [C++ callback](https://cloud.tencent.com/document/product/647/79637#4cd82f4edb24992a15a25187089e1565). Other clients, such as Android, Web, etc., can also be found at the same link.
                 * @param req StartAITranscriptionRequest
                 * @return StartAITranscriptionOutcome
                 */
                StartAITranscriptionOutcome StartAITranscription(const Model::StartAITranscriptionRequest &request);
                void StartAITranscriptionAsync(const Model::StartAITranscriptionRequest& request, const StartAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAITranscriptionOutcomeCallable StartAITranscriptionCallable(const Model::StartAITranscriptionRequest& request);

                /**
                 *In a TRTC room, there may be multiple audio and video streams concurrently active. You can use the MixTranscoding API to notify Tencent Cloud server to mix multiple video screens from the same room or multiple rooms together, and specify the position of each screen, while mixing multiple audio streams together. The final result is a single audio and video stream, which can be used for recording and live viewing. It also supports pushing this mixed audio and video stream back to the TRTC room.

The Cloud API MixTranscoding feature includes three interfaces:
1. StartPublishCdnStream: Start a MixTranscoding task. This interface will initiate a new MixTranscoding task. After the task is successfully started, a unique TaskId will be returned under the sdkappid dimension. You need to save this TaskId, as it will be required for updating and stopping the task later.
2. UpdatePublishCdnStream: Update the specified MixTranscoding task, including updating the video screen layout, updating the mixing list, updating the list of CDN addresses to be relayed, and updating the list of rooms to be pushed back.
3. StopPublishCdnStream: Stop the specified MixTranscoding task.

You can achieve the following goals through this set of interfaces:
1. Set the final video and audio quality, including video resolution, video frame rate, video bitrate, and audio quality.
2. Set the layout position of each screen. You only need to set it once. When you specify the MixTranscoding user to enter the room and send audio and video, the layout engine will automatically mix the user's screen to the specified layout position. You can also use the update interface to adjust the layout position.
3. Set multiple CDN relay target addresses. A single relay task can support up to 10 CDN relay addresses at the same time.
4. Set multiple room pushback lists. A single relay task can support up to 10 TRTC rooms for mixed stream pushback.

The following layout templates are currently supported. Dynamic layout templates (floating template, grid template, screen sharing template) only support a single TRTC room, while custom templates support mixing audio and video streams from multiple TRTC rooms. The specific descriptions are as follows:
1. Floating template: The video screen of the first user entering the room will fill the entire screen, and the video screens of other users will be arranged horizontally from the bottom left corner, displaying as small screens, with up to 4 rows and 4 screens per row. The small screens float above the large screen. It supports up to 1 large screen and 15 small screens. If the user only sends audio, it does not occupy the layout configuration by default, but it can also be set. Each sub-screen is rendered by default using the center cropping method, and the rendering method of the sub-screen can also be set uniformly.
2. Grid template: The video screens of all users are of the same size, evenly dividing the entire screen. The more people there are, the smaller the size of each user's screen. It supports up to 16 screens. If the user only sends audio, it does not occupy the layout configuration by default, but it can also be set. Each sub-screen is rendered by default using the center cropping method, and the rendering method of the sub-screen can also be set uniformly.
3. Screen sharing template: Suitable for video conference and online education scenarios. The screen sharing (or the main speaker's camera) always occupies the large screen position on the left side of the screen. You need to explicitly set the MixTranscoding user information that occupies the large screen. Other users are arranged vertically on the right side, with up to two columns and 8 small screens per column. It supports up to 1 large screen and 15 small screens. If the uplink resolution aspect ratio is different from the screen output aspect ratio, the large screen on the left side will be scaled to maintain content integrity, while the small screens on the right side will be cropped. The rendering method of the sub-screen can also be set uniformly.
4. Custom layout template: Allows you to actively set the layout position according to your business needs. Each preset layout position supports named settings (named settings require specifying the room number and username) and unnamed settings. When a sub-screen is named, the position is reserved for the user, and the user will automatically occupy the position when entering the room and sending audio and video data. Other users will not occupy this position. When the preset layout position is not named, the layout engine will automatically fill in the order of entering the room. When the preset positions are full, no other users' screens and sounds will be mixed. Each sub-screen position supports setting placeholder images (BackgroundImageUrl). When the user does not enter the room or only sends audio data, the screen at this position can display the corresponding placeholder image.

When using the relay API, you may incur the following costs depending on the usage characteristics:
For MCU MixTranscoding fees, please refer to the documentation: Billing of MixTranscoding and Relay to CDN | Tencent Cloud.
For non-Tencent Cloud CDN relay fees, please refer to the documentation: Billing of MixTranscoding and Relay to CDN | Tencent Cloud.

Instructions for using parameters:
1. AgentParams: Each relay task will pull a robot user into the TRTC room to pull the stream. You need to set this robot user through the AgentParams.UserId parameter. This robot ID cannot conflict with the normal user ID in the room, otherwise, the relay task will be abnormally terminated due to the robot user being kicked out of the TRTC room. You can avoid this by adding a special prefix. You can control the automatic termination of the relay task by setting AgentParams.MaxIdleTime. When this parameter is set, the relay task will automatically stop when all participating MixTranscoding anchors continuously leave the TRTC room for more than MaxIdleTime duration. Note: The relay task will not automatically stop when the participating MixTranscoding anchor only stops sending audio and video.
2. WithTranscoding: If you need to mix multiple audio and video streams into one, WithTranscoding must be set to 1.
3. AudioParams: The audio parameters and video parameters of the relay task are set separately. If you want to mix the audio of specified users, you need to explicitly set AudioParams.SubscribeAudioList. If you do not set AudioParams.SubscribeAudioList, the mixing engine will automatically mix the audio of all users in the TRTC room. If you want to mix the audio of all users in the TRTC room except for specified users, you can set the audio blacklist list through AudioParams.UnSubscribeAudioList.
4. VideoParams: If you want to mix user videos, you can set it through VideoParams. If you only want to mix audio, you do not need to set VideoParams. You can set the screen layout mode through VideoParams.LayoutParams.MixLayoutMode, including dynamic layout (1: floating layout (default), 2: screen sharing layout, 3: grid layout) and custom layout. The dynamic layout mode is automatically mixed by the layout engine according to a fixed layout, and there is no need to set VideoParams.LayoutParams.MixLayoutList. When using the floating layout and screen sharing layout, you can specify the large screen user by setting VideoParams.LayoutParams.MaxVideoUser. The custom layout mode provides you with the ability to layout screens independently, and you can specify the layout position of each user through VideoParams.LayoutParams.MixLayoutList. In each layout parameter, you can specify the layout position for the specified user by setting the UserMediaStream parameter, or you can not set the UserMediaStream, and the layout engine will automatically fill in the order of users entering the TRTC room. In addition, you can set the rendering method (RenderMode) and cropping method (CustomCrop) for each layout position.
5. VideoParams.WaterMarkList: If you want to overlay a watermark on the mixed screen, you can set it through VideoParams.WaterMarkList. It supports image watermarks and text watermarks and supports transparent channels.
6. SingleSubscribeParams: If you want to push a single stream from the TRTC room to the CDN, you can set it using the SingleSubscribeParams parameter. In this case, you need to set the WithTranscoding parameter to 0.
7. PublishCdnParams.N: If you want to push the stream to the CDN, you can set it using the PublishCdnParams.N parameter. It supports pushing to up to 10 CDN addresses at the same time. If the relay address is Tencent Cloud CDN, please set IsTencentCdn explicitly to 1; if you need to relay to a non-Tencent Cloud CDN, please contact Tencent Cloud Technical Support to enable it. Relaying to non-Tencent Cloud will incur relay fees. For fee information, please refer to the official documentation: On-Cloud Relay Billing Overview.
8. FeedBackRoomParams.N: If you want to push the mixed audio and video stream back to the TRTC room, you can set it using the FeedBackRoomParams.N parameter. It supports pushing up to 10 streams back to the TRTC room at the same time. You need to specify the TRTC room number and robot ID (UserId) for the pushback. The robot ID cannot conflict with the normal user ID, otherwise, the relay task will be abnormally terminated due to the robot user being kicked out of the TRTC room. You can avoid this by adding a special prefix.
9. SeiParams: If you want to add SEI information to the mixed audio and video stream, you can set it using the SeiParams parameter. It supports volume layout SEI and overlay relay request SEI. The content of the volume layout SEI is a fixed JSON structure, please see the SEI description in the following section of this chapter. You can set the SEI to follow the keyframe by setting the FollowIdr parameter. The description of the volume layout SEI is as follows:
If your CDN audience needs to recognize the position of the participating MixTranscoding anchors and the volume information of the participating MixTranscoding anchors, you can use the volume layout SEI. The payload content and parameter description of the volume layout SEI are as follows:
{ "app_data":"", "canvas":{ "w":1080, "h":960 }, "regions":[ { "uid":"65949987242835883c", "zorder":2, "volume":45, "x":270, "y":480, "w":540, "h":480 }, { "uid":"659c9d8d242b328d31", "zorder":2, "volume":0, "x":0, "y":0, "w":540, "h":480 }, { "uid":"64989a82272b308c", "zorder":2, "volume":91, "x":540, "y":0, "w":540, "h":480 } ], "ver":"1.0", "ts":1648544726 }
canvas: This is the width and height of the VideoEncode setting in the MixTranscoding signaling, that is, the width and height of the entire canvas of the MixTranscoding output.
regions: Contains the real mixed user ID and the corresponding sub-screen position. If the participating MixTranscoding user does not enter the TRTC room or does not turn on the video uplink, the regions will not include the user.
uid: Represents the user ID participating in MixTranscoding.
zorder: The layer of the participating MixTranscoding userid in the MixTranscoding output.
x/y: The coordinates of the sub-screen of the participating MixTranscoding userid on the canvas.
w/h: The size of the sub-screen of the participating MixTranscoding userid.
volume: Represents the volume of the MixTranscoding user, with a value range of 0-100. The larger the value, the greater the volume of the user participating in MixTranscoding.
ts: The server local second-level timestamp for outputting SEI. 
ver: can be ignored.

Usage Precautions:
1. When using the Mixed Relay Interface, you need to call the Start Relay Task Interface (StartPublishCdnStream) first to get the Task ID from the response. Then, use the Task ID to update the relay task (UpdatePublishCdnStream) and stop the relay task (StopPublishCdnStream).
2. The Relay API does not support initiating Automatic Bypass Tasks configured in the TRTC Console, nor does it support Custom Stream ID bypass tasks set in the TRTC SDK room entry interface.
3. To ensure the stability of the relay link, the same relay task does not support switching between Audio only, Audio and Video, and Video only.
4. To ensure the stability of the relay link, updating video parameters (codec) and audio parameters (codec, Sample rate, bitrate, and number of channels) is not supported during the Update Video process.
5. When initiating a single stream bypass task, filling in both Audio Parameters and Video Parameters means Audio and Video bypass. If only Audio Parameters are filled in, it means Audio only bypass, and switching from Audio only to Audio and Video is not supported during the task progress. For Audio and Video bypass, the Width, Height, Fps, BitRate, and Gop in Video Parameters must be filled in according to the real upstream parameters.
6. The SequenceNumber parameter must be carried in the update request to prevent request disorder. Customers must ensure that the SequenceNumber parameter increases when updating the same task, otherwise, the mix task update will fail.
7. When calling the API, choose the region according to the following instructions: If the Application ID is 1400xxx, the region can be Beijing, Shanghai, Guangzhou, or Hong Kong. If your CDN audience is mainly overseas, please choose Hong Kong. If the Application ID is 200xxx or 400xxx, please choose Singapore.
8. Streams pushed back to the TRTC room will not participate in the mixing of other push back room tasks. If one of the following conditions is met, it can participate in the mixing of other relay CDN tasks: (1) The push stream robot is specified to participate in the mixing in the video parameters of the relay CDN task; (2) The push stream robot is specified to participate in the mixing in the audio parameters of the relay CDN task through the whitelist method; (3) The room number of the mix user participating in the relay CDN task is completely different from the room number of the mix user corresponding to the push back robot.
9. You can create a relay task before the anchor enters the room. When the relay task is finished, you need to call the stop interface actively. If you do not call the Stop Relay Task Interface, Tencent Cloud will automatically stop the mix relay task when all users participating in the mix have no data uploaded for a period of time exceeding the timeout (AgentParams.MaxIdleTime) set when starting the relay task.
                 * @param req StartPublishCdnStreamRequest
                 * @return StartPublishCdnStreamOutcome
                 */
                StartPublishCdnStreamOutcome StartPublishCdnStream(const Model::StartPublishCdnStreamRequest &request);
                void StartPublishCdnStreamAsync(const Model::StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishCdnStreamOutcomeCallable StartPublishCdnStreamCallable(const Model::StartPublishCdnStreamRequest& request);

                /**
                 *Push an online media stream to the TRTC room.
                 * @param req StartStreamIngestRequest
                 * @return StartStreamIngestOutcome
                 */
                StartStreamIngestOutcome StartStreamIngest(const Model::StartStreamIngestRequest &request);
                void StartStreamIngestAsync(const Model::StartStreamIngestRequest& request, const StartStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamIngestOutcomeCallable StartStreamIngestCallable(const Model::StartStreamIngestRequest& request);

                /**
                 *This interface can be used to initiate a web-page recording task. In the interface parameters, specify the recording URL, recording resolution, recording result storage and other parameters. If there are parameter or API logic problems, the result will be returned immediately. If there are page problems, such as the page cannot be accessed, the result will be returned in the callback. Please pay attention.
                 * @param req StartWebRecordRequest
                 * @return StartWebRecordOutcome
                 */
                StartWebRecordOutcome StartWebRecord(const Model::StartWebRecordRequest &request);
                void StartWebRecordAsync(const Model::StartWebRecordRequest& request, const StartWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartWebRecordOutcomeCallable StartWebRecordCallable(const Model::StartWebRecordRequest& request);

                /**
                 *Stop AI conversation task
                 * @param req StopAIConversationRequest
                 * @return StopAIConversationOutcome
                 */
                StopAIConversationOutcome StopAIConversation(const Model::StopAIConversationRequest &request);
                void StopAIConversationAsync(const Model::StopAIConversationRequest& request, const StopAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAIConversationOutcomeCallable StopAIConversationCallable(const Model::StopAIConversationRequest& request);

                /**
                 *Stop AI Transcription task
                 * @param req StopAITranscriptionRequest
                 * @return StopAITranscriptionOutcome
                 */
                StopAITranscriptionOutcome StopAITranscription(const Model::StopAITranscriptionRequest &request);
                void StopAITranscriptionAsync(const Model::StopAITranscriptionRequest& request, const StopAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAITranscriptionOutcomeCallable StopAITranscriptionCallable(const Model::StopAITranscriptionRequest& request);

                /**
                 *This API is used to stop a relaying task.
                 * @param req StopPublishCdnStreamRequest
                 * @return StopPublishCdnStreamOutcome
                 */
                StopPublishCdnStreamOutcome StopPublishCdnStream(const Model::StopPublishCdnStreamRequest &request);
                void StopPublishCdnStreamAsync(const Model::StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishCdnStreamOutcomeCallable StopPublishCdnStreamCallable(const Model::StopPublishCdnStreamRequest& request);

                /**
                 *Stop a Pull stream Relay task.
                 * @param req StopStreamIngestRequest
                 * @return StopStreamIngestOutcome
                 */
                StopStreamIngestOutcome StopStreamIngest(const Model::StopStreamIngestRequest &request);
                void StopStreamIngestAsync(const Model::StopStreamIngestRequest& request, const StopStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamIngestOutcomeCallable StopStreamIngestCallable(const Model::StopStreamIngestRequest& request);

                /**
                 *Stop an web-page recording task
                 * @param req StopWebRecordRequest
                 * @return StopWebRecordOutcome
                 */
                StopWebRecordOutcome StopWebRecord(const Model::StopWebRecordRequest &request);
                void StopWebRecordAsync(const Model::StopWebRecordRequest& request, const StopWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWebRecordOutcomeCallable StopWebRecordCallable(const Model::StopWebRecordRequest& request);

                /**
                 *Update AI conversation task parameters
                 * @param req UpdateAIConversationRequest
                 * @return UpdateAIConversationOutcome
                 */
                UpdateAIConversationOutcome UpdateAIConversation(const Model::UpdateAIConversationRequest &request);
                void UpdateAIConversationAsync(const Model::UpdateAIConversationRequest& request, const UpdateAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAIConversationOutcomeCallable UpdateAIConversationCallable(const Model::UpdateAIConversationRequest& request);

                /**
                 *This API is used to change the parameters of a relaying task.
Note: For details about how to use this API, see the `StartPublishCdnStream` document.
                 * @param req UpdatePublishCdnStreamRequest
                 * @return UpdatePublishCdnStreamOutcome
                 */
                UpdatePublishCdnStreamOutcome UpdatePublishCdnStream(const Model::UpdatePublishCdnStreamRequest &request);
                void UpdatePublishCdnStreamAsync(const Model::UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePublishCdnStreamOutcomeCallable UpdatePublishCdnStreamCallable(const Model::UpdatePublishCdnStreamRequest& request);

                /**
                 *You can update the StreamUrl of the Relay task.
                 * @param req UpdateStreamIngestRequest
                 * @return UpdateStreamIngestOutcome
                 */
                UpdateStreamIngestOutcome UpdateStreamIngest(const Model::UpdateStreamIngestRequest &request);
                void UpdateStreamIngestAsync(const Model::UpdateStreamIngestRequest& request, const UpdateStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateStreamIngestOutcomeCallable UpdateStreamIngestCallable(const Model::UpdateStreamIngestRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
