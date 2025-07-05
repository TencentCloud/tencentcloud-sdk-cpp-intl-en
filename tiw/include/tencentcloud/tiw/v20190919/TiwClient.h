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

#ifndef TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
#define TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiw/v20190919/model/ApplyTiwTrialRequest.h>
#include <tencentcloud/tiw/v20190919/model/ApplyTiwTrialResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateApplicationRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateApplicationResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeAPIServiceRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeAPIServiceResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationInfosRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationInfosResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeApplicationUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeIMApplicationsRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeIMApplicationsResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribePostpaidUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribePostpaidUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeQualityMetricsRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeQualityMetricsResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRecordSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRecordSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRoomListRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeRoomListResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUsageSummaryRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUsageSummaryResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserListRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserListResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserResourcesRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserResourcesResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserStatusRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeUserStatusResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchRequest.h>
#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyApplicationRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyApplicationResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigRequest.h>
#include <tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigResponse.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackResponse.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h>
#include <tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StartWhiteboardPushResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushRequest.h>
#include <tencentcloud/tiw/v20190919/model/StopWhiteboardPushResponse.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            class TiwClient : public AbstractClient
            {
            public:
                TiwClient(const Credential &credential, const std::string &region);
                TiwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyTiwTrialResponse> ApplyTiwTrialOutcome;
                typedef std::future<ApplyTiwTrialOutcome> ApplyTiwTrialOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ApplyTiwTrialRequest&, ApplyTiwTrialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTiwTrialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotTaskResponse> CreateSnapshotTaskOutcome;
                typedef std::future<CreateSnapshotTaskOutcome> CreateSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateSnapshotTaskRequest&, CreateSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeResponse> CreateTranscodeOutcome;
                typedef std::future<CreateTranscodeOutcome> CreateTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateTranscodeRequest&, CreateTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoGenerationTaskResponse> CreateVideoGenerationTaskOutcome;
                typedef std::future<CreateVideoGenerationTaskOutcome> CreateVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::CreateVideoGenerationTaskRequest&, CreateVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIServiceResponse> DescribeAPIServiceOutcome;
                typedef std::future<DescribeAPIServiceOutcome> DescribeAPIServiceOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeAPIServiceRequest&, DescribeAPIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationInfosResponse> DescribeApplicationInfosOutcome;
                typedef std::future<DescribeApplicationInfosOutcome> DescribeApplicationInfosOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeApplicationInfosRequest&, DescribeApplicationInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationUsageResponse> DescribeApplicationUsageOutcome;
                typedef std::future<DescribeApplicationUsageOutcome> DescribeApplicationUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeApplicationUsageRequest&, DescribeApplicationUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBoardSDKLogResponse> DescribeBoardSDKLogOutcome;
                typedef std::future<DescribeBoardSDKLogOutcome> DescribeBoardSDKLogOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeBoardSDKLogRequest&, DescribeBoardSDKLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBoardSDKLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIMApplicationsResponse> DescribeIMApplicationsOutcome;
                typedef std::future<DescribeIMApplicationsOutcome> DescribeIMApplicationsOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeIMApplicationsRequest&, DescribeIMApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordResponse> DescribeOnlineRecordOutcome;
                typedef std::future<DescribeOnlineRecordOutcome> DescribeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordRequest&, DescribeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOnlineRecordCallbackResponse> DescribeOnlineRecordCallbackOutcome;
                typedef std::future<DescribeOnlineRecordCallbackOutcome> DescribeOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeOnlineRecordCallbackRequest&, DescribeOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostpaidUsageResponse> DescribePostpaidUsageOutcome;
                typedef std::future<DescribePostpaidUsageOutcome> DescribePostpaidUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribePostpaidUsageRequest&, DescribePostpaidUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostpaidUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityMetricsResponse> DescribeQualityMetricsOutcome;
                typedef std::future<DescribeQualityMetricsOutcome> DescribeQualityMetricsOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeQualityMetricsRequest&, DescribeQualityMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordSearchResponse> DescribeRecordSearchOutcome;
                typedef std::future<DescribeRecordSearchOutcome> DescribeRecordSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRecordSearchRequest&, DescribeRecordSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomListResponse> DescribeRoomListOutcome;
                typedef std::future<DescribeRoomListOutcome> DescribeRoomListOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeRoomListRequest&, DescribeRoomListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotTaskResponse> DescribeSnapshotTaskOutcome;
                typedef std::future<DescribeSnapshotTaskOutcome> DescribeSnapshotTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeSnapshotTaskRequest&, DescribeSnapshotTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTIWDailyUsageResponse> DescribeTIWDailyUsageOutcome;
                typedef std::future<DescribeTIWDailyUsageOutcome> DescribeTIWDailyUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTIWDailyUsageRequest&, DescribeTIWDailyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTIWDailyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTIWRoomDailyUsageResponse> DescribeTIWRoomDailyUsageOutcome;
                typedef std::future<DescribeTIWRoomDailyUsageOutcome> DescribeTIWRoomDailyUsageOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTIWRoomDailyUsageRequest&, DescribeTIWRoomDailyUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTIWRoomDailyUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeResponse> DescribeTranscodeOutcome;
                typedef std::future<DescribeTranscodeOutcome> DescribeTranscodeOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeRequest&, DescribeTranscodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeCallbackResponse> DescribeTranscodeCallbackOutcome;
                typedef std::future<DescribeTranscodeCallbackOutcome> DescribeTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeCallbackRequest&, DescribeTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeSearchResponse> DescribeTranscodeSearchOutcome;
                typedef std::future<DescribeTranscodeSearchOutcome> DescribeTranscodeSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeTranscodeSearchRequest&, DescribeTranscodeSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageSummaryResponse> DescribeUsageSummaryOutcome;
                typedef std::future<DescribeUsageSummaryOutcome> DescribeUsageSummaryOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUsageSummaryRequest&, DescribeUsageSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResourcesResponse> DescribeUserResourcesOutcome;
                typedef std::future<DescribeUserResourcesOutcome> DescribeUserResourcesOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserResourcesRequest&, DescribeUserResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserStatusResponse> DescribeUserStatusOutcome;
                typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeUserStatusRequest&, DescribeUserStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskResponse> DescribeVideoGenerationTaskOutcome;
                typedef std::future<DescribeVideoGenerationTaskOutcome> DescribeVideoGenerationTaskOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskRequest&, DescribeVideoGenerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoGenerationTaskCallbackResponse> DescribeVideoGenerationTaskCallbackOutcome;
                typedef std::future<DescribeVideoGenerationTaskCallbackOutcome> DescribeVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeVideoGenerationTaskCallbackRequest&, DescribeVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardApplicationConfigResponse> DescribeWhiteboardApplicationConfigOutcome;
                typedef std::future<DescribeWhiteboardApplicationConfigOutcome> DescribeWhiteboardApplicationConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardApplicationConfigRequest&, DescribeWhiteboardApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardBucketConfigResponse> DescribeWhiteboardBucketConfigOutcome;
                typedef std::future<DescribeWhiteboardBucketConfigOutcome> DescribeWhiteboardBucketConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardBucketConfigRequest&, DescribeWhiteboardBucketConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardBucketConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushResponse> DescribeWhiteboardPushOutcome;
                typedef std::future<DescribeWhiteboardPushOutcome> DescribeWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushRequest&, DescribeWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushCallbackResponse> DescribeWhiteboardPushCallbackOutcome;
                typedef std::future<DescribeWhiteboardPushCallbackOutcome> DescribeWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushCallbackRequest&, DescribeWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteboardPushSearchResponse> DescribeWhiteboardPushSearchOutcome;
                typedef std::future<DescribeWhiteboardPushSearchOutcome> DescribeWhiteboardPushSearchOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::DescribeWhiteboardPushSearchRequest&, DescribeWhiteboardPushSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteboardPushSearchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWhiteboardApplicationConfigResponse> ModifyWhiteboardApplicationConfigOutcome;
                typedef std::future<ModifyWhiteboardApplicationConfigOutcome> ModifyWhiteboardApplicationConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyWhiteboardApplicationConfigRequest&, ModifyWhiteboardApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhiteboardApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWhiteboardBucketConfigResponse> ModifyWhiteboardBucketConfigOutcome;
                typedef std::future<ModifyWhiteboardBucketConfigOutcome> ModifyWhiteboardBucketConfigOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ModifyWhiteboardBucketConfigRequest&, ModifyWhiteboardBucketConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhiteboardBucketConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseOnlineRecordResponse> PauseOnlineRecordOutcome;
                typedef std::future<PauseOnlineRecordOutcome> PauseOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::PauseOnlineRecordRequest&, PauseOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeOnlineRecordResponse> ResumeOnlineRecordOutcome;
                typedef std::future<ResumeOnlineRecordOutcome> ResumeOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::ResumeOnlineRecordRequest&, ResumeOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackResponse> SetOnlineRecordCallbackOutcome;
                typedef std::future<SetOnlineRecordCallbackOutcome> SetOnlineRecordCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackRequest&, SetOnlineRecordCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetOnlineRecordCallbackKeyResponse> SetOnlineRecordCallbackKeyOutcome;
                typedef std::future<SetOnlineRecordCallbackKeyOutcome> SetOnlineRecordCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetOnlineRecordCallbackKeyRequest&, SetOnlineRecordCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetOnlineRecordCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackResponse> SetTranscodeCallbackOutcome;
                typedef std::future<SetTranscodeCallbackOutcome> SetTranscodeCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackRequest&, SetTranscodeCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTranscodeCallbackKeyResponse> SetTranscodeCallbackKeyOutcome;
                typedef std::future<SetTranscodeCallbackKeyOutcome> SetTranscodeCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetTranscodeCallbackKeyRequest&, SetTranscodeCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTranscodeCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackResponse> SetVideoGenerationTaskCallbackOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackOutcome> SetVideoGenerationTaskCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackRequest&, SetVideoGenerationTaskCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVideoGenerationTaskCallbackKeyResponse> SetVideoGenerationTaskCallbackKeyOutcome;
                typedef std::future<SetVideoGenerationTaskCallbackKeyOutcome> SetVideoGenerationTaskCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetVideoGenerationTaskCallbackKeyRequest&, SetVideoGenerationTaskCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVideoGenerationTaskCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackResponse> SetWhiteboardPushCallbackOutcome;
                typedef std::future<SetWhiteboardPushCallbackOutcome> SetWhiteboardPushCallbackOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackRequest&, SetWhiteboardPushCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWhiteboardPushCallbackKeyResponse> SetWhiteboardPushCallbackKeyOutcome;
                typedef std::future<SetWhiteboardPushCallbackKeyOutcome> SetWhiteboardPushCallbackKeyOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::SetWhiteboardPushCallbackKeyRequest&, SetWhiteboardPushCallbackKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWhiteboardPushCallbackKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOnlineRecordResponse> StartOnlineRecordOutcome;
                typedef std::future<StartOnlineRecordOutcome> StartOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartOnlineRecordRequest&, StartOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartWhiteboardPushResponse> StartWhiteboardPushOutcome;
                typedef std::future<StartWhiteboardPushOutcome> StartWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StartWhiteboardPushRequest&, StartWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartWhiteboardPushAsyncHandler;
                typedef Outcome<Core::Error, Model::StopOnlineRecordResponse> StopOnlineRecordOutcome;
                typedef std::future<StopOnlineRecordOutcome> StopOnlineRecordOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopOnlineRecordRequest&, StopOnlineRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopOnlineRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWhiteboardPushResponse> StopWhiteboardPushOutcome;
                typedef std::future<StopWhiteboardPushOutcome> StopWhiteboardPushOutcomeCallable;
                typedef std::function<void(const TiwClient*, const Model::StopWhiteboardPushRequest&, StopWhiteboardPushOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWhiteboardPushAsyncHandler;



                /**
                 *This API is used to apply for a Tencent Interactive Whiteboard trial (15-day by default).
                 * @param req ApplyTiwTrialRequest
                 * @return ApplyTiwTrialOutcome
                 */
                ApplyTiwTrialOutcome ApplyTiwTrial(const Model::ApplyTiwTrialRequest &request);
                void ApplyTiwTrialAsync(const Model::ApplyTiwTrialRequest& request, const ApplyTiwTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyTiwTrialOutcomeCallable ApplyTiwTrialCallable(const Model::ApplyTiwTrialRequest& request);

                /**
                 *This API is used to create a whiteboard application.
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *This API is used to create a whiteboard snapshot task. If a callback URL is provided, the whiteboard snapshot result is sent to the callback URL after the task is complete.
                 * @param req CreateSnapshotTaskRequest
                 * @return CreateSnapshotTaskOutcome
                 */
                CreateSnapshotTaskOutcome CreateSnapshotTask(const Model::CreateSnapshotTaskRequest &request);
                void CreateSnapshotTaskAsync(const Model::CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotTaskOutcomeCallable CreateSnapshotTaskCallable(const Model::CreateSnapshotTaskRequest& request);

                /**
                 *This API is used to create a document transcoding task.
                 * @param req CreateTranscodeRequest
                 * @return CreateTranscodeOutcome
                 */
                CreateTranscodeOutcome CreateTranscode(const Model::CreateTranscodeRequest &request);
                void CreateTranscodeAsync(const Model::CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeOutcomeCallable CreateTranscodeCallable(const Model::CreateTranscodeRequest& request);

                /**
                 *This API is used to create a recording video generation task.
                 * @param req CreateVideoGenerationTaskRequest
                 * @return CreateVideoGenerationTaskOutcome
                 */
                CreateVideoGenerationTaskOutcome CreateVideoGenerationTask(const Model::CreateVideoGenerationTaskRequest &request);
                void CreateVideoGenerationTaskAsync(const Model::CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoGenerationTaskOutcomeCallable CreateVideoGenerationTaskCallable(const Model::CreateVideoGenerationTaskRequest& request);

                /**
                 *This API is used to query the information about other cloud products by using the service role.
                 * @param req DescribeAPIServiceRequest
                 * @return DescribeAPIServiceOutcome
                 */
                DescribeAPIServiceOutcome DescribeAPIService(const Model::DescribeAPIServiceRequest &request);
                void DescribeAPIServiceAsync(const Model::DescribeAPIServiceRequest& request, const DescribeAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIServiceOutcomeCallable DescribeAPIServiceCallable(const Model::DescribeAPIServiceRequest& request);

                /**
                 *This API is used to query the details of a whiteboard application.
                 * @param req DescribeApplicationInfosRequest
                 * @return DescribeApplicationInfosOutcome
                 */
                DescribeApplicationInfosOutcome DescribeApplicationInfos(const Model::DescribeApplicationInfosRequest &request);
                void DescribeApplicationInfosAsync(const Model::DescribeApplicationInfosRequest& request, const DescribeApplicationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationInfosOutcomeCallable DescribeApplicationInfosCallable(const Model::DescribeApplicationInfosRequest& request);

                /**
                 *This API is used to query the subproduct usage of Tencent Interactive Whiteboard.
                 * @param req DescribeApplicationUsageRequest
                 * @return DescribeApplicationUsageOutcome
                 */
                DescribeApplicationUsageOutcome DescribeApplicationUsage(const Model::DescribeApplicationUsageRequest &request);
                void DescribeApplicationUsageAsync(const Model::DescribeApplicationUsageRequest& request, const DescribeApplicationUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationUsageOutcomeCallable DescribeApplicationUsageCallable(const Model::DescribeApplicationUsageRequest& request);

                /**
                 *This API is used to query the logs of a whiteboard application on a client.
                 * @param req DescribeBoardSDKLogRequest
                 * @return DescribeBoardSDKLogOutcome
                 */
                DescribeBoardSDKLogOutcome DescribeBoardSDKLog(const Model::DescribeBoardSDKLogRequest &request);
                void DescribeBoardSDKLogAsync(const Model::DescribeBoardSDKLogRequest& request, const DescribeBoardSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBoardSDKLogOutcomeCallable DescribeBoardSDKLogCallable(const Model::DescribeBoardSDKLogRequest& request);

                /**
                 *This API is used to query the instant messaging (IM) applications that are available for creating a whiteboard application.
                 * @param req DescribeIMApplicationsRequest
                 * @return DescribeIMApplicationsOutcome
                 */
                DescribeIMApplicationsOutcome DescribeIMApplications(const Model::DescribeIMApplicationsRequest &request);
                void DescribeIMApplicationsAsync(const Model::DescribeIMApplicationsRequest& request, const DescribeIMApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMApplicationsOutcomeCallable DescribeIMApplicationsCallable(const Model::DescribeIMApplicationsRequest& request);

                /**
                 *This API is used to query the status and result of a real-time recording task.
                 * @param req DescribeOnlineRecordRequest
                 * @return DescribeOnlineRecordOutcome
                 */
                DescribeOnlineRecordOutcome DescribeOnlineRecord(const Model::DescribeOnlineRecordRequest &request);
                void DescribeOnlineRecordAsync(const Model::DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordOutcomeCallable DescribeOnlineRecordCallable(const Model::DescribeOnlineRecordRequest& request);

                /**
                 *This API is used to query the real-time recording callback address.
                 * @param req DescribeOnlineRecordCallbackRequest
                 * @return DescribeOnlineRecordCallbackOutcome
                 */
                DescribeOnlineRecordCallbackOutcome DescribeOnlineRecordCallback(const Model::DescribeOnlineRecordCallbackRequest &request);
                void DescribeOnlineRecordCallbackAsync(const Model::DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOnlineRecordCallbackOutcomeCallable DescribeOnlineRecordCallbackCallable(const Model::DescribeOnlineRecordCallbackRequest& request);

                /**
                 *This API is used to query the pay-as-you-go usage of a user.
                 * @param req DescribePostpaidUsageRequest
                 * @return DescribePostpaidUsageOutcome
                 */
                DescribePostpaidUsageOutcome DescribePostpaidUsage(const Model::DescribePostpaidUsageRequest &request);
                void DescribePostpaidUsageAsync(const Model::DescribePostpaidUsageRequest& request, const DescribePostpaidUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostpaidUsageOutcomeCallable DescribePostpaidUsageCallable(const Model::DescribePostpaidUsageRequest& request);

                /**
                 *This API is used to query the quality data of a whiteboard application.
                 * @param req DescribeQualityMetricsRequest
                 * @return DescribeQualityMetricsOutcome
                 */
                DescribeQualityMetricsOutcome DescribeQualityMetrics(const Model::DescribeQualityMetricsRequest &request);
                void DescribeQualityMetricsAsync(const Model::DescribeQualityMetricsRequest& request, const DescribeQualityMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityMetricsOutcomeCallable DescribeQualityMetricsCallable(const Model::DescribeQualityMetricsRequest& request);

                /**
                 *This API is used to query real-time recording tasks by room ID.
                 * @param req DescribeRecordSearchRequest
                 * @return DescribeRecordSearchOutcome
                 */
                DescribeRecordSearchOutcome DescribeRecordSearch(const Model::DescribeRecordSearchRequest &request);
                void DescribeRecordSearchAsync(const Model::DescribeRecordSearchRequest& request, const DescribeRecordSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordSearchOutcomeCallable DescribeRecordSearchCallable(const Model::DescribeRecordSearchRequest& request);

                /**
                 *This API is used to query the rooms of a whiteboard application.
                 * @param req DescribeRoomListRequest
                 * @return DescribeRoomListOutcome
                 */
                DescribeRoomListOutcome DescribeRoomList(const Model::DescribeRoomListRequest &request);
                void DescribeRoomListAsync(const Model::DescribeRoomListRequest& request, const DescribeRoomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomListOutcomeCallable DescribeRoomListCallable(const Model::DescribeRoomListRequest& request);

                /**
                 *This API is used to query the information about a whiteboard snapshot task.
                 * @param req DescribeSnapshotTaskRequest
                 * @return DescribeSnapshotTaskOutcome
                 */
                DescribeSnapshotTaskOutcome DescribeSnapshotTask(const Model::DescribeSnapshotTaskRequest &request);
                void DescribeSnapshotTaskAsync(const Model::DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotTaskOutcomeCallable DescribeSnapshotTaskCallable(const Model::DescribeSnapshotTaskRequest& request);

                /**
                 *This API is used to query the daily billable usage of a whiteboard application.
1. The period queried per request cannot be longer than 31 days.
2. Due to statistics delays and other reasons, you cannot query the usage data of the current day. You can query today's usage after 7:00 tomorrow.

                 * @param req DescribeTIWDailyUsageRequest
                 * @return DescribeTIWDailyUsageOutcome
                 */
                DescribeTIWDailyUsageOutcome DescribeTIWDailyUsage(const Model::DescribeTIWDailyUsageRequest &request);
                void DescribeTIWDailyUsageAsync(const Model::DescribeTIWDailyUsageRequest& request, const DescribeTIWDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTIWDailyUsageOutcomeCallable DescribeTIWDailyUsageCallable(const Model::DescribeTIWDailyUsageRequest& request);

                /**
                 *This API is used to query the daily billable usage by each room of a whiteboard application.
1. The period queried per request cannot be longer than 31 days.
2. Due to statistics delays and other reasons, you cannot query the usage data of the current day. You can query today's usage after 7:00 tomorrow.

                 * @param req DescribeTIWRoomDailyUsageRequest
                 * @return DescribeTIWRoomDailyUsageOutcome
                 */
                DescribeTIWRoomDailyUsageOutcome DescribeTIWRoomDailyUsage(const Model::DescribeTIWRoomDailyUsageRequest &request);
                void DescribeTIWRoomDailyUsageAsync(const Model::DescribeTIWRoomDailyUsageRequest& request, const DescribeTIWRoomDailyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTIWRoomDailyUsageOutcomeCallable DescribeTIWRoomDailyUsageCallable(const Model::DescribeTIWRoomDailyUsageRequest& request);

                /**
                 *This API is used to query the progress and result of a document transcoding task.
                 * @param req DescribeTranscodeRequest
                 * @return DescribeTranscodeOutcome
                 */
                DescribeTranscodeOutcome DescribeTranscode(const Model::DescribeTranscodeRequest &request);
                void DescribeTranscodeAsync(const Model::DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeOutcomeCallable DescribeTranscodeCallable(const Model::DescribeTranscodeRequest& request);

                /**
                 *This API is used to query the document transcoding callback address.
                 * @param req DescribeTranscodeCallbackRequest
                 * @return DescribeTranscodeCallbackOutcome
                 */
                DescribeTranscodeCallbackOutcome DescribeTranscodeCallback(const Model::DescribeTranscodeCallbackRequest &request);
                void DescribeTranscodeCallbackAsync(const Model::DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeCallbackOutcomeCallable DescribeTranscodeCallbackCallable(const Model::DescribeTranscodeCallbackRequest& request);

                /**
                 *This API is used to query transcoding tasks by document name.
                 * @param req DescribeTranscodeSearchRequest
                 * @return DescribeTranscodeSearchOutcome
                 */
                DescribeTranscodeSearchOutcome DescribeTranscodeSearch(const Model::DescribeTranscodeSearchRequest &request);
                void DescribeTranscodeSearchAsync(const Model::DescribeTranscodeSearchRequest& request, const DescribeTranscodeSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeSearchOutcomeCallable DescribeTranscodeSearchCallable(const Model::DescribeTranscodeSearchRequest& request);

                /**
                 *This API is used to query the summary of subproduct usage within a specified period of time.
                 * @param req DescribeUsageSummaryRequest
                 * @return DescribeUsageSummaryOutcome
                 */
                DescribeUsageSummaryOutcome DescribeUsageSummary(const Model::DescribeUsageSummaryRequest &request);
                void DescribeUsageSummaryAsync(const Model::DescribeUsageSummaryRequest& request, const DescribeUsageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageSummaryOutcomeCallable DescribeUsageSummaryCallable(const Model::DescribeUsageSummaryRequest& request);

                /**
                 *This API is used to query the users of a whiteboard application.
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *This API is used to query user resources.
                 * @param req DescribeUserResourcesRequest
                 * @return DescribeUserResourcesOutcome
                 */
                DescribeUserResourcesOutcome DescribeUserResources(const Model::DescribeUserResourcesRequest &request);
                void DescribeUserResourcesAsync(const Model::DescribeUserResourcesRequest& request, const DescribeUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserResourcesOutcomeCallable DescribeUserResourcesCallable(const Model::DescribeUserResourcesRequest& request);

                /**
                 *This API is used to query the Tencent Interactive Whiteboard service status of a user, including the activation status and validity period.

                 * @param req DescribeUserStatusRequest
                 * @return DescribeUserStatusOutcome
                 */
                DescribeUserStatusOutcome DescribeUserStatus(const Model::DescribeUserStatusRequest &request);
                void DescribeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserStatusOutcomeCallable DescribeUserStatusCallable(const Model::DescribeUserStatusRequest& request);

                /**
                 *This API is used to query the status and result of a recording video generation task.
                 * @param req DescribeVideoGenerationTaskRequest
                 * @return DescribeVideoGenerationTaskOutcome
                 */
                DescribeVideoGenerationTaskOutcome DescribeVideoGenerationTask(const Model::DescribeVideoGenerationTaskRequest &request);
                void DescribeVideoGenerationTaskAsync(const Model::DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskOutcomeCallable DescribeVideoGenerationTaskCallable(const Model::DescribeVideoGenerationTaskRequest& request);

                /**
                 *This API is used to query the callback URL for recording video generation.
                 * @param req DescribeVideoGenerationTaskCallbackRequest
                 * @return DescribeVideoGenerationTaskCallbackOutcome
                 */
                DescribeVideoGenerationTaskCallbackOutcome DescribeVideoGenerationTaskCallback(const Model::DescribeVideoGenerationTaskCallbackRequest &request);
                void DescribeVideoGenerationTaskCallbackAsync(const Model::DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoGenerationTaskCallbackOutcomeCallable DescribeVideoGenerationTaskCallbackCallable(const Model::DescribeVideoGenerationTaskCallbackRequest& request);

                /**
                 *This API is used to query the task-related configurations of a whiteboard application, including the bucket and callback URL.
                 * @param req DescribeWhiteboardApplicationConfigRequest
                 * @return DescribeWhiteboardApplicationConfigOutcome
                 */
                DescribeWhiteboardApplicationConfigOutcome DescribeWhiteboardApplicationConfig(const Model::DescribeWhiteboardApplicationConfigRequest &request);
                void DescribeWhiteboardApplicationConfigAsync(const Model::DescribeWhiteboardApplicationConfigRequest& request, const DescribeWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardApplicationConfigOutcomeCallable DescribeWhiteboardApplicationConfigCallable(const Model::DescribeWhiteboardApplicationConfigRequest& request);

                /**
                 *This API is used to query the bucket configurations for document transcoding and real-time recording.
                 * @param req DescribeWhiteboardBucketConfigRequest
                 * @return DescribeWhiteboardBucketConfigOutcome
                 */
                DescribeWhiteboardBucketConfigOutcome DescribeWhiteboardBucketConfig(const Model::DescribeWhiteboardBucketConfigRequest &request);
                void DescribeWhiteboardBucketConfigAsync(const Model::DescribeWhiteboardBucketConfigRequest& request, const DescribeWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardBucketConfigOutcomeCallable DescribeWhiteboardBucketConfigCallable(const Model::DescribeWhiteboardBucketConfigRequest& request);

                /**
                 *This API is used to query the status and result of a whiteboard push task.
                 * @param req DescribeWhiteboardPushRequest
                 * @return DescribeWhiteboardPushOutcome
                 */
                DescribeWhiteboardPushOutcome DescribeWhiteboardPush(const Model::DescribeWhiteboardPushRequest &request);
                void DescribeWhiteboardPushAsync(const Model::DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushOutcomeCallable DescribeWhiteboardPushCallable(const Model::DescribeWhiteboardPushRequest& request);

                /**
                 *This API is used to query the whiteboard push callback URL.
                 * @param req DescribeWhiteboardPushCallbackRequest
                 * @return DescribeWhiteboardPushCallbackOutcome
                 */
                DescribeWhiteboardPushCallbackOutcome DescribeWhiteboardPushCallback(const Model::DescribeWhiteboardPushCallbackRequest &request);
                void DescribeWhiteboardPushCallbackAsync(const Model::DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushCallbackOutcomeCallable DescribeWhiteboardPushCallbackCallable(const Model::DescribeWhiteboardPushCallbackRequest& request);

                /**
                 *This API is used to query whiteboard push tasks by room ID.
                 * @param req DescribeWhiteboardPushSearchRequest
                 * @return DescribeWhiteboardPushSearchOutcome
                 */
                DescribeWhiteboardPushSearchOutcome DescribeWhiteboardPushSearch(const Model::DescribeWhiteboardPushSearchRequest &request);
                void DescribeWhiteboardPushSearchAsync(const Model::DescribeWhiteboardPushSearchRequest& request, const DescribeWhiteboardPushSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteboardPushSearchOutcomeCallable DescribeWhiteboardPushSearchCallable(const Model::DescribeWhiteboardPushSearchRequest& request);

                /**
                 *This API is used to modify a whiteboard application.
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *This API is used to set auto-renewal for a Tencent Interactive Whiteboard monthly feature package.
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *This API is used to modify the task-related configurations of a whiteboard application, including the bucket and callback URL.
                 * @param req ModifyWhiteboardApplicationConfigRequest
                 * @return ModifyWhiteboardApplicationConfigOutcome
                 */
                ModifyWhiteboardApplicationConfigOutcome ModifyWhiteboardApplicationConfig(const Model::ModifyWhiteboardApplicationConfigRequest &request);
                void ModifyWhiteboardApplicationConfigAsync(const Model::ModifyWhiteboardApplicationConfigRequest& request, const ModifyWhiteboardApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWhiteboardApplicationConfigOutcomeCallable ModifyWhiteboardApplicationConfigCallable(const Model::ModifyWhiteboardApplicationConfigRequest& request);

                /**
                 *This API is used to modify the bucket configurations for document transcoding and real-time recording.
                 * @param req ModifyWhiteboardBucketConfigRequest
                 * @return ModifyWhiteboardBucketConfigOutcome
                 */
                ModifyWhiteboardBucketConfigOutcome ModifyWhiteboardBucketConfig(const Model::ModifyWhiteboardBucketConfigRequest &request);
                void ModifyWhiteboardBucketConfigAsync(const Model::ModifyWhiteboardBucketConfigRequest& request, const ModifyWhiteboardBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWhiteboardBucketConfigOutcomeCallable ModifyWhiteboardBucketConfigCallable(const Model::ModifyWhiteboardBucketConfigRequest& request);

                /**
                 *This API is used to pause real-time recording.
                 * @param req PauseOnlineRecordRequest
                 * @return PauseOnlineRecordOutcome
                 */
                PauseOnlineRecordOutcome PauseOnlineRecord(const Model::PauseOnlineRecordRequest &request);
                void PauseOnlineRecordAsync(const Model::PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseOnlineRecordOutcomeCallable PauseOnlineRecordCallable(const Model::PauseOnlineRecordRequest& request);

                /**
                 *This API is used to resume real-time recording.
                 * @param req ResumeOnlineRecordRequest
                 * @return ResumeOnlineRecordOutcome
                 */
                ResumeOnlineRecordOutcome ResumeOnlineRecord(const Model::ResumeOnlineRecordRequest &request);
                void ResumeOnlineRecordAsync(const Model::ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeOnlineRecordOutcomeCallable ResumeOnlineRecordCallable(const Model::ResumeOnlineRecordRequest& request);

                /**
                 *This API is used to set the real-time recording callback address. For the callback format, please [see here](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetOnlineRecordCallbackRequest
                 * @return SetOnlineRecordCallbackOutcome
                 */
                SetOnlineRecordCallbackOutcome SetOnlineRecordCallback(const Model::SetOnlineRecordCallbackRequest &request);
                void SetOnlineRecordCallbackAsync(const Model::SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackOutcomeCallable SetOnlineRecordCallbackCallable(const Model::SetOnlineRecordCallbackRequest& request);

                /**
                 *This API is used to set the callback authentication key for real-time recording. For more information, see [Event Notification](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetOnlineRecordCallbackKeyRequest
                 * @return SetOnlineRecordCallbackKeyOutcome
                 */
                SetOnlineRecordCallbackKeyOutcome SetOnlineRecordCallbackKey(const Model::SetOnlineRecordCallbackKeyRequest &request);
                void SetOnlineRecordCallbackKeyAsync(const Model::SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetOnlineRecordCallbackKeyOutcomeCallable SetOnlineRecordCallbackKeyCallable(const Model::SetOnlineRecordCallbackKeyRequest& request);

                /**
                 *This API is used to set the callback address for document transcoding. For the callback format, please [see here](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetTranscodeCallbackRequest
                 * @return SetTranscodeCallbackOutcome
                 */
                SetTranscodeCallbackOutcome SetTranscodeCallback(const Model::SetTranscodeCallbackRequest &request);
                void SetTranscodeCallbackAsync(const Model::SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackOutcomeCallable SetTranscodeCallbackCallable(const Model::SetTranscodeCallbackRequest& request);

                /**
                 *This API is used to set the callback authentication key for document transcoding. For more information, see [Event Notification](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetTranscodeCallbackKeyRequest
                 * @return SetTranscodeCallbackKeyOutcome
                 */
                SetTranscodeCallbackKeyOutcome SetTranscodeCallbackKey(const Model::SetTranscodeCallbackKeyRequest &request);
                void SetTranscodeCallbackKeyAsync(const Model::SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTranscodeCallbackKeyOutcomeCallable SetTranscodeCallbackKeyCallable(const Model::SetTranscodeCallbackKeyRequest& request);

                /**
                 *This API is used to set the callback URL for recording video generation.
                 * @param req SetVideoGenerationTaskCallbackRequest
                 * @return SetVideoGenerationTaskCallbackOutcome
                 */
                SetVideoGenerationTaskCallbackOutcome SetVideoGenerationTaskCallback(const Model::SetVideoGenerationTaskCallbackRequest &request);
                void SetVideoGenerationTaskCallbackAsync(const Model::SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackOutcomeCallable SetVideoGenerationTaskCallbackCallable(const Model::SetVideoGenerationTaskCallbackRequest& request);

                /**
                 *This API is used to set the callback authentication key for recording video generation.
                 * @param req SetVideoGenerationTaskCallbackKeyRequest
                 * @return SetVideoGenerationTaskCallbackKeyOutcome
                 */
                SetVideoGenerationTaskCallbackKeyOutcome SetVideoGenerationTaskCallbackKey(const Model::SetVideoGenerationTaskCallbackKeyRequest &request);
                void SetVideoGenerationTaskCallbackKeyAsync(const Model::SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVideoGenerationTaskCallbackKeyOutcomeCallable SetVideoGenerationTaskCallbackKeyCallable(const Model::SetVideoGenerationTaskCallbackKeyRequest& request);

                /**
                 *This API is used to set the whiteboard push callback URL. For more information, see [Event Notification](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetWhiteboardPushCallbackRequest
                 * @return SetWhiteboardPushCallbackOutcome
                 */
                SetWhiteboardPushCallbackOutcome SetWhiteboardPushCallback(const Model::SetWhiteboardPushCallbackRequest &request);
                void SetWhiteboardPushCallbackAsync(const Model::SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackOutcomeCallable SetWhiteboardPushCallbackCallable(const Model::SetWhiteboardPushCallbackRequest& request);

                /**
                 *This API is used to set the callback authentication key for whiteboard push. For more information, see [Event Notification](https://www.tencentcloud.com/document/product/1176/55569).
                 * @param req SetWhiteboardPushCallbackKeyRequest
                 * @return SetWhiteboardPushCallbackKeyOutcome
                 */
                SetWhiteboardPushCallbackKeyOutcome SetWhiteboardPushCallbackKey(const Model::SetWhiteboardPushCallbackKeyRequest &request);
                void SetWhiteboardPushCallbackKeyAsync(const Model::SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWhiteboardPushCallbackKeyOutcomeCallable SetWhiteboardPushCallbackKeyCallable(const Model::SetWhiteboardPushCallbackKeyRequest& request);

                /**
                 *This API is used to start a real-time recording task.
                 * @param req StartOnlineRecordRequest
                 * @return StartOnlineRecordOutcome
                 */
                StartOnlineRecordOutcome StartOnlineRecord(const Model::StartOnlineRecordRequest &request);
                void StartOnlineRecordAsync(const Model::StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOnlineRecordOutcomeCallable StartOnlineRecordCallable(const Model::StartOnlineRecordRequest& request);

                /**
                 *This API is used to start a whiteboard push task.
                 * @param req StartWhiteboardPushRequest
                 * @return StartWhiteboardPushOutcome
                 */
                StartWhiteboardPushOutcome StartWhiteboardPush(const Model::StartWhiteboardPushRequest &request);
                void StartWhiteboardPushAsync(const Model::StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartWhiteboardPushOutcomeCallable StartWhiteboardPushCallable(const Model::StartWhiteboardPushRequest& request);

                /**
                 *This API is used to stop real-time recording.
                 * @param req StopOnlineRecordRequest
                 * @return StopOnlineRecordOutcome
                 */
                StopOnlineRecordOutcome StopOnlineRecord(const Model::StopOnlineRecordRequest &request);
                void StopOnlineRecordAsync(const Model::StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopOnlineRecordOutcomeCallable StopOnlineRecordCallable(const Model::StopOnlineRecordRequest& request);

                /**
                 *This API is used to stop a whiteboard push task.
                 * @param req StopWhiteboardPushRequest
                 * @return StopWhiteboardPushOutcome
                 */
                StopWhiteboardPushOutcome StopWhiteboardPush(const Model::StopWhiteboardPushRequest &request);
                void StopWhiteboardPushAsync(const Model::StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWhiteboardPushOutcomeCallable StopWhiteboardPushCallable(const Model::StopWhiteboardPushRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_TIWCLIENT_H_
