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
#include <tencentcloud/vod/v20180717/model/AttachMediaSubtitlesRequest.h>
#include <tencentcloud/vod/v20180717/model/AttachMediaSubtitlesResponse.h>
#include <tencentcloud/vod/v20180717/model/CloneCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/CloneCDNDomainResponse.h>
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
#include <tencentcloud/vod/v20180717/model/CreateCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCDNDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateClassRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateClassResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateComplexAdaptiveDynamicStreamingTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateComplexAdaptiveDynamicStreamingTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateDomainVerifyRecordRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateDomainVerifyRecordResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateImageProcessingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateImageProcessingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateRoundPlayResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateStorageRegionRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateStorageRegionResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSubAppIdResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateVodDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateVodDomainResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DeleteCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteCDNDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageProcessingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageProcessingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteRoundPlayResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSampleSnapshotTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSnapshotByTimeOffsetTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteSuperPlayerConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteVodDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteVodDomainResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeCDNDomainsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNDomainsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmKeyProviderInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDrmKeyProviderInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeEnhanceMediaTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeEnhanceMediaTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeEventConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeHeadTailTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeHeadTailTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageProcessingTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageProcessingTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageReviewUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageReviewUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeImageSpriteTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeJustInTimeTranscodeTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeJustInTimeTranscodeTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaPlayStatDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaPlayStatDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMediaProcessUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribePersonSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcedureTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeQualityInspectTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeQualityInspectTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeRebuildMediaTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeRebuildMediaTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeRoundPlaysRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeRoundPlaysResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSampleSnapshotTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageRegionsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeStorageRegionsResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeVodDomainsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeVodDomainsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/EditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/EditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionRequest.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionRequest.h>
#include <tencentcloud/vod/v20180717/model/ForbidMediaDistributionResponse.h>
#include <tencentcloud/vod/v20180717/model/HandleCurrentPlaylistRequest.h>
#include <tencentcloud/vod/v20180717/model/HandleCurrentPlaylistResponse.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipRequest.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipResponse.h>
#include <tencentcloud/vod/v20180717/model/ManageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/ManageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIAnalysisTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAIRecognitionTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAdaptiveDynamicStreamingTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyCDNDomainConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyCDNDomainConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultStorageRegionRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultStorageRegionResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyEnhanceMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyEnhanceMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyEventConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyEventConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyHeadTailTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyHeadTailTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyImageSpriteTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyJustInTimeTranscodeTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyJustInTimeTranscodeTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyQualityInspectTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyQualityInspectTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyRebuildMediaTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyRebuildMediaTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyRoundPlayRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyRoundPlayResponse.h>
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
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainAccelerateConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainAccelerateConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyVodDomainConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyWordSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestRequest.h>
#include <tencentcloud/vod/v20180717/model/ParseStreamingManifestResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPSRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPSResponse.h>
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
#include <tencentcloud/vod/v20180717/model/RebuildMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaByTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaByTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/RefreshUrlCacheRequest.h>
#include <tencentcloud/vod/v20180717/model/RefreshUrlCacheResponse.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkResponse.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ResetProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoRequest.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoResponse.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageRequest.h>
#include <tencentcloud/vod/v20180717/model/ReviewImageResponse.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/SetDrmKeyProviderInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/SetDrmKeyProviderInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/SetVodDomainCertificateRequest.h>
#include <tencentcloud/vod/v20180717/model/SetVodDomainCertificateResponse.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipRequest.h>
#include <tencentcloud/vod/v20180717/model/SimpleHlsClipResponse.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/StartCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/StartCDNDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/VerifyDomainRecordRequest.h>
#include <tencentcloud/vod/v20180717/model/VerifyDomainRecordResponse.h>


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

                typedef Outcome<Core::Error, Model::ApplyUploadResponse> ApplyUploadOutcome;
                typedef std::future<ApplyUploadOutcome> ApplyUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ApplyUploadRequest&, ApplyUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachMediaSubtitlesResponse> AttachMediaSubtitlesOutcome;
                typedef std::future<AttachMediaSubtitlesOutcome> AttachMediaSubtitlesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::AttachMediaSubtitlesRequest&, AttachMediaSubtitlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachMediaSubtitlesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneCDNDomainResponse> CloneCDNDomainOutcome;
                typedef std::future<CloneCDNDomainOutcome> CloneCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CloneCDNDomainRequest&, CloneCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitUploadResponse> CommitUploadOutcome;
                typedef std::future<CommitUploadOutcome> CommitUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CommitUploadRequest&, CommitUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::ComposeMediaResponse> ComposeMediaOutcome;
                typedef std::future<ComposeMediaOutcome> ComposeMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ComposeMediaRequest&, ComposeMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ComposeMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfirmEventsResponse> ConfirmEventsOutcome;
                typedef std::future<ConfirmEventsOutcome> ConfirmEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ConfirmEventsRequest&, ConfirmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAnalysisTemplateResponse> CreateAIAnalysisTemplateOutcome;
                typedef std::future<CreateAIAnalysisTemplateOutcome> CreateAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIAnalysisTemplateRequest&, CreateAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIRecognitionTemplateResponse> CreateAIRecognitionTemplateOutcome;
                typedef std::future<CreateAIRecognitionTemplateOutcome> CreateAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAIRecognitionTemplateRequest&, CreateAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdaptiveDynamicStreamingTemplateResponse> CreateAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<CreateAdaptiveDynamicStreamingTemplateOutcome> CreateAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAdaptiveDynamicStreamingTemplateRequest&, CreateAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCDNDomainResponse> CreateCDNDomainOutcome;
                typedef std::future<CreateCDNDomainOutcome> CreateCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCDNDomainRequest&, CreateCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClassResponse> CreateClassOutcome;
                typedef std::future<CreateClassOutcome> CreateClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateClassRequest&, CreateClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplexAdaptiveDynamicStreamingTaskResponse> CreateComplexAdaptiveDynamicStreamingTaskOutcome;
                typedef std::future<CreateComplexAdaptiveDynamicStreamingTaskOutcome> CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest&, CreateComplexAdaptiveDynamicStreamingTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateContentReviewTemplateResponse> CreateContentReviewTemplateOutcome;
                typedef std::future<CreateContentReviewTemplateOutcome> CreateContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateContentReviewTemplateRequest&, CreateContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainVerifyRecordResponse> CreateDomainVerifyRecordOutcome;
                typedef std::future<CreateDomainVerifyRecordOutcome> CreateDomainVerifyRecordOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateDomainVerifyRecordRequest&, CreateDomainVerifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainVerifyRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnhanceMediaTemplateResponse> CreateEnhanceMediaTemplateOutcome;
                typedef std::future<CreateEnhanceMediaTemplateOutcome> CreateEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateEnhanceMediaTemplateRequest&, CreateEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHeadTailTemplateResponse> CreateHeadTailTemplateOutcome;
                typedef std::future<CreateHeadTailTemplateOutcome> CreateHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateHeadTailTemplateRequest&, CreateHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageProcessingTemplateResponse> CreateImageProcessingTemplateOutcome;
                typedef std::future<CreateImageProcessingTemplateOutcome> CreateImageProcessingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateImageProcessingTemplateRequest&, CreateImageProcessingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageProcessingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSpriteTemplateResponse> CreateImageSpriteTemplateOutcome;
                typedef std::future<CreateImageSpriteTemplateOutcome> CreateImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateImageSpriteTemplateRequest&, CreateImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJustInTimeTranscodeTemplateResponse> CreateJustInTimeTranscodeTemplateOutcome;
                typedef std::future<CreateJustInTimeTranscodeTemplateOutcome> CreateJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateJustInTimeTranscodeTemplateRequest&, CreateJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcedureTemplateResponse> CreateProcedureTemplateOutcome;
                typedef std::future<CreateProcedureTemplateOutcome> CreateProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcedureTemplateRequest&, CreateProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQualityInspectTemplateResponse> CreateQualityInspectTemplateOutcome;
                typedef std::future<CreateQualityInspectTemplateOutcome> CreateQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateQualityInspectTemplateRequest&, CreateQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRebuildMediaTemplateResponse> CreateRebuildMediaTemplateOutcome;
                typedef std::future<CreateRebuildMediaTemplateOutcome> CreateRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateRebuildMediaTemplateRequest&, CreateRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReviewTemplateResponse> CreateReviewTemplateOutcome;
                typedef std::future<CreateReviewTemplateOutcome> CreateReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateReviewTemplateRequest&, CreateReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoundPlayResponse> CreateRoundPlayOutcome;
                typedef std::future<CreateRoundPlayOutcome> CreateRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateRoundPlayRequest&, CreateRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSampleSnapshotTemplateResponse> CreateSampleSnapshotTemplateOutcome;
                typedef std::future<CreateSampleSnapshotTemplateOutcome> CreateSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSampleSnapshotTemplateRequest&, CreateSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotByTimeOffsetTemplateResponse> CreateSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<CreateSnapshotByTimeOffsetTemplateOutcome> CreateSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSnapshotByTimeOffsetTemplateRequest&, CreateSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageRegionResponse> CreateStorageRegionOutcome;
                typedef std::future<CreateStorageRegionOutcome> CreateStorageRegionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageRegionRequest&, CreateStorageRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubAppIdResponse> CreateSubAppIdOutcome;
                typedef std::future<CreateSubAppIdOutcome> CreateSubAppIdOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSubAppIdRequest&, CreateSubAppIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubAppIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSuperPlayerConfigResponse> CreateSuperPlayerConfigOutcome;
                typedef std::future<CreateSuperPlayerConfigOutcome> CreateSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSuperPlayerConfigRequest&, CreateSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTranscodeTemplateResponse> CreateTranscodeTemplateOutcome;
                typedef std::future<CreateTranscodeTemplateOutcome> CreateTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateTranscodeTemplateRequest&, CreateTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVodDomainResponse> CreateVodDomainOutcome;
                typedef std::future<CreateVodDomainOutcome> CreateVodDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateVodDomainRequest&, CreateVodDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVodDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWatermarkTemplateResponse> CreateWatermarkTemplateOutcome;
                typedef std::future<CreateWatermarkTemplateOutcome> CreateWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWatermarkTemplateRequest&, CreateWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordSamplesResponse> CreateWordSamplesOutcome;
                typedef std::future<CreateWordSamplesOutcome> CreateWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateWordSamplesRequest&, CreateWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisTemplateResponse> DeleteAIAnalysisTemplateOutcome;
                typedef std::future<DeleteAIAnalysisTemplateOutcome> DeleteAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIAnalysisTemplateRequest&, DeleteAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIRecognitionTemplateResponse> DeleteAIRecognitionTemplateOutcome;
                typedef std::future<DeleteAIRecognitionTemplateOutcome> DeleteAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAIRecognitionTemplateRequest&, DeleteAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAdaptiveDynamicStreamingTemplateResponse> DeleteAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<DeleteAdaptiveDynamicStreamingTemplateOutcome> DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAdaptiveDynamicStreamingTemplateRequest&, DeleteAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCDNDomainResponse> DeleteCDNDomainOutcome;
                typedef std::future<DeleteCDNDomainOutcome> DeleteCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteCDNDomainRequest&, DeleteCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClassResponse> DeleteClassOutcome;
                typedef std::future<DeleteClassOutcome> DeleteClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteClassRequest&, DeleteClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteContentReviewTemplateResponse> DeleteContentReviewTemplateOutcome;
                typedef std::future<DeleteContentReviewTemplateOutcome> DeleteContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteContentReviewTemplateRequest&, DeleteContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnhanceMediaTemplateResponse> DeleteEnhanceMediaTemplateOutcome;
                typedef std::future<DeleteEnhanceMediaTemplateOutcome> DeleteEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteEnhanceMediaTemplateRequest&, DeleteEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHeadTailTemplateResponse> DeleteHeadTailTemplateOutcome;
                typedef std::future<DeleteHeadTailTemplateOutcome> DeleteHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteHeadTailTemplateRequest&, DeleteHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageProcessingTemplateResponse> DeleteImageProcessingTemplateOutcome;
                typedef std::future<DeleteImageProcessingTemplateOutcome> DeleteImageProcessingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteImageProcessingTemplateRequest&, DeleteImageProcessingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageProcessingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSpriteTemplateResponse> DeleteImageSpriteTemplateOutcome;
                typedef std::future<DeleteImageSpriteTemplateOutcome> DeleteImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteImageSpriteTemplateRequest&, DeleteImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJustInTimeTranscodeTemplateResponse> DeleteJustInTimeTranscodeTemplateOutcome;
                typedef std::future<DeleteJustInTimeTranscodeTemplateOutcome> DeleteJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteJustInTimeTranscodeTemplateRequest&, DeleteJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcedureTemplateResponse> DeleteProcedureTemplateOutcome;
                typedef std::future<DeleteProcedureTemplateOutcome> DeleteProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcedureTemplateRequest&, DeleteProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQualityInspectTemplateResponse> DeleteQualityInspectTemplateOutcome;
                typedef std::future<DeleteQualityInspectTemplateOutcome> DeleteQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteQualityInspectTemplateRequest&, DeleteQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRebuildMediaTemplateResponse> DeleteRebuildMediaTemplateOutcome;
                typedef std::future<DeleteRebuildMediaTemplateOutcome> DeleteRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteRebuildMediaTemplateRequest&, DeleteRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReviewTemplateResponse> DeleteReviewTemplateOutcome;
                typedef std::future<DeleteReviewTemplateOutcome> DeleteReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteReviewTemplateRequest&, DeleteReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoundPlayResponse> DeleteRoundPlayOutcome;
                typedef std::future<DeleteRoundPlayOutcome> DeleteRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteRoundPlayRequest&, DeleteRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSampleSnapshotTemplateResponse> DeleteSampleSnapshotTemplateOutcome;
                typedef std::future<DeleteSampleSnapshotTemplateOutcome> DeleteSampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSampleSnapshotTemplateRequest&, DeleteSampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotByTimeOffsetTemplateResponse> DeleteSnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<DeleteSnapshotByTimeOffsetTemplateOutcome> DeleteSnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSnapshotByTimeOffsetTemplateRequest&, DeleteSnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSuperPlayerConfigResponse> DeleteSuperPlayerConfigOutcome;
                typedef std::future<DeleteSuperPlayerConfigOutcome> DeleteSuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteSuperPlayerConfigRequest&, DeleteSuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTranscodeTemplateResponse> DeleteTranscodeTemplateOutcome;
                typedef std::future<DeleteTranscodeTemplateOutcome> DeleteTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteTranscodeTemplateRequest&, DeleteTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVodDomainResponse> DeleteVodDomainOutcome;
                typedef std::future<DeleteVodDomainOutcome> DeleteVodDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteVodDomainRequest&, DeleteVodDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVodDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWatermarkTemplateResponse> DeleteWatermarkTemplateOutcome;
                typedef std::future<DeleteWatermarkTemplateOutcome> DeleteWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWatermarkTemplateRequest&, DeleteWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordSamplesResponse> DeleteWordSamplesOutcome;
                typedef std::future<DeleteWordSamplesOutcome> DeleteWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteWordSamplesRequest&, DeleteWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisTemplatesResponse> DescribeAIAnalysisTemplatesOutcome;
                typedef std::future<DescribeAIAnalysisTemplatesOutcome> DescribeAIAnalysisTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIAnalysisTemplatesRequest&, DescribeAIAnalysisTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIRecognitionTemplatesResponse> DescribeAIRecognitionTemplatesOutcome;
                typedef std::future<DescribeAIRecognitionTemplatesOutcome> DescribeAIRecognitionTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAIRecognitionTemplatesRequest&, DescribeAIRecognitionTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIRecognitionTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdaptiveDynamicStreamingTemplatesResponse> DescribeAdaptiveDynamicStreamingTemplatesOutcome;
                typedef std::future<DescribeAdaptiveDynamicStreamingTemplatesOutcome> DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest&, DescribeAdaptiveDynamicStreamingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllClassResponse> DescribeAllClassOutcome;
                typedef std::future<DescribeAllClassOutcome> DescribeAllClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAllClassRequest&, DescribeAllClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNDomainsResponse> DescribeCDNDomainsOutcome;
                typedef std::future<DescribeCDNDomainsOutcome> DescribeCDNDomainsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNDomainsRequest&, DescribeCDNDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNStatDetailsResponse> DescribeCDNStatDetailsOutcome;
                typedef std::future<DescribeCDNStatDetailsOutcome> DescribeCDNStatDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNStatDetailsRequest&, DescribeCDNStatDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNStatDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNUsageDataResponse> DescribeCDNUsageDataOutcome;
                typedef std::future<DescribeCDNUsageDataOutcome> DescribeCDNUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNUsageDataRequest&, DescribeCDNUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnLogsResponse> DescribeCdnLogsOutcome;
                typedef std::future<DescribeCdnLogsOutcome> DescribeCdnLogsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCdnLogsRequest&, DescribeCdnLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientUploadAccelerationUsageDataResponse> DescribeClientUploadAccelerationUsageDataOutcome;
                typedef std::future<DescribeClientUploadAccelerationUsageDataOutcome> DescribeClientUploadAccelerationUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeClientUploadAccelerationUsageDataRequest&, DescribeClientUploadAccelerationUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientUploadAccelerationUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentReviewTemplatesResponse> DescribeContentReviewTemplatesOutcome;
                typedef std::future<DescribeContentReviewTemplatesOutcome> DescribeContentReviewTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeContentReviewTemplatesRequest&, DescribeContentReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentPlaylistResponse> DescribeCurrentPlaylistOutcome;
                typedef std::future<DescribeCurrentPlaylistOutcome> DescribeCurrentPlaylistOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCurrentPlaylistRequest&, DescribeCurrentPlaylistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentPlaylistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyPlayStatFileListResponse> DescribeDailyPlayStatFileListOutcome;
                typedef std::future<DescribeDailyPlayStatFileListOutcome> DescribeDailyPlayStatFileListOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyPlayStatFileListRequest&, DescribeDailyPlayStatFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyPlayStatFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDrmKeyProviderInfoResponse> DescribeDrmKeyProviderInfoOutcome;
                typedef std::future<DescribeDrmKeyProviderInfoOutcome> DescribeDrmKeyProviderInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDrmKeyProviderInfoRequest&, DescribeDrmKeyProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrmKeyProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnhanceMediaTemplatesResponse> DescribeEnhanceMediaTemplatesOutcome;
                typedef std::future<DescribeEnhanceMediaTemplatesOutcome> DescribeEnhanceMediaTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeEnhanceMediaTemplatesRequest&, DescribeEnhanceMediaTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnhanceMediaTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventConfigResponse> DescribeEventConfigOutcome;
                typedef std::future<DescribeEventConfigOutcome> DescribeEventConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeEventConfigRequest&, DescribeEventConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileAttributesResponse> DescribeFileAttributesOutcome;
                typedef std::future<DescribeFileAttributesOutcome> DescribeFileAttributesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeFileAttributesRequest&, DescribeFileAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHeadTailTemplatesResponse> DescribeHeadTailTemplatesOutcome;
                typedef std::future<DescribeHeadTailTemplatesOutcome> DescribeHeadTailTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeHeadTailTemplatesRequest&, DescribeHeadTailTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHeadTailTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageProcessingTemplatesResponse> DescribeImageProcessingTemplatesOutcome;
                typedef std::future<DescribeImageProcessingTemplatesOutcome> DescribeImageProcessingTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageProcessingTemplatesRequest&, DescribeImageProcessingTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageProcessingTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageReviewUsageDataResponse> DescribeImageReviewUsageDataOutcome;
                typedef std::future<DescribeImageReviewUsageDataOutcome> DescribeImageReviewUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageReviewUsageDataRequest&, DescribeImageReviewUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageReviewUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSpriteTemplatesResponse> DescribeImageSpriteTemplatesOutcome;
                typedef std::future<DescribeImageSpriteTemplatesOutcome> DescribeImageSpriteTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeImageSpriteTemplatesRequest&, DescribeImageSpriteTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSpriteTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJustInTimeTranscodeTemplatesResponse> DescribeJustInTimeTranscodeTemplatesOutcome;
                typedef std::future<DescribeJustInTimeTranscodeTemplatesOutcome> DescribeJustInTimeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeJustInTimeTranscodeTemplatesRequest&, DescribeJustInTimeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJustInTimeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseUsageDataResponse> DescribeLicenseUsageDataOutcome;
                typedef std::future<DescribeLicenseUsageDataOutcome> DescribeLicenseUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeLicenseUsageDataRequest&, DescribeLicenseUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaInfosResponse> DescribeMediaInfosOutcome;
                typedef std::future<DescribeMediaInfosOutcome> DescribeMediaInfosOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaInfosRequest&, DescribeMediaInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaPlayStatDetailsResponse> DescribeMediaPlayStatDetailsOutcome;
                typedef std::future<DescribeMediaPlayStatDetailsOutcome> DescribeMediaPlayStatDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaPlayStatDetailsRequest&, DescribeMediaPlayStatDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaPlayStatDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMediaProcessUsageDataResponse> DescribeMediaProcessUsageDataOutcome;
                typedef std::future<DescribeMediaProcessUsageDataOutcome> DescribeMediaProcessUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMediaProcessUsageDataRequest&, DescribeMediaProcessUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaProcessUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonSamplesResponse> DescribePersonSamplesOutcome;
                typedef std::future<DescribePersonSamplesOutcome> DescribePersonSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribePersonSamplesRequest&, DescribePersonSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcedureTemplatesResponse> DescribeProcedureTemplatesOutcome;
                typedef std::future<DescribeProcedureTemplatesOutcome> DescribeProcedureTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeProcedureTemplatesRequest&, DescribeProcedureTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcedureTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQualityInspectTemplatesResponse> DescribeQualityInspectTemplatesOutcome;
                typedef std::future<DescribeQualityInspectTemplatesOutcome> DescribeQualityInspectTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeQualityInspectTemplatesRequest&, DescribeQualityInspectTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQualityInspectTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRebuildMediaTemplatesResponse> DescribeRebuildMediaTemplatesOutcome;
                typedef std::future<DescribeRebuildMediaTemplatesOutcome> DescribeRebuildMediaTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeRebuildMediaTemplatesRequest&, DescribeRebuildMediaTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRebuildMediaTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReviewDetailsResponse> DescribeReviewDetailsOutcome;
                typedef std::future<DescribeReviewDetailsOutcome> DescribeReviewDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeReviewDetailsRequest&, DescribeReviewDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReviewDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReviewTemplatesResponse> DescribeReviewTemplatesOutcome;
                typedef std::future<DescribeReviewTemplatesOutcome> DescribeReviewTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeReviewTemplatesRequest&, DescribeReviewTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReviewTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoundPlaysResponse> DescribeRoundPlaysOutcome;
                typedef std::future<DescribeRoundPlaysOutcome> DescribeRoundPlaysOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeRoundPlaysRequest&, DescribeRoundPlaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoundPlaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSampleSnapshotTemplatesResponse> DescribeSampleSnapshotTemplatesOutcome;
                typedef std::future<DescribeSampleSnapshotTemplatesOutcome> DescribeSampleSnapshotTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSampleSnapshotTemplatesRequest&, DescribeSampleSnapshotTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSnapshotTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotByTimeOffsetTemplatesResponse> DescribeSnapshotByTimeOffsetTemplatesOutcome;
                typedef std::future<DescribeSnapshotByTimeOffsetTemplatesOutcome> DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSnapshotByTimeOffsetTemplatesRequest&, DescribeSnapshotByTimeOffsetTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotByTimeOffsetTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageDataResponse> DescribeStorageDataOutcome;
                typedef std::future<DescribeStorageDataOutcome> DescribeStorageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDataRequest&, DescribeStorageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageDetailsResponse> DescribeStorageDetailsOutcome;
                typedef std::future<DescribeStorageDetailsOutcome> DescribeStorageDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageDetailsRequest&, DescribeStorageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageRegionsResponse> DescribeStorageRegionsOutcome;
                typedef std::future<DescribeStorageRegionsOutcome> DescribeStorageRegionsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageRegionsRequest&, DescribeStorageRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubAppIdsResponse> DescribeSubAppIdsOutcome;
                typedef std::future<DescribeSubAppIdsOutcome> DescribeSubAppIdsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSubAppIdsRequest&, DescribeSubAppIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubAppIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuperPlayerConfigsResponse> DescribeSuperPlayerConfigsOutcome;
                typedef std::future<DescribeSuperPlayerConfigsOutcome> DescribeSuperPlayerConfigsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeSuperPlayerConfigsRequest&, DescribeSuperPlayerConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuperPlayerConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTranscodeTemplatesResponse> DescribeTranscodeTemplatesOutcome;
                typedef std::future<DescribeTranscodeTemplatesOutcome> DescribeTranscodeTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeTranscodeTemplatesRequest&, DescribeTranscodeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTranscodeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVodDomainsResponse> DescribeVodDomainsOutcome;
                typedef std::future<DescribeVodDomainsOutcome> DescribeVodDomainsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeVodDomainsRequest&, DescribeVodDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVodDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditMediaResponse> EditMediaOutcome;
                typedef std::future<EditMediaOutcome> EditMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EditMediaRequest&, EditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceMediaByTemplateResponse> EnhanceMediaByTemplateOutcome;
                typedef std::future<EnhanceMediaByTemplateOutcome> EnhanceMediaByTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EnhanceMediaByTemplateRequest&, EnhanceMediaByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceMediaByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceMediaQualityResponse> EnhanceMediaQualityOutcome;
                typedef std::future<EnhanceMediaQualityOutcome> EnhanceMediaQualityOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::EnhanceMediaQualityRequest&, EnhanceMediaQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceMediaQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteFunctionResponse> ExecuteFunctionOutcome;
                typedef std::future<ExecuteFunctionOutcome> ExecuteFunctionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExecuteFunctionRequest&, ExecuteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteFunctionAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractCopyRightWatermarkResponse> ExtractCopyRightWatermarkOutcome;
                typedef std::future<ExtractCopyRightWatermarkOutcome> ExtractCopyRightWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractCopyRightWatermarkRequest&, ExtractCopyRightWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractCopyRightWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractTraceWatermarkResponse> ExtractTraceWatermarkOutcome;
                typedef std::future<ExtractTraceWatermarkOutcome> ExtractTraceWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractTraceWatermarkRequest&, ExtractTraceWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractTraceWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::FastEditMediaResponse> FastEditMediaOutcome;
                typedef std::future<FastEditMediaOutcome> FastEditMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::FastEditMediaRequest&, FastEditMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FastEditMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ForbidMediaDistributionResponse> ForbidMediaDistributionOutcome;
                typedef std::future<ForbidMediaDistributionOutcome> ForbidMediaDistributionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ForbidMediaDistributionRequest&, ForbidMediaDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForbidMediaDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::HandleCurrentPlaylistResponse> HandleCurrentPlaylistOutcome;
                typedef std::future<HandleCurrentPlaylistOutcome> HandleCurrentPlaylistOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::HandleCurrentPlaylistRequest&, HandleCurrentPlaylistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HandleCurrentPlaylistAsyncHandler;
                typedef Outcome<Core::Error, Model::InspectMediaQualityResponse> InspectMediaQualityOutcome;
                typedef std::future<InspectMediaQualityOutcome> InspectMediaQualityOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::InspectMediaQualityRequest&, InspectMediaQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InspectMediaQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::LiveRealTimeClipResponse> LiveRealTimeClipOutcome;
                typedef std::future<LiveRealTimeClipOutcome> LiveRealTimeClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::LiveRealTimeClipRequest&, LiveRealTimeClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LiveRealTimeClipAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageTaskResponse> ManageTaskOutcome;
                typedef std::future<ManageTaskOutcome> ManageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ManageTaskRequest&, ManageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIAnalysisTemplateResponse> ModifyAIAnalysisTemplateOutcome;
                typedef std::future<ModifyAIAnalysisTemplateOutcome> ModifyAIAnalysisTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIAnalysisTemplateRequest&, ModifyAIAnalysisTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIAnalysisTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIRecognitionTemplateResponse> ModifyAIRecognitionTemplateOutcome;
                typedef std::future<ModifyAIRecognitionTemplateOutcome> ModifyAIRecognitionTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAIRecognitionTemplateRequest&, ModifyAIRecognitionTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIRecognitionTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAdaptiveDynamicStreamingTemplateResponse> ModifyAdaptiveDynamicStreamingTemplateOutcome;
                typedef std::future<ModifyAdaptiveDynamicStreamingTemplateOutcome> ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAdaptiveDynamicStreamingTemplateRequest&, ModifyAdaptiveDynamicStreamingTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAdaptiveDynamicStreamingTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCDNDomainConfigResponse> ModifyCDNDomainConfigOutcome;
                typedef std::future<ModifyCDNDomainConfigOutcome> ModifyCDNDomainConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyCDNDomainConfigRequest&, ModifyCDNDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCDNDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClassResponse> ModifyClassOutcome;
                typedef std::future<ModifyClassOutcome> ModifyClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyClassRequest&, ModifyClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultStorageRegionResponse> ModifyDefaultStorageRegionOutcome;
                typedef std::future<ModifyDefaultStorageRegionOutcome> ModifyDefaultStorageRegionOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyDefaultStorageRegionRequest&, ModifyDefaultStorageRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultStorageRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnhanceMediaTemplateResponse> ModifyEnhanceMediaTemplateOutcome;
                typedef std::future<ModifyEnhanceMediaTemplateOutcome> ModifyEnhanceMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyEnhanceMediaTemplateRequest&, ModifyEnhanceMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnhanceMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEventConfigResponse> ModifyEventConfigOutcome;
                typedef std::future<ModifyEventConfigOutcome> ModifyEventConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyEventConfigRequest&, ModifyEventConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHeadTailTemplateResponse> ModifyHeadTailTemplateOutcome;
                typedef std::future<ModifyHeadTailTemplateOutcome> ModifyHeadTailTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyHeadTailTemplateRequest&, ModifyHeadTailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHeadTailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSpriteTemplateResponse> ModifyImageSpriteTemplateOutcome;
                typedef std::future<ModifyImageSpriteTemplateOutcome> ModifyImageSpriteTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyImageSpriteTemplateRequest&, ModifyImageSpriteTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSpriteTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJustInTimeTranscodeTemplateResponse> ModifyJustInTimeTranscodeTemplateOutcome;
                typedef std::future<ModifyJustInTimeTranscodeTemplateOutcome> ModifyJustInTimeTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyJustInTimeTranscodeTemplateRequest&, ModifyJustInTimeTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJustInTimeTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaInfoResponse> ModifyMediaInfoOutcome;
                typedef std::future<ModifyMediaInfoOutcome> ModifyMediaInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaInfoRequest&, ModifyMediaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaStorageClassResponse> ModifyMediaStorageClassOutcome;
                typedef std::future<ModifyMediaStorageClassOutcome> ModifyMediaStorageClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaStorageClassRequest&, ModifyMediaStorageClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaStorageClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQualityInspectTemplateResponse> ModifyQualityInspectTemplateOutcome;
                typedef std::future<ModifyQualityInspectTemplateOutcome> ModifyQualityInspectTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyQualityInspectTemplateRequest&, ModifyQualityInspectTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQualityInspectTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRebuildMediaTemplateResponse> ModifyRebuildMediaTemplateOutcome;
                typedef std::future<ModifyRebuildMediaTemplateOutcome> ModifyRebuildMediaTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyRebuildMediaTemplateRequest&, ModifyRebuildMediaTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRebuildMediaTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReviewTemplateResponse> ModifyReviewTemplateOutcome;
                typedef std::future<ModifyReviewTemplateOutcome> ModifyReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyReviewTemplateRequest&, ModifyReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoundPlayResponse> ModifyRoundPlayOutcome;
                typedef std::future<ModifyRoundPlayOutcome> ModifyRoundPlayOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyRoundPlayRequest&, ModifyRoundPlayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoundPlayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySampleSnapshotTemplateResponse> ModifySampleSnapshotTemplateOutcome;
                typedef std::future<ModifySampleSnapshotTemplateOutcome> ModifySampleSnapshotTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySampleSnapshotTemplateRequest&, ModifySampleSnapshotTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySampleSnapshotTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotByTimeOffsetTemplateResponse> ModifySnapshotByTimeOffsetTemplateOutcome;
                typedef std::future<ModifySnapshotByTimeOffsetTemplateOutcome> ModifySnapshotByTimeOffsetTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySnapshotByTimeOffsetTemplateRequest&, ModifySnapshotByTimeOffsetTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotByTimeOffsetTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubAppIdInfoResponse> ModifySubAppIdInfoOutcome;
                typedef std::future<ModifySubAppIdInfoOutcome> ModifySubAppIdInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdInfoRequest&, ModifySubAppIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubAppIdStatusResponse> ModifySubAppIdStatusOutcome;
                typedef std::future<ModifySubAppIdStatusOutcome> ModifySubAppIdStatusOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySubAppIdStatusRequest&, ModifySubAppIdStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubAppIdStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySuperPlayerConfigResponse> ModifySuperPlayerConfigOutcome;
                typedef std::future<ModifySuperPlayerConfigOutcome> ModifySuperPlayerConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifySuperPlayerConfigRequest&, ModifySuperPlayerConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySuperPlayerConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTranscodeTemplateResponse> ModifyTranscodeTemplateOutcome;
                typedef std::future<ModifyTranscodeTemplateOutcome> ModifyTranscodeTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyTranscodeTemplateRequest&, ModifyTranscodeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTranscodeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVodDomainAccelerateConfigResponse> ModifyVodDomainAccelerateConfigOutcome;
                typedef std::future<ModifyVodDomainAccelerateConfigOutcome> ModifyVodDomainAccelerateConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyVodDomainAccelerateConfigRequest&, ModifyVodDomainAccelerateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVodDomainAccelerateConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVodDomainConfigResponse> ModifyVodDomainConfigOutcome;
                typedef std::future<ModifyVodDomainConfigOutcome> ModifyVodDomainConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyVodDomainConfigRequest&, ModifyVodDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVodDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWatermarkTemplateResponse> ModifyWatermarkTemplateOutcome;
                typedef std::future<ModifyWatermarkTemplateOutcome> ModifyWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWatermarkTemplateRequest&, ModifyWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWordSampleResponse> ModifyWordSampleOutcome;
                typedef std::future<ModifyWordSampleOutcome> ModifyWordSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyWordSampleRequest&, ModifyWordSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWordSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseStreamingManifestResponse> ParseStreamingManifestOutcome;
                typedef std::future<ParseStreamingManifestOutcome> ParseStreamingManifestOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ParseStreamingManifestRequest&, ParseStreamingManifestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseStreamingManifestAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaResponse> ProcessMediaOutcome;
                typedef std::future<ProcessMediaOutcome> ProcessMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaRequest&, ProcessMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByMPSResponse> ProcessMediaByMPSOutcome;
                typedef std::future<ProcessMediaByMPSOutcome> ProcessMediaByMPSOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByMPSRequest&, ProcessMediaByMPSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByMPSAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByProcedureResponse> ProcessMediaByProcedureOutcome;
                typedef std::future<ProcessMediaByProcedureOutcome> ProcessMediaByProcedureOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByProcedureRequest&, ProcessMediaByProcedureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByProcedureAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMediaByUrlResponse> ProcessMediaByUrlOutcome;
                typedef std::future<ProcessMediaByUrlOutcome> ProcessMediaByUrlOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessMediaByUrlRequest&, ProcessMediaByUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMediaByUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::PullEventsResponse> PullEventsOutcome;
                typedef std::future<PullEventsOutcome> PullEventsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullEventsRequest&, PullEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::PullUploadResponse> PullUploadOutcome;
                typedef std::future<PullUploadOutcome> PullUploadOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PullUploadRequest&, PullUploadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullUploadAsyncHandler;
                typedef Outcome<Core::Error, Model::PushUrlCacheResponse> PushUrlCacheOutcome;
                typedef std::future<PushUrlCacheOutcome> PushUrlCacheOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::PushUrlCacheRequest&, PushUrlCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::RebuildMediaResponse> RebuildMediaOutcome;
                typedef std::future<RebuildMediaOutcome> RebuildMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RebuildMediaRequest&, RebuildMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebuildMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::RebuildMediaByTemplateResponse> RebuildMediaByTemplateOutcome;
                typedef std::future<RebuildMediaByTemplateOutcome> RebuildMediaByTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RebuildMediaByTemplateRequest&, RebuildMediaByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebuildMediaByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshUrlCacheResponse> RefreshUrlCacheOutcome;
                typedef std::future<RefreshUrlCacheOutcome> RefreshUrlCacheOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RefreshUrlCacheRequest&, RefreshUrlCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshUrlCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWatermarkResponse> RemoveWatermarkOutcome;
                typedef std::future<RemoveWatermarkOutcome> RemoveWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RemoveWatermarkRequest&, RemoveWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetProcedureTemplateResponse> ResetProcedureTemplateOutcome;
                typedef std::future<ResetProcedureTemplateOutcome> ResetProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ResetProcedureTemplateRequest&, ResetProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreMediaResponse> RestoreMediaOutcome;
                typedef std::future<RestoreMediaOutcome> RestoreMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::RestoreMediaRequest&, RestoreMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::ReviewAudioVideoResponse> ReviewAudioVideoOutcome;
                typedef std::future<ReviewAudioVideoOutcome> ReviewAudioVideoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ReviewAudioVideoRequest&, ReviewAudioVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviewAudioVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::ReviewImageResponse> ReviewImageOutcome;
                typedef std::future<ReviewImageOutcome> ReviewImageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ReviewImageRequest&, ReviewImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviewImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchMediaResponse> SearchMediaOutcome;
                typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SearchMediaRequest&, SearchMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDrmKeyProviderInfoResponse> SetDrmKeyProviderInfoOutcome;
                typedef std::future<SetDrmKeyProviderInfoOutcome> SetDrmKeyProviderInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetDrmKeyProviderInfoRequest&, SetDrmKeyProviderInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDrmKeyProviderInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVodDomainCertificateResponse> SetVodDomainCertificateOutcome;
                typedef std::future<SetVodDomainCertificateOutcome> SetVodDomainCertificateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetVodDomainCertificateRequest&, SetVodDomainCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVodDomainCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::SimpleHlsClipResponse> SimpleHlsClipOutcome;
                typedef std::future<SimpleHlsClipOutcome> SimpleHlsClipOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SimpleHlsClipRequest&, SimpleHlsClipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SimpleHlsClipAsyncHandler;
                typedef Outcome<Core::Error, Model::SplitMediaResponse> SplitMediaOutcome;
                typedef std::future<SplitMediaOutcome> SplitMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SplitMediaRequest&, SplitMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SplitMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCDNDomainResponse> StartCDNDomainOutcome;
                typedef std::future<StartCDNDomainOutcome> StartCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::StartCDNDomainRequest&, StartCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDomainRecordResponse> VerifyDomainRecordOutcome;
                typedef std::future<VerifyDomainRecordOutcome> VerifyDomainRecordOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::VerifyDomainRecordRequest&, VerifyDomainRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDomainRecordAsyncHandler;



                /**
                 ** This API is used to apply for uploading a media file (and cover file) to VOD and obtain the metadata of file storage (including upload path and upload signature) for subsequent use by the uploading API.
* For the detailed upload process, please see [Overview of Upload from Client](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                 * @param req ApplyUploadRequest
                 * @return ApplyUploadOutcome
                 */
                ApplyUploadOutcome ApplyUpload(const Model::ApplyUploadRequest &request);
                void ApplyUploadAsync(const Model::ApplyUploadRequest& request, const ApplyUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUploadOutcomeCallable ApplyUploadCallable(const Model::ApplyUploadRequest& request);

                /**
                 *This API is used to associate/disassociate subtitles with/from a media file of a specific adaptive bitrate streaming template ID.
                 * @param req AttachMediaSubtitlesRequest
                 * @return AttachMediaSubtitlesOutcome
                 */
                AttachMediaSubtitlesOutcome AttachMediaSubtitles(const Model::AttachMediaSubtitlesRequest &request);
                void AttachMediaSubtitlesAsync(const Model::AttachMediaSubtitlesRequest& request, const AttachMediaSubtitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachMediaSubtitlesOutcomeCallable AttachMediaSubtitlesCallable(const Model::AttachMediaSubtitlesRequest& request);

                /**
                 *Clone CDN Domain.
                 * @param req CloneCDNDomainRequest
                 * @return CloneCDNDomainOutcome
                 */
                CloneCDNDomainOutcome CloneCDNDomain(const Model::CloneCDNDomainRequest &request);
                void CloneCDNDomainAsync(const Model::CloneCDNDomainRequest& request, const CloneCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneCDNDomainOutcomeCallable CloneCDNDomainCallable(const Model::CloneCDNDomainRequest& request);

                /**
                 *This API is used to confirm the result of uploading a media file (and cover file) to VOD, store the media information, and return the playback address and ID of the file.
                 * @param req CommitUploadRequest
                 * @return CommitUploadOutcome
                 */
                CommitUploadOutcome CommitUpload(const Model::CommitUploadRequest &request);
                void CommitUploadAsync(const Model::CommitUploadRequest& request, const CommitUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitUploadOutcomeCallable CommitUploadCallable(const Model::CommitUploadRequest& request);

                /**
                 *This API is used to compose a media file. You can use it to do the following:

1. **Rotation/Flipping**: Rotate a video or image by a specific angle or flip a video or image.
2. **Audio control**: Increase/Lower the volume of an audio/video file or mute an audio/video file.
3. **Overlaying**: Overlay videos/images in a specified sequence to achieve the picture-in-picture effect.
4. **Audio mixing**: Mix the audios of audio/video files.
5 **Audio extraction**: Extract audio from a video.
6. **Clipping**: Clip segments from audio/video files according to a specified start and end time.
7. **Splicing**: Splice videos/audios/images in a specified sequence.
8. **Transition**: Add transition effects between video segments or images that are spliced together.

The output file is in MP4 or MP3 format. In the callback for media composition, the event type is [ComposeMediaComplete](https://intl.cloud.tencent.com/document/product/266/43000?from_cn_redirect=1).
                 * @param req ComposeMediaRequest
                 * @return ComposeMediaOutcome
                 */
                ComposeMediaOutcome ComposeMedia(const Model::ComposeMediaRequest &request);
                void ComposeMediaAsync(const Model::ComposeMediaRequest& request, const ComposeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposeMediaOutcomeCallable ComposeMediaCallable(const Model::ComposeMediaRequest& request);

                /**
                 ** After the `PullEvents` API is called to get an event, this API must be called to confirm that the message has been received;
* After the event handler is obtained, the validity period of waiting for confirmation is 30 seconds. If the wait exceeds 30 seconds, a parameter error will be reported (4000);
* For more information, please see the [reliable callback](https://intl.cloud.tencent.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83) of event notification.
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
                 *This API is used for adding domain names to VOD. A user can add up to 20 domain names. 1. After the domain name is added successfully, VOD will carry out the deployment of the domain name. It takes approximately 2 minutes for the domain name to change from the deployment status to the online status.
                 * @param req CreateCDNDomainRequest
                 * @return CreateCDNDomainOutcome
                 */
                CreateCDNDomainOutcome CreateCDNDomain(const Model::CreateCDNDomainRequest &request);
                void CreateCDNDomainAsync(const Model::CreateCDNDomainRequest& request, const CreateCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCDNDomainOutcomeCallable CreateCDNDomainCallable(const Model::CreateCDNDomainRequest& request);

                /**
                 ** This API is used to categorize media assets for management;
* It does not affect the categories of existing media assets. If you want to modify the category of a media asset, call the [ModifyMediaInfo](https://intl.cloud.tencent.com/document/product/266/31762?from_cn_redirect=1) API.
* There can be up to 4 levels of categories.
* One category can have up to 500 subcategories under it.
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 *Initiate an adaptive bitrate streaming processing task, with the following features:
1. Output HLS and MPEG-DASH adaptive streams based on the specified templates;
2. DRM options for the adaptive bitrate streaming include no encryption, Widevine, or FairPlay.
3. The output adaptive bitrate streaming can include multiple audio streams in different languages, with each language sourced from different media files.
4. The output adaptive stream can also include multiple subtitle streams in different languages.

**Notes:**
1. When using opening/closing credits, the video stream in the opening credit must be synchronized with the audio stream; otherwise, it will result in audio and video desynchronization in the output content.
2. If the output adaptive bitrate streaming needs to include audio from the main media, the FileId of the main media must be specified in the AudioSet parameter.
3. Subtitles must be added to the main media beforehand, which can be done through the ModifyMediaInfo API interface or the Video Management page in the console.
4. Support for TESHD transcoding and watermarking is currently not available.
                 * @param req CreateComplexAdaptiveDynamicStreamingTaskRequest
                 * @return CreateComplexAdaptiveDynamicStreamingTaskOutcome
                 */
                CreateComplexAdaptiveDynamicStreamingTaskOutcome CreateComplexAdaptiveDynamicStreamingTask(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest &request);
                void CreateComplexAdaptiveDynamicStreamingTaskAsync(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request, const CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable CreateComplexAdaptiveDynamicStreamingTaskCallable(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request);

                /**
                 *We have <font color=red>stopped updating</font> this API. Our new moderation templates can moderate audio/video as well as images. For details, see [CreateReviewTemplate](https://intl.cloud.tencent.com/document/api/266/84391?from_cn_redirect=1).
This API is used to create a custom audio/video moderation template. Up to 50 templates can be created in total.
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *This API is used for generating a subdomain resolution, prompting the customer to add it to the domain name resolution, used for wildcard domain and domain name retrieval verification of ownership.
                 * @param req CreateDomainVerifyRecordRequest
                 * @return CreateDomainVerifyRecordOutcome
                 */
                CreateDomainVerifyRecordOutcome CreateDomainVerifyRecord(const Model::CreateDomainVerifyRecordRequest &request);
                void CreateDomainVerifyRecordAsync(const Model::CreateDomainVerifyRecordRequest& request, const CreateDomainVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainVerifyRecordOutcomeCallable CreateDomainVerifyRecordCallable(const Model::CreateDomainVerifyRecordRequest& request);

                /**
                 *Create enhance media template.
                 * @param req CreateEnhanceMediaTemplateRequest
                 * @return CreateEnhanceMediaTemplateOutcome
                 */
                CreateEnhanceMediaTemplateOutcome CreateEnhanceMediaTemplate(const Model::CreateEnhanceMediaTemplateRequest &request);
                void CreateEnhanceMediaTemplateAsync(const Model::CreateEnhanceMediaTemplateRequest& request, const CreateEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnhanceMediaTemplateOutcomeCallable CreateEnhanceMediaTemplateCallable(const Model::CreateEnhanceMediaTemplateRequest& request);

                /**
                 *Create HeadTail Template.
                 * @param req CreateHeadTailTemplateRequest
                 * @return CreateHeadTailTemplateOutcome
                 */
                CreateHeadTailTemplateOutcome CreateHeadTailTemplate(const Model::CreateHeadTailTemplateRequest &request);
                void CreateHeadTailTemplateAsync(const Model::CreateHeadTailTemplateRequest& request, const CreateHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHeadTailTemplateOutcomeCallable CreateHeadTailTemplateCallable(const Model::CreateHeadTailTemplateRequest& request);

                /**
                 *This API is used to create a custom image processing template. A template can include at most 10 operations, for example, crop-scale-crop-blur-scale-crop-scale-crop-blur-scale. You can have up to 16 image processing templates.
                 * @param req CreateImageProcessingTemplateRequest
                 * @return CreateImageProcessingTemplateOutcome
                 */
                CreateImageProcessingTemplateOutcome CreateImageProcessingTemplate(const Model::CreateImageProcessingTemplateRequest &request);
                void CreateImageProcessingTemplateAsync(const Model::CreateImageProcessingTemplateRequest& request, const CreateImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageProcessingTemplateOutcomeCallable CreateImageProcessingTemplateCallable(const Model::CreateImageProcessingTemplateRequest& request);

                /**
                 *This API is used to create a custom image sprite generating template. Up to 16 templates can be created.
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *Create Just In Time Transcode Template.
                 * @param req CreateJustInTimeTranscodeTemplateRequest
                 * @return CreateJustInTimeTranscodeTemplateOutcome
                 */
                CreateJustInTimeTranscodeTemplateOutcome CreateJustInTimeTranscodeTemplate(const Model::CreateJustInTimeTranscodeTemplateRequest &request);
                void CreateJustInTimeTranscodeTemplateAsync(const Model::CreateJustInTimeTranscodeTemplateRequest& request, const CreateJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJustInTimeTranscodeTemplateOutcomeCallable CreateJustInTimeTranscodeTemplateCallable(const Model::CreateJustInTimeTranscodeTemplateRequest& request);

                /**
                 *This API is used to create samples for using facial features positioning and other technologies to perform video processing operations such as content recognition and inappropriate information recognition.
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
                 *Creates media quality inspection template.
                 * @param req CreateQualityInspectTemplateRequest
                 * @return CreateQualityInspectTemplateOutcome
                 */
                CreateQualityInspectTemplateOutcome CreateQualityInspectTemplate(const Model::CreateQualityInspectTemplateRequest &request);
                void CreateQualityInspectTemplateAsync(const Model::CreateQualityInspectTemplateRequest& request, const CreateQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityInspectTemplateOutcomeCallable CreateQualityInspectTemplateCallable(const Model::CreateQualityInspectTemplateRequest& request);

                /**
                 *Create rebuild media template.
                 * @param req CreateRebuildMediaTemplateRequest
                 * @return CreateRebuildMediaTemplateOutcome
                 */
                CreateRebuildMediaTemplateOutcome CreateRebuildMediaTemplate(const Model::CreateRebuildMediaTemplateRequest &request);
                void CreateRebuildMediaTemplateAsync(const Model::CreateRebuildMediaTemplateRequest& request, const CreateRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRebuildMediaTemplateOutcomeCallable CreateRebuildMediaTemplateCallable(const Model::CreateRebuildMediaTemplateRequest& request);

                /**
                 *This API is used to create a custom moderation template. Up to 50 templates can be created in total.
> The templates can only be used by the APIs [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) and [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1).
                 * @param req CreateReviewTemplateRequest
                 * @return CreateReviewTemplateOutcome
                 */
                CreateReviewTemplateOutcome CreateReviewTemplate(const Model::CreateReviewTemplateRequest &request);
                void CreateReviewTemplateAsync(const Model::CreateReviewTemplateRequest& request, const CreateReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReviewTemplateOutcomeCallable CreateReviewTemplateCallable(const Model::CreateReviewTemplateRequest& request);

                /**
                 *This API is used to create a playlist. You can create at most 100 playlists.
For each video on the list, you can either use the original file or a transcoding file.
The files must be in HLS format. Preferably, they should have the same bitrate and resolution.
                 * @param req CreateRoundPlayRequest
                 * @return CreateRoundPlayOutcome
                 */
                CreateRoundPlayOutcome CreateRoundPlay(const Model::CreateRoundPlayRequest &request);
                void CreateRoundPlayAsync(const Model::CreateRoundPlayRequest& request, const CreateRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoundPlayOutcomeCallable CreateRoundPlayCallable(const Model::CreateRoundPlayRequest& request);

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
                 *This API is used to enable storage in a region.
  1. When you activate VOD, the system will enable storage for you in certain regions. If you need to store data in another region, you can use this API to enable storage in that region.
  2. You can use the `DescribeStorageRegions` API to query all supported storage regions and the regions you have storage access to currently.
                 * @param req CreateStorageRegionRequest
                 * @return CreateStorageRegionOutcome
                 */
                CreateStorageRegionOutcome CreateStorageRegion(const Model::CreateStorageRegionRequest &request);
                void CreateStorageRegionAsync(const Model::CreateStorageRegionRequest& request, const CreateStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageRegionOutcomeCallable CreateStorageRegionCallable(const Model::CreateStorageRegionRequest& request);

                /**
                 *This API is used to create a VOD subapplication.
                 * @param req CreateSubAppIdRequest
                 * @return CreateSubAppIdOutcome
                 */
                CreateSubAppIdOutcome CreateSubAppId(const Model::CreateSubAppIdRequest &request);
                void CreateSubAppIdAsync(const Model::CreateSubAppIdRequest& request, const CreateSubAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubAppIdOutcomeCallable CreateSubAppIdCallable(const Model::CreateSubAppIdRequest& request);

                /**
                 *We have <font color='red'>stopped updating</font> this API. Currently, you no longer need a player configuration to use player signatures. For details, see [Player Signature](https://intl.cloud.tencent.com/document/product/266/45554?from_cn_redirect=1).
This API is used to create a player configuration. Up to 100 configurations can be created.
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
                 *This API is used to add an acceleration domain name to VOD. One user can add up to 20 domain names.
1. After a domain name is added, VOD will deploy it, and it takes about 2 minutes for the domain name status to change from `Deploying` to `Online`.
                 * @param req CreateVodDomainRequest
                 * @return CreateVodDomainOutcome
                 */
                CreateVodDomainOutcome CreateVodDomain(const Model::CreateVodDomainRequest &request);
                void CreateVodDomainAsync(const Model::CreateVodDomainRequest& request, const CreateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVodDomainOutcomeCallable CreateVodDomainCallable(const Model::CreateVodDomainRequest& request);

                /**
                 *This API is used to create a custom watermarking template. Up to 1,000 templates can be created.
                 * @param req CreateWatermarkTemplateRequest
                 * @return CreateWatermarkTemplateOutcome
                 */
                CreateWatermarkTemplateOutcome CreateWatermarkTemplate(const Model::CreateWatermarkTemplateRequest &request);
                void CreateWatermarkTemplateAsync(const Model::CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkTemplateOutcomeCallable CreateWatermarkTemplateCallable(const Model::CreateWatermarkTemplateRequest& request);

                /**
                 *This API is used to create keyword samples in batches for using OCR and ASR technologies to perform video processing operations such as content recognition and inappropriate information recognition.
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
                 *Delete CDN Domain
                 * @param req DeleteCDNDomainRequest
                 * @return DeleteCDNDomainOutcome
                 */
                DeleteCDNDomainOutcome DeleteCDNDomain(const Model::DeleteCDNDomainRequest &request);
                void DeleteCDNDomainAsync(const Model::DeleteCDNDomainRequest& request, const DeleteCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCDNDomainOutcomeCallable DeleteCDNDomainCallable(const Model::DeleteCDNDomainRequest& request);

                /**
                 ** A category can be deleted only if it has no subcategories and associated media files;
* Otherwise, [delete the media files](https://intl.cloud.tencent.com/document/product/266/31764?from_cn_redirect=1) and subcategories first before deleting the category.
                 * @param req DeleteClassRequest
                 * @return DeleteClassOutcome
                 */
                DeleteClassOutcome DeleteClass(const Model::DeleteClassRequest &request);
                void DeleteClassAsync(const Model::DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClassOutcomeCallable DeleteClassCallable(const Model::DeleteClassRequest& request);

                /**
                 *We have <font color=red>stopped updating</font> this API. Our new moderation templates can moderate audio/video as well as images. For details, see [DeleteReviewTemplate](https://intl.cloud.tencent.com/document/api/266/84390?from_cn_redirect=1).
This API is used to delete a custom audio/video moderation template.
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *Delete Enhance Media template
                 * @param req DeleteEnhanceMediaTemplateRequest
                 * @return DeleteEnhanceMediaTemplateOutcome
                 */
                DeleteEnhanceMediaTemplateOutcome DeleteEnhanceMediaTemplate(const Model::DeleteEnhanceMediaTemplateRequest &request);
                void DeleteEnhanceMediaTemplateAsync(const Model::DeleteEnhanceMediaTemplateRequest& request, const DeleteEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnhanceMediaTemplateOutcomeCallable DeleteEnhanceMediaTemplateCallable(const Model::DeleteEnhanceMediaTemplateRequest& request);

                /**
                 *Delete HeadTail Template
                 * @param req DeleteHeadTailTemplateRequest
                 * @return DeleteHeadTailTemplateOutcome
                 */
                DeleteHeadTailTemplateOutcome DeleteHeadTailTemplate(const Model::DeleteHeadTailTemplateRequest &request);
                void DeleteHeadTailTemplateAsync(const Model::DeleteHeadTailTemplateRequest& request, const DeleteHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHeadTailTemplateOutcomeCallable DeleteHeadTailTemplateCallable(const Model::DeleteHeadTailTemplateRequest& request);

                /**
                 *This API is used to delete an image processing template.
                 * @param req DeleteImageProcessingTemplateRequest
                 * @return DeleteImageProcessingTemplateOutcome
                 */
                DeleteImageProcessingTemplateOutcome DeleteImageProcessingTemplate(const Model::DeleteImageProcessingTemplateRequest &request);
                void DeleteImageProcessingTemplateAsync(const Model::DeleteImageProcessingTemplateRequest& request, const DeleteImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageProcessingTemplateOutcomeCallable DeleteImageProcessingTemplateCallable(const Model::DeleteImageProcessingTemplateRequest& request);

                /**
                 *This API is used to delete an image sprite generating template.
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *Delete Just In Time Transcode Template.
                 * @param req DeleteJustInTimeTranscodeTemplateRequest
                 * @return DeleteJustInTimeTranscodeTemplateOutcome
                 */
                DeleteJustInTimeTranscodeTemplateOutcome DeleteJustInTimeTranscodeTemplate(const Model::DeleteJustInTimeTranscodeTemplateRequest &request);
                void DeleteJustInTimeTranscodeTemplateAsync(const Model::DeleteJustInTimeTranscodeTemplateRequest& request, const DeleteJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJustInTimeTranscodeTemplateOutcomeCallable DeleteJustInTimeTranscodeTemplateCallable(const Model::DeleteJustInTimeTranscodeTemplateRequest& request);

                /**
                 ** This API is used to delete a media file and its processed files, such as the transcoded video files, image sprites, screenshots, and videos for publishing on WeChat.
* You can delete the original files, transcoded video files, and videos for publishing on WeChat, etc. of videos with specified IDs.
* Note: after the original file of a video is deleted, you cannot transcode the video, publish it on WeChat, or perform other operations on it.
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *This API is used to delete samples according to sample IDs.
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *Delete user-created task flow templates.
                 * @param req DeleteProcedureTemplateRequest
                 * @return DeleteProcedureTemplateOutcome
                 */
                DeleteProcedureTemplateOutcome DeleteProcedureTemplate(const Model::DeleteProcedureTemplateRequest &request);
                void DeleteProcedureTemplateAsync(const Model::DeleteProcedureTemplateRequest& request, const DeleteProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcedureTemplateOutcomeCallable DeleteProcedureTemplateCallable(const Model::DeleteProcedureTemplateRequest& request);

                /**
                 *Deletes media quality inspection template.
                 * @param req DeleteQualityInspectTemplateRequest
                 * @return DeleteQualityInspectTemplateOutcome
                 */
                DeleteQualityInspectTemplateOutcome DeleteQualityInspectTemplate(const Model::DeleteQualityInspectTemplateRequest &request);
                void DeleteQualityInspectTemplateAsync(const Model::DeleteQualityInspectTemplateRequest& request, const DeleteQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQualityInspectTemplateOutcomeCallable DeleteQualityInspectTemplateCallable(const Model::DeleteQualityInspectTemplateRequest& request);

                /**
                 *Delete rebuild media template.
                 * @param req DeleteRebuildMediaTemplateRequest
                 * @return DeleteRebuildMediaTemplateOutcome
                 */
                DeleteRebuildMediaTemplateOutcome DeleteRebuildMediaTemplate(const Model::DeleteRebuildMediaTemplateRequest &request);
                void DeleteRebuildMediaTemplateAsync(const Model::DeleteRebuildMediaTemplateRequest& request, const DeleteRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRebuildMediaTemplateOutcomeCallable DeleteRebuildMediaTemplateCallable(const Model::DeleteRebuildMediaTemplateRequest& request);

                /**
                 *This API is used to delete a custom moderation template.
> The templates can only be used by the APIs [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) and [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1).
                 * @param req DeleteReviewTemplateRequest
                 * @return DeleteReviewTemplateOutcome
                 */
                DeleteReviewTemplateOutcome DeleteReviewTemplate(const Model::DeleteReviewTemplateRequest &request);
                void DeleteReviewTemplateAsync(const Model::DeleteReviewTemplateRequest& request, const DeleteReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReviewTemplateOutcomeCallable DeleteReviewTemplateCallable(const Model::DeleteReviewTemplateRequest& request);

                /**
                 *This API is used to delete a playlist.
                 * @param req DeleteRoundPlayRequest
                 * @return DeleteRoundPlayOutcome
                 */
                DeleteRoundPlayOutcome DeleteRoundPlay(const Model::DeleteRoundPlayRequest &request);
                void DeleteRoundPlayAsync(const Model::DeleteRoundPlayRequest& request, const DeleteRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoundPlayOutcomeCallable DeleteRoundPlayCallable(const Model::DeleteRoundPlayRequest& request);

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
                 *We have <font color='red'>stopped updating</font> this API. Currently, you no longer need a player configuration to use player signatures. For details, see [Player Signature](https://intl.cloud.tencent.com/document/product/266/45554?from_cn_redirect=1).
This API is used to delete a player configuration.  
*Note: Preset player configurations cannot be deleted.*
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
                 *This API is used to delete an acceleration domain name from VOD.
1. Before deleting a domain name, disable its acceleration in all regions.
                 * @param req DeleteVodDomainRequest
                 * @return DeleteVodDomainOutcome
                 */
                DeleteVodDomainOutcome DeleteVodDomain(const Model::DeleteVodDomainRequest &request);
                void DeleteVodDomainAsync(const Model::DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVodDomainOutcomeCallable DeleteVodDomainCallable(const Model::DeleteVodDomainRequest& request);

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
                 *This API is used to get the list of video content analysis templates based on unique template ID. The returned result includes all eligible custom and [preset video content analysis templates](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.88.86.E6.9E.90.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *This API is used to get the list of video content recognition templates based on unique template ID. The return result includes all eligible custom and [preset video content recognition templates](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E8.AF.86.E5.88.AB.E6.A8.A1.E6.9D.BF).
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
                 *Describe CDN Domains
                 * @param req DescribeCDNDomainsRequest
                 * @return DescribeCDNDomainsOutcome
                 */
                DescribeCDNDomainsOutcome DescribeCDNDomains(const Model::DescribeCDNDomainsRequest &request);
                void DescribeCDNDomainsAsync(const Model::DescribeCDNDomainsRequest& request, const DescribeCDNDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNDomainsOutcomeCallable DescribeCDNDomainsCallable(const Model::DescribeCDNDomainsRequest& request);

                /**
                 *This API is used to query CDN bandwidth, traffic, and other data of VOD domain names.
* The query period is up to 90 days.
* You can query data of different service regions.
* You can query data of Chinese mainland by region and ISP.
                 * @param req DescribeCDNStatDetailsRequest
                 * @return DescribeCDNStatDetailsOutcome
                 */
                DescribeCDNStatDetailsOutcome DescribeCDNStatDetails(const Model::DescribeCDNStatDetailsRequest &request);
                void DescribeCDNStatDetailsAsync(const Model::DescribeCDNStatDetailsRequest& request, const DescribeCDNStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNStatDetailsOutcomeCallable DescribeCDNStatDetailsCallable(const Model::DescribeCDNStatDetailsRequest& request);

                /**
                 *This API is used to query the CDN statistics of VOD such as traffic and bandwidth.
   1. CDN usage data is retained on the system side for 13 months, while you can only query the CDN usage data for the most recent 365 days via the API.If you need to retrieve historical usage data beyond 365 days, please contact us.
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
                 *This API is used to query the download links of CDN access logs of a VOD domain name.
    1. Only download links of CDN logs for the last 30 days can be queried.
    2. By default, CDN generates a log file every hour. If there is no CDN access for a certain hour, no log file will be generated for the hour.    
    3. A CDN log download link is valid for 24 hours.
                 * @param req DescribeCdnLogsRequest
                 * @return DescribeCdnLogsOutcome
                 */
                DescribeCdnLogsOutcome DescribeCdnLogs(const Model::DescribeCdnLogsRequest &request);
                void DescribeCdnLogsAsync(const Model::DescribeCdnLogsRequest& request, const DescribeCdnLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnLogsOutcomeCallable DescribeCdnLogsCallable(const Model::DescribeCdnLogsRequest& request);

                /**
                 *This interface returns client upload acceleration statistics within the query time range. 
 1. You can query the client upload acceleration statistics in the last 365 days. 
 2. The query time span does not exceed 90 days. 
 3. If the query time span exceeds 1 day, data with day granularity will be returned. Otherwise, data with 5-minute granularity will be returned.
                 * @param req DescribeClientUploadAccelerationUsageDataRequest
                 * @return DescribeClientUploadAccelerationUsageDataOutcome
                 */
                DescribeClientUploadAccelerationUsageDataOutcome DescribeClientUploadAccelerationUsageData(const Model::DescribeClientUploadAccelerationUsageDataRequest &request);
                void DescribeClientUploadAccelerationUsageDataAsync(const Model::DescribeClientUploadAccelerationUsageDataRequest& request, const DescribeClientUploadAccelerationUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientUploadAccelerationUsageDataOutcomeCallable DescribeClientUploadAccelerationUsageDataCallable(const Model::DescribeClientUploadAccelerationUsageDataRequest& request);

                /**
                 *We have <font color=red>stopped updating</font> this API. Our new moderation templates can moderate audio/video as well as images. For details, see [DescribeReviewTemplates](https://intl.cloud.tencent.com/document/api/266/84389?from_cn_redirect=1).
This API is used to get the information of custom and [preset](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF) audio/video moderation templates based on template IDs.
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *Query current playlist of the round play.
                 * @param req DescribeCurrentPlaylistRequest
                 * @return DescribeCurrentPlaylistOutcome
                 */
                DescribeCurrentPlaylistOutcome DescribeCurrentPlaylist(const Model::DescribeCurrentPlaylistRequest &request);
                void DescribeCurrentPlaylistAsync(const Model::DescribeCurrentPlaylistRequest& request, const DescribeCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentPlaylistOutcomeCallable DescribeCurrentPlaylistCallable(const Model::DescribeCurrentPlaylistRequest& request);

                /**
                 *This API is used to query the download links of playback statistics files.
* You can query the download links of playback statistics files in the past year. The start and end dates for query cannot be more than 90 days apart.
* Every day, VOD will analyze CDN request logs of the previous day and then generate a playback statistics file.
* A playback statistics file includes playback times and traffic of media files.
* Notes on playback times:
    1. HLS file: VOD counts playback times when M3U8 files are accessed, but not when TS files are accessed.
    2. Other files (MP4 files for example): VOD does not count playback times when the playback request carries the `range` parameter and the `start` parameter in `range` is not `0`. In other cases, VOD counts playback times.
* Statistics on playback devices: VOD counts playback times on mobile clients when the playback request carries the `UserAgent` parameter which includes an identifier such as `Android` or `iPhone`. In other cases, VOD counts playback times on PC clients.
                 * @param req DescribeDailyPlayStatFileListRequest
                 * @return DescribeDailyPlayStatFileListOutcome
                 */
                DescribeDailyPlayStatFileListOutcome DescribeDailyPlayStatFileList(const Model::DescribeDailyPlayStatFileListRequest &request);
                void DescribeDailyPlayStatFileListAsync(const Model::DescribeDailyPlayStatFileListRequest& request, const DescribeDailyPlayStatFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyPlayStatFileListOutcomeCallable DescribeDailyPlayStatFileListCallable(const Model::DescribeDailyPlayStatFileListRequest& request);

                /**
                 *This API is used to query DRM key information.
                 * @param req DescribeDrmKeyProviderInfoRequest
                 * @return DescribeDrmKeyProviderInfoOutcome
                 */
                DescribeDrmKeyProviderInfoOutcome DescribeDrmKeyProviderInfo(const Model::DescribeDrmKeyProviderInfoRequest &request);
                void DescribeDrmKeyProviderInfoAsync(const Model::DescribeDrmKeyProviderInfoRequest& request, const DescribeDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrmKeyProviderInfoOutcomeCallable DescribeDrmKeyProviderInfoCallable(const Model::DescribeDrmKeyProviderInfoRequest& request);

                /**
                 *Describe Enhance Media Templates.
                 * @param req DescribeEnhanceMediaTemplatesRequest
                 * @return DescribeEnhanceMediaTemplatesOutcome
                 */
                DescribeEnhanceMediaTemplatesOutcome DescribeEnhanceMediaTemplates(const Model::DescribeEnhanceMediaTemplatesRequest &request);
                void DescribeEnhanceMediaTemplatesAsync(const Model::DescribeEnhanceMediaTemplatesRequest& request, const DescribeEnhanceMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnhanceMediaTemplatesOutcomeCallable DescribeEnhanceMediaTemplatesCallable(const Model::DescribeEnhanceMediaTemplatesRequest& request);

                /**
                 *Tencent Cloud VOD provides customers with services such as media upload, media management, and media processing. During or after the execution of these services, Tencent Cloud VOD also offers various corresponding event notifications to facilitate developers' awareness of the service processing status and to perform subsequent business operations. Developers can use this interface to query the current configuration of event notification reception methods, reception addresses, and which events have callback notification reception enabled.
                 * @param req DescribeEventConfigRequest
                 * @return DescribeEventConfigOutcome
                 */
                DescribeEventConfigOutcome DescribeEventConfig(const Model::DescribeEventConfigRequest &request);
                void DescribeEventConfigAsync(const Model::DescribeEventConfigRequest& request, const DescribeEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventConfigOutcomeCallable DescribeEventConfigCallable(const Model::DescribeEventConfigRequest& request);

                /**
                 *This API is used to get file attributes asynchronously.
- Currently, this API can only get the MD5 hash of a file.
- If the file queried is in HLS or DASH format, the attributes of the index file will be returned.
                 * @param req DescribeFileAttributesRequest
                 * @return DescribeFileAttributesOutcome
                 */
                DescribeFileAttributesOutcome DescribeFileAttributes(const Model::DescribeFileAttributesRequest &request);
                void DescribeFileAttributesAsync(const Model::DescribeFileAttributesRequest& request, const DescribeFileAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileAttributesOutcomeCallable DescribeFileAttributesCallable(const Model::DescribeFileAttributesRequest& request);

                /**
                 *Describe HeadTail Templates.
                 * @param req DescribeHeadTailTemplatesRequest
                 * @return DescribeHeadTailTemplatesOutcome
                 */
                DescribeHeadTailTemplatesOutcome DescribeHeadTailTemplates(const Model::DescribeHeadTailTemplatesRequest &request);
                void DescribeHeadTailTemplatesAsync(const Model::DescribeHeadTailTemplatesRequest& request, const DescribeHeadTailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHeadTailTemplatesOutcomeCallable DescribeHeadTailTemplatesCallable(const Model::DescribeHeadTailTemplatesRequest& request);

                /**
                 *This API is used to query image processing templates. You can specify the filters as well as the offset to start returning records from.
                 * @param req DescribeImageProcessingTemplatesRequest
                 * @return DescribeImageProcessingTemplatesOutcome
                 */
                DescribeImageProcessingTemplatesOutcome DescribeImageProcessingTemplates(const Model::DescribeImageProcessingTemplatesRequest &request);
                void DescribeImageProcessingTemplatesAsync(const Model::DescribeImageProcessingTemplatesRequest& request, const DescribeImageProcessingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageProcessingTemplatesOutcomeCallable DescribeImageProcessingTemplatesCallable(const Model::DescribeImageProcessingTemplatesRequest& request);

                /**
                 *This interface returns the image review usage information used every day within the query time range.
   1. You can query the image review statistics for the last 365 days.
   2. The query time span does not exceed 90 days.
   3. If the query time span exceeds 1 day, data with a granularity of days will be returned. Otherwise, data with a granularity of 5 minutes will be returned.
                 * @param req DescribeImageReviewUsageDataRequest
                 * @return DescribeImageReviewUsageDataOutcome
                 */
                DescribeImageReviewUsageDataOutcome DescribeImageReviewUsageData(const Model::DescribeImageReviewUsageDataRequest &request);
                void DescribeImageReviewUsageDataAsync(const Model::DescribeImageReviewUsageDataRequest& request, const DescribeImageReviewUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageReviewUsageDataOutcomeCallable DescribeImageReviewUsageDataCallable(const Model::DescribeImageReviewUsageDataRequest& request);

                /**
                 *This API is used to query the list of image sprite generating templates and supports paged queries by filters.
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *Describe Just In Time Transcode Templates.
                 * @param req DescribeJustInTimeTranscodeTemplatesRequest
                 * @return DescribeJustInTimeTranscodeTemplatesOutcome
                 */
                DescribeJustInTimeTranscodeTemplatesOutcome DescribeJustInTimeTranscodeTemplates(const Model::DescribeJustInTimeTranscodeTemplatesRequest &request);
                void DescribeJustInTimeTranscodeTemplatesAsync(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request, const DescribeJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJustInTimeTranscodeTemplatesOutcomeCallable DescribeJustInTimeTranscodeTemplatesCallable(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request);

                /**
                 *This interface returns information about the number of license requests per day within the query time range.
   1. You can query the license request statistics in the last 365 days.
   2. The query time span does not exceed 90 days.
   3. If the query time span exceeds 1 day, data with a granularity of days will be returned. Otherwise, data with a granularity of 5 minutes will be returned.
                 * @param req DescribeLicenseUsageDataRequest
                 * @return DescribeLicenseUsageDataOutcome
                 */
                DescribeLicenseUsageDataOutcome DescribeLicenseUsageData(const Model::DescribeLicenseUsageDataRequest &request);
                void DescribeLicenseUsageDataAsync(const Model::DescribeLicenseUsageDataRequest& request, const DescribeLicenseUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseUsageDataOutcomeCallable DescribeLicenseUsageDataCallable(const Model::DescribeLicenseUsageDataRequest& request);

                /**
                 *1. This API is used to get the information of multiple media files. Specifically, the information returned is as follows:
    1. `basicInfo`: Basic information including the file name, category, playback URL, and thumbnail.
    2. `metaData`: Metadata including the file size, duration, video stream information, and audio stream information.
    3. `transcodeInfo`: Transcoding information including the URLs, video stream parameters, and audio stream parameters of transcoding outputs.
    4. `animatedGraphicsInfo`: The information of the animated images (such as GIF images) generated.
    5. `sampleSnapshotInfo`: The information of the sampled screenshots generated.
    6. `imageSpriteInfo`: The information of the image sprites generated.
    7. `snapshotByTimeOffsetInfo`: The information of the time point screenshots generated.
    8. `keyFrameDescInfo`: The video timestamp information.
    9. `adaptiveDynamicStreamingInfo`: Adaptive bitrate information including the specifications, encryption type, and formats of the streams.
    10. `reviewInfo`: Moderation details for audio/video content and thumbnails.
2. You can specify what information to return.
                 * @param req DescribeMediaInfosRequest
                 * @return DescribeMediaInfosOutcome
                 */
                DescribeMediaInfosOutcome DescribeMediaInfos(const Model::DescribeMediaInfosRequest &request);
                void DescribeMediaInfosAsync(const Model::DescribeMediaInfosRequest& request, const DescribeMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaInfosOutcomeCallable DescribeMediaInfosCallable(const Model::DescribeMediaInfosRequest& request);

                /**
                 *This API is used to query the playback statistics of a media file at the specified granularity.
* You can query playback statistics in the past year.
* If the granularity is an hour, the start and end time cannot be more than seven days apart.
* If the granularity is a day, the start and end time cannot be more than 90 days apart.
                 * @param req DescribeMediaPlayStatDetailsRequest
                 * @return DescribeMediaPlayStatDetailsOutcome
                 */
                DescribeMediaPlayStatDetailsOutcome DescribeMediaPlayStatDetails(const Model::DescribeMediaPlayStatDetailsRequest &request);
                void DescribeMediaPlayStatDetailsAsync(const Model::DescribeMediaPlayStatDetailsRequest& request, const DescribeMediaPlayStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaPlayStatDetailsOutcomeCallable DescribeMediaPlayStatDetailsCallable(const Model::DescribeMediaPlayStatDetailsRequest& request);

                /**
                 *This API is used to query the information of video processing usage within the specified time range.
   1. Video processing usage data is retained on the system side for 13 months, and you may only query the usage data for the most recent 365 days via the API. If you need to retrieve historical usage data beyond 365 days, please contact us.
   2. The query time range cannot be more than 90 days.
                 * @param req DescribeMediaProcessUsageDataRequest
                 * @return DescribeMediaProcessUsageDataOutcome
                 */
                DescribeMediaProcessUsageDataOutcome DescribeMediaProcessUsageData(const Model::DescribeMediaProcessUsageDataRequest &request);
                void DescribeMediaProcessUsageDataAsync(const Model::DescribeMediaProcessUsageDataRequest& request, const DescribeMediaProcessUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaProcessUsageDataOutcomeCallable DescribeMediaProcessUsageDataCallable(const Model::DescribeMediaProcessUsageDataRequest& request);

                /**
                 *This API is used to query the information of samples and supports paginated queries by sample ID, name, and tag.
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
                 *Get media quality inspection Template List.
                 * @param req DescribeQualityInspectTemplatesRequest
                 * @return DescribeQualityInspectTemplatesOutcome
                 */
                DescribeQualityInspectTemplatesOutcome DescribeQualityInspectTemplates(const Model::DescribeQualityInspectTemplatesRequest &request);
                void DescribeQualityInspectTemplatesAsync(const Model::DescribeQualityInspectTemplatesRequest& request, const DescribeQualityInspectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityInspectTemplatesOutcomeCallable DescribeQualityInspectTemplatesCallable(const Model::DescribeQualityInspectTemplatesRequest& request);

                /**
                 *Describe Rebuild Media Templates
                 * @param req DescribeRebuildMediaTemplatesRequest
                 * @return DescribeRebuildMediaTemplatesOutcome
                 */
                DescribeRebuildMediaTemplatesOutcome DescribeRebuildMediaTemplates(const Model::DescribeRebuildMediaTemplatesRequest &request);
                void DescribeRebuildMediaTemplatesAsync(const Model::DescribeRebuildMediaTemplatesRequest& request, const DescribeRebuildMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebuildMediaTemplatesOutcomeCallable DescribeRebuildMediaTemplatesCallable(const Model::DescribeRebuildMediaTemplatesRequest& request);

                /**
                 *<b>This API is disused and replaced by [DescribeMediaProcessUsageData](https://intl.cloud.tencent.com/document/product/266/41464?from_cn_redirect=1).</b>

This API returns the video content duration for intelligent recognition in seconds per day within the queried period.

1. The API is used to query statistics on the video content duration for intelligent recognition in the last 365 days.
2. The query period is up to 90 days.
                 * @param req DescribeReviewDetailsRequest
                 * @return DescribeReviewDetailsOutcome
                 */
                DescribeReviewDetailsOutcome DescribeReviewDetails(const Model::DescribeReviewDetailsRequest &request);
                void DescribeReviewDetailsAsync(const Model::DescribeReviewDetailsRequest& request, const DescribeReviewDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewDetailsOutcomeCallable DescribeReviewDetailsCallable(const Model::DescribeReviewDetailsRequest& request);

                /**
                 *This API is used to get the information of moderation templates.
> The templates can only be used by the APIs [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) and [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1).
                 * @param req DescribeReviewTemplatesRequest
                 * @return DescribeReviewTemplatesOutcome
                 */
                DescribeReviewTemplatesOutcome DescribeReviewTemplates(const Model::DescribeReviewTemplatesRequest &request);
                void DescribeReviewTemplatesAsync(const Model::DescribeReviewTemplatesRequest& request, const DescribeReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewTemplatesOutcomeCallable DescribeReviewTemplatesCallable(const Model::DescribeReviewTemplatesRequest& request);

                /**
                 *This API is used to query playlists.
                 * @param req DescribeRoundPlaysRequest
                 * @return DescribeRoundPlaysOutcome
                 */
                DescribeRoundPlaysOutcome DescribeRoundPlays(const Model::DescribeRoundPlaysRequest &request);
                void DescribeRoundPlaysAsync(const Model::DescribeRoundPlaysRequest& request, const DescribeRoundPlaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoundPlaysOutcomeCallable DescribeRoundPlaysCallable(const Model::DescribeRoundPlaysRequest& request);

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
                 *This API is used to query VOD storage usage in bytes within the query period.
    1. Storage usage data is retained on the system side for 13 months, and you may only query the usage data for the most recent 365 days via the API. If you need to retrieve historical usage data beyond 365 days, please contact us.
    2. The query period is up to 90 days.
    3. The query period at minute-level granularity is up to 7 days.
                 * @param req DescribeStorageDetailsRequest
                 * @return DescribeStorageDetailsOutcome
                 */
                DescribeStorageDetailsOutcome DescribeStorageDetails(const Model::DescribeStorageDetailsRequest &request);
                void DescribeStorageDetailsAsync(const Model::DescribeStorageDetailsRequest& request, const DescribeStorageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDetailsOutcomeCallable DescribeStorageDetailsCallable(const Model::DescribeStorageDetailsRequest& request);

                /**
                 *This API is used to query the following information:
  1. All supported storage regions.
  2. The regions you have storage access to currently.
  3. The default storage region.
                 * @param req DescribeStorageRegionsRequest
                 * @return DescribeStorageRegionsOutcome
                 */
                DescribeStorageRegionsOutcome DescribeStorageRegions(const Model::DescribeStorageRegionsRequest &request);
                void DescribeStorageRegionsAsync(const Model::DescribeStorageRegionsRequest& request, const DescribeStorageRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageRegionsOutcomeCallable DescribeStorageRegionsCallable(const Model::DescribeStorageRegionsRequest& request);

                /**
                 *This API is used to query the list of the primary application and subapplications of the current account.
                 * @param req DescribeSubAppIdsRequest
                 * @return DescribeSubAppIdsOutcome
                 */
                DescribeSubAppIdsOutcome DescribeSubAppIds(const Model::DescribeSubAppIdsRequest &request);
                void DescribeSubAppIdsAsync(const Model::DescribeSubAppIdsRequest& request, const DescribeSubAppIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAppIdsOutcomeCallable DescribeSubAppIdsCallable(const Model::DescribeSubAppIdsRequest& request);

                /**
                 *We have <font color='red'>stopped updating</font> this API. Currently, you no longer need a player configuration to use player signatures. For details, see [Player Signature](https://intl.cloud.tencent.com/document/product/266/45554?from_cn_redirect=1).
This API is used to query player configurations. It supports pagination.
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
                 *This API is used to get the list of transcoding templates based on unique template ID. The return result includes all eligible custom and [preset transcoding templates](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeTranscodeTemplatesRequest
                 * @return DescribeTranscodeTemplatesOutcome
                 */
                DescribeTranscodeTemplatesOutcome DescribeTranscodeTemplates(const Model::DescribeTranscodeTemplatesRequest &request);
                void DescribeTranscodeTemplatesAsync(const Model::DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTemplatesOutcomeCallable DescribeTranscodeTemplatesCallable(const Model::DescribeTranscodeTemplatesRequest& request);

                /**
                 *This API is used to query the list of VOD domain names.
                 * @param req DescribeVodDomainsRequest
                 * @return DescribeVodDomainsOutcome
                 */
                DescribeVodDomainsOutcome DescribeVodDomains(const Model::DescribeVodDomainsRequest &request);
                void DescribeVodDomainsAsync(const Model::DescribeVodDomainsRequest& request, const DescribeVodDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVodDomainsOutcomeCallable DescribeVodDomainsCallable(const Model::DescribeVodDomainsRequest& request);

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
                 *Edit the video (cut, splice, etc.) to generate a new video. The editing functions include:

1. Edit a file in the VOD video to generate a new video;
2. Splice multiple files to generate a new video;
3. Edit multiple files and then splice them to generate a new video;
4. Directly generate a new video for a stream;
5. Edit a stream to generate a new video. Video;
6. Splice multiple streams to generate a new video;
7. Clip and then splice multiple streams to generate a new video. 

For the generated new video, you can also specify whether the generated video needs to execute the task flow. 

>When editing or splicing live streams, please make sure to do so after the stream is over. Otherwise the resulting video may be incomplete. 

If event notification is used, the type of event notification is [Video editing completed](https://intl.cloud.tencent.com/document/product/266/33794?from_cn_redirect=1).
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *Enhance Media By Template.
                 * @param req EnhanceMediaByTemplateRequest
                 * @return EnhanceMediaByTemplateOutcome
                 */
                EnhanceMediaByTemplateOutcome EnhanceMediaByTemplate(const Model::EnhanceMediaByTemplateRequest &request);
                void EnhanceMediaByTemplateAsync(const Model::EnhanceMediaByTemplateRequest& request, const EnhanceMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaByTemplateOutcomeCallable EnhanceMediaByTemplateCallable(const Model::EnhanceMediaByTemplateRequest& request);

                /**
                 *Initiate a Remaster task for audio and video media in VOD
                 * @param req EnhanceMediaQualityRequest
                 * @return EnhanceMediaQualityOutcome
                 */
                EnhanceMediaQualityOutcome EnhanceMediaQuality(const Model::EnhanceMediaQualityRequest &request);
                void EnhanceMediaQualityAsync(const Model::EnhanceMediaQualityRequest& request, const EnhanceMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaQualityOutcomeCallable EnhanceMediaQualityCallable(const Model::EnhanceMediaQualityRequest& request);

                /**
                 *This API is only used in special scenarios of custom development. Unless requested by VOD customer service, please do not call it.
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 *Extract CopyRight Watermark.
                 * @param req ExtractCopyRightWatermarkRequest
                 * @return ExtractCopyRightWatermarkOutcome
                 */
                ExtractCopyRightWatermarkOutcome ExtractCopyRightWatermark(const Model::ExtractCopyRightWatermarkRequest &request);
                void ExtractCopyRightWatermarkAsync(const Model::ExtractCopyRightWatermarkRequest& request, const ExtractCopyRightWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractCopyRightWatermarkOutcomeCallable ExtractCopyRightWatermarkCallable(const Model::ExtractCopyRightWatermarkRequest& request);

                /**
                 *This API is used to extract the user ID of a user that distributed a video containing a digital watermark.
                 * @param req ExtractTraceWatermarkRequest
                 * @return ExtractTraceWatermarkOutcome
                 */
                ExtractTraceWatermarkOutcome ExtractTraceWatermark(const Model::ExtractTraceWatermarkRequest &request);
                void ExtractTraceWatermarkAsync(const Model::ExtractTraceWatermarkRequest& request, const ExtractTraceWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractTraceWatermarkOutcomeCallable ExtractTraceWatermarkCallable(const Model::ExtractTraceWatermarkRequest& request);

                /**
                 *Implement quick concatenation and quick clipping for Tencent Cloud VOD's HLS videos to generate new media in HLS format. The video generated by quick concatenation or clipping will produce a new FileId and undergo solidification. After successful solidification, the new video file exists independently of the original input video and is not affected by deletions or other actions on the original video. <font color='red'>Note:</font> Enable the reception of persistence completed event notifications through the ModifyEvent config interface, and a PersistenceComplete type event notification will be received after successful solidification. Before receiving this event notification, operations such as deletion or cooling down of the original input video should not be performed, otherwise, abnormal playback may occur in the video generated by the concatenation and clipping.
                 * @param req FastEditMediaRequest
                 * @return FastEditMediaOutcome
                 */
                FastEditMediaOutcome FastEditMedia(const Model::FastEditMediaRequest &request);
                void FastEditMediaAsync(const Model::FastEditMediaRequest& request, const FastEditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FastEditMediaOutcomeCallable FastEditMediaCallable(const Model::FastEditMediaRequest& request);

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
                 *Operate the current play list . Supported operations include:<li> Insert: Insert a playing program into the current playlist.</li><li> Delete: Remove a playing program from the playlist.</li>
                 * @param req HandleCurrentPlaylistRequest
                 * @return HandleCurrentPlaylistOutcome
                 */
                HandleCurrentPlaylistOutcome HandleCurrentPlaylist(const Model::HandleCurrentPlaylistRequest &request);
                void HandleCurrentPlaylistAsync(const Model::HandleCurrentPlaylistRequest& request, const HandleCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleCurrentPlaylistOutcomeCallable HandleCurrentPlaylistCallable(const Model::HandleCurrentPlaylistRequest& request);

                /**
                 *Initiate media quality inspection task.
                 * @param req InspectMediaQualityRequest
                 * @return InspectMediaQualityOutcome
                 */
                InspectMediaQualityOutcome InspectMediaQuality(const Model::InspectMediaQualityRequest &request);
                void InspectMediaQualityAsync(const Model::InspectMediaQualityRequest& request, const InspectMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InspectMediaQualityOutcomeCallable InspectMediaQualityCallable(const Model::InspectMediaQualityRequest& request);

                /**
                 *Live broadcast real-time editing means that during the live broadcast process (that is, before the live broadcast has ended), customers can select a section of past live broadcast content to generate a new video (HLS format) in real time. Developers can share it immediately, or permanently Save it.

Tencent Cloud VOD supports two real-time editing modes:
- Editing and solidification: Save the edited video as an independent video with an independent FileId; suitable for scenes where the highlight clips are saved for a long time;
- Editing is not solidified: the edited video is attached to the live broadcast recording file and does not have an independent FileId; it is suitable for scenarios where highlight clips are **temporarily shared**.

Notice:
- The prerequisite for using the live broadcast real-time editing function is that the target live stream has the [Time Shift Replay](https://intl.cloud.tencent.com/document/product/267/32742?from_cn_redirect=1) function enabled.
- Live broadcast real-time editing is based on the m3u8 file generated by live broadcast recording, so its minimum editing accuracy is one ts slice, and it is impossible to achieve second-level or more precise editing accuracy.
- Since the stream may be interrupted during the live broadcast, the actual video duration generated by editing may be inconsistent with expectations. For example, the time interval for editing a live stream is from 2018-09-20T10:30:00Z to 2018-09-20T10:40:00Z. If the stream is interrupted during this time interval, the duration of the returned media asset file will be Less than 10 minutes, in which case it can be sensed via the output parameter <a href="#p_segmentset">SegmentSet</a>.

### Clip solidification
Clip solidification means saving the clipped video into an independent video (with an independent FileId). Its life cycle is not affected by the original live broadcast recording video (even if the original recording video is deleted, the editing results will not be affected in any way); it can also be subjected to secondary processing such as transcoding.

For example: for a complete football match, the original video recorded live may be as long as 2 hours. To save costs, the customer can store this video for 2 months, but for the "highlight moment" video that is edited in real time during the live broadcast However, you can specify a longer storage period, and at the same time, you can separately transcode the "highlight moments" video and other on-demand operations. At this time, you can choose the solution of real-time editing and solidification of the live broadcast.

The advantage of editing and curing is that its life cycle is independent of the original recorded video, and can be managed independently and stored for a long time.

<font color='red'>Notice:</font> If solidification is specified during clipping, enable the reception of persistence completed event notifications through the ModifyEventConfig interface. After successful solidification, an event notification of type PersistenceComplete will be received. Before receiving this event notification, operations such as deletion or cooling down of live recording videos should not be performed, otherwise, abnormal playback may occur in the video generated by the clipping.

### Clips are not solidified
The editing is not solidified, which means that the result of editing (m3u8 file) and the live recording video share the same ts fragment. The newly generated video is not an independent and complete video (no independent FileId, only playback URL), and its validity period is the same as the live broadcast. The validity period of the complete recorded video is the same. Once the video recorded during the live broadcast is deleted, the clip will also become unplayable.

The clip is not solidified. Because the clip result is not an independent video, it will not be included in on-demand media asset video management (for example, the total number of videos in the console will not count this clip), and this clip cannot be transcoded separately. Video processing operations.

The advantage of not solidifying editing is that its editing operation is very "lightweight" and does not generate additional storage overhead. However, its disadvantage is that the life cycle is the same as the original recorded video, and further video processing such as transcoding cannot be performed.
                 * @param req LiveRealTimeClipRequest
                 * @return LiveRealTimeClipOutcome
                 */
                LiveRealTimeClipOutcome LiveRealTimeClip(const Model::LiveRealTimeClipRequest &request);
                void LiveRealTimeClipAsync(const Model::LiveRealTimeClipRequest& request, const LiveRealTimeClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LiveRealTimeClipOutcomeCallable LiveRealTimeClipCallable(const Model::LiveRealTimeClipRequest& request);

                /**
                 *This API is used to manage initiated tasks.
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

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
                 *Modify CDN Domain Config.
                 * @param req ModifyCDNDomainConfigRequest
                 * @return ModifyCDNDomainConfigOutcome
                 */
                ModifyCDNDomainConfigOutcome ModifyCDNDomainConfig(const Model::ModifyCDNDomainConfigRequest &request);
                void ModifyCDNDomainConfigAsync(const Model::ModifyCDNDomainConfigRequest& request, const ModifyCDNDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCDNDomainConfigOutcomeCallable ModifyCDNDomainConfigCallable(const Model::ModifyCDNDomainConfigRequest& request);

                /**
                 *This API is used to modify the category of a media file.
                 * @param req ModifyClassRequest
                 * @return ModifyClassOutcome
                 */
                ModifyClassOutcome ModifyClass(const Model::ModifyClassRequest &request);
                void ModifyClassAsync(const Model::ModifyClassRequest& request, const ModifyClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClassOutcomeCallable ModifyClassCallable(const Model::ModifyClassRequest& request);

                /**
                 *We have <font color=red>stopped updating</font> this API. Our new moderation templates can moderate audio/video as well as images. For details, see [ModifyReviewTemplate](https://intl.cloud.tencent.com/document/api/266/84388?from_cn_redirect=1).
This API is used to modify a custom audio/video moderation template.
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *This API is used to set the default storage region. A file will be stored in the default region if no region is specified for file upload.
                 * @param req ModifyDefaultStorageRegionRequest
                 * @return ModifyDefaultStorageRegionOutcome
                 */
                ModifyDefaultStorageRegionOutcome ModifyDefaultStorageRegion(const Model::ModifyDefaultStorageRegionRequest &request);
                void ModifyDefaultStorageRegionAsync(const Model::ModifyDefaultStorageRegionRequest& request, const ModifyDefaultStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultStorageRegionOutcomeCallable ModifyDefaultStorageRegionCallable(const Model::ModifyDefaultStorageRegionRequest& request);

                /**
                 *Modify enhance media template.
                 * @param req ModifyEnhanceMediaTemplateRequest
                 * @return ModifyEnhanceMediaTemplateOutcome
                 */
                ModifyEnhanceMediaTemplateOutcome ModifyEnhanceMediaTemplate(const Model::ModifyEnhanceMediaTemplateRequest &request);
                void ModifyEnhanceMediaTemplateAsync(const Model::ModifyEnhanceMediaTemplateRequest& request, const ModifyEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnhanceMediaTemplateOutcomeCallable ModifyEnhanceMediaTemplateCallable(const Model::ModifyEnhanceMediaTemplateRequest& request);

                /**
                 *Tencent Cloud VOD provides customers with media upload, media management, media processing and other services. During or at the end of the execution of these services, Tencent Cloud On-Demand also provides various corresponding event notifications to facilitate developers to perceive the service processing status and Do the next business operation. 

Developers can achieve this by calling this interface:
- Set the type of callback notification received. Currently, there is [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) and [reliable notification based on message queue](https://www.tencentcloud.com/document/product/266/33948) two types. 
- For [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948), you can set the address of the 3.0 format callback. For the description of 3.0 format callback, see [Historical Format Callback](https://intl.cloud.tencent.com/document/product/266/33796?from_cn_redirect=1). 
- Select settings to receive or ignore notification events for specific event services.
                 * @param req ModifyEventConfigRequest
                 * @return ModifyEventConfigOutcome
                 */
                ModifyEventConfigOutcome ModifyEventConfig(const Model::ModifyEventConfigRequest &request);
                void ModifyEventConfigAsync(const Model::ModifyEventConfigRequest& request, const ModifyEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventConfigOutcomeCallable ModifyEventConfigCallable(const Model::ModifyEventConfigRequest& request);

                /**
                 *Modify HeadTail Template.
                 * @param req ModifyHeadTailTemplateRequest
                 * @return ModifyHeadTailTemplateOutcome
                 */
                ModifyHeadTailTemplateOutcome ModifyHeadTailTemplate(const Model::ModifyHeadTailTemplateRequest &request);
                void ModifyHeadTailTemplateAsync(const Model::ModifyHeadTailTemplateRequest& request, const ModifyHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHeadTailTemplateOutcomeCallable ModifyHeadTailTemplateCallable(const Model::ModifyHeadTailTemplateRequest& request);

                /**
                 *This API is used to modify a custom image sprite generating template.
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *Modify Just In Time Transcode Template.
                 * @param req ModifyJustInTimeTranscodeTemplateRequest
                 * @return ModifyJustInTimeTranscodeTemplateOutcome
                 */
                ModifyJustInTimeTranscodeTemplateOutcome ModifyJustInTimeTranscodeTemplate(const Model::ModifyJustInTimeTranscodeTemplateRequest &request);
                void ModifyJustInTimeTranscodeTemplateAsync(const Model::ModifyJustInTimeTranscodeTemplateRequest& request, const ModifyJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJustInTimeTranscodeTemplateOutcomeCallable ModifyJustInTimeTranscodeTemplateCallable(const Model::ModifyJustInTimeTranscodeTemplateRequest& request);

                /**
                 *This API is used to modify the attributes of a media file, including category, name, description, tag, expiration time, timestamp information, video thumbnail, and subtitle information.
                 * @param req ModifyMediaInfoRequest
                 * @return ModifyMediaInfoOutcome
                 */
                ModifyMediaInfoOutcome ModifyMediaInfo(const Model::ModifyMediaInfoRequest &request);
                void ModifyMediaInfoAsync(const Model::ModifyMediaInfoRequest& request, const ModifyMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaInfoOutcomeCallable ModifyMediaInfoCallable(const Model::ModifyMediaInfoRequest& request);

                /**
                 *This API is used to modify the storage class of media files.
If the current storage class is STANDARD, it can be changed to one of the following classes:
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP ARCHIVE</li>
If the current storage class is STANDARD_IA, it can be changed to one of the following classes:
<li>STANDARD</li>
<li>ARCHIVE</li>
<li>DEEP ARCHIVE</li>
If the current storage class is ARCHIVE, it can be changed to the following class:
<li>STANDARD</li>
If the current storage class is DEEP ARCHIVE, it can be changed to the following class:
<li>STANDARD</li>
                 * @param req ModifyMediaStorageClassRequest
                 * @return ModifyMediaStorageClassOutcome
                 */
                ModifyMediaStorageClassOutcome ModifyMediaStorageClass(const Model::ModifyMediaStorageClassRequest &request);
                void ModifyMediaStorageClassAsync(const Model::ModifyMediaStorageClassRequest& request, const ModifyMediaStorageClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaStorageClassOutcomeCallable ModifyMediaStorageClassCallable(const Model::ModifyMediaStorageClassRequest& request);

                /**
                 *This API is used to modify sample information according to the sample ID. You can modify the name and description, add, delete, and reset facial features or tags. Leave at least one image after deleting facial features. To leave no image, please use the reset operation.
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *Modifies media quality inspection template.
                 * @param req ModifyQualityInspectTemplateRequest
                 * @return ModifyQualityInspectTemplateOutcome
                 */
                ModifyQualityInspectTemplateOutcome ModifyQualityInspectTemplate(const Model::ModifyQualityInspectTemplateRequest &request);
                void ModifyQualityInspectTemplateAsync(const Model::ModifyQualityInspectTemplateRequest& request, const ModifyQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQualityInspectTemplateOutcomeCallable ModifyQualityInspectTemplateCallable(const Model::ModifyQualityInspectTemplateRequest& request);

                /**
                 *Modify Rebuild Media Template.
                 * @param req ModifyRebuildMediaTemplateRequest
                 * @return ModifyRebuildMediaTemplateOutcome
                 */
                ModifyRebuildMediaTemplateOutcome ModifyRebuildMediaTemplate(const Model::ModifyRebuildMediaTemplateRequest &request);
                void ModifyRebuildMediaTemplateAsync(const Model::ModifyRebuildMediaTemplateRequest& request, const ModifyRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRebuildMediaTemplateOutcomeCallable ModifyRebuildMediaTemplateCallable(const Model::ModifyRebuildMediaTemplateRequest& request);

                /**
                 *This API is used to modify a custom moderation template.
> The templates can only be used by the APIs [ReviewAudioVideo](https://intl.cloud.tencent.com/document/api/266/80283?from_cn_redirect=1) and [ReviewImage](https://intl.cloud.tencent.com/document/api/266/73217?from_cn_redirect=1).
                 * @param req ModifyReviewTemplateRequest
                 * @return ModifyReviewTemplateOutcome
                 */
                ModifyReviewTemplateOutcome ModifyReviewTemplate(const Model::ModifyReviewTemplateRequest &request);
                void ModifyReviewTemplateAsync(const Model::ModifyReviewTemplateRequest& request, const ModifyReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReviewTemplateOutcomeCallable ModifyReviewTemplateCallable(const Model::ModifyReviewTemplateRequest& request);

                /**
                 *This API is used to modify a playlist.
The modification will only take effect for new playback requests. For ongoing playback, the old playlist will be playable for seven days after the modification.
                 * @param req ModifyRoundPlayRequest
                 * @return ModifyRoundPlayOutcome
                 */
                ModifyRoundPlayOutcome ModifyRoundPlay(const Model::ModifyRoundPlayRequest &request);
                void ModifyRoundPlayAsync(const Model::ModifyRoundPlayRequest& request, const ModifyRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoundPlayOutcomeCallable ModifyRoundPlayCallable(const Model::ModifyRoundPlayRequest& request);

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
                 *We have <font color='red'>stopped updating</font> this API. Currently, you no longer need a player configuration to use player signatures. For details, see [Player Signature](https://intl.cloud.tencent.com/document/product/266/45554?from_cn_redirect=1).
This API is used to modify a player configuration.
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
                 *This API is used to modify the acceleration region of a domain name on VOD.
1. You can modify acceleration regions of only domain names whose status is `Online`.
                 * @param req ModifyVodDomainAccelerateConfigRequest
                 * @return ModifyVodDomainAccelerateConfigOutcome
                 */
                ModifyVodDomainAccelerateConfigOutcome ModifyVodDomainAccelerateConfig(const Model::ModifyVodDomainAccelerateConfigRequest &request);
                void ModifyVodDomainAccelerateConfigAsync(const Model::ModifyVodDomainAccelerateConfigRequest& request, const ModifyVodDomainAccelerateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainAccelerateConfigOutcomeCallable ModifyVodDomainAccelerateConfigCallable(const Model::ModifyVodDomainAccelerateConfigRequest& request);

                /**
                 *This API is used to modify domain name settings, such as the hotlink protection configuration.
1. You can modify settings of only domain names whose status is `Online`.
                 * @param req ModifyVodDomainConfigRequest
                 * @return ModifyVodDomainConfigOutcome
                 */
                ModifyVodDomainConfigOutcome ModifyVodDomainConfig(const Model::ModifyVodDomainConfigRequest &request);
                void ModifyVodDomainConfigAsync(const Model::ModifyVodDomainConfigRequest& request, const ModifyVodDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainConfigOutcomeCallable ModifyVodDomainConfigCallable(const Model::ModifyVodDomainConfigRequest& request);

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
                 *Initiate processing tasks for media file in VOD, including: 
1. Video transcoding (with Watermark); 
2. Video to animated image; 
3. Screencapturing the video at specified Time point;
4. Sampled screenshot of the video;
5. Generated Image sprite template from the video;
6. Generated a cover image from the video;
7. Adaptive Bitrate Streaming for the video (with encryption); 
8. Content Moderation (offensive Information, unsafe Information, inappropriate Information), it is <font color=red>not recommended</font> to use this API, recommend using [Video moderation(ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/50634) or [Image moderation(ReviewImage)](https://www.tencentcloud.com/document/api/266/47138);
9. Content analysis (tag, category, cover, frame-by-frame tag);
10. Content recognition (video intro and outro, face, Text, keyword, voice, Key object).

If using event notification, the event notification type is [task flow status change](https://www.tencentcloud.com/document/product/266/33953).
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *This API is used to utilize the media processing capability of Media Processing Service (MPS) to initiate media processing for videos on VOD. When the task is initiated, relevant MPS parameters must be filled in the MPSProcessMediaParams parameter in JSON format. For detailed task parameter configuration, please refer to the [ProcessMedia API](https://www.tencentcloud.com/document/product/1041/33640). 
Currently supported MPS features:
1. [Smart Erase](https://www.tencentcloud.com/document/product/1041/58269): This function blurs, de-blurs, or removes traces of logos, subtitles, faces, and license plates in the video, facilitating content dissemination and sharing. The new media generated by this task will be stored in a new FileId within the sub-application of VOD. 
> Media processing tasks initiated in this way: 
> 1. Task status and results are still queried on the on-demand platform. Use [DescribeTaskDetail](https://www.tencentcloud.com/document/product/266/34129) or [DescribeTasks](https://www.tencentcloud.com/document/product/266/37559) to query the task. 
> 2. Usage and billing for related functions will be provided on the MPS platform. Therefore, you must activate MPS service before using this feature. 
> 3. This feature is currently in internal testing. If you would like to test it, please contact us for support.
                 * @param req ProcessMediaByMPSRequest
                 * @return ProcessMediaByMPSOutcome
                 */
                ProcessMediaByMPSOutcome ProcessMediaByMPS(const Model::ProcessMediaByMPSRequest &request);
                void ProcessMediaByMPSAsync(const Model::ProcessMediaByMPSRequest& request, const ProcessMediaByMPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByMPSOutcomeCallable ProcessMediaByMPSCallable(const Model::ProcessMediaByMPSRequest& request);

                /**
                 *This API is used to start a task flow on a video.
There are two ways to create a task flow template:
1. Create and modify a task flow template in the console;
2. Create a task flow template using the `CreateProcedureTemplate` API.

If event notifications are used, the event type for moderation tasks is [ReviewAudioVideoComplete](https://intl.cloud.tencent.com/document/product/266/81258?from_cn_redirect=1), and that for other tasks is [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1).
                 * @param req ProcessMediaByProcedureRequest
                 * @return ProcessMediaByProcedureOutcome
                 */
                ProcessMediaByProcedureOutcome ProcessMediaByProcedure(const Model::ProcessMediaByProcedureRequest &request);
                void ProcessMediaByProcedureAsync(const Model::ProcessMediaByProcedureRequest& request, const ProcessMediaByProcedureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByProcedureOutcomeCallable ProcessMediaByProcedureCallable(const Model::ProcessMediaByProcedureRequest& request);

                /**
                 *This API is <font color='red'>disused</font>, please use [ProcessMedia](https://intl.cloud.tencent.com/document/product/862/37578?from_cn_redirect=1) API of MPS, with the input parameter `InputInfo.UrlInputInfo.Url` set to a video URL.
                 * @param req ProcessMediaByUrlRequest
                 * @return ProcessMediaByUrlOutcome
                 */
                ProcessMediaByUrlOutcome ProcessMediaByUrl(const Model::ProcessMediaByUrlRequest &request);
                void ProcessMediaByUrlAsync(const Model::ProcessMediaByUrlRequest& request, const ProcessMediaByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByUrlOutcomeCallable ProcessMediaByUrlCallable(const Model::ProcessMediaByUrlRequest& request);

                /**
                 ** This API is used to get event notifications from the business server through [reliable callback](https://intl.cloud.tencent.com/document/product/266/33948).
* The API gets event data through long polling. That is, if there is any unconsumed event on the server, the event notification will be returned to the requester immediately. If there is no unconsumed event on the server, the request will be suspended in the backend until a new event is generated.
* The request can be suspended for up to 5 seconds. It's recommended to set the request timeout period to 10 seconds.
* Event notifications not pulled will be retained for up to 4 days and may be cleared after this period.
* After the API returns an event, the caller must call the [ConfirmEvents](https://intl.cloud.tencent.com/document/product/266/34184) API within <font color="red">30 seconds</font> to confirm that the event notification has been processed. Otherwise, the event notification will be pulled again after <font color="red">30 seconds</font>.
* This API can get up to 16 event notifications at a time.
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
4. By default, the maximum number of URLs that can be refreshed per day is 10,000.
                 * @param req PushUrlCacheRequest
                 * @return PushUrlCacheOutcome
                 */
                PushUrlCacheOutcome PushUrlCache(const Model::PushUrlCacheRequest &request);
                void PushUrlCacheAsync(const Model::PushUrlCacheRequest& request, const PushUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlCacheOutcomeCallable PushUrlCacheCallable(const Model::PushUrlCacheRequest& request);

                /**
                 *Initiate rebuild media
                 * @param req RebuildMediaRequest
                 * @return RebuildMediaOutcome
                 */
                RebuildMediaOutcome RebuildMedia(const Model::RebuildMediaRequest &request);
                void RebuildMediaAsync(const Model::RebuildMediaRequest& request, const RebuildMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaOutcomeCallable RebuildMediaCallable(const Model::RebuildMediaRequest& request);

                /**
                 *Rebuild media by template.
                 * @param req RebuildMediaByTemplateRequest
                 * @return RebuildMediaByTemplateOutcome
                 */
                RebuildMediaByTemplateOutcome RebuildMediaByTemplate(const Model::RebuildMediaByTemplateRequest &request);
                void RebuildMediaByTemplateAsync(const Model::RebuildMediaByTemplateRequest& request, const RebuildMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaByTemplateOutcomeCallable RebuildMediaByTemplateCallable(const Model::RebuildMediaByTemplateRequest& request);

                /**
                 *1. This API is used to purge URLs.
2. The URL domain names must have already been registered with VOD.
3. Up to 20 URLs can be specified in one request.
4. By default, the maximum number of URLs allowed for purge per day is 100,000.
                 * @param req RefreshUrlCacheRequest
                 * @return RefreshUrlCacheOutcome
                 */
                RefreshUrlCacheOutcome RefreshUrlCache(const Model::RefreshUrlCacheRequest &request);
                void RefreshUrlCacheAsync(const Model::RefreshUrlCacheRequest& request, const RefreshUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshUrlCacheOutcomeCallable RefreshUrlCacheCallable(const Model::RefreshUrlCacheRequest& request);

                /**
                 *This API is used to remove watermarks from a video.
                 * @param req RemoveWatermarkRequest
                 * @return RemoveWatermarkOutcome
                 */
                RemoveWatermarkOutcome RemoveWatermark(const Model::RemoveWatermarkRequest &request);
                void RemoveWatermarkAsync(const Model::RemoveWatermarkRequest& request, const RemoveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWatermarkOutcomeCallable RemoveWatermarkCallable(const Model::RemoveWatermarkRequest& request);

                /**
                 *This API is used to modify a custom task flow template.
                 * @param req ResetProcedureTemplateRequest
                 * @return ResetProcedureTemplateOutcome
                 */
                ResetProcedureTemplateOutcome ResetProcedureTemplate(const Model::ResetProcedureTemplateRequest &request);
                void ResetProcedureTemplateAsync(const Model::ResetProcedureTemplateRequest& request, const ResetProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetProcedureTemplateOutcomeCallable ResetProcedureTemplateCallable(const Model::ResetProcedureTemplateRequest& request);

                /**
                 *This API is used to restore files from ARCHIVE or DEEP ARCHIVE. Files stored in ARCHIVE or DEEP ARCHIVE must be restored before they can be accessed. Restored files are available for a limited period of time.
                 * @param req RestoreMediaRequest
                 * @return RestoreMediaOutcome
                 */
                RestoreMediaOutcome RestoreMedia(const Model::RestoreMediaRequest &request);
                void RestoreMediaAsync(const Model::RestoreMediaRequest& request, const RestoreMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreMediaOutcomeCallable RestoreMediaCallable(const Model::RestoreMediaRequest& request);

                /**
                 *This API is used to start a moderation task on a file stored in VOD to detect non-compliant content in images, text, speech, and voice.

If event notifications are used, the event type is [ReviewAudioVideoComplete](https://intl.cloud.tencent.com/document/product/266/81258?from_cn_redirect=1).
                 * @param req ReviewAudioVideoRequest
                 * @return ReviewAudioVideoOutcome
                 */
                ReviewAudioVideoOutcome ReviewAudioVideo(const Model::ReviewAudioVideoRequest &request);
                void ReviewAudioVideoAsync(const Model::ReviewAudioVideoRequest& request, const ReviewAudioVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewAudioVideoOutcomeCallable ReviewAudioVideoCallable(const Model::ReviewAudioVideoRequest& request);

                /**
                 *This API is used to moderate an image stored in VOD (detect pornographic and terrorist content).><li>The image file must be smaller than 5 MB.</li> ><li>To ensure the accuracy of moderation results, the image resolution must be higher than 256 x 256 px.</li> ><li>The format must be PNG, JPG, JPEG, BMP, GIF, or WEBP.</li>
                 * @param req ReviewImageRequest
                 * @return ReviewImageOutcome
                 */
                ReviewImageOutcome ReviewImage(const Model::ReviewImageRequest &request);
                void ReviewImageAsync(const Model::ReviewImageRequest& request, const ReviewImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewImageOutcomeCallable ReviewImageCallable(const Model::ReviewImageRequest& request);

                /**
                 *Search for media information, supporting multiple condition filtering, as well as sorting and filtering of returned results. This includes:
- Specify a collection of file IDs (FileIds) to return media with any ID in the collection.
- Fuzzy search based on multiple media file names (Names) or description information (Descriptions).
- Search based on multiple file name prefixes (NamePrefixes).
- Specify a collection of categories (ClassIds, see input parameters) to return media that meets any category in the collection. For example, media categories include movies, TV shows, variety shows, etc., and there are subcategories such as historical films, action films, and romance films under the movie category. If ClassIds specifies movies and TV shows, all subcategories under movies and TV shows will be returned; if ClassIds specifies historical films and action films, only media under these two subcategories will be returned.
- Specify a collection of tags (Tags, see input parameters) to return media that meets any tag in the collection. For example, media tags include ACG, palace fighting, and ghost animal. If Tags specifies ACG and ghost animal, media that meets any of these two tags will be retrieved.
- Specify a collection of file types (Categories, see input parameters) to return media that meets any type in the collection. For example, file types include Video (video), Audio (audio), and Image (image). If Categories specifies Video and Audio, media that meets these types will be retrieved.
- Specify a collection of sources (SourceTypes, see input parameters) to return media that meets any source in the collection. For example, media sources include Record (live recording) and Upload (upload). If SourceTypes specifies Record and Upload, media that meets these sources will be retrieved.
- Specify a collection of file container formats (MediaTypes, see input parameters) to return media that meets any container format in the collection. For example, container formats include MP4, AVI, MP3, etc. If MediaTypes specifies MP4 and MP3, media that meets these container formats will be retrieved.
- Specify a collection of file statuses (Status, see input parameters) to return media that meets any status in the collection. For example, file statuses include Normal (normal), SystemForbidden (platform ban), and Forbidden (active ban). If Status specifies Normal and Forbidden, media that meets these statuses will be retrieved.
- Specify a collection of file moderation results (ReviewResults, see input parameters) to return media that meets any status in the collection. For example, file moderation results include pass (passed) and block (not compliant). If ReviewResults specifies pass and block, media that meets these moderation results will be retrieved.
- Filter live recorded media by specifying a collection of live streaming codes (StreamIds, see input parameters).
- Filter media by specifying the creation time range of the media.
- Filter media by specifying a collection of TRTC application IDs.
- Filter media by specifying a collection of TRTC room IDs.

- The above parameters can be combined in any way to search. For example, filter media created between 12:00:00 on December 1, 2018, and 12:00:00 on December 8, 2018, categorized as movies or TV shows, and tagged with palace fighting and suspense. Note that the search logic for elements of any parameter that supports array input is 'or'. The logical relationship between all parameters is 'and'

- Allow to control the type of media information returned through Filters (default to return all information). Optional inputs include:
    1. Basic information (basicInfo): including media name, category, playback URL, cover image, etc.
    2. Metadata (metaData): including size, duration, video stream information, audio stream information, etc.
    3. Transcoding result information (transcodeInfo): including the media addresses, video stream parameters, audio stream parameters, etc., generated by transcoding the media into various specifications.
    4.  Animated image result information (animatedGraphicsInfo): information on the animated image (such as gif) generated after converting the video.
    Sampled screenshot information (sampleSnapshotInfo): screenshot information after sampling the video.
    6. Image sprite information (imageSpriteInfo): image sprite information after generating the sprite from the video.
    7. Specified time point screenshot information (snapshotByTimeOffsetInfo): screenshot information after capturing the video at specified time points.
    8. Video timestamp info (keyFrameDescInfo): timestamp information set for the video.
    9. Adaptive Bitrate Streaming information (adaptiveDynamicStreamingInfo): including specifications, encryption types, muxing formats, and other relevant information.

- Allow sorting the results by creation time and returning them in pages. Pagination is controlled by Offset and Limit (see input parameters).

<div id="maxResultsDesc">API result count limitation:</div>
- <b><a href="#p_offset">Offset</a> and <a href="#p_limit">Limit</a> both affect the number of results returned in a single page query. Please pay special attention: when both of these values are missing, this API will return a maximum of 10 query results.</b>
- <b>Supports up to 5,000 search results, and queries beyond this limit are not supported. If the search result volume is too large, it is recommended to use more refined filtering conditions to reduce search results.</b>

<br>Not recommended for conditional filtering:
- (Not recommended: use Names, NamePrefixes, or Descriptions instead) Fuzzy search for media file names or description information with a single text (Text).
- (Not recommended: use SourceTypes instead) Search for media files with a single source (SourceType).
- (Not recommended: use StreamIds instead) Search for media files with a single live streaming code (StreamId).
- (Not recommended: use CreateTime instead) Search for media files with a single start creation time (StartTime).
- (Not recommended: use CreateTime instead) Search for media files with a single end creation time (EndTime).
                 * @param req SearchMediaRequest
                 * @return SearchMediaOutcome
                 */
                SearchMediaOutcome SearchMedia(const Model::SearchMediaRequest &request);
                void SearchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaOutcomeCallable SearchMediaCallable(const Model::SearchMediaRequest& request);

                /**
                 *This API is used to configure DRM key information.
                 * @param req SetDrmKeyProviderInfoRequest
                 * @return SetDrmKeyProviderInfoOutcome
                 */
                SetDrmKeyProviderInfoOutcome SetDrmKeyProviderInfo(const Model::SetDrmKeyProviderInfoRequest &request);
                void SetDrmKeyProviderInfoAsync(const Model::SetDrmKeyProviderInfoRequest& request, const SetDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDrmKeyProviderInfoOutcomeCallable SetDrmKeyProviderInfoCallable(const Model::SetDrmKeyProviderInfoRequest& request);

                /**
                 *Set Vod Domain Certificate.
                 * @param req SetVodDomainCertificateRequest
                 * @return SetVodDomainCertificateOutcome
                 */
                SetVodDomainCertificateOutcome SetVodDomainCertificate(const Model::SetVodDomainCertificateRequest &request);
                void SetVodDomainCertificateAsync(const Model::SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVodDomainCertificateOutcomeCallable SetVodDomainCertificateCallable(const Model::SetVodDomainCertificateRequest& request);

                /**
                 *This API is used to cut a clip from an HLS video to generate a new video (in HLS format). You can either share the new video or save it.

VOD supports two types of clipping:
- Clipping for persistent storage: The video clip is saved as an independent video file with its own `FileId`.
- Clipping for temporary sharing: The video clip shares `FileId` with the input file.

Notes:
- Clipping is based on the M3U8 file that contains a list of TS segments, so the smallest clipping unit is one TS segment instead of a second or less.


### Clipping for persistent storage
In this mode, a video clip is saved as an independent video file with a `FileId`, and its lifecycle is not subject to the input video. Even if the source video is deleted, the video clip still exists. Moreover, the video clip can be transcoded, published on WeChat, and processed in other ways.

Suppose you recorded a two-hour football match. You want to save the full video for only two months to save costs, but want to save the highlights for a longer time and perhaps transcode and publish the highlight clip to WeChat. In this case, you can choose clipping for persistent storage.

The advantage of clipping for persistent storage is that the video clip has a lifecycle independent of the input video and can be managed independently and stored persistently.

<font color='red'>Notice:</font> If solidification is specified during clipping, enable the reception of persistence completed event notifications through the ModifyEventConfig interface. After successful solidification, an event notification of type PersistenceComplete will be received. Before receiving this event notification, operations such as deletion or cooling down of live recording videos should not be performed, otherwise, abnormal playback may occur in the video generated by the clipping.

### Clipping for temporary sharing
The video clip (an M3U8 file) shares the same TS segments with the input video instead of being an independent video. It only has a playback URL but has no `FileId`, and its validity period is the same as that of the input video. Once the input video is deleted, the video clip cannot be played back.

Because the video clip is not an independent video, it's not displayed as a media asset in the VOD console, and cannot be transcoded or published to WeChat.

Clipping for temporary sharing is lightweight and incurs no additional storage fees. However, the video clip has the same lifecycle as the source recording video and cannot be transcoded or processed in other ways.
                 * @param req SimpleHlsClipRequest
                 * @return SimpleHlsClipOutcome
                 */
                SimpleHlsClipOutcome SimpleHlsClip(const Model::SimpleHlsClipRequest &request);
                void SimpleHlsClipAsync(const Model::SimpleHlsClipRequest& request, const SimpleHlsClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimpleHlsClipOutcomeCallable SimpleHlsClipCallable(const Model::SimpleHlsClipRequest& request);

                /**
                 *Split the video into strips to generate multiple new videos.
                 * @param req SplitMediaRequest
                 * @return SplitMediaOutcome
                 */
                SplitMediaOutcome SplitMedia(const Model::SplitMediaRequest &request);
                void SplitMediaAsync(const Model::SplitMediaRequest& request, const SplitMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitMediaOutcomeCallable SplitMediaCallable(const Model::SplitMediaRequest& request);

                /**
                 *This API is used for enabling/disabling the CDN acceleration domain.
                 * @param req StartCDNDomainRequest
                 * @return StartCDNDomainOutcome
                 */
                StartCDNDomainOutcome StartCDNDomain(const Model::StartCDNDomainRequest &request);
                void StartCDNDomainAsync(const Model::StartCDNDomainRequest& request, const StartCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCDNDomainOutcomeCallable StartCDNDomainCallable(const Model::StartCDNDomainRequest& request);

                /**
                 *This API is used to verify the domain name resolution value.
                 * @param req VerifyDomainRecordRequest
                 * @return VerifyDomainRecordOutcome
                 */
                VerifyDomainRecordOutcome VerifyDomainRecord(const Model::VerifyDomainRecordRequest &request);
                void VerifyDomainRecordAsync(const Model::VerifyDomainRecordRequest& request, const VerifyDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDomainRecordOutcomeCallable VerifyDomainRecordCallable(const Model::VerifyDomainRecordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_VODCLIENT_H_
