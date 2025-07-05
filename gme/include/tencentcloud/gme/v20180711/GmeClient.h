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

#ifndef TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
#define TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gme/v20180711/model/CreateAppRequest.h>
#include <tencentcloud/gme/v20180711/model/CreateAppResponse.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberRequest.h>
#include <tencentcloud/gme/v20180711/model/DeleteRoomMemberResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeApplicationDataResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeRecordInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeRecordInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeTaskInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h>
#include <tencentcloud/gme/v20180711/model/ModifyRecordInfoRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyRecordInfoResponse.h>
#include <tencentcloud/gme/v20180711/model/StartRecordRequest.h>
#include <tencentcloud/gme/v20180711/model/StartRecordResponse.h>
#include <tencentcloud/gme/v20180711/model/StopRecordRequest.h>
#include <tencentcloud/gme/v20180711/model/StopRecordResponse.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            class GmeClient : public AbstractClient
            {
            public:
                GmeClient(const Credential &credential, const std::string &region);
                GmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomMemberResponse> DeleteRoomMemberOutcome;
                typedef std::future<DeleteRoomMemberOutcome> DeleteRoomMemberOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DeleteRoomMemberRequest&, DeleteRoomMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppStatisticsResponse> DescribeAppStatisticsOutcome;
                typedef std::future<DescribeAppStatisticsOutcome> DescribeAppStatisticsOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeAppStatisticsRequest&, DescribeAppStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationDataResponse> DescribeApplicationDataOutcome;
                typedef std::future<DescribeApplicationDataOutcome> DescribeApplicationDataOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeApplicationDataRequest&, DescribeApplicationDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordInfoResponse> DescribeRecordInfoOutcome;
                typedef std::future<DescribeRecordInfoOutcome> DescribeRecordInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeRecordInfoRequest&, DescribeRecordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskInfoResponse> DescribeTaskInfoOutcome;
                typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeTaskInfoRequest&, DescribeTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppStatusResponse> ModifyAppStatusOutcome;
                typedef std::future<ModifyAppStatusOutcome> ModifyAppStatusOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyAppStatusRequest&, ModifyAppStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRecordInfoResponse> ModifyRecordInfoOutcome;
                typedef std::future<ModifyRecordInfoOutcome> ModifyRecordInfoOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyRecordInfoRequest&, ModifyRecordInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRecordInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::StartRecordResponse> StartRecordOutcome;
                typedef std::future<StartRecordOutcome> StartRecordOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::StartRecordRequest&, StartRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRecordResponse> StopRecordOutcome;
                typedef std::future<StopRecordOutcome> StopRecordOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::StopRecordRequest&, StopRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordAsyncHandler;



                /**
                 *This API is used to create a GME application.
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *This API is used to delete a room or remove members from the room.
                 * @param req DeleteRoomMemberRequest
                 * @return DeleteRoomMemberOutcome
                 */
                DeleteRoomMemberOutcome DeleteRoomMember(const Model::DeleteRoomMemberRequest &request);
                void DeleteRoomMemberAsync(const Model::DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoomMemberOutcomeCallable DeleteRoomMemberCallable(const Model::DeleteRoomMemberRequest& request);

                /**
                 *This API is used to query the usage statistics of a GME application, including those of Voice Chat, Voice Message Service, Voice Analysis, etc. The maximum query period is the past 30 days.
                 * @param req DescribeAppStatisticsRequest
                 * @return DescribeAppStatisticsOutcome
                 */
                DescribeAppStatisticsOutcome DescribeAppStatistics(const Model::DescribeAppStatisticsRequest &request);
                void DescribeAppStatisticsAsync(const Model::DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppStatisticsOutcomeCallable DescribeAppStatisticsCallable(const Model::DescribeAppStatisticsRequest& request);

                /**
                 *This API is used to query data details for up to the past 90 days.
                 * @param req DescribeApplicationDataRequest
                 * @return DescribeApplicationDataOutcome
                 */
                DescribeApplicationDataOutcome DescribeApplicationData(const Model::DescribeApplicationDataRequest &request);
                void DescribeApplicationDataAsync(const Model::DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationDataOutcomeCallable DescribeApplicationDataCallable(const Model::DescribeApplicationDataRequest& request);

                /**
                 *This API is used to query a recording task.
                 * @param req DescribeRecordInfoRequest
                 * @return DescribeRecordInfoOutcome
                 */
                DescribeRecordInfoOutcome DescribeRecordInfo(const Model::DescribeRecordInfoRequest &request);
                void DescribeRecordInfoAsync(const Model::DescribeRecordInfoRequest& request, const DescribeRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordInfoOutcomeCallable DescribeRecordInfoCallable(const Model::DescribeRecordInfoRequest& request);

                /**
                 *This API is used to query the recording task in a room.
                 * @param req DescribeTaskInfoRequest
                 * @return DescribeTaskInfoOutcome
                 */
                DescribeTaskInfoOutcome DescribeTaskInfo(const Model::DescribeTaskInfoRequest &request);
                void DescribeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskInfoOutcomeCallable DescribeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request);

                /**
                 *This API is used to change the status of an application.
                 * @param req ModifyAppStatusRequest
                 * @return ModifyAppStatusOutcome
                 */
                ModifyAppStatusOutcome ModifyAppStatus(const Model::ModifyAppStatusRequest &request);
                void ModifyAppStatusAsync(const Model::ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppStatusOutcomeCallable ModifyAppStatusCallable(const Model::ModifyAppStatusRequest& request);

                /**
                 *This API is used to modify recording configurations.
                 * @param req ModifyRecordInfoRequest
                 * @return ModifyRecordInfoOutcome
                 */
                ModifyRecordInfoOutcome ModifyRecordInfo(const Model::ModifyRecordInfoRequest &request);
                void ModifyRecordInfoAsync(const Model::ModifyRecordInfoRequest& request, const ModifyRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRecordInfoOutcomeCallable ModifyRecordInfoCallable(const Model::ModifyRecordInfoRequest& request);

                /**
                 *This API is used to start recording.
                 * @param req StartRecordRequest
                 * @return StartRecordOutcome
                 */
                StartRecordOutcome StartRecord(const Model::StartRecordRequest &request);
                void StartRecordAsync(const Model::StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartRecordOutcomeCallable StartRecordCallable(const Model::StartRecordRequest& request);

                /**
                 *This API is used to stop recording.

                 * @param req StopRecordRequest
                 * @return StopRecordOutcome
                 */
                StopRecordOutcome StopRecord(const Model::StopRecordRequest &request);
                void StopRecordAsync(const Model::StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordOutcomeCallable StopRecordCallable(const Model::StopRecordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
