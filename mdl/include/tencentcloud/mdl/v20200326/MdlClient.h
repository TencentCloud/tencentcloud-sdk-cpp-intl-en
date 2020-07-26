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

#ifndef TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_
#define TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/CreateMediaLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/DeleteMediaLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelAlertsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelAlertsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelInputStatisticsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelInputStatisticsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelOutputStatisticsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelOutputStatisticsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveChannelsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputSecurityGroupsResponse.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputsRequest.h>
#include <tencentcloud/mdl/v20200326/model/DescribeMediaLiveInputsResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputResponse.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputSecurityGroupRequest.h>
#include <tencentcloud/mdl/v20200326/model/ModifyMediaLiveInputSecurityGroupResponse.h>
#include <tencentcloud/mdl/v20200326/model/StartMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/StartMediaLiveChannelResponse.h>
#include <tencentcloud/mdl/v20200326/model/StopMediaLiveChannelRequest.h>
#include <tencentcloud/mdl/v20200326/model/StopMediaLiveChannelResponse.h>


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

                typedef Outcome<Error, Model::CreateMediaLiveChannelResponse> CreateMediaLiveChannelOutcome;
                typedef std::future<CreateMediaLiveChannelOutcome> CreateMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateMediaLiveChannelRequest&, CreateMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaLiveChannelAsyncHandler;
                typedef Outcome<Error, Model::CreateMediaLiveInputResponse> CreateMediaLiveInputOutcome;
                typedef std::future<CreateMediaLiveInputOutcome> CreateMediaLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateMediaLiveInputRequest&, CreateMediaLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaLiveInputAsyncHandler;
                typedef Outcome<Error, Model::CreateMediaLiveInputSecurityGroupResponse> CreateMediaLiveInputSecurityGroupOutcome;
                typedef std::future<CreateMediaLiveInputSecurityGroupOutcome> CreateMediaLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::CreateMediaLiveInputSecurityGroupRequest&, CreateMediaLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaLiveChannelResponse> DeleteMediaLiveChannelOutcome;
                typedef std::future<DeleteMediaLiveChannelOutcome> DeleteMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteMediaLiveChannelRequest&, DeleteMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaLiveChannelAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaLiveInputResponse> DeleteMediaLiveInputOutcome;
                typedef std::future<DeleteMediaLiveInputOutcome> DeleteMediaLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteMediaLiveInputRequest&, DeleteMediaLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaLiveInputAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaLiveInputSecurityGroupResponse> DeleteMediaLiveInputSecurityGroupOutcome;
                typedef std::future<DeleteMediaLiveInputSecurityGroupOutcome> DeleteMediaLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DeleteMediaLiveInputSecurityGroupRequest&, DeleteMediaLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveChannelResponse> DescribeMediaLiveChannelOutcome;
                typedef std::future<DescribeMediaLiveChannelOutcome> DescribeMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveChannelRequest&, DescribeMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveChannelAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveChannelAlertsResponse> DescribeMediaLiveChannelAlertsOutcome;
                typedef std::future<DescribeMediaLiveChannelAlertsOutcome> DescribeMediaLiveChannelAlertsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveChannelAlertsRequest&, DescribeMediaLiveChannelAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveChannelAlertsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveChannelInputStatisticsResponse> DescribeMediaLiveChannelInputStatisticsOutcome;
                typedef std::future<DescribeMediaLiveChannelInputStatisticsOutcome> DescribeMediaLiveChannelInputStatisticsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveChannelInputStatisticsRequest&, DescribeMediaLiveChannelInputStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveChannelInputStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveChannelOutputStatisticsResponse> DescribeMediaLiveChannelOutputStatisticsOutcome;
                typedef std::future<DescribeMediaLiveChannelOutputStatisticsOutcome> DescribeMediaLiveChannelOutputStatisticsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveChannelOutputStatisticsRequest&, DescribeMediaLiveChannelOutputStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveChannelOutputStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveChannelsResponse> DescribeMediaLiveChannelsOutcome;
                typedef std::future<DescribeMediaLiveChannelsOutcome> DescribeMediaLiveChannelsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveChannelsRequest&, DescribeMediaLiveChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveChannelsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveInputResponse> DescribeMediaLiveInputOutcome;
                typedef std::future<DescribeMediaLiveInputOutcome> DescribeMediaLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveInputRequest&, DescribeMediaLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveInputAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveInputSecurityGroupResponse> DescribeMediaLiveInputSecurityGroupOutcome;
                typedef std::future<DescribeMediaLiveInputSecurityGroupOutcome> DescribeMediaLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveInputSecurityGroupRequest&, DescribeMediaLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveInputSecurityGroupsResponse> DescribeMediaLiveInputSecurityGroupsOutcome;
                typedef std::future<DescribeMediaLiveInputSecurityGroupsOutcome> DescribeMediaLiveInputSecurityGroupsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveInputSecurityGroupsRequest&, DescribeMediaLiveInputSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveInputSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaLiveInputsResponse> DescribeMediaLiveInputsOutcome;
                typedef std::future<DescribeMediaLiveInputsOutcome> DescribeMediaLiveInputsOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::DescribeMediaLiveInputsRequest&, DescribeMediaLiveInputsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaLiveInputsAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaLiveChannelResponse> ModifyMediaLiveChannelOutcome;
                typedef std::future<ModifyMediaLiveChannelOutcome> ModifyMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyMediaLiveChannelRequest&, ModifyMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaLiveChannelAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaLiveInputResponse> ModifyMediaLiveInputOutcome;
                typedef std::future<ModifyMediaLiveInputOutcome> ModifyMediaLiveInputOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyMediaLiveInputRequest&, ModifyMediaLiveInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaLiveInputAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaLiveInputSecurityGroupResponse> ModifyMediaLiveInputSecurityGroupOutcome;
                typedef std::future<ModifyMediaLiveInputSecurityGroupOutcome> ModifyMediaLiveInputSecurityGroupOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::ModifyMediaLiveInputSecurityGroupRequest&, ModifyMediaLiveInputSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaLiveInputSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::StartMediaLiveChannelResponse> StartMediaLiveChannelOutcome;
                typedef std::future<StartMediaLiveChannelOutcome> StartMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::StartMediaLiveChannelRequest&, StartMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMediaLiveChannelAsyncHandler;
                typedef Outcome<Error, Model::StopMediaLiveChannelResponse> StopMediaLiveChannelOutcome;
                typedef std::future<StopMediaLiveChannelOutcome> StopMediaLiveChannelOutcomeCallable;
                typedef std::function<void(const MdlClient*, const Model::StopMediaLiveChannelRequest&, StopMediaLiveChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMediaLiveChannelAsyncHandler;



                /**
                 *This API is used to create a media channel.
                 * @param req CreateMediaLiveChannelRequest
                 * @return CreateMediaLiveChannelOutcome
                 */
                CreateMediaLiveChannelOutcome CreateMediaLiveChannel(const Model::CreateMediaLiveChannelRequest &request);
                void CreateMediaLiveChannelAsync(const Model::CreateMediaLiveChannelRequest& request, const CreateMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaLiveChannelOutcomeCallable CreateMediaLiveChannelCallable(const Model::CreateMediaLiveChannelRequest& request);

                /**
                 *This API is used to create a media input.
                 * @param req CreateMediaLiveInputRequest
                 * @return CreateMediaLiveInputOutcome
                 */
                CreateMediaLiveInputOutcome CreateMediaLiveInput(const Model::CreateMediaLiveInputRequest &request);
                void CreateMediaLiveInputAsync(const Model::CreateMediaLiveInputRequest& request, const CreateMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaLiveInputOutcomeCallable CreateMediaLiveInputCallable(const Model::CreateMediaLiveInputRequest& request);

                /**
                 *This API is used to create an input security group. Up to 5 ones can be created.
                 * @param req CreateMediaLiveInputSecurityGroupRequest
                 * @return CreateMediaLiveInputSecurityGroupOutcome
                 */
                CreateMediaLiveInputSecurityGroupOutcome CreateMediaLiveInputSecurityGroup(const Model::CreateMediaLiveInputSecurityGroupRequest &request);
                void CreateMediaLiveInputSecurityGroupAsync(const Model::CreateMediaLiveInputSecurityGroupRequest& request, const CreateMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaLiveInputSecurityGroupOutcomeCallable CreateMediaLiveInputSecurityGroupCallable(const Model::CreateMediaLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to delete a MediaLive channel.
                 * @param req DeleteMediaLiveChannelRequest
                 * @return DeleteMediaLiveChannelOutcome
                 */
                DeleteMediaLiveChannelOutcome DeleteMediaLiveChannel(const Model::DeleteMediaLiveChannelRequest &request);
                void DeleteMediaLiveChannelAsync(const Model::DeleteMediaLiveChannelRequest& request, const DeleteMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaLiveChannelOutcomeCallable DeleteMediaLiveChannelCallable(const Model::DeleteMediaLiveChannelRequest& request);

                /**
                 *This API is used to delete a media input.
                 * @param req DeleteMediaLiveInputRequest
                 * @return DeleteMediaLiveInputOutcome
                 */
                DeleteMediaLiveInputOutcome DeleteMediaLiveInput(const Model::DeleteMediaLiveInputRequest &request);
                void DeleteMediaLiveInputAsync(const Model::DeleteMediaLiveInputRequest& request, const DeleteMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaLiveInputOutcomeCallable DeleteMediaLiveInputCallable(const Model::DeleteMediaLiveInputRequest& request);

                /**
                 *This API is used to delete an input security group.
                 * @param req DeleteMediaLiveInputSecurityGroupRequest
                 * @return DeleteMediaLiveInputSecurityGroupOutcome
                 */
                DeleteMediaLiveInputSecurityGroupOutcome DeleteMediaLiveInputSecurityGroup(const Model::DeleteMediaLiveInputSecurityGroupRequest &request);
                void DeleteMediaLiveInputSecurityGroupAsync(const Model::DeleteMediaLiveInputSecurityGroupRequest& request, const DeleteMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaLiveInputSecurityGroupOutcomeCallable DeleteMediaLiveInputSecurityGroupCallable(const Model::DeleteMediaLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to query the information of a MediaLive channel.
                 * @param req DescribeMediaLiveChannelRequest
                 * @return DescribeMediaLiveChannelOutcome
                 */
                DescribeMediaLiveChannelOutcome DescribeMediaLiveChannel(const Model::DescribeMediaLiveChannelRequest &request);
                void DescribeMediaLiveChannelAsync(const Model::DescribeMediaLiveChannelRequest& request, const DescribeMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveChannelOutcomeCallable DescribeMediaLiveChannelCallable(const Model::DescribeMediaLiveChannelRequest& request);

                /**
                 *This API is used to query the channel alarm information.
                 * @param req DescribeMediaLiveChannelAlertsRequest
                 * @return DescribeMediaLiveChannelAlertsOutcome
                 */
                DescribeMediaLiveChannelAlertsOutcome DescribeMediaLiveChannelAlerts(const Model::DescribeMediaLiveChannelAlertsRequest &request);
                void DescribeMediaLiveChannelAlertsAsync(const Model::DescribeMediaLiveChannelAlertsRequest& request, const DescribeMediaLiveChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveChannelAlertsOutcomeCallable DescribeMediaLiveChannelAlertsCallable(const Model::DescribeMediaLiveChannelAlertsRequest& request);

                /**
                 *This API is used to query the input statistics.
                 * @param req DescribeMediaLiveChannelInputStatisticsRequest
                 * @return DescribeMediaLiveChannelInputStatisticsOutcome
                 */
                DescribeMediaLiveChannelInputStatisticsOutcome DescribeMediaLiveChannelInputStatistics(const Model::DescribeMediaLiveChannelInputStatisticsRequest &request);
                void DescribeMediaLiveChannelInputStatisticsAsync(const Model::DescribeMediaLiveChannelInputStatisticsRequest& request, const DescribeMediaLiveChannelInputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveChannelInputStatisticsOutcomeCallable DescribeMediaLiveChannelInputStatisticsCallable(const Model::DescribeMediaLiveChannelInputStatisticsRequest& request);

                /**
                 *This API is used to query the output statistics of a channel.
                 * @param req DescribeMediaLiveChannelOutputStatisticsRequest
                 * @return DescribeMediaLiveChannelOutputStatisticsOutcome
                 */
                DescribeMediaLiveChannelOutputStatisticsOutcome DescribeMediaLiveChannelOutputStatistics(const Model::DescribeMediaLiveChannelOutputStatisticsRequest &request);
                void DescribeMediaLiveChannelOutputStatisticsAsync(const Model::DescribeMediaLiveChannelOutputStatisticsRequest& request, const DescribeMediaLiveChannelOutputStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveChannelOutputStatisticsOutcomeCallable DescribeMediaLiveChannelOutputStatisticsCallable(const Model::DescribeMediaLiveChannelOutputStatisticsRequest& request);

                /**
                 *This API is used to query the information of MediaLive channels in batches.
                 * @param req DescribeMediaLiveChannelsRequest
                 * @return DescribeMediaLiveChannelsOutcome
                 */
                DescribeMediaLiveChannelsOutcome DescribeMediaLiveChannels(const Model::DescribeMediaLiveChannelsRequest &request);
                void DescribeMediaLiveChannelsAsync(const Model::DescribeMediaLiveChannelsRequest& request, const DescribeMediaLiveChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveChannelsOutcomeCallable DescribeMediaLiveChannelsCallable(const Model::DescribeMediaLiveChannelsRequest& request);

                /**
                 *This API is used to query a media input.
                 * @param req DescribeMediaLiveInputRequest
                 * @return DescribeMediaLiveInputOutcome
                 */
                DescribeMediaLiveInputOutcome DescribeMediaLiveInput(const Model::DescribeMediaLiveInputRequest &request);
                void DescribeMediaLiveInputAsync(const Model::DescribeMediaLiveInputRequest& request, const DescribeMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveInputOutcomeCallable DescribeMediaLiveInputCallable(const Model::DescribeMediaLiveInputRequest& request);

                /**
                 *This API is used to query an input security group.
                 * @param req DescribeMediaLiveInputSecurityGroupRequest
                 * @return DescribeMediaLiveInputSecurityGroupOutcome
                 */
                DescribeMediaLiveInputSecurityGroupOutcome DescribeMediaLiveInputSecurityGroup(const Model::DescribeMediaLiveInputSecurityGroupRequest &request);
                void DescribeMediaLiveInputSecurityGroupAsync(const Model::DescribeMediaLiveInputSecurityGroupRequest& request, const DescribeMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveInputSecurityGroupOutcomeCallable DescribeMediaLiveInputSecurityGroupCallable(const Model::DescribeMediaLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to query the information of input security groups in batches.
                 * @param req DescribeMediaLiveInputSecurityGroupsRequest
                 * @return DescribeMediaLiveInputSecurityGroupsOutcome
                 */
                DescribeMediaLiveInputSecurityGroupsOutcome DescribeMediaLiveInputSecurityGroups(const Model::DescribeMediaLiveInputSecurityGroupsRequest &request);
                void DescribeMediaLiveInputSecurityGroupsAsync(const Model::DescribeMediaLiveInputSecurityGroupsRequest& request, const DescribeMediaLiveInputSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveInputSecurityGroupsOutcomeCallable DescribeMediaLiveInputSecurityGroupsCallable(const Model::DescribeMediaLiveInputSecurityGroupsRequest& request);

                /**
                 *This API is used to query the information of media inputs in batches.
                 * @param req DescribeMediaLiveInputsRequest
                 * @return DescribeMediaLiveInputsOutcome
                 */
                DescribeMediaLiveInputsOutcome DescribeMediaLiveInputs(const Model::DescribeMediaLiveInputsRequest &request);
                void DescribeMediaLiveInputsAsync(const Model::DescribeMediaLiveInputsRequest& request, const DescribeMediaLiveInputsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaLiveInputsOutcomeCallable DescribeMediaLiveInputsCallable(const Model::DescribeMediaLiveInputsRequest& request);

                /**
                 *This API is used to modify the information of a MediaLive channel.
                 * @param req ModifyMediaLiveChannelRequest
                 * @return ModifyMediaLiveChannelOutcome
                 */
                ModifyMediaLiveChannelOutcome ModifyMediaLiveChannel(const Model::ModifyMediaLiveChannelRequest &request);
                void ModifyMediaLiveChannelAsync(const Model::ModifyMediaLiveChannelRequest& request, const ModifyMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaLiveChannelOutcomeCallable ModifyMediaLiveChannelCallable(const Model::ModifyMediaLiveChannelRequest& request);

                /**
                 *This API is used to update a media input.
                 * @param req ModifyMediaLiveInputRequest
                 * @return ModifyMediaLiveInputOutcome
                 */
                ModifyMediaLiveInputOutcome ModifyMediaLiveInput(const Model::ModifyMediaLiveInputRequest &request);
                void ModifyMediaLiveInputAsync(const Model::ModifyMediaLiveInputRequest& request, const ModifyMediaLiveInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaLiveInputOutcomeCallable ModifyMediaLiveInputCallable(const Model::ModifyMediaLiveInputRequest& request);

                /**
                 *This API is used to update an input security group.
                 * @param req ModifyMediaLiveInputSecurityGroupRequest
                 * @return ModifyMediaLiveInputSecurityGroupOutcome
                 */
                ModifyMediaLiveInputSecurityGroupOutcome ModifyMediaLiveInputSecurityGroup(const Model::ModifyMediaLiveInputSecurityGroupRequest &request);
                void ModifyMediaLiveInputSecurityGroupAsync(const Model::ModifyMediaLiveInputSecurityGroupRequest& request, const ModifyMediaLiveInputSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaLiveInputSecurityGroupOutcomeCallable ModifyMediaLiveInputSecurityGroupCallable(const Model::ModifyMediaLiveInputSecurityGroupRequest& request);

                /**
                 *This API is used to start a MediaLive channel.
                 * @param req StartMediaLiveChannelRequest
                 * @return StartMediaLiveChannelOutcome
                 */
                StartMediaLiveChannelOutcome StartMediaLiveChannel(const Model::StartMediaLiveChannelRequest &request);
                void StartMediaLiveChannelAsync(const Model::StartMediaLiveChannelRequest& request, const StartMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMediaLiveChannelOutcomeCallable StartMediaLiveChannelCallable(const Model::StartMediaLiveChannelRequest& request);

                /**
                 *This API is used to stop a MediaLive channel.
                 * @param req StopMediaLiveChannelRequest
                 * @return StopMediaLiveChannelOutcome
                 */
                StopMediaLiveChannelOutcome StopMediaLiveChannel(const Model::StopMediaLiveChannelRequest &request);
                void StopMediaLiveChannelAsync(const Model::StopMediaLiveChannelRequest& request, const StopMediaLiveChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMediaLiveChannelOutcomeCallable StopMediaLiveChannelCallable(const Model::StopMediaLiveChannelRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MDLCLIENT_H_
