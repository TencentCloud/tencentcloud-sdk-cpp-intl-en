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

#ifndef TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_
#define TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLivePlanRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLivePlanResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveWatermarkRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateStreamLiveWatermarkResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateWatermarkDetectionRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateWatermarkDetectionResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLivePlanRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLivePlanResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveWatermarkRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteStreamLiveWatermarkResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelAlertsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelAlertsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelInputStatisticsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelInputStatisticsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelLogsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelLogsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelOutputStatisticsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelOutputStatisticsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveChannelsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputSecurityGroupsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveInputsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLivePlansRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLivePlansResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveRegionsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveRegionsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveTranscodeDetailRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveTranscodeDetailResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarkRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarkResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarksRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveWatermarksResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeWatermarkDetectionRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeWatermarkDetectionResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeWatermarkDetectionsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeWatermarkDetectionsResponse.h>
#include <tencentcloud/mdl/v20200326/model/GetAbWatermarkPlayUrlRequest.h>
#include <tencentcloud/mdl/v20200326/model/GetAbWatermarkPlayUrlResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveWatermarkRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyStreamLiveWatermarkResponse.h>
#include <tencentcloud/mdl/v20200326/model/QueryInputStreamStateRequest.h>
#include <tencentcloud/mdl/v20200326/model/QueryInputStreamStateResponse.h>
#include <tencentcloud/mdl/v20200326/model/StartStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/StartStreamLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/StopStreamLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/StopStreamLiveChannelResponse.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            class MdlClient : public AbstractClient
            {
            public:
                MdlClient(const Credential &credential, const std::string &region);
                MdlClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateStreamLiveChannelResponse> CreateStreamLiveChannelOutcome;
                typedef std::future<CreateStreamLiveChannelOutcome> CreateStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateStreamLiveChannelRequest&, CreateStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLiveInputResponse> CreateStreamLiveInputOutcome;
                typedef std::future<CreateStreamLiveInputOutcome> CreateStreamLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateStreamLiveInputRequest&, CreateStreamLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLiveInputAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLiveInputSecurityGroupResponse> CreateStreamLiveInputSecurityGroupOutcome;
                typedef std::future<CreateStreamLiveInputSecurityGroupOutcome> CreateStreamLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateStreamLiveInputSecurityGroupRequest&, CreateStreamLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLivePlanResponse> CreateStreamLivePlanOutcome;
                typedef std::future<CreateStreamLivePlanOutcome> CreateStreamLivePlanOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateStreamLivePlanRequest&, CreateStreamLivePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLivePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLiveWatermarkResponse> CreateStreamLiveWatermarkOutcome;
                typedef std::future<CreateStreamLiveWatermarkOutcome> CreateStreamLiveWatermarkOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateStreamLiveWatermarkRequest&, CreateStreamLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkDetectionResponse> CreateWatermarkDetectionOutcome;
                typedef std::future<CreateWatermarkDetectionOutcome> CreateWatermarkDetectionOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateWatermarkDetectionRequest&, CreateWatermarkDetectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkDetectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLiveChannelResponse> DeleteStreamLiveChannelOutcome;
                typedef std::future<DeleteStreamLiveChannelOutcome> DeleteStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteStreamLiveChannelRequest&, DeleteStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLiveInputResponse> DeleteStreamLiveInputOutcome;
                typedef std::future<DeleteStreamLiveInputOutcome> DeleteStreamLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteStreamLiveInputRequest&, DeleteStreamLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLiveInputAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLiveInputSecurityGroupResponse> DeleteStreamLiveInputSecurityGroupOutcome;
                typedef std::future<DeleteStreamLiveInputSecurityGroupOutcome> DeleteStreamLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteStreamLiveInputSecurityGroupRequest&, DeleteStreamLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLivePlanResponse> DeleteStreamLivePlanOutcome;
                typedef std::future<DeleteStreamLivePlanOutcome> DeleteStreamLivePlanOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteStreamLivePlanRequest&, DeleteStreamLivePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLivePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLiveWatermarkResponse> DeleteStreamLiveWatermarkOutcome;
                typedef std::future<DeleteStreamLiveWatermarkOutcome> DeleteStreamLiveWatermarkOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteStreamLiveWatermarkRequest&, DeleteStreamLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelResponse> DescribeStreamLiveChannelOutcome;
                typedef std::future<DescribeStreamLiveChannelOutcome> DescribeStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelRequest&, DescribeStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelAlertsResponse> DescribeStreamLiveChannelAlertsOutcome;
                typedef std::future<DescribeStreamLiveChannelAlertsOutcome> DescribeStreamLiveChannelAlertsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelAlertsRequest&, DescribeStreamLiveChannelAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelInputStatisticsResponse> DescribeStreamLiveChannelInputStatisticsOutcome;
                typedef std::future<DescribeStreamLiveChannelInputStatisticsOutcome> DescribeStreamLiveChannelInputStatisticsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelInputStatisticsRequest&, DescribeStreamLiveChannelInputStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelInputStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelLogsResponse> DescribeStreamLiveChannelLogsOutcome;
                typedef std::future<DescribeStreamLiveChannelLogsOutcome> DescribeStreamLiveChannelLogsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelLogsRequest&, DescribeStreamLiveChannelLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelOutputStatisticsResponse> DescribeStreamLiveChannelOutputStatisticsOutcome;
                typedef std::future<DescribeStreamLiveChannelOutputStatisticsOutcome> DescribeStreamLiveChannelOutputStatisticsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelOutputStatisticsRequest&, DescribeStreamLiveChannelOutputStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelOutputStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveChannelsResponse> DescribeStreamLiveChannelsOutcome;
                typedef std::future<DescribeStreamLiveChannelsOutcome> DescribeStreamLiveChannelsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveChannelsRequest&, DescribeStreamLiveChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveInputResponse> DescribeStreamLiveInputOutcome;
                typedef std::future<DescribeStreamLiveInputOutcome> DescribeStreamLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveInputRequest&, DescribeStreamLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveInputAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveInputSecurityGroupResponse> DescribeStreamLiveInputSecurityGroupOutcome;
                typedef std::future<DescribeStreamLiveInputSecurityGroupOutcome> DescribeStreamLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveInputSecurityGroupRequest&, DescribeStreamLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveInputSecurityGroupsResponse> DescribeStreamLiveInputSecurityGroupsOutcome;
                typedef std::future<DescribeStreamLiveInputSecurityGroupsOutcome> DescribeStreamLiveInputSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveInputSecurityGroupsRequest&, DescribeStreamLiveInputSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveInputSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveInputsResponse> DescribeStreamLiveInputsOutcome;
                typedef std::future<DescribeStreamLiveInputsOutcome> DescribeStreamLiveInputsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveInputsRequest&, DescribeStreamLiveInputsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveInputsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLivePlansResponse> DescribeStreamLivePlansOutcome;
                typedef std::future<DescribeStreamLivePlansOutcome> DescribeStreamLivePlansOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLivePlansRequest&, DescribeStreamLivePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLivePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveRegionsResponse> DescribeStreamLiveRegionsOutcome;
                typedef std::future<DescribeStreamLiveRegionsOutcome> DescribeStreamLiveRegionsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveRegionsRequest&, DescribeStreamLiveRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveTranscodeDetailResponse> DescribeStreamLiveTranscodeDetailOutcome;
                typedef std::future<DescribeStreamLiveTranscodeDetailOutcome> DescribeStreamLiveTranscodeDetailOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveTranscodeDetailRequest&, DescribeStreamLiveTranscodeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveTranscodeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveWatermarkResponse> DescribeStreamLiveWatermarkOutcome;
                typedef std::future<DescribeStreamLiveWatermarkOutcome> DescribeStreamLiveWatermarkOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveWatermarkRequest&, DescribeStreamLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLiveWatermarksResponse> DescribeStreamLiveWatermarksOutcome;
                typedef std::future<DescribeStreamLiveWatermarksOutcome> DescribeStreamLiveWatermarksOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeStreamLiveWatermarksRequest&, DescribeStreamLiveWatermarksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLiveWatermarksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkDetectionResponse> DescribeWatermarkDetectionOutcome;
                typedef std::future<DescribeWatermarkDetectionOutcome> DescribeWatermarkDetectionOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeWatermarkDetectionRequest&, DescribeWatermarkDetectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkDetectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkDetectionsResponse> DescribeWatermarkDetectionsOutcome;
                typedef std::future<DescribeWatermarkDetectionsOutcome> DescribeWatermarkDetectionsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeWatermarkDetectionsRequest&, DescribeWatermarkDetectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkDetectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAbWatermarkPlayUrlResponse> GetAbWatermarkPlayUrlOutcome;
                typedef std::future<GetAbWatermarkPlayUrlOutcome> GetAbWatermarkPlayUrlOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::GetAbWatermarkPlayUrlRequest&, GetAbWatermarkPlayUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAbWatermarkPlayUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLiveChannelResponse> ModifyStreamLiveChannelOutcome;
                typedef std::future<ModifyStreamLiveChannelOutcome> ModifyStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyStreamLiveChannelRequest&, ModifyStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLiveInputResponse> ModifyStreamLiveInputOutcome;
                typedef std::future<ModifyStreamLiveInputOutcome> ModifyStreamLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyStreamLiveInputRequest&, ModifyStreamLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLiveInputAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLiveInputSecurityGroupResponse> ModifyStreamLiveInputSecurityGroupOutcome;
                typedef std::future<ModifyStreamLiveInputSecurityGroupOutcome> ModifyStreamLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyStreamLiveInputSecurityGroupRequest&, ModifyStreamLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLiveWatermarkResponse> ModifyStreamLiveWatermarkOutcome;
                typedef std::future<ModifyStreamLiveWatermarkOutcome> ModifyStreamLiveWatermarkOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyStreamLiveWatermarkRequest&, ModifyStreamLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryInputStreamStateResponse> QueryInputStreamStateOutcome;
                typedef std::future<QueryInputStreamStateOutcome> QueryInputStreamStateOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::QueryInputStreamStateRequest&, QueryInputStreamStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryInputStreamStateAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamLiveChannelResponse> StartStreamLiveChannelOutcome;
                typedef std::future<StartStreamLiveChannelOutcome> StartStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::StartStreamLiveChannelRequest&, StartStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamLiveChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamLiveChannelResponse> StopStreamLiveChannelOutcome;
                typedef std::future<StopStreamLiveChannelOutcome> StopStreamLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::StopStreamLiveChannelRequest&, StopStreamLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamLiveChannelAsyncHandler;



                /**
                 *This API is used to create a StreamLive channel.
                 * @param req CreateStreamLiveChannelRequest
                 * @return CreateStreamLiveChannelOutcome
                 */
                CreateStreamLiveChannelOutcome CreateStreamLiveChannel(const Model::CreateStreamLiveChannelRequest &request);
                void CreateStreamLiveChannelAsync(const Model::CreateStreamLiveChannelRequest& request, const CreateStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLiveChannelOutcomeCallable CreateStreamLiveChannelCallable(const Model::CreateStreamLiveChannelRequest& request);

                /**
                 *This API is used to create a StreamLive input.
                 * @param req CreateStreamLiveInputRequest
                 * @return CreateStreamLiveInputOutcome
                 */
                CreateStreamLiveInputOutcome CreateStreamLiveInput(const Model::CreateStreamLiveInputRequest &request);
                void CreateStreamLiveInputAsync(const Model::CreateStreamLiveInputRequest& request, const CreateStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLiveInputOutcomeCallable CreateStreamLiveInputCallable(const Model::CreateStreamLiveInputRequest& request);

                /**
                 *This API is used to create an input security group. Up to 5 security groups are allowed.
                 * @param req CreateStreamLiveInputSecurityGroupRequest
                 * @return CreateStreamLiveInputSecurityGroupOutcome
                 */
                CreateStreamLiveInputSecurityGroupOutcome CreateStreamLiveInputSecurityGroup(const Model::CreateStreamLiveInputSecurityGroupRequest &request);
                void CreateStreamLiveInputSecurityGroupAsync(const Model::CreateStreamLiveInputSecurityGroupRequest& request, const CreateStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLiveInputSecurityGroupOutcomeCallable CreateStreamLiveInputSecurityGroupCallable(const Model::CreateStreamLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to create an event in the plan.
                 * @param req CreateStreamLivePlanRequest
                 * @return CreateStreamLivePlanOutcome
                 */
                CreateStreamLivePlanOutcome CreateStreamLivePlan(const Model::CreateStreamLivePlanRequest &request);
                void CreateStreamLivePlanAsync(const Model::CreateStreamLivePlanRequest& request, const CreateStreamLivePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLivePlanOutcomeCallable CreateStreamLivePlanCallable(const Model::CreateStreamLivePlanRequest& request);

                /**
                 *This API is used to add a watermark.
                 * @param req CreateStreamLiveWatermarkRequest
                 * @return CreateStreamLiveWatermarkOutcome
                 */
                CreateStreamLiveWatermarkOutcome CreateStreamLiveWatermark(const Model::CreateStreamLiveWatermarkRequest &request);
                void CreateStreamLiveWatermarkAsync(const Model::CreateStreamLiveWatermarkRequest& request, const CreateStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLiveWatermarkOutcomeCallable CreateStreamLiveWatermarkCallable(const Model::CreateStreamLiveWatermarkRequest& request);

                /**
                 *Create a watermark detection task
                 * @param req CreateWatermarkDetectionRequest
                 * @return CreateWatermarkDetectionOutcome
                 */
                CreateWatermarkDetectionOutcome CreateWatermarkDetection(const Model::CreateWatermarkDetectionRequest &request);
                void CreateWatermarkDetectionAsync(const Model::CreateWatermarkDetectionRequest& request, const CreateWatermarkDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkDetectionOutcomeCallable CreateWatermarkDetectionCallable(const Model::CreateWatermarkDetectionRequest& request);

                /**
                 *This API is used to delete a StreamLive channel.
                 * @param req DeleteStreamLiveChannelRequest
                 * @return DeleteStreamLiveChannelOutcome
                 */
                DeleteStreamLiveChannelOutcome DeleteStreamLiveChannel(const Model::DeleteStreamLiveChannelRequest &request);
                void DeleteStreamLiveChannelAsync(const Model::DeleteStreamLiveChannelRequest& request, const DeleteStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLiveChannelOutcomeCallable DeleteStreamLiveChannelCallable(const Model::DeleteStreamLiveChannelRequest& request);

                /**
                 *This API is used to delete a StreamLive input.
                 * @param req DeleteStreamLiveInputRequest
                 * @return DeleteStreamLiveInputOutcome
                 */
                DeleteStreamLiveInputOutcome DeleteStreamLiveInput(const Model::DeleteStreamLiveInputRequest &request);
                void DeleteStreamLiveInputAsync(const Model::DeleteStreamLiveInputRequest& request, const DeleteStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLiveInputOutcomeCallable DeleteStreamLiveInputCallable(const Model::DeleteStreamLiveInputRequest& request);

                /**
                 *This API is used to delete an input security group.
                 * @param req DeleteStreamLiveInputSecurityGroupRequest
                 * @return DeleteStreamLiveInputSecurityGroupOutcome
                 */
                DeleteStreamLiveInputSecurityGroupOutcome DeleteStreamLiveInputSecurityGroup(const Model::DeleteStreamLiveInputSecurityGroupRequest &request);
                void DeleteStreamLiveInputSecurityGroupAsync(const Model::DeleteStreamLiveInputSecurityGroupRequest& request, const DeleteStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLiveInputSecurityGroupOutcomeCallable DeleteStreamLiveInputSecurityGroupCallable(const Model::DeleteStreamLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to delete a StreamLive event.
                 * @param req DeleteStreamLivePlanRequest
                 * @return DeleteStreamLivePlanOutcome
                 */
                DeleteStreamLivePlanOutcome DeleteStreamLivePlan(const Model::DeleteStreamLivePlanRequest &request);
                void DeleteStreamLivePlanAsync(const Model::DeleteStreamLivePlanRequest& request, const DeleteStreamLivePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLivePlanOutcomeCallable DeleteStreamLivePlanCallable(const Model::DeleteStreamLivePlanRequest& request);

                /**
                 *This API is used to delete a watermark.
                 * @param req DeleteStreamLiveWatermarkRequest
                 * @return DeleteStreamLiveWatermarkOutcome
                 */
                DeleteStreamLiveWatermarkOutcome DeleteStreamLiveWatermark(const Model::DeleteStreamLiveWatermarkRequest &request);
                void DeleteStreamLiveWatermarkAsync(const Model::DeleteStreamLiveWatermarkRequest& request, const DeleteStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLiveWatermarkOutcomeCallable DeleteStreamLiveWatermarkCallable(const Model::DeleteStreamLiveWatermarkRequest& request);

                /**
                 *This API is used to query a StreamLive channel.
                 * @param req DescribeStreamLiveChannelRequest
                 * @return DescribeStreamLiveChannelOutcome
                 */
                DescribeStreamLiveChannelOutcome DescribeStreamLiveChannel(const Model::DescribeStreamLiveChannelRequest &request);
                void DescribeStreamLiveChannelAsync(const Model::DescribeStreamLiveChannelRequest& request, const DescribeStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelOutcomeCallable DescribeStreamLiveChannelCallable(const Model::DescribeStreamLiveChannelRequest& request);

                /**
                 *This API is used to query the alarm information of a StreamLive channel.
                 * @param req DescribeStreamLiveChannelAlertsRequest
                 * @return DescribeStreamLiveChannelAlertsOutcome
                 */
                DescribeStreamLiveChannelAlertsOutcome DescribeStreamLiveChannelAlerts(const Model::DescribeStreamLiveChannelAlertsRequest &request);
                void DescribeStreamLiveChannelAlertsAsync(const Model::DescribeStreamLiveChannelAlertsRequest& request, const DescribeStreamLiveChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelAlertsOutcomeCallable DescribeStreamLiveChannelAlertsCallable(const Model::DescribeStreamLiveChannelAlertsRequest& request);

                /**
                 *This API is used to query input statistics.
                 * @param req DescribeStreamLiveChannelInputStatisticsRequest
                 * @return DescribeStreamLiveChannelInputStatisticsOutcome
                 */
                DescribeStreamLiveChannelInputStatisticsOutcome DescribeStreamLiveChannelInputStatistics(const Model::DescribeStreamLiveChannelInputStatisticsRequest &request);
                void DescribeStreamLiveChannelInputStatisticsAsync(const Model::DescribeStreamLiveChannelInputStatisticsRequest& request, const DescribeStreamLiveChannelInputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelInputStatisticsOutcomeCallable DescribeStreamLiveChannelInputStatisticsCallable(const Model::DescribeStreamLiveChannelInputStatisticsRequest& request);

                /**
                 *This API is used to query StreamLive channel logs, such as push event logs.
                 * @param req DescribeStreamLiveChannelLogsRequest
                 * @return DescribeStreamLiveChannelLogsOutcome
                 */
                DescribeStreamLiveChannelLogsOutcome DescribeStreamLiveChannelLogs(const Model::DescribeStreamLiveChannelLogsRequest &request);
                void DescribeStreamLiveChannelLogsAsync(const Model::DescribeStreamLiveChannelLogsRequest& request, const DescribeStreamLiveChannelLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelLogsOutcomeCallable DescribeStreamLiveChannelLogsCallable(const Model::DescribeStreamLiveChannelLogsRequest& request);

                /**
                 *This API is used to query the output statistics of a StreamLive channel.
                 * @param req DescribeStreamLiveChannelOutputStatisticsRequest
                 * @return DescribeStreamLiveChannelOutputStatisticsOutcome
                 */
                DescribeStreamLiveChannelOutputStatisticsOutcome DescribeStreamLiveChannelOutputStatistics(const Model::DescribeStreamLiveChannelOutputStatisticsRequest &request);
                void DescribeStreamLiveChannelOutputStatisticsAsync(const Model::DescribeStreamLiveChannelOutputStatisticsRequest& request, const DescribeStreamLiveChannelOutputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelOutputStatisticsOutcomeCallable DescribeStreamLiveChannelOutputStatisticsCallable(const Model::DescribeStreamLiveChannelOutputStatisticsRequest& request);

                /**
                 *This API is used to query StreamLive channels in batches.
                 * @param req DescribeStreamLiveChannelsRequest
                 * @return DescribeStreamLiveChannelsOutcome
                 */
                DescribeStreamLiveChannelsOutcome DescribeStreamLiveChannels(const Model::DescribeStreamLiveChannelsRequest &request);
                void DescribeStreamLiveChannelsAsync(const Model::DescribeStreamLiveChannelsRequest& request, const DescribeStreamLiveChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveChannelsOutcomeCallable DescribeStreamLiveChannelsCallable(const Model::DescribeStreamLiveChannelsRequest& request);

                /**
                 *This API is used to query a StreamLive input.
                 * @param req DescribeStreamLiveInputRequest
                 * @return DescribeStreamLiveInputOutcome
                 */
                DescribeStreamLiveInputOutcome DescribeStreamLiveInput(const Model::DescribeStreamLiveInputRequest &request);
                void DescribeStreamLiveInputAsync(const Model::DescribeStreamLiveInputRequest& request, const DescribeStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveInputOutcomeCallable DescribeStreamLiveInputCallable(const Model::DescribeStreamLiveInputRequest& request);

                /**
                 *This API is used to query an input security group.
                 * @param req DescribeStreamLiveInputSecurityGroupRequest
                 * @return DescribeStreamLiveInputSecurityGroupOutcome
                 */
                DescribeStreamLiveInputSecurityGroupOutcome DescribeStreamLiveInputSecurityGroup(const Model::DescribeStreamLiveInputSecurityGroupRequest &request);
                void DescribeStreamLiveInputSecurityGroupAsync(const Model::DescribeStreamLiveInputSecurityGroupRequest& request, const DescribeStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveInputSecurityGroupOutcomeCallable DescribeStreamLiveInputSecurityGroupCallable(const Model::DescribeStreamLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to query input security groups in batches.
                 * @param req DescribeStreamLiveInputSecurityGroupsRequest
                 * @return DescribeStreamLiveInputSecurityGroupsOutcome
                 */
                DescribeStreamLiveInputSecurityGroupsOutcome DescribeStreamLiveInputSecurityGroups(const Model::DescribeStreamLiveInputSecurityGroupsRequest &request);
                void DescribeStreamLiveInputSecurityGroupsAsync(const Model::DescribeStreamLiveInputSecurityGroupsRequest& request, const DescribeStreamLiveInputSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveInputSecurityGroupsOutcomeCallable DescribeStreamLiveInputSecurityGroupsCallable(const Model::DescribeStreamLiveInputSecurityGroupsRequest& request);

                /**
                 *This API is used to query StreamLive inputs in batches.
                 * @param req DescribeStreamLiveInputsRequest
                 * @return DescribeStreamLiveInputsOutcome
                 */
                DescribeStreamLiveInputsOutcome DescribeStreamLiveInputs(const Model::DescribeStreamLiveInputsRequest &request);
                void DescribeStreamLiveInputsAsync(const Model::DescribeStreamLiveInputsRequest& request, const DescribeStreamLiveInputsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveInputsOutcomeCallable DescribeStreamLiveInputsCallable(const Model::DescribeStreamLiveInputsRequest& request);

                /**
                 *This API is used to query the events in the plan in batches.
                 * @param req DescribeStreamLivePlansRequest
                 * @return DescribeStreamLivePlansOutcome
                 */
                DescribeStreamLivePlansOutcome DescribeStreamLivePlans(const Model::DescribeStreamLivePlansRequest &request);
                void DescribeStreamLivePlansAsync(const Model::DescribeStreamLivePlansRequest& request, const DescribeStreamLivePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLivePlansOutcomeCallable DescribeStreamLivePlansCallable(const Model::DescribeStreamLivePlansRequest& request);

                /**
                 *This API is used to query all StreamLive regions.
                 * @param req DescribeStreamLiveRegionsRequest
                 * @return DescribeStreamLiveRegionsOutcome
                 */
                DescribeStreamLiveRegionsOutcome DescribeStreamLiveRegions(const Model::DescribeStreamLiveRegionsRequest &request);
                void DescribeStreamLiveRegionsAsync(const Model::DescribeStreamLiveRegionsRequest& request, const DescribeStreamLiveRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveRegionsOutcomeCallable DescribeStreamLiveRegionsCallable(const Model::DescribeStreamLiveRegionsRequest& request);

                /**
                 *This API is used to query the transcoding information of StreamLive streams.
                 * @param req DescribeStreamLiveTranscodeDetailRequest
                 * @return DescribeStreamLiveTranscodeDetailOutcome
                 */
                DescribeStreamLiveTranscodeDetailOutcome DescribeStreamLiveTranscodeDetail(const Model::DescribeStreamLiveTranscodeDetailRequest &request);
                void DescribeStreamLiveTranscodeDetailAsync(const Model::DescribeStreamLiveTranscodeDetailRequest& request, const DescribeStreamLiveTranscodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveTranscodeDetailOutcomeCallable DescribeStreamLiveTranscodeDetailCallable(const Model::DescribeStreamLiveTranscodeDetailRequest& request);

                /**
                 *This API is used to query a watermark.
                 * @param req DescribeStreamLiveWatermarkRequest
                 * @return DescribeStreamLiveWatermarkOutcome
                 */
                DescribeStreamLiveWatermarkOutcome DescribeStreamLiveWatermark(const Model::DescribeStreamLiveWatermarkRequest &request);
                void DescribeStreamLiveWatermarkAsync(const Model::DescribeStreamLiveWatermarkRequest& request, const DescribeStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveWatermarkOutcomeCallable DescribeStreamLiveWatermarkCallable(const Model::DescribeStreamLiveWatermarkRequest& request);

                /**
                 *This API is used to query multiple watermarks at a time.
                 * @param req DescribeStreamLiveWatermarksRequest
                 * @return DescribeStreamLiveWatermarksOutcome
                 */
                DescribeStreamLiveWatermarksOutcome DescribeStreamLiveWatermarks(const Model::DescribeStreamLiveWatermarksRequest &request);
                void DescribeStreamLiveWatermarksAsync(const Model::DescribeStreamLiveWatermarksRequest& request, const DescribeStreamLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLiveWatermarksOutcomeCallable DescribeStreamLiveWatermarksCallable(const Model::DescribeStreamLiveWatermarksRequest& request);

                /**
                 *Describe watermark detection task
                 * @param req DescribeWatermarkDetectionRequest
                 * @return DescribeWatermarkDetectionOutcome
                 */
                DescribeWatermarkDetectionOutcome DescribeWatermarkDetection(const Model::DescribeWatermarkDetectionRequest &request);
                void DescribeWatermarkDetectionAsync(const Model::DescribeWatermarkDetectionRequest& request, const DescribeWatermarkDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkDetectionOutcomeCallable DescribeWatermarkDetectionCallable(const Model::DescribeWatermarkDetectionRequest& request);

                /**
                 *Batch Describe watermark detection task
                 * @param req DescribeWatermarkDetectionsRequest
                 * @return DescribeWatermarkDetectionsOutcome
                 */
                DescribeWatermarkDetectionsOutcome DescribeWatermarkDetections(const Model::DescribeWatermarkDetectionsRequest &request);
                void DescribeWatermarkDetectionsAsync(const Model::DescribeWatermarkDetectionsRequest& request, const DescribeWatermarkDetectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkDetectionsOutcomeCallable DescribeWatermarkDetectionsCallable(const Model::DescribeWatermarkDetectionsRequest& request);

                /**
                 *Get AB watermark play url.
                 * @param req GetAbWatermarkPlayUrlRequest
                 * @return GetAbWatermarkPlayUrlOutcome
                 */
                GetAbWatermarkPlayUrlOutcome GetAbWatermarkPlayUrl(const Model::GetAbWatermarkPlayUrlRequest &request);
                void GetAbWatermarkPlayUrlAsync(const Model::GetAbWatermarkPlayUrlRequest& request, const GetAbWatermarkPlayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAbWatermarkPlayUrlOutcomeCallable GetAbWatermarkPlayUrlCallable(const Model::GetAbWatermarkPlayUrlRequest& request);

                /**
                 *This API is used to modify a StreamLive channel.
                 * @param req ModifyStreamLiveChannelRequest
                 * @return ModifyStreamLiveChannelOutcome
                 */
                ModifyStreamLiveChannelOutcome ModifyStreamLiveChannel(const Model::ModifyStreamLiveChannelRequest &request);
                void ModifyStreamLiveChannelAsync(const Model::ModifyStreamLiveChannelRequest& request, const ModifyStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLiveChannelOutcomeCallable ModifyStreamLiveChannelCallable(const Model::ModifyStreamLiveChannelRequest& request);

                /**
                 *This API is used to modify a StreamLive input.
                 * @param req ModifyStreamLiveInputRequest
                 * @return ModifyStreamLiveInputOutcome
                 */
                ModifyStreamLiveInputOutcome ModifyStreamLiveInput(const Model::ModifyStreamLiveInputRequest &request);
                void ModifyStreamLiveInputAsync(const Model::ModifyStreamLiveInputRequest& request, const ModifyStreamLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLiveInputOutcomeCallable ModifyStreamLiveInputCallable(const Model::ModifyStreamLiveInputRequest& request);

                /**
                 *This API is used to modify an input security group.
                 * @param req ModifyStreamLiveInputSecurityGroupRequest
                 * @return ModifyStreamLiveInputSecurityGroupOutcome
                 */
                ModifyStreamLiveInputSecurityGroupOutcome ModifyStreamLiveInputSecurityGroup(const Model::ModifyStreamLiveInputSecurityGroupRequest &request);
                void ModifyStreamLiveInputSecurityGroupAsync(const Model::ModifyStreamLiveInputSecurityGroupRequest& request, const ModifyStreamLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLiveInputSecurityGroupOutcomeCallable ModifyStreamLiveInputSecurityGroupCallable(const Model::ModifyStreamLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to modify a watermark.
                 * @param req ModifyStreamLiveWatermarkRequest
                 * @return ModifyStreamLiveWatermarkOutcome
                 */
                ModifyStreamLiveWatermarkOutcome ModifyStreamLiveWatermark(const Model::ModifyStreamLiveWatermarkRequest &request);
                void ModifyStreamLiveWatermarkAsync(const Model::ModifyStreamLiveWatermarkRequest& request, const ModifyStreamLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLiveWatermarkOutcomeCallable ModifyStreamLiveWatermarkCallable(const Model::ModifyStreamLiveWatermarkRequest& request);

                /**
                 *This API is used to query the stream status of a StreamLive input.
                 * @param req QueryInputStreamStateRequest
                 * @return QueryInputStreamStateOutcome
                 */
                QueryInputStreamStateOutcome QueryInputStreamState(const Model::QueryInputStreamStateRequest &request);
                void QueryInputStreamStateAsync(const Model::QueryInputStreamStateRequest& request, const QueryInputStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryInputStreamStateOutcomeCallable QueryInputStreamStateCallable(const Model::QueryInputStreamStateRequest& request);

                /**
                 *This API is used to start a StreamLive channel.
                 * @param req StartStreamLiveChannelRequest
                 * @return StartStreamLiveChannelOutcome
                 */
                StartStreamLiveChannelOutcome StartStreamLiveChannel(const Model::StartStreamLiveChannelRequest &request);
                void StartStreamLiveChannelAsync(const Model::StartStreamLiveChannelRequest& request, const StartStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamLiveChannelOutcomeCallable StartStreamLiveChannelCallable(const Model::StartStreamLiveChannelRequest& request);

                /**
                 *This API is used to stop a StreamLive channel.
                 * @param req StopStreamLiveChannelRequest
                 * @return StopStreamLiveChannelOutcome
                 */
                StopStreamLiveChannelOutcome StopStreamLiveChannel(const Model::StopStreamLiveChannelRequest &request);
                void StopStreamLiveChannelAsync(const Model::StopStreamLiveChannelRequest& request, const StopStreamLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamLiveChannelOutcomeCallable StopStreamLiveChannelCallable(const Model::StopStreamLiveChannelRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_
