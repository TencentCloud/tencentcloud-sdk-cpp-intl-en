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

#ifndef TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_
#define TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/AddDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/AddLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/BindLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/BindLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CancelCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamRequest.h>
#include <tencentcloud/live/v20180801/model/CreateCommonMixStreamResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/CreateLiveWatermarkRuleRequest.h>
#include <tencentcloud/live/v20180801/model/CreateLiveWatermarkRuleResponse.h>
#include <tencentcloud/live/v20180801/model/CreateRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/CreateRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRuleRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteLiveWatermarkRuleResponse.h>
#include <tencentcloud/live/v20180801/model/DeleteRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/DeleteRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeDeliverBandwidthListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeGroupProIspPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeHttpStatusInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCallbackTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveCertsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDelayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRefererRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainRefererResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveForbidStreamListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveForbidStreamListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePushAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLivePushAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveRecordTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveSnapshotTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamEventListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamEventListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamOnlineListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPublishedListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamPushInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveStreamStateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftBillInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftBillInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeDetailInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTemplatesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTotalInfoRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveTranscodeTotalInfoResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRulesResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarksResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeDetailInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeDetailInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribePlayErrorCodeSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeProvinceIspPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeProvinceIspPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeScreenShotSheetNumListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeTopClientIpSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeUploadStreamNumsRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeUploadStreamNumsResponse.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListRequest.h>
#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListResponse.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/EnableLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ForbidLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCallbackTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCertRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveCertResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainRefererRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveDomainRefererResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePlayDomainResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLivePushAuthKeyResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveRecordTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveSnapshotTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateRequest.h>
#include <tencentcloud/live/v20180801/model/ModifyLiveTranscodeTemplateResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeDelayLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamRequest.h>
#include <tencentcloud/live/v20180801/model/ResumeLiveStreamResponse.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordRequest.h>
#include <tencentcloud/live/v20180801/model/StopLiveRecordResponse.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskRequest.h>
#include <tencentcloud/live/v20180801/model/StopRecordTaskResponse.h>
#include <tencentcloud/live/v20180801/model/UnBindLiveDomainCertRequest.h>
#include <tencentcloud/live/v20180801/model/UnBindLiveDomainCertResponse.h>
#include <tencentcloud/live/v20180801/model/UpdateLiveWatermarkRequest.h>
#include <tencentcloud/live/v20180801/model/UpdateLiveWatermarkResponse.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            class LiveClient : public AbstractClient
            {
            public:
                LiveClient(const Credential &credential, const std::string &region);
                LiveClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDelayLiveStreamResponse> AddDelayLiveStreamOutcome;
                typedef std::future<AddDelayLiveStreamOutcome> AddDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddDelayLiveStreamRequest&, AddDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDelayLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLiveDomainResponse> AddLiveDomainOutcome;
                typedef std::future<AddLiveDomainOutcome> AddLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveDomainRequest&, AddLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLiveWatermarkResponse> AddLiveWatermarkOutcome;
                typedef std::future<AddLiveWatermarkOutcome> AddLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::AddLiveWatermarkRequest&, AddLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::BindLiveDomainCertResponse> BindLiveDomainCertOutcome;
                typedef std::future<BindLiveDomainCertOutcome> BindLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::BindLiveDomainCertRequest&, BindLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelCommonMixStreamResponse> CancelCommonMixStreamOutcome;
                typedef std::future<CancelCommonMixStreamOutcome> CancelCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CancelCommonMixStreamRequest&, CancelCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCommonMixStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCommonMixStreamResponse> CreateCommonMixStreamOutcome;
                typedef std::future<CreateCommonMixStreamOutcome> CreateCommonMixStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateCommonMixStreamRequest&, CreateCommonMixStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonMixStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCallbackRuleResponse> CreateLiveCallbackRuleOutcome;
                typedef std::future<CreateLiveCallbackRuleOutcome> CreateLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackRuleRequest&, CreateLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCallbackTemplateResponse> CreateLiveCallbackTemplateOutcome;
                typedef std::future<CreateLiveCallbackTemplateOutcome> CreateLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCallbackTemplateRequest&, CreateLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveCertResponse> CreateLiveCertOutcome;
                typedef std::future<CreateLiveCertOutcome> CreateLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveCertRequest&, CreateLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveCertAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordResponse> CreateLiveRecordOutcome;
                typedef std::future<CreateLiveRecordOutcome> CreateLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRequest&, CreateLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordRuleResponse> CreateLiveRecordRuleOutcome;
                typedef std::future<CreateLiveRecordRuleOutcome> CreateLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordRuleRequest&, CreateLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordTemplateResponse> CreateLiveRecordTemplateOutcome;
                typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveRecordTemplateRequest&, CreateLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveSnapshotRuleResponse> CreateLiveSnapshotRuleOutcome;
                typedef std::future<CreateLiveSnapshotRuleOutcome> CreateLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotRuleRequest&, CreateLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveSnapshotTemplateResponse> CreateLiveSnapshotTemplateOutcome;
                typedef std::future<CreateLiveSnapshotTemplateOutcome> CreateLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveSnapshotTemplateRequest&, CreateLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTranscodeRuleResponse> CreateLiveTranscodeRuleOutcome;
                typedef std::future<CreateLiveTranscodeRuleOutcome> CreateLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeRuleRequest&, CreateLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveTranscodeTemplateResponse> CreateLiveTranscodeTemplateOutcome;
                typedef std::future<CreateLiveTranscodeTemplateOutcome> CreateLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveTranscodeTemplateRequest&, CreateLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveWatermarkRuleResponse> CreateLiveWatermarkRuleOutcome;
                typedef std::future<CreateLiveWatermarkRuleOutcome> CreateLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateLiveWatermarkRuleRequest&, CreateLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordTaskResponse> CreateRecordTaskOutcome;
                typedef std::future<CreateRecordTaskOutcome> CreateRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::CreateRecordTaskRequest&, CreateRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveCallbackRuleResponse> DeleteLiveCallbackRuleOutcome;
                typedef std::future<DeleteLiveCallbackRuleOutcome> DeleteLiveCallbackRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackRuleRequest&, DeleteLiveCallbackRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveCallbackTemplateResponse> DeleteLiveCallbackTemplateOutcome;
                typedef std::future<DeleteLiveCallbackTemplateOutcome> DeleteLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCallbackTemplateRequest&, DeleteLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveCertResponse> DeleteLiveCertOutcome;
                typedef std::future<DeleteLiveCertOutcome> DeleteLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveCertRequest&, DeleteLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveDomainResponse> DeleteLiveDomainOutcome;
                typedef std::future<DeleteLiveDomainOutcome> DeleteLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveDomainRequest&, DeleteLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordResponse> DeleteLiveRecordOutcome;
                typedef std::future<DeleteLiveRecordOutcome> DeleteLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRequest&, DeleteLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordRuleResponse> DeleteLiveRecordRuleOutcome;
                typedef std::future<DeleteLiveRecordRuleOutcome> DeleteLiveRecordRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordRuleRequest&, DeleteLiveRecordRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordTemplateResponse> DeleteLiveRecordTemplateOutcome;
                typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveRecordTemplateRequest&, DeleteLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveSnapshotRuleResponse> DeleteLiveSnapshotRuleOutcome;
                typedef std::future<DeleteLiveSnapshotRuleOutcome> DeleteLiveSnapshotRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotRuleRequest&, DeleteLiveSnapshotRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveSnapshotTemplateResponse> DeleteLiveSnapshotTemplateOutcome;
                typedef std::future<DeleteLiveSnapshotTemplateOutcome> DeleteLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveSnapshotTemplateRequest&, DeleteLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTranscodeRuleResponse> DeleteLiveTranscodeRuleOutcome;
                typedef std::future<DeleteLiveTranscodeRuleOutcome> DeleteLiveTranscodeRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeRuleRequest&, DeleteLiveTranscodeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveTranscodeTemplateResponse> DeleteLiveTranscodeTemplateOutcome;
                typedef std::future<DeleteLiveTranscodeTemplateOutcome> DeleteLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveTranscodeTemplateRequest&, DeleteLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveWatermarkResponse> DeleteLiveWatermarkOutcome;
                typedef std::future<DeleteLiveWatermarkOutcome> DeleteLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRequest&, DeleteLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveWatermarkRuleResponse> DeleteLiveWatermarkRuleOutcome;
                typedef std::future<DeleteLiveWatermarkRuleOutcome> DeleteLiveWatermarkRuleOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteLiveWatermarkRuleRequest&, DeleteLiveWatermarkRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveWatermarkRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordTaskResponse> DeleteRecordTaskOutcome;
                typedef std::future<DeleteRecordTaskOutcome> DeleteRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DeleteRecordTaskRequest&, DeleteRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConcurrentRecordStreamNumResponse> DescribeConcurrentRecordStreamNumOutcome;
                typedef std::future<DescribeConcurrentRecordStreamNumOutcome> DescribeConcurrentRecordStreamNumOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeConcurrentRecordStreamNumRequest&, DescribeConcurrentRecordStreamNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcurrentRecordStreamNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeliverBandwidthListResponse> DescribeDeliverBandwidthListOutcome;
                typedef std::future<DescribeDeliverBandwidthListOutcome> DescribeDeliverBandwidthListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeDeliverBandwidthListRequest&, DescribeDeliverBandwidthListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliverBandwidthListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupProIspPlayInfoListResponse> DescribeGroupProIspPlayInfoListOutcome;
                typedef std::future<DescribeGroupProIspPlayInfoListOutcome> DescribeGroupProIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeGroupProIspPlayInfoListRequest&, DescribeGroupProIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupProIspPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHttpStatusInfoListResponse> DescribeHttpStatusInfoListOutcome;
                typedef std::future<DescribeHttpStatusInfoListOutcome> DescribeHttpStatusInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeHttpStatusInfoListRequest&, DescribeHttpStatusInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHttpStatusInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackRulesResponse> DescribeLiveCallbackRulesOutcome;
                typedef std::future<DescribeLiveCallbackRulesOutcome> DescribeLiveCallbackRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackRulesRequest&, DescribeLiveCallbackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackTemplateResponse> DescribeLiveCallbackTemplateOutcome;
                typedef std::future<DescribeLiveCallbackTemplateOutcome> DescribeLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplateRequest&, DescribeLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCallbackTemplatesResponse> DescribeLiveCallbackTemplatesOutcome;
                typedef std::future<DescribeLiveCallbackTemplatesOutcome> DescribeLiveCallbackTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCallbackTemplatesRequest&, DescribeLiveCallbackTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCallbackTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCertResponse> DescribeLiveCertOutcome;
                typedef std::future<DescribeLiveCertOutcome> DescribeLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertRequest&, DescribeLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveCertsResponse> DescribeLiveCertsOutcome;
                typedef std::future<DescribeLiveCertsOutcome> DescribeLiveCertsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveCertsRequest&, DescribeLiveCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveCertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDelayInfoListResponse> DescribeLiveDelayInfoListOutcome;
                typedef std::future<DescribeLiveDelayInfoListOutcome> DescribeLiveDelayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDelayInfoListRequest&, DescribeLiveDelayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDelayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainResponse> DescribeLiveDomainOutcome;
                typedef std::future<DescribeLiveDomainOutcome> DescribeLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRequest&, DescribeLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainCertResponse> DescribeLiveDomainCertOutcome;
                typedef std::future<DescribeLiveDomainCertOutcome> DescribeLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainCertRequest&, DescribeLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainRefererResponse> DescribeLiveDomainRefererOutcome;
                typedef std::future<DescribeLiveDomainRefererOutcome> DescribeLiveDomainRefererOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainRefererRequest&, DescribeLiveDomainRefererOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainRefererAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveDomainsResponse> DescribeLiveDomainsOutcome;
                typedef std::future<DescribeLiveDomainsOutcome> DescribeLiveDomainsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveDomainsRequest&, DescribeLiveDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveForbidStreamListResponse> DescribeLiveForbidStreamListOutcome;
                typedef std::future<DescribeLiveForbidStreamListOutcome> DescribeLiveForbidStreamListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveForbidStreamListRequest&, DescribeLiveForbidStreamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveForbidStreamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePlayAuthKeyResponse> DescribeLivePlayAuthKeyOutcome;
                typedef std::future<DescribeLivePlayAuthKeyOutcome> DescribeLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePlayAuthKeyRequest&, DescribeLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLivePushAuthKeyResponse> DescribeLivePushAuthKeyOutcome;
                typedef std::future<DescribeLivePushAuthKeyOutcome> DescribeLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLivePushAuthKeyRequest&, DescribeLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLivePushAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordRulesResponse> DescribeLiveRecordRulesOutcome;
                typedef std::future<DescribeLiveRecordRulesOutcome> DescribeLiveRecordRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordRulesRequest&, DescribeLiveRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplateResponse> DescribeLiveRecordTemplateOutcome;
                typedef std::future<DescribeLiveRecordTemplateOutcome> DescribeLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplateRequest&, DescribeLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplatesResponse> DescribeLiveRecordTemplatesOutcome;
                typedef std::future<DescribeLiveRecordTemplatesOutcome> DescribeLiveRecordTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveRecordTemplatesRequest&, DescribeLiveRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotRulesResponse> DescribeLiveSnapshotRulesOutcome;
                typedef std::future<DescribeLiveSnapshotRulesOutcome> DescribeLiveSnapshotRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotRulesRequest&, DescribeLiveSnapshotRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotTemplateResponse> DescribeLiveSnapshotTemplateOutcome;
                typedef std::future<DescribeLiveSnapshotTemplateOutcome> DescribeLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplateRequest&, DescribeLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveSnapshotTemplatesResponse> DescribeLiveSnapshotTemplatesOutcome;
                typedef std::future<DescribeLiveSnapshotTemplatesOutcome> DescribeLiveSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveSnapshotTemplatesRequest&, DescribeLiveSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamEventListResponse> DescribeLiveStreamEventListOutcome;
                typedef std::future<DescribeLiveStreamEventListOutcome> DescribeLiveStreamEventListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamEventListRequest&, DescribeLiveStreamEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamOnlineListResponse> DescribeLiveStreamOnlineListOutcome;
                typedef std::future<DescribeLiveStreamOnlineListOutcome> DescribeLiveStreamOnlineListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamOnlineListRequest&, DescribeLiveStreamOnlineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamOnlineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamPublishedListResponse> DescribeLiveStreamPublishedListOutcome;
                typedef std::future<DescribeLiveStreamPublishedListOutcome> DescribeLiveStreamPublishedListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPublishedListRequest&, DescribeLiveStreamPublishedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPublishedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamPushInfoListResponse> DescribeLiveStreamPushInfoListOutcome;
                typedef std::future<DescribeLiveStreamPushInfoListOutcome> DescribeLiveStreamPushInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamPushInfoListRequest&, DescribeLiveStreamPushInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamPushInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveStreamStateResponse> DescribeLiveStreamStateOutcome;
                typedef std::future<DescribeLiveStreamStateOutcome> DescribeLiveStreamStateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveStreamStateRequest&, DescribeLiveStreamStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveStreamStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTimeShiftBillInfoListResponse> DescribeLiveTimeShiftBillInfoListOutcome;
                typedef std::future<DescribeLiveTimeShiftBillInfoListOutcome> DescribeLiveTimeShiftBillInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTimeShiftBillInfoListRequest&, DescribeLiveTimeShiftBillInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTimeShiftBillInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeDetailInfoResponse> DescribeLiveTranscodeDetailInfoOutcome;
                typedef std::future<DescribeLiveTranscodeDetailInfoOutcome> DescribeLiveTranscodeDetailInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeDetailInfoRequest&, DescribeLiveTranscodeDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeRulesResponse> DescribeLiveTranscodeRulesOutcome;
                typedef std::future<DescribeLiveTranscodeRulesOutcome> DescribeLiveTranscodeRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeRulesRequest&, DescribeLiveTranscodeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTemplateResponse> DescribeLiveTranscodeTemplateOutcome;
                typedef std::future<DescribeLiveTranscodeTemplateOutcome> DescribeLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplateRequest&, DescribeLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTemplatesResponse> DescribeLiveTranscodeTemplatesOutcome;
                typedef std::future<DescribeLiveTranscodeTemplatesOutcome> DescribeLiveTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTemplatesRequest&, DescribeLiveTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveTranscodeTotalInfoResponse> DescribeLiveTranscodeTotalInfoOutcome;
                typedef std::future<DescribeLiveTranscodeTotalInfoOutcome> DescribeLiveTranscodeTotalInfoOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveTranscodeTotalInfoRequest&, DescribeLiveTranscodeTotalInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveTranscodeTotalInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarkResponse> DescribeLiveWatermarkOutcome;
                typedef std::future<DescribeLiveWatermarkOutcome> DescribeLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRequest&, DescribeLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarkRulesResponse> DescribeLiveWatermarkRulesOutcome;
                typedef std::future<DescribeLiveWatermarkRulesOutcome> DescribeLiveWatermarkRulesOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarkRulesRequest&, DescribeLiveWatermarkRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarkRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveWatermarksResponse> DescribeLiveWatermarksOutcome;
                typedef std::future<DescribeLiveWatermarksOutcome> DescribeLiveWatermarksOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeLiveWatermarksRequest&, DescribeLiveWatermarksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveWatermarksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayErrorCodeDetailInfoListResponse> DescribePlayErrorCodeDetailInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeDetailInfoListOutcome> DescribePlayErrorCodeDetailInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeDetailInfoListRequest&, DescribePlayErrorCodeDetailInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeDetailInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayErrorCodeSumInfoListResponse> DescribePlayErrorCodeSumInfoListOutcome;
                typedef std::future<DescribePlayErrorCodeSumInfoListOutcome> DescribePlayErrorCodeSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribePlayErrorCodeSumInfoListRequest&, DescribePlayErrorCodeSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayErrorCodeSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProvinceIspPlayInfoListResponse> DescribeProvinceIspPlayInfoListOutcome;
                typedef std::future<DescribeProvinceIspPlayInfoListOutcome> DescribeProvinceIspPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeProvinceIspPlayInfoListRequest&, DescribeProvinceIspPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProvinceIspPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenShotSheetNumListResponse> DescribeScreenShotSheetNumListOutcome;
                typedef std::future<DescribeScreenShotSheetNumListOutcome> DescribeScreenShotSheetNumListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeScreenShotSheetNumListRequest&, DescribeScreenShotSheetNumListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenShotSheetNumListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamDayPlayInfoListResponse> DescribeStreamDayPlayInfoListOutcome;
                typedef std::future<DescribeStreamDayPlayInfoListOutcome> DescribeStreamDayPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamDayPlayInfoListRequest&, DescribeStreamDayPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamDayPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPlayInfoListResponse> DescribeStreamPlayInfoListOutcome;
                typedef std::future<DescribeStreamPlayInfoListOutcome> DescribeStreamPlayInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeStreamPlayInfoListRequest&, DescribeStreamPlayInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPlayInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopClientIpSumInfoListResponse> DescribeTopClientIpSumInfoListOutcome;
                typedef std::future<DescribeTopClientIpSumInfoListOutcome> DescribeTopClientIpSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeTopClientIpSumInfoListRequest&, DescribeTopClientIpSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopClientIpSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadStreamNumsResponse> DescribeUploadStreamNumsOutcome;
                typedef std::future<DescribeUploadStreamNumsOutcome> DescribeUploadStreamNumsOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeUploadStreamNumsRequest&, DescribeUploadStreamNumsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadStreamNumsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVisitTopSumInfoListResponse> DescribeVisitTopSumInfoListOutcome;
                typedef std::future<DescribeVisitTopSumInfoListOutcome> DescribeVisitTopSumInfoListOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::DescribeVisitTopSumInfoListRequest&, DescribeVisitTopSumInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVisitTopSumInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableLiveDomainResponse> EnableLiveDomainOutcome;
                typedef std::future<EnableLiveDomainOutcome> EnableLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::EnableLiveDomainRequest&, EnableLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidLiveDomainResponse> ForbidLiveDomainOutcome;
                typedef std::future<ForbidLiveDomainOutcome> ForbidLiveDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveDomainRequest&, ForbidLiveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidLiveStreamResponse> ForbidLiveStreamOutcome;
                typedef std::future<ForbidLiveStreamOutcome> ForbidLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ForbidLiveStreamRequest&, ForbidLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveCallbackTemplateResponse> ModifyLiveCallbackTemplateOutcome;
                typedef std::future<ModifyLiveCallbackTemplateOutcome> ModifyLiveCallbackTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveCallbackTemplateRequest&, ModifyLiveCallbackTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveCallbackTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveCertResponse> ModifyLiveCertOutcome;
                typedef std::future<ModifyLiveCertOutcome> ModifyLiveCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveCertRequest&, ModifyLiveCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveCertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveDomainCertResponse> ModifyLiveDomainCertOutcome;
                typedef std::future<ModifyLiveDomainCertOutcome> ModifyLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainCertRequest&, ModifyLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveDomainRefererResponse> ModifyLiveDomainRefererOutcome;
                typedef std::future<ModifyLiveDomainRefererOutcome> ModifyLiveDomainRefererOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveDomainRefererRequest&, ModifyLiveDomainRefererOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveDomainRefererAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePlayAuthKeyResponse> ModifyLivePlayAuthKeyOutcome;
                typedef std::future<ModifyLivePlayAuthKeyOutcome> ModifyLivePlayAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayAuthKeyRequest&, ModifyLivePlayAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePlayDomainResponse> ModifyLivePlayDomainOutcome;
                typedef std::future<ModifyLivePlayDomainOutcome> ModifyLivePlayDomainOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePlayDomainRequest&, ModifyLivePlayDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePlayDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLivePushAuthKeyResponse> ModifyLivePushAuthKeyOutcome;
                typedef std::future<ModifyLivePushAuthKeyOutcome> ModifyLivePushAuthKeyOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLivePushAuthKeyRequest&, ModifyLivePushAuthKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLivePushAuthKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveRecordTemplateResponse> ModifyLiveRecordTemplateOutcome;
                typedef std::future<ModifyLiveRecordTemplateOutcome> ModifyLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveRecordTemplateRequest&, ModifyLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveSnapshotTemplateResponse> ModifyLiveSnapshotTemplateOutcome;
                typedef std::future<ModifyLiveSnapshotTemplateOutcome> ModifyLiveSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveSnapshotTemplateRequest&, ModifyLiveSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveTranscodeTemplateResponse> ModifyLiveTranscodeTemplateOutcome;
                typedef std::future<ModifyLiveTranscodeTemplateOutcome> ModifyLiveTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ModifyLiveTranscodeTemplateRequest&, ModifyLiveTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeDelayLiveStreamResponse> ResumeDelayLiveStreamOutcome;
                typedef std::future<ResumeDelayLiveStreamOutcome> ResumeDelayLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeDelayLiveStreamRequest&, ResumeDelayLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDelayLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeLiveStreamResponse> ResumeLiveStreamOutcome;
                typedef std::future<ResumeLiveStreamOutcome> ResumeLiveStreamOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::ResumeLiveStreamRequest&, ResumeLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopLiveRecordResponse> StopLiveRecordOutcome;
                typedef std::future<StopLiveRecordOutcome> StopLiveRecordOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopLiveRecordRequest&, StopLiveRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopLiveRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRecordTaskResponse> StopRecordTaskOutcome;
                typedef std::future<StopRecordTaskOutcome> StopRecordTaskOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::StopRecordTaskRequest&, StopRecordTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindLiveDomainCertResponse> UnBindLiveDomainCertOutcome;
                typedef std::future<UnBindLiveDomainCertOutcome> UnBindLiveDomainCertOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UnBindLiveDomainCertRequest&, UnBindLiveDomainCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindLiveDomainCertAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateLiveWatermarkResponse> UpdateLiveWatermarkOutcome;
                typedef std::future<UpdateLiveWatermarkOutcome> UpdateLiveWatermarkOutcomeCallable;
                typedef std::function<void(const LiveClient*, const Model::UpdateLiveWatermarkRequest&, UpdateLiveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveWatermarkAsyncHandler;



                /**
                 *This API is used to set a delay in playing the images of large live streaming events, in case of emergencies.

Note: if you are to set the delay before stream push, set it at least 5 minutes before the push. This API supports configuration only by stream.
                 * @param req AddDelayLiveStreamRequest
                 * @return AddDelayLiveStreamOutcome
                 */
                AddDelayLiveStreamOutcome AddDelayLiveStream(const Model::AddDelayLiveStreamRequest &request);
                void AddDelayLiveStreamAsync(const Model::AddDelayLiveStreamRequest& request, const AddDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDelayLiveStreamOutcomeCallable AddDelayLiveStreamCallable(const Model::AddDelayLiveStreamRequest& request);

                /**
                 *This API is used to add a domain name. Only one domain name can be submitted at a time, and it must have an ICP filing.
                 * @param req AddLiveDomainRequest
                 * @return AddLiveDomainOutcome
                 */
                AddLiveDomainOutcome AddLiveDomain(const Model::AddLiveDomainRequest &request);
                void AddLiveDomainAsync(const Model::AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLiveDomainOutcomeCallable AddLiveDomainCallable(const Model::AddLiveDomainRequest& request);

                /**
                 *After a watermark is added and a watermark ID is successfully returned, you need to call the [CreateLiveWatermarkRule](https://intl.cloud.tencent.com/document/product/267/32629?from_cn_redirect=1) API to bind the watermark ID to a stream.
After the number of watermarks exceeds the upper limit of 100, to add a new watermark, you must delete an old one first.
                 * @param req AddLiveWatermarkRequest
                 * @return AddLiveWatermarkOutcome
                 */
                AddLiveWatermarkOutcome AddLiveWatermark(const Model::AddLiveWatermarkRequest &request);
                void AddLiveWatermarkAsync(const Model::AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLiveWatermarkOutcomeCallable AddLiveWatermarkCallable(const Model::AddLiveWatermarkRequest& request);

                /**
                 *This API is used to bind a domain name certificate.
Note: you need to call the `CreateLiveCert` API first to add a certificate. After getting the certificate ID, call this API for binding.
                 * @param req BindLiveDomainCertRequest
                 * @return BindLiveDomainCertOutcome
                 */
                BindLiveDomainCertOutcome BindLiveDomainCert(const Model::BindLiveDomainCertRequest &request);
                void BindLiveDomainCertAsync(const Model::BindLiveDomainCertRequest& request, const BindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindLiveDomainCertOutcomeCallable BindLiveDomainCertCallable(const Model::BindLiveDomainCertRequest& request);

                /**
                 *This API is used to cancel a stream mix. It can be used basically in the same way as `mix_streamv2.cancel_mix_stream`.
                 * @param req CancelCommonMixStreamRequest
                 * @return CancelCommonMixStreamOutcome
                 */
                CancelCommonMixStreamOutcome CancelCommonMixStream(const Model::CancelCommonMixStreamRequest &request);
                void CancelCommonMixStreamAsync(const Model::CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCommonMixStreamOutcomeCallable CancelCommonMixStreamCallable(const Model::CancelCommonMixStreamRequest& request);

                /**
                 *This API is used to create a general stream mix. It can be used basically in the same way as the legacy `mix_streamv2.start_mix_stream_advanced` API.
Note: currently, up to 16 streams can be mixed.
Best practice: https://intl.cloud.tencent.com/document/product/267/45566?from_cn_redirect=1
                 * @param req CreateCommonMixStreamRequest
                 * @return CreateCommonMixStreamOutcome
                 */
                CreateCommonMixStreamOutcome CreateCommonMixStream(const Model::CreateCommonMixStreamRequest &request);
                void CreateCommonMixStreamAsync(const Model::CreateCommonMixStreamRequest& request, const CreateCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommonMixStreamOutcomeCallable CreateCommonMixStreamCallable(const Model::CreateCommonMixStreamRequest& request);

                /**
                 *To create a callback rule, you need to first call the [CreateLiveCallbackTemplate](https://intl.cloud.tencent.com/document/product/267/32637?from_cn_redirect=1) API to create a callback template and bind the returned template ID to the domain name/path.
<br>Callback protocol-related document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                 * @param req CreateLiveCallbackRuleRequest
                 * @return CreateLiveCallbackRuleOutcome
                 */
                CreateLiveCallbackRuleOutcome CreateLiveCallbackRule(const Model::CreateLiveCallbackRuleRequest &request);
                void CreateLiveCallbackRuleAsync(const Model::CreateLiveCallbackRuleRequest& request, const CreateLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCallbackRuleOutcomeCallable CreateLiveCallbackRuleCallable(const Model::CreateLiveCallbackRuleRequest& request);

                /**
                 *After a callback template is created and a template ID is successfully returned, you need to call the [CreateLiveCallbackRule](https://intl.cloud.tencent.com/document/product/267/32638?from_cn_redirect=1) API and bind the template ID to the domain name/path.
<br>Callback protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
Note: at least enter one callback URL.
                 * @param req CreateLiveCallbackTemplateRequest
                 * @return CreateLiveCallbackTemplateOutcome
                 */
                CreateLiveCallbackTemplateOutcome CreateLiveCallbackTemplate(const Model::CreateLiveCallbackTemplateRequest &request);
                void CreateLiveCallbackTemplateAsync(const Model::CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCallbackTemplateOutcomeCallable CreateLiveCallbackTemplateCallable(const Model::CreateLiveCallbackTemplateRequest& request);

                /**
                 *This API is used to add a certificate.
                 * @param req CreateLiveCertRequest
                 * @return CreateLiveCertOutcome
                 */
                CreateLiveCertOutcome CreateLiveCert(const Model::CreateLiveCertRequest &request);
                void CreateLiveCertAsync(const Model::CreateLiveCertRequest& request, const CreateLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveCertOutcomeCallable CreateLiveCertCallable(const Model::CreateLiveCertRequest& request);

                /**
                 *- Prerequisites
  1. Recording files are stored on the VOD platform, so if you need to use the recording feature, you must first activate the VOD service.
  2. After the recording files are stored, applicable fees (including storage fees and downstream playback traffic fees) will be charged according to the VOD billing mode. For more information, please see the [corresponding document](https://intl.cloud.tencent.com/document/product/266/2838?from_cn_redirect=1).

- Mode description
  This API supports two recording modes:
  1. Scheduled recording mode **(default mode)**.
    The start time and end time need to be passed in, according to which the recording task will start and end automatically. Before the set end time expires (provided that `StopLiveRecord` is not called to terminate the task prematurely), the recording task is valid and will be started even after the push is interrupted and restarted multiple times.
  2. Real-time video recording mode.
    The start time passed in will be ignored, and recording will be started immediately after the recording task is created. The recording duration can be up to 30 minutes. If the end time passed in is more than 30 minutes after the current time, it will be counted as 30 minutes. Real-time video recording is mainly used for recording highlight scenes, and you are recommended to keep the duration within 5 minutes.

- Precautions
  1. The API call timeout period should be set to more than 3 seconds; otherwise, retries and calls by different start/end time values may result in repeated recording tasks and thus incur additional recording fees.
  2. Subject to the audio and video file formats (FLV/MP4/HLS), the video codec of H.264 and audio codec of AAC are supported.
  3. In order to avoid malicious or unintended frequent API requests, the maximum number of tasks that can be created in scheduled recording mode is limited: up to 4,000 tasks can be created per day (excluding deleted ones), and up to 400 ones can run concurrently. If you need a higher upper limit, please submit a ticket for application.
  4. This calling method does not support recording streams outside Mainland China for the time being.
                 * @param req CreateLiveRecordRequest
                 * @return CreateLiveRecordOutcome
                 */
                CreateLiveRecordOutcome CreateLiveRecord(const Model::CreateLiveRecordRequest &request);
                void CreateLiveRecordAsync(const Model::CreateLiveRecordRequest& request, const CreateLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordOutcomeCallable CreateLiveRecordCallable(const Model::CreateLiveRecordRequest& request);

                /**
                 *To create a recording rule, you need to first call the [CreateLiveRecordTemplate](https://intl.cloud.tencent.com/document/product/267/32614?from_cn_redirect=1) API to create a recording template and bind the returned template ID to the stream.
<br>Recording-related document: [LVB Recording](https://intl.cloud.tencent.com/document/product/267/32739?from_cn_redirect=1).
                 * @param req CreateLiveRecordRuleRequest
                 * @return CreateLiveRecordRuleOutcome
                 */
                CreateLiveRecordRuleOutcome CreateLiveRecordRule(const Model::CreateLiveRecordRuleRequest &request);
                void CreateLiveRecordRuleAsync(const Model::CreateLiveRecordRuleRequest& request, const CreateLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordRuleOutcomeCallable CreateLiveRecordRuleCallable(const Model::CreateLiveRecordRuleRequest& request);

                /**
                 *This API is used to create a recording template. You can create up to 50 templates. To use a template, you need to call the [CreateLiveRecordRule](https://intl.cloud.tencent.com/document/product/267/32615?from_cn_redirect=1) API to bind the template ID returned by this API to a stream.
<br>More on recording: [Live Recording](https://intl.cloud.tencent.com/document/product/267/32739?from_cn_redirect=1)
                 * @param req CreateLiveRecordTemplateRequest
                 * @return CreateLiveRecordTemplateOutcome
                 */
                CreateLiveRecordTemplateOutcome CreateLiveRecordTemplate(const Model::CreateLiveRecordTemplateRequest &request);
                void CreateLiveRecordTemplateAsync(const Model::CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordTemplateOutcomeCallable CreateLiveRecordTemplateCallable(const Model::CreateLiveRecordTemplateRequest& request);

                /**
                 *This API is used to create a screencapturing rule. You need to first call the [CreateLiveSnapshotTemplate](https://intl.cloud.tencent.com/document/product/267/32624?from_cn_redirect=1) API to create a screencapturing template to bind the returned template ID to the stream.
<br>Screencapturing document: [LVB Screencapturing](https://intl.cloud.tencent.com/document/product/267/32737?from_cn_redirect=1).
Note: only one screencapturing template can be associated with one domain name.
                 * @param req CreateLiveSnapshotRuleRequest
                 * @return CreateLiveSnapshotRuleOutcome
                 */
                CreateLiveSnapshotRuleOutcome CreateLiveSnapshotRule(const Model::CreateLiveSnapshotRuleRequest &request);
                void CreateLiveSnapshotRuleAsync(const Model::CreateLiveSnapshotRuleRequest& request, const CreateLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveSnapshotRuleOutcomeCallable CreateLiveSnapshotRuleCallable(const Model::CreateLiveSnapshotRuleRequest& request);

                /**
                 *After a screencapturing template is created and a template ID is successfully returned, you need to call the [CreateLiveSnapshotRule](https://intl.cloud.tencent.com/document/product/267/32625?from_cn_redirect=1) API and bind the template ID to the stream.
<br>Screencapturing-related document: [LVB Screencapturing](https://intl.cloud.tencent.com/document/product/267/32737?from_cn_redirect=1).
                 * @param req CreateLiveSnapshotTemplateRequest
                 * @return CreateLiveSnapshotTemplateOutcome
                 */
                CreateLiveSnapshotTemplateOutcome CreateLiveSnapshotTemplate(const Model::CreateLiveSnapshotTemplateRequest &request);
                void CreateLiveSnapshotTemplateAsync(const Model::CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveSnapshotTemplateOutcomeCallable CreateLiveSnapshotTemplateCallable(const Model::CreateLiveSnapshotTemplateRequest& request);

                /**
                 *To create a transcoding rule, you need to first call the [CreateLiveTranscodeTemplate](https://intl.cloud.tencent.com/document/product/267/32646?from_cn_redirect=1) API to create a transcoding template and bind the returned template ID to the stream.
<br>Transcoding-related document: [LVB Remuxing and Transcoding](https://intl.cloud.tencent.com/document/product/267/32736?from_cn_redirect=1).
                 * @param req CreateLiveTranscodeRuleRequest
                 * @return CreateLiveTranscodeRuleOutcome
                 */
                CreateLiveTranscodeRuleOutcome CreateLiveTranscodeRule(const Model::CreateLiveTranscodeRuleRequest &request);
                void CreateLiveTranscodeRuleAsync(const Model::CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTranscodeRuleOutcomeCallable CreateLiveTranscodeRuleCallable(const Model::CreateLiveTranscodeRuleRequest& request);

                /**
                 *This API is used to create a transcoding template. Up to 50 transcoding templates can be created in total. To use a template, you need to call [CreateLiveTranscodeRule](https://intl.cloud.tencent.com/document/product/267/32647?from_cn_redirect=1) to bind the template ID returned by this API to a stream.
<br>For more information about transcoding, see [Live Remuxing and Transcoding](https://intl.cloud.tencent.com/document/product/267/32736?from_cn_redirect=1).
                 * @param req CreateLiveTranscodeTemplateRequest
                 * @return CreateLiveTranscodeTemplateOutcome
                 */
                CreateLiveTranscodeTemplateOutcome CreateLiveTranscodeTemplate(const Model::CreateLiveTranscodeTemplateRequest &request);
                void CreateLiveTranscodeTemplateAsync(const Model::CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveTranscodeTemplateOutcomeCallable CreateLiveTranscodeTemplateCallable(const Model::CreateLiveTranscodeTemplateRequest& request);

                /**
                 *To create a watermarking rule, you need to first call the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API to add a watermark and bind the returned watermark ID to the stream.
                 * @param req CreateLiveWatermarkRuleRequest
                 * @return CreateLiveWatermarkRuleOutcome
                 */
                CreateLiveWatermarkRuleOutcome CreateLiveWatermarkRule(const Model::CreateLiveWatermarkRuleRequest &request);
                void CreateLiveWatermarkRuleAsync(const Model::CreateLiveWatermarkRuleRequest& request, const CreateLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveWatermarkRuleOutcomeCallable CreateLiveWatermarkRuleCallable(const Model::CreateLiveWatermarkRuleRequest& request);

                /**
                 *This API is used to create a recording task that starts and ends at specific times and records videos according to a specific recording template.
- Prerequisites
1. Because recording files are saved in VOD, you must first activate VOD.
2. Storage and playback traffic fees are charged for storing and playing the videos recorded. For details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/266/2837).
- Notes
1. If streaming is interrupted, the current recording will stop and a recording file will be generated. When streaming resumes, as long as it’s before the end time of the task, recording will start again.
2. Avoid creating recording tasks with overlapping time periods. If there are multiple tasks with overlapping time periods for the same stream, the system will start three recording tasks at most to avoid repeated recording.
3. Task records are kept for three months by the platform.
4. Do not use the new [CreateRecordTask](https://intl.cloud.tencent.com/document/product/267/45983?from_cn_redirect=1), [StopRecordTask](https://intl.cloud.tencent.com/document/product/267/45981?from_cn_redirect=1), and [DeleteRecordTask] APIs together with the old `CreateLiveRecord`, `StopLiveRecord`, and `DeleteLiveRecord` APIs.
5. Do not create recording tasks and push streams at the same time. After creating a recording task, we recommend you wait at least three seconds before pushing streams.
                 * @param req CreateRecordTaskRequest
                 * @return CreateRecordTaskOutcome
                 */
                CreateRecordTaskOutcome CreateRecordTask(const Model::CreateRecordTaskRequest &request);
                void CreateRecordTaskAsync(const Model::CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordTaskOutcomeCallable CreateRecordTaskCallable(const Model::CreateRecordTaskRequest& request);

                /**
                 *This API is used to delete a callback rule.
                 * @param req DeleteLiveCallbackRuleRequest
                 * @return DeleteLiveCallbackRuleOutcome
                 */
                DeleteLiveCallbackRuleOutcome DeleteLiveCallbackRule(const Model::DeleteLiveCallbackRuleRequest &request);
                void DeleteLiveCallbackRuleAsync(const Model::DeleteLiveCallbackRuleRequest& request, const DeleteLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCallbackRuleOutcomeCallable DeleteLiveCallbackRuleCallable(const Model::DeleteLiveCallbackRuleRequest& request);

                /**
                 *This API deletes a callback template.
                 * @param req DeleteLiveCallbackTemplateRequest
                 * @return DeleteLiveCallbackTemplateOutcome
                 */
                DeleteLiveCallbackTemplateOutcome DeleteLiveCallbackTemplate(const Model::DeleteLiveCallbackTemplateRequest &request);
                void DeleteLiveCallbackTemplateAsync(const Model::DeleteLiveCallbackTemplateRequest& request, const DeleteLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCallbackTemplateOutcomeCallable DeleteLiveCallbackTemplateCallable(const Model::DeleteLiveCallbackTemplateRequest& request);

                /**
                 *This API is used to delete a certificate corresponding to the domain name.
                 * @param req DeleteLiveCertRequest
                 * @return DeleteLiveCertOutcome
                 */
                DeleteLiveCertOutcome DeleteLiveCert(const Model::DeleteLiveCertRequest &request);
                void DeleteLiveCertAsync(const Model::DeleteLiveCertRequest& request, const DeleteLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveCertOutcomeCallable DeleteLiveCertCallable(const Model::DeleteLiveCertRequest& request);

                /**
                 *This API is used to delete an added LVB domain name.
                 * @param req DeleteLiveDomainRequest
                 * @return DeleteLiveDomainOutcome
                 */
                DeleteLiveDomainOutcome DeleteLiveDomain(const Model::DeleteLiveDomainRequest &request);
                void DeleteLiveDomainAsync(const Model::DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveDomainOutcomeCallable DeleteLiveDomainCallable(const Model::DeleteLiveDomainRequest& request);

                /**
                 *Note: The `DeleteLiveRecord` API is only used to delete the record of recording tasks but not stop recording or deleting an ongoing recording task. If you need to stop a recording task, please use the [StopLiveRecord](https://intl.cloud.tencent.com/document/product/267/30146?from_cn_redirect=1) API.
                 * @param req DeleteLiveRecordRequest
                 * @return DeleteLiveRecordOutcome
                 */
                DeleteLiveRecordOutcome DeleteLiveRecord(const Model::DeleteLiveRecordRequest &request);
                void DeleteLiveRecordAsync(const Model::DeleteLiveRecordRequest& request, const DeleteLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordOutcomeCallable DeleteLiveRecordCallable(const Model::DeleteLiveRecordRequest& request);

                /**
                 *This API is used to delete a recording rule.
                 * @param req DeleteLiveRecordRuleRequest
                 * @return DeleteLiveRecordRuleOutcome
                 */
                DeleteLiveRecordRuleOutcome DeleteLiveRecordRule(const Model::DeleteLiveRecordRuleRequest &request);
                void DeleteLiveRecordRuleAsync(const Model::DeleteLiveRecordRuleRequest& request, const DeleteLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordRuleOutcomeCallable DeleteLiveRecordRuleCallable(const Model::DeleteLiveRecordRuleRequest& request);

                /**
                 *This API is used to delete a recording template.
                 * @param req DeleteLiveRecordTemplateRequest
                 * @return DeleteLiveRecordTemplateOutcome
                 */
                DeleteLiveRecordTemplateOutcome DeleteLiveRecordTemplate(const Model::DeleteLiveRecordTemplateRequest &request);
                void DeleteLiveRecordTemplateAsync(const Model::DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordTemplateOutcomeCallable DeleteLiveRecordTemplateCallable(const Model::DeleteLiveRecordTemplateRequest& request);

                /**
                 *This API is used to delete a screencapturing rule.
                 * @param req DeleteLiveSnapshotRuleRequest
                 * @return DeleteLiveSnapshotRuleOutcome
                 */
                DeleteLiveSnapshotRuleOutcome DeleteLiveSnapshotRule(const Model::DeleteLiveSnapshotRuleRequest &request);
                void DeleteLiveSnapshotRuleAsync(const Model::DeleteLiveSnapshotRuleRequest& request, const DeleteLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveSnapshotRuleOutcomeCallable DeleteLiveSnapshotRuleCallable(const Model::DeleteLiveSnapshotRuleRequest& request);

                /**
                 *This API is used to delete a screencapturing template.
                 * @param req DeleteLiveSnapshotTemplateRequest
                 * @return DeleteLiveSnapshotTemplateOutcome
                 */
                DeleteLiveSnapshotTemplateOutcome DeleteLiveSnapshotTemplate(const Model::DeleteLiveSnapshotTemplateRequest &request);
                void DeleteLiveSnapshotTemplateAsync(const Model::DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveSnapshotTemplateOutcomeCallable DeleteLiveSnapshotTemplateCallable(const Model::DeleteLiveSnapshotTemplateRequest& request);

                /**
                 *This API is used to delete a transcoding rule.
`DomainName+AppName+StreamName+TemplateId` uniquely identifies a single transcoding rule. If you need to delete it, strong match is required. `TemplateId` is required. Even if other parameters are empty, you still need to pass in an empty string to make a strong match.
                 * @param req DeleteLiveTranscodeRuleRequest
                 * @return DeleteLiveTranscodeRuleOutcome
                 */
                DeleteLiveTranscodeRuleOutcome DeleteLiveTranscodeRule(const Model::DeleteLiveTranscodeRuleRequest &request);
                void DeleteLiveTranscodeRuleAsync(const Model::DeleteLiveTranscodeRuleRequest& request, const DeleteLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTranscodeRuleOutcomeCallable DeleteLiveTranscodeRuleCallable(const Model::DeleteLiveTranscodeRuleRequest& request);

                /**
                 *This API is used to delete a transcoding template.
                 * @param req DeleteLiveTranscodeTemplateRequest
                 * @return DeleteLiveTranscodeTemplateOutcome
                 */
                DeleteLiveTranscodeTemplateOutcome DeleteLiveTranscodeTemplate(const Model::DeleteLiveTranscodeTemplateRequest &request);
                void DeleteLiveTranscodeTemplateAsync(const Model::DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveTranscodeTemplateOutcomeCallable DeleteLiveTranscodeTemplateCallable(const Model::DeleteLiveTranscodeTemplateRequest& request);

                /**
                 *This API is used to delete a watermark.
                 * @param req DeleteLiveWatermarkRequest
                 * @return DeleteLiveWatermarkOutcome
                 */
                DeleteLiveWatermarkOutcome DeleteLiveWatermark(const Model::DeleteLiveWatermarkRequest &request);
                void DeleteLiveWatermarkAsync(const Model::DeleteLiveWatermarkRequest& request, const DeleteLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveWatermarkOutcomeCallable DeleteLiveWatermarkCallable(const Model::DeleteLiveWatermarkRequest& request);

                /**
                 *This API is used to delete a watermarking rule.
                 * @param req DeleteLiveWatermarkRuleRequest
                 * @return DeleteLiveWatermarkRuleOutcome
                 */
                DeleteLiveWatermarkRuleOutcome DeleteLiveWatermarkRule(const Model::DeleteLiveWatermarkRuleRequest &request);
                void DeleteLiveWatermarkRuleAsync(const Model::DeleteLiveWatermarkRuleRequest& request, const DeleteLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveWatermarkRuleOutcomeCallable DeleteLiveWatermarkRuleCallable(const Model::DeleteLiveWatermarkRuleRequest& request);

                /**
                 *This API is used to delete a recording task configuration. The deletion does not affect running tasks and takes effect only for new pushes.
                 * @param req DeleteRecordTaskRequest
                 * @return DeleteRecordTaskOutcome
                 */
                DeleteRecordTaskOutcome DeleteRecordTask(const Model::DeleteRecordTaskRequest &request);
                void DeleteRecordTaskAsync(const Model::DeleteRecordTaskRequest& request, const DeleteRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordTaskOutcomeCallable DeleteRecordTaskCallable(const Model::DeleteRecordTaskRequest& request);

                /**
                 *This API is used to query the number of concurrent recording channels, which is applicable to LCB and LVB.
                 * @param req DescribeConcurrentRecordStreamNumRequest
                 * @return DescribeConcurrentRecordStreamNumOutcome
                 */
                DescribeConcurrentRecordStreamNumOutcome DescribeConcurrentRecordStreamNum(const Model::DescribeConcurrentRecordStreamNumRequest &request);
                void DescribeConcurrentRecordStreamNumAsync(const Model::DescribeConcurrentRecordStreamNumRequest& request, const DescribeConcurrentRecordStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConcurrentRecordStreamNumOutcomeCallable DescribeConcurrentRecordStreamNumCallable(const Model::DescribeConcurrentRecordStreamNumRequest& request);

                /**
                 *This API is used to query the billable bandwidth of live stream relaying in the last 3 months. The query period is up to 31 days.
                 * @param req DescribeDeliverBandwidthListRequest
                 * @return DescribeDeliverBandwidthListOutcome
                 */
                DescribeDeliverBandwidthListOutcome DescribeDeliverBandwidthList(const Model::DescribeDeliverBandwidthListRequest &request);
                void DescribeDeliverBandwidthListAsync(const Model::DescribeDeliverBandwidthListRequest& request, const DescribeDeliverBandwidthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeliverBandwidthListOutcomeCallable DescribeDeliverBandwidthListCallable(const Model::DescribeDeliverBandwidthListRequest& request);

                /**
                 *This API is used to query the downstream playback data by district and ISP.
                 * @param req DescribeGroupProIspPlayInfoListRequest
                 * @return DescribeGroupProIspPlayInfoListOutcome
                 */
                DescribeGroupProIspPlayInfoListOutcome DescribeGroupProIspPlayInfoList(const Model::DescribeGroupProIspPlayInfoListRequest &request);
                void DescribeGroupProIspPlayInfoListAsync(const Model::DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupProIspPlayInfoListOutcomeCallable DescribeGroupProIspPlayInfoListCallable(const Model::DescribeGroupProIspPlayInfoListRequest& request);

                /**
                 *This API is used to query the number of each playback HTTP status code at a 5-minute granularity in a certain period of time.
Note: data can be queried one hour after it is generated. For example, data between 10:00 and 10:59 cannot be queried until 12:00.
                 * @param req DescribeHttpStatusInfoListRequest
                 * @return DescribeHttpStatusInfoListOutcome
                 */
                DescribeHttpStatusInfoListOutcome DescribeHttpStatusInfoList(const Model::DescribeHttpStatusInfoListRequest &request);
                void DescribeHttpStatusInfoListAsync(const Model::DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHttpStatusInfoListOutcomeCallable DescribeHttpStatusInfoListCallable(const Model::DescribeHttpStatusInfoListRequest& request);

                /**
                 *This API is used to get the callback rule list.
                 * @param req DescribeLiveCallbackRulesRequest
                 * @return DescribeLiveCallbackRulesOutcome
                 */
                DescribeLiveCallbackRulesOutcome DescribeLiveCallbackRules(const Model::DescribeLiveCallbackRulesRequest &request);
                void DescribeLiveCallbackRulesAsync(const Model::DescribeLiveCallbackRulesRequest& request, const DescribeLiveCallbackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackRulesOutcomeCallable DescribeLiveCallbackRulesCallable(const Model::DescribeLiveCallbackRulesRequest& request);

                /**
                 *This API is used to get a single callback template.
                 * @param req DescribeLiveCallbackTemplateRequest
                 * @return DescribeLiveCallbackTemplateOutcome
                 */
                DescribeLiveCallbackTemplateOutcome DescribeLiveCallbackTemplate(const Model::DescribeLiveCallbackTemplateRequest &request);
                void DescribeLiveCallbackTemplateAsync(const Model::DescribeLiveCallbackTemplateRequest& request, const DescribeLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackTemplateOutcomeCallable DescribeLiveCallbackTemplateCallable(const Model::DescribeLiveCallbackTemplateRequest& request);

                /**
                 *This API is used to get the callback template list.
                 * @param req DescribeLiveCallbackTemplatesRequest
                 * @return DescribeLiveCallbackTemplatesOutcome
                 */
                DescribeLiveCallbackTemplatesOutcome DescribeLiveCallbackTemplates(const Model::DescribeLiveCallbackTemplatesRequest &request);
                void DescribeLiveCallbackTemplatesAsync(const Model::DescribeLiveCallbackTemplatesRequest& request, const DescribeLiveCallbackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCallbackTemplatesOutcomeCallable DescribeLiveCallbackTemplatesCallable(const Model::DescribeLiveCallbackTemplatesRequest& request);

                /**
                 *This API is used to get certificate information.
                 * @param req DescribeLiveCertRequest
                 * @return DescribeLiveCertOutcome
                 */
                DescribeLiveCertOutcome DescribeLiveCert(const Model::DescribeLiveCertRequest &request);
                void DescribeLiveCertAsync(const Model::DescribeLiveCertRequest& request, const DescribeLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCertOutcomeCallable DescribeLiveCertCallable(const Model::DescribeLiveCertRequest& request);

                /**
                 *This API is used to get the certificate information list.
                 * @param req DescribeLiveCertsRequest
                 * @return DescribeLiveCertsOutcome
                 */
                DescribeLiveCertsOutcome DescribeLiveCerts(const Model::DescribeLiveCertsRequest &request);
                void DescribeLiveCertsAsync(const Model::DescribeLiveCertsRequest& request, const DescribeLiveCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveCertsOutcomeCallable DescribeLiveCertsCallable(const Model::DescribeLiveCertsRequest& request);

                /**
                 *This API is used to get the list of delayed playbacks.
                 * @param req DescribeLiveDelayInfoListRequest
                 * @return DescribeLiveDelayInfoListOutcome
                 */
                DescribeLiveDelayInfoListOutcome DescribeLiveDelayInfoList(const Model::DescribeLiveDelayInfoListRequest &request);
                void DescribeLiveDelayInfoListAsync(const Model::DescribeLiveDelayInfoListRequest& request, const DescribeLiveDelayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDelayInfoListOutcomeCallable DescribeLiveDelayInfoListCallable(const Model::DescribeLiveDelayInfoListRequest& request);

                /**
                 *This API is used to query the LVB domain name information.
                 * @param req DescribeLiveDomainRequest
                 * @return DescribeLiveDomainOutcome
                 */
                DescribeLiveDomainOutcome DescribeLiveDomain(const Model::DescribeLiveDomainRequest &request);
                void DescribeLiveDomainAsync(const Model::DescribeLiveDomainRequest& request, const DescribeLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainOutcomeCallable DescribeLiveDomainCallable(const Model::DescribeLiveDomainRequest& request);

                /**
                 *This API is used to get the domain name certificate information.
                 * @param req DescribeLiveDomainCertRequest
                 * @return DescribeLiveDomainCertOutcome
                 */
                DescribeLiveDomainCertOutcome DescribeLiveDomainCert(const Model::DescribeLiveDomainCertRequest &request);
                void DescribeLiveDomainCertAsync(const Model::DescribeLiveDomainCertRequest& request, const DescribeLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainCertOutcomeCallable DescribeLiveDomainCertCallable(const Model::DescribeLiveDomainCertRequest& request);

                /**
                 *This API is used to query referer allowlist/blocklist configuration of a live streaming domain name.
Referer information is included in HTTP requests. After you enable referer configuration, live streams using RTMP or WebRTC for playback will not authenticate the referer and can be played back normally. To make the referer configuration effective, the HTTP-FLV or HLS protocol is recommended for playback.
                 * @param req DescribeLiveDomainRefererRequest
                 * @return DescribeLiveDomainRefererOutcome
                 */
                DescribeLiveDomainRefererOutcome DescribeLiveDomainReferer(const Model::DescribeLiveDomainRefererRequest &request);
                void DescribeLiveDomainRefererAsync(const Model::DescribeLiveDomainRefererRequest& request, const DescribeLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainRefererOutcomeCallable DescribeLiveDomainRefererCallable(const Model::DescribeLiveDomainRefererRequest& request);

                /**
                 *This API is used to query domain names by domain name status and type.
                 * @param req DescribeLiveDomainsRequest
                 * @return DescribeLiveDomainsOutcome
                 */
                DescribeLiveDomainsOutcome DescribeLiveDomains(const Model::DescribeLiveDomainsRequest &request);
                void DescribeLiveDomainsAsync(const Model::DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveDomainsOutcomeCallable DescribeLiveDomainsCallable(const Model::DescribeLiveDomainsRequest& request);

                /**
                 *This API is used to get the list of disabled streams.

Note: this API is used for query only and should not be relied too much upon in important business scenarios.
                 * @param req DescribeLiveForbidStreamListRequest
                 * @return DescribeLiveForbidStreamListOutcome
                 */
                DescribeLiveForbidStreamListOutcome DescribeLiveForbidStreamList(const Model::DescribeLiveForbidStreamListRequest &request);
                void DescribeLiveForbidStreamListAsync(const Model::DescribeLiveForbidStreamListRequest& request, const DescribeLiveForbidStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveForbidStreamListOutcomeCallable DescribeLiveForbidStreamListCallable(const Model::DescribeLiveForbidStreamListRequest& request);

                /**
                 *This API is used to query the playback authentication key.
                 * @param req DescribeLivePlayAuthKeyRequest
                 * @return DescribeLivePlayAuthKeyOutcome
                 */
                DescribeLivePlayAuthKeyOutcome DescribeLivePlayAuthKey(const Model::DescribeLivePlayAuthKeyRequest &request);
                void DescribeLivePlayAuthKeyAsync(const Model::DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePlayAuthKeyOutcomeCallable DescribeLivePlayAuthKeyCallable(const Model::DescribeLivePlayAuthKeyRequest& request);

                /**
                 *This API is used to query the LVB push authentication key.
                 * @param req DescribeLivePushAuthKeyRequest
                 * @return DescribeLivePushAuthKeyOutcome
                 */
                DescribeLivePushAuthKeyOutcome DescribeLivePushAuthKey(const Model::DescribeLivePushAuthKeyRequest &request);
                void DescribeLivePushAuthKeyAsync(const Model::DescribeLivePushAuthKeyRequest& request, const DescribeLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLivePushAuthKeyOutcomeCallable DescribeLivePushAuthKeyCallable(const Model::DescribeLivePushAuthKeyRequest& request);

                /**
                 *This API is used to get the list of recording rules.
                 * @param req DescribeLiveRecordRulesRequest
                 * @return DescribeLiveRecordRulesOutcome
                 */
                DescribeLiveRecordRulesOutcome DescribeLiveRecordRules(const Model::DescribeLiveRecordRulesRequest &request);
                void DescribeLiveRecordRulesAsync(const Model::DescribeLiveRecordRulesRequest& request, const DescribeLiveRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordRulesOutcomeCallable DescribeLiveRecordRulesCallable(const Model::DescribeLiveRecordRulesRequest& request);

                /**
                 *This API is used to get a single recording template.
                 * @param req DescribeLiveRecordTemplateRequest
                 * @return DescribeLiveRecordTemplateOutcome
                 */
                DescribeLiveRecordTemplateOutcome DescribeLiveRecordTemplate(const Model::DescribeLiveRecordTemplateRequest &request);
                void DescribeLiveRecordTemplateAsync(const Model::DescribeLiveRecordTemplateRequest& request, const DescribeLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplateOutcomeCallable DescribeLiveRecordTemplateCallable(const Model::DescribeLiveRecordTemplateRequest& request);

                /**
                 *This API is used to get the recording template list.
                 * @param req DescribeLiveRecordTemplatesRequest
                 * @return DescribeLiveRecordTemplatesOutcome
                 */
                DescribeLiveRecordTemplatesOutcome DescribeLiveRecordTemplates(const Model::DescribeLiveRecordTemplatesRequest &request);
                void DescribeLiveRecordTemplatesAsync(const Model::DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplatesOutcomeCallable DescribeLiveRecordTemplatesCallable(const Model::DescribeLiveRecordTemplatesRequest& request);

                /**
                 *This API is used to get the screencapturing rule list.
                 * @param req DescribeLiveSnapshotRulesRequest
                 * @return DescribeLiveSnapshotRulesOutcome
                 */
                DescribeLiveSnapshotRulesOutcome DescribeLiveSnapshotRules(const Model::DescribeLiveSnapshotRulesRequest &request);
                void DescribeLiveSnapshotRulesAsync(const Model::DescribeLiveSnapshotRulesRequest& request, const DescribeLiveSnapshotRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotRulesOutcomeCallable DescribeLiveSnapshotRulesCallable(const Model::DescribeLiveSnapshotRulesRequest& request);

                /**
                 *This API is used to get a single screencapturing template.
                 * @param req DescribeLiveSnapshotTemplateRequest
                 * @return DescribeLiveSnapshotTemplateOutcome
                 */
                DescribeLiveSnapshotTemplateOutcome DescribeLiveSnapshotTemplate(const Model::DescribeLiveSnapshotTemplateRequest &request);
                void DescribeLiveSnapshotTemplateAsync(const Model::DescribeLiveSnapshotTemplateRequest& request, const DescribeLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotTemplateOutcomeCallable DescribeLiveSnapshotTemplateCallable(const Model::DescribeLiveSnapshotTemplateRequest& request);

                /**
                 *This API is used to get the screencapturing template list.
                 * @param req DescribeLiveSnapshotTemplatesRequest
                 * @return DescribeLiveSnapshotTemplatesOutcome
                 */
                DescribeLiveSnapshotTemplatesOutcome DescribeLiveSnapshotTemplates(const Model::DescribeLiveSnapshotTemplatesRequest &request);
                void DescribeLiveSnapshotTemplatesAsync(const Model::DescribeLiveSnapshotTemplatesRequest& request, const DescribeLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveSnapshotTemplatesOutcomeCallable DescribeLiveSnapshotTemplatesCallable(const Model::DescribeLiveSnapshotTemplatesRequest& request);

                /**
                 *This API is used to query stream push/interruption events.<br>

Notes:
1. This API is used to query stream push/interruption records, and should not be relied too much upon in important business scenarios.
2. You can use the `IsFilter` parameter of this API to filter and get required push records.
                 * @param req DescribeLiveStreamEventListRequest
                 * @return DescribeLiveStreamEventListOutcome
                 */
                DescribeLiveStreamEventListOutcome DescribeLiveStreamEventList(const Model::DescribeLiveStreamEventListRequest &request);
                void DescribeLiveStreamEventListAsync(const Model::DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamEventListOutcomeCallable DescribeLiveStreamEventListCallable(const Model::DescribeLiveStreamEventListRequest& request);

                /**
                 *This API is used to get the list of ongoing live streams. It queries the information of live streams after they are pushed successfully. 

Notes:
1. This API is used to query the list of active live streams only, and should not be relied too much upon in important business scenarios.
2. This API can query up to 20,000 streams. To query more streams, please contact our after-sales service team.

                 * @param req DescribeLiveStreamOnlineListRequest
                 * @return DescribeLiveStreamOnlineListOutcome
                 */
                DescribeLiveStreamOnlineListOutcome DescribeLiveStreamOnlineList(const Model::DescribeLiveStreamOnlineListRequest &request);
                void DescribeLiveStreamOnlineListAsync(const Model::DescribeLiveStreamOnlineListRequest& request, const DescribeLiveStreamOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamOnlineListOutcomeCallable DescribeLiveStreamOnlineListCallable(const Model::DescribeLiveStreamOnlineListRequest& request);

                /**
                 *This API is used to return the list of pushed streams. <br>
Note: Up to 10,000 entries can be queried per page. More data can be obtained by adjusting the query time range.
                 * @param req DescribeLiveStreamPublishedListRequest
                 * @return DescribeLiveStreamPublishedListOutcome
                 */
                DescribeLiveStreamPublishedListOutcome DescribeLiveStreamPublishedList(const Model::DescribeLiveStreamPublishedListRequest &request);
                void DescribeLiveStreamPublishedListAsync(const Model::DescribeLiveStreamPublishedListRequest& request, const DescribeLiveStreamPublishedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamPublishedListOutcomeCallable DescribeLiveStreamPublishedListCallable(const Model::DescribeLiveStreamPublishedListRequest& request);

                /**
                 *This API is used to query the push information of all real-time streams, including client IP, server IP, frame rate, bitrate, domain name, and push start time.
                 * @param req DescribeLiveStreamPushInfoListRequest
                 * @return DescribeLiveStreamPushInfoListOutcome
                 */
                DescribeLiveStreamPushInfoListOutcome DescribeLiveStreamPushInfoList(const Model::DescribeLiveStreamPushInfoListRequest &request);
                void DescribeLiveStreamPushInfoListAsync(const Model::DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamPushInfoListOutcomeCallable DescribeLiveStreamPushInfoListCallable(const Model::DescribeLiveStreamPushInfoListRequest& request);

                /**
                 *This API is used to get the stream status, which may be active, inactive, or disabled.

Notes:
This API allows you to query the status of a stream in real time. Given external factors such as network jitter, note the following when you determine whether a host is online:
1. If possible, use your own logic of stream starting/stopping in a room, such as streaming signaling on the client and the online heartbeat of a host, to determine whether the host is online.
2. If your application does not provide the room management feature, use the following methods to determine whether a host is online:
2.1 Use the [live stream callback](https://intl.cloud.tencent.com/document/product/267/20388?from_cn_redirect=1).
2.2 Call [DescribeLiveStreamOnlineList](https://intl.cloud.tencent.com/document/api/267/20472?from_cn_redirect=1) on a regular basis (interval > 1 min).
2.3 Call this API.
2.4 A host is considered to be online if the result returned by any of the above methods indicates so. If an API call times out or a parsing error occurs, to minimize the impact on your business, CSS will also consider the host online.
                 * @param req DescribeLiveStreamStateRequest
                 * @return DescribeLiveStreamStateOutcome
                 */
                DescribeLiveStreamStateOutcome DescribeLiveStreamState(const Model::DescribeLiveStreamStateRequest &request);
                void DescribeLiveStreamStateAsync(const Model::DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveStreamStateOutcomeCallable DescribeLiveStreamStateCallable(const Model::DescribeLiveStreamStateRequest& request);

                /**
                 *This API is used to query the time-shift video length, time-shift days, and total time-shift period of push domains. The data returned is on a five-minute basis. You can use it for reconciliation.
                 * @param req DescribeLiveTimeShiftBillInfoListRequest
                 * @return DescribeLiveTimeShiftBillInfoListOutcome
                 */
                DescribeLiveTimeShiftBillInfoListOutcome DescribeLiveTimeShiftBillInfoList(const Model::DescribeLiveTimeShiftBillInfoListRequest &request);
                void DescribeLiveTimeShiftBillInfoListAsync(const Model::DescribeLiveTimeShiftBillInfoListRequest& request, const DescribeLiveTimeShiftBillInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTimeShiftBillInfoListOutcomeCallable DescribeLiveTimeShiftBillInfoListCallable(const Model::DescribeLiveTimeShiftBillInfoListRequest& request);

                /**
                 *This API is used to query the details of transcoding on a specified day or in a specified period of time.
                 * @param req DescribeLiveTranscodeDetailInfoRequest
                 * @return DescribeLiveTranscodeDetailInfoOutcome
                 */
                DescribeLiveTranscodeDetailInfoOutcome DescribeLiveTranscodeDetailInfo(const Model::DescribeLiveTranscodeDetailInfoRequest &request);
                void DescribeLiveTranscodeDetailInfoAsync(const Model::DescribeLiveTranscodeDetailInfoRequest& request, const DescribeLiveTranscodeDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeDetailInfoOutcomeCallable DescribeLiveTranscodeDetailInfoCallable(const Model::DescribeLiveTranscodeDetailInfoRequest& request);

                /**
                 *This API is used to get the list of transcoding rules.
                 * @param req DescribeLiveTranscodeRulesRequest
                 * @return DescribeLiveTranscodeRulesOutcome
                 */
                DescribeLiveTranscodeRulesOutcome DescribeLiveTranscodeRules(const Model::DescribeLiveTranscodeRulesRequest &request);
                void DescribeLiveTranscodeRulesAsync(const Model::DescribeLiveTranscodeRulesRequest& request, const DescribeLiveTranscodeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeRulesOutcomeCallable DescribeLiveTranscodeRulesCallable(const Model::DescribeLiveTranscodeRulesRequest& request);

                /**
                 *This API is used to get a single transcoding template.
                 * @param req DescribeLiveTranscodeTemplateRequest
                 * @return DescribeLiveTranscodeTemplateOutcome
                 */
                DescribeLiveTranscodeTemplateOutcome DescribeLiveTranscodeTemplate(const Model::DescribeLiveTranscodeTemplateRequest &request);
                void DescribeLiveTranscodeTemplateAsync(const Model::DescribeLiveTranscodeTemplateRequest& request, const DescribeLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTemplateOutcomeCallable DescribeLiveTranscodeTemplateCallable(const Model::DescribeLiveTranscodeTemplateRequest& request);

                /**
                 *This API is used to get the transcoding template list.
                 * @param req DescribeLiveTranscodeTemplatesRequest
                 * @return DescribeLiveTranscodeTemplatesOutcome
                 */
                DescribeLiveTranscodeTemplatesOutcome DescribeLiveTranscodeTemplates(const Model::DescribeLiveTranscodeTemplatesRequest &request);
                void DescribeLiveTranscodeTemplatesAsync(const Model::DescribeLiveTranscodeTemplatesRequest& request, const DescribeLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTemplatesOutcomeCallable DescribeLiveTranscodeTemplatesCallable(const Model::DescribeLiveTranscodeTemplatesRequest& request);

                /**
                 *This API is used to query your total usage of the transcoding service in the last 30 days.
Notes:
If the start time and end time are on the same day, the data returned will be on a 5-minute basis.
If not or if the data of specified domains is queried, the data returned will be on an hourly basis.
                 * @param req DescribeLiveTranscodeTotalInfoRequest
                 * @return DescribeLiveTranscodeTotalInfoOutcome
                 */
                DescribeLiveTranscodeTotalInfoOutcome DescribeLiveTranscodeTotalInfo(const Model::DescribeLiveTranscodeTotalInfoRequest &request);
                void DescribeLiveTranscodeTotalInfoAsync(const Model::DescribeLiveTranscodeTotalInfoRequest& request, const DescribeLiveTranscodeTotalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveTranscodeTotalInfoOutcomeCallable DescribeLiveTranscodeTotalInfoCallable(const Model::DescribeLiveTranscodeTotalInfoRequest& request);

                /**
                 *This API is used to get the information of a single watermark.
                 * @param req DescribeLiveWatermarkRequest
                 * @return DescribeLiveWatermarkOutcome
                 */
                DescribeLiveWatermarkOutcome DescribeLiveWatermark(const Model::DescribeLiveWatermarkRequest &request);
                void DescribeLiveWatermarkAsync(const Model::DescribeLiveWatermarkRequest& request, const DescribeLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarkOutcomeCallable DescribeLiveWatermarkCallable(const Model::DescribeLiveWatermarkRequest& request);

                /**
                 *This API is used to get the watermarking rule list.
                 * @param req DescribeLiveWatermarkRulesRequest
                 * @return DescribeLiveWatermarkRulesOutcome
                 */
                DescribeLiveWatermarkRulesOutcome DescribeLiveWatermarkRules(const Model::DescribeLiveWatermarkRulesRequest &request);
                void DescribeLiveWatermarkRulesAsync(const Model::DescribeLiveWatermarkRulesRequest& request, const DescribeLiveWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarkRulesOutcomeCallable DescribeLiveWatermarkRulesCallable(const Model::DescribeLiveWatermarkRulesRequest& request);

                /**
                 *This API is used to query the watermark list.
                 * @param req DescribeLiveWatermarksRequest
                 * @return DescribeLiveWatermarksOutcome
                 */
                DescribeLiveWatermarksOutcome DescribeLiveWatermarks(const Model::DescribeLiveWatermarksRequest &request);
                void DescribeLiveWatermarksAsync(const Model::DescribeLiveWatermarksRequest& request, const DescribeLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveWatermarksOutcomeCallable DescribeLiveWatermarksCallable(const Model::DescribeLiveWatermarksRequest& request);

                /**
                 *This API is used to query the information of downstream playback error codes, i.e., the occurrences of each HTTP error code (4xx and 5xx) at a 1-minute granularity in a certain period of time.


                 * @param req DescribePlayErrorCodeDetailInfoListRequest
                 * @return DescribePlayErrorCodeDetailInfoListOutcome
                 */
                DescribePlayErrorCodeDetailInfoListOutcome DescribePlayErrorCodeDetailInfoList(const Model::DescribePlayErrorCodeDetailInfoListRequest &request);
                void DescribePlayErrorCodeDetailInfoListAsync(const Model::DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeDetailInfoListOutcomeCallable DescribePlayErrorCodeDetailInfoListCallable(const Model::DescribePlayErrorCodeDetailInfoListRequest& request);

                /**
                 *This API is used to query the information of downstream playback error codes.
                 * @param req DescribePlayErrorCodeSumInfoListRequest
                 * @return DescribePlayErrorCodeSumInfoListOutcome
                 */
                DescribePlayErrorCodeSumInfoListOutcome DescribePlayErrorCodeSumInfoList(const Model::DescribePlayErrorCodeSumInfoListRequest &request);
                void DescribePlayErrorCodeSumInfoListAsync(const Model::DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayErrorCodeSumInfoListOutcomeCallable DescribePlayErrorCodeSumInfoListCallable(const Model::DescribePlayErrorCodeSumInfoListRequest& request);

                /**
                 *This API is used to query the downstream playback data of a specified ISP in a specified district, including bandwidth, traffic, number of requests, and number of concurrent connections.
                 * @param req DescribeProvinceIspPlayInfoListRequest
                 * @return DescribeProvinceIspPlayInfoListOutcome
                 */
                DescribeProvinceIspPlayInfoListOutcome DescribeProvinceIspPlayInfoList(const Model::DescribeProvinceIspPlayInfoListRequest &request);
                void DescribeProvinceIspPlayInfoListAsync(const Model::DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProvinceIspPlayInfoListOutcomeCallable DescribeProvinceIspPlayInfoListCallable(const Model::DescribeProvinceIspPlayInfoListRequest& request);

                /**
                 *The API is used to query the number of screenshots as an LVB value-added service.
                 * @param req DescribeScreenShotSheetNumListRequest
                 * @return DescribeScreenShotSheetNumListOutcome
                 */
                DescribeScreenShotSheetNumListOutcome DescribeScreenShotSheetNumList(const Model::DescribeScreenShotSheetNumListRequest &request);
                void DescribeScreenShotSheetNumListAsync(const Model::DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenShotSheetNumListOutcomeCallable DescribeScreenShotSheetNumListCallable(const Model::DescribeScreenShotSheetNumListRequest& request);

                /**
                 *This API is used to query the playback data of each stream at the day level, including the total traffic.
                 * @param req DescribeStreamDayPlayInfoListRequest
                 * @return DescribeStreamDayPlayInfoListOutcome
                 */
                DescribeStreamDayPlayInfoListOutcome DescribeStreamDayPlayInfoList(const Model::DescribeStreamDayPlayInfoListRequest &request);
                void DescribeStreamDayPlayInfoListAsync(const Model::DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamDayPlayInfoListOutcomeCallable DescribeStreamDayPlayInfoListCallable(const Model::DescribeStreamDayPlayInfoListRequest& request);

                /**
                 *This API is used to query the playback data. It supports querying the playback details by stream name and aggregated data by playback domain name. Data in the last 4 minutes or so cannot be queried due to delay.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                 * @param req DescribeStreamPlayInfoListRequest
                 * @return DescribeStreamPlayInfoListOutcome
                 */
                DescribeStreamPlayInfoListOutcome DescribeStreamPlayInfoList(const Model::DescribeStreamPlayInfoListRequest &request);
                void DescribeStreamPlayInfoListAsync(const Model::DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPlayInfoListOutcomeCallable DescribeStreamPlayInfoListCallable(const Model::DescribeStreamPlayInfoListRequest& request);

                /**
                 *This API is used to query the information of the top n client IPs in a certain period of time (top 1,000 is supported currently).
                 * @param req DescribeTopClientIpSumInfoListRequest
                 * @return DescribeTopClientIpSumInfoListOutcome
                 */
                DescribeTopClientIpSumInfoListOutcome DescribeTopClientIpSumInfoList(const Model::DescribeTopClientIpSumInfoListRequest &request);
                void DescribeTopClientIpSumInfoListAsync(const Model::DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopClientIpSumInfoListOutcomeCallable DescribeTopClientIpSumInfoListCallable(const Model::DescribeTopClientIpSumInfoListRequest& request);

                /**
                 *This API is used to query the number of LVB upstream channels.
                 * @param req DescribeUploadStreamNumsRequest
                 * @return DescribeUploadStreamNumsOutcome
                 */
                DescribeUploadStreamNumsOutcome DescribeUploadStreamNums(const Model::DescribeUploadStreamNumsRequest &request);
                void DescribeUploadStreamNumsAsync(const Model::DescribeUploadStreamNumsRequest& request, const DescribeUploadStreamNumsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadStreamNumsOutcomeCallable DescribeUploadStreamNumsCallable(const Model::DescribeUploadStreamNumsRequest& request);

                /**
                 *This API is used to query the information of the top n domain names or stream IDs in a certain period of time (top 1,000 is supported currently).
                 * @param req DescribeVisitTopSumInfoListRequest
                 * @return DescribeVisitTopSumInfoListOutcome
                 */
                DescribeVisitTopSumInfoListOutcome DescribeVisitTopSumInfoList(const Model::DescribeVisitTopSumInfoListRequest &request);
                void DescribeVisitTopSumInfoListAsync(const Model::DescribeVisitTopSumInfoListRequest& request, const DescribeVisitTopSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVisitTopSumInfoListOutcomeCallable DescribeVisitTopSumInfoListCallable(const Model::DescribeVisitTopSumInfoListRequest& request);

                /**
                 *This API is used to enable a disabled LVB domain name.
                 * @param req EnableLiveDomainRequest
                 * @return EnableLiveDomainOutcome
                 */
                EnableLiveDomainOutcome EnableLiveDomain(const Model::EnableLiveDomainRequest &request);
                void EnableLiveDomainAsync(const Model::EnableLiveDomainRequest& request, const EnableLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableLiveDomainOutcomeCallable EnableLiveDomainCallable(const Model::EnableLiveDomainRequest& request);

                /**
                 *This API is used to disable an LVB domain name.
                 * @param req ForbidLiveDomainRequest
                 * @return ForbidLiveDomainOutcome
                 */
                ForbidLiveDomainOutcome ForbidLiveDomain(const Model::ForbidLiveDomainRequest &request);
                void ForbidLiveDomainAsync(const Model::ForbidLiveDomainRequest& request, const ForbidLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveDomainOutcomeCallable ForbidLiveDomainCallable(const Model::ForbidLiveDomainRequest& request);

                /**
                 *This API is used to forbid the push of a specific stream. You can preset a time point to resume the stream.
                 * @param req ForbidLiveStreamRequest
                 * @return ForbidLiveStreamOutcome
                 */
                ForbidLiveStreamOutcome ForbidLiveStream(const Model::ForbidLiveStreamRequest &request);
                void ForbidLiveStreamAsync(const Model::ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidLiveStreamOutcomeCallable ForbidLiveStreamCallable(const Model::ForbidLiveStreamRequest& request);

                /**
                 *This API is used to modify a callback template.
                 * @param req ModifyLiveCallbackTemplateRequest
                 * @return ModifyLiveCallbackTemplateOutcome
                 */
                ModifyLiveCallbackTemplateOutcome ModifyLiveCallbackTemplate(const Model::ModifyLiveCallbackTemplateRequest &request);
                void ModifyLiveCallbackTemplateAsync(const Model::ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveCallbackTemplateOutcomeCallable ModifyLiveCallbackTemplateCallable(const Model::ModifyLiveCallbackTemplateRequest& request);

                /**
                 *This API is used to modify a certificate.
                 * @param req ModifyLiveCertRequest
                 * @return ModifyLiveCertOutcome
                 */
                ModifyLiveCertOutcome ModifyLiveCert(const Model::ModifyLiveCertRequest &request);
                void ModifyLiveCertAsync(const Model::ModifyLiveCertRequest& request, const ModifyLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveCertOutcomeCallable ModifyLiveCertCallable(const Model::ModifyLiveCertRequest& request);

                /**
                 *This API is used to modify the domain name and certificate binding information.
                 * @param req ModifyLiveDomainCertRequest
                 * @return ModifyLiveDomainCertOutcome
                 */
                ModifyLiveDomainCertOutcome ModifyLiveDomainCert(const Model::ModifyLiveDomainCertRequest &request);
                void ModifyLiveDomainCertAsync(const Model::ModifyLiveDomainCertRequest& request, const ModifyLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveDomainCertOutcomeCallable ModifyLiveDomainCertCallable(const Model::ModifyLiveDomainCertRequest& request);

                /**
                 *This API is used to configure referer allowlist/blocklist of a live streaming domain name.
Referer information is included in HTTP requests. After you enable referer configuration, live streams using RTMP or WebRTC for playback will not authenticate the referer and can be played back normally. To make the referer configuration effective, the HTTP-FLV or HLS protocol is recommended for playback.
                 * @param req ModifyLiveDomainRefererRequest
                 * @return ModifyLiveDomainRefererOutcome
                 */
                ModifyLiveDomainRefererOutcome ModifyLiveDomainReferer(const Model::ModifyLiveDomainRefererRequest &request);
                void ModifyLiveDomainRefererAsync(const Model::ModifyLiveDomainRefererRequest& request, const ModifyLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveDomainRefererOutcomeCallable ModifyLiveDomainRefererCallable(const Model::ModifyLiveDomainRefererRequest& request);

                /**
                 *This API is used to modify the playback authentication key.
                 * @param req ModifyLivePlayAuthKeyRequest
                 * @return ModifyLivePlayAuthKeyOutcome
                 */
                ModifyLivePlayAuthKeyOutcome ModifyLivePlayAuthKey(const Model::ModifyLivePlayAuthKeyRequest &request);
                void ModifyLivePlayAuthKeyAsync(const Model::ModifyLivePlayAuthKeyRequest& request, const ModifyLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePlayAuthKeyOutcomeCallable ModifyLivePlayAuthKeyCallable(const Model::ModifyLivePlayAuthKeyRequest& request);

                /**
                 *This API is used to modify a playback domain name.
                 * @param req ModifyLivePlayDomainRequest
                 * @return ModifyLivePlayDomainOutcome
                 */
                ModifyLivePlayDomainOutcome ModifyLivePlayDomain(const Model::ModifyLivePlayDomainRequest &request);
                void ModifyLivePlayDomainAsync(const Model::ModifyLivePlayDomainRequest& request, const ModifyLivePlayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePlayDomainOutcomeCallable ModifyLivePlayDomainCallable(const Model::ModifyLivePlayDomainRequest& request);

                /**
                 *This API is used to modify the LVB push authentication key.
                 * @param req ModifyLivePushAuthKeyRequest
                 * @return ModifyLivePushAuthKeyOutcome
                 */
                ModifyLivePushAuthKeyOutcome ModifyLivePushAuthKey(const Model::ModifyLivePushAuthKeyRequest &request);
                void ModifyLivePushAuthKeyAsync(const Model::ModifyLivePushAuthKeyRequest& request, const ModifyLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLivePushAuthKeyOutcomeCallable ModifyLivePushAuthKeyCallable(const Model::ModifyLivePushAuthKeyRequest& request);

                /**
                 *This API is used to modify the recording template configuration.
                 * @param req ModifyLiveRecordTemplateRequest
                 * @return ModifyLiveRecordTemplateOutcome
                 */
                ModifyLiveRecordTemplateOutcome ModifyLiveRecordTemplate(const Model::ModifyLiveRecordTemplateRequest &request);
                void ModifyLiveRecordTemplateAsync(const Model::ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveRecordTemplateOutcomeCallable ModifyLiveRecordTemplateCallable(const Model::ModifyLiveRecordTemplateRequest& request);

                /**
                 *This API is used to modify the screencapturing template configuration.
                 * @param req ModifyLiveSnapshotTemplateRequest
                 * @return ModifyLiveSnapshotTemplateOutcome
                 */
                ModifyLiveSnapshotTemplateOutcome ModifyLiveSnapshotTemplate(const Model::ModifyLiveSnapshotTemplateRequest &request);
                void ModifyLiveSnapshotTemplateAsync(const Model::ModifyLiveSnapshotTemplateRequest& request, const ModifyLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveSnapshotTemplateOutcomeCallable ModifyLiveSnapshotTemplateCallable(const Model::ModifyLiveSnapshotTemplateRequest& request);

                /**
                 *This API is used to modify the transcoding template configuration.
                 * @param req ModifyLiveTranscodeTemplateRequest
                 * @return ModifyLiveTranscodeTemplateOutcome
                 */
                ModifyLiveTranscodeTemplateOutcome ModifyLiveTranscodeTemplate(const Model::ModifyLiveTranscodeTemplateRequest &request);
                void ModifyLiveTranscodeTemplateAsync(const Model::ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveTranscodeTemplateOutcomeCallable ModifyLiveTranscodeTemplateCallable(const Model::ModifyLiveTranscodeTemplateRequest& request);

                /**
                 *This API is used to cancel the delay setting and recover the real-time display of the live streaming image.
                 * @param req ResumeDelayLiveStreamRequest
                 * @return ResumeDelayLiveStreamOutcome
                 */
                ResumeDelayLiveStreamOutcome ResumeDelayLiveStream(const Model::ResumeDelayLiveStreamRequest &request);
                void ResumeDelayLiveStreamAsync(const Model::ResumeDelayLiveStreamRequest& request, const ResumeDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeDelayLiveStreamOutcomeCallable ResumeDelayLiveStreamCallable(const Model::ResumeDelayLiveStreamRequest& request);

                /**
                 *This API is used to resume the push of a specific stream.
                 * @param req ResumeLiveStreamRequest
                 * @return ResumeLiveStreamOutcome
                 */
                ResumeLiveStreamOutcome ResumeLiveStream(const Model::ResumeLiveStreamRequest &request);
                void ResumeLiveStreamAsync(const Model::ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeLiveStreamOutcomeCallable ResumeLiveStreamCallable(const Model::ResumeLiveStreamRequest& request);

                /**
                 *Note: Recording files are stored on the VOD platform. To use the recording feature, you need to activate a VOD account and ensure that it is available. After the recording files are stored, applicable fees (including storage fees and downstream playback traffic fees) will be charged according to the VOD billing method. For more information, please see the corresponding document.
                 * @param req StopLiveRecordRequest
                 * @return StopLiveRecordOutcome
                 */
                StopLiveRecordOutcome StopLiveRecord(const Model::StopLiveRecordRequest &request);
                void StopLiveRecordAsync(const Model::StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopLiveRecordOutcomeCallable StopLiveRecordCallable(const Model::StopLiveRecordRequest& request);

                /**
                 *This API is used to terminate an ongoing recording task and generate a recording file.
                 * @param req StopRecordTaskRequest
                 * @return StopRecordTaskOutcome
                 */
                StopRecordTaskOutcome StopRecordTask(const Model::StopRecordTaskRequest &request);
                void StopRecordTaskAsync(const Model::StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRecordTaskOutcomeCallable StopRecordTaskCallable(const Model::StopRecordTaskRequest& request);

                /**
                 *This API is used to unbind a domain name certificate.
                 * @param req UnBindLiveDomainCertRequest
                 * @return UnBindLiveDomainCertOutcome
                 */
                UnBindLiveDomainCertOutcome UnBindLiveDomainCert(const Model::UnBindLiveDomainCertRequest &request);
                void UnBindLiveDomainCertAsync(const Model::UnBindLiveDomainCertRequest& request, const UnBindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindLiveDomainCertOutcomeCallable UnBindLiveDomainCertCallable(const Model::UnBindLiveDomainCertRequest& request);

                /**
                 *This API is used to update a watermark.
                 * @param req UpdateLiveWatermarkRequest
                 * @return UpdateLiveWatermarkOutcome
                 */
                UpdateLiveWatermarkOutcome UpdateLiveWatermark(const Model::UpdateLiveWatermarkRequest &request);
                void UpdateLiveWatermarkAsync(const Model::UpdateLiveWatermarkRequest& request, const UpdateLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateLiveWatermarkOutcomeCallable UpdateLiveWatermarkCallable(const Model::UpdateLiveWatermarkRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_LIVECLIENT_H_
