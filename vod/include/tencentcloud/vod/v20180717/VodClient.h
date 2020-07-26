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

#ifndef TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_
#define TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vod/v20180717/model/ApplyUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/ApplyUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/CommitUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/CommitUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ConfirmEventsRequest.h>
#include <tencentcloud/vod/v20180717/model/ConfirmEventsResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateClassRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateClassResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIAnalysisTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIAnalysisTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIRecognitionTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAIRecognitionTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAdaptiveDynamicStreamingTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSubAppIdsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSubAppIdsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSuperPlayerConfigsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSuperPlayerConfigsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTasksRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTasksResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/EditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/EditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionRequest.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionResponse.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionRequest.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionResponse.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipRequest.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdStatusRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySubAppIdStatusResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifySuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifySuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestRequest.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByProcedureRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByProcedureResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByUrlRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByUrlResponse.h>
#include <tencentcloud/vod/v20180717/model/PullEventsRequest.h>
#include <tencentcloud/vod/v20180717/model/PullEventsResponse.h>
#include <tencentcloud/vod/v20180717/model/PullUploadRequest.h>
#include <tencentcloud/vod/v20180717/model/PullUploadResponse.h>
#include <tencentcloud/vod/v20180717/model/PushUrlCacheRequest.h>
#include <tencentcloud/vod/v20180717/model/PushUrlCacheResponse.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipRequest.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipResponse.h>
#include <tencentcloud/vod/v20180717/model/WeChatMiniProgramPublishRequest.h>
#include <tencentcloud/vod/v20180717/model/WeChatMiniProgramPublishResponse.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            class VodClient : public AbstractClient
            {
            public:
                VodClient(const Credential &credential, const std::string &region);
                VodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ApplyUploadResponse> ApplyUploadOutcome;
                typedef std::future<ApplyUploadOutcome> ApplyUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ApplyUploadRequest&, ApplyUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyUploadAsyncHandler;
                typedef Outcome<Error, Model::CommitUploadResponse> CommitUploadOutcome;
                typedef std::future<CommitUploadOutcome> CommitUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CommitUploadRequest&, CommitUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitUploadAsyncHandler;
                typedef Outcome<Error, Model::ComposeMediaResponse> ComposeMediaOutcome;
                typedef std::future<ComposeMediaOutcome> ComposeMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ComposeMediaRequest&, ComposeMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ComposeMediaAsyncHandler;
                typedef Outcome<Error, Model::ConfirmEventsResponse> ConfirmEventsOutcome;
                typedef std::future<ConfirmEventsOutcome> ConfirmEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ConfirmEventsRequest&, ConfirmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmEventsAsyncHandler;
                typedef Outcome<Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateClassResponse> CreateClassOutcome;
                typedef std::future<CreateClassOutcome> CreateClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateClassRequest&, CreateClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassAsyncHandler;
                typedef Outcome<Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Error, Model::CreateProcedureTemplateResponse> CreateProcedureTemplateOutcome;
                typedef std::future<CreateProcedureTemplateOutcome> CreateProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcedureTemplateRequest&, CreateProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcedureTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateSubAppIdResponse> CreateSubAppIdOutcome;
                typedef std::future<CreateSubAppIdOutcome> CreateSubAppIdOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSubAppIdRequest&, CreateSubAppIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubAppIdAsyncHandler;
                typedef Outcome<Error, Model::CreateSuperPlayerConfigResponse> CreateSuperPlayerConfigOutcome;
                typedef std::future<CreateSuperPlayerConfigOutcome> CreateSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSuperPlayerConfigRequest&, CreateSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuperPlayerConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteClassResponse> DeleteClassOutcome;
                typedef std::future<DeleteClassOutcome> DeleteClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteClassRequest&, DeleteClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClassAsyncHandler;
                typedef Outcome<Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Error, Model::DeleteProcedureTemplateResponse> DeleteProcedureTemplateOutcome;
                typedef std::future<DeleteProcedureTemplateOutcome> DeleteProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcedureTemplateRequest&, DeleteProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcedureTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteSuperPlayerConfigResponse> DeleteSuperPlayerConfigOutcome;
                typedef std::future<DeleteSuperPlayerConfigOutcome> DeleteSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSuperPlayerConfigRequest&, DeleteSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuperPlayerConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAllClassResponse> DescribeAllClassOutcome;
                typedef std::future<DescribeAllClassOutcome> DescribeAllClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAllClassRequest&, DescribeAllClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllClassAsyncHandler;
                typedef Outcome<Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCDNUsageDataResponse> DescribeCDNUsageDataOutcome;
                typedef std::future<DescribeCDNUsageDataOutcome> DescribeCDNUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNUsageDataRequest&, DescribeCDNUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNUsageDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaInfosResponse> DescribeMediaInfosOutcome;
                typedef std::future<DescribeMediaInfosOutcome> DescribeMediaInfosOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaInfosRequest&, DescribeMediaInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaInfosAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaProcessUsageDataResponse> DescribeMediaProcessUsageDataOutcome;
                typedef std::future<DescribeMediaProcessUsageDataOutcome> DescribeMediaProcessUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaProcessUsageDataRequest&, DescribeMediaProcessUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaProcessUsageDataAsyncHandler;
                typedef Outcome<Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Error, Model::DescribeProcedureTemplatesResponse> DescribeProcedureTemplatesOutcome;
                typedef std::future<DescribeProcedureTemplatesOutcome> DescribeProcedureTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeProcedureTemplatesRequest&, DescribeProcedureTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcedureTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeReviewDetailsResponse> DescribeReviewDetailsOutcome;
                typedef std::future<DescribeReviewDetailsOutcome> DescribeReviewDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeReviewDetailsRequest&, DescribeReviewDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReviewDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeStorageDataResponse> DescribeStorageDataOutcome;
                typedef std::future<DescribeStorageDataOutcome> DescribeStorageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDataRequest&, DescribeStorageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeStorageDetailsResponse> DescribeStorageDetailsOutcome;
                typedef std::future<DescribeStorageDetailsOutcome> DescribeStorageDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDetailsRequest&, DescribeStorageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDetailsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubAppIdsResponse> DescribeSubAppIdsOutcome;
                typedef std::future<DescribeSubAppIdsOutcome> DescribeSubAppIdsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSubAppIdsRequest&, DescribeSubAppIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAppIdsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSuperPlayerConfigsResponse> DescribeSuperPlayerConfigsOutcome;
                typedef std::future<DescribeSuperPlayerConfigsOutcome> DescribeSuperPlayerConfigsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSuperPlayerConfigsRequest&, DescribeSuperPlayerConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuperPlayerConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Error, Model::ForbidMediaDistributionResponse> ForbidMediaDistributionOutcome;
                typedef std::future<ForbidMediaDistributionOutcome> ForbidMediaDistributionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ForbidMediaDistributionRequest&, ForbidMediaDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidMediaDistributionAsyncHandler;
                typedef Outcome<Error, Model::LiveRealTimeClipResponse> LiveRealTimeClipOutcome;
                typedef std::future<LiveRealTimeClipOutcome> LiveRealTimeClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::LiveRealTimeClipRequest&, LiveRealTimeClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LiveRealTimeClipAsyncHandler;
                typedef Outcome<Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyClassResponse> ModifyClassOutcome;
                typedef std::future<ModifyClassOutcome> ModifyClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyClassRequest&, ModifyClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClassAsyncHandler;
                typedef Outcome<Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaInfoResponse> ModifyMediaInfoOutcome;
                typedef std::future<ModifyMediaInfoOutcome> ModifyMediaInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaInfoRequest&, ModifyMediaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifySubAppIdInfoResponse> ModifySubAppIdInfoOutcome;
                typedef std::future<ModifySubAppIdInfoOutcome> ModifySubAppIdInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdInfoRequest&, ModifySubAppIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifySubAppIdStatusResponse> ModifySubAppIdStatusOutcome;
                typedef std::future<ModifySubAppIdStatusOutcome> ModifySubAppIdStatusOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdStatusRequest&, ModifySubAppIdStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifySuperPlayerConfigResponse> ModifySuperPlayerConfigOutcome;
                typedef std::future<ModifySuperPlayerConfigOutcome> ModifySuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySuperPlayerConfigRequest&, ModifySuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySuperPlayerConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Error, Model::ParseStreamingManifestResponse> ParseStreamingManifestOutcome;
                typedef std::future<ParseStreamingManifestOutcome> ParseStreamingManifestOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ParseStreamingManifestRequest&, ParseStreamingManifestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseStreamingManifestAsyncHandler;
                typedef Outcome<Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Error, Model::ProcessMediaByProcedureResponse> ProcessMediaByProcedureOutcome;
                typedef std::future<ProcessMediaByProcedureOutcome> ProcessMediaByProcedureOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByProcedureRequest&, ProcessMediaByProcedureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByProcedureAsyncHandler;
                typedef Outcome<Error, Model::ProcessMediaByUrlResponse> ProcessMediaByUrlOutcome;
                typedef std::future<ProcessMediaByUrlOutcome> ProcessMediaByUrlOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByUrlRequest&, ProcessMediaByUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByUrlAsyncHandler;
                typedef Outcome<Error, Model::PullEventsResponse> PullEventsOutcome;
                typedef std::future<PullEventsOutcome> PullEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullEventsRequest&, PullEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullEventsAsyncHandler;
                typedef Outcome<Error, Model::PullUploadResponse> PullUploadOutcome;
                typedef std::future<PullUploadOutcome> PullUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullUploadRequest&, PullUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullUploadAsyncHandler;
                typedef Outcome<Error, Model::PushUrlCacheResponse> PushUrlCacheOutcome;
                typedef std::future<PushUrlCacheOutcome> PushUrlCacheOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PushUrlCacheRequest&, PushUrlCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlCacheAsyncHandler;
                typedef Outcome<Error, Model::ResetProcedureTemplateResponse> ResetProcedureTemplateOutcome;
                typedef std::future<ResetProcedureTemplateOutcome> ResetProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ResetProcedureTemplateRequest&, ResetProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetProcedureTemplateAsyncHandler;
                typedef Outcome<Error, Model::SearchMediaResponse> SearchMediaOutcome;
                typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SearchMediaRequest&, SearchMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
                typedef Outcome<Error, Model::SimpleHlsClipResponse> SimpleHlsClipOutcome;
                typedef std::future<SimpleHlsClipOutcome> SimpleHlsClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SimpleHlsClipRequest&, SimpleHlsClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SimpleHlsClipAsyncHandler;
                typedef Outcome<Error, Model::WeChatMiniProgramPublishResponse> WeChatMiniProgramPublishOutcome;
                typedef std::future<WeChatMiniProgramPublishOutcome> WeChatMiniProgramPublishOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::WeChatMiniProgramPublishRequest&, WeChatMiniProgramPublishOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WeChatMiniProgramPublishAsyncHandler;



                /**
                 ** This API is used to apply for uploading a media file (and cover file) to VOD and obtain the metadata of file storage (including upload path and upload signature) for subsequent use by the uploading API.
* For the detailed upload process, please see [Overview of Upload from Client](/document/product/266/9759).
                 * @param req ApplyUploadRequest
                 * @return ApplyUploadOutcome
                 */
                ApplyUploadOutcome ApplyUpload(const Model::ApplyUploadRequest &request);
                void ApplyUploadAsync(const Model::ApplyUploadRequest& request, const ApplyUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUploadOutcomeCallable ApplyUploadCallable(const Model::ApplyUploadRequest& request);

                /**
                 *This API is used to confirm the result of uploading a media file (and cover file) to VOD, store the media information, and return the playback address and ID of the file.
                 * @param req CommitUploadRequest
                 * @return CommitUploadOutcome
                 */
                CommitUploadOutcome CommitUpload(const Model::CommitUploadRequest &request);
                void CommitUploadAsync(const Model::CommitUploadRequest& request, const CommitUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitUploadOutcomeCallable CommitUploadCallable(const Model::CommitUploadRequest& request);

                /**
                 *This API is used to compose a media file, including:

1. Clipping a media file to generate a new media file;
2. Clipping and splicing multiple media files to generate a new media file;
3. Clipping and splicing the media streams of multiple media files to generate a new media file;
                 * @param req ComposeMediaRequest
                 * @return ComposeMediaOutcome
                 */
                ComposeMediaOutcome ComposeMedia(const Model::ComposeMediaRequest &request);
                void ComposeMediaAsync(const Model::ComposeMediaRequest& request, const ComposeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposeMediaOutcomeCallable ComposeMediaCallable(const Model::ComposeMediaRequest& request);

                /**
                 ** After the `PullEvents` API is called to get an event, this API must be called to confirm that the message has been received;
* After the event handler is obtained, the validity period of waiting for confirmation is 30 seconds. If the wait exceeds 30 seconds, a parameter error will be reported (4000);
* For more information, please see the [reliable callback](https://cloud.tencent.com/document/product/266/33779#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83) of event notification.
                 * @param req ConfirmEventsRequest
                 * @return ConfirmEventsOutcome
                 */
                ConfirmEventsOutcome ConfirmEvents(const Model::ConfirmEventsRequest &request);
                void ConfirmEventsAsync(const Model::ConfirmEventsRequest& request, const ConfirmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmEventsOutcomeCallable ConfirmEventsCallable(const Model::ConfirmEventsRequest& request);

                /**
                 *This API is used to create a custom video content analysis template. Up to 50 templates can be created.
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to create a custom video content recognition template. Up to 50 templates can be created.
                 * @param req CreateAIRecognitionTemplateRequest
                 * @return CreateAIRecognitionTemplateOutcome
                 */
                CreateAIRecognitionTemplateOutcome CreateAIRecognitionTemplate(const Model::CreateAIRecognitionTemplateRequest &request);
                void CreateAIRecognitionTemplateAsync(const Model::CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIRecognitionTemplateOutcomeCallable CreateAIRecognitionTemplateCallable(const Model::CreateAIRecognitionTemplateRequest& request);

                /**
                 *This API is used to create an adaptive bitrate streaming template. Up to 100 templates can be created.
                 * @param req CreateAdaptiveDynamicStreamingTemplateRequest
                 * @return CreateAdaptiveDynamicStreamingTemplateOutcome
                 */
                CreateAdaptiveDynamicStreamingTemplateOutcome CreateAdaptiveDynamicStreamingTemplate(const Model::CreateAdaptiveDynamicStreamingTemplateRequest &request);
                void CreateAdaptiveDynamicStreamingTemplateAsync(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdaptiveDynamicStreamingTemplateOutcomeCallable CreateAdaptiveDynamicStreamingTemplateCallable(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *This API is used to create a custom animated image generating template. Up to 16 templates can be created.
                 * @param req CreateAnimatedGraphicsTemplateRequest
                 * @return CreateAnimatedGraphicsTemplateOutcome
                 */
                CreateAnimatedGraphicsTemplateOutcome CreateAnimatedGraphicsTemplate(const Model::CreateAnimatedGraphicsTemplateRequest &request);
                void CreateAnimatedGraphicsTemplateAsync(const Model::CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnimatedGraphicsTemplateOutcomeCallable CreateAnimatedGraphicsTemplateCallable(const Model::CreateAnimatedGraphicsTemplateRequest& request);

                /**
                 ** This API is used to categorize media assets for management;
* It does not affect the categories of existing media assets. If you want to modify the category of a media asset, call the [ModifyMediaInfo](/document/product/266/31762) API.
* There can be up to 4 levels of categories.
* One category can have up to 500 subcategories under it.
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 *This API is used to create a custom video content audit template. Up to 50 templates can be created.
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *This API is used to create a custom image sprite generating template. Up to 16 templates can be created.
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *This API is used to create a figure sample for video processing operations such as content recognition and audit using the face recognition technology.
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *This API is used to create a custom task flow template. Up to 50 templates can be created.
                 * @param req CreateProcedureTemplateRequest
                 * @return CreateProcedureTemplateOutcome
                 */
                CreateProcedureTemplateOutcome CreateProcedureTemplate(const Model::CreateProcedureTemplateRequest &request);
                void CreateProcedureTemplateAsync(const Model::CreateProcedureTemplateRequest& request, const CreateProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcedureTemplateOutcomeCallable CreateProcedureTemplateCallable(const Model::CreateProcedureTemplateRequest& request);

                /**
                 *This API is used to create a custom sampled screencapturing template. Up to 16 templates can be created.
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to create a custom time point screencapturing template. Up to 16 templates can be created.
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to create a VOD subapplication.
                 * @param req CreateSubAppIdRequest
                 * @return CreateSubAppIdOutcome
                 */
                CreateSubAppIdOutcome CreateSubAppId(const Model::CreateSubAppIdRequest &request);
                void CreateSubAppIdAsync(const Model::CreateSubAppIdRequest& request, const CreateSubAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubAppIdOutcomeCallable CreateSubAppIdCallable(const Model::CreateSubAppIdRequest& request);

                /**
                 *This API is used to create a superplayer configuration. Up to 100 configurations can be created.
                 * @param req CreateSuperPlayerConfigRequest
                 * @return CreateSuperPlayerConfigOutcome
                 */
                CreateSuperPlayerConfigOutcome CreateSuperPlayerConfig(const Model::CreateSuperPlayerConfigRequest &request);
                void CreateSuperPlayerConfigAsync(const Model::CreateSuperPlayerConfigRequest& request, const CreateSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSuperPlayerConfigOutcomeCallable CreateSuperPlayerConfigCallable(const Model::CreateSuperPlayerConfigRequest& request);

                /**
                 *This API is used to create a custom transcoding template. Up to 100 templates can be created.
                 * @param req CreateTranscodeTemplateRequest
                 * @return CreateTranscodeTemplateOutcome
                 */
                CreateTranscodeTemplateOutcome CreateTranscodeTemplate(const Model::CreateTranscodeTemplateRequest &request);
                void CreateTranscodeTemplateAsync(const Model::CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeTemplateOutcomeCallable CreateTranscodeTemplateCallable(const Model::CreateTranscodeTemplateRequest& request);

                /**
                 *This API is used to create a custom watermarking template. Up to 1,000 templates can be created.
                 * @param req CreateWatermarkTemplateRequest
                 * @return CreateWatermarkTemplateOutcome
                 */
                CreateWatermarkTemplateOutcome CreateWatermarkTemplate(const Model::CreateWatermarkTemplateRequest &request);
                void CreateWatermarkTemplateAsync(const Model::CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkTemplateOutcomeCallable CreateWatermarkTemplateCallable(const Model::CreateWatermarkTemplateRequest& request);

                /**
                 *This API is used to create keyword samples in batches for video processing operations such as content recognition and audit by using the OCR and ASR technologies.
                 * @param req CreateWordSamplesRequest
                 * @return CreateWordSamplesOutcome
                 */
                CreateWordSamplesOutcome CreateWordSamples(const Model::CreateWordSamplesRequest &request);
                void CreateWordSamplesAsync(const Model::CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordSamplesOutcomeCallable CreateWordSamplesCallable(const Model::CreateWordSamplesRequest& request);

                /**
                 *This API is used to delete a custom video content analysis template.

Note: templates with an ID below 10000 are preset and cannot be deleted.
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to delete a custom video content recognition template.
                 * @param req DeleteAIRecognitionTemplateRequest
                 * @return DeleteAIRecognitionTemplateOutcome
                 */
                DeleteAIRecognitionTemplateOutcome DeleteAIRecognitionTemplate(const Model::DeleteAIRecognitionTemplateRequest &request);
                void DeleteAIRecognitionTemplateAsync(const Model::DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIRecognitionTemplateOutcomeCallable DeleteAIRecognitionTemplateCallable(const Model::DeleteAIRecognitionTemplateRequest& request);

                /**
                 *This API is used to delete an adaptive bitrate streaming template.
                 * @param req DeleteAdaptiveDynamicStreamingTemplateRequest
                 * @return DeleteAdaptiveDynamicStreamingTemplateOutcome
                 */
                DeleteAdaptiveDynamicStreamingTemplateOutcome DeleteAdaptiveDynamicStreamingTemplate(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest &request);
                void DeleteAdaptiveDynamicStreamingTemplateAsync(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable DeleteAdaptiveDynamicStreamingTemplateCallable(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *This API is used to delete a custom animated image generating template.
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 ** A category can be deleted only if it has no subcategories and associated media files;
* Otherwise, [delete the media files](/document/product/266/31764) and subcategories first before deleting the category.
                 * @param req DeleteClassRequest
                 * @return DeleteClassOutcome
                 */
                DeleteClassOutcome DeleteClass(const Model::DeleteClassRequest &request);
                void DeleteClassAsync(const Model::DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClassOutcomeCallable DeleteClassCallable(const Model::DeleteClassRequest& request);

                /**
                 *This API is used to delete a custom video content audit template.
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *This API is used to delete an image sprite generating template.
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 ** This API is used to delete a media file and its corresponding files generated by video processing (such as transcoded videos, image sprites, screenshots, and videos published on WeChat);
* The transcoded video files or video files published on WeChat can be deleted separately for a specified video ID.
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *This API is used to delete a figure sample based on figure ID.
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *This API is used to delete a custom task flow template.  
                 * @param req DeleteProcedureTemplateRequest
                 * @return DeleteProcedureTemplateOutcome
                 */
                DeleteProcedureTemplateOutcome DeleteProcedureTemplate(const Model::DeleteProcedureTemplateRequest &request);
                void DeleteProcedureTemplateAsync(const Model::DeleteProcedureTemplateRequest& request, const DeleteProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcedureTemplateOutcomeCallable DeleteProcedureTemplateCallable(const Model::DeleteProcedureTemplateRequest& request);

                /**
                 *This API is used to delete a custom sampled screencapturing template.
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to delete a custom time point screencapturing template.
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to delete a superplayer configuration.  
*Note: preset player configurations cannot be deleted.*
                 * @param req DeleteSuperPlayerConfigRequest
                 * @return DeleteSuperPlayerConfigOutcome
                 */
                DeleteSuperPlayerConfigOutcome DeleteSuperPlayerConfig(const Model::DeleteSuperPlayerConfigRequest &request);
                void DeleteSuperPlayerConfigAsync(const Model::DeleteSuperPlayerConfigRequest& request, const DeleteSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSuperPlayerConfigOutcomeCallable DeleteSuperPlayerConfigCallable(const Model::DeleteSuperPlayerConfigRequest& request);

                /**
                 *This API is used to delete a custom transcoding template.
                 * @param req DeleteTranscodeTemplateRequest
                 * @return DeleteTranscodeTemplateOutcome
                 */
                DeleteTranscodeTemplateOutcome DeleteTranscodeTemplate(const Model::DeleteTranscodeTemplateRequest &request);
                void DeleteTranscodeTemplateAsync(const Model::DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTranscodeTemplateOutcomeCallable DeleteTranscodeTemplateCallable(const Model::DeleteTranscodeTemplateRequest& request);

                /**
                 *This API is used to delete a custom watermarking template.
                 * @param req DeleteWatermarkTemplateRequest
                 * @return DeleteWatermarkTemplateOutcome
                 */
                DeleteWatermarkTemplateOutcome DeleteWatermarkTemplate(const Model::DeleteWatermarkTemplateRequest &request);
                void DeleteWatermarkTemplateAsync(const Model::DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWatermarkTemplateOutcomeCallable DeleteWatermarkTemplateCallable(const Model::DeleteWatermarkTemplateRequest& request);

                /**
                 *This API is used to delete keyword samples in batches.
                 * @param req DeleteWordSamplesRequest
                 * @return DeleteWordSamplesOutcome
                 */
                DeleteWordSamplesOutcome DeleteWordSamples(const Model::DeleteWordSamplesRequest &request);
                void DeleteWordSamplesAsync(const Model::DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWordSamplesOutcomeCallable DeleteWordSamplesCallable(const Model::DeleteWordSamplesRequest& request);

                /**
                 *This API is used to get the list of video content analysis templates based on unique template ID. The returned result includes all eligible custom and [preset video content analysis templates](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.88.86.E6.9E.90.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *This API is used to get the list of video content recognition templates based on unique template ID. The return result includes all eligible custom and [preset video content recognition templates](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E8.AF.86.E5.88.AB.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeAIRecognitionTemplatesRequest
                 * @return DescribeAIRecognitionTemplatesOutcome
                 */
                DescribeAIRecognitionTemplatesOutcome DescribeAIRecognitionTemplates(const Model::DescribeAIRecognitionTemplatesRequest &request);
                void DescribeAIRecognitionTemplatesAsync(const Model::DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIRecognitionTemplatesOutcomeCallable DescribeAIRecognitionTemplatesCallable(const Model::DescribeAIRecognitionTemplatesRequest& request);

                /**
                 *This API is used to query the list of transcoding to adaptive bitrate streaming templates and supports paged queries by filters.
                 * @param req DescribeAdaptiveDynamicStreamingTemplatesRequest
                 * @return DescribeAdaptiveDynamicStreamingTemplatesOutcome
                 */
                DescribeAdaptiveDynamicStreamingTemplatesOutcome DescribeAdaptiveDynamicStreamingTemplates(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest &request);
                void DescribeAdaptiveDynamicStreamingTemplatesAsync(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable DescribeAdaptiveDynamicStreamingTemplatesCallable(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request);

                /**
                 ** This API is used to get the information of all categories.
                 * @param req DescribeAllClassRequest
                 * @return DescribeAllClassOutcome
                 */
                DescribeAllClassOutcome DescribeAllClass(const Model::DescribeAllClassRequest &request);
                void DescribeAllClassAsync(const Model::DescribeAllClassRequest& request, const DescribeAllClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllClassOutcomeCallable DescribeAllClassCallable(const Model::DescribeAllClassRequest& request);

                /**
                 *This API is used to query the list of animated image generating templates and supports paged queries by filters.
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *This API is used to query the CDN statistics of VOD such as traffic and bandwidth.
   1. Only CDN usage data for the last 365 days can be queried.
   2. The query time range cannot be more than 90 days.
   3. The time granularity of usage data can be specified, including 5-minute, 1-hour, and 1-day.
   4. Traffic refers to the total traffic within the query time granularity, while bandwidth the peak bandwidth.
                 * @param req DescribeCDNUsageDataRequest
                 * @return DescribeCDNUsageDataOutcome
                 */
                DescribeCDNUsageDataOutcome DescribeCDNUsageData(const Model::DescribeCDNUsageDataRequest &request);
                void DescribeCDNUsageDataAsync(const Model::DescribeCDNUsageDataRequest& request, const DescribeCDNUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNUsageDataOutcomeCallable DescribeCDNUsageDataCallable(const Model::DescribeCDNUsageDataRequest& request);

                /**
                 *This API is used to get the list of video content audit templates based on unique template ID. The return result includes all eligible custom and [preset video content audit templates](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *This API is used to query the list of image sprite generating templates and supports paged queries by filters.
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *1. This API can get multiple types of information of multiple media files, including:
    1. Basic information (basicInfo): media name, category, playback address, cover image, etc.
    2. Metadata (metaData): size, duration, video stream information, audio stream information, etc.
    3. Information of the transcoding result (transcodeInfo): addresses, video stream parameters, and audio stream parameters of the media files with various specifications generated by transcoding a media file.
    4. Information of the animated image generating result (animatedGraphicsInfo): information of an animated image (such as .gif) generated from a video.
    5. Information of a sampled screenshot (sampleSnapshotInfo): information of a sampled screenshot of a video.
    6. Information of an image sprite (imageSpriteInfo): information of an image sprite generated from a video.
    7. Information of a time point screenshot (snapshotByTimeOffsetInfo): information of a time point screenshot of a video.
    8. Information of a timestamp (keyFrameDescInfo): information of a timestamp set for a video.
    9. Information of transcoding to adaptive bitrate streaming (adaptiveDynamicStreamingInfo): specification, encryption type, container format, etc.
2. The return packet can be configured to only contain certain information.
                 * @param req DescribeMediaInfosRequest
                 * @return DescribeMediaInfosOutcome
                 */
                DescribeMediaInfosOutcome DescribeMediaInfos(const Model::DescribeMediaInfosRequest &request);
                void DescribeMediaInfosAsync(const Model::DescribeMediaInfosRequest& request, const DescribeMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaInfosOutcomeCallable DescribeMediaInfosCallable(const Model::DescribeMediaInfosRequest& request);

                /**
                 *This API is used to query the information of video processing usage within the specified time range.
   1. Statistics on video processing for the last 365 days can be queried.
   2. The query time range cannot be more than 90 days.
                 * @param req DescribeMediaProcessUsageDataRequest
                 * @return DescribeMediaProcessUsageDataOutcome
                 */
                DescribeMediaProcessUsageDataOutcome DescribeMediaProcessUsageData(const Model::DescribeMediaProcessUsageDataRequest &request);
                void DescribeMediaProcessUsageDataAsync(const Model::DescribeMediaProcessUsageDataRequest& request, const DescribeMediaProcessUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaProcessUsageDataOutcomeCallable DescribeMediaProcessUsageDataCallable(const Model::DescribeMediaProcessUsageDataRequest& request);

                /**
                 *This API is used to query the information of figure samples and supports paginated queries by figure ID, name, and tag.
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *This API is used to get the list of task flow template details by task flow template name.
                 * @param req DescribeProcedureTemplatesRequest
                 * @return DescribeProcedureTemplatesOutcome
                 */
                DescribeProcedureTemplatesOutcome DescribeProcedureTemplates(const Model::DescribeProcedureTemplatesRequest &request);
                void DescribeProcedureTemplatesAsync(const Model::DescribeProcedureTemplatesRequest& request, const DescribeProcedureTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcedureTemplatesOutcomeCallable DescribeProcedureTemplatesCallable(const Model::DescribeProcedureTemplatesRequest& request);

                /**
                 *This API is used to query the length of audited video content in seconds per day within the specified time range.

1. Statistics on the length of audited video content for the last 365 days can be queried.
2. The query time range cannot be more than 90 days.
                 * @param req DescribeReviewDetailsRequest
                 * @return DescribeReviewDetailsOutcome
                 */
                DescribeReviewDetailsOutcome DescribeReviewDetails(const Model::DescribeReviewDetailsRequest &request);
                void DescribeReviewDetailsAsync(const Model::DescribeReviewDetailsRequest& request, const DescribeReviewDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewDetailsOutcomeCallable DescribeReviewDetailsCallable(const Model::DescribeReviewDetailsRequest& request);

                /**
                 *This API is used to query the list of sampled screencapturing templates and supports paged queries by filters.
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *This API is used to query the list of time point screencapturing templates and supports paged queries by filters.
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *This API is used to query the storage capacity usage and number of files.
                 * @param req DescribeStorageDataRequest
                 * @return DescribeStorageDataOutcome
                 */
                DescribeStorageDataOutcome DescribeStorageData(const Model::DescribeStorageDataRequest &request);
                void DescribeStorageDataAsync(const Model::DescribeStorageDataRequest& request, const DescribeStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDataOutcomeCallable DescribeStorageDataCallable(const Model::DescribeStorageDataRequest& request);

                /**
                 *This API is used to query the used VOD storage capacity in bytes within the specified time range.
   1. Only storage capacity usage data for the last 365 days can be queried.
   2. The query time range cannot be more than 90 days;
   3. The query time range at the minute granularity cannot be more than 5 days;
   4. The query time range at the hour granularity cannot be more than 10 days.
                 * @param req DescribeStorageDetailsRequest
                 * @return DescribeStorageDetailsOutcome
                 */
                DescribeStorageDetailsOutcome DescribeStorageDetails(const Model::DescribeStorageDetailsRequest &request);
                void DescribeStorageDetailsAsync(const Model::DescribeStorageDetailsRequest& request, const DescribeStorageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDetailsOutcomeCallable DescribeStorageDetailsCallable(const Model::DescribeStorageDetailsRequest& request);

                /**
                 *This API is used to get the list of subapplications to which the current account has permissions, including primary applications. If the subapplication feature has not been enabled, this API will return. 
 `FailedOperation`.
                 * @param req DescribeSubAppIdsRequest
                 * @return DescribeSubAppIdsOutcome
                 */
                DescribeSubAppIdsOutcome DescribeSubAppIds(const Model::DescribeSubAppIdsRequest &request);
                void DescribeSubAppIdsAsync(const Model::DescribeSubAppIdsRequest& request, const DescribeSubAppIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAppIdsOutcomeCallable DescribeSubAppIdsCallable(const Model::DescribeSubAppIdsRequest& request);

                /**
                 *This API is used to query the list of superplayer configurations and supports paginated queries by filters.
                 * @param req DescribeSuperPlayerConfigsRequest
                 * @return DescribeSuperPlayerConfigsOutcome
                 */
                DescribeSuperPlayerConfigsOutcome DescribeSuperPlayerConfigs(const Model::DescribeSuperPlayerConfigsRequest &request);
                void DescribeSuperPlayerConfigsAsync(const Model::DescribeSuperPlayerConfigsRequest& request, const DescribeSuperPlayerConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuperPlayerConfigsOutcomeCallable DescribeSuperPlayerConfigsCallable(const Model::DescribeSuperPlayerConfigsRequest& request);

                /**
                 *This API is used to query the details of execution status and result of a task submitted in the last 3 days by task ID.
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** This API is used to query the task list;
* If there are many data entries in the list, one single call of the API may not be able to pull the entire list. The `ScrollToken` parameter can be used to pull the list in batches;
* Only tasks in the last three days (72 hours) can be queried.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API is used to get the list of transcoding templates based on unique template ID. The return result includes all eligible custom and [preset transcoding templates](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeTranscodeTemplatesRequest
                 * @return DescribeTranscodeTemplatesOutcome
                 */
                DescribeTranscodeTemplatesOutcome DescribeTranscodeTemplates(const Model::DescribeTranscodeTemplatesRequest &request);
                void DescribeTranscodeTemplatesAsync(const Model::DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTemplatesOutcomeCallable DescribeTranscodeTemplatesCallable(const Model::DescribeTranscodeTemplatesRequest& request);

                /**
                 *This API is used to query custom watermarking templates and supports paged queries by filters.
                 * @param req DescribeWatermarkTemplatesRequest
                 * @return DescribeWatermarkTemplatesOutcome
                 */
                DescribeWatermarkTemplatesOutcome DescribeWatermarkTemplates(const Model::DescribeWatermarkTemplatesRequest &request);
                void DescribeWatermarkTemplatesAsync(const Model::DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkTemplatesOutcomeCallable DescribeWatermarkTemplatesCallable(const Model::DescribeWatermarkTemplatesRequest& request);

                /**
                 *This API is used to perform paginated queries of keyword sample information by use case, keyword, and tag.
                 * @param req DescribeWordSamplesRequest
                 * @return DescribeWordSamplesOutcome
                 */
                DescribeWordSamplesOutcome DescribeWordSamples(const Model::DescribeWordSamplesRequest &request);
                void DescribeWordSamplesAsync(const Model::DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordSamplesOutcomeCallable DescribeWordSamplesCallable(const Model::DescribeWordSamplesRequest& request);

                /**
                 *This API is used to edit a video (by clipping, splicing, etc.) to generate a new VOD video. Editing features include:

1. Clipping a file in VOD to generate a new video;
2. Splicing multiple files in VOD to generate a new video;
3. Clipping multiple files in VOD and then splicing the clips to generate a new video;
4. Directly generating a new video from a stream in VOD;
5. Clipping a stream in VOD to generate a new video;
6. Splicing multiple streams in VOD to generate a new video;
7. Clipping multiple streams in VOD and then splicing the clips to generate a new video.

You can also specify whether to perform a task flow for the generated new video.
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *This API is only used in special scenarios of custom development. Unless requested by VOD customer service, please do not call it.
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 ** After a media file is forbidden, except previewing it in the VOD Console, accessing the URLs of its various resources (such as source file, output files, and screenshots) in other scenarios will return error 403.
  It takes about 5-10 minutes for a forbidding/unblocking operation to take effect across the entire network.
                 * @param req ForbidMediaDistributionRequest
                 * @return ForbidMediaDistributionOutcome
                 */
                ForbidMediaDistributionOutcome ForbidMediaDistribution(const Model::ForbidMediaDistributionRequest &request);
                void ForbidMediaDistributionAsync(const Model::ForbidMediaDistributionRequest& request, const ForbidMediaDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidMediaDistributionOutcomeCallable ForbidMediaDistributionCallable(const Model::ForbidMediaDistributionRequest& request);

                /**
                 *Live clipping means that during a live broadcast (before it ends), you can select a segment of previous live broadcast content to generate a new video (in HLS format) in real time and share it immediately or store it persistently.

VOD supports two live clipping modes:
- Persistent clipping: in this mode, the clipped video is saved as an independent video file with a `FileId`, which is suitable for **persistently storing** highlights;
- Temporary clipping: in this mode, the clipped video is part of the LVB recording file with no `FileId`, which is suitable for **temporarily sharing** highlights;

Note:
- The live clipping feature can be used only when [time shifting](https://cloud.tencent.com/document/product/267/32742) has been enabled for the target live stream.
- Live clipping is performed based on the m3u8 file generated by LVB recording, so its minimum clipping granularity is one ts segment rather than at or below the second level.


### Persistent clipping
In persistent clipping mode, the clipped video is saved as an independent video file with a `FileId`, and its lifecycle is not subject to the source LVB recording video (even if the source video is deleted, the clipped video will not be affected in any way). It can be further processed (transcoded, published on WeChat, etc.).

An example is as follows: for a complete football match, the source LVB recording video may be up to 2 hours in length. You want to store this video for only 2 months for the purpose of cost savings. However, you want to specify a longer retention period for the "highlights" video created by live clipping and perform additional VOD operations on it such as transcoding and release on WeChat. In this case, you need to choose the persistent clipping mode of live clipping.

The advantage of persistent clipping is that the clipped video has a lifecycle independent of the source recording video and can be managed independently and stored persistently.

### Temporary clipping
In temporary clipping mode, the clipped video (m3u8 file) shares the same ts segments with the LVB recording video instead of being an independent video. It only has a playback URL but has no `FileId`, and its validity period is the same as that of the LVB recording video; therefore, if the LVB recording video is deleted, it cannot be played back.

For temporary clipping, as the clipping result is not an independent video, it will not be included in VOD's media asset management (for example, it will not be counted in the total videos in the console), and no video processing operations can be separately performed on it, such as transcoding and release on WeChat.

The advantage of temporary clipping is that the clipping operation is very "lightweight" and does not incur additional storage fees. However, the clipped video has the same lifecycle as the source recording video and cannot be further transcoded or processed.
                 * @param req LiveRealTimeClipRequest
                 * @return LiveRealTimeClipOutcome
                 */
                LiveRealTimeClipOutcome LiveRealTimeClip(const Model::LiveRealTimeClipRequest &request);
                void LiveRealTimeClipAsync(const Model::LiveRealTimeClipRequest& request, const LiveRealTimeClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LiveRealTimeClipOutcomeCallable LiveRealTimeClipCallable(const Model::LiveRealTimeClipRequest& request);

                /**
                 *This API is used to modify a custom video content analysis template.

Note: templates with an ID below 10000 are preset and cannot be modified.
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to modify a custom video content recognition template.
                 * @param req ModifyAIRecognitionTemplateRequest
                 * @return ModifyAIRecognitionTemplateOutcome
                 */
                ModifyAIRecognitionTemplateOutcome ModifyAIRecognitionTemplate(const Model::ModifyAIRecognitionTemplateRequest &request);
                void ModifyAIRecognitionTemplateAsync(const Model::ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIRecognitionTemplateOutcomeCallable ModifyAIRecognitionTemplateCallable(const Model::ModifyAIRecognitionTemplateRequest& request);

                /**
                 *This API is used to modify an adaptive bitrate streaming template.
                 * @param req ModifyAdaptiveDynamicStreamingTemplateRequest
                 * @return ModifyAdaptiveDynamicStreamingTemplateOutcome
                 */
                ModifyAdaptiveDynamicStreamingTemplateOutcome ModifyAdaptiveDynamicStreamingTemplate(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest &request);
                void ModifyAdaptiveDynamicStreamingTemplateAsync(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable ModifyAdaptiveDynamicStreamingTemplateCallable(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *This API is used to modify a custom animated image generating template.
                 * @param req ModifyAnimatedGraphicsTemplateRequest
                 * @return ModifyAnimatedGraphicsTemplateOutcome
                 */
                ModifyAnimatedGraphicsTemplateOutcome ModifyAnimatedGraphicsTemplate(const Model::ModifyAnimatedGraphicsTemplateRequest &request);
                void ModifyAnimatedGraphicsTemplateAsync(const Model::ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAnimatedGraphicsTemplateOutcomeCallable ModifyAnimatedGraphicsTemplateCallable(const Model::ModifyAnimatedGraphicsTemplateRequest& request);

                /**
                 *This API is used to modify the category of a media file.
                 * @param req ModifyClassRequest
                 * @return ModifyClassOutcome
                 */
                ModifyClassOutcome ModifyClass(const Model::ModifyClassRequest &request);
                void ModifyClassAsync(const Model::ModifyClassRequest& request, const ModifyClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClassOutcomeCallable ModifyClassCallable(const Model::ModifyClassRequest& request);

                /**
                 *This API is used to modify a custom video content audit template.
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *This API is used to modify a custom image sprite generating template.
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *This API is used to modify the attributes of a media file, including category, name, description, tag, expiration time, timestamp information, and video cover.
                 * @param req ModifyMediaInfoRequest
                 * @return ModifyMediaInfoOutcome
                 */
                ModifyMediaInfoOutcome ModifyMediaInfo(const Model::ModifyMediaInfoRequest &request);
                void ModifyMediaInfoAsync(const Model::ModifyMediaInfoRequest& request, const ModifyMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaInfoOutcomeCallable ModifyMediaInfoCallable(const Model::ModifyMediaInfoRequest& request);

                /**
                 *This API is used to modify figure sample information based on figure ID, such as modifying the name and description and adding/deleting/resetting a face or tag. There should be at least one image left after the face deletion operation; otherwise, please use the reset operation.
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *This API is used to modify a custom sampled screencapturing template.
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to modify a custom time point screencapturing template.
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to modify subapplication information, but it is not allowed to modify primary application information.
                 * @param req ModifySubAppIdInfoRequest
                 * @return ModifySubAppIdInfoOutcome
                 */
                ModifySubAppIdInfoOutcome ModifySubAppIdInfo(const Model::ModifySubAppIdInfoRequest &request);
                void ModifySubAppIdInfoAsync(const Model::ModifySubAppIdInfoRequest& request, const ModifySubAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdInfoOutcomeCallable ModifySubAppIdInfoCallable(const Model::ModifySubAppIdInfoRequest& request);

                /**
                 *This API is used to enable/disable a subapplication. After a subapplication is disabled, its corresponding domain name will be blocked and its access to the console will be restricted.
                 * @param req ModifySubAppIdStatusRequest
                 * @return ModifySubAppIdStatusOutcome
                 */
                ModifySubAppIdStatusOutcome ModifySubAppIdStatus(const Model::ModifySubAppIdStatusRequest &request);
                void ModifySubAppIdStatusAsync(const Model::ModifySubAppIdStatusRequest& request, const ModifySubAppIdStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdStatusOutcomeCallable ModifySubAppIdStatusCallable(const Model::ModifySubAppIdStatusRequest& request);

                /**
                 *This API is used to modify a superplayer configuration.
                 * @param req ModifySuperPlayerConfigRequest
                 * @return ModifySuperPlayerConfigOutcome
                 */
                ModifySuperPlayerConfigOutcome ModifySuperPlayerConfig(const Model::ModifySuperPlayerConfigRequest &request);
                void ModifySuperPlayerConfigAsync(const Model::ModifySuperPlayerConfigRequest& request, const ModifySuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySuperPlayerConfigOutcomeCallable ModifySuperPlayerConfigCallable(const Model::ModifySuperPlayerConfigRequest& request);

                /**
                 *This API is used to modify a custom transcoding template.
                 * @param req ModifyTranscodeTemplateRequest
                 * @return ModifyTranscodeTemplateOutcome
                 */
                ModifyTranscodeTemplateOutcome ModifyTranscodeTemplate(const Model::ModifyTranscodeTemplateRequest &request);
                void ModifyTranscodeTemplateAsync(const Model::ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTranscodeTemplateOutcomeCallable ModifyTranscodeTemplateCallable(const Model::ModifyTranscodeTemplateRequest& request);

                /**
                 *This API is used to modify a custom watermarking template. The watermark type cannot be modified.
                 * @param req ModifyWatermarkTemplateRequest
                 * @return ModifyWatermarkTemplateOutcome
                 */
                ModifyWatermarkTemplateOutcome ModifyWatermarkTemplate(const Model::ModifyWatermarkTemplateRequest &request);
                void ModifyWatermarkTemplateAsync(const Model::ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWatermarkTemplateOutcomeCallable ModifyWatermarkTemplateCallable(const Model::ModifyWatermarkTemplateRequest& request);

                /**
                 *This API is used to modify the use case and tag of a keyword. The keyword itself cannot be modified, but you can delete it and create another one if needed.
                 * @param req ModifyWordSampleRequest
                 * @return ModifyWordSampleOutcome
                 */
                ModifyWordSampleOutcome ModifyWordSample(const Model::ModifyWordSampleRequest &request);
                void ModifyWordSampleAsync(const Model::ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWordSampleOutcomeCallable ModifyWordSampleCallable(const Model::ModifyWordSampleRequest& request);

                /**
                 *This API is used to parse the index file content and return the list of segment files to be uploaded when an HLS video is uploaded. A segment file path must be a relative path of the current directory or subdirectory instead of a URL or absolute path.
                 * @param req ParseStreamingManifestRequest
                 * @return ParseStreamingManifestOutcome
                 */
                ParseStreamingManifestOutcome ParseStreamingManifest(const Model::ParseStreamingManifestRequest &request);
                void ParseStreamingManifestAsync(const Model::ParseStreamingManifestRequest& request, const ParseStreamingManifestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseStreamingManifestOutcomeCallable ParseStreamingManifestCallable(const Model::ParseStreamingManifestRequest& request);

                /**
                 *This API is used to initiate a processing task for an audio/video media file in VOD, including:
1. Video transcoding (with watermark);
2. Animated image generating;
3. Time point screencapturing;
4. Sampled screencapturing;
5. Image sprite generating;
6. Cover generating by screencapturing;
7. Adaptive bitrate streaming (with encryption);
8. Intelligent content audit (detection of porn, terrorism, and politically sensitive information);
9. Intelligent content analysis (tag, category, cover, and frame-specific tag);
10. Intelligent content recognition (opening and closing credits, face, full text, text keyword, full speech, speech keyword, and object).
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *This API is used to initiate a processing task for a VOD video with a task flow template.
There are two ways to create a task flow template:
1. Create and modify a task flow template in the console;
2. Create a task flow template through the task flow template API.
                 * @param req ProcessMediaByProcedureRequest
                 * @return ProcessMediaByProcedureOutcome
                 */
                ProcessMediaByProcedureOutcome ProcessMediaByProcedure(const Model::ProcessMediaByProcedureRequest &request);
                void ProcessMediaByProcedureAsync(const Model::ProcessMediaByProcedureRequest& request, const ProcessMediaByProcedureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByProcedureOutcomeCallable ProcessMediaByProcedureCallable(const Model::ProcessMediaByProcedureRequest& request);

                /**
                 *This API is used to initiate a processing task for an audio/video media file from a URL, including:

1. Intelligent content audit (detection of porn, terrorism, and politically sensitive information);
2. Intelligent content analysis (tag, category, cover, and frame-specific tag);
3. Intelligent content recognition (opening and closing credits, face, full text, text keyword, full speech, speech keyword, and object).

If the event notification is used, its type is [Task Flow Status Change](https://cloud.tencent.com/document/product/266/9636).
                 * @param req ProcessMediaByUrlRequest
                 * @return ProcessMediaByUrlOutcome
                 */
                ProcessMediaByUrlOutcome ProcessMediaByUrl(const Model::ProcessMediaByUrlRequest &request);
                void ProcessMediaByUrlAsync(const Model::ProcessMediaByUrlRequest& request, const ProcessMediaByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByUrlOutcomeCallable ProcessMediaByUrlCallable(const Model::ProcessMediaByUrlRequest& request);

                /**
                 ** This API is used to get event notifications from the business server through [reliable callback](https://cloud.tencent.com/document/product/266/33779#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83);
* The API is in long polling mode, i.e., if there is an unconsumed event on the server, it will be immediately returned to the requester; otherwise, the backend will suspend the request until a new event is generated;
* The request can be suspended for 5 seconds at most. It is recommended that the requester set the timeout period to 10 seconds.
* If the API returns an event, the caller must call the [ConfirmEvents](https://cloud.tencent.com/document/product/266/33434) API within <font color="red">30 seconds</font> to confirm that the event notification has been processed; otherwise, the event notification will be pulled again after <font color="red">30 seconds</font>.
                 * @param req PullEventsRequest
                 * @return PullEventsOutcome
                 */
                PullEventsOutcome PullEvents(const Model::PullEventsRequest &request);
                void PullEventsAsync(const Model::PullEventsRequest& request, const PullEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullEventsOutcomeCallable PullEventsCallable(const Model::PullEventsRequest& request);

                /**
                 *This API is used to pull a video on the internet to the VOD platform.
                 * @param req PullUploadRequest
                 * @return PullUploadOutcome
                 */
                PullUploadOutcome PullUpload(const Model::PullUploadRequest &request);
                void PullUploadAsync(const Model::PullUploadRequest& request, const PullUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullUploadOutcomeCallable PullUploadCallable(const Model::PullUploadRequest& request);

                /**
                 *1. This API is used to prefetch a list of specified URLs.
2. The URL domain names must have already been registered with VOD.
3. Up to 20 URLs can be specified in one request.
                 * @param req PushUrlCacheRequest
                 * @return PushUrlCacheOutcome
                 */
                PushUrlCacheOutcome PushUrlCache(const Model::PushUrlCacheRequest &request);
                void PushUrlCacheAsync(const Model::PushUrlCacheRequest& request, const PushUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlCacheOutcomeCallable PushUrlCacheCallable(const Model::PushUrlCacheRequest& request);

                /**
                 *This API is used to reset a custom task flow template.  
                 * @param req ResetProcedureTemplateRequest
                 * @return ResetProcedureTemplateOutcome
                 */
                ResetProcedureTemplateOutcome ResetProcedureTemplate(const Model::ResetProcedureTemplateRequest &request);
                void ResetProcedureTemplateAsync(const Model::ResetProcedureTemplateRequest& request, const ResetProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetProcedureTemplateOutcomeCallable ResetProcedureTemplateCallable(const Model::ResetProcedureTemplateRequest& request);

                /**
                 *This API is used to search for media information and supports filtering and sorting the returned results in many ways. It can:
- Fuzzily search by media file name or description.
- Retrieve media files by category and tag.
    - Specify the `ClassIds` category set (please see the input parameters) and return the media files in any category in the set. For example, assuming that there are categories of Movies, TV Series, and Variety Shows, and there are subcategories of History, Action, and Romance in the category of Movies, if Movies and TV Series are specified in `ClassIds`, then all the subcategories under Movies and TV Series will be returned; however, if History and Action are specified in `ClassIds`, only the media files in those two subcategories will be returned.
    - Specify the `Tags` tag set (please see the input parameters) and return the media files with any tag in the set. For example, assuming that there are tags of ACG, Drama, and YTPMV, if ACG and YTPMV are specified in Tags, then any media files with either tag will be retrieved.
- Filter media files from a specified source (`Source`) (please see the input parameters).
- Filter LVB recording media files by LVB push code and `Vid` (please see the input parameters).
- Filter media files by the creation time range.
- Mix and match any filters above to retrieve the media files that meet all the specified criteria. For example, you can filter the media files with the tag of "Drama" in the category of "Movies" created between December 1, 2018 and December 8, 2018.
- Sort the results and return them in multiple pages by specifying `Offset` and `Limit` (please see the input parameters).

<div id="maxResultsDesc">Upper limit of returned results:</div>
- The <b><a href="#p_offset">Offset</a> and <a href="#p_limit">Limit</a> parameters determine the number of search results on one single page. Note: if both of them use the default value, this API will return up to 10 results.</b>
- <b>Up to 5,000 search results can be returned, and excessive ones will not be displayed. If there are too many search results, you are recommended to use more specified filters to narrow down the search results.</b>
                 * @param req SearchMediaRequest
                 * @return SearchMediaOutcome
                 */
                SearchMediaOutcome SearchMedia(const Model::SearchMediaRequest &request);
                void SearchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaOutcomeCallable SearchMediaCallable(const Model::SearchMediaRequest& request);

                /**
                 *This API is used to clip an HLS video by time period.

Note: the clipped video shares the same ts segments with the source video, and only a new m3u8 file will be generated. Deleting the source video will also delete the clipped video.
                 * @param req SimpleHlsClipRequest
                 * @return SimpleHlsClipOutcome
                 */
                SimpleHlsClipOutcome SimpleHlsClip(const Model::SimpleHlsClipRequest &request);
                void SimpleHlsClipAsync(const Model::SimpleHlsClipRequest& request, const SimpleHlsClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimpleHlsClipOutcomeCallable SimpleHlsClipCallable(const Model::SimpleHlsClipRequest& request);

                /**
                 *This API is used to publish a VOD video on WeChat Mini Program for playback in the WeChat Mini Program player.
                 * @param req WeChatMiniProgramPublishRequest
                 * @return WeChatMiniProgramPublishOutcome
                 */
                WeChatMiniProgramPublishOutcome WeChatMiniProgramPublish(const Model::WeChatMiniProgramPublishRequest &request);
                void WeChatMiniProgramPublishAsync(const Model::WeChatMiniProgramPublishRequest& request, const WeChatMiniProgramPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WeChatMiniProgramPublishOutcomeCallable WeChatMiniProgramPublishCallable(const Model::WeChatMiniProgramPublishRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_
