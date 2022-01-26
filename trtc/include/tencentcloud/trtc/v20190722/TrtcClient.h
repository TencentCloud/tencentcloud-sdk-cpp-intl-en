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
#include <tencentcloud/trtc/v20190722/model/CreatePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreatePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoRequest.h>
#include <tencentcloud/trtc/v20190722/model/CreateTroubleInfoResponse.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DeletePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeAbnormalEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeCallDetailResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeDetailEventResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeHistoryScaleResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribePictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRecordStatisticResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeRoomInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcInteractiveTimeRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcInteractiveTimeResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeTrtcMcuTranscodeTimeResponse.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInformationRequest.h>
#include <tencentcloud/trtc/v20190722/model/DescribeUserInformationResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomResponse.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/DismissRoomByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureRequest.h>
#include <tencentcloud/trtc/v20190722/model/ModifyPictureResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserResponse.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/RemoveUserByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StartMCUMixTranscodeByStrRoomIdResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeResponse.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdRequest.h>
#include <tencentcloud/trtc/v20190722/model/StopMCUMixTranscodeByStrRoomIdResponse.h>


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

                typedef Outcome<Core::Error, Model::CreatePictureResponse> CreatePictureOutcome;
                typedef std::future<CreatePictureOutcome> CreatePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreatePictureRequest&, CreatePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTroubleInfoResponse> CreateTroubleInfoOutcome;
                typedef std::future<CreateTroubleInfoOutcome> CreateTroubleInfoOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::CreateTroubleInfoRequest&, CreateTroubleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTroubleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePictureResponse> DeletePictureOutcome;
                typedef std::future<DeletePictureOutcome> DeletePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DeletePictureRequest&, DeletePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalEventResponse> DescribeAbnormalEventOutcome;
                typedef std::future<DescribeAbnormalEventOutcome> DescribeAbnormalEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeAbnormalEventRequest&, DescribeAbnormalEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallDetailResponse> DescribeCallDetailOutcome;
                typedef std::future<DescribeCallDetailOutcome> DescribeCallDetailOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeCallDetailRequest&, DescribeCallDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDetailEventResponse> DescribeDetailEventOutcome;
                typedef std::future<DescribeDetailEventOutcome> DescribeDetailEventOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeDetailEventRequest&, DescribeDetailEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDetailEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryScaleResponse> DescribeHistoryScaleOutcome;
                typedef std::future<DescribeHistoryScaleOutcome> DescribeHistoryScaleOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeHistoryScaleRequest&, DescribeHistoryScaleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryScaleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePictureResponse> DescribePictureOutcome;
                typedef std::future<DescribePictureOutcome> DescribePictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribePictureRequest&, DescribePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordStatisticResponse> DescribeRecordStatisticOutcome;
                typedef std::future<DescribeRecordStatisticOutcome> DescribeRecordStatisticOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRecordStatisticRequest&, DescribeRecordStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomInformationResponse> DescribeRoomInformationOutcome;
                typedef std::future<DescribeRoomInformationOutcome> DescribeRoomInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeRoomInformationRequest&, DescribeRoomInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcInteractiveTimeResponse> DescribeTrtcInteractiveTimeOutcome;
                typedef std::future<DescribeTrtcInteractiveTimeOutcome> DescribeTrtcInteractiveTimeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcInteractiveTimeRequest&, DescribeTrtcInteractiveTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcInteractiveTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrtcMcuTranscodeTimeResponse> DescribeTrtcMcuTranscodeTimeOutcome;
                typedef std::future<DescribeTrtcMcuTranscodeTimeOutcome> DescribeTrtcMcuTranscodeTimeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeTrtcMcuTranscodeTimeRequest&, DescribeTrtcMcuTranscodeTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrtcMcuTranscodeTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInformationResponse> DescribeUserInformationOutcome;
                typedef std::future<DescribeUserInformationOutcome> DescribeUserInformationOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DescribeUserInformationRequest&, DescribeUserInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomResponse> DismissRoomOutcome;
                typedef std::future<DismissRoomOutcome> DismissRoomOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomRequest&, DismissRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdResponse> DismissRoomByStrRoomIdOutcome;
                typedef std::future<DismissRoomByStrRoomIdOutcome> DismissRoomByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::DismissRoomByStrRoomIdRequest&, DismissRoomByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPictureResponse> ModifyPictureOutcome;
                typedef std::future<ModifyPictureOutcome> ModifyPictureOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::ModifyPictureRequest&, ModifyPictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPictureAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserResponse> RemoveUserOutcome;
                typedef std::future<RemoveUserOutcome> RemoveUserOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserRequest&, RemoveUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByStrRoomIdResponse> RemoveUserByStrRoomIdOutcome;
                typedef std::future<RemoveUserByStrRoomIdOutcome> RemoveUserByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::RemoveUserByStrRoomIdRequest&, RemoveUserByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeResponse> StartMCUMixTranscodeOutcome;
                typedef std::future<StartMCUMixTranscodeOutcome> StartMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeRequest&, StartMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMCUMixTranscodeByStrRoomIdResponse> StartMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StartMCUMixTranscodeByStrRoomIdOutcome> StartMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StartMCUMixTranscodeByStrRoomIdRequest&, StartMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMCUMixTranscodeByStrRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeResponse> StopMCUMixTranscodeOutcome;
                typedef std::future<StopMCUMixTranscodeOutcome> StopMCUMixTranscodeOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeRequest&, StopMCUMixTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMCUMixTranscodeByStrRoomIdResponse> StopMCUMixTranscodeByStrRoomIdOutcome;
                typedef std::future<StopMCUMixTranscodeByStrRoomIdOutcome> StopMCUMixTranscodeByStrRoomIdOutcomeCallable;
                typedef std::function<void(const TrtcClient*, const Model::StopMCUMixTranscodeByStrRoomIdRequest&, StopMCUMixTranscodeByStrRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMCUMixTranscodeByStrRoomIdAsyncHandler;



                /**
                 *This API is used to add custom background or watermark images during [On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/16827?from_cn_redirect=1). If you do not need to add such images frequently, we recommend you add them in the console via **Application Management** > **[Material Management](https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1)**.
                 * @param req CreatePictureRequest
                 * @return CreatePictureOutcome
                 */
                CreatePictureOutcome CreatePicture(const Model::CreatePictureRequest &request);
                void CreatePictureAsync(const Model::CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePictureOutcomeCallable CreatePictureCallable(const Model::CreatePictureRequest& request);

                /**
                 *This API is used to create exception information.
                 * @param req CreateTroubleInfoRequest
                 * @return CreateTroubleInfoOutcome
                 */
                CreateTroubleInfoOutcome CreateTroubleInfo(const Model::CreateTroubleInfoRequest &request);
                void CreateTroubleInfoAsync(const Model::CreateTroubleInfoRequest& request, const CreateTroubleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTroubleInfoOutcomeCallable CreateTroubleInfoCallable(const Model::CreateTroubleInfoRequest& request);

                /**
                 *This API is used to delete custom background or watermark images during [On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/16827?from_cn_redirect=1). If you do not need to delete such images frequently, we recommend you delete them in the console via **Application Management** > **[Material Management](https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1)**.
                 * @param req DeletePictureRequest
                 * @return DeletePictureOutcome
                 */
                DeletePictureOutcome DeletePicture(const Model::DeletePictureRequest &request);
                void DeletePictureAsync(const Model::DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePictureOutcomeCallable DeletePictureCallable(const Model::DeletePictureRequest& request);

                /**
                 *This API is used to query exception occurrences under a specified `SDKAppID` and return the exception IDs and possible causes. It queries data in last 15 days, and the query period is up to 1 hour, which can start and end on different days. For more information about exceptions, please see the exception event ID mapping table: https://intl.cloud.tencent.com/document/product/647/37906.
                 * @param req DescribeAbnormalEventRequest
                 * @return DescribeAbnormalEventOutcome
                 */
                DescribeAbnormalEventOutcome DescribeAbnormalEvent(const Model::DescribeAbnormalEventRequest &request);
                void DescribeAbnormalEventAsync(const Model::DescribeAbnormalEventRequest& request, const DescribeAbnormalEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalEventOutcomeCallable DescribeAbnormalEventCallable(const Model::DescribeAbnormalEventRequest& request);

                /**
                 *This API is used to query the user list and call quality data of a specified time range in the last 14 days. When `DataType` is not null, data of up to 6 users during a period of up to 1 hour can be queried each time, and the period can start on one day and end on the next. When `DataType` and `UserIds` are null, 6 users are queried by default, and data of up to 100 users can be displayed on each page (`PageSize` set to 100 or smaller). This API is used to query call quality and is not recommended for billing.
**Note**: You can use this API to query or check historical data, but not for real-time key business logic.
                 * @param req DescribeCallDetailRequest
                 * @return DescribeCallDetailOutcome
                 */
                DescribeCallDetailOutcome DescribeCallDetail(const Model::DescribeCallDetailRequest &request);
                void DescribeCallDetailAsync(const Model::DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallDetailOutcomeCallable DescribeCallDetailCallable(const Model::DescribeCallDetailRequest& request);

                /**
                 *This API is used to query a user’s activity details such as room entry/exit and video enablement/disablement during a call. It can query data for the last 14 days.
                 * @param req DescribeDetailEventRequest
                 * @return DescribeDetailEventOutcome
                 */
                DescribeDetailEventOutcome DescribeDetailEvent(const Model::DescribeDetailEventRequest &request);
                void DescribeDetailEventAsync(const Model::DescribeDetailEventRequest& request, const DescribeDetailEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDetailEventOutcomeCallable DescribeDetailEventCallable(const Model::DescribeDetailEventRequest& request);

                /**
                 *This API is used to query the daily numbers of rooms and users under a specified `SDKAppID`. It can query data once per minute for the last 14 days. If a day has not ended, the numbers of rooms and users on the day cannot be queried. 
                 * @param req DescribeHistoryScaleRequest
                 * @return DescribeHistoryScaleOutcome
                 */
                DescribeHistoryScaleOutcome DescribeHistoryScale(const Model::DescribeHistoryScaleRequest &request);
                void DescribeHistoryScaleAsync(const Model::DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryScaleOutcomeCallable DescribeHistoryScaleCallable(const Model::DescribeHistoryScaleRequest& request);

                /**
                 *This API is used to query the information of custom background or watermark images during [On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/16827?from_cn_redirect=1). If you do not need to query such information frequently, we recommend you query it in the console via **Application Management** > **[Material Management](https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1)**.
                 * @param req DescribePictureRequest
                 * @return DescribePictureOutcome
                 */
                DescribePictureOutcome DescribePicture(const Model::DescribePictureRequest &request);
                void DescribePictureAsync(const Model::DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePictureOutcomeCallable DescribePictureCallable(const Model::DescribePictureRequest& request);

                /**
                 *This API is used to query billable on-cloud recording durations.

- If the period queried is 1 day or shorter, the statistics returned are on a 5-minute basis. If the period queried is longer than 1 day, the statistics returned are on a daily basis.
- The period queried in a request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- In the daily pay-as-you-go mode, bills for a day are generated the next morning. Therefore, we recommend you query the statistics after 9 AM the next day.
                 * @param req DescribeRecordStatisticRequest
                 * @return DescribeRecordStatisticOutcome
                 */
                DescribeRecordStatisticOutcome DescribeRecordStatistic(const Model::DescribeRecordStatisticRequest &request);
                void DescribeRecordStatisticAsync(const Model::DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordStatisticOutcomeCallable DescribeRecordStatisticCallable(const Model::DescribeRecordStatisticRequest& request);

                /**
                 *This API is used to query the room list of an `SDKAppID` in the last 14 days. It returns 10 calls by default and can return up to 100 calls per query.
**Note**: You can use this API to query or check historical data, but not for real-time key business logic.
                 * @param req DescribeRoomInformationRequest
                 * @return DescribeRoomInformationOutcome
                 */
                DescribeRoomInformationOutcome DescribeRoomInformation(const Model::DescribeRoomInformationRequest &request);
                void DescribeRoomInformationAsync(const Model::DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomInformationOutcomeCallable DescribeRoomInformationCallable(const Model::DescribeRoomInformationRequest& request);

                /**
                 *This API is used to query billable audio/video interaction durations.
- If the period queried is 1 day or shorter, the statistics returned are on a 5-minute basis. If the period queried is longer than 1 day, the statistics returned are on a daily basis.
- The period queried in a request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- In the daily pay-as-you-go mode, bills for a day are generated the next morning. Therefore, we recommend you query the statistics after 9 AM the next day.
                 * @param req DescribeTrtcInteractiveTimeRequest
                 * @return DescribeTrtcInteractiveTimeOutcome
                 */
                DescribeTrtcInteractiveTimeOutcome DescribeTrtcInteractiveTime(const Model::DescribeTrtcInteractiveTimeRequest &request);
                void DescribeTrtcInteractiveTimeAsync(const Model::DescribeTrtcInteractiveTimeRequest& request, const DescribeTrtcInteractiveTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcInteractiveTimeOutcomeCallable DescribeTrtcInteractiveTimeCallable(const Model::DescribeTrtcInteractiveTimeRequest& request);

                /**
                 *This API is used to query billable relaying and transcoding durations.
- If the period queried is 1 day or shorter, the statistics returned are on a 5-minute basis. If the period queried is longer than 1 day, the statistics returned are on a daily basis.
- The period queried in a request cannot be longer than 31 days.
- If you query the statistics of the current day, the statistics returned may be inaccurate due to the delay in data collection.
- In the daily pay-as-you-go mode, bills for a day are generated the next morning. Therefore, we recommend you query the statistics after 9 AM the next day.
                 * @param req DescribeTrtcMcuTranscodeTimeRequest
                 * @return DescribeTrtcMcuTranscodeTimeOutcome
                 */
                DescribeTrtcMcuTranscodeTimeOutcome DescribeTrtcMcuTranscodeTime(const Model::DescribeTrtcMcuTranscodeTimeRequest &request);
                void DescribeTrtcMcuTranscodeTimeAsync(const Model::DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrtcMcuTranscodeTimeOutcomeCallable DescribeTrtcMcuTranscodeTimeCallable(const Model::DescribeTrtcMcuTranscodeTimeRequest& request);

                /**
                 *This API is used to query the user list of a specified time range (up to 4 hours) in the last 14 days. Data of 6 users is displayed on each page by default, and data of up to 100 users can be displayed on each page (`PageSize` set to 100 or smaller).
**Note**: You can use this API to query or check historical data, but not for real-time key business logic.
                 * @param req DescribeUserInformationRequest
                 * @return DescribeUserInformationOutcome
                 */
                DescribeUserInformationOutcome DescribeUserInformation(const Model::DescribeUserInformationRequest &request);
                void DescribeUserInformationAsync(const Model::DescribeUserInformationRequest& request, const DescribeUserInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInformationOutcomeCallable DescribeUserInformationCallable(const Model::DescribeUserInformationRequest& request);

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
                 *This API is used to modify custom background or watermark images during [On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/16827?from_cn_redirect=1). If you do not need to modify such images frequently, we recommend you modify them in the console via **Application Management** > **[Material Management](https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1)**.
                 * @param req ModifyPictureRequest
                 * @return ModifyPictureOutcome
                 */
                ModifyPictureOutcome ModifyPicture(const Model::ModifyPictureRequest &request);
                void ModifyPictureAsync(const Model::ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPictureOutcomeCallable ModifyPictureCallable(const Model::ModifyPictureRequest& request);

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
                 *This API is used to enable On-Cloud MixTranscoding and specify the position of each channel of image in stream mixing.

There may be multiple audio/video streams in a TRTC room. You can call this API to request the Tencent Cloud server to mix the audio and video and specify the position of each image to produce just one audio/video stream for recording and playback. The mixing stops automatically after a room is terminated.

You can use this API to perform the following operations:
- Set image and audio quality parameters of the final live stream, including video resolution, video bitrate, video frame rate, and audio quality.
- Set the layout, i.e., the position of each image. You only need to set it once when enabling On-Cloud MixTranscoding, and the layout engine will automatically arrange images as configured.
- Set the names of recording files for future playback.
- Set the stream ID for CDN live streaming.

Currently, On-Cloud MixTranscoding supports the following layout templates:
- Floating: The entire screen is covered by the video image of the first user who enters the room, and the images of other users are displayed as small images in rows in the bottom-left corner in room entry sequence. The screen allows up to 4 rows of 4 small images, which float over the big image. Up to 1 big image and 15 small images can be displayed. A user sending audio only will still occupy an image spot.
- Grid: The images of all users split the entire screen evenly. The more users, the smaller the image dimensions. Up to 16 images can be displayed. A user sending audio only will still occupy an image spot.
- Screen sharing: This is designed for video conferencing and online education. The shared screen (or camera image of the anchor) is always displayed as the big image, which occupies the left half of the screen, and the images of other users occupy the right half in up to 2 columns of up to 8 small images each. Up to 1 big image and 15 small images can be displayed. If the upstream aspect ratio does not match the output, the big image on the left will be scaled and displayed in whole, while the small images on the right will be cropped.
- Picture-in-picture: This template mixes the big and small images or big image of a user with the audio of other users. The small image floats over the big image. You can specify the user whose small and big images are displayed, as well as the position of the small image. This template can display at most 2 images.
- Custom: This is designed for cases where you want to specify the image positions of users in the mixed stream or preset image positions. If users are assigned to preset positions, the layout engine will reserve the positions for the users; if not, users will occupy the positions in room entry sequence. Once all preset positions are occupied, TRTC will stop mixing the audio and video of other users. If the place-holding feature is enabled for a custom template (by setting `PlaceHolderMode` in `LayoutParams` to `1`) and a user for whom a place is held is not sending video, the position will show the specified placeholder image (`PlaceImageId`).

Notes:
1. **As On-Cloud MixTranscoding is a paid feature, you will be charged for calling this API. For details, see [Billing of On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/49446?from_cn_redirect=1).**
2. You can call this API only if your application is created on or after January 9, 2020. Applications created before use the stream mixing service of CSS by default. If you want to switch to MCU On-Cloud MixTranscoding, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
3. You cannot use the server and client stream mixing APIs at the same time.
                 * @param req StartMCUMixTranscodeRequest
                 * @return StartMCUMixTranscodeOutcome
                 */
                StartMCUMixTranscodeOutcome StartMCUMixTranscode(const Model::StartMCUMixTranscodeRequest &request);
                void StartMCUMixTranscodeAsync(const Model::StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeOutcomeCallable StartMCUMixTranscodeCallable(const Model::StartMCUMixTranscodeRequest& request);

                /**
                 *This API is used to enable On-Cloud MixTranscoding and specify the position of each channel of image in stream mixing.

There may be multiple channels of audio/video streams in a TRTC room. You can call this API to request the Tencent Cloud server to mix multiple channels of video images and audio into one channel and specify the position of each image so as to produce only one channel of audio/video stream for recording and live streaming.

You can use this API to perform the following operations:
- Set image and audio quality parameters of the mixed stream, including video resolution, bitrate, frame rate, and audio quality.
- Set the layout, i.e., the position of each channel of image. You only need to set it once when enabling On-Cloud MixTranscoding, and the layout engine will automatically arrange images as configured.
- Set the names of recording files for future playback.
- Set the stream ID for CDN live streaming.

Currently, On-Cloud MixTranscoding supports the following layout templates:
- Floating: the entire screen is covered by the video image of the first user who enters the room, and the images of other users are displayed as small images in horizontal rows in the bottom-left corner in room entry sequence. The screen can accommodate up to 4 rows of 4 small images, which float over the big image. Up to 1 big image and 15 small images can be displayed. A user sending audio only will still occupy an image spot.
- Grid: the images of all users split the screen evenly. The more the users, the smaller the image dimensions. Up to 16 images can be displayed. A user sending audio only will still occupy an image spot.
- Screen sharing: this template is designed for video conferencing and online classes. The shared screen (or camera image of the anchor) is always displayed as the big image, which occupies the left half of the screen, and the images of other users occupy the right half in up to 2 columns of a maximum of 8 small images each. Up to 1 big image and 15 small images can be displayed. If the aspect ratio of upstream images does not match that of output images, the big image on the left will be scaled and displayed in whole, while the small images on the right will be cropped.
- Picture-in-picture: this template mixes the big and small images or big image of a user with the audio of other users. The small image floats over the big image. You can specify the user whose big and small images are displayed and the position of the small image.
- Custom: you can use custom templates to specify the image positions of users in mixed streams or preset image positions. If users are assigned to preset positions, the layout engine will reserve the positions for the users; if not, users will occupy the positions in room entry sequence. Once all preset positions are occupied, TRTC will stop mixing the audio and images of other users. If the placeholding feature is enabled for a custom template (`PlaceHolderMode` in `LayoutParams` is set to 1), but a user for whom a place is reserved is not sending video data, the position will show the corresponding placeholder image (`PlaceImageId`).

Notes:
1. **As On-Cloud MixTranscoding is a paid feature, you will be charged for calling this API. For details, see [Billing of On-Cloud MixTranscoding](https://intl.cloud.tencent.com/document/product/647/49446?from_cn_redirect=1).**
2. You can call this API only if your application is created on or after January 9, 2020. Applications created before use the stream mixing service of CSS by default. If you want to switch to MCU On-Cloud MixTranscoding, please [submit a ticket](https://console.cloud.tencent.com/workorder/category).
3. You cannot use the server and client stream mixing APIs at the same time.
                 * @param req StartMCUMixTranscodeByStrRoomIdRequest
                 * @return StartMCUMixTranscodeByStrRoomIdOutcome
                 */
                StartMCUMixTranscodeByStrRoomIdOutcome StartMCUMixTranscodeByStrRoomId(const Model::StartMCUMixTranscodeByStrRoomIdRequest &request);
                void StartMCUMixTranscodeByStrRoomIdAsync(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMCUMixTranscodeByStrRoomIdOutcomeCallable StartMCUMixTranscodeByStrRoomIdCallable(const Model::StartMCUMixTranscodeByStrRoomIdRequest& request);

                /**
                 *This API is used to end On-Cloud MixTranscoding.
                 * @param req StopMCUMixTranscodeRequest
                 * @return StopMCUMixTranscodeOutcome
                 */
                StopMCUMixTranscodeOutcome StopMCUMixTranscode(const Model::StopMCUMixTranscodeRequest &request);
                void StopMCUMixTranscodeAsync(const Model::StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeOutcomeCallable StopMCUMixTranscodeCallable(const Model::StopMCUMixTranscodeRequest& request);

                /**
                 *This API is used to stop On-Cloud MixTranscoding.
                 * @param req StopMCUMixTranscodeByStrRoomIdRequest
                 * @return StopMCUMixTranscodeByStrRoomIdOutcome
                 */
                StopMCUMixTranscodeByStrRoomIdOutcome StopMCUMixTranscodeByStrRoomId(const Model::StopMCUMixTranscodeByStrRoomIdRequest &request);
                void StopMCUMixTranscodeByStrRoomIdAsync(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMCUMixTranscodeByStrRoomIdOutcomeCallable StopMCUMixTranscodeByStrRoomIdCallable(const Model::StopMCUMixTranscodeByStrRoomIdRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_TRTCCLIENT_H_
