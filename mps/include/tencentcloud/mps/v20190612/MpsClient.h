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

#ifndef TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
#define TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mps/v20190612/model/BatchProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/BatchProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreatePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/CreateWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeletePersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DeleteWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIAnalysisTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAIRecognitionTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAdaptiveDynamicStreamingTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeBatchTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeBatchTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeImageTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeLiveRecordTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeLiveRecordTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeMediaMetaDataResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeQualityControlTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeQualityControlTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSchedulesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartSubtitleTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSmartSubtitleTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkSecurityGroupRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkSecurityGroupResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTasksResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsRequest.h>
#include <tencentcloud/mps/v20190612/model/DescribeWorkflowsResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/DisableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/EditMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/EditMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/EnableWorkflowResponse.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionRequest.h>
#include <tencentcloud/mps/v20190612/model/ExecuteFunctionResponse.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskRequest.h>
#include <tencentcloud/mps/v20190612/model/ManageTaskResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyAsrHotwordsRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyAsrHotwordsResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyLiveRecordTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyLiveRecordTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyQualityControlTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyQualityControlTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyScheduleResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartSubtitleTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySmartSubtitleTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleRequest.h>
#include <tencentcloud/mps/v20190612/model/ModifyWordSampleResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseLiveStreamProcessNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationRequest.h>
#include <tencentcloud/mps/v20190612/model/ParseNotificationResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessImageRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessImageResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamResponse.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaRequest.h>
#include <tencentcloud/mps/v20190612/model/ProcessMediaResponse.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowRequest.h>
#include <tencentcloud/mps/v20190612/model/ResetWorkflowResponse.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            class MpsClient : public AbstractClient
            {
            public:
                MpsClient(const Credential &credential, const std::string &region);
                MpsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchProcessMediaResponse> BatchProcessMediaOutcome;
                typedef std::future<BatchProcessMediaOutcome> BatchProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::BatchProcessMediaRequest&, BatchProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAsrHotwordsResponse> CreateAsrHotwordsOutcome;
                typedef std::future<CreateAsrHotwordsOutcome> CreateAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateAsrHotwordsRequest&, CreateAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLiveRecordTemplateResponse> CreateLiveRecordTemplateOutcome;
                typedef std::future<CreateLiveRecordTemplateOutcome> CreateLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateLiveRecordTemplateRequest&, CreateLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQualityControlTemplateResponse> CreateQualityControlTemplateOutcome;
                typedef std::future<CreateQualityControlTemplateOutcome> CreateQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateQualityControlTemplateRequest&, CreateQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduleResponse> CreateScheduleOutcome;
                typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateScheduleRequest&, CreateScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSmartSubtitleTemplateResponse> CreateSmartSubtitleTemplateOutcome;
                typedef std::future<CreateSmartSubtitleTemplateOutcome> CreateSmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSmartSubtitleTemplateRequest&, CreateSmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkflowResponse> CreateWorkflowOutcome;
                typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::CreateWorkflowRequest&, CreateWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAsrHotwordsResponse> DeleteAsrHotwordsOutcome;
                typedef std::future<DeleteAsrHotwordsOutcome> DeleteAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteAsrHotwordsRequest&, DeleteAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLiveRecordTemplateResponse> DeleteLiveRecordTemplateOutcome;
                typedef std::future<DeleteLiveRecordTemplateOutcome> DeleteLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteLiveRecordTemplateRequest&, DeleteLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQualityControlTemplateResponse> DeleteQualityControlTemplateOutcome;
                typedef std::future<DeleteQualityControlTemplateOutcome> DeleteQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteQualityControlTemplateRequest&, DeleteQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduleResponse> DeleteScheduleOutcome;
                typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteScheduleRequest&, DeleteScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmartSubtitleTemplateResponse> DeleteSmartSubtitleTemplateOutcome;
                typedef std::future<DeleteSmartSubtitleTemplateOutcome> DeleteSmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSmartSubtitleTemplateRequest&, DeleteSmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWorkflowResponse> DeleteWorkflowOutcome;
                typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DeleteWorkflowRequest&, DeleteWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsrHotwordsResponse> DescribeAsrHotwordsOutcome;
                typedef std::future<DescribeAsrHotwordsOutcome> DescribeAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAsrHotwordsRequest&, DescribeAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsrHotwordsListResponse> DescribeAsrHotwordsListOutcome;
                typedef std::future<DescribeAsrHotwordsListOutcome> DescribeAsrHotwordsListOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeAsrHotwordsListRequest&, DescribeAsrHotwordsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsrHotwordsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchTaskDetailResponse> DescribeBatchTaskDetailOutcome;
                typedef std::future<DescribeBatchTaskDetailOutcome> DescribeBatchTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeBatchTaskDetailRequest&, DescribeBatchTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageTaskDetailResponse> DescribeImageTaskDetailOutcome;
                typedef std::future<DescribeImageTaskDetailOutcome> DescribeImageTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeImageTaskDetailRequest&, DescribeImageTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLiveRecordTemplatesResponse> DescribeLiveRecordTemplatesOutcome;
                typedef std::future<DescribeLiveRecordTemplatesOutcome> DescribeLiveRecordTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeLiveRecordTemplatesRequest&, DescribeLiveRecordTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLiveRecordTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaMetaDataResponse> DescribeMediaMetaDataOutcome;
                typedef std::future<DescribeMediaMetaDataOutcome> DescribeMediaMetaDataOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeMediaMetaDataRequest&, DescribeMediaMetaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaMetaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityControlTemplatesResponse> DescribeQualityControlTemplatesOutcome;
                typedef std::future<DescribeQualityControlTemplatesOutcome> DescribeQualityControlTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeQualityControlTemplatesRequest&, DescribeQualityControlTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityControlTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSchedulesResponse> DescribeSchedulesOutcome;
                typedef std::future<DescribeSchedulesOutcome> DescribeSchedulesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSchedulesRequest&, DescribeSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmartSubtitleTemplatesResponse> DescribeSmartSubtitleTemplatesOutcome;
                typedef std::future<DescribeSmartSubtitleTemplatesOutcome> DescribeSmartSubtitleTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSmartSubtitleTemplatesRequest&, DescribeSmartSubtitleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartSubtitleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkSecurityGroupResponse> DescribeStreamLinkSecurityGroupOutcome;
                typedef std::future<DescribeStreamLinkSecurityGroupOutcome> DescribeStreamLinkSecurityGroupOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeStreamLinkSecurityGroupRequest&, DescribeStreamLinkSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkflowsResponse> DescribeWorkflowsOutcome;
                typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DescribeWorkflowsRequest&, DescribeWorkflowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableScheduleResponse> DisableScheduleOutcome;
                typedef std::future<DisableScheduleOutcome> DisableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableScheduleRequest&, DisableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableWorkflowResponse> DisableWorkflowOutcome;
                typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::DisableWorkflowRequest&, DisableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableScheduleResponse> EnableScheduleOutcome;
                typedef std::future<EnableScheduleOutcome> EnableScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableScheduleRequest&, EnableScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableWorkflowResponse> EnableWorkflowOutcome;
                typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::EnableWorkflowRequest&, EnableWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageTaskResponse> ManageTaskOutcome;
                typedef std::future<ManageTaskOutcome> ManageTaskOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ManageTaskRequest&, ManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAsrHotwordsResponse> ModifyAsrHotwordsOutcome;
                typedef std::future<ModifyAsrHotwordsOutcome> ModifyAsrHotwordsOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyAsrHotwordsRequest&, ModifyAsrHotwordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAsrHotwordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLiveRecordTemplateResponse> ModifyLiveRecordTemplateOutcome;
                typedef std::future<ModifyLiveRecordTemplateOutcome> ModifyLiveRecordTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyLiveRecordTemplateRequest&, ModifyLiveRecordTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLiveRecordTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQualityControlTemplateResponse> ModifyQualityControlTemplateOutcome;
                typedef std::future<ModifyQualityControlTemplateOutcome> ModifyQualityControlTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyQualityControlTemplateRequest&, ModifyQualityControlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQualityControlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduleResponse> ModifyScheduleOutcome;
                typedef std::future<ModifyScheduleOutcome> ModifyScheduleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyScheduleRequest&, ModifyScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmartSubtitleTemplateResponse> ModifySmartSubtitleTemplateOutcome;
                typedef std::future<ModifySmartSubtitleTemplateOutcome> ModifySmartSubtitleTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySmartSubtitleTemplateRequest&, ModifySmartSubtitleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartSubtitleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseLiveStreamProcessNotificationResponse> ParseLiveStreamProcessNotificationOutcome;
                typedef std::future<ParseLiveStreamProcessNotificationOutcome> ParseLiveStreamProcessNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseLiveStreamProcessNotificationRequest&, ParseLiveStreamProcessNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseLiveStreamProcessNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseNotificationResponse> ParseNotificationOutcome;
                typedef std::future<ParseNotificationOutcome> ParseNotificationOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ParseNotificationRequest&, ParseNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessImageResponse> ProcessImageOutcome;
                typedef std::future<ProcessImageOutcome> ProcessImageOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessImageRequest&, ProcessImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessLiveStreamResponse> ProcessLiveStreamOutcome;
                typedef std::future<ProcessLiveStreamOutcome> ProcessLiveStreamOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessLiveStreamRequest&, ProcessLiveStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessLiveStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetWorkflowResponse> ResetWorkflowOutcome;
                typedef std::future<ResetWorkflowOutcome> ResetWorkflowOutcomeCallable;
                typedef std::function<void(const MpsClient*, const Model::ResetWorkflowRequest&, ResetWorkflowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetWorkflowAsyncHandler;



                /**
                 *This API is used to initiate batch processing tasks for URL video links, with features including:
Smart subtitle (full speech, speech hotword, and speech translation)
                 * @param req BatchProcessMediaRequest
                 * @return BatchProcessMediaOutcome
                 */
                BatchProcessMediaOutcome BatchProcessMedia(const Model::BatchProcessMediaRequest &request);
                void BatchProcessMediaAsync(const Model::BatchProcessMediaRequest& request, const BatchProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchProcessMediaOutcomeCallable BatchProcessMediaCallable(const Model::BatchProcessMediaRequest& request);

                /**
                 *This API is used to create a custom content analysis template. Up to 50 templates can be created.
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to create a custom content recognition template. Up to 50 templates can be created.
                 * @param req CreateAIRecognitionTemplateRequest
                 * @return CreateAIRecognitionTemplateOutcome
                 */
                CreateAIRecognitionTemplateOutcome CreateAIRecognitionTemplate(const Model::CreateAIRecognitionTemplateRequest &request);
                void CreateAIRecognitionTemplateAsync(const Model::CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIRecognitionTemplateOutcomeCallable CreateAIRecognitionTemplateCallable(const Model::CreateAIRecognitionTemplateRequest& request);

                /**
                 *This API is used to create an adaptive bitrate streaming template. Up up to 100 such templates can be created.
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
                 *This API is used to create a smart subtitle hotword lexicon.
                 * @param req CreateAsrHotwordsRequest
                 * @return CreateAsrHotwordsOutcome
                 */
                CreateAsrHotwordsOutcome CreateAsrHotwords(const Model::CreateAsrHotwordsRequest &request);
                void CreateAsrHotwordsAsync(const Model::CreateAsrHotwordsRequest& request, const CreateAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsrHotwordsOutcomeCallable CreateAsrHotwordsCallable(const Model::CreateAsrHotwordsRequest& request);

                /**
                 *This API is used to create a custom content moderation template. Up to 50 templates can be created in total.
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
                 *This API is used to create a live recording template.
                 * @param req CreateLiveRecordTemplateRequest
                 * @return CreateLiveRecordTemplateOutcome
                 */
                CreateLiveRecordTemplateOutcome CreateLiveRecordTemplate(const Model::CreateLiveRecordTemplateRequest &request);
                void CreateLiveRecordTemplateAsync(const Model::CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLiveRecordTemplateOutcomeCallable CreateLiveRecordTemplateCallable(const Model::CreateLiveRecordTemplateRequest& request);

                /**
                 *This API is used to create image samples for video processing operations such as content recognition and inappropriate information detection with the help of technologies such as facial feature positioning.
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *This API is used to create a media quality inspection template. Up to 50 templates can be created.
                 * @param req CreateQualityControlTemplateRequest
                 * @return CreateQualityControlTemplateOutcome
                 */
                CreateQualityControlTemplateOutcome CreateQualityControlTemplate(const Model::CreateQualityControlTemplateRequest &request);
                void CreateQualityControlTemplateAsync(const Model::CreateQualityControlTemplateRequest& request, const CreateQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityControlTemplateOutcomeCallable CreateQualityControlTemplateCallable(const Model::CreateQualityControlTemplateRequest& request);

                /**
                 *This API is used to create a custom sampled screencapturing template. Up to 16 templates can be created.
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to create a scheme for media files uploaded to a specified COS bucket. A scheme may include the following tasks:
1. Video transcoding (with watermark)
2. Animated screenshot generating
3. Time point screencapturing
4. Sampled screencapturing
5. Image sprite generating
6. Adaptive bitrate streaming
7. Intelligent content moderation (detection of pornographic and sensitive content)
8. Intelligent content analysis (labeling, categorization, thumbnail generation, labeling by frame)
9. Intelligent content recognition (face, full text, text keyword, full speech, and speech keyword)

Note: A scheme is disabled upon creation. You need to manually enable it.
                 * @param req CreateScheduleRequest
                 * @return CreateScheduleOutcome
                 */
                CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest &request);
                void CreateScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduleOutcomeCallable CreateScheduleCallable(const Model::CreateScheduleRequest& request);

                /**
                 *This API is used to create a custom smart subtitle template.
                 * @param req CreateSmartSubtitleTemplateRequest
                 * @return CreateSmartSubtitleTemplateOutcome
                 */
                CreateSmartSubtitleTemplateOutcome CreateSmartSubtitleTemplate(const Model::CreateSmartSubtitleTemplateRequest &request);
                void CreateSmartSubtitleTemplateAsync(const Model::CreateSmartSubtitleTemplateRequest& request, const CreateSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSmartSubtitleTemplateOutcomeCallable CreateSmartSubtitleTemplateCallable(const Model::CreateSmartSubtitleTemplateRequest& request);

                /**
                 *This API is used to create a custom time point screencapturing template. Up to 16 templates can be created.
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to create a custom transcoding template. Up to 1,000 templates can be created.
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
                 *This API is used to create keyword samples in batches for video processing operations such as content recognition and inappropriate information detection with the help of the OCR and ASR technologies.
                 * @param req CreateWordSamplesRequest
                 * @return CreateWordSamplesOutcome
                 */
                CreateWordSamplesOutcome CreateWordSamples(const Model::CreateWordSamplesRequest &request);
                void CreateWordSamplesAsync(const Model::CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordSamplesOutcomeCallable CreateWordSamplesCallable(const Model::CreateWordSamplesRequest& request);

                /**
                 *This API is used to create a workflow for media files uploaded to a specified COS bucket. A workflow may include the following tasks:
1. Video transcoding (with watermark)
2. Animated image generating
3. Time point screencapturing
4. Sampled screencapturing
5. Image sprite generating
6. Adaptive bitrate streaming
7. Intelligent content moderation (detection of pornographic and sensitive content)
8. Intelligent content analysis (labeling, categorization, thumbnail generation, frame-specific labeling)
9. Intelligent content recognition (face, full text, text keyword, full speech, and speech keyword)

Note: A workflow is disabled upon creation. You need to manually enable it.
                 * @param req CreateWorkflowRequest
                 * @return CreateWorkflowOutcome
                 */
                CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest &request);
                void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request);

                /**
                 *This API is used to delete a custom content analysis template.

Note: templates with an ID below 10000 are preset and cannot be deleted.
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to delete a custom content recognition template.
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
                 *This API is used to delete a smart subtitle hotword lexicon.
                 * @param req DeleteAsrHotwordsRequest
                 * @return DeleteAsrHotwordsOutcome
                 */
                DeleteAsrHotwordsOutcome DeleteAsrHotwords(const Model::DeleteAsrHotwordsRequest &request);
                void DeleteAsrHotwordsAsync(const Model::DeleteAsrHotwordsRequest& request, const DeleteAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAsrHotwordsOutcomeCallable DeleteAsrHotwordsCallable(const Model::DeleteAsrHotwordsRequest& request);

                /**
                 *This API is used to delete a custom content moderation template.
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
                 *This API is used to delete a live recording template.
                 * @param req DeleteLiveRecordTemplateRequest
                 * @return DeleteLiveRecordTemplateOutcome
                 */
                DeleteLiveRecordTemplateOutcome DeleteLiveRecordTemplate(const Model::DeleteLiveRecordTemplateRequest &request);
                void DeleteLiveRecordTemplateAsync(const Model::DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLiveRecordTemplateOutcomeCallable DeleteLiveRecordTemplateCallable(const Model::DeleteLiveRecordTemplateRequest& request);

                /**
                 *This API is used to delete image samples by image ID.
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *This API is used to delete a media quality inspection template.
                 * @param req DeleteQualityControlTemplateRequest
                 * @return DeleteQualityControlTemplateOutcome
                 */
                DeleteQualityControlTemplateOutcome DeleteQualityControlTemplate(const Model::DeleteQualityControlTemplateRequest &request);
                void DeleteQualityControlTemplateAsync(const Model::DeleteQualityControlTemplateRequest& request, const DeleteQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQualityControlTemplateOutcomeCallable DeleteQualityControlTemplateCallable(const Model::DeleteQualityControlTemplateRequest& request);

                /**
                 *This API is used to delete a custom sampled screencapturing template.
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to delete a scheme.
                 * @param req DeleteScheduleRequest
                 * @return DeleteScheduleOutcome
                 */
                DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest &request);
                void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request);

                /**
                 *This API is used to delete a user-defined smart subtitle template.
                 * @param req DeleteSmartSubtitleTemplateRequest
                 * @return DeleteSmartSubtitleTemplateOutcome
                 */
                DeleteSmartSubtitleTemplateOutcome DeleteSmartSubtitleTemplate(const Model::DeleteSmartSubtitleTemplateRequest &request);
                void DeleteSmartSubtitleTemplateAsync(const Model::DeleteSmartSubtitleTemplateRequest& request, const DeleteSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmartSubtitleTemplateOutcomeCallable DeleteSmartSubtitleTemplateCallable(const Model::DeleteSmartSubtitleTemplateRequest& request);

                /**
                 *This API is used to delete a custom time point screencapturing template.
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

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
                 *This API is used to delete a workflow. An enabled workflow must be disabled before it can be deleted.
                 * @param req DeleteWorkflowRequest
                 * @return DeleteWorkflowOutcome
                 */
                DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest &request);
                void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request);

                /**
                 *This API is used to get the list of content analysis templates based on unique template ID. The returned result includes all eligible custom and preset video content analysis templates.
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *This API is used to get the list of content recognition templates based on unique template ID. The return result includes all eligible custom and preset content recognition templates.
                 * @param req DescribeAIRecognitionTemplatesRequest
                 * @return DescribeAIRecognitionTemplatesOutcome
                 */
                DescribeAIRecognitionTemplatesOutcome DescribeAIRecognitionTemplates(const Model::DescribeAIRecognitionTemplatesRequest &request);
                void DescribeAIRecognitionTemplatesAsync(const Model::DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIRecognitionTemplatesOutcomeCallable DescribeAIRecognitionTemplatesCallable(const Model::DescribeAIRecognitionTemplatesRequest& request);

                /**
                 *This API is used to query the list of adaptive bitrate streaming templates and supports paginated queries by filters.
                 * @param req DescribeAdaptiveDynamicStreamingTemplatesRequest
                 * @return DescribeAdaptiveDynamicStreamingTemplatesOutcome
                 */
                DescribeAdaptiveDynamicStreamingTemplatesOutcome DescribeAdaptiveDynamicStreamingTemplates(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest &request);
                void DescribeAdaptiveDynamicStreamingTemplatesAsync(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable DescribeAdaptiveDynamicStreamingTemplatesCallable(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request);

                /**
                 *This API is used to query the list of animated image generating templates and supports paged queries by filters.
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *This API is used to query a smart subtitle hotword lexicon.
                 * @param req DescribeAsrHotwordsRequest
                 * @return DescribeAsrHotwordsOutcome
                 */
                DescribeAsrHotwordsOutcome DescribeAsrHotwords(const Model::DescribeAsrHotwordsRequest &request);
                void DescribeAsrHotwordsAsync(const Model::DescribeAsrHotwordsRequest& request, const DescribeAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsrHotwordsOutcomeCallable DescribeAsrHotwordsCallable(const Model::DescribeAsrHotwordsRequest& request);

                /**
                 *This API is used to obtain the hotword lexicon list.
                 * @param req DescribeAsrHotwordsListRequest
                 * @return DescribeAsrHotwordsListOutcome
                 */
                DescribeAsrHotwordsListOutcome DescribeAsrHotwordsList(const Model::DescribeAsrHotwordsListRequest &request);
                void DescribeAsrHotwordsListAsync(const Model::DescribeAsrHotwordsListRequest& request, const DescribeAsrHotwordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsrHotwordsListOutcomeCallable DescribeAsrHotwordsListCallable(const Model::DescribeAsrHotwordsListRequest& request);

                /**
                 *This API is used to query the details of the task execution status and results by task ID (tasks submitted within the last 7 days can be queried).
                 * @param req DescribeBatchTaskDetailRequest
                 * @return DescribeBatchTaskDetailOutcome
                 */
                DescribeBatchTaskDetailOutcome DescribeBatchTaskDetail(const Model::DescribeBatchTaskDetailRequest &request);
                void DescribeBatchTaskDetailAsync(const Model::DescribeBatchTaskDetailRequest& request, const DescribeBatchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchTaskDetailOutcomeCallable DescribeBatchTaskDetailCallable(const Model::DescribeBatchTaskDetailRequest& request);

                /**
                 *This API is used to query content moderation templates by template ID. Both custom and preset templates that match the template IDs passed in will be returned.
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
                 *This API is used to query the details of the task execution status and results by task ID (tasks submitted within the last 7 days can be queried).
                 * @param req DescribeImageTaskDetailRequest
                 * @return DescribeImageTaskDetailOutcome
                 */
                DescribeImageTaskDetailOutcome DescribeImageTaskDetail(const Model::DescribeImageTaskDetailRequest &request);
                void DescribeImageTaskDetailAsync(const Model::DescribeImageTaskDetailRequest& request, const DescribeImageTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTaskDetailOutcomeCallable DescribeImageTaskDetailCallable(const Model::DescribeImageTaskDetailRequest& request);

                /**
                 *This API is used to get a live recording template.
                 * @param req DescribeLiveRecordTemplatesRequest
                 * @return DescribeLiveRecordTemplatesOutcome
                 */
                DescribeLiveRecordTemplatesOutcome DescribeLiveRecordTemplates(const Model::DescribeLiveRecordTemplatesRequest &request);
                void DescribeLiveRecordTemplatesAsync(const Model::DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLiveRecordTemplatesOutcomeCallable DescribeLiveRecordTemplatesCallable(const Model::DescribeLiveRecordTemplatesRequest& request);

                /**
                 *This API is used to get the metadata of media, such as video image width/height, codec, length, and frame rate.
                 * @param req DescribeMediaMetaDataRequest
                 * @return DescribeMediaMetaDataOutcome
                 */
                DescribeMediaMetaDataOutcome DescribeMediaMetaData(const Model::DescribeMediaMetaDataRequest &request);
                void DescribeMediaMetaDataAsync(const Model::DescribeMediaMetaDataRequest& request, const DescribeMediaMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaMetaDataOutcomeCallable DescribeMediaMetaDataCallable(const Model::DescribeMediaMetaDataRequest& request);

                /**
                 *This API is used to query the information of image samples. It supports paginated queries by image ID, name, and tag.
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *This API is used to query custom media quality inspection templates, supporting paged queries by conditions.
                 * @param req DescribeQualityControlTemplatesRequest
                 * @return DescribeQualityControlTemplatesOutcome
                 */
                DescribeQualityControlTemplatesOutcome DescribeQualityControlTemplates(const Model::DescribeQualityControlTemplatesRequest &request);
                void DescribeQualityControlTemplatesAsync(const Model::DescribeQualityControlTemplatesRequest& request, const DescribeQualityControlTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityControlTemplatesOutcomeCallable DescribeQualityControlTemplatesCallable(const Model::DescribeQualityControlTemplatesRequest& request);

                /**
                 *This API is used to query the list of sampled screencapturing templates and supports paged queries by filters.
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *This API is used to query a scheme.
                 * @param req DescribeSchedulesRequest
                 * @return DescribeSchedulesOutcome
                 */
                DescribeSchedulesOutcome DescribeSchedules(const Model::DescribeSchedulesRequest &request);
                void DescribeSchedulesAsync(const Model::DescribeSchedulesRequest& request, const DescribeSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSchedulesOutcomeCallable DescribeSchedulesCallable(const Model::DescribeSchedulesRequest& request);

                /**
                 *This API is used to obtain the list of smart subtitle templates based on template unique identifier. The returned result includes all matching user-defined smart subtitle templates and system preset smart subtitle templates.
                 * @param req DescribeSmartSubtitleTemplatesRequest
                 * @return DescribeSmartSubtitleTemplatesOutcome
                 */
                DescribeSmartSubtitleTemplatesOutcome DescribeSmartSubtitleTemplates(const Model::DescribeSmartSubtitleTemplatesRequest &request);
                void DescribeSmartSubtitleTemplatesAsync(const Model::DescribeSmartSubtitleTemplatesRequest& request, const DescribeSmartSubtitleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmartSubtitleTemplatesOutcomeCallable DescribeSmartSubtitleTemplatesCallable(const Model::DescribeSmartSubtitleTemplatesRequest& request);

                /**
                 *This API is used to query the list of time point screencapturing templates and supports paged queries by filters.
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *This API is used to query a security group.
                 * @param req DescribeStreamLinkSecurityGroupRequest
                 * @return DescribeStreamLinkSecurityGroupOutcome
                 */
                DescribeStreamLinkSecurityGroupOutcome DescribeStreamLinkSecurityGroup(const Model::DescribeStreamLinkSecurityGroupRequest &request);
                void DescribeStreamLinkSecurityGroupAsync(const Model::DescribeStreamLinkSecurityGroupRequest& request, const DescribeStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkSecurityGroupOutcomeCallable DescribeStreamLinkSecurityGroupCallable(const Model::DescribeStreamLinkSecurityGroupRequest& request);

                /**
                 *This API is used to query the details of execution status and result of a task submitted in the last 3 days by task ID.
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** This API is used to query tasks.
* If the data is large, one API call may not be able to obtain all the tasks in the query. You can use the `ScrollToken` parameter to query tasks with multiple calls.
* Only tasks in the last seven days (168 hours) can be queried.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API is used to get the list of transcoding templates based on unique template ID. The return result includes all eligible custom and [preset transcoding templates](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
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
                 *This API is used to perform paged queries of keyword sample information by use case, keyword, and tag.
                 * @param req DescribeWordSamplesRequest
                 * @return DescribeWordSamplesOutcome
                 */
                DescribeWordSamplesOutcome DescribeWordSamples(const Model::DescribeWordSamplesRequest &request);
                void DescribeWordSamplesAsync(const Model::DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordSamplesOutcomeCallable DescribeWordSamplesCallable(const Model::DescribeWordSamplesRequest& request);

                /**
                 *This API is used to get the list of workflow details by workflow ID.
                 * @param req DescribeWorkflowsRequest
                 * @return DescribeWorkflowsOutcome
                 */
                DescribeWorkflowsOutcome DescribeWorkflows(const Model::DescribeWorkflowsRequest &request);
                void DescribeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkflowsOutcomeCallable DescribeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request);

                /**
                 *This API is used to disable a scheme.
                 * @param req DisableScheduleRequest
                 * @return DisableScheduleOutcome
                 */
                DisableScheduleOutcome DisableSchedule(const Model::DisableScheduleRequest &request);
                void DisableScheduleAsync(const Model::DisableScheduleRequest& request, const DisableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableScheduleOutcomeCallable DisableScheduleCallable(const Model::DisableScheduleRequest& request);

                /**
                 *This API is used to disable a workflow.
                 * @param req DisableWorkflowRequest
                 * @return DisableWorkflowOutcome
                 */
                DisableWorkflowOutcome DisableWorkflow(const Model::DisableWorkflowRequest &request);
                void DisableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWorkflowOutcomeCallable DisableWorkflowCallable(const Model::DisableWorkflowRequest& request);

                /**
                 *This API is used to edit a video to generate a new one. Editing features include:
 

1. **Editing task**: simple video editing, such as clipping and splicing.
1) Edit a file to generate a new video.
2) Splice multiple files to generate a new video.
3) Edit multiple files and then splice them to generate a new video.

2. **Compositing task**: Generate a new video by describing information through APIs.
1) Multi-track (video, audio, and subtitles) and multi-type elements (video, image, audio, text, and empty).
2) Image level: mapping, zoom in/out, arbitrary rotation, mirroring, and more.
3) Audio level: volume control, fade in/out, mixing, and more.
4) Video level: transition, playback speed adjustment, splicing, clipping, subtitles, picture-in-picture, audio-video separation, entrance and exit animations, and more.
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *This API is used to enable a scheme.
                 * @param req EnableScheduleRequest
                 * @return EnableScheduleOutcome
                 */
                EnableScheduleOutcome EnableSchedule(const Model::EnableScheduleRequest &request);
                void EnableScheduleAsync(const Model::EnableScheduleRequest& request, const EnableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableScheduleOutcomeCallable EnableScheduleCallable(const Model::EnableScheduleRequest& request);

                /**
                 *This API is used to enable a workflow.
                 * @param req EnableWorkflowRequest
                 * @return EnableWorkflowOutcome
                 */
                EnableWorkflowOutcome EnableWorkflow(const Model::EnableWorkflowRequest &request);
                void EnableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWorkflowOutcomeCallable EnableWorkflowCallable(const Model::EnableWorkflowRequest& request);

                /**
                 *This API is reserved for special circumstances. Do not use it unless you are directed to use it by technical support.
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 *This API is used to manage initiated tasks.
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

                /**
                 *This API is used to modify a custom content analysis template.

Note: templates with an ID below 10000 are preset and cannot be modified.
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to modify a custom content recognition template.
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
                 *This API is used to update a smart subtitle hotword lexicon.
                 * @param req ModifyAsrHotwordsRequest
                 * @return ModifyAsrHotwordsOutcome
                 */
                ModifyAsrHotwordsOutcome ModifyAsrHotwords(const Model::ModifyAsrHotwordsRequest &request);
                void ModifyAsrHotwordsAsync(const Model::ModifyAsrHotwordsRequest& request, const ModifyAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAsrHotwordsOutcomeCallable ModifyAsrHotwordsCallable(const Model::ModifyAsrHotwordsRequest& request);

                /**
                 *This API is used to modify a custom content moderation template.
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
                 *This API is used to modify a live recording template.
                 * @param req ModifyLiveRecordTemplateRequest
                 * @return ModifyLiveRecordTemplateOutcome
                 */
                ModifyLiveRecordTemplateOutcome ModifyLiveRecordTemplate(const Model::ModifyLiveRecordTemplateRequest &request);
                void ModifyLiveRecordTemplateAsync(const Model::ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLiveRecordTemplateOutcomeCallable ModifyLiveRecordTemplateCallable(const Model::ModifyLiveRecordTemplateRequest& request);

                /**
                 *This API is used to modify image samples by image ID. You can use it to modify the name and description of an image sample and add/delete/reset facial features or tags. There must be at least one image left after the deletion of facial features; otherwise, please reset instead of delete the facial features.
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *This API is used to modify a media quality inspection template.
                 * @param req ModifyQualityControlTemplateRequest
                 * @return ModifyQualityControlTemplateOutcome
                 */
                ModifyQualityControlTemplateOutcome ModifyQualityControlTemplate(const Model::ModifyQualityControlTemplateRequest &request);
                void ModifyQualityControlTemplateAsync(const Model::ModifyQualityControlTemplateRequest& request, const ModifyQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQualityControlTemplateOutcomeCallable ModifyQualityControlTemplateCallable(const Model::ModifyQualityControlTemplateRequest& request);

                /**
                 *This API is used to modify a custom sampled screencapturing template.
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to modify a scheme.
                 * @param req ModifyScheduleRequest
                 * @return ModifyScheduleOutcome
                 */
                ModifyScheduleOutcome ModifySchedule(const Model::ModifyScheduleRequest &request);
                void ModifyScheduleAsync(const Model::ModifyScheduleRequest& request, const ModifyScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduleOutcomeCallable ModifyScheduleCallable(const Model::ModifyScheduleRequest& request);

                /**
                 *This API is used to modify a user-defined smart subtitle template.
                 * @param req ModifySmartSubtitleTemplateRequest
                 * @return ModifySmartSubtitleTemplateOutcome
                 */
                ModifySmartSubtitleTemplateOutcome ModifySmartSubtitleTemplate(const Model::ModifySmartSubtitleTemplateRequest &request);
                void ModifySmartSubtitleTemplateAsync(const Model::ModifySmartSubtitleTemplateRequest& request, const ModifySmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmartSubtitleTemplateOutcomeCallable ModifySmartSubtitleTemplateCallable(const Model::ModifySmartSubtitleTemplateRequest& request);

                /**
                 *This API is used to modify a custom time point screencapturing template.
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

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
                 *This API is used to parse the content of an MPS live stream processing event notification from the `msgBody` field in the message received from CMQ.
Instead of initiating a video processing task, this API is used to help generate SDKs for various programming languages. You can parse the event notification based on the analytic function of the SDKs.
                 * @param req ParseLiveStreamProcessNotificationRequest
                 * @return ParseLiveStreamProcessNotificationOutcome
                 */
                ParseLiveStreamProcessNotificationOutcome ParseLiveStreamProcessNotification(const Model::ParseLiveStreamProcessNotificationRequest &request);
                void ParseLiveStreamProcessNotificationAsync(const Model::ParseLiveStreamProcessNotificationRequest& request, const ParseLiveStreamProcessNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseLiveStreamProcessNotificationOutcomeCallable ParseLiveStreamProcessNotificationCallable(const Model::ParseLiveStreamProcessNotificationRequest& request);

                /**
                 *This API is used to parse the content of an MPS event notification from the `msgBody` field in the message received from CMQ.
Instead of initiating a video processing task, this API is used to help generate SDKs for various programming languages. You can parse the event notification based on the analytic function of the SDKs.
                 * @param req ParseNotificationRequest
                 * @return ParseNotificationOutcome
                 */
                ParseNotificationOutcome ParseNotification(const Model::ParseNotificationRequest &request);
                void ParseNotificationAsync(const Model::ParseNotificationRequest& request, const ParseNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseNotificationOutcomeCallable ParseNotificationCallable(const Model::ParseNotificationRequest& request);

                /**
                 *This API is used to initiate image processing, with features including:
1. Format conversion.
2. Image enhancement.
3. Image erasure.
                 * @param req ProcessImageRequest
                 * @return ProcessImageOutcome
                 */
                ProcessImageOutcome ProcessImage(const Model::ProcessImageRequest &request);
                void ProcessImageAsync(const Model::ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessImageOutcomeCallable ProcessImageCallable(const Model::ProcessImageRequest& request);

                /**
                 *This API is used to initiate live stream processing tasks. Such tasks may include the following:

* Intelligent content moderation (detection of pornographic content in images and audio, detection of sensitive information)
* Intelligent content recognition (face, full text, text keyword, full speech, speech keyword, real-time speech translation, object recognition, game event tracking)
* Intelligent content analysis (real-time news splitting)
* Quality control, including recognizing live stream format, checking audio/video content for flickering, blur, low light, overexposure, black bars, white bars, black screen, white screen, noise, pixelation, QR code, etc., and no-reference scoring.
* Recording

HTTP callbacks are supported for live stream processing events. Notifications can also be written in real time to and read from a CMQ queue. The output files of processing tasks are saved to the storage you specify.
                 * @param req ProcessLiveStreamRequest
                 * @return ProcessLiveStreamOutcome
                 */
                ProcessLiveStreamOutcome ProcessLiveStream(const Model::ProcessLiveStreamRequest &request);
                void ProcessLiveStreamAsync(const Model::ProcessLiveStreamRequest& request, const ProcessLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessLiveStreamOutcomeCallable ProcessLiveStreamCallable(const Model::ProcessLiveStreamRequest& request);

                /**
                 *This API is used to initiate a processing task for video URLs or media files in COS. Features include:
1. Video transcoding (standard transcoding, TSC transcoding, and audio/video enhancement).
2. Video-to-GIF conversion.
3. Time point screenshot of videos.
4. Sampled screenshot of videos.
5. Image sprite of videos.
6. Adaptive bitrate stream conversion for videos.
7. Intelligent content moderation (pornography detection and sensitive information detection).
8. Intelligent content analysis (tag, category, cover, frame tag, video splitting, highlight, opening and ending clips, and game tracking).
9. Intelligent content recognition (human face, full text, text keyword, full speech, speech keyword, speech translation, and object).
10. Media quality inspection (live stream format diagnosis, audio and video content detection (jitter, blur, low light, overexposure, black and white edges, black and white screens, screen glitch, noise, mosaic, QR code, and more), and no-reference scoring).

11. Smart subtitle (full speech, speech hotword, and speech translation).
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *This API is used to reset an existing workflow that is disabled.
                 * @param req ResetWorkflowRequest
                 * @return ResetWorkflowOutcome
                 */
                ResetWorkflowOutcome ResetWorkflow(const Model::ResetWorkflowRequest &request);
                void ResetWorkflowAsync(const Model::ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetWorkflowOutcomeCallable ResetWorkflowCallable(const Model::ResetWorkflowRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MPSCLIENT_H_
