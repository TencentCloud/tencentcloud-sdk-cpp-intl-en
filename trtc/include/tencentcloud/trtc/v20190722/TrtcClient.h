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

#ifndef TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
#define TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeNetworkRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeNetworkResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeQualityRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeQualityResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRealtimeScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>


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

                typedef Outcome<Error, Model::DescribeCallDetailResponse> DescribeCallDetailOutcome;
                typedef std::future<DescribeCallDetailOutcome> DescribeCallDetailOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailRequest&, DescribeCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeHistoryScaleResponse> DescribeHistoryScaleOutcome;
                typedef std::future<DescribeHistoryScaleOutcome> DescribeHistoryScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeHistoryScaleRequest&, DescribeHistoryScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryScaleAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeNetworkResponse> DescribeRealtimeNetworkOutcome;
                typedef std::future<DescribeRealtimeNetworkOutcome> DescribeRealtimeNetworkOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeNetworkRequest&, DescribeRealtimeNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeNetworkAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeQualityResponse> DescribeRealtimeQualityOutcome;
                typedef std::future<DescribeRealtimeQualityOutcome> DescribeRealtimeQualityOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeQualityRequest&, DescribeRealtimeQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeQualityAsyncHandler;
                typedef Outcome<Error, Model::DescribeRealtimeScaleResponse> DescribeRealtimeScaleOutcome;
                typedef std::future<DescribeRealtimeScaleOutcome> DescribeRealtimeScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRealtimeScaleRequest&, DescribeRealtimeScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeScaleAsyncHandler;
                typedef Outcome<Error, Model::DescribeRoomInformationResponse> DescribeRoomInformationOutcome;
                typedef std::future<DescribeRoomInformationOutcome> DescribeRoomInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInformationRequest&, DescribeRoomInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInformationAsyncHandler;
                typedef Outcome<Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;



                /**
                 *This API is used to query the user list and user call quality data in a specified time period. It can query data of up to 6 users for the last 5 days, and the query time range cannot exceed 1 hour.
                 * @param req DescribeCallDetailRequest
                 * @return DescribeCallDetailOutcome
                 */
                DescribeCallDetailOutcome DescribeCallDetail(const Model::DescribeCallDetailRequest &request);
                void DescribeCallDetailAsync(const Model::DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailOutcomeCallable DescribeCallDetailCallable(const Model::DescribeCallDetailRequest& request);

                /**
                 *This API is used to query the number of historical rooms and users for the last 5 days. It can query once per minute.
                 * @param req DescribeHistoryScaleRequest
                 * @return DescribeHistoryScaleOutcome
                 */
                DescribeHistoryScaleOutcome DescribeHistoryScale(const Model::DescribeHistoryScaleRequest &request);
                void DescribeHistoryScaleAsync(const Model::DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryScaleOutcomeCallable DescribeHistoryScaleCallable(const Model::DescribeHistoryScaleRequest& request);

                /**
                 *This API is used to query real-time network status for the last 24 hours according to `sdkappid`, including upstream and downstream packet losses. The query time range cannot exceed 1 hour.
                 * @param req DescribeRealtimeNetworkRequest
                 * @return DescribeRealtimeNetworkOutcome
                 */
                DescribeRealtimeNetworkOutcome DescribeRealtimeNetwork(const Model::DescribeRealtimeNetworkRequest &request);
                void DescribeRealtimeNetworkAsync(const Model::DescribeRealtimeNetworkRequest& request, const DescribeRealtimeNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeNetworkOutcomeCallable DescribeRealtimeNetworkCallable(const Model::DescribeRealtimeNetworkRequest& request);

                /**
                 *This API is used to query real-time quality data for the last 24 hours according to `sdkappid`, including the room entry success rate, instant playback rate of the first frame, audio lag rate, and video lag rate. The query time range cannot exceed 1 hour.
                 * @param req DescribeRealtimeQualityRequest
                 * @return DescribeRealtimeQualityOutcome
                 */
                DescribeRealtimeQualityOutcome DescribeRealtimeQuality(const Model::DescribeRealtimeQualityRequest &request);
                void DescribeRealtimeQualityAsync(const Model::DescribeRealtimeQualityRequest& request, const DescribeRealtimeQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeQualityOutcomeCallable DescribeRealtimeQualityCallable(const Model::DescribeRealtimeQualityRequest& request);

                /**
                 *This API is used to query the real-time scale for the last 24 hours according to `sdkappid`. The query time range cannot exceed 1 hour.
                 * @param req DescribeRealtimeScaleRequest
                 * @return DescribeRealtimeScaleOutcome
                 */
                DescribeRealtimeScaleOutcome DescribeRealtimeScale(const Model::DescribeRealtimeScaleRequest &request);
                void DescribeRealtimeScaleAsync(const Model::DescribeRealtimeScaleRequest& request, const DescribeRealtimeScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeScaleOutcomeCallable DescribeRealtimeScaleCallable(const Model::DescribeRealtimeScaleRequest& request);

                /**
                 *This API is used to query the room list for the last 5 days according to `sdkappid`. It returns 10 calls by default and up to 100 calls at a time.
                 * @param req DescribeRoomInformationRequest
                 * @return DescribeRoomInformationOutcome
                 */
                DescribeRoomInformationOutcome DescribeRoomInformation(const Model::DescribeRoomInformationRequest &request);
                void DescribeRoomInformationAsync(const Model::DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInformationOutcomeCallable DescribeRoomInformationCallable(const Model::DescribeRoomInformationRequest& request);

                /**
                 *This API is used to remove all users from a room and dismiss the room. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req DismissRoomRequest
                 * @return DismissRoomOutcome
                 */
                DismissRoomOutcome DismissRoom(const Model::DismissRoomRequest &request);
                void DismissRoomAsync(const Model::DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomOutcomeCallable DismissRoomCallable(const Model::DismissRoomRequest& request);

                /**
                 *This API is used to remove a user from a room. It is applicable to scenarios where the anchor, room owner, or admin wants to kick out a user. It supports all platforms. For Android, iOS, Windows, and macOS, the TRTC SDK needs to be upgraded to v6.6 or above.
                 * @param req RemoveUserRequest
                 * @return RemoveUserOutcome
                 */
                RemoveUserOutcome RemoveUser(const Model::RemoveUserRequest &request);
                void RemoveUserAsync(const Model::RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserOutcomeCallable RemoveUserCallable(const Model::RemoveUserRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
