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
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusRequest.h>
#include <tencentcloud/gme/v20180711/model/ModifyAppStatusResponse.h>


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
                typedef Outcome<Core::Error, Model::ModifyAppStatusResponse> ModifyAppStatusOutcome;
                typedef std::future<ModifyAppStatusOutcome> ModifyAppStatusOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::ModifyAppStatusRequest&, ModifyAppStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppStatusAsyncHandler;



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
                 *This API is used to change the status of an application.
                 * @param req ModifyAppStatusRequest
                 * @return ModifyAppStatusOutcome
                 */
                ModifyAppStatusOutcome ModifyAppStatus(const Model::ModifyAppStatusRequest &request);
                void ModifyAppStatusAsync(const Model::ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppStatusOutcomeCallable ModifyAppStatusCallable(const Model::ModifyAppStatusRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
