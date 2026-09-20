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
#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncResponse.h>
#include <tencentcloud/vod/v20180717/model/CloneVoiceSyncRequest.h>
#include <tencentcloud/vod/v20180717/model/CloneVoiceSyncResponse.h>
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
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcApiTokenRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcApiTokenResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomElementRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomElementResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcHunyuan3DTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcHunyuan3DTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcImageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcImageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcQuotaRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcQuotaResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoRedrawTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoRedrawTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcVideoTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCDNDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSLogsetRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSLogsetResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSTopicRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateCLSTopicResponse.h>
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
#include <tencentcloud/vod/v20180717/model/CreateKnowledgeBaseRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateKnowledgeBaseResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/CreatePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateProcessImageAsyncTemplateResponse.h>
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
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcImageTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcImageTaskResponse.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcVideoTaskRequest.h>
#include <tencentcloud/vod/v20180717/model/CreateSceneAigcVideoTaskResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DeleteAigcAdvancedCustomElementRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcAdvancedCustomElementResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcApiTokenRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcApiTokenResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcQuotaRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAigcQuotaResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteCDNDomainRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteCDNDomainResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteCLSTopicRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteCLSTopicResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DeleteKnowledgeBaseRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteKnowledgeBaseResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/DeletePersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcedureTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteProcessImageAsyncTemplateResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DeleteVoiceRequest.h>
#include <tencentcloud/vod/v20180717/model/DeleteVoiceResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeAigcAdvancedCustomElementsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcAdvancedCustomElementsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcApiTokensRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcApiTokensResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcQuotasRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcQuotasResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAllClassResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeAnimatedGraphicsTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeBlindWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeBlindWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNDomainsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNDomainsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNStatDetailsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSLogsetsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSLogsetsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSPushTargetsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSPushTargetsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSTopicsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCLSTopicsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCdnLogsResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeClientUploadAccelerationUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeContentReviewTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeCurrentPlaylistResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMediaPlayStatRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMediaPlayStatResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMostPlayedStatRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyMostPlayedStatResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDailyPlayStatFileListResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeDefaultDistributionConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeDefaultDistributionConfigResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeKnowledgeBasesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeKnowledgeBasesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeLLMComprehendTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeLLMComprehendTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeLicenseUsageDataResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeMPSTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeMPSTemplatesResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeProcessImageAsyncTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeProcessImageAsyncTemplatesResponse.h>
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
#include <tencentcloud/vod/v20180717/model/DescribeVoicesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeVoicesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWatermarkTemplatesResponse.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesRequest.h>
#include <tencentcloud/vod/v20180717/model/DescribeWordSamplesResponse.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncResponse.h>
#include <tencentcloud/vod/v20180717/model/EditMediaRequest.h>
#include <tencentcloud/vod/v20180717/model/EditMediaResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionRequest.h>
#include <tencentcloud/vod/v20180717/model/ExecuteFunctionResponse.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkRequest.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkResponse.h>
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
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeRequest.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeResponse.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityRequest.h>
#include <tencentcloud/vod/v20180717/model/InspectMediaQualityResponse.h>
#include <tencentcloud/vod/v20180717/model/ListFilesRequest.h>
#include <tencentcloud/vod/v20180717/model/ListFilesResponse.h>
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
#include <tencentcloud/vod/v20180717/model/ModifyAigcQuotaRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAigcQuotaResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyAnimatedGraphicsTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyBlindWatermarkTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyBlindWatermarkTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyCDNDomainConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyCDNDomainConfigResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultDistributionConfigRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyDefaultDistributionConfigResponse.h>
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
#include <tencentcloud/vod/v20180717/model/ModifyKnowledgeBaseRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyKnowledgeBaseResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyLLMComprehendTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyLLMComprehendTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMPSTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMPSTemplateResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyMediaStorageClassResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleResponse.h>
#include <tencentcloud/vod/v20180717/model/ModifyProcessImageAsyncTemplateRequest.h>
#include <tencentcloud/vod/v20180717/model/ModifyProcessImageAsyncTemplateResponse.h>
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
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncResponse.h>
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
#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsRequest.h>
#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsResponse.h>
#include <tencentcloud/vod/v20180717/model/SetCLSPushTargetRequest.h>
#include <tencentcloud/vod/v20180717/model/SetCLSPushTargetResponse.h>
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
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncRequest.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncResponse.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechSyncRequest.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechSyncResponse.h>
#include <tencentcloud/vod/v20180717/model/UpdateAigcApiTokenRequest.h>
#include <tencentcloud/vod/v20180717/model/UpdateAigcApiTokenResponse.h>
#include <tencentcloud/vod/v20180717/model/UpdateVoiceRequest.h>
#include <tencentcloud/vod/v20180717/model/UpdateVoiceResponse.h>
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
                typedef Outcome<Core::Error, Model::CloneVoiceAsyncResponse> CloneVoiceAsyncOutcome;
                typedef std::future<CloneVoiceAsyncOutcome> CloneVoiceAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CloneVoiceAsyncRequest&, CloneVoiceAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneVoiceAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneVoiceSyncResponse> CloneVoiceSyncOutcome;
                typedef std::future<CloneVoiceSyncOutcome> CloneVoiceSyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CloneVoiceSyncRequest&, CloneVoiceSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneVoiceSyncAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateAigcAdvancedCustomElementResponse> CreateAigcAdvancedCustomElementOutcome;
                typedef std::future<CreateAigcAdvancedCustomElementOutcome> CreateAigcAdvancedCustomElementOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcAdvancedCustomElementRequest&, CreateAigcAdvancedCustomElementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcAdvancedCustomElementAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcApiTokenResponse> CreateAigcApiTokenOutcome;
                typedef std::future<CreateAigcApiTokenOutcome> CreateAigcApiTokenOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcApiTokenRequest&, CreateAigcApiTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcApiTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcAudioCloneResponse> CreateAigcAudioCloneOutcome;
                typedef std::future<CreateAigcAudioCloneOutcome> CreateAigcAudioCloneOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcAudioCloneRequest&, CreateAigcAudioCloneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcAudioCloneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcAudioTaskResponse> CreateAigcAudioTaskOutcome;
                typedef std::future<CreateAigcAudioTaskOutcome> CreateAigcAudioTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcAudioTaskRequest&, CreateAigcAudioTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcAudioTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcCustomElementResponse> CreateAigcCustomElementOutcome;
                typedef std::future<CreateAigcCustomElementOutcome> CreateAigcCustomElementOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcCustomElementRequest&, CreateAigcCustomElementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcCustomElementAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcCustomVoiceResponse> CreateAigcCustomVoiceOutcome;
                typedef std::future<CreateAigcCustomVoiceOutcome> CreateAigcCustomVoiceOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcCustomVoiceRequest&, CreateAigcCustomVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcCustomVoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcHunyuan3DTaskResponse> CreateAigcHunyuan3DTaskOutcome;
                typedef std::future<CreateAigcHunyuan3DTaskOutcome> CreateAigcHunyuan3DTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcHunyuan3DTaskRequest&, CreateAigcHunyuan3DTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcHunyuan3DTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcImageTaskResponse> CreateAigcImageTaskOutcome;
                typedef std::future<CreateAigcImageTaskOutcome> CreateAigcImageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcImageTaskRequest&, CreateAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcQuotaResponse> CreateAigcQuotaOutcome;
                typedef std::future<CreateAigcQuotaOutcome> CreateAigcQuotaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcQuotaRequest&, CreateAigcQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcSubjectResponse> CreateAigcSubjectOutcome;
                typedef std::future<CreateAigcSubjectOutcome> CreateAigcSubjectOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcSubjectRequest&, CreateAigcSubjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcSubjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcVideoRedrawTaskResponse> CreateAigcVideoRedrawTaskOutcome;
                typedef std::future<CreateAigcVideoRedrawTaskOutcome> CreateAigcVideoRedrawTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcVideoRedrawTaskRequest&, CreateAigcVideoRedrawTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcVideoRedrawTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAigcVideoTaskResponse> CreateAigcVideoTaskOutcome;
                typedef std::future<CreateAigcVideoTaskOutcome> CreateAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAigcVideoTaskRequest&, CreateAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAigcVideoTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnimatedGraphicsTemplateResponse> CreateAnimatedGraphicsTemplateOutcome;
                typedef std::future<CreateAnimatedGraphicsTemplateOutcome> CreateAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateAnimatedGraphicsTemplateRequest&, CreateAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlindWatermarkTemplateResponse> CreateBlindWatermarkTemplateOutcome;
                typedef std::future<CreateBlindWatermarkTemplateOutcome> CreateBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateBlindWatermarkTemplateRequest&, CreateBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCDNDomainResponse> CreateCDNDomainOutcome;
                typedef std::future<CreateCDNDomainOutcome> CreateCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCDNDomainRequest&, CreateCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSLogsetResponse> CreateCLSLogsetOutcome;
                typedef std::future<CreateCLSLogsetOutcome> CreateCLSLogsetOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCLSLogsetRequest&, CreateCLSLogsetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSLogsetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSTopicResponse> CreateCLSTopicOutcome;
                typedef std::future<CreateCLSTopicOutcome> CreateCLSTopicOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateCLSTopicRequest&, CreateCLSTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSTopicAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateKnowledgeBaseResponse> CreateKnowledgeBaseOutcome;
                typedef std::future<CreateKnowledgeBaseOutcome> CreateKnowledgeBaseOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateKnowledgeBaseRequest&, CreateKnowledgeBaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKnowledgeBaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLLMComprehendTemplateResponse> CreateLLMComprehendTemplateOutcome;
                typedef std::future<CreateLLMComprehendTemplateOutcome> CreateLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateLLMComprehendTemplateRequest&, CreateLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMPSTemplateResponse> CreateMPSTemplateOutcome;
                typedef std::future<CreateMPSTemplateOutcome> CreateMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateMPSTemplateRequest&, CreateMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonSampleResponse> CreatePersonSampleOutcome;
                typedef std::future<CreatePersonSampleOutcome> CreatePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreatePersonSampleRequest&, CreatePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcedureTemplateResponse> CreateProcedureTemplateOutcome;
                typedef std::future<CreateProcedureTemplateOutcome> CreateProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcedureTemplateRequest&, CreateProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcessImageAsyncTemplateResponse> CreateProcessImageAsyncTemplateOutcome;
                typedef std::future<CreateProcessImageAsyncTemplateOutcome> CreateProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateProcessImageAsyncTemplateRequest&, CreateProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessImageAsyncTemplateAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateSceneAigcImageTaskResponse> CreateSceneAigcImageTaskOutcome;
                typedef std::future<CreateSceneAigcImageTaskOutcome> CreateSceneAigcImageTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSceneAigcImageTaskRequest&, CreateSceneAigcImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAigcImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSceneAigcVideoTaskResponse> CreateSceneAigcVideoTaskOutcome;
                typedef std::future<CreateSceneAigcVideoTaskOutcome> CreateSceneAigcVideoTaskOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateSceneAigcVideoTaskRequest&, CreateSceneAigcVideoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAigcVideoTaskAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteAigcAdvancedCustomElementResponse> DeleteAigcAdvancedCustomElementOutcome;
                typedef std::future<DeleteAigcAdvancedCustomElementOutcome> DeleteAigcAdvancedCustomElementOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAigcAdvancedCustomElementRequest&, DeleteAigcAdvancedCustomElementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAigcAdvancedCustomElementAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAigcApiTokenResponse> DeleteAigcApiTokenOutcome;
                typedef std::future<DeleteAigcApiTokenOutcome> DeleteAigcApiTokenOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAigcApiTokenRequest&, DeleteAigcApiTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAigcApiTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAigcQuotaResponse> DeleteAigcQuotaOutcome;
                typedef std::future<DeleteAigcQuotaOutcome> DeleteAigcQuotaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAigcQuotaRequest&, DeleteAigcQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAigcQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAnimatedGraphicsTemplateResponse> DeleteAnimatedGraphicsTemplateOutcome;
                typedef std::future<DeleteAnimatedGraphicsTemplateOutcome> DeleteAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteAnimatedGraphicsTemplateRequest&, DeleteAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlindWatermarkTemplateResponse> DeleteBlindWatermarkTemplateOutcome;
                typedef std::future<DeleteBlindWatermarkTemplateOutcome> DeleteBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteBlindWatermarkTemplateRequest&, DeleteBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCDNDomainResponse> DeleteCDNDomainOutcome;
                typedef std::future<DeleteCDNDomainOutcome> DeleteCDNDomainOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteCDNDomainRequest&, DeleteCDNDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCDNDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCLSTopicResponse> DeleteCLSTopicOutcome;
                typedef std::future<DeleteCLSTopicOutcome> DeleteCLSTopicOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteCLSTopicRequest&, DeleteCLSTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCLSTopicAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteKnowledgeBaseResponse> DeleteKnowledgeBaseOutcome;
                typedef std::future<DeleteKnowledgeBaseOutcome> DeleteKnowledgeBaseOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteKnowledgeBaseRequest&, DeleteKnowledgeBaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKnowledgeBaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLLMComprehendTemplateResponse> DeleteLLMComprehendTemplateOutcome;
                typedef std::future<DeleteLLMComprehendTemplateOutcome> DeleteLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteLLMComprehendTemplateRequest&, DeleteLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMPSTemplateResponse> DeleteMPSTemplateOutcome;
                typedef std::future<DeleteMPSTemplateOutcome> DeleteMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMPSTemplateRequest&, DeleteMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMediaResponse> DeleteMediaOutcome;
                typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteMediaRequest&, DeleteMediaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonSampleResponse> DeletePersonSampleOutcome;
                typedef std::future<DeletePersonSampleOutcome> DeletePersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeletePersonSampleRequest&, DeletePersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcedureTemplateResponse> DeleteProcedureTemplateOutcome;
                typedef std::future<DeleteProcedureTemplateOutcome> DeleteProcedureTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcedureTemplateRequest&, DeleteProcedureTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcedureTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProcessImageAsyncTemplateResponse> DeleteProcessImageAsyncTemplateOutcome;
                typedef std::future<DeleteProcessImageAsyncTemplateOutcome> DeleteProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteProcessImageAsyncTemplateRequest&, DeleteProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProcessImageAsyncTemplateAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DeleteVoiceResponse> DeleteVoiceOutcome;
                typedef std::future<DeleteVoiceOutcome> DeleteVoiceOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteVoiceRequest&, DeleteVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVoiceAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeAigcAdvancedCustomElementsResponse> DescribeAigcAdvancedCustomElementsOutcome;
                typedef std::future<DescribeAigcAdvancedCustomElementsOutcome> DescribeAigcAdvancedCustomElementsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcAdvancedCustomElementsRequest&, DescribeAigcAdvancedCustomElementsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcAdvancedCustomElementsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcApiTokensResponse> DescribeAigcApiTokensOutcome;
                typedef std::future<DescribeAigcApiTokensOutcome> DescribeAigcApiTokensOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcApiTokensRequest&, DescribeAigcApiTokensOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcApiTokensAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcFaceInfoResponse> DescribeAigcFaceInfoOutcome;
                typedef std::future<DescribeAigcFaceInfoOutcome> DescribeAigcFaceInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcFaceInfoRequest&, DescribeAigcFaceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcFaceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcFaceInfoAsyncResponse> DescribeAigcFaceInfoAsyncOutcome;
                typedef std::future<DescribeAigcFaceInfoAsyncOutcome> DescribeAigcFaceInfoAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcFaceInfoAsyncRequest&, DescribeAigcFaceInfoAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcFaceInfoAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcQuotasResponse> DescribeAigcQuotasOutcome;
                typedef std::future<DescribeAigcQuotasOutcome> DescribeAigcQuotasOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcQuotasRequest&, DescribeAigcQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAigcUsageDataResponse> DescribeAigcUsageDataOutcome;
                typedef std::future<DescribeAigcUsageDataOutcome> DescribeAigcUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAigcUsageDataRequest&, DescribeAigcUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAigcUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllClassResponse> DescribeAllClassOutcome;
                typedef std::future<DescribeAllClassOutcome> DescribeAllClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAllClassRequest&, DescribeAllClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllClassAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAnimatedGraphicsTemplatesResponse> DescribeAnimatedGraphicsTemplatesOutcome;
                typedef std::future<DescribeAnimatedGraphicsTemplatesOutcome> DescribeAnimatedGraphicsTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeAnimatedGraphicsTemplatesRequest&, DescribeAnimatedGraphicsTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnimatedGraphicsTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlindWatermarkTemplatesResponse> DescribeBlindWatermarkTemplatesOutcome;
                typedef std::future<DescribeBlindWatermarkTemplatesOutcome> DescribeBlindWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeBlindWatermarkTemplatesRequest&, DescribeBlindWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlindWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNDomainsResponse> DescribeCDNDomainsOutcome;
                typedef std::future<DescribeCDNDomainsOutcome> DescribeCDNDomainsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNDomainsRequest&, DescribeCDNDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNStatDetailsResponse> DescribeCDNStatDetailsOutcome;
                typedef std::future<DescribeCDNStatDetailsOutcome> DescribeCDNStatDetailsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNStatDetailsRequest&, DescribeCDNStatDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNStatDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCDNUsageDataResponse> DescribeCDNUsageDataOutcome;
                typedef std::future<DescribeCDNUsageDataOutcome> DescribeCDNUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCDNUsageDataRequest&, DescribeCDNUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCDNUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogsetsResponse> DescribeCLSLogsetsOutcome;
                typedef std::future<DescribeCLSLogsetsOutcome> DescribeCLSLogsetsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSLogsetsRequest&, DescribeCLSLogsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSPushTargetsResponse> DescribeCLSPushTargetsOutcome;
                typedef std::future<DescribeCLSPushTargetsOutcome> DescribeCLSPushTargetsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSPushTargetsRequest&, DescribeCLSPushTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSPushTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSTopicsResponse> DescribeCLSTopicsOutcome;
                typedef std::future<DescribeCLSTopicsOutcome> DescribeCLSTopicsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeCLSTopicsRequest&, DescribeCLSTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSTopicsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDailyMediaPlayStatResponse> DescribeDailyMediaPlayStatOutcome;
                typedef std::future<DescribeDailyMediaPlayStatOutcome> DescribeDailyMediaPlayStatOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyMediaPlayStatRequest&, DescribeDailyMediaPlayStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyMediaPlayStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyMostPlayedStatResponse> DescribeDailyMostPlayedStatOutcome;
                typedef std::future<DescribeDailyMostPlayedStatOutcome> DescribeDailyMostPlayedStatOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyMostPlayedStatRequest&, DescribeDailyMostPlayedStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyMostPlayedStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDailyPlayStatFileListResponse> DescribeDailyPlayStatFileListOutcome;
                typedef std::future<DescribeDailyPlayStatFileListOutcome> DescribeDailyPlayStatFileListOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDailyPlayStatFileListRequest&, DescribeDailyPlayStatFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDailyPlayStatFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultDistributionConfigResponse> DescribeDefaultDistributionConfigOutcome;
                typedef std::future<DescribeDefaultDistributionConfigOutcome> DescribeDefaultDistributionConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeDefaultDistributionConfigRequest&, DescribeDefaultDistributionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultDistributionConfigAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeKnowledgeBasesResponse> DescribeKnowledgeBasesOutcome;
                typedef std::future<DescribeKnowledgeBasesOutcome> DescribeKnowledgeBasesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeKnowledgeBasesRequest&, DescribeKnowledgeBasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeBasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLLMComprehendTemplatesResponse> DescribeLLMComprehendTemplatesOutcome;
                typedef std::future<DescribeLLMComprehendTemplatesOutcome> DescribeLLMComprehendTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeLLMComprehendTemplatesRequest&, DescribeLLMComprehendTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLLMComprehendTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseUsageDataResponse> DescribeLicenseUsageDataOutcome;
                typedef std::future<DescribeLicenseUsageDataOutcome> DescribeLicenseUsageDataOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeLicenseUsageDataRequest&, DescribeLicenseUsageDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseUsageDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMPSTemplatesResponse> DescribeMPSTemplatesOutcome;
                typedef std::future<DescribeMPSTemplatesOutcome> DescribeMPSTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeMPSTemplatesRequest&, DescribeMPSTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPSTemplatesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeProcessImageAsyncTemplatesResponse> DescribeProcessImageAsyncTemplatesOutcome;
                typedef std::future<DescribeProcessImageAsyncTemplatesOutcome> DescribeProcessImageAsyncTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeProcessImageAsyncTemplatesRequest&, DescribeProcessImageAsyncTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessImageAsyncTemplatesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeVoicesResponse> DescribeVoicesOutcome;
                typedef std::future<DescribeVoicesOutcome> DescribeVoicesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeVoicesRequest&, DescribeVoicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWatermarkTemplatesResponse> DescribeWatermarkTemplatesOutcome;
                typedef std::future<DescribeWatermarkTemplatesOutcome> DescribeWatermarkTemplatesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWatermarkTemplatesRequest&, DescribeWatermarkTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWatermarkTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordSamplesResponse> DescribeWordSamplesOutcome;
                typedef std::future<DescribeWordSamplesOutcome> DescribeWordSamplesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeWordSamplesRequest&, DescribeWordSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DesignVoiceAsyncResponse> DesignVoiceAsyncOutcome;
                typedef std::future<DesignVoiceAsyncOutcome> DesignVoiceAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DesignVoiceAsyncRequest&, DesignVoiceAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DesignVoiceAsyncAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ExtractBlindWatermarkResponse> ExtractBlindWatermarkOutcome;
                typedef std::future<ExtractBlindWatermarkOutcome> ExtractBlindWatermarkOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ExtractBlindWatermarkRequest&, ExtractBlindWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractBlindWatermarkAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ImportMediaKnowledgeResponse> ImportMediaKnowledgeOutcome;
                typedef std::future<ImportMediaKnowledgeOutcome> ImportMediaKnowledgeOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ImportMediaKnowledgeRequest&, ImportMediaKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportMediaKnowledgeAsyncHandler;
                typedef Outcome<Core::Error, Model::InspectMediaQualityResponse> InspectMediaQualityOutcome;
                typedef std::future<InspectMediaQualityOutcome> InspectMediaQualityOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::InspectMediaQualityRequest&, InspectMediaQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InspectMediaQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFilesResponse> ListFilesOutcome;
                typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ListFilesRequest&, ListFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyAigcQuotaResponse> ModifyAigcQuotaOutcome;
                typedef std::future<ModifyAigcQuotaOutcome> ModifyAigcQuotaOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAigcQuotaRequest&, ModifyAigcQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAigcQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAnimatedGraphicsTemplateResponse> ModifyAnimatedGraphicsTemplateOutcome;
                typedef std::future<ModifyAnimatedGraphicsTemplateOutcome> ModifyAnimatedGraphicsTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyAnimatedGraphicsTemplateRequest&, ModifyAnimatedGraphicsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnimatedGraphicsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlindWatermarkTemplateResponse> ModifyBlindWatermarkTemplateOutcome;
                typedef std::future<ModifyBlindWatermarkTemplateOutcome> ModifyBlindWatermarkTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyBlindWatermarkTemplateRequest&, ModifyBlindWatermarkTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlindWatermarkTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCDNDomainConfigResponse> ModifyCDNDomainConfigOutcome;
                typedef std::future<ModifyCDNDomainConfigOutcome> ModifyCDNDomainConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyCDNDomainConfigRequest&, ModifyCDNDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCDNDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClassResponse> ModifyClassOutcome;
                typedef std::future<ModifyClassOutcome> ModifyClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyClassRequest&, ModifyClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyContentReviewTemplateResponse> ModifyContentReviewTemplateOutcome;
                typedef std::future<ModifyContentReviewTemplateOutcome> ModifyContentReviewTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyContentReviewTemplateRequest&, ModifyContentReviewTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContentReviewTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultDistributionConfigResponse> ModifyDefaultDistributionConfigOutcome;
                typedef std::future<ModifyDefaultDistributionConfigOutcome> ModifyDefaultDistributionConfigOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyDefaultDistributionConfigRequest&, ModifyDefaultDistributionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultDistributionConfigAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyKnowledgeBaseResponse> ModifyKnowledgeBaseOutcome;
                typedef std::future<ModifyKnowledgeBaseOutcome> ModifyKnowledgeBaseOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyKnowledgeBaseRequest&, ModifyKnowledgeBaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKnowledgeBaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLLMComprehendTemplateResponse> ModifyLLMComprehendTemplateOutcome;
                typedef std::future<ModifyLLMComprehendTemplateOutcome> ModifyLLMComprehendTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyLLMComprehendTemplateRequest&, ModifyLLMComprehendTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLLMComprehendTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMPSTemplateResponse> ModifyMPSTemplateOutcome;
                typedef std::future<ModifyMPSTemplateOutcome> ModifyMPSTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMPSTemplateRequest&, ModifyMPSTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMPSTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaInfoResponse> ModifyMediaInfoOutcome;
                typedef std::future<ModifyMediaInfoOutcome> ModifyMediaInfoOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaInfoRequest&, ModifyMediaInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMediaStorageClassResponse> ModifyMediaStorageClassOutcome;
                typedef std::future<ModifyMediaStorageClassOutcome> ModifyMediaStorageClassOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyMediaStorageClassRequest&, ModifyMediaStorageClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaStorageClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonSampleResponse> ModifyPersonSampleOutcome;
                typedef std::future<ModifyPersonSampleOutcome> ModifyPersonSampleOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyPersonSampleRequest&, ModifyPersonSampleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonSampleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProcessImageAsyncTemplateResponse> ModifyProcessImageAsyncTemplateOutcome;
                typedef std::future<ModifyProcessImageAsyncTemplateOutcome> ModifyProcessImageAsyncTemplateOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyProcessImageAsyncTemplateRequest&, ModifyProcessImageAsyncTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProcessImageAsyncTemplateAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ProcessImageAsyncResponse> ProcessImageAsyncOutcome;
                typedef std::future<ProcessImageAsyncOutcome> ProcessImageAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ProcessImageAsyncRequest&, ProcessImageAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessImageAsyncAsyncHandler;
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
                typedef Outcome<Core::Error, Model::SearchMediaBySemanticsResponse> SearchMediaBySemanticsOutcome;
                typedef std::future<SearchMediaBySemanticsOutcome> SearchMediaBySemanticsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SearchMediaBySemanticsRequest&, SearchMediaBySemanticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaBySemanticsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCLSPushTargetResponse> SetCLSPushTargetOutcome;
                typedef std::future<SetCLSPushTargetOutcome> SetCLSPushTargetOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::SetCLSPushTargetRequest&, SetCLSPushTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCLSPushTargetAsyncHandler;
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
                typedef Outcome<Core::Error, Model::TextToSpeechAsyncResponse> TextToSpeechAsyncOutcome;
                typedef std::future<TextToSpeechAsyncOutcome> TextToSpeechAsyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::TextToSpeechAsyncRequest&, TextToSpeechAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToSpeechAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToSpeechSyncResponse> TextToSpeechSyncOutcome;
                typedef std::future<TextToSpeechSyncOutcome> TextToSpeechSyncOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::TextToSpeechSyncRequest&, TextToSpeechSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToSpeechSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAigcApiTokenResponse> UpdateAigcApiTokenOutcome;
                typedef std::future<UpdateAigcApiTokenOutcome> UpdateAigcApiTokenOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::UpdateAigcApiTokenRequest&, UpdateAigcApiTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAigcApiTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateVoiceResponse> UpdateVoiceOutcome;
                typedef std::future<UpdateVoiceOutcome> UpdateVoiceOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::UpdateVoiceRequest&, UpdateVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDomainRecordResponse> VerifyDomainRecordOutcome;
                typedef std::future<VerifyDomainRecordOutcome> VerifyDomainRecordOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::VerifyDomainRecordRequest&, VerifyDomainRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDomainRecordAsyncHandler;



                /**
                 ** We strongly recommend that you use the [server-side upload SDK](https://www.tencentcloud.com/document/product/266/33912#1.-initiate-upload) provided by VOD to upload files. Directly invoking the API for upload is significantly more difficult and involves a much larger workload than using the SDK.
This API is used to apply for uploading media files (and cover files), obtain the meta information for uploading files to VOD (including upload path and upload signature), and is used for subsequent upload APIs.
For the upload process, see [Server-Side Upload Overview](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1).
                 * @param req ApplyUploadRequest
                 * @return ApplyUploadOutcome
                 */
                ApplyUploadOutcome ApplyUpload(const Model::ApplyUploadRequest &request);
                void ApplyUploadAsync(const Model::ApplyUploadRequest& request, const ApplyUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyUploadOutcomeCallable ApplyUploadCallable(const Model::ApplyUploadRequest& request);

                /**
                 *Associate media asset subtitles with the media output file corresponding to the designated adaptive bitrate streaming template ID (or disassociate them).
                 * @param req AttachMediaSubtitlesRequest
                 * @return AttachMediaSubtitlesOutcome
                 */
                AttachMediaSubtitlesOutcome AttachMediaSubtitles(const Model::AttachMediaSubtitlesRequest &request);
                void AttachMediaSubtitlesAsync(const Model::AttachMediaSubtitlesRequest& request, const AttachMediaSubtitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachMediaSubtitlesOutcomeCallable AttachMediaSubtitlesCallable(const Model::AttachMediaSubtitlesRequest& request);

                /**
                 *Clone a CDN domain.
                 * @param req CloneCDNDomainRequest
                 * @return CloneCDNDomainOutcome
                 */
                CloneCDNDomainOutcome CloneCDNDomain(const Model::CloneCDNDomainRequest &request);
                void CloneCDNDomainAsync(const Model::CloneCDNDomainRequest& request, const CloneCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneCDNDomainOutcomeCallable CloneCDNDomainCallable(const Model::CloneCDNDomainRequest& request);

                /**
                 *This API is used to initiate a voice cloning task. It clones an exclusive voice based on reference audio. The generated voice can be used for subsequent text to speech. Voice cloning is an asynchronous task. The voice ID and audio audition are generated after task completion.
                 * @param req CloneVoiceAsyncRequest
                 * @return CloneVoiceAsyncOutcome
                 */
                CloneVoiceAsyncOutcome CloneVoiceAsync(const Model::CloneVoiceAsyncRequest &request);
                void CloneVoiceAsyncAsync(const Model::CloneVoiceAsyncRequest& request, const CloneVoiceAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneVoiceAsyncOutcomeCallable CloneVoiceAsyncCallable(const Model::CloneVoiceAsyncRequest& request);

                /**
                 *This API is used to initiate a voice cloning task. It clones an exclusive voice based on reference audio. The generated voice can be used for subsequent text to speech.
                 * @param req CloneVoiceSyncRequest
                 * @return CloneVoiceSyncOutcome
                 */
                CloneVoiceSyncOutcome CloneVoiceSync(const Model::CloneVoiceSyncRequest &request);
                void CloneVoiceSyncAsync(const Model::CloneVoiceSyncRequest& request, const CloneVoiceSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneVoiceSyncOutcomeCallable CloneVoiceSyncCallable(const Model::CloneVoiceSyncRequest& request);

                /**
                 *This API is used to confirm the upload result of media files and cover files to Tencent Cloud VOD, store media information, and return the playback address and file ID.
                 * @param req CommitUploadRequest
                 * @return CommitUploadOutcome
                 */
                CommitUploadOutcome CommitUpload(const Model::CommitUploadRequest &request);
                void CommitUploadAsync(const Model::CommitUploadRequest& request, const CommitUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitUploadOutcomeCallable CommitUploadCallable(const Model::CommitUploadRequest& request);

                /**
                 *This API is used to compose media files to achieve the following effects:

1. **Image rotation**: Rotate the video or image by a certain degree, or flip it in a certain direction.
2. **Audio control**: Increase or reduce the volume of video and audio, or mute the video.
3. **Screen overlay**: Overlay frames from videos and images in sequence, for example, to achieve a Picture-in-Picture effect.
4. **Audio mixing**: Mix the sound in video and audio together.
5. **Audio extraction**: Extract the audio from the video (visuals are not retained).
6. **Crop**: Crop a specified time period from video or audio.
7. **Splicing**: Splice videos, audio, and images in chronological order.
8. **Transitions**: When stitching multiple videos or images, you can add transition effects between paragraphs.

The muxing format of the composed media can be MP4 (video) or MP3 (audio). If event notification is used, the event notification type is [Video Synthesis Completed](https://www.tencentcloud.com/document/product/266/43000?from_cn_redirect=1).
                 * @param req ComposeMediaRequest
                 * @return ComposeMediaOutcome
                 */
                ComposeMediaOutcome ComposeMedia(const Model::ComposeMediaRequest &request);
                void ComposeMediaAsync(const Model::ComposeMediaRequest& request, const ComposeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposeMediaOutcomeCallable ComposeMediaCallable(const Model::ComposeMediaRequest& request);

                /**
                 ** Developers call the event notification pull API. After obtaining an event, they must call this API to acknowledge that the message has been received.
* After the developer obtains the event handler, the validity time for pending confirmation is 30 seconds. If it exceeds 30 seconds, a parameter error (4000) will be reported.
* For more references on reliable callback for event notification, see [Reliable Callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83).
                 * @param req ConfirmEventsRequest
                 * @return ConfirmEventsOutcome
                 */
                ConfirmEventsOutcome ConfirmEvents(const Model::ConfirmEventsRequest &request);
                void ConfirmEventsAsync(const Model::ConfirmEventsRequest& request, const ConfirmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmEventsOutcomeCallable ConfirmEventsCallable(const Model::ConfirmEventsRequest& request);

                /**
                 *This API is used to create a user-defined audio and video content analysis template. Maximum quantity: 50. HLS format is not supported currently.
                 * @param req CreateAIAnalysisTemplateRequest
                 * @return CreateAIAnalysisTemplateOutcome
                 */
                CreateAIAnalysisTemplateOutcome CreateAIAnalysisTemplate(const Model::CreateAIAnalysisTemplateRequest &request);
                void CreateAIAnalysisTemplateAsync(const Model::CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAnalysisTemplateOutcomeCallable CreateAIAnalysisTemplateCallable(const Model::CreateAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to create a user-defined audio and video content recognition template. Maximum quantity: 50.
                 * @param req CreateAIRecognitionTemplateRequest
                 * @return CreateAIRecognitionTemplateOutcome
                 */
                CreateAIRecognitionTemplateOutcome CreateAIRecognitionTemplate(const Model::CreateAIRecognitionTemplateRequest &request);
                void CreateAIRecognitionTemplateAsync(const Model::CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIRecognitionTemplateOutcomeCallable CreateAIRecognitionTemplateCallable(const Model::CreateAIRecognitionTemplateRequest& request);

                /**
                 *Create adaptive bitrate streaming templates. Maximum quantity: 100.
                 * @param req CreateAdaptiveDynamicStreamingTemplateRequest
                 * @return CreateAdaptiveDynamicStreamingTemplateOutcome
                 */
                CreateAdaptiveDynamicStreamingTemplateOutcome CreateAdaptiveDynamicStreamingTemplate(const Model::CreateAdaptiveDynamicStreamingTemplateRequest &request);
                void CreateAdaptiveDynamicStreamingTemplateAsync(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdaptiveDynamicStreamingTemplateOutcomeCallable CreateAdaptiveDynamicStreamingTemplateCallable(const Model::CreateAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *This API is used to create an AIGC advanced custom subject.
                 * @param req CreateAigcAdvancedCustomElementRequest
                 * @return CreateAigcAdvancedCustomElementOutcome
                 */
                CreateAigcAdvancedCustomElementOutcome CreateAigcAdvancedCustomElement(const Model::CreateAigcAdvancedCustomElementRequest &request);
                void CreateAigcAdvancedCustomElementAsync(const Model::CreateAigcAdvancedCustomElementRequest& request, const CreateAigcAdvancedCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcAdvancedCustomElementOutcomeCallable CreateAigcAdvancedCustomElementCallable(const Model::CreateAigcAdvancedCustomElementRequest& request);

                /**
                 *This API is used to create a Token for AIGC API calls. Data sync may be delayed once created. It can be queried or deleted after about 30 seconds.
                 * @param req CreateAigcApiTokenRequest
                 * @return CreateAigcApiTokenOutcome
                 */
                CreateAigcApiTokenOutcome CreateAigcApiToken(const Model::CreateAigcApiTokenRequest &request);
                void CreateAigcApiTokenAsync(const Model::CreateAigcApiTokenRequest& request, const CreateAigcApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcApiTokenOutcomeCallable CreateAigcApiTokenCallable(const Model::CreateAigcApiTokenRequest& request);

                /**
                 *This API is used to create AIGC voice replication. Note that calling this API incurs fees. Refer to the billing documentation (https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#96b3b59a-f9e1-49e9-966a-bedb70a4bf12).
                 * @param req CreateAigcAudioCloneRequest
                 * @return CreateAigcAudioCloneOutcome
                 */
                CreateAigcAudioCloneOutcome CreateAigcAudioClone(const Model::CreateAigcAudioCloneRequest &request);
                void CreateAigcAudioCloneAsync(const Model::CreateAigcAudioCloneRequest& request, const CreateAigcAudioCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcAudioCloneOutcomeCallable CreateAigcAudioCloneCallable(const Model::CreateAigcAudioCloneRequest& request);

                /**
                 *This API is used to create AI audio generation tasks.
                 * @param req CreateAigcAudioTaskRequest
                 * @return CreateAigcAudioTaskOutcome
                 */
                CreateAigcAudioTaskOutcome CreateAigcAudioTask(const Model::CreateAigcAudioTaskRequest &request);
                void CreateAigcAudioTaskAsync(const Model::CreateAigcAudioTaskRequest& request, const CreateAigcAudioTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcAudioTaskOutcomeCallable CreateAigcAudioTaskCallable(const Model::CreateAigcAudioTaskRequest& request);

                /**
                 *Call this API to create a subject for a specified model.
                 * @param req CreateAigcCustomElementRequest
                 * @return CreateAigcCustomElementOutcome
                 */
                CreateAigcCustomElementOutcome CreateAigcCustomElement(const Model::CreateAigcCustomElementRequest &request);
                void CreateAigcCustomElementAsync(const Model::CreateAigcCustomElementRequest& request, const CreateAigcCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcCustomElementOutcomeCallable CreateAigcCustomElementCallable(const Model::CreateAigcCustomElementRequest& request);

                /**
                 *This API is used to create AIGC custom voice types. Note that calling this API incurs custom voice type creation fees. Refer to the billing documentation (https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#5e5217e8-29fc-467e-ac2d-853648f988b7).
                 * @param req CreateAigcCustomVoiceRequest
                 * @return CreateAigcCustomVoiceOutcome
                 */
                CreateAigcCustomVoiceOutcome CreateAigcCustomVoice(const Model::CreateAigcCustomVoiceRequest &request);
                void CreateAigcCustomVoiceAsync(const Model::CreateAigcCustomVoiceRequest& request, const CreateAigcCustomVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcCustomVoiceOutcomeCallable CreateAigcCustomVoiceCallable(const Model::CreateAigcCustomVoiceRequest& request);

                /**
                 *This API is used to create AIGC Hunyuan 3D tasks.
                 * @param req CreateAigcHunyuan3DTaskRequest
                 * @return CreateAigcHunyuan3DTaskOutcome
                 */
                CreateAigcHunyuan3DTaskOutcome CreateAigcHunyuan3DTask(const Model::CreateAigcHunyuan3DTaskRequest &request);
                void CreateAigcHunyuan3DTaskAsync(const Model::CreateAigcHunyuan3DTaskRequest& request, const CreateAigcHunyuan3DTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcHunyuan3DTaskOutcomeCallable CreateAigcHunyuan3DTaskCallable(const Model::CreateAigcHunyuan3DTaskRequest& request);

                /**
                 *This API is used to generate AIGC images. The default limit is 1 concurrent processing. API calls will incur actual fees. Refer to the VOD AIGC image generation billing documentation. The settlement mode for the feature is pay-as-you-go. For daily billing customers, usage on the day is billed on the second day. For monthly settlement customers, the usage fees of the previous month are billed on the 1st of the next month.
                 * @param req CreateAigcImageTaskRequest
                 * @return CreateAigcImageTaskOutcome
                 */
                CreateAigcImageTaskOutcome CreateAigcImageTask(const Model::CreateAigcImageTaskRequest &request);
                void CreateAigcImageTaskAsync(const Model::CreateAigcImageTaskRequest& request, const CreateAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcImageTaskOutcomeCallable CreateAigcImageTaskCallable(const Model::CreateAigcImageTaskRequest& request);

                /**
                 *This API is used to create and enable AIGC quota configuration. Quota usage starts accumulating when the quota feature is enabled. Once the quota is reached, AIGC features will no longer be usable.

If the quota is deleted and re-enabled, the amount will be cleared and recalculated.

Since AGC content generation is an async task, real-time usage data cannot be obtained. Therefore, quota limits result in some errors, and precise control over the set limit cannot be achieved.
                 * @param req CreateAigcQuotaRequest
                 * @return CreateAigcQuotaOutcome
                 */
                CreateAigcQuotaOutcome CreateAigcQuota(const Model::CreateAigcQuotaRequest &request);
                void CreateAigcQuotaAsync(const Model::CreateAigcQuotaRequest& request, const CreateAigcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcQuotaOutcomeCallable CreateAigcQuotaCallable(const Model::CreateAigcQuotaRequest& request);

                /**
                 *This API is used to create AIGC custom subjects (Vidu). Note that calling this API incurs fees. Refer to the billing documentation (https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#96b3b59a-f9e1-49e9-966a-bedb70a4bf12).
                 * @param req CreateAigcSubjectRequest
                 * @return CreateAigcSubjectOutcome
                 */
                CreateAigcSubjectOutcome CreateAigcSubject(const Model::CreateAigcSubjectRequest &request);
                void CreateAigcSubjectAsync(const Model::CreateAigcSubjectRequest& request, const CreateAigcSubjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcSubjectOutcomeCallable CreateAigcSubjectCallable(const Model::CreateAigcSubjectRequest& request);

                /**
                 *This API is used to generate AIGC videos. API calls incur actual fees. Refer to the VOD AIGC video generation billing documentation. The settlement mode of this feature is pay-as-you-go. For daily billing customers, usage on the day is billed on the second day. For monthly billing customers, usage fees of the previous month are billed on the 1st of the next month.
                 * @param req CreateAigcVideoRedrawTaskRequest
                 * @return CreateAigcVideoRedrawTaskOutcome
                 */
                CreateAigcVideoRedrawTaskOutcome CreateAigcVideoRedrawTask(const Model::CreateAigcVideoRedrawTaskRequest &request);
                void CreateAigcVideoRedrawTaskAsync(const Model::CreateAigcVideoRedrawTaskRequest& request, const CreateAigcVideoRedrawTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcVideoRedrawTaskOutcomeCallable CreateAigcVideoRedrawTaskCallable(const Model::CreateAigcVideoRedrawTaskRequest& request);

                /**
                 *This API is used to generate AIGC videos. The default limit is 1 concurrent processing. API calls incur actual fees. Refer to the VOD AIGC video generation billing documentation. The feature uses postpaid settlement mode. For daily billing customers, usage on the day is billed on the second day. For monthly settlement customers, the previous month's usage fees are billed on the 1st of the next month.
                 * @param req CreateAigcVideoTaskRequest
                 * @return CreateAigcVideoTaskOutcome
                 */
                CreateAigcVideoTaskOutcome CreateAigcVideoTask(const Model::CreateAigcVideoTaskRequest &request);
                void CreateAigcVideoTaskAsync(const Model::CreateAigcVideoTaskRequest& request, const CreateAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAigcVideoTaskOutcomeCallable CreateAigcVideoTaskCallable(const Model::CreateAigcVideoTaskRequest& request);

                /**
                 *This API is used to create a custom animated image generating template. Maximum number: 16.
                 * @param req CreateAnimatedGraphicsTemplateRequest
                 * @return CreateAnimatedGraphicsTemplateOutcome
                 */
                CreateAnimatedGraphicsTemplateOutcome CreateAnimatedGraphicsTemplate(const Model::CreateAnimatedGraphicsTemplateRequest &request);
                void CreateAnimatedGraphicsTemplateAsync(const Model::CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnimatedGraphicsTemplateOutcomeCallable CreateAnimatedGraphicsTemplateCallable(const Model::CreateAnimatedGraphicsTemplateRequest& request);

                /**
                 *This API is used to create a user-defined digital watermark template.
                 * @param req CreateBlindWatermarkTemplateRequest
                 * @return CreateBlindWatermarkTemplateOutcome
                 */
                CreateBlindWatermarkTemplateOutcome CreateBlindWatermarkTemplate(const Model::CreateBlindWatermarkTemplateRequest &request);
                void CreateBlindWatermarkTemplateAsync(const Model::CreateBlindWatermarkTemplateRequest& request, const CreateBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlindWatermarkTemplateOutcomeCallable CreateBlindWatermarkTemplateCallable(const Model::CreateBlindWatermarkTemplateRequest& request);

                /**
                 *This API is used to add domain names to VOD. A user can add up to 20 domain names. 1. After the domain name is successfully added, VOD will deploy the domain name. It takes about 2 minutes for the domain name to change from the deployment state to the online status.
                 * @param req CreateCDNDomainRequest
                 * @return CreateCDNDomainOutcome
                 */
                CreateCDNDomainOutcome CreateCDNDomain(const Model::CreateCDNDomainRequest &request);
                void CreateCDNDomainAsync(const Model::CreateCDNDomainRequest& request, const CreateCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCDNDomainOutcomeCallable CreateCDNDomainCallable(const Model::CreateCDNDomainRequest& request);

                /**
                 *Create a logset via VOD.
                 * @param req CreateCLSLogsetRequest
                 * @return CreateCLSLogsetOutcome
                 */
                CreateCLSLogsetOutcome CreateCLSLogset(const Model::CreateCLSLogsetRequest &request);
                void CreateCLSLogsetAsync(const Model::CreateCLSLogsetRequest& request, const CreateCLSLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSLogsetOutcomeCallable CreateCLSLogsetCallable(const Model::CreateCLSLogsetRequest& request);

                /**
                 *This API is used to create a CLS log topic for VOD.
                 * @param req CreateCLSTopicRequest
                 * @return CreateCLSTopicOutcome
                 */
                CreateCLSTopicOutcome CreateCLSTopic(const Model::CreateCLSTopicRequest &request);
                void CreateCLSTopicAsync(const Model::CreateCLSTopicRequest& request, const CreateCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSTopicOutcomeCallable CreateCLSTopicCallable(const Model::CreateCLSTopicRequest& request);

                /**
                 ** Used to categorize and manage media;
* This API does not affect the category of existing media. To classify media, call the [ModifyMediaInfo](https://www.tencentcloud.com/document/product/266/31762?from_cn_redirect=1) API.
* The classification hierarchy cannot exceed 4 levels.
* The number of subcategories in each category cannot exceed 500.
                 * @param req CreateClassRequest
                 * @return CreateClassOutcome
                 */
                CreateClassOutcome CreateClass(const Model::CreateClassRequest &request);
                void CreateClassAsync(const Model::CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClassOutcomeCallable CreateClassCallable(const Model::CreateClassRequest& request);

                /**
                 *Initiate a complex adaptive bitstream processing task. Features include:
1. Output HLS and DASH adaptive bitrate streams based on the designated adaptive bitrate template;
2. Content protection solutions for adaptive bitrate streams are available in unencrypted, Widevine, or FairPlay.
3. Support adding opening and ending segments;
4. The output adaptive bitrate stream can contain multilingual audio streams, with each language coming from a different media file;
5. The output adaptive bitrate stream can include multilingual subtitle streams.

Notes:
1. When using an opening scene, the video stream in the opening scene media needs to align with the audio stream; otherwise, it will cause audio and video synchronization issues in the output.
2. If the output adaptive bitrate stream needs to include the audio of the main media, specify the FileId of the main media in the AudioSet parameter.
3. To use subtitles, add them to the main media first via the ModifyMediaInfo API or the audio and video details page in the console.
4. Top speed Codec and watermark are not currently supported.
                 * @param req CreateComplexAdaptiveDynamicStreamingTaskRequest
                 * @return CreateComplexAdaptiveDynamicStreamingTaskOutcome
                 */
                CreateComplexAdaptiveDynamicStreamingTaskOutcome CreateComplexAdaptiveDynamicStreamingTask(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest &request);
                void CreateComplexAdaptiveDynamicStreamingTaskAsync(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request, const CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable CreateComplexAdaptiveDynamicStreamingTaskCallable(const Model::CreateComplexAdaptiveDynamicStreamingTaskRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the moderation template supports video moderation and image moderation. For details, please see [Create Moderation Template](https://www.tencentcloud.com/document/api/266/84391?from_cn_redirect=1).
This API is used to create a user-customized audio/video moderation template. Up to 50 templates can be created.
                 * @param req CreateContentReviewTemplateRequest
                 * @return CreateContentReviewTemplateOutcome
                 */
                CreateContentReviewTemplateOutcome CreateContentReviewTemplate(const Model::CreateContentReviewTemplateRequest &request);
                void CreateContentReviewTemplateAsync(const Model::CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContentReviewTemplateOutcomeCallable CreateContentReviewTemplateCallable(const Model::CreateContentReviewTemplateRequest& request);

                /**
                 *This API is used to generate a subdomain name resolution record and prompt the customer to add it to the domain name resolution for wildcard domain name and domain name retrieval ownership verification.
                 * @param req CreateDomainVerifyRecordRequest
                 * @return CreateDomainVerifyRecordOutcome
                 */
                CreateDomainVerifyRecordOutcome CreateDomainVerifyRecord(const Model::CreateDomainVerifyRecordRequest &request);
                void CreateDomainVerifyRecordAsync(const Model::CreateDomainVerifyRecordRequest& request, const CreateDomainVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainVerifyRecordOutcomeCallable CreateDomainVerifyRecordCallable(const Model::CreateDomainVerifyRecordRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Creates an Audio and Video Quality Rebirth Template.
                 * @param req CreateEnhanceMediaTemplateRequest
                 * @return CreateEnhanceMediaTemplateOutcome
                 */
                CreateEnhanceMediaTemplateOutcome CreateEnhanceMediaTemplate(const Model::CreateEnhanceMediaTemplateRequest &request);
                void CreateEnhanceMediaTemplateAsync(const Model::CreateEnhanceMediaTemplateRequest& request, const CreateEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnhanceMediaTemplateOutcomeCallable CreateEnhanceMediaTemplateCallable(const Model::CreateEnhanceMediaTemplateRequest& request);

                /**
                 *Creates a title and trailer template.
-Maximum supported template quantity: 100.
                 * @param req CreateHeadTailTemplateRequest
                 * @return CreateHeadTailTemplateOutcome
                 */
                CreateHeadTailTemplateOutcome CreateHeadTailTemplate(const Model::CreateHeadTailTemplateRequest &request);
                void CreateHeadTailTemplateAsync(const Model::CreateHeadTailTemplateRequest& request, const CreateHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHeadTailTemplateOutcomeCallable CreateHeadTailTemplateCallable(const Model::CreateHeadTailTemplateRequest& request);

                /**
                 *Create a custom image processing template. Maximum quantity: 16. Supports up to ten operations, for example: crop - thumbnail - crop - blurry - thumbnail - crop - thumbnail - crop - blurry - thumbnail.
                 * @param req CreateImageProcessingTemplateRequest
                 * @return CreateImageProcessingTemplateOutcome
                 */
                CreateImageProcessingTemplateOutcome CreateImageProcessingTemplate(const Model::CreateImageProcessingTemplateRequest &request);
                void CreateImageProcessingTemplateAsync(const Model::CreateImageProcessingTemplateRequest& request, const CreateImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageProcessingTemplateOutcomeCallable CreateImageProcessingTemplateCallable(const Model::CreateImageProcessingTemplateRequest& request);

                /**
                 *This API is used to create a user-customized image sprite template. Maximum number: 16.
                 * @param req CreateImageSpriteTemplateRequest
                 * @return CreateImageSpriteTemplateOutcome
                 */
                CreateImageSpriteTemplateOutcome CreateImageSpriteTemplate(const Model::CreateImageSpriteTemplateRequest &request);
                void CreateImageSpriteTemplateAsync(const Model::CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSpriteTemplateOutcomeCallable CreateImageSpriteTemplateCallable(const Model::CreateImageSpriteTemplateRequest& request);

                /**
                 *This API is used to create a just in time transcoding template.
                 * @param req CreateJustInTimeTranscodeTemplateRequest
                 * @return CreateJustInTimeTranscodeTemplateOutcome
                 */
                CreateJustInTimeTranscodeTemplateOutcome CreateJustInTimeTranscodeTemplate(const Model::CreateJustInTimeTranscodeTemplateRequest &request);
                void CreateJustInTimeTranscodeTemplateAsync(const Model::CreateJustInTimeTranscodeTemplateRequest& request, const CreateJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJustInTimeTranscodeTemplateOutcomeCallable CreateJustInTimeTranscodeTemplateCallable(const Model::CreateJustInTimeTranscodeTemplateRequest& request);

                /**
                 *Create a knowledge base. This API is used to create a new knowledge base for Intelligent Media Assets. Each user can create up to 20 knowledge bases.
                 * @param req CreateKnowledgeBaseRequest
                 * @return CreateKnowledgeBaseOutcome
                 */
                CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest &request);
                void CreateKnowledgeBaseAsync(const Model::CreateKnowledgeBaseRequest& request, const CreateKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const Model::CreateKnowledgeBaseRequest& request);

                /**
                 *This API is used to create a large model parsing template.
                 * @param req CreateLLMComprehendTemplateRequest
                 * @return CreateLLMComprehendTemplateOutcome
                 */
                CreateLLMComprehendTemplateOutcome CreateLLMComprehendTemplate(const Model::CreateLLMComprehendTemplateRequest &request);
                void CreateLLMComprehendTemplateAsync(const Model::CreateLLMComprehendTemplateRequest& request, const CreateLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLLMComprehendTemplateOutcomeCallable CreateLLMComprehendTemplateCallable(const Model::CreateLLMComprehendTemplateRequest& request);

                /**
                 *This API is used to create a custom template for partial features of the ProcessMediaByMPS API.
When creating a template, fill in MPS related parameters in JSON format into the MPSCreateTemplateParams parameter. For specific task parameter configuration methods, refer to the MPS task template related documentation.
Currently supported MPS features for creating custom templates:
1. [Audio and video enhancement](https://www.tencentcloud.com/document/product/862/118703?from_cn_redirect=1).
2. [Media AI](https://www.tencentcloud.com/document/product/862/113756?from_cn_redirect=1)

> Template for tasks created using this method:
> Template management is still completed in the VOD platform.
> 2. The feature is currently in beta test. If needed, you can contact us for support.
                 * @param req CreateMPSTemplateRequest
                 * @return CreateMPSTemplateOutcome
                 */
                CreateMPSTemplateOutcome CreateMPSTemplate(const Model::CreateMPSTemplateRequest &request);
                void CreateMPSTemplateAsync(const Model::CreateMPSTemplateRequest& request, const CreateMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMPSTemplateOutcomeCallable CreateMPSTemplateCallable(const Model::CreateMPSTemplateRequest& request);

                /**
                 *This API is used to create material samples for video processing such as content recognition and inappropriate video recognition through technologies like facial feature positioning.
                 * @param req CreatePersonSampleRequest
                 * @return CreatePersonSampleOutcome
                 */
                CreatePersonSampleOutcome CreatePersonSample(const Model::CreatePersonSampleRequest &request);
                void CreatePersonSampleAsync(const Model::CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonSampleOutcomeCallable CreatePersonSampleCallable(const Model::CreatePersonSampleRequest& request);

                /**
                 *This API is used to create user-defined task flow templates. Template capacity limit: 50.
                 * @param req CreateProcedureTemplateRequest
                 * @return CreateProcedureTemplateOutcome
                 */
                CreateProcedureTemplateOutcome CreateProcedureTemplate(const Model::CreateProcedureTemplateRequest &request);
                void CreateProcedureTemplateAsync(const Model::CreateProcedureTemplateRequest& request, const CreateProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcedureTemplateOutcomeCallable CreateProcedureTemplateCallable(const Model::CreateProcedureTemplateRequest& request);

                /**
                 *This API is used to create a user-customized image async processing template. Maximum quantity: 50. HLS format is not supported currently.
                 * @param req CreateProcessImageAsyncTemplateRequest
                 * @return CreateProcessImageAsyncTemplateOutcome
                 */
                CreateProcessImageAsyncTemplateOutcome CreateProcessImageAsyncTemplate(const Model::CreateProcessImageAsyncTemplateRequest &request);
                void CreateProcessImageAsyncTemplateAsync(const Model::CreateProcessImageAsyncTemplateRequest& request, const CreateProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessImageAsyncTemplateOutcomeCallable CreateProcessImageAsyncTemplateCallable(const Model::CreateProcessImageAsyncTemplateRequest& request);

                /**
                 *This API is used to create an audio-visual quality inspection template.
                 * @param req CreateQualityInspectTemplateRequest
                 * @return CreateQualityInspectTemplateOutcome
                 */
                CreateQualityInspectTemplateOutcome CreateQualityInspectTemplate(const Model::CreateQualityInspectTemplateRequest &request);
                void CreateQualityInspectTemplateAsync(const Model::CreateQualityInspectTemplateRequest& request, const CreateQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQualityInspectTemplateOutcomeCallable CreateQualityInspectTemplateCallable(const Model::CreateQualityInspectTemplateRequest& request);

                /**
                 *This API is no longer maintained. The new version of the [Audio and Video Quality Revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Revival Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
This API is used to create a video rebirth template.
                 * @param req CreateRebuildMediaTemplateRequest
                 * @return CreateRebuildMediaTemplateOutcome
                 */
                CreateRebuildMediaTemplateOutcome CreateRebuildMediaTemplate(const Model::CreateRebuildMediaTemplateRequest &request);
                void CreateRebuildMediaTemplateAsync(const Model::CreateRebuildMediaTemplateRequest& request, const CreateRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRebuildMediaTemplateOutcomeCallable CreateRebuildMediaTemplateCallable(const Model::CreateRebuildMediaTemplateRequest& request);

                /**
                 *This API is used to create a user-defined moderation template. Maximum quantity: 50.
>Template is applicable only to the [audio/video moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) and [image moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1) APIs.
                 * @param req CreateReviewTemplateRequest
                 * @return CreateReviewTemplateOutcome
                 */
                CreateReviewTemplateOutcome CreateReviewTemplate(const Model::CreateReviewTemplateRequest &request);
                void CreateReviewTemplateAsync(const Model::CreateReviewTemplateRequest& request, const CreateReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReviewTemplateOutcomeCallable CreateReviewTemplateCallable(const Model::CreateReviewTemplateRequest& request);

                /**
                 *This API is used to create a carousel playlist. Maximum quantity: 100.
Each file in the Carousel Playlist can specify a source file or a transcoded file.
The designated file must be in hls format. All playlist files should preferably maintain the same bitrate and resolution.
                 * @param req CreateRoundPlayRequest
                 * @return CreateRoundPlayOutcome
                 */
                CreateRoundPlayOutcome CreateRoundPlay(const Model::CreateRoundPlayRequest &request);
                void CreateRoundPlayAsync(const Model::CreateRoundPlayRequest& request, const CreateRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoundPlayOutcomeCallable CreateRoundPlayCallable(const Model::CreateRoundPlayRequest& request);

                /**
                 *This API is used to create a custom sampled screenshot template. Maximum number: 16.
                 * @param req CreateSampleSnapshotTemplateRequest
                 * @return CreateSampleSnapshotTemplateOutcome
                 */
                CreateSampleSnapshotTemplateOutcome CreateSampleSnapshotTemplate(const Model::CreateSampleSnapshotTemplateRequest &request);
                void CreateSampleSnapshotTemplateAsync(const Model::CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSampleSnapshotTemplateOutcomeCallable CreateSampleSnapshotTemplateCallable(const Model::CreateSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to generate scenario-based AIGC images. API calls incur actual fees. Refer to the VOD [AIGC image generation billing document](https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#9c4dc6ff-4b3f-4b25-bf2d-393889dfb9ac). The feature uses the [postpaid](https://www.tencentcloud.com/document/product/266/2838?from_cn_redirect=1) settlement mode. For daily billing customers, usage on the day is billed on the second day. For monthly billing customers, the previous month's usage fees are billed on the 1st of the next month.
                 * @param req CreateSceneAigcImageTaskRequest
                 * @return CreateSceneAigcImageTaskOutcome
                 */
                CreateSceneAigcImageTaskOutcome CreateSceneAigcImageTask(const Model::CreateSceneAigcImageTaskRequest &request);
                void CreateSceneAigcImageTaskAsync(const Model::CreateSceneAigcImageTaskRequest& request, const CreateSceneAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSceneAigcImageTaskOutcomeCallable CreateSceneAigcImageTaskCallable(const Model::CreateSceneAigcImageTaskRequest& request);

                /**
                 *This API is used to generate scenario-based AIGC images.
                 * @param req CreateSceneAigcVideoTaskRequest
                 * @return CreateSceneAigcVideoTaskOutcome
                 */
                CreateSceneAigcVideoTaskOutcome CreateSceneAigcVideoTask(const Model::CreateSceneAigcVideoTaskRequest &request);
                void CreateSceneAigcVideoTaskAsync(const Model::CreateSceneAigcVideoTaskRequest& request, const CreateSceneAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSceneAigcVideoTaskOutcomeCallable CreateSceneAigcVideoTaskCallable(const Model::CreateSceneAigcVideoTaskRequest& request);

                /**
                 *This API is used to create a user-customized specified time point screenshot template. Maximum quantity: 16.
                 * @param req CreateSnapshotByTimeOffsetTemplateRequest
                 * @return CreateSnapshotByTimeOffsetTemplateOutcome
                 */
                CreateSnapshotByTimeOffsetTemplateOutcome CreateSnapshotByTimeOffsetTemplate(const Model::CreateSnapshotByTimeOffsetTemplateRequest &request);
                void CreateSnapshotByTimeOffsetTemplateAsync(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotByTimeOffsetTemplateOutcomeCallable CreateSnapshotByTimeOffsetTemplateCallable(const Model::CreateSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to enable storage in a region.
1. When a user enables on-demand services, storage in partial regions is enabled by default. To enable storage in other regions, use this API.
2. The DescribeStorageRegions API can query all storage regions and opened regions.
                 * @param req CreateStorageRegionRequest
                 * @return CreateStorageRegionOutcome
                 */
                CreateStorageRegionOutcome CreateStorageRegion(const Model::CreateStorageRegionRequest &request);
                void CreateStorageRegionAsync(const Model::CreateStorageRegionRequest& request, const CreateStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageRegionOutcomeCallable CreateStorageRegionCallable(const Model::CreateStorageRegionRequest& request);

                /**
                 *This API is used to create a VOD application.
                 * @param req CreateSubAppIdRequest
                 * @return CreateSubAppIdOutcome
                 */
                CreateSubAppIdOutcome CreateSubAppId(const Model::CreateSubAppIdRequest &request);
                void CreateSubAppIdAsync(const Model::CreateSubAppIdRequest& request, const CreateSubAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubAppIdOutcomeCallable CreateSubAppIdCallable(const Model::CreateSubAppIdRequest& request);

                /**
                 *This API is <font color='red'>no longer maintained</font>. The new version of player signature no longer uses player configuration templates. For details, please see [Player Signature](https://www.tencentcloud.com/document/product/266/45554?from_cn_redirect=1).
This API is used to create player configurations. Maximum quantity: 100.
                 * @param req CreateSuperPlayerConfigRequest
                 * @return CreateSuperPlayerConfigOutcome
                 */
                CreateSuperPlayerConfigOutcome CreateSuperPlayerConfig(const Model::CreateSuperPlayerConfigRequest &request);
                void CreateSuperPlayerConfigAsync(const Model::CreateSuperPlayerConfigRequest& request, const CreateSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSuperPlayerConfigOutcomeCallable CreateSuperPlayerConfigCallable(const Model::CreateSuperPlayerConfigRequest& request);

                /**
                 *Create custom transcoding templates. Maximum quantity: 100.
                 * @param req CreateTranscodeTemplateRequest
                 * @return CreateTranscodeTemplateOutcome
                 */
                CreateTranscodeTemplateOutcome CreateTranscodeTemplate(const Model::CreateTranscodeTemplateRequest &request);
                void CreateTranscodeTemplateAsync(const Model::CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTranscodeTemplateOutcomeCallable CreateTranscodeTemplateCallable(const Model::CreateTranscodeTemplateRequest& request);

                /**
                 *This API is used to add an acceleration domain name to VOD. A user can add up to 20 acceleration domain names.
1. After the domain name is successfully added, VOD will deploy the domain. It takes about 2 minutes for the domain to change from deployment status to online status.
                 * @param req CreateVodDomainRequest
                 * @return CreateVodDomainOutcome
                 */
                CreateVodDomainOutcome CreateVodDomain(const Model::CreateVodDomainRequest &request);
                void CreateVodDomainAsync(const Model::CreateVodDomainRequest& request, const CreateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVodDomainOutcomeCallable CreateVodDomainCallable(const Model::CreateVodDomainRequest& request);

                /**
                 *This API is used to create a user-defined watermark template with an upper limit of 1000.
                 * @param req CreateWatermarkTemplateRequest
                 * @return CreateWatermarkTemplateOutcome
                 */
                CreateWatermarkTemplateOutcome CreateWatermarkTemplate(const Model::CreateWatermarkTemplateRequest &request);
                void CreateWatermarkTemplateAsync(const Model::CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWatermarkTemplateOutcomeCallable CreateWatermarkTemplateCallable(const Model::CreateWatermarkTemplateRequest& request);

                /**
                 *This API is used to create keyword samples in batches. The samples are used for video processing such as inappropriate content recognition and content recognition through OCR and ASR technologies.
                 * @param req CreateWordSamplesRequest
                 * @return CreateWordSamplesOutcome
                 */
                CreateWordSamplesOutcome CreateWordSamples(const Model::CreateWordSamplesRequest &request);
                void CreateWordSamplesAsync(const Model::CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordSamplesOutcomeCallable CreateWordSamplesCallable(const Model::CreateWordSamplesRequest& request);

                /**
                 *This API is used to delete a user-defined audio and video content analysis template.

Note: Templates with IDs below 10000 are preset templates and cannot be deleted.
                 * @param req DeleteAIAnalysisTemplateRequest
                 * @return DeleteAIAnalysisTemplateOutcome
                 */
                DeleteAIAnalysisTemplateOutcome DeleteAIAnalysisTemplate(const Model::DeleteAIAnalysisTemplateRequest &request);
                void DeleteAIAnalysisTemplateAsync(const Model::DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisTemplateOutcomeCallable DeleteAIAnalysisTemplateCallable(const Model::DeleteAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to delete a user-defined audio and video content recognition template.
                 * @param req DeleteAIRecognitionTemplateRequest
                 * @return DeleteAIRecognitionTemplateOutcome
                 */
                DeleteAIRecognitionTemplateOutcome DeleteAIRecognitionTemplate(const Model::DeleteAIRecognitionTemplateRequest &request);
                void DeleteAIRecognitionTemplateAsync(const Model::DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIRecognitionTemplateOutcomeCallable DeleteAIRecognitionTemplateCallable(const Model::DeleteAIRecognitionTemplateRequest& request);

                /**
                 *Delete an adaptive bitrate streaming template
                 * @param req DeleteAdaptiveDynamicStreamingTemplateRequest
                 * @return DeleteAdaptiveDynamicStreamingTemplateOutcome
                 */
                DeleteAdaptiveDynamicStreamingTemplateOutcome DeleteAdaptiveDynamicStreamingTemplate(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest &request);
                void DeleteAdaptiveDynamicStreamingTemplateAsync(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable DeleteAdaptiveDynamicStreamingTemplateCallable(const Model::DeleteAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *This API is used to delete AIGC advanced custom subjects.
                 * @param req DeleteAigcAdvancedCustomElementRequest
                 * @return DeleteAigcAdvancedCustomElementOutcome
                 */
                DeleteAigcAdvancedCustomElementOutcome DeleteAigcAdvancedCustomElement(const Model::DeleteAigcAdvancedCustomElementRequest &request);
                void DeleteAigcAdvancedCustomElementAsync(const Model::DeleteAigcAdvancedCustomElementRequest& request, const DeleteAigcAdvancedCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAigcAdvancedCustomElementOutcomeCallable DeleteAigcAdvancedCustomElementCallable(const Model::DeleteAigcAdvancedCustomElementRequest& request);

                /**
                 *Deletes an AIGC API Token. The associated AIGC quota will also be deleted.
                 * @param req DeleteAigcApiTokenRequest
                 * @return DeleteAigcApiTokenOutcome
                 */
                DeleteAigcApiTokenOutcome DeleteAigcApiToken(const Model::DeleteAigcApiTokenRequest &request);
                void DeleteAigcApiTokenAsync(const Model::DeleteAigcApiTokenRequest& request, const DeleteAigcApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAigcApiTokenOutcomeCallable DeleteAigcApiTokenCallable(const Model::DeleteAigcApiTokenRequest& request);

                /**
                 *This API is used to delete AIGC quota configurations. Once deleted, AIGC task initiation will no longer be limited.

If the quota is re-enabled after deletion, the amount will be cleared and recalculated.
                 * @param req DeleteAigcQuotaRequest
                 * @return DeleteAigcQuotaOutcome
                 */
                DeleteAigcQuotaOutcome DeleteAigcQuota(const Model::DeleteAigcQuotaRequest &request);
                void DeleteAigcQuotaAsync(const Model::DeleteAigcQuotaRequest& request, const DeleteAigcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAigcQuotaOutcomeCallable DeleteAigcQuotaCallable(const Model::DeleteAigcQuotaRequest& request);

                /**
                 *This API is used to delete a custom animated image generating template.
                 * @param req DeleteAnimatedGraphicsTemplateRequest
                 * @return DeleteAnimatedGraphicsTemplateOutcome
                 */
                DeleteAnimatedGraphicsTemplateOutcome DeleteAnimatedGraphicsTemplate(const Model::DeleteAnimatedGraphicsTemplateRequest &request);
                void DeleteAnimatedGraphicsTemplateAsync(const Model::DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAnimatedGraphicsTemplateOutcomeCallable DeleteAnimatedGraphicsTemplateCallable(const Model::DeleteAnimatedGraphicsTemplateRequest& request);

                /**
                 *This API is used to delete a user-defined digital watermark template.
                 * @param req DeleteBlindWatermarkTemplateRequest
                 * @return DeleteBlindWatermarkTemplateOutcome
                 */
                DeleteBlindWatermarkTemplateOutcome DeleteBlindWatermarkTemplate(const Model::DeleteBlindWatermarkTemplateRequest &request);
                void DeleteBlindWatermarkTemplateAsync(const Model::DeleteBlindWatermarkTemplateRequest& request, const DeleteBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlindWatermarkTemplateOutcomeCallable DeleteBlindWatermarkTemplateCallable(const Model::DeleteBlindWatermarkTemplateRequest& request);

                /**
                 *Delete a CDN domain
                 * @param req DeleteCDNDomainRequest
                 * @return DeleteCDNDomainOutcome
                 */
                DeleteCDNDomainOutcome DeleteCDNDomain(const Model::DeleteCDNDomainRequest &request);
                void DeleteCDNDomainAsync(const Model::DeleteCDNDomainRequest& request, const DeleteCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCDNDomainOutcomeCallable DeleteCDNDomainCallable(const Model::DeleteCDNDomainRequest& request);

                /**
                 *Delete the log topic enabled for VOD.
                 * @param req DeleteCLSTopicRequest
                 * @return DeleteCLSTopicOutcome
                 */
                DeleteCLSTopicOutcome DeleteCLSTopic(const Model::DeleteCLSTopicRequest &request);
                void DeleteCLSTopicAsync(const Model::DeleteCLSTopicRequest& request, const DeleteCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCLSTopicOutcomeCallable DeleteCLSTopicCallable(const Model::DeleteCLSTopicRequest& request);

                /**
                 ** A category can be deleted only when it has no subcategories and no associated media.
* Otherwise, execute [delete media](https://www.tencentcloud.com/document/product/266/31764?from_cn_redirect=1) and subcategories first, then delete the category;
                 * @param req DeleteClassRequest
                 * @return DeleteClassOutcome
                 */
                DeleteClassOutcome DeleteClass(const Model::DeleteClassRequest &request);
                void DeleteClassAsync(const Model::DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClassOutcomeCallable DeleteClassCallable(const Model::DeleteClassRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version moderation template supports video moderation and image moderation. For details, please see [Delete Moderation Template](https://www.tencentcloud.com/document/api/266/84390?from_cn_redirect=1).
Delete a user-customized audio/video moderation template.
                 * @param req DeleteContentReviewTemplateRequest
                 * @return DeleteContentReviewTemplateOutcome
                 */
                DeleteContentReviewTemplateOutcome DeleteContentReviewTemplate(const Model::DeleteContentReviewTemplateRequest &request);
                void DeleteContentReviewTemplateAsync(const Model::DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContentReviewTemplateOutcomeCallable DeleteContentReviewTemplateCallable(const Model::DeleteContentReviewTemplateRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Delete an audio and video quality rebirth template.
                 * @param req DeleteEnhanceMediaTemplateRequest
                 * @return DeleteEnhanceMediaTemplateOutcome
                 */
                DeleteEnhanceMediaTemplateOutcome DeleteEnhanceMediaTemplate(const Model::DeleteEnhanceMediaTemplateRequest &request);
                void DeleteEnhanceMediaTemplateAsync(const Model::DeleteEnhanceMediaTemplateRequest& request, const DeleteEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnhanceMediaTemplateOutcomeCallable DeleteEnhanceMediaTemplateCallable(const Model::DeleteEnhanceMediaTemplateRequest& request);

                /**
                 *Delete a title and trailer template.
                 * @param req DeleteHeadTailTemplateRequest
                 * @return DeleteHeadTailTemplateOutcome
                 */
                DeleteHeadTailTemplateOutcome DeleteHeadTailTemplate(const Model::DeleteHeadTailTemplateRequest &request);
                void DeleteHeadTailTemplateAsync(const Model::DeleteHeadTailTemplateRequest& request, const DeleteHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHeadTailTemplateOutcomeCallable DeleteHeadTailTemplateCallable(const Model::DeleteHeadTailTemplateRequest& request);

                /**
                 *This API is used to delete a user-defined image processing template.
                 * @param req DeleteImageProcessingTemplateRequest
                 * @return DeleteImageProcessingTemplateOutcome
                 */
                DeleteImageProcessingTemplateOutcome DeleteImageProcessingTemplate(const Model::DeleteImageProcessingTemplateRequest &request);
                void DeleteImageProcessingTemplateAsync(const Model::DeleteImageProcessingTemplateRequest& request, const DeleteImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageProcessingTemplateOutcomeCallable DeleteImageProcessingTemplateCallable(const Model::DeleteImageProcessingTemplateRequest& request);

                /**
                 *Delete an image sprite template.
                 * @param req DeleteImageSpriteTemplateRequest
                 * @return DeleteImageSpriteTemplateOutcome
                 */
                DeleteImageSpriteTemplateOutcome DeleteImageSpriteTemplate(const Model::DeleteImageSpriteTemplateRequest &request);
                void DeleteImageSpriteTemplateAsync(const Model::DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSpriteTemplateOutcomeCallable DeleteImageSpriteTemplateCallable(const Model::DeleteImageSpriteTemplateRequest& request);

                /**
                 *This API is used to delete a just in time transcoding template.
                 * @param req DeleteJustInTimeTranscodeTemplateRequest
                 * @return DeleteJustInTimeTranscodeTemplateOutcome
                 */
                DeleteJustInTimeTranscodeTemplateOutcome DeleteJustInTimeTranscodeTemplate(const Model::DeleteJustInTimeTranscodeTemplateRequest &request);
                void DeleteJustInTimeTranscodeTemplateAsync(const Model::DeleteJustInTimeTranscodeTemplateRequest& request, const DeleteJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJustInTimeTranscodeTemplateOutcomeCallable DeleteJustInTimeTranscodeTemplateCallable(const Model::DeleteJustInTimeTranscodeTemplateRequest& request);

                /**
                 *Delete a knowledge base.
After the API is called, the knowledge base will be in the "Deleting" status and the deletion operation will be performed in the backend.
                 * @param req DeleteKnowledgeBaseRequest
                 * @return DeleteKnowledgeBaseOutcome
                 */
                DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest &request);
                void DeleteKnowledgeBaseAsync(const Model::DeleteKnowledgeBaseRequest& request, const DeleteKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const Model::DeleteKnowledgeBaseRequest& request);

                /**
                 *This API is used to delete a user-defined customized large model parsing template.

Note: Templates with IDs below 10000 are preset templates and cannot be deleted.
                 * @param req DeleteLLMComprehendTemplateRequest
                 * @return DeleteLLMComprehendTemplateOutcome
                 */
                DeleteLLMComprehendTemplateOutcome DeleteLLMComprehendTemplate(const Model::DeleteLLMComprehendTemplateRequest &request);
                void DeleteLLMComprehendTemplateAsync(const Model::DeleteLLMComprehendTemplateRequest& request, const DeleteLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLLMComprehendTemplateOutcomeCallable DeleteLLMComprehendTemplateCallable(const Model::DeleteLLMComprehendTemplateRequest& request);

                /**
                 *This API is used to delete a user-defined MPS task template.
                 * @param req DeleteMPSTemplateRequest
                 * @return DeleteMPSTemplateOutcome
                 */
                DeleteMPSTemplateOutcome DeleteMPSTemplate(const Model::DeleteMPSTemplateRequest &request);
                void DeleteMPSTemplateAsync(const Model::DeleteMPSTemplateRequest& request, const DeleteMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMPSTemplateOutcomeCallable DeleteMPSTemplateCallable(const Model::DeleteMPSTemplateRequest& request);

                /**
                 ** Delete media and its corresponding video processing files (raw files, such as transcoded videos, sprite sheets, screenshots, WeChat video releases, etc.);
* You can separately delete the source file, transcoded video, and WeChat-published video under a specified video file ID.
* Note: After the original file is deleted, you cannot initiate any video processing operation such as transcoding or publishing on WeChat.
                 * @param req DeleteMediaRequest
                 * @return DeleteMediaOutcome
                 */
                DeleteMediaOutcome DeleteMedia(const Model::DeleteMediaRequest &request);
                void DeleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaOutcomeCallable DeleteMediaCallable(const Model::DeleteMediaRequest& request);

                /**
                 *This API is used to delete material samples based on character ID.
                 * @param req DeletePersonSampleRequest
                 * @return DeletePersonSampleOutcome
                 */
                DeletePersonSampleOutcome DeletePersonSample(const Model::DeletePersonSampleRequest &request);
                void DeletePersonSampleAsync(const Model::DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonSampleOutcomeCallable DeletePersonSampleCallable(const Model::DeletePersonSampleRequest& request);

                /**
                 *This API is used to delete a user-defined task flow template.
                 * @param req DeleteProcedureTemplateRequest
                 * @return DeleteProcedureTemplateOutcome
                 */
                DeleteProcedureTemplateOutcome DeleteProcedureTemplate(const Model::DeleteProcedureTemplateRequest &request);
                void DeleteProcedureTemplateAsync(const Model::DeleteProcedureTemplateRequest& request, const DeleteProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcedureTemplateOutcomeCallable DeleteProcedureTemplateCallable(const Model::DeleteProcedureTemplateRequest& request);

                /**
                 *This API is used to delete a user-customized asynchronous image processing template.

Note: Templates with IDs below 10000 are preset templates and cannot be deleted.
                 * @param req DeleteProcessImageAsyncTemplateRequest
                 * @return DeleteProcessImageAsyncTemplateOutcome
                 */
                DeleteProcessImageAsyncTemplateOutcome DeleteProcessImageAsyncTemplate(const Model::DeleteProcessImageAsyncTemplateRequest &request);
                void DeleteProcessImageAsyncTemplateAsync(const Model::DeleteProcessImageAsyncTemplateRequest& request, const DeleteProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProcessImageAsyncTemplateOutcomeCallable DeleteProcessImageAsyncTemplateCallable(const Model::DeleteProcessImageAsyncTemplateRequest& request);

                /**
                 *This API is used to delete an audio-visual quality inspection template.
                 * @param req DeleteQualityInspectTemplateRequest
                 * @return DeleteQualityInspectTemplateOutcome
                 */
                DeleteQualityInspectTemplateOutcome DeleteQualityInspectTemplate(const Model::DeleteQualityInspectTemplateRequest &request);
                void DeleteQualityInspectTemplateAsync(const Model::DeleteQualityInspectTemplateRequest& request, const DeleteQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQualityInspectTemplateOutcomeCallable DeleteQualityInspectTemplateCallable(const Model::DeleteQualityInspectTemplateRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Delete a video rebirth template.
                 * @param req DeleteRebuildMediaTemplateRequest
                 * @return DeleteRebuildMediaTemplateOutcome
                 */
                DeleteRebuildMediaTemplateOutcome DeleteRebuildMediaTemplate(const Model::DeleteRebuildMediaTemplateRequest &request);
                void DeleteRebuildMediaTemplateAsync(const Model::DeleteRebuildMediaTemplateRequest& request, const DeleteRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRebuildMediaTemplateOutcomeCallable DeleteRebuildMediaTemplateCallable(const Model::DeleteRebuildMediaTemplateRequest& request);

                /**
                 *This API is used to delete a user-defined moderation template.
>Template is applicable only to the [audio/video moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) and [image moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1) APIs.
                 * @param req DeleteReviewTemplateRequest
                 * @return DeleteReviewTemplateOutcome
                 */
                DeleteReviewTemplateOutcome DeleteReviewTemplate(const Model::DeleteReviewTemplateRequest &request);
                void DeleteReviewTemplateAsync(const Model::DeleteReviewTemplateRequest& request, const DeleteReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReviewTemplateOutcomeCallable DeleteReviewTemplateCallable(const Model::DeleteReviewTemplateRequest& request);

                /**
                 *This API is used to delete a carousel playlist.
                 * @param req DeleteRoundPlayRequest
                 * @return DeleteRoundPlayOutcome
                 */
                DeleteRoundPlayOutcome DeleteRoundPlay(const Model::DeleteRoundPlayRequest &request);
                void DeleteRoundPlayAsync(const Model::DeleteRoundPlayRequest& request, const DeleteRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoundPlayOutcomeCallable DeleteRoundPlayCallable(const Model::DeleteRoundPlayRequest& request);

                /**
                 *This API is used to delete a user-customized sampled screenshot template.
                 * @param req DeleteSampleSnapshotTemplateRequest
                 * @return DeleteSampleSnapshotTemplateOutcome
                 */
                DeleteSampleSnapshotTemplateOutcome DeleteSampleSnapshotTemplate(const Model::DeleteSampleSnapshotTemplateRequest &request);
                void DeleteSampleSnapshotTemplateAsync(const Model::DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSampleSnapshotTemplateOutcomeCallable DeleteSampleSnapshotTemplateCallable(const Model::DeleteSampleSnapshotTemplateRequest& request);

                /**
                 *This API is used to delete a user-customized specified time point screenshot template.
                 * @param req DeleteSnapshotByTimeOffsetTemplateRequest
                 * @return DeleteSnapshotByTimeOffsetTemplateOutcome
                 */
                DeleteSnapshotByTimeOffsetTemplateOutcome DeleteSnapshotByTimeOffsetTemplate(const Model::DeleteSnapshotByTimeOffsetTemplateRequest &request);
                void DeleteSnapshotByTimeOffsetTemplateAsync(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotByTimeOffsetTemplateOutcomeCallable DeleteSnapshotByTimeOffsetTemplateCallable(const Model::DeleteSnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is <font color='red'>no longer maintained</font>. The new version of player signature no longer uses player configuration templates. For details, please see [Player Signature](https://www.tencentcloud.com/document/product/266/45554?from_cn_redirect=1).
This API is used to delete player configurations.  
*Note: The system preset player configuration cannot be deleted.*
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
                 *This API is used to delete VOD acceleration domains.
1. Acceleration in all regions must be disabled before domain deletion.
                 * @param req DeleteVodDomainRequest
                 * @return DeleteVodDomainOutcome
                 */
                DeleteVodDomainOutcome DeleteVodDomain(const Model::DeleteVodDomainRequest &request);
                void DeleteVodDomainAsync(const Model::DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVodDomainOutcomeCallable DeleteVodDomainCallable(const Model::DeleteVodDomainRequest& request);

                /**
                 *Deletes a specified voice type by voice ID. The deletion cannot be undone, and the voice type cannot be used for subsequent APIs. Only voice types for this account can be deleted. System preset voice types cannot be deleted.

Note: Newly designed or cloned voice types cannot be deleted before activation. They are activated only after the new voice type is used for TTS once.
                 * @param req DeleteVoiceRequest
                 * @return DeleteVoiceOutcome
                 */
                DeleteVoiceOutcome DeleteVoice(const Model::DeleteVoiceRequest &request);
                void DeleteVoiceAsync(const Model::DeleteVoiceRequest& request, const DeleteVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVoiceOutcomeCallable DeleteVoiceCallable(const Model::DeleteVoiceRequest& request);

                /**
                 *This API is used to delete a user-defined watermark template.
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
                 *This API is used to retrieve the audio/video content analysis template detail list based on the unique identifier of an audio/video content analysis template. The returned results include all eligible user-defined audio/video content analysis templates and [system preset audio/video content analysis templates](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.88.86.E6.9E.90.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeAIAnalysisTemplatesRequest
                 * @return DescribeAIAnalysisTemplatesOutcome
                 */
                DescribeAIAnalysisTemplatesOutcome DescribeAIAnalysisTemplates(const Model::DescribeAIAnalysisTemplatesRequest &request);
                void DescribeAIAnalysisTemplatesAsync(const Model::DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisTemplatesOutcomeCallable DescribeAIAnalysisTemplatesCallable(const Model::DescribeAIAnalysisTemplatesRequest& request);

                /**
                 *This API is used to get the list of audio/video content recognition templates by unique ID. The returned results include all eligible user-defined audio/video content recognition templates and [system preset audio/video content recognition templates](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E8.AF.86.E5.88.AB.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeAIRecognitionTemplatesRequest
                 * @return DescribeAIRecognitionTemplatesOutcome
                 */
                DescribeAIRecognitionTemplatesOutcome DescribeAIRecognitionTemplates(const Model::DescribeAIRecognitionTemplatesRequest &request);
                void DescribeAIRecognitionTemplatesAsync(const Model::DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIRecognitionTemplatesOutcomeCallable DescribeAIRecognitionTemplatesCallable(const Model::DescribeAIRecognitionTemplatesRequest& request);

                /**
                 *This API is used to query adaptive bitrate streaming templates, and the pagination query is supported based on conditions.
                 * @param req DescribeAdaptiveDynamicStreamingTemplatesRequest
                 * @return DescribeAdaptiveDynamicStreamingTemplatesOutcome
                 */
                DescribeAdaptiveDynamicStreamingTemplatesOutcome DescribeAdaptiveDynamicStreamingTemplates(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest &request);
                void DescribeAdaptiveDynamicStreamingTemplatesAsync(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable DescribeAdaptiveDynamicStreamingTemplatesCallable(const Model::DescribeAdaptiveDynamicStreamingTemplatesRequest& request);

                /**
                 *This API is used to retrieve advanced custom AIGC subjects.
                 * @param req DescribeAigcAdvancedCustomElementsRequest
                 * @return DescribeAigcAdvancedCustomElementsOutcome
                 */
                DescribeAigcAdvancedCustomElementsOutcome DescribeAigcAdvancedCustomElements(const Model::DescribeAigcAdvancedCustomElementsRequest &request);
                void DescribeAigcAdvancedCustomElementsAsync(const Model::DescribeAigcAdvancedCustomElementsRequest& request, const DescribeAigcAdvancedCustomElementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcAdvancedCustomElementsOutcomeCallable DescribeAigcAdvancedCustomElementsCallable(const Model::DescribeAigcAdvancedCustomElementsRequest& request);

                /**
                 *Query the list of AIGC API tokens. Data sync has a delay after creation or deletion. You can query the latest data after about 30 seconds.
                 * @param req DescribeAigcApiTokensRequest
                 * @return DescribeAigcApiTokensOutcome
                 */
                DescribeAigcApiTokensOutcome DescribeAigcApiTokens(const Model::DescribeAigcApiTokensRequest &request);
                void DescribeAigcApiTokensAsync(const Model::DescribeAigcApiTokensRequest& request, const DescribeAigcApiTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcApiTokensOutcomeCallable DescribeAigcApiTokensCallable(const Model::DescribeAigcApiTokensRequest& request);

                /**
                 *This API is used to retrieve AIGC face information. Note that calling this API incurs face recognition fees. Refer to the billing documentation (https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#96b3b59a-f9e1-49e9-966a-bedb70a4bf12).
                 * @param req DescribeAigcFaceInfoRequest
                 * @return DescribeAigcFaceInfoOutcome
                 */
                DescribeAigcFaceInfoOutcome DescribeAigcFaceInfo(const Model::DescribeAigcFaceInfoRequest &request);
                void DescribeAigcFaceInfoAsync(const Model::DescribeAigcFaceInfoRequest& request, const DescribeAigcFaceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcFaceInfoOutcomeCallable DescribeAigcFaceInfoCallable(const Model::DescribeAigcFaceInfoRequest& request);

                /**
                 *This API is used to asynchronously fetch AIGC face information. Note that calling this API incurs face recognition fees. Refer to the billing documentation (https://www.tencentcloud.com/document/product/266/95125?from_cn_redirect=1#96b3b59a-f9e1-49e9-966a-bedb70a4bf12).
                 * @param req DescribeAigcFaceInfoAsyncRequest
                 * @return DescribeAigcFaceInfoAsyncOutcome
                 */
                DescribeAigcFaceInfoAsyncOutcome DescribeAigcFaceInfoAsync(const Model::DescribeAigcFaceInfoAsyncRequest &request);
                void DescribeAigcFaceInfoAsyncAsync(const Model::DescribeAigcFaceInfoAsyncRequest& request, const DescribeAigcFaceInfoAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcFaceInfoAsyncOutcomeCallable DescribeAigcFaceInfoAsyncCallable(const Model::DescribeAigcFaceInfoAsyncRequest& request);

                /**
                 *This API is used to query AIGC quota configurations.
                 * @param req DescribeAigcQuotasRequest
                 * @return DescribeAigcQuotasOutcome
                 */
                DescribeAigcQuotasOutcome DescribeAigcQuotas(const Model::DescribeAigcQuotasRequest &request);
                void DescribeAigcQuotasAsync(const Model::DescribeAigcQuotasRequest& request, const DescribeAigcQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcQuotasOutcomeCallable DescribeAigcQuotasCallable(const Model::DescribeAigcQuotasRequest& request);

                /**
                 *This API returns AIGC statistical information within a specified time range.
1. AIGC statistical data from the last 365 days can be queried.
   2. The query time span should not exceed 90 days.
3. If the query time span exceeds 1 day, the data of day granularity is returned. Otherwise, the data of 5-minute granularity is returned.
                 * @param req DescribeAigcUsageDataRequest
                 * @return DescribeAigcUsageDataOutcome
                 */
                DescribeAigcUsageDataOutcome DescribeAigcUsageData(const Model::DescribeAigcUsageDataRequest &request);
                void DescribeAigcUsageDataAsync(const Model::DescribeAigcUsageDataRequest& request, const DescribeAigcUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAigcUsageDataOutcomeCallable DescribeAigcUsageDataCallable(const Model::DescribeAigcUsageDataRequest& request);

                /**
                 ** Obtain all classification information of the user.
                 * @param req DescribeAllClassRequest
                 * @return DescribeAllClassOutcome
                 */
                DescribeAllClassOutcome DescribeAllClass(const Model::DescribeAllClassRequest &request);
                void DescribeAllClassAsync(const Model::DescribeAllClassRequest& request, const DescribeAllClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllClassOutcomeCallable DescribeAllClassCallable(const Model::DescribeAllClassRequest& request);

                /**
                 *This API is used to query a list of rotating image templates, and the pagination query is supported based on conditions.
                 * @param req DescribeAnimatedGraphicsTemplatesRequest
                 * @return DescribeAnimatedGraphicsTemplatesOutcome
                 */
                DescribeAnimatedGraphicsTemplatesOutcome DescribeAnimatedGraphicsTemplates(const Model::DescribeAnimatedGraphicsTemplatesRequest &request);
                void DescribeAnimatedGraphicsTemplatesAsync(const Model::DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAnimatedGraphicsTemplatesOutcomeCallable DescribeAnimatedGraphicsTemplatesCallable(const Model::DescribeAnimatedGraphicsTemplatesRequest& request);

                /**
                 *This API is used to query user-customized digital watermark templates.
                 * @param req DescribeBlindWatermarkTemplatesRequest
                 * @return DescribeBlindWatermarkTemplatesOutcome
                 */
                DescribeBlindWatermarkTemplatesOutcome DescribeBlindWatermarkTemplates(const Model::DescribeBlindWatermarkTemplatesRequest &request);
                void DescribeBlindWatermarkTemplatesAsync(const Model::DescribeBlindWatermarkTemplatesRequest& request, const DescribeBlindWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlindWatermarkTemplatesOutcomeCallable DescribeBlindWatermarkTemplatesCallable(const Model::DescribeBlindWatermarkTemplatesRequest& request);

                /**
                 *This API is used to query on-demand domain names.
                 * @param req DescribeCDNDomainsRequest
                 * @return DescribeCDNDomainsOutcome
                 */
                DescribeCDNDomainsOutcome DescribeCDNDomains(const Model::DescribeCDNDomainsRequest &request);
                void DescribeCDNDomainsAsync(const Model::DescribeCDNDomainsRequest& request, const DescribeCDNDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNDomainsOutcomeCallable DescribeCDNDomainsCallable(const Model::DescribeCDNDomainsRequest& request);

                /**
                 *This API is used to query CDN bandwidth, traffic, and other stats for on-demand domain names.
* The time span between the query start time and end time should not exceed 90 days.
* Data in different service regions can be queried.
* Statistical data within the Chinese mainland supports querying stats by designated region and carrier.
* Playback statistics only target VOD domains, excluding distribution from EdgeOne domain names.
                 * @param req DescribeCDNStatDetailsRequest
                 * @return DescribeCDNStatDetailsOutcome
                 */
                DescribeCDNStatDetailsOutcome DescribeCDNStatDetails(const Model::DescribeCDNStatDetailsRequest &request);
                void DescribeCDNStatDetailsAsync(const Model::DescribeCDNStatDetailsRequest& request, const DescribeCDNStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNStatDetailsOutcomeCallable DescribeCDNStatDetailsCallable(const Model::DescribeCDNStatDetailsRequest& request);

                /**
                 *This API is used to query VOD CDN stats such as traffic and bandwidth.
1. CDN usage data is retained on the system side for 13 months. You can only query usage data from the most recent 365 days through the API. If you need to retrieve historical usage data beyond 365 days, contact us.
   2. The query time span should not exceed 90 days.
3. You can specify the time granularity of usage data, supporting 5-minute, 1-hour, and 1-day granularities.
4. Traffic is the total traffic within the query time granularity, and bandwidth is the peak bandwidth within the query time granularity.
5. Playback statistics only target VOD domains, excluding distribution from EdgeOne domain names.
                 * @param req DescribeCDNUsageDataRequest
                 * @return DescribeCDNUsageDataOutcome
                 */
                DescribeCDNUsageDataOutcome DescribeCDNUsageData(const Model::DescribeCDNUsageDataRequest &request);
                void DescribeCDNUsageDataAsync(const Model::DescribeCDNUsageDataRequest& request, const DescribeCDNUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCDNUsageDataOutcomeCallable DescribeCDNUsageDataCallable(const Model::DescribeCDNUsageDataRequest& request);

                /**
                 *Query the CLS log set created by VOD.
                 * @param req DescribeCLSLogsetsRequest
                 * @return DescribeCLSLogsetsOutcome
                 */
                DescribeCLSLogsetsOutcome DescribeCLSLogsets(const Model::DescribeCLSLogsetsRequest &request);
                void DescribeCLSLogsetsAsync(const Model::DescribeCLSLogsetsRequest& request, const DescribeCLSLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogsetsOutcomeCallable DescribeCLSLogsetsCallable(const Model::DescribeCLSLogsetsRequest& request);

                /**
                 *Queries the destination topic for log delivery under an on-demand domain name.
                 * @param req DescribeCLSPushTargetsRequest
                 * @return DescribeCLSPushTargetsOutcome
                 */
                DescribeCLSPushTargetsOutcome DescribeCLSPushTargets(const Model::DescribeCLSPushTargetsRequest &request);
                void DescribeCLSPushTargetsAsync(const Model::DescribeCLSPushTargetsRequest& request, const DescribeCLSPushTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSPushTargetsOutcomeCallable DescribeCLSPushTargetsCallable(const Model::DescribeCLSPushTargetsRequest& request);

                /**
                 *Queries the list of CLS log topics created by VOD.
                 * @param req DescribeCLSTopicsRequest
                 * @return DescribeCLSTopicsOutcome
                 */
                DescribeCLSTopicsOutcome DescribeCLSTopics(const Model::DescribeCLSTopicsRequest &request);
                void DescribeCLSTopicsAsync(const Model::DescribeCLSTopicsRequest& request, const DescribeCLSTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSTopicsOutcomeCallable DescribeCLSTopicsCallable(const Model::DescribeCLSTopicsRequest& request);

                /**
                 *This API is used to query the download URL of CDN access logs for an on-demand domain name, excluding EdgeOne origin-pull to VOD domains.
1. Can query CDN log download links from the most recent 30 days.
2. By default, CDN generates a log file per hour. If there is no CDN access in an hour, no log file is generated.    
3. The CDN log download link has a validity of 24 hours.
                 * @param req DescribeCdnLogsRequest
                 * @return DescribeCdnLogsOutcome
                 */
                DescribeCdnLogsOutcome DescribeCdnLogs(const Model::DescribeCdnLogsRequest &request);
                void DescribeCdnLogsAsync(const Model::DescribeCdnLogsRequest& request, const DescribeCdnLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnLogsOutcomeCallable DescribeCdnLogsCallable(const Model::DescribeCdnLogsRequest& request);

                /**
                 *This API is used to return client upload acceleration statistics within a specified time range.
1. Can query client upload acceleration statistics data for the most recent 365 days.
   2. The query time span should not exceed 90 days.
3. If the query time span exceeds 1 day, the data returned is at a daily granularity. Otherwise, the data returned is at a 5-minute granularity.
                 * @param req DescribeClientUploadAccelerationUsageDataRequest
                 * @return DescribeClientUploadAccelerationUsageDataOutcome
                 */
                DescribeClientUploadAccelerationUsageDataOutcome DescribeClientUploadAccelerationUsageData(const Model::DescribeClientUploadAccelerationUsageDataRequest &request);
                void DescribeClientUploadAccelerationUsageDataAsync(const Model::DescribeClientUploadAccelerationUsageDataRequest& request, const DescribeClientUploadAccelerationUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientUploadAccelerationUsageDataOutcomeCallable DescribeClientUploadAccelerationUsageDataCallable(const Model::DescribeClientUploadAccelerationUsageDataRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the moderation template supports video and image moderation. For details, please see [Query the moderation template list](https://www.tencentcloud.com/document/api/266/84389?from_cn_redirect=1).
This API is used to obtain the list of audio/video moderation template details based on the unique identifier of the template. The returned results include all eligible custom templates and system preset content review templates (https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.A7.86.E9.A2.91.E5.86.85.E5.AE.B9.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeContentReviewTemplatesRequest
                 * @return DescribeContentReviewTemplatesOutcome
                 */
                DescribeContentReviewTemplatesOutcome DescribeContentReviewTemplates(const Model::DescribeContentReviewTemplatesRequest &request);
                void DescribeContentReviewTemplatesAsync(const Model::DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentReviewTemplatesOutcomeCallable DescribeContentReviewTemplatesCallable(const Model::DescribeContentReviewTemplatesRequest& request);

                /**
                 *Query the carousel current playlist.
                 * @param req DescribeCurrentPlaylistRequest
                 * @return DescribeCurrentPlaylistOutcome
                 */
                DescribeCurrentPlaylistOutcome DescribeCurrentPlaylist(const Model::DescribeCurrentPlaylistRequest &request);
                void DescribeCurrentPlaylistAsync(const Model::DescribeCurrentPlaylistRequest& request, const DescribeCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentPlaylistOutcomeCallable DescribeCurrentPlaylistCallable(const Model::DescribeCurrentPlaylistRequest& request);

                /**
                 *This API is used to query daily playback statistics within a specified date range.
Playback statistics from the past one year can be queried.
* The time span between the start date and end date can be up to 90 days.
* Playback statistics only target VOD domains, excluding distribution from EdgeOne domain names.
* Due to data delay, you are advised to query the usage data of the previous day after 12:00 noon the next day.
                 * @param req DescribeDailyMediaPlayStatRequest
                 * @return DescribeDailyMediaPlayStatOutcome
                 */
                DescribeDailyMediaPlayStatOutcome DescribeDailyMediaPlayStat(const Model::DescribeDailyMediaPlayStatRequest &request);
                void DescribeDailyMediaPlayStatAsync(const Model::DescribeDailyMediaPlayStatRequest& request, const DescribeDailyMediaPlayStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyMediaPlayStatOutcomeCallable DescribeDailyMediaPlayStatCallable(const Model::DescribeDailyMediaPlayStatRequest& request);

                /**
                 *This API is used to query daily playback statistics for the Top 100 media files.
* Playback statistics from the past one year can be queried.
* You can query by number of plays or playback traffic.
* Playback count statistics description:
1. HLS file: The number of plays is counted when accessing M3U8 files, but not when accessing TS files.
2. Other files (for example, MP4 files): If a playback request includes the range parameter and the start parameter of range is not equal to 0, the number of plays is not counted. In other cases, the number of plays is counted.
* Playback statistics only target VOD domains (i.e., EdgeOne domain distribution is not included in playback statistics).
                 * @param req DescribeDailyMostPlayedStatRequest
                 * @return DescribeDailyMostPlayedStatOutcome
                 */
                DescribeDailyMostPlayedStatOutcome DescribeDailyMostPlayedStat(const Model::DescribeDailyMostPlayedStatRequest &request);
                void DescribeDailyMostPlayedStatAsync(const Model::DescribeDailyMostPlayedStatRequest& request, const DescribeDailyMostPlayedStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyMostPlayedStatOutcomeCallable DescribeDailyMostPlayedStatCallable(const Model::DescribeDailyMostPlayedStatRequest& request);

                /**
                 *This API is used to query the download address of playback statistics files.
* You can query the download links for playback statistics files from the past one year. The time span between the start date and end date cannot exceed 90 days.
VOD analyzes and processes the CDN request logs of the previous day to generate playback statistics files.
* The playback statistics file contains statistical information such as the number of plays and total traffic of media files.
* Playback count statistics description:
1. HLS file: The number of plays is counted when an M3U8 file is accessed, but not when a TS file is accessed.
2. Other files (for example, MP4 files): If the playback request includes the range parameter and the start parameter of range is not equal to 0, the number of plays is not counted. In other cases, the number of plays is counted.
* Statistics of playback devices: If a playback request includes the UserAgent parameter and the UserAgent contains identifiers such as Android or iPhone, it is counted as a mobile playback count. Otherwise, it is counted as a PC playback count.
* Playback statistics only target VOD domains, excluding EdgeOne domain name distribution.
                 * @param req DescribeDailyPlayStatFileListRequest
                 * @return DescribeDailyPlayStatFileListOutcome
                 */
                DescribeDailyPlayStatFileListOutcome DescribeDailyPlayStatFileList(const Model::DescribeDailyPlayStatFileListRequest &request);
                void DescribeDailyPlayStatFileListAsync(const Model::DescribeDailyPlayStatFileListRequest& request, const DescribeDailyPlayStatFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDailyPlayStatFileListOutcomeCallable DescribeDailyPlayStatFileListCallable(const Model::DescribeDailyPlayStatFileListRequest& request);

                /**
                 *This API is used to query the default distribution configuration.
* Distribution domain name and distribution protocol, i.e., the domain name and protocol in the media file distribution URL. Media files are distributed based on the default distribution configuration.
* Playback key, used to calculate player signature.
                 * @param req DescribeDefaultDistributionConfigRequest
                 * @return DescribeDefaultDistributionConfigOutcome
                 */
                DescribeDefaultDistributionConfigOutcome DescribeDefaultDistributionConfig(const Model::DescribeDefaultDistributionConfigRequest &request);
                void DescribeDefaultDistributionConfigAsync(const Model::DescribeDefaultDistributionConfigRequest& request, const DescribeDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultDistributionConfigOutcomeCallable DescribeDefaultDistributionConfigCallable(const Model::DescribeDefaultDistributionConfigRequest& request);

                /**
                 *This API is used to query DRM Key Provider Information.
                 * @param req DescribeDrmKeyProviderInfoRequest
                 * @return DescribeDrmKeyProviderInfoOutcome
                 */
                DescribeDrmKeyProviderInfoOutcome DescribeDrmKeyProviderInfo(const Model::DescribeDrmKeyProviderInfoRequest &request);
                void DescribeDrmKeyProviderInfoAsync(const Model::DescribeDrmKeyProviderInfoRequest& request, const DescribeDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDrmKeyProviderInfoOutcomeCallable DescribeDrmKeyProviderInfoCallable(const Model::DescribeDrmKeyProviderInfoRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
This API is used to get the audio and video quality rebirth template list.
                 * @param req DescribeEnhanceMediaTemplatesRequest
                 * @return DescribeEnhanceMediaTemplatesOutcome
                 */
                DescribeEnhanceMediaTemplatesOutcome DescribeEnhanceMediaTemplates(const Model::DescribeEnhanceMediaTemplatesRequest &request);
                void DescribeEnhanceMediaTemplatesAsync(const Model::DescribeEnhanceMediaTemplatesRequest& request, const DescribeEnhanceMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnhanceMediaTemplatesOutcomeCallable DescribeEnhanceMediaTemplatesCallable(const Model::DescribeEnhanceMediaTemplatesRequest& request);

                /**
                 *Tencent Cloud VOD provides media upload, media management, media processing, and other services. During or after the execution of these services, Tencent Cloud VOD also provides various event notifications, allowing developers to detect service processing status and perform next business operations.

Developers can use this API to query the current configuration of event notification receiving methods, recipient addresses, and which events have callback notification enabled.

Default API request rate limit: 100 requests/second.
                 * @param req DescribeEventConfigRequest
                 * @return DescribeEventConfigOutcome
                 */
                DescribeEventConfigOutcome DescribeEventConfig(const Model::DescribeEventConfigRequest &request);
                void DescribeEventConfigAsync(const Model::DescribeEventConfigRequest& request, const DescribeEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventConfigOutcomeCallable DescribeEventConfigCallable(const Model::DescribeEventConfigRequest& request);

                /**
                 *Used to asynchronously get file attributes.
-Currently only support getting the Md5 and Sha1 of the source file.
-For HLS or DASH input files, only get the attributes of the index file.
                 * @param req DescribeFileAttributesRequest
                 * @return DescribeFileAttributesOutcome
                 */
                DescribeFileAttributesOutcome DescribeFileAttributes(const Model::DescribeFileAttributesRequest &request);
                void DescribeFileAttributesAsync(const Model::DescribeFileAttributesRequest& request, const DescribeFileAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileAttributesOutcomeCallable DescribeFileAttributesCallable(const Model::DescribeFileAttributesRequest& request);

                /**
                 *This API is used to search for a list of title and trailer templates.
                 * @param req DescribeHeadTailTemplatesRequest
                 * @return DescribeHeadTailTemplatesOutcome
                 */
                DescribeHeadTailTemplatesOutcome DescribeHeadTailTemplates(const Model::DescribeHeadTailTemplatesRequest &request);
                void DescribeHeadTailTemplatesAsync(const Model::DescribeHeadTailTemplatesRequest& request, const DescribeHeadTailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHeadTailTemplatesOutcomeCallable DescribeHeadTailTemplatesCallable(const Model::DescribeHeadTailTemplatesRequest& request);

                /**
                 *This API is used to query the list of image processing templates, and the pagination query is supported based on conditions.
                 * @param req DescribeImageProcessingTemplatesRequest
                 * @return DescribeImageProcessingTemplatesOutcome
                 */
                DescribeImageProcessingTemplatesOutcome DescribeImageProcessingTemplates(const Model::DescribeImageProcessingTemplatesRequest &request);
                void DescribeImageProcessingTemplatesAsync(const Model::DescribeImageProcessingTemplatesRequest& request, const DescribeImageProcessingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageProcessingTemplatesOutcomeCallable DescribeImageProcessingTemplatesCallable(const Model::DescribeImageProcessingTemplatesRequest& request);

                /**
                 *This API is used to return the daily image moderation usage information within the specified query time range.
1. Image moderation statistics data from the last 365 days can be queried.
   2. The query time span should not exceed 90 days.
3. If the query time span exceeds 1 day, the data returned is at a daily granularity. Otherwise, the data returned is at a 5-minute granularity.
                 * @param req DescribeImageReviewUsageDataRequest
                 * @return DescribeImageReviewUsageDataOutcome
                 */
                DescribeImageReviewUsageDataOutcome DescribeImageReviewUsageData(const Model::DescribeImageReviewUsageDataRequest &request);
                void DescribeImageReviewUsageDataAsync(const Model::DescribeImageReviewUsageDataRequest& request, const DescribeImageReviewUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageReviewUsageDataOutcomeCallable DescribeImageReviewUsageDataCallable(const Model::DescribeImageReviewUsageDataRequest& request);

                /**
                 *This API is used to query image sprite templates based on conditions with paging.
                 * @param req DescribeImageSpriteTemplatesRequest
                 * @return DescribeImageSpriteTemplatesOutcome
                 */
                DescribeImageSpriteTemplatesOutcome DescribeImageSpriteTemplates(const Model::DescribeImageSpriteTemplatesRequest &request);
                void DescribeImageSpriteTemplatesAsync(const Model::DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSpriteTemplatesOutcomeCallable DescribeImageSpriteTemplatesCallable(const Model::DescribeImageSpriteTemplatesRequest& request);

                /**
                 *This API is used to search the instant transcoding template list.
                 * @param req DescribeJustInTimeTranscodeTemplatesRequest
                 * @return DescribeJustInTimeTranscodeTemplatesOutcome
                 */
                DescribeJustInTimeTranscodeTemplatesOutcome DescribeJustInTimeTranscodeTemplates(const Model::DescribeJustInTimeTranscodeTemplatesRequest &request);
                void DescribeJustInTimeTranscodeTemplatesAsync(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request, const DescribeJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJustInTimeTranscodeTemplatesOutcomeCallable DescribeJustInTimeTranscodeTemplatesCallable(const Model::DescribeJustInTimeTranscodeTemplatesRequest& request);

                /**
                 *Queries the knowledge base list. Returns all knowledge base info under the designated user.
                 * @param req DescribeKnowledgeBasesRequest
                 * @return DescribeKnowledgeBasesOutcome
                 */
                DescribeKnowledgeBasesOutcome DescribeKnowledgeBases(const Model::DescribeKnowledgeBasesRequest &request);
                void DescribeKnowledgeBasesAsync(const Model::DescribeKnowledgeBasesRequest& request, const DescribeKnowledgeBasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKnowledgeBasesOutcomeCallable DescribeKnowledgeBasesCallable(const Model::DescribeKnowledgeBasesRequest& request);

                /**
                 *This API is used to obtain the parsing template detail list of a large model based on the template unique identifier. The returned results include all user-customized large model parsing templates that meet the conditions.
                 * @param req DescribeLLMComprehendTemplatesRequest
                 * @return DescribeLLMComprehendTemplatesOutcome
                 */
                DescribeLLMComprehendTemplatesOutcome DescribeLLMComprehendTemplates(const Model::DescribeLLMComprehendTemplatesRequest &request);
                void DescribeLLMComprehendTemplatesAsync(const Model::DescribeLLMComprehendTemplatesRequest& request, const DescribeLLMComprehendTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLLMComprehendTemplatesOutcomeCallable DescribeLLMComprehendTemplatesCallable(const Model::DescribeLLMComprehendTemplatesRequest& request);

                /**
                 *This API is used to return the daily License request count within the specified query time range.
1. License request count stats from the last 365 days can be queried.
   2. The query time span should not exceed 90 days.
3. If the query time span exceeds 1 day, the data returned is at a daily granularity. Otherwise, the data returned is at a 5-minute granularity.
                 * @param req DescribeLicenseUsageDataRequest
                 * @return DescribeLicenseUsageDataOutcome
                 */
                DescribeLicenseUsageDataOutcome DescribeLicenseUsageData(const Model::DescribeLicenseUsageDataRequest &request);
                void DescribeLicenseUsageDataAsync(const Model::DescribeLicenseUsageDataRequest& request, const DescribeLicenseUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseUsageDataOutcomeCallable DescribeLicenseUsageDataCallable(const Model::DescribeLicenseUsageDataRequest& request);

                /**
                 *Query a user-customized media processing service task template.
To query the template list, fill in the MPS related parameters in MPSDescribeTemplateParams in JSON format. For task parameter configuration, see the MPS task template documentation.
                 * @param req DescribeMPSTemplatesRequest
                 * @return DescribeMPSTemplatesOutcome
                 */
                DescribeMPSTemplatesOutcome DescribeMPSTemplates(const Model::DescribeMPSTemplatesRequest &request);
                void DescribeMPSTemplatesAsync(const Model::DescribeMPSTemplatesRequest& request, const DescribeMPSTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMPSTemplatesOutcomeCallable DescribeMPSTemplatesCallable(const Model::DescribeMPSTemplatesRequest& request);

                /**
                 *1. This API can obtain multiple types of info of multiple media files, including:
1. Basic information (basicInfo): including media name, category, playback address, cover image, etc.
2. Meta information (metaData): including size, duration, video stream information, audio stream information, etc.
3. transcodeInfo: includes media addresses, video stream parameters, and audio stream parameters of various specifications generated for the media.
4. Animated graphics info (animatedGraphicsInfo): the animated graphics info after converting a video to GIF (for example, gif).
5. sampleSnapshotInfo: Screenshot information after sampling screenshots of a video.
6. Sprite image information (imageSpriteInfo): sprite image information after capturing sprite image files from a video.
7. snapshotByTimeOffsetInfo: screenshot information after taking screenshots of a video at specified time points.
8. Video timestamp information (keyFrameDescInfo): Dotting information set for the video.
9. Adaptive Bitrate Streaming information (adaptiveDynamicStreamingInfo): information including specification, encryption type, packaging format, and other related details.
10. Review information (reviewInfo): includes media moderation and media cover review information.
2. You can specify to only return partial info in the response.
                 * @param req DescribeMediaInfosRequest
                 * @return DescribeMediaInfosOutcome
                 */
                DescribeMediaInfosOutcome DescribeMediaInfos(const Model::DescribeMediaInfosRequest &request);
                void DescribeMediaInfosAsync(const Model::DescribeMediaInfosRequest& request, const DescribeMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaInfosOutcomeCallable DescribeMediaInfosCallable(const Model::DescribeMediaInfosRequest& request);

                /**
                 *This API is used to query playback data of media files by specified time granularity.
* Playback statistics from the past one year can be queried.
Time granularity: hr. The max span between the end time and start time is 7 days.
Time granularity is day, and the maximum span between the end time and start time is 90 days.
* Playback statistics only target VOD domains, excluding distribution from EdgeOne domain names.
                 * @param req DescribeMediaPlayStatDetailsRequest
                 * @return DescribeMediaPlayStatDetailsOutcome
                 */
                DescribeMediaPlayStatDetailsOutcome DescribeMediaPlayStatDetails(const Model::DescribeMediaPlayStatDetailsRequest &request);
                void DescribeMediaPlayStatDetailsAsync(const Model::DescribeMediaPlayStatDetailsRequest& request, const DescribeMediaPlayStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaPlayStatDetailsOutcomeCallable DescribeMediaPlayStatDetailsCallable(const Model::DescribeMediaPlayStatDetailsRequest& request);

                /**
                 *This API is used to return the daily video processing usage information within the specified query time range.
1. Video processing usage data is retained on the system side for 13 months. You can only query usage data from the most recent 365 days through the API. If you need to retrieve historical usage data beyond 365 days, contact us.
   2. The query time span should not exceed 90 days.
                 * @param req DescribeMediaProcessUsageDataRequest
                 * @return DescribeMediaProcessUsageDataOutcome
                 */
                DescribeMediaProcessUsageDataOutcome DescribeMediaProcessUsageData(const Model::DescribeMediaProcessUsageDataRequest &request);
                void DescribeMediaProcessUsageDataAsync(const Model::DescribeMediaProcessUsageDataRequest& request, const DescribeMediaProcessUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaProcessUsageDataOutcomeCallable DescribeMediaProcessUsageDataCallable(const Model::DescribeMediaProcessUsageDataRequest& request);

                /**
                 *This API is used to query material sample information by material ID, name, or tag with pagination.
                 * @param req DescribePersonSamplesRequest
                 * @return DescribePersonSamplesOutcome
                 */
                DescribePersonSamplesOutcome DescribePersonSamples(const Model::DescribePersonSamplesRequest &request);
                void DescribePersonSamplesAsync(const Model::DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonSamplesOutcomeCallable DescribePersonSamplesCallable(const Model::DescribePersonSamplesRequest& request);

                /**
                 *This API is used to search the task flow template detail list based on the task flow template name.
                 * @param req DescribeProcedureTemplatesRequest
                 * @return DescribeProcedureTemplatesOutcome
                 */
                DescribeProcedureTemplatesOutcome DescribeProcedureTemplates(const Model::DescribeProcedureTemplatesRequest &request);
                void DescribeProcedureTemplatesAsync(const Model::DescribeProcedureTemplatesRequest& request, const DescribeProcedureTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcedureTemplatesOutcomeCallable DescribeProcedureTemplatesCallable(const Model::DescribeProcedureTemplatesRequest& request);

                /**
                 *This API is used to obtain the template details list based on the Template Unique Identifier. The returned results include all eligible user-customized image asynchronous processing templates.
                 * @param req DescribeProcessImageAsyncTemplatesRequest
                 * @return DescribeProcessImageAsyncTemplatesOutcome
                 */
                DescribeProcessImageAsyncTemplatesOutcome DescribeProcessImageAsyncTemplates(const Model::DescribeProcessImageAsyncTemplatesRequest &request);
                void DescribeProcessImageAsyncTemplatesAsync(const Model::DescribeProcessImageAsyncTemplatesRequest& request, const DescribeProcessImageAsyncTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessImageAsyncTemplatesOutcomeCallable DescribeProcessImageAsyncTemplatesCallable(const Model::DescribeProcessImageAsyncTemplatesRequest& request);

                /**
                 *This API is used to query the audio and video quality detection template list.
                 * @param req DescribeQualityInspectTemplatesRequest
                 * @return DescribeQualityInspectTemplatesOutcome
                 */
                DescribeQualityInspectTemplatesOutcome DescribeQualityInspectTemplates(const Model::DescribeQualityInspectTemplatesRequest &request);
                void DescribeQualityInspectTemplatesAsync(const Model::DescribeQualityInspectTemplatesRequest& request, const DescribeQualityInspectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQualityInspectTemplatesOutcomeCallable DescribeQualityInspectTemplatesCallable(const Model::DescribeQualityInspectTemplatesRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Queries the video rebirth template list.
                 * @param req DescribeRebuildMediaTemplatesRequest
                 * @return DescribeRebuildMediaTemplatesOutcome
                 */
                DescribeRebuildMediaTemplatesOutcome DescribeRebuildMediaTemplates(const Model::DescribeRebuildMediaTemplatesRequest &request);
                void DescribeRebuildMediaTemplatesAsync(const Model::DescribeRebuildMediaTemplatesRequest& request, const DescribeRebuildMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebuildMediaTemplatesOutcomeCallable DescribeRebuildMediaTemplatesCallable(const Model::DescribeRebuildMediaTemplatesRequest& request);

                /**
                 *<b>This API is not recommended. Use [DescribeMediaProcessUsageData](https://www.tencentcloud.com/document/product/266/41464?from_cn_redirect=1) as an alternative.</b>

This API is used to return the daily video content intelligent identification duration data within the specified query time range. Measurement unit: second.

1. Video content intelligent identification duration stats from the last 365 days can be queried.
2. The query time span should not exceed 90 days.
                 * @param req DescribeReviewDetailsRequest
                 * @return DescribeReviewDetailsOutcome
                 */
                DescribeReviewDetailsOutcome DescribeReviewDetails(const Model::DescribeReviewDetailsRequest &request);
                void DescribeReviewDetailsAsync(const Model::DescribeReviewDetailsRequest& request, const DescribeReviewDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewDetailsOutcomeCallable DescribeReviewDetailsCallable(const Model::DescribeReviewDetailsRequest& request);

                /**
                 *Retrieves the moderation template list.
>Template is applicable only to the ReviewAudioVideo (https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) and ReviewImage (https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1) APIs.
                 * @param req DescribeReviewTemplatesRequest
                 * @return DescribeReviewTemplatesOutcome
                 */
                DescribeReviewTemplatesOutcome DescribeReviewTemplates(const Model::DescribeReviewTemplatesRequest &request);
                void DescribeReviewTemplatesAsync(const Model::DescribeReviewTemplatesRequest& request, const DescribeReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReviewTemplatesOutcomeCallable DescribeReviewTemplatesCallable(const Model::DescribeReviewTemplatesRequest& request);

                /**
                 *This API is used to get the carousel playlist list.
                 * @param req DescribeRoundPlaysRequest
                 * @return DescribeRoundPlaysOutcome
                 */
                DescribeRoundPlaysOutcome DescribeRoundPlays(const Model::DescribeRoundPlaysRequest &request);
                void DescribeRoundPlaysAsync(const Model::DescribeRoundPlaysRequest& request, const DescribeRoundPlaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoundPlaysOutcomeCallable DescribeRoundPlaysCallable(const Model::DescribeRoundPlaysRequest& request);

                /**
                 *This API is used to query sampled screenshot templates based on conditions with paging.
                 * @param req DescribeSampleSnapshotTemplatesRequest
                 * @return DescribeSampleSnapshotTemplatesOutcome
                 */
                DescribeSampleSnapshotTemplatesOutcome DescribeSampleSnapshotTemplates(const Model::DescribeSampleSnapshotTemplatesRequest &request);
                void DescribeSampleSnapshotTemplatesAsync(const Model::DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSampleSnapshotTemplatesOutcomeCallable DescribeSampleSnapshotTemplatesCallable(const Model::DescribeSampleSnapshotTemplatesRequest& request);

                /**
                 *This API is used to query specified time point screenshot templates based on conditions with paging.
                 * @param req DescribeSnapshotByTimeOffsetTemplatesRequest
                 * @return DescribeSnapshotByTimeOffsetTemplatesOutcome
                 */
                DescribeSnapshotByTimeOffsetTemplatesOutcome DescribeSnapshotByTimeOffsetTemplates(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest &request);
                void DescribeSnapshotByTimeOffsetTemplatesAsync(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable DescribeSnapshotByTimeOffsetTemplatesCallable(const Model::DescribeSnapshotByTimeOffsetTemplatesRequest& request);

                /**
                 *Queries storage space usage and number of files.
                 * @param req DescribeStorageDataRequest
                 * @return DescribeStorageDataOutcome
                 */
                DescribeStorageDataOutcome DescribeStorageData(const Model::DescribeStorageDataRequest &request);
                void DescribeStorageDataAsync(const Model::DescribeStorageDataRequest& request, const DescribeStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDataOutcomeCallable DescribeStorageDataCallable(const Model::DescribeStorageDataRequest& request);

                /**
                 *This API is used to return the VOD storage space used within a specified time range, in bytes.
1. Storage usage data is reserved on the system side for 13 months. You can only query usage data from the most recent 365 days through the API. If you need to call historical usage data beyond 365 days, contact us;
2. The query time span should not exceed 90 days.
3. The query span at a minute granularity should not exceed 7 days.
                 * @param req DescribeStorageDetailsRequest
                 * @return DescribeStorageDetailsOutcome
                 */
                DescribeStorageDetailsOutcome DescribeStorageDetails(const Model::DescribeStorageDetailsRequest &request);
                void DescribeStorageDetailsAsync(const Model::DescribeStorageDetailsRequest& request, const DescribeStorageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageDetailsOutcomeCallable DescribeStorageDetailsCallable(const Model::DescribeStorageDetailsRequest& request);

                /**
                 *This API is used to:
1. Query the list of all storage campuses available for on-demand activation.
2. Query the opened park list.
3. Query the storage campus used by default.
                 * @param req DescribeStorageRegionsRequest
                 * @return DescribeStorageRegionsOutcome
                 */
                DescribeStorageRegionsOutcome DescribeStorageRegions(const Model::DescribeStorageRegionsRequest &request);
                void DescribeStorageRegionsAsync(const Model::DescribeStorageRegionsRequest& request, const DescribeStorageRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageRegionsOutcomeCallable DescribeStorageRegionsCallable(const Model::DescribeStorageRegionsRequest& request);

                /**
                 *This API is used to get the application list of the current account.
                 * @param req DescribeSubAppIdsRequest
                 * @return DescribeSubAppIdsOutcome
                 */
                DescribeSubAppIdsOutcome DescribeSubAppIds(const Model::DescribeSubAppIdsRequest &request);
                void DescribeSubAppIdsAsync(const Model::DescribeSubAppIdsRequest& request, const DescribeSubAppIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubAppIdsOutcomeCallable DescribeSubAppIdsCallable(const Model::DescribeSubAppIdsRequest& request);

                /**
                 *This API is <font color='red'>no longer maintained</font>. The new version of player signature no longer uses the player configuration template. For details, please see [Player Signature](https://www.tencentcloud.com/document/product/266/45554?from_cn_redirect=1).
Queries player configurations based on conditions with paging.
                 * @param req DescribeSuperPlayerConfigsRequest
                 * @return DescribeSuperPlayerConfigsOutcome
                 */
                DescribeSuperPlayerConfigsOutcome DescribeSuperPlayerConfigs(const Model::DescribeSuperPlayerConfigsRequest &request);
                void DescribeSuperPlayerConfigsAsync(const Model::DescribeSuperPlayerConfigsRequest& request, const DescribeSuperPlayerConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuperPlayerConfigsOutcomeCallable DescribeSuperPlayerConfigsCallable(const Model::DescribeSuperPlayerConfigsRequest& request);

                /**
                 *This API is used to query the details of the task execution status and results by task ID (tasks submitted within the last 3 days can be queried).
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 ** This API is used to query the task list.
* When the list contains a large amount of data, a single API call cannot pull the entire list. You can use the ScrollToken parameter to pull in batches.
* Only query tasks from the last three days (72 hr).
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *This API is used to search the transcoding template detail list by transcoding template unique identifier. The returned results include all eligible custom templates and [system preset transcoding templates](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1#.E9.A2.84.E7.BD.AE.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                 * @param req DescribeTranscodeTemplatesRequest
                 * @return DescribeTranscodeTemplatesOutcome
                 */
                DescribeTranscodeTemplatesOutcome DescribeTranscodeTemplates(const Model::DescribeTranscodeTemplatesRequest &request);
                void DescribeTranscodeTemplatesAsync(const Model::DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTranscodeTemplatesOutcomeCallable DescribeTranscodeTemplatesCallable(const Model::DescribeTranscodeTemplatesRequest& request);

                /**
                 *This API is used to query the information list of on-demand domain names.
                 * @param req DescribeVodDomainsRequest
                 * @return DescribeVodDomainsOutcome
                 */
                DescribeVodDomainsOutcome DescribeVodDomains(const Model::DescribeVodDomainsRequest &request);
                void DescribeVodDomainsAsync(const Model::DescribeVodDomainsRequest& request, const DescribeVodDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVodDomainsOutcomeCallable DescribeVodDomainsCallable(const Model::DescribeVodDomainsRequest& request);

                /**
                 *Queries the list of available timbres under the current account, supporting filtering by optional conditions such as voice ID, type, name, gender, age, language, tag, and scenario.

Note: Newly designed or cloned voice types cannot be queried before activation. They are activated only after the new voice type is used for TTS once.
                 * @param req DescribeVoicesRequest
                 * @return DescribeVoicesOutcome
                 */
                DescribeVoicesOutcome DescribeVoices(const Model::DescribeVoicesRequest &request);
                void DescribeVoicesAsync(const Model::DescribeVoicesRequest& request, const DescribeVoicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoicesOutcomeCallable DescribeVoicesCallable(const Model::DescribeVoicesRequest& request);

                /**
                 *This API is used to query user-defined watermark templates, and the pagination query is supported based on conditions.
                 * @param req DescribeWatermarkTemplatesRequest
                 * @return DescribeWatermarkTemplatesOutcome
                 */
                DescribeWatermarkTemplatesOutcome DescribeWatermarkTemplates(const Model::DescribeWatermarkTemplatesRequest &request);
                void DescribeWatermarkTemplatesAsync(const Model::DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWatermarkTemplatesOutcomeCallable DescribeWatermarkTemplatesCallable(const Model::DescribeWatermarkTemplatesRequest& request);

                /**
                 *This API is used to paginate keyword sample information by scenario, keyword, and tag.
                 * @param req DescribeWordSamplesRequest
                 * @return DescribeWordSamplesOutcome
                 */
                DescribeWordSamplesOutcome DescribeWordSamples(const Model::DescribeWordSamplesRequest &request);
                void DescribeWordSamplesAsync(const Model::DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordSamplesOutcomeCallable DescribeWordSamplesCallable(const Model::DescribeWordSamplesRequest& request);

                /**
                 *This API is used to initiate a voice design task. It generates a custom voice based on a natural language description. You can specify a voice profile at the same time, including name, gender, age, language, tag, and scenario. If trial text is attached during submission, audio audition is generated after task completion. Voice design is an asynchronous task. The voice ID is generated after task completion.
                 * @param req DesignVoiceAsyncRequest
                 * @return DesignVoiceAsyncOutcome
                 */
                DesignVoiceAsyncOutcome DesignVoiceAsync(const Model::DesignVoiceAsyncRequest &request);
                void DesignVoiceAsyncAsync(const Model::DesignVoiceAsyncRequest& request, const DesignVoiceAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DesignVoiceAsyncOutcomeCallable DesignVoiceAsyncCallable(const Model::DesignVoiceAsyncRequest& request);

                /**
                 *This API is used to edit a video, such as clipping and concatenation, to generate a new video on demand. Editing features include:

1) Edit a file in on-demand video to generate a new video.
2) Splice multiple on-demand files to generate a new video.
3) Edit multiple on-demand video files and then splice them to generate a new video;
4. Directly generate a new video for one of the streams in VOD;
5. Edit one of the VOD streams to generate a new video;
6) Splice multiple on-demand streams to generate a new video.
7) Edit multiple streams in VOD and then splice them to generate a new video.

For the generated new video, you can also specify whether to execute task flow for the generated video.

>When editing or splicing a live stream, please ensure the stream ended before you operate. Otherwise, the generated video may be incomplete.

If event notification is used, its type is video editing completed (https://www.tencentcloud.com/document/product/266/33794?from_cn_redirect=1).
                 * @param req EditMediaRequest
                 * @return EditMediaOutcome
                 */
                EditMediaOutcome EditMedia(const Model::EditMediaRequest &request);
                void EditMediaAsync(const Model::EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditMediaOutcomeCallable EditMediaCallable(const Model::EditMediaRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. Please use the new version of APIs for [audio and video quality revival](https://www.tencentcloud.com/document/api/266/102571?from_cn_redirect=1).
Use a template to initiate audio and video quality revival.
                 * @param req EnhanceMediaByTemplateRequest
                 * @return EnhanceMediaByTemplateOutcome
                 */
                EnhanceMediaByTemplateOutcome EnhanceMediaByTemplate(const Model::EnhanceMediaByTemplateRequest &request);
                void EnhanceMediaByTemplateAsync(const Model::EnhanceMediaByTemplateRequest& request, const EnhanceMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaByTemplateOutcomeCallable EnhanceMediaByTemplateCallable(const Model::EnhanceMediaByTemplateRequest& request);

                /**
                 *This API is used to initiate an audio and video quality regeneration task for on-demand audio-video media.
                 * @param req EnhanceMediaQualityRequest
                 * @return EnhanceMediaQualityOutcome
                 */
                EnhanceMediaQualityOutcome EnhanceMediaQuality(const Model::EnhanceMediaQualityRequest &request);
                void EnhanceMediaQualityAsync(const Model::EnhanceMediaQualityRequest& request, const EnhanceMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceMediaQualityOutcomeCallable EnhanceMediaQualityCallable(const Model::EnhanceMediaQualityRequest& request);

                /**
                 *This API is only used for special customized development scenarios. Do not call this API unless VOD customer service proactively informs you to do so.
                 * @param req ExecuteFunctionRequest
                 * @return ExecuteFunctionOutcome
                 */
                ExecuteFunctionOutcome ExecuteFunction(const Model::ExecuteFunctionRequest &request);
                void ExecuteFunctionAsync(const Model::ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteFunctionOutcomeCallable ExecuteFunctionCallable(const Model::ExecuteFunctionRequest& request);

                /**
                 *This API is used to initiate a digital watermark extraction task for a video. The extraction result can be queried through DescribeTaskDetail.
                 * @param req ExtractBlindWatermarkRequest
                 * @return ExtractBlindWatermarkOutcome
                 */
                ExtractBlindWatermarkOutcome ExtractBlindWatermark(const Model::ExtractBlindWatermarkRequest &request);
                void ExtractBlindWatermarkAsync(const Model::ExtractBlindWatermarkRequest& request, const ExtractBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractBlindWatermarkOutcomeCallable ExtractBlindWatermarkCallable(const Model::ExtractBlindWatermarkRequest& request);

                /**
                 *If you need source tracing for piracy, see Ghost Watermark (https://www.tencentcloud.com/document/product/266/94228?from_cn_redirect=1).
                 * @param req ExtractCopyRightWatermarkRequest
                 * @return ExtractCopyRightWatermarkOutcome
                 */
                ExtractCopyRightWatermarkOutcome ExtractCopyRightWatermark(const Model::ExtractCopyRightWatermarkRequest &request);
                void ExtractCopyRightWatermarkAsync(const Model::ExtractCopyRightWatermarkRequest& request, const ExtractCopyRightWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractCopyRightWatermarkOutcomeCallable ExtractCopyRightWatermarkCallable(const Model::ExtractCopyRightWatermarkRequest& request);

                /**
                 *If source tracing for piracy is required, ghost watermark is recommended for use (https://www.tencentcloud.com/document/product/266/94228?from_cn_redirect=1).
                 * @param req ExtractTraceWatermarkRequest
                 * @return ExtractTraceWatermarkOutcome
                 */
                ExtractTraceWatermarkOutcome ExtractTraceWatermark(const Model::ExtractTraceWatermarkRequest &request);
                void ExtractTraceWatermarkAsync(const Model::ExtractTraceWatermarkRequest& request, const ExtractTraceWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractTraceWatermarkOutcomeCallable ExtractTraceWatermarkCallable(const Model::ExtractTraceWatermarkRequest& request);

                /**
                 *Quickly splice and edit HLS videos in VOD to generate new media in HLS format.

Quickly splice or edit the generated video to generate a new FileId and solidify it. After successful solidification, the new video file exists independent of the original input video and is not affected by deletion of the original video.

<font color='red'>Note:</font> Enable reception of editing solidification event notifications through the ModifyEventConfig API. After successful solidification, you will receive a PersistenceComplete event notification. Before receiving this event notification, you should not delete or reduce the storage class of the original input video. Otherwise, playback of the video generated by splicing and clipping may be abnormal.
                 * @param req FastEditMediaRequest
                 * @return FastEditMediaOutcome
                 */
                FastEditMediaOutcome FastEditMedia(const Model::FastEditMediaRequest &request);
                void FastEditMediaAsync(const Model::FastEditMediaRequest& request, const FastEditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FastEditMediaOutcomeCallable FastEditMediaCallable(const Model::FastEditMediaRequest& request);

                /**
                 *After media blocking, except for VOD console preview, accessing video resource URLs (raw files, transcoding output files, screenshots, etc.) for other scenarios will return 403.
It takes about 5 to 10 minutes for the block/unblock operation to take effect across the entire network.
* Note: Blocking media can only operate on media in standard storage and infrequent storage. Media in infrequent storage must be stored for at least 30 days. If deleted early or changed to another storage class, it is still billed for 30 days. If you block media in infrequent storage and its infrequent storage duration is less than 30 days, early deletion billing occurs. At the same time, after blocking, the infrequent storage duration of the media restarts from the current time. If the media is deleted or changed to another storage class before reaching 30 days, early deletion billing also occurs. For example, media 001 has been in infrequent storage for 10 days. If you block 001 at this point, infrequent storage is still billed for 30 days (early deletion billing duration: 30 - 10 = 20 days). After blocking, the infrequent storage duration of 001 restarts. If 001 is deleted on day 5 after blocking, infrequent storage is still billed for 30 days (early deletion billing duration: 30 - 5 = 25 days). The actual infrequent storage duration of 001 is 10 + 5 = 15 days, and the infrequent storage billing duration is 10 + 20 (early deletion billing) + 5 + 25 (early deletion billing) = 60 days.
                 * @param req ForbidMediaDistributionRequest
                 * @return ForbidMediaDistributionOutcome
                 */
                ForbidMediaDistributionOutcome ForbidMediaDistribution(const Model::ForbidMediaDistributionRequest &request);
                void ForbidMediaDistributionAsync(const Model::ForbidMediaDistributionRequest& request, const ForbidMediaDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForbidMediaDistributionOutcomeCallable ForbidMediaDistributionCallable(const Model::ForbidMediaDistributionRequest& request);

                /**
                 *Perform operations on the carousel current playlist. Supported operations: <li> Insert: insert a play program into the current playlist.</li><li> Delete: delete a play program from the playlist.</li>
                 * @param req HandleCurrentPlaylistRequest
                 * @return HandleCurrentPlaylistOutcome
                 */
                HandleCurrentPlaylistOutcome HandleCurrentPlaylist(const Model::HandleCurrentPlaylistRequest &request);
                void HandleCurrentPlaylistAsync(const Model::HandleCurrentPlaylistRequest& request, const HandleCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HandleCurrentPlaylistOutcomeCallable HandleCurrentPlaylistCallable(const Model::HandleCurrentPlaylistRequest& request);

                /**
                 *Used to import AI analysis results into the knowledge base.
                 * @param req ImportMediaKnowledgeRequest
                 * @return ImportMediaKnowledgeOutcome
                 */
                ImportMediaKnowledgeOutcome ImportMediaKnowledge(const Model::ImportMediaKnowledgeRequest &request);
                void ImportMediaKnowledgeAsync(const Model::ImportMediaKnowledgeRequest& request, const ImportMediaKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportMediaKnowledgeOutcomeCallable ImportMediaKnowledgeCallable(const Model::ImportMediaKnowledgeRequest& request);

                /**
                 *This API is used to trigger an audio and video quality inspection task for on-demand audio-video media.
                 * @param req InspectMediaQualityRequest
                 * @return InspectMediaQualityOutcome
                 */
                InspectMediaQualityOutcome InspectMediaQuality(const Model::InspectMediaQualityRequest &request);
                void InspectMediaQualityAsync(const Model::InspectMediaQualityRequest& request, const InspectMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InspectMediaQualityOutcomeCallable InspectMediaQualityCallable(const Model::InspectMediaQualityRequest& request);

                /**
                 *This API is used to list stored file entries under a sub-app.

**This API is only available in FileID+Path mode**
                 * @param req ListFilesRequest
                 * @return ListFilesOutcome
                 */
                ListFilesOutcome ListFiles(const Model::ListFilesRequest &request);
                void ListFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFilesOutcomeCallable ListFilesCallable(const Model::ListFilesRequest& request);

                /**
                 *Live stream clipping refers to the ability for customers to select a segment from past live stream content during live streaming (when the live stream has not yet ended), generate a new video in real time (HLS format), and developers can share it instantly or store it for long-term preservation.

Tencent Cloud VOD supports two real-time clipping modes:
- Clip solidification: Save the edited video as an independent video with its own FileId. This is suitable for long-term preservation of highlights.
- Editing is not solidified: The edited video is attached to the live streaming recording file and has no standalone FileId. This is suitable for scenarios where highlights are shared temporarily.

Note:
- The premise for using the live stream clipping feature is that the target live stream has the time shifting and playback (https://www.tencentcloud.com/document/product/267/32742?from_cn_redirect=1) feature enabled.
-Live streaming Instant Editing is based on the m3u8 file generated by live recording, so its minimum editing precision is one ts slice. Second-level or more precise editing precision cannot be achieved.
-Since stream disconnection may occur during live streaming, the actual video duration generated by editing might differ from the expected duration. For example, if you edit a live stream from 2018-09-20T10:30:00Z to 2018-09-20T10:40:00Z, and a stream disconnection occurred during this time interval, the returned media asset file duration will be less than 10 minutes. In such cases, you can perceive it through the output parameter <a href="#p_segmentset">SegmentSet</a>.

### Edit solidification
Editing solidification means saving the edited video as an independent video (with an independent FileId). Its lifecycle is not subject to any impact from the original live recorded video (even if the original recorded video is deleted, the clipping result will not be affected). It can also be transcoded, published on WeChat, or undergo other secondary processing.

For example, a complete football match may last for more than 2 hours. The customer can store the original video for 2 months for cost savings, but can specify a longer storage period for the highlight reel from live stream clipping. You can also perform additional on-demand operations on the highlight reel, such as transcoding and publishing on WeChat. In this case, you can choose the live stream clipping and persistence solution.

The advantage of solidified editing is that its lifecycle is independent of the original recorded video, allowing for separate management and long-term preservation.

<font color='red'>Note:</font> If solidification is specified when editing, enable reception of editing solidification event notifications through the ModifyEventConfig API. After successful solidification, you will receive a PersistenceComplete event notification. Before receiving this event notification, you should not delete or transition the live video recording to colder storage. Otherwise, playback of the video generated by editing may be abnormal.

### Editing is not solidified
Editing is not solidified, meaning the result of editing (m3u8 file) shares the same TS segments with the live video recording. The newly generated video is not an independent and complete video (no standalone FileId, only a playback URL), and its valid period is consistent with that of the full live recording video. Once the live recording video is deleted, the clip will also become unplayable.

Editing is not solidified. Since the clipping result is not an independent video, it is not included in video management of on-demand media assets. For example, the total number of videos in the console does not count this clip. You also cannot separately transcode, publish on WeChat, or perform any other video processing operation on this clip.

The advantage of editing not being solidified is that the editing operation is relatively "lightweight" and will not generate additional storage overhead. However, its shortcoming is that the lifecycle is identical to the original recorded video, and it is unable to further transcode or perform other video processing.
                 * @param req LiveRealTimeClipRequest
                 * @return LiveRealTimeClipOutcome
                 */
                LiveRealTimeClipOutcome LiveRealTimeClip(const Model::LiveRealTimeClipRequest &request);
                void LiveRealTimeClipAsync(const Model::LiveRealTimeClipRequest& request, const LiveRealTimeClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LiveRealTimeClipOutcomeCallable LiveRealTimeClipCallable(const Model::LiveRealTimeClipRequest& request);

                /**
                 *Manage initiated tasks.
                 * @param req ManageTaskRequest
                 * @return ManageTaskOutcome
                 */
                ManageTaskOutcome ManageTask(const Model::ManageTaskRequest &request);
                void ManageTaskAsync(const Model::ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageTaskOutcomeCallable ManageTaskCallable(const Model::ManageTaskRequest& request);

                /**
                 *Modify a user-defined audio and video content analysis template.

Note: Templates with IDs below 10000 are preset templates and are not allowed to be modified.
                 * @param req ModifyAIAnalysisTemplateRequest
                 * @return ModifyAIAnalysisTemplateOutcome
                 */
                ModifyAIAnalysisTemplateOutcome ModifyAIAnalysisTemplate(const Model::ModifyAIAnalysisTemplateRequest &request);
                void ModifyAIAnalysisTemplateAsync(const Model::ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIAnalysisTemplateOutcomeCallable ModifyAIAnalysisTemplateCallable(const Model::ModifyAIAnalysisTemplateRequest& request);

                /**
                 *This API is used to modify a user-defined audio and video content recognition template.
                 * @param req ModifyAIRecognitionTemplateRequest
                 * @return ModifyAIRecognitionTemplateOutcome
                 */
                ModifyAIRecognitionTemplateOutcome ModifyAIRecognitionTemplate(const Model::ModifyAIRecognitionTemplateRequest &request);
                void ModifyAIRecognitionTemplateAsync(const Model::ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIRecognitionTemplateOutcomeCallable ModifyAIRecognitionTemplateCallable(const Model::ModifyAIRecognitionTemplateRequest& request);

                /**
                 *Modifying an Adaptive Bitrate Streaming Template
                 * @param req ModifyAdaptiveDynamicStreamingTemplateRequest
                 * @return ModifyAdaptiveDynamicStreamingTemplateOutcome
                 */
                ModifyAdaptiveDynamicStreamingTemplateOutcome ModifyAdaptiveDynamicStreamingTemplate(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest &request);
                void ModifyAdaptiveDynamicStreamingTemplateAsync(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable ModifyAdaptiveDynamicStreamingTemplateCallable(const Model::ModifyAdaptiveDynamicStreamingTemplateRequest& request);

                /**
                 *Used to edit AIGC quota configuration. Quota usage is accumulated from the start of the quota feature. Once the quota is reached, the AIGC feature will no longer be usable.

Since AGC content generation is an async task, real-time usage data cannot be obtained. Therefore, quota limits result in some errors, and precise control over the set limit cannot be achieved.
                 * @param req ModifyAigcQuotaRequest
                 * @return ModifyAigcQuotaOutcome
                 */
                ModifyAigcQuotaOutcome ModifyAigcQuota(const Model::ModifyAigcQuotaRequest &request);
                void ModifyAigcQuotaAsync(const Model::ModifyAigcQuotaRequest& request, const ModifyAigcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAigcQuotaOutcomeCallable ModifyAigcQuotaCallable(const Model::ModifyAigcQuotaRequest& request);

                /**
                 *Modify a custom animated image generating template.
                 * @param req ModifyAnimatedGraphicsTemplateRequest
                 * @return ModifyAnimatedGraphicsTemplateOutcome
                 */
                ModifyAnimatedGraphicsTemplateOutcome ModifyAnimatedGraphicsTemplate(const Model::ModifyAnimatedGraphicsTemplateRequest &request);
                void ModifyAnimatedGraphicsTemplateAsync(const Model::ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAnimatedGraphicsTemplateOutcomeCallable ModifyAnimatedGraphicsTemplateCallable(const Model::ModifyAnimatedGraphicsTemplateRequest& request);

                /**
                 *This API is used to modify a user-defined digital watermark template. The digital watermark type cannot be modified.
                 * @param req ModifyBlindWatermarkTemplateRequest
                 * @return ModifyBlindWatermarkTemplateOutcome
                 */
                ModifyBlindWatermarkTemplateOutcome ModifyBlindWatermarkTemplate(const Model::ModifyBlindWatermarkTemplateRequest &request);
                void ModifyBlindWatermarkTemplateAsync(const Model::ModifyBlindWatermarkTemplateRequest& request, const ModifyBlindWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlindWatermarkTemplateOutcomeCallable ModifyBlindWatermarkTemplateCallable(const Model::ModifyBlindWatermarkTemplateRequest& request);

                /**
                 *This API is used to modify a CDN domain name configuration.
                 * @param req ModifyCDNDomainConfigRequest
                 * @return ModifyCDNDomainConfigOutcome
                 */
                ModifyCDNDomainConfigOutcome ModifyCDNDomainConfig(const Model::ModifyCDNDomainConfigRequest &request);
                void ModifyCDNDomainConfigAsync(const Model::ModifyCDNDomainConfigRequest& request, const ModifyCDNDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCDNDomainConfigOutcomeCallable ModifyCDNDomainConfigCallable(const Model::ModifyCDNDomainConfigRequest& request);

                /**
                 *Modify media classification attributes.
                 * @param req ModifyClassRequest
                 * @return ModifyClassOutcome
                 */
                ModifyClassOutcome ModifyClass(const Model::ModifyClassRequest &request);
                void ModifyClassAsync(const Model::ModifyClassRequest& request, const ModifyClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClassOutcomeCallable ModifyClassCallable(const Model::ModifyClassRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the moderation template supports video moderation and image moderation. For details, please see [Modify Moderation Template](https://www.tencentcloud.com/document/api/266/84388?from_cn_redirect=1).
Modify a user-customized audio/video moderation template.
                 * @param req ModifyContentReviewTemplateRequest
                 * @return ModifyContentReviewTemplateOutcome
                 */
                ModifyContentReviewTemplateOutcome ModifyContentReviewTemplate(const Model::ModifyContentReviewTemplateRequest &request);
                void ModifyContentReviewTemplateAsync(const Model::ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContentReviewTemplateOutcomeCallable ModifyContentReviewTemplateCallable(const Model::ModifyContentReviewTemplateRequest& request);

                /**
                 *This API is used to modify the default distribution configuration.
* Distribution domain name and distribution protocol, i.e., the domain name and protocol in the media file distribution URL. Media files are distributed based on the default distribution configuration.
Playback key, used to calculate player signature.
                 * @param req ModifyDefaultDistributionConfigRequest
                 * @return ModifyDefaultDistributionConfigOutcome
                 */
                ModifyDefaultDistributionConfigOutcome ModifyDefaultDistributionConfig(const Model::ModifyDefaultDistributionConfigRequest &request);
                void ModifyDefaultDistributionConfigAsync(const Model::ModifyDefaultDistributionConfigRequest& request, const ModifyDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultDistributionConfigOutcomeCallable ModifyDefaultDistributionConfigCallable(const Model::ModifyDefaultDistributionConfigRequest& request);

                /**
                 *This API is used to set the default storage region. If no region is specified during file upload, files are uploaded to the default region.
                 * @param req ModifyDefaultStorageRegionRequest
                 * @return ModifyDefaultStorageRegionOutcome
                 */
                ModifyDefaultStorageRegionOutcome ModifyDefaultStorageRegion(const Model::ModifyDefaultStorageRegionRequest &request);
                void ModifyDefaultStorageRegionAsync(const Model::ModifyDefaultStorageRegionRequest& request, const ModifyDefaultStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultStorageRegionOutcomeCallable ModifyDefaultStorageRegionCallable(const Model::ModifyDefaultStorageRegionRequest& request);

                /**
                 *This API is no longer maintained. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) interface uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Modifies an Audio and Video Quality Rebirth Template.
                 * @param req ModifyEnhanceMediaTemplateRequest
                 * @return ModifyEnhanceMediaTemplateOutcome
                 */
                ModifyEnhanceMediaTemplateOutcome ModifyEnhanceMediaTemplate(const Model::ModifyEnhanceMediaTemplateRequest &request);
                void ModifyEnhanceMediaTemplateAsync(const Model::ModifyEnhanceMediaTemplateRequest& request, const ModifyEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnhanceMediaTemplateOutcomeCallable ModifyEnhanceMediaTemplateCallable(const Model::ModifyEnhanceMediaTemplateRequest& request);

                /**
                 *Tencent Cloud Video on Demand (VOD) provides customers with media upload, media management, media processing, and other services. During or after these services are executed, VOD also offers various event notifications, helping developers detect service processing status and perform the next business operation.

Developers can call this interface to achieve the following:
- Set the type of callback notification to receive. Currently, there are two types: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1) and [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).
- For [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1), you can set the address for 3.0 format callback. For the description of 3.0 format callback, see [Historical format callback](https://www.tencentcloud.com/document/product/266/33796?from_cn_redirect=1).
-Select to set receipt or ignore for notification events of a specific event service.
                 * @param req ModifyEventConfigRequest
                 * @return ModifyEventConfigOutcome
                 */
                ModifyEventConfigOutcome ModifyEventConfig(const Model::ModifyEventConfigRequest &request);
                void ModifyEventConfigAsync(const Model::ModifyEventConfigRequest& request, const ModifyEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventConfigOutcomeCallable ModifyEventConfigCallable(const Model::ModifyEventConfigRequest& request);

                /**
                 *Modifies a title and trailer template.
                 * @param req ModifyHeadTailTemplateRequest
                 * @return ModifyHeadTailTemplateOutcome
                 */
                ModifyHeadTailTemplateOutcome ModifyHeadTailTemplate(const Model::ModifyHeadTailTemplateRequest &request);
                void ModifyHeadTailTemplateAsync(const Model::ModifyHeadTailTemplateRequest& request, const ModifyHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHeadTailTemplateOutcomeCallable ModifyHeadTailTemplateCallable(const Model::ModifyHeadTailTemplateRequest& request);

                /**
                 *Modify a custom image sprite template.
                 * @param req ModifyImageSpriteTemplateRequest
                 * @return ModifyImageSpriteTemplateOutcome
                 */
                ModifyImageSpriteTemplateOutcome ModifyImageSpriteTemplate(const Model::ModifyImageSpriteTemplateRequest &request);
                void ModifyImageSpriteTemplateAsync(const Model::ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSpriteTemplateOutcomeCallable ModifyImageSpriteTemplateCallable(const Model::ModifyImageSpriteTemplateRequest& request);

                /**
                 *This API is used to modify a just in time transcoding template.
-Note: After a just in time transcoding template is created, modification is not recommended. If parameter modification is needed, add a template.
                 * @param req ModifyJustInTimeTranscodeTemplateRequest
                 * @return ModifyJustInTimeTranscodeTemplateOutcome
                 */
                ModifyJustInTimeTranscodeTemplateOutcome ModifyJustInTimeTranscodeTemplate(const Model::ModifyJustInTimeTranscodeTemplateRequest &request);
                void ModifyJustInTimeTranscodeTemplateAsync(const Model::ModifyJustInTimeTranscodeTemplateRequest& request, const ModifyJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJustInTimeTranscodeTemplateOutcomeCallable ModifyJustInTimeTranscodeTemplateCallable(const Model::ModifyJustInTimeTranscodeTemplateRequest& request);

                /**
                 *This API is used to modify a knowledge base. The name and/or description of the knowledge base can be modified. A minimum of one field, Name or Description, is required.
                 * @param req ModifyKnowledgeBaseRequest
                 * @return ModifyKnowledgeBaseOutcome
                 */
                ModifyKnowledgeBaseOutcome ModifyKnowledgeBase(const Model::ModifyKnowledgeBaseRequest &request);
                void ModifyKnowledgeBaseAsync(const Model::ModifyKnowledgeBaseRequest& request, const ModifyKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKnowledgeBaseOutcomeCallable ModifyKnowledgeBaseCallable(const Model::ModifyKnowledgeBaseRequest& request);

                /**
                 *Modify a large model parsing template
                 * @param req ModifyLLMComprehendTemplateRequest
                 * @return ModifyLLMComprehendTemplateOutcome
                 */
                ModifyLLMComprehendTemplateOutcome ModifyLLMComprehendTemplate(const Model::ModifyLLMComprehendTemplateRequest &request);
                void ModifyLLMComprehendTemplateAsync(const Model::ModifyLLMComprehendTemplateRequest& request, const ModifyLLMComprehendTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLLMComprehendTemplateOutcomeCallable ModifyLLMComprehendTemplateCallable(const Model::ModifyLLMComprehendTemplateRequest& request);

                /**
                 *Modify a user-customized MPS task template.
When modifying a template, fill in MPS related parameters in MPSModifyTemplateParams in JSON format. For task parameter configuration methods, refer to the MPS task template documentation.
                 * @param req ModifyMPSTemplateRequest
                 * @return ModifyMPSTemplateOutcome
                 */
                ModifyMPSTemplateOutcome ModifyMPSTemplate(const Model::ModifyMPSTemplateRequest &request);
                void ModifyMPSTemplateAsync(const Model::ModifyMPSTemplateRequest& request, const ModifyMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMPSTemplateOutcomeCallable ModifyMPSTemplateCallable(const Model::ModifyMPSTemplateRequest& request);

                /**
                 *This API is used to modify media file attributes, including category, name, description, tag, expiration time, dotting information, video cover, and subtitle information.
                 * @param req ModifyMediaInfoRequest
                 * @return ModifyMediaInfoOutcome
                 */
                ModifyMediaInfoOutcome ModifyMediaInfo(const Model::ModifyMediaInfoRequest &request);
                void ModifyMediaInfoAsync(const Model::ModifyMediaInfoRequest& request, const ModifyMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaInfoOutcomeCallable ModifyMediaInfoCallable(const Model::ModifyMediaInfoRequest& request);

                /**
                 *Modify the storage type of media files.
When the storage type of a media file is standard storage, it can be modified to the following types:
<li>Infrequent storage</li>
<li>Archive storage</li>
<li>DEEP_ARCHIVE</li>
When the current storage type of a media file is infrequent storage, it can be modified to the following types:
<li>Standard storage</li>
<li>Archive storage</li>
<li>DEEP_ARCHIVE</li>
When the current storage type of a media file is archive storage, it can be modified to the following types:
<li>Standard storage</li>
When the current storage type of a media file is DEEP_ARCHIVE, it can be modified to the following types:
<li>Standard storage</li>
                 * @param req ModifyMediaStorageClassRequest
                 * @return ModifyMediaStorageClassOutcome
                 */
                ModifyMediaStorageClassOutcome ModifyMediaStorageClass(const Model::ModifyMediaStorageClassRequest &request);
                void ModifyMediaStorageClassAsync(const Model::ModifyMediaStorageClassRequest& request, const ModifyMediaStorageClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaStorageClassOutcomeCallable ModifyMediaStorageClassCallable(const Model::ModifyMediaStorageClassRequest& request);

                /**
                 *This API is used to modify material sample info based on the material ID, including modification of the name and description, as well as addition, deletion, and reset of facial features and tags. Ensure at least 1 image remains after facial feature deletion. Otherwise, use reset.
                 * @param req ModifyPersonSampleRequest
                 * @return ModifyPersonSampleOutcome
                 */
                ModifyPersonSampleOutcome ModifyPersonSample(const Model::ModifyPersonSampleRequest &request);
                void ModifyPersonSampleAsync(const Model::ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonSampleOutcomeCallable ModifyPersonSampleCallable(const Model::ModifyPersonSampleRequest& request);

                /**
                 *This API is used to modify a user-customized asynchronous image processing template.

Note: Templates with IDs below 10000 are preset templates and are not allowed to be modified.
                 * @param req ModifyProcessImageAsyncTemplateRequest
                 * @return ModifyProcessImageAsyncTemplateOutcome
                 */
                ModifyProcessImageAsyncTemplateOutcome ModifyProcessImageAsyncTemplate(const Model::ModifyProcessImageAsyncTemplateRequest &request);
                void ModifyProcessImageAsyncTemplateAsync(const Model::ModifyProcessImageAsyncTemplateRequest& request, const ModifyProcessImageAsyncTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProcessImageAsyncTemplateOutcomeCallable ModifyProcessImageAsyncTemplateCallable(const Model::ModifyProcessImageAsyncTemplateRequest& request);

                /**
                 *This API is used to modify an audio and video quality detection template.
                 * @param req ModifyQualityInspectTemplateRequest
                 * @return ModifyQualityInspectTemplateOutcome
                 */
                ModifyQualityInspectTemplateOutcome ModifyQualityInspectTemplate(const Model::ModifyQualityInspectTemplateRequest &request);
                void ModifyQualityInspectTemplateAsync(const Model::ModifyQualityInspectTemplateRequest& request, const ModifyQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQualityInspectTemplateOutcomeCallable ModifyQualityInspectTemplateCallable(const Model::ModifyQualityInspectTemplateRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. The new version of the [audio and video quality revival](https://www.tencentcloud.com/document/product/266/102571?from_cn_redirect=1) API uses preset templates. For details, see [Audio and Video Quality Rebirth Template](https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
Modify a video rebirth template.
                 * @param req ModifyRebuildMediaTemplateRequest
                 * @return ModifyRebuildMediaTemplateOutcome
                 */
                ModifyRebuildMediaTemplateOutcome ModifyRebuildMediaTemplate(const Model::ModifyRebuildMediaTemplateRequest &request);
                void ModifyRebuildMediaTemplateAsync(const Model::ModifyRebuildMediaTemplateRequest& request, const ModifyRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRebuildMediaTemplateOutcomeCallable ModifyRebuildMediaTemplateCallable(const Model::ModifyRebuildMediaTemplateRequest& request);

                /**
                 *Modify a user-customized moderation template.
>Template is applicable only to the [audio/video moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) and [image moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1) APIs.
                 * @param req ModifyReviewTemplateRequest
                 * @return ModifyReviewTemplateOutcome
                 */
                ModifyReviewTemplateOutcome ModifyReviewTemplate(const Model::ModifyReviewTemplateRequest &request);
                void ModifyReviewTemplateAsync(const Model::ModifyReviewTemplateRequest& request, const ModifyReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReviewTemplateOutcomeCallable ModifyReviewTemplateCallable(const Model::ModifyReviewTemplateRequest& request);

                /**
                 *This API is used to modify a carousel playlist.
After modification, only new playback requests will take effect. Users already playing can still play the playlist before modification within seven days.
                 * @param req ModifyRoundPlayRequest
                 * @return ModifyRoundPlayOutcome
                 */
                ModifyRoundPlayOutcome ModifyRoundPlay(const Model::ModifyRoundPlayRequest &request);
                void ModifyRoundPlayAsync(const Model::ModifyRoundPlayRequest& request, const ModifyRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoundPlayOutcomeCallable ModifyRoundPlayCallable(const Model::ModifyRoundPlayRequest& request);

                /**
                 *Modify a custom sampled screenshot template.
                 * @param req ModifySampleSnapshotTemplateRequest
                 * @return ModifySampleSnapshotTemplateOutcome
                 */
                ModifySampleSnapshotTemplateOutcome ModifySampleSnapshotTemplate(const Model::ModifySampleSnapshotTemplateRequest &request);
                void ModifySampleSnapshotTemplateAsync(const Model::ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySampleSnapshotTemplateOutcomeCallable ModifySampleSnapshotTemplateCallable(const Model::ModifySampleSnapshotTemplateRequest& request);

                /**
                 *Modify a user-customized specified time point screenshot template.
                 * @param req ModifySnapshotByTimeOffsetTemplateRequest
                 * @return ModifySnapshotByTimeOffsetTemplateOutcome
                 */
                ModifySnapshotByTimeOffsetTemplateOutcome ModifySnapshotByTimeOffsetTemplate(const Model::ModifySnapshotByTimeOffsetTemplateRequest &request);
                void ModifySnapshotByTimeOffsetTemplateAsync(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotByTimeOffsetTemplateOutcomeCallable ModifySnapshotByTimeOffsetTemplateCallable(const Model::ModifySnapshotByTimeOffsetTemplateRequest& request);

                /**
                 *This API is used to change application information, but the default application information is not allowed to be modified.
                 * @param req ModifySubAppIdInfoRequest
                 * @return ModifySubAppIdInfoOutcome
                 */
                ModifySubAppIdInfoOutcome ModifySubAppIdInfo(const Model::ModifySubAppIdInfoRequest &request);
                void ModifySubAppIdInfoAsync(const Model::ModifySubAppIdInfoRequest& request, const ModifySubAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdInfoOutcomeCallable ModifySubAppIdInfoCallable(const Model::ModifySubAppIdInfoRequest& request);

                /**
                 *This API is used to enable or deactivate applications. Deactivated applications will have their corresponding domains blocked and console access restricted.
                 * @param req ModifySubAppIdStatusRequest
                 * @return ModifySubAppIdStatusOutcome
                 */
                ModifySubAppIdStatusOutcome ModifySubAppIdStatus(const Model::ModifySubAppIdStatusRequest &request);
                void ModifySubAppIdStatusAsync(const Model::ModifySubAppIdStatusRequest& request, const ModifySubAppIdStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubAppIdStatusOutcomeCallable ModifySubAppIdStatusCallable(const Model::ModifySubAppIdStatusRequest& request);

                /**
                 *This API is <font color='red'>no longer maintained</font>. The new version of player signature no longer uses player configuration templates. For details, please see [Player Signature](https://www.tencentcloud.com/document/product/266/45554?from_cn_redirect=1).
Modifies a player configuration.
                 * @param req ModifySuperPlayerConfigRequest
                 * @return ModifySuperPlayerConfigOutcome
                 */
                ModifySuperPlayerConfigOutcome ModifySuperPlayerConfig(const Model::ModifySuperPlayerConfigRequest &request);
                void ModifySuperPlayerConfigAsync(const Model::ModifySuperPlayerConfigRequest& request, const ModifySuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySuperPlayerConfigOutcomeCallable ModifySuperPlayerConfigCallable(const Model::ModifySuperPlayerConfigRequest& request);

                /**
                 *Modify the information of a custom transcoding template.
                 * @param req ModifyTranscodeTemplateRequest
                 * @return ModifyTranscodeTemplateOutcome
                 */
                ModifyTranscodeTemplateOutcome ModifyTranscodeTemplate(const Model::ModifyTranscodeTemplateRequest &request);
                void ModifyTranscodeTemplateAsync(const Model::ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTranscodeTemplateOutcomeCallable ModifyTranscodeTemplateCallable(const Model::ModifyTranscodeTemplateRequest& request);

                /**
                 *This API is used to modify the acceleration region of a VOD domain.
1. The acceleration region can be modified only when the domain name deployment status is Online.
                 * @param req ModifyVodDomainAccelerateConfigRequest
                 * @return ModifyVodDomainAccelerateConfigOutcome
                 */
                ModifyVodDomainAccelerateConfigOutcome ModifyVodDomainAccelerateConfig(const Model::ModifyVodDomainAccelerateConfigRequest &request);
                void ModifyVodDomainAccelerateConfigAsync(const Model::ModifyVodDomainAccelerateConfigRequest& request, const ModifyVodDomainAccelerateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainAccelerateConfigOutcomeCallable ModifyVodDomainAccelerateConfigCallable(const Model::ModifyVodDomainAccelerateConfigRequest& request);

                /**
                 *This API is used to modify domain name configuration, including hotlink protection configuration.
1. The domain name configuration can be modified only when the deployment state is Online.
                 * @param req ModifyVodDomainConfigRequest
                 * @return ModifyVodDomainConfigOutcome
                 */
                ModifyVodDomainConfigOutcome ModifyVodDomainConfig(const Model::ModifyVodDomainConfigRequest &request);
                void ModifyVodDomainConfigAsync(const Model::ModifyVodDomainConfigRequest& request, const ModifyVodDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVodDomainConfigOutcomeCallable ModifyVodDomainConfigCallable(const Model::ModifyVodDomainConfigRequest& request);

                /**
                 *This API is used to modify a user-defined watermark template. The watermark type cannot be modified.
                 * @param req ModifyWatermarkTemplateRequest
                 * @return ModifyWatermarkTemplateOutcome
                 */
                ModifyWatermarkTemplateOutcome ModifyWatermarkTemplate(const Model::ModifyWatermarkTemplateRequest &request);
                void ModifyWatermarkTemplateAsync(const Model::ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWatermarkTemplateOutcomeCallable ModifyWatermarkTemplateCallable(const Model::ModifyWatermarkTemplateRequest& request);

                /**
                 *This API is used to modify the scenario and tags of a keyword. The keyword itself cannot be modified. If modification is needed, delete and rebuild it.
                 * @param req ModifyWordSampleRequest
                 * @return ModifyWordSampleOutcome
                 */
                ModifyWordSampleOutcome ModifyWordSample(const Model::ModifyWordSampleRequest &request);
                void ModifyWordSampleAsync(const Model::ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWordSampleOutcomeCallable ModifyWordSampleCallable(const Model::ModifyWordSampleRequest& request);

                /**
                 *When uploading HLS videos, this API parses the index file content and returns the list of shard files to be uploaded. The sharded file path must be a relative path in the current directory or subdirectory. It cannot be a URL or an absolute path.
                 * @param req ParseStreamingManifestRequest
                 * @return ParseStreamingManifestOutcome
                 */
                ParseStreamingManifestOutcome ParseStreamingManifest(const Model::ParseStreamingManifestRequest &request);
                void ParseStreamingManifestAsync(const Model::ParseStreamingManifestRequest& request, const ParseStreamingManifestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseStreamingManifestOutcomeCallable ParseStreamingManifestCallable(const Model::ParseStreamingManifestRequest& request);

                /**
                 *This API is used to process image tasks.
                 * @param req ProcessImageAsyncRequest
                 * @return ProcessImageAsyncOutcome
                 */
                ProcessImageAsyncOutcome ProcessImageAsync(const Model::ProcessImageAsyncRequest &request);
                void ProcessImageAsyncAsync(const Model::ProcessImageAsyncRequest& request, const ProcessImageAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessImageAsyncOutcomeCallable ProcessImageAsyncCallable(const Model::ProcessImageAsyncRequest& request);

                /**
                 *This API is used to initiate processing tasks for audio-video media in VOD, with features including:
1. Watermarked video transcoding;
2. Animated image generating;
3. Screenshot taking at specified time points;
4. Sampled screenshot taking;
5. Capture CSS sprites for videos;
6. Capture a frame from a video as the cover.
7. Transcoding to adaptive bitrate streaming with encryption;
8. Content review (offensive content, unsafe information, inappropriate information). It is <font color=red>not recommended</font> to use this API to initiate it. [Audio/Video Moderation (ReviewAudioVideo)](https://www.tencentcloud.com/document/api/266/80283?from_cn_redirect=1) or [Image Moderation (ReviewImage)](https://www.tencentcloud.com/document/api/266/73217?from_cn_redirect=1) is recommended;
9. Content analysis (tag, category, cover, frame tagging) is not supported for HLS format currently.
10. Content recognition (video intro and outro, human face, full text, text keyword, full speech, speech keyword, object).

If event notification is used, its type is task flow status change (https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1).
                 * @param req ProcessMediaRequest
                 * @return ProcessMediaOutcome
                 */
                ProcessMediaOutcome ProcessMedia(const Model::ProcessMediaRequest &request);
                void ProcessMediaAsync(const Model::ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaOutcomeCallable ProcessMediaCallable(const Model::ProcessMediaRequest& request);

                /**
                 *Use the media processing capacity of the media processing service (MPS) to initiate media processing for videos in video-on-demand.
Currently supported MPS features:
1. Smart subtitling: This feature supports processing offline audio files, video files, and live streams. It can extract subtitles in the video source language through ASR speech recognition or OCR text recognition, and implement multilingual translation. View details in the integration guide (https://www.tencentcloud.com/document/product/266/131210?from_cn_redirect=1).
2. Intelligent erasure: It can blur, mosaic, or seamlessly process elements such as logos, subtitles, human faces, and license plates in video footage, making it easy to spread and share content. The new video generated by this task will be assigned a new FileId and stored in a sub-application of the VOD platform. View details in the [Access Guide](https://www.tencentcloud.com/document/product/266/131211?from_cn_redirect=1).
3. AI analysis: This feature supports all-in-one translation (https://www.tencentcloud.com/document/product/266/131212?from_cn_redirect=1), highlights (https://www.tencentcloud.com/document/product/266/131213?from_cn_redirect=1), LLM video summary (https://www.tencentcloud.com/document/product/266/131214?from_cn_redirect=1), LLM audio/video understanding (https://www.tencentcloud.com/document/product/266/131215?from_cn_redirect=1), intelligent splitting (https://www.tencentcloud.com/document/product/266/131216?from_cn_redirect=1), intelligent landscape-to-portrait (https://www.tencentcloud.com/document/product/266/131217?from_cn_redirect=1), video deduplication (https://www.tencentcloud.com/document/product/266/131218?from_cn_redirect=1), and other features.


> Video processing task initiated this method:
> 1. Query of task status and results is still completed in the VOD platform. Use [DescribeTaskDetail](https://www.tencentcloud.com/document/product/266/33431?from_cn_redirect=1) or [DescribeTasks](https://www.tencentcloud.com/document/product/266/33430?from_cn_redirect=1) to query tasks.
> 2. The amount and bills of related features will be provided on the PS platform. Before using this feature, start by enabling Media Processing Service (MPS) in the console. For the activation method, see the preliminary operations in the integration guide.
                 * @param req ProcessMediaByMPSRequest
                 * @return ProcessMediaByMPSOutcome
                 */
                ProcessMediaByMPSOutcome ProcessMediaByMPS(const Model::ProcessMediaByMPSRequest &request);
                void ProcessMediaByMPSAsync(const Model::ProcessMediaByMPSRequest& request, const ProcessMediaByMPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByMPSOutcomeCallable ProcessMediaByMPSCallable(const Model::ProcessMediaByMPSRequest& request);

                /**
                 *Use a task flow template to initiate processing tasks for videos in VOD.
There are two ways to create a task flow template:
1. Create and modify a task flow template in the console;
2. Create a task flow template through the task flow template API.

For event notification, the type of event notifications other than audio/video moderation tasks is [task flow status change](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1); the type of audio/video moderation task event notification is [audio/video moderation completed](https://www.tencentcloud.com/document/product/266/81258?from_cn_redirect=1).
                 * @param req ProcessMediaByProcedureRequest
                 * @return ProcessMediaByProcedureOutcome
                 */
                ProcessMediaByProcedureOutcome ProcessMediaByProcedure(const Model::ProcessMediaByProcedureRequest &request);
                void ProcessMediaByProcedureAsync(const Model::ProcessMediaByProcedureRequest& request, const ProcessMediaByProcedureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByProcedureOutcomeCallable ProcessMediaByProcedureCallable(const Model::ProcessMediaByProcedureRequest& request);

                /**
                 *This API is <font color='red'>no longer maintained</font>. Please use the [ProcessMedia](https://www.tencentcloud.com/document/product/862/37578?from_cn_redirect=1) API of MPS and specify the video URL in the input parameter InputInfo.UrlInputInfo.Url.
                 * @param req ProcessMediaByUrlRequest
                 * @return ProcessMediaByUrlOutcome
                 */
                ProcessMediaByUrlOutcome ProcessMediaByUrl(const Model::ProcessMediaByUrlRequest &request);
                void ProcessMediaByUrlAsync(const Model::ProcessMediaByUrlRequest& request, const ProcessMediaByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMediaByUrlOutcomeCallable ProcessMediaByUrlCallable(const Model::ProcessMediaByUrlRequest& request);

                /**
                 ** This API is used for business servers to get event notifications via reliable callback (https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83).
* The API uses long polling mode. If there are unconsumed events on the server, they will be returned to the requester immediately. If there are no unconsumed events, the request will be suspended in the backend until a new event occurs.
* The request can be suspended for up to 5 seconds. It is advisable to set the timeout to 10 seconds for the requester.
* Event notifications that are not pulled are retained for up to 4 days. Notifications exceeding this time limit may be purged.
* If this API returns an event, the caller must call the [Confirm Event Notification](https://www.tencentcloud.com/document/product/266/33434?from_cn_redirect=1) API within <font color="red">30 seconds</font> to confirm that the event notification has been processed. Otherwise, the event notification will be pulled again after <font color="red">30 seconds</font>.
* Currently, a maximum of 16 event notifications can be obtained per API call.
                 * @param req PullEventsRequest
                 * @return PullEventsOutcome
                 */
                PullEventsOutcome PullEvents(const Model::PullEventsRequest &request);
                void PullEventsAsync(const Model::PullEventsRequest& request, const PullEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullEventsOutcomeCallable PullEventsCallable(const Model::PullEventsRequest& request);

                /**
                 *This API is used to pull a video from the network to the VOD platform.
                 * @param req PullUploadRequest
                 * @return PullUploadOutcome
                 */
                PullUploadOutcome PullUpload(const Model::PullUploadRequest &request);
                void PullUploadAsync(const Model::PullUploadRequest& request, const PullUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullUploadOutcomeCallable PullUploadCallable(const Model::PullUploadRequest& request);

                /**
                 *1. Preheats a specified URL list.
2. The domain name of the URL must be registered in VOD.
3. You can specify up to 20 URLs per request.
4. The default prefetch quota is 10,000 URLs per day.
                 * @param req PushUrlCacheRequest
                 * @return PushUrlCacheOutcome
                 */
                PushUrlCacheOutcome PushUrlCache(const Model::PushUrlCacheRequest &request);
                void PushUrlCacheAsync(const Model::PushUrlCacheRequest& request, const PushUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlCacheOutcomeCallable PushUrlCacheCallable(const Model::PushUrlCacheRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. Please use the new version of APIs [audio and video quality revival](https://www.tencentcloud.com/document/api/266/102571?from_cn_redirect=1).
This API is used to initiate audio and video quality revival.
                 * @param req RebuildMediaRequest
                 * @return RebuildMediaOutcome
                 */
                RebuildMediaOutcome RebuildMedia(const Model::RebuildMediaRequest &request);
                void RebuildMediaAsync(const Model::RebuildMediaRequest& request, const RebuildMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaOutcomeCallable RebuildMediaCallable(const Model::RebuildMediaRequest& request);

                /**
                 *This API is <font color=red>no longer maintained</font>. Please use the new version of APIs for [audio and video quality revival](https://www.tencentcloud.com/document/api/266/102571?from_cn_redirect=1).
Use a template to initiate video rebirth.
                 * @param req RebuildMediaByTemplateRequest
                 * @return RebuildMediaByTemplateOutcome
                 */
                RebuildMediaByTemplateOutcome RebuildMediaByTemplate(const Model::RebuildMediaByTemplateRequest &request);
                void RebuildMediaByTemplateAsync(const Model::RebuildMediaByTemplateRequest& request, const RebuildMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebuildMediaByTemplateOutcomeCallable RebuildMediaByTemplateCallable(const Model::RebuildMediaByTemplateRequest& request);

                /**
                 *1. Refresh a specified URL list.
2. The domain name of the URL must be registered in VOD.
3. You can specify up to 20 URLs per request.
4. The default refresh quota is 100,000 URLs per day.
                 * @param req RefreshUrlCacheRequest
                 * @return RefreshUrlCacheOutcome
                 */
                RefreshUrlCacheOutcome RefreshUrlCache(const Model::RefreshUrlCacheRequest &request);
                void RefreshUrlCacheAsync(const Model::RefreshUrlCacheRequest& request, const RefreshUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshUrlCacheOutcomeCallable RefreshUrlCacheCallable(const Model::RefreshUrlCacheRequest& request);

                /**
                 *Watermark removal
                 * @param req RemoveWatermarkRequest
                 * @return RemoveWatermarkOutcome
                 */
                RemoveWatermarkOutcome RemoveWatermark(const Model::RemoveWatermarkRequest &request);
                void RemoveWatermarkAsync(const Model::RemoveWatermarkRequest& request, const RemoveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWatermarkOutcomeCallable RemoveWatermarkCallable(const Model::RemoveWatermarkRequest& request);

                /**
                 *Reset the content of the user-defined task flow template.
                 * @param req ResetProcedureTemplateRequest
                 * @return ResetProcedureTemplateOutcome
                 */
                ResetProcedureTemplateOutcome ResetProcedureTemplate(const Model::ResetProcedureTemplateRequest &request);
                void ResetProcedureTemplateAsync(const Model::ResetProcedureTemplateRequest& request, const ResetProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetProcedureTemplateOutcomeCallable ResetProcedureTemplateCallable(const Model::ResetProcedureTemplateRequest& request);

                /**
                 *When the storage type of a media file is archive storage or deep archive storage, it is unreachable. If you need access, call this API to unfreeze it. The unfrozen media file is temporarily accessible and becomes unreachable after the validity period expires.
                 * @param req RestoreMediaRequest
                 * @return RestoreMediaOutcome
                 */
                RestoreMediaOutcome RestoreMedia(const Model::RestoreMediaRequest &request);
                void RestoreMediaAsync(const Model::RestoreMediaRequest& request, const RestoreMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreMediaOutcomeCallable RestoreMediaCallable(const Model::RestoreMediaRequest& request);

                /**
                 *This API is used to initiate moderation tasks for on-demand audio-video media, intelligently detecting violative content in video footage, text in visuals, text in speech, and sound.

If event notification is used, its type is audio/video moderation completed (https://www.tencentcloud.com/document/product/266/81258?from_cn_redirect=1).
                 * @param req ReviewAudioVideoRequest
                 * @return ReviewAudioVideoOutcome
                 */
                ReviewAudioVideoOutcome ReviewAudioVideo(const Model::ReviewAudioVideoRequest &request);
                void ReviewAudioVideoAsync(const Model::ReviewAudioVideoRequest& request, const ReviewAudioVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewAudioVideoOutcomeCallable ReviewAudioVideoCallable(const Model::ReviewAudioVideoRequest& request);

                /**
                 *This API is used to initiate review tasks for image files in on-demand video, including offensive, unsafe, and inappropriate content.

><<li>Supported image file size: file < 5M;</li>
><<li>Supported image file resolution: recommended resolution above 256x256, otherwise review effectiveness may be affected;</li>
><<li>Supported image file formats: PNG, JPG, JPEG, BMP, GIF, WEBP.</li>
                 * @param req ReviewImageRequest
                 * @return ReviewImageOutcome
                 */
                ReviewImageOutcome ReviewImage(const Model::ReviewImageRequest &request);
                void ReviewImageAsync(const Model::ReviewImageRequest& request, const ReviewImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviewImageOutcomeCallable ReviewImageCallable(const Model::ReviewImageRequest& request);

                /**
                 *This API is used to search media information with conditional filtering, sort and filter returned results, and other features. This includes:
-Specify the file ID collection FileIds to return media matching any ID in the collection.
-Perform fuzzy search by multiple media file names (Names) or descriptions (Descriptions).
-Search by multiple filename prefixes NamePrefixes.
-Specify the category collection ClassIds (see input parameters), and media that meet any category in the collection will be returned. For example, media categories include movie, TV series, and variety show. The movie category has subcategories such as historical film, action film, and romance film. If ClassIds specifies movie and TV series, all subcategories under movie and TV series will be returned. If ClassIds specifies historical film and action film, only media under these two subcategories will be returned.
- Specify tag collection Tags (see input parameter) to return media that match any tag in the collection. For example, if media tags include ACG, palace intrigue, and parody remix, and Tags specifies ACG and parody remix, then media matching any one of these two tags will be retrieved.
-Specify the file type set Categories (see input parameters), and return media that meet any type in the collection. For example, file types include Video, Audio, and Image. If Categories specifies Video and Audio, media that meet these types will be retrieved.
-Specify the source collection SourceTypes (see input parameters) to return media that meets any source in the collection. For example, media sources include Record (live recording), Upload, and so on. If SourceTypes specifies Record and Upload, media that meets these sources will be retrieved.
-Specify the file packaging format set MediaTypes (see input parameters) to return media that meets any packaging format in the collection. For example, packaging formats include MP4, AVI, MP3, and so on. If MediaTypes specifies MP4 and MP3, media that complies with these packaging formats will be retrieved.
-Specify the file status collection Status (see input parameters), and return media that meets any status in the collection. For example, file statuses include Normal, SystemForbidden (Platform Ban), and Forbidden (proactive ban). If Status specifies Normal and Forbidden, media that meets these statuses will be retrieved.
-Specify the file review result set ReviewResults (see input parameters) to return media that meets any status in the collection. For example, file review results include pass and block. If ReviewResults specifies both pass and block, media that meets these review results will be retrieved.
-Filter media for live streaming recording by specifying the collection of live streaming codes StreamIds (see input parameters).
-Filter media by the creation time range of the specified media.
-Specify a TRTC application ID collection to filter media.
-Specify a TRTC room ID collection to filter media.

-The above parameters can be combined in any way for search. For example, filter media with a creation time between 2018-12-01 12:00:00 and 2018-12-08 12:00:00, categorized as movie or TV series, and tagged with palace intrigue and suspense. Note that for any parameter that supports array input, the search logic between its elements is OR. The logical relationship between all parameters is AND.

- Allow controlling the type of media information returned through Filters (return all information by default). Options include:
1. basicInfo: including media name, category, playback address, cover image, and more.
2. Meta information (metaData): including size, duration, video stream information, and audio stream information.
3. transcodeInfo: includes media addresses, video stream parameters, audio stream parameters, and more for various specifications generated by transcoding this media.
4. Animated graphics info (animatedGraphicsInfo): the animated graphics info after converting a video to gif (for example, gif).
5. sampleSnapshotInfo: screenshot information after sampling screenshot taking from a video.
6. Sprite image information (imageSpriteInfo): sprite image information of the captured sprite image file from the video.
7. snapshotByTimeOffsetInfo: screenshot information after taking screenshots at specified time points.
8. Video timestamp information (keyFrameDescInfo): dotting information set for the video.
9. Adaptive Bitstreaming information (adaptiveDynamicStreamingInfo): includes specification, encryption type, packaging format and other related information.

-Allow sorting results by creation time and return in pages. Use Offset and Limit (see input parameters) to control pagination.

<div id="maxResultsDesc">API return result count limit:</div>

-<b><a href="#p_offset">Offset</a> and <a href="#p_limit">Limit</a> impact the number of results per pagination query. Special attention: when both values are omitted, this interface returns up to 10 query results only.</b>
-<b>Supports up to 5000 search results. Excess results are no longer queryable. If the search result volume is too large, use more granular criteria to reduce the results.</b>

<br>Not recommended conditional filtering:
-(Not recommended: use Names, NamePrefixes, or Descriptions instead) Specify a single Text to do fuzzy search on media file Names or Descriptions.
-(Not recommended: use SourceTypes instead) Specify a single media file source SourceType for search.
-(Not recommended: use StreamIds instead) Specify a single push stream live code StreamId to search.
-(Not recommended: use CreateTime instead) Specify a single start creation time StartTime to search.
-(Not recommended: use CreateTime instead) Specify a single end time EndTime for search.
                 * @param req SearchMediaRequest
                 * @return SearchMediaOutcome
                 */
                SearchMediaOutcome SearchMedia(const Model::SearchMediaRequest &request);
                void SearchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaOutcomeCallable SearchMediaCallable(const Model::SearchMediaRequest& request);

                /**
                 *Use natural language to conduct semantic search on media.
                 * @param req SearchMediaBySemanticsRequest
                 * @return SearchMediaBySemanticsOutcome
                 */
                SearchMediaBySemanticsOutcome SearchMediaBySemantics(const Model::SearchMediaBySemanticsRequest &request);
                void SearchMediaBySemanticsAsync(const Model::SearchMediaBySemanticsRequest& request, const SearchMediaBySemanticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchMediaBySemanticsOutcomeCallable SearchMediaBySemanticsCallable(const Model::SearchMediaBySemanticsRequest& request);

                /**
                 *Set a delivery destination for CLS for the vod domain.
                 * @param req SetCLSPushTargetRequest
                 * @return SetCLSPushTargetOutcome
                 */
                SetCLSPushTargetOutcome SetCLSPushTarget(const Model::SetCLSPushTargetRequest &request);
                void SetCLSPushTargetAsync(const Model::SetCLSPushTargetRequest& request, const SetCLSPushTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCLSPushTargetOutcomeCallable SetCLSPushTargetCallable(const Model::SetCLSPushTargetRequest& request);

                /**
                 *Sets DRM key provider information.
                 * @param req SetDrmKeyProviderInfoRequest
                 * @return SetDrmKeyProviderInfoOutcome
                 */
                SetDrmKeyProviderInfoOutcome SetDrmKeyProviderInfo(const Model::SetDrmKeyProviderInfoRequest &request);
                void SetDrmKeyProviderInfoAsync(const Model::SetDrmKeyProviderInfoRequest& request, const SetDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDrmKeyProviderInfoOutcomeCallable SetDrmKeyProviderInfoCallable(const Model::SetDrmKeyProviderInfoRequest& request);

                /**
                 *Set the HTTPS certificate for the vod domain.
                 * @param req SetVodDomainCertificateRequest
                 * @return SetVodDomainCertificateOutcome
                 */
                SetVodDomainCertificateOutcome SetVodDomainCertificate(const Model::SetVodDomainCertificateRequest &request);
                void SetVodDomainCertificateAsync(const Model::SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVodDomainCertificateOutcomeCallable SetVodDomainCertificateCallable(const Model::SetVodDomainCertificateRequest& request);

                /**
                 *Crop an HLS video by time period to generate a new HLS video in real time. Developers can share it immediately or save it for long-term preservation.

Tencent Cloud VOD supports two editing modes:
-Clip and save: Save the edited video as an independent video with a separate FileId. This is suitable for long-term preservation of highlights.
-Editing is not solidified: The edited video is attached to the input file with no standalone FileId, suitable for temporary sharing of highlight clips.

This API is used to crop an m3u8 file based on input. The minimum editing precision is one ts slice, so second-level or more precise editing precision cannot be achieved.

### Edit solidification
Editing and solidification refers to saving an edited video as an independent video with an independent FileId. Its lifecycle is not subject to any impact from the original input video. Even if the original input video is deleted, the clipping result is not affected. You can also transcode it or publish it on WeChat.

For example, a complete football match raw video may last for over 2 hours. For cost savings, a customer can store this video for 2 months, but can specify longer storage for the edited "highlights" video. You can also separately transcode, publish on WeChat, and perform other additional on-demand operations on the "highlights" video. In this case, you can choose the edit and solidify solution.

The advantage of solidified edits is that their lifecycle is independent of the original input video, allowing separate management and long-term preservation.

<font color='red'>Note:</font> If solidification is specified when editing, enable reception of editing solidification event notifications through the ModifyEventConfig API. After successful solidification, you will receive a PersistenceComplete event notification. Before receiving this event notification, you should not delete or reduce the storage class of the original input video. Otherwise, playback of the generated video may be abnormal.

### Editing is not solidified
Editing is not solidified, meaning the result of editing (m3u8 file) shares the same TS segments with the original input video. The generated video is not an independent and complete video (no standalone FileId, only a playback URL), and its valid period is consistent with that of the original input full video. Once the original input video is deleted, the clip will also become unplayable.

Editing is not solidified. Since the clipping result is not an independent video, it is not included in video management of on-demand media assets. For example, the total number of videos in the console does not include this video clip. You cannot separately perform any video processing operation on this clip, such as transcoding or publishing on WeChat.

The advantage of non-solidified editing is that the editing operation is relatively "lightweight" and will not generate additional storage overhead. However, its shortcoming is that the lifecycle is the same as the original recorded video, and it is unable to further transcode or perform other video processing.
                 * @param req SimpleHlsClipRequest
                 * @return SimpleHlsClipOutcome
                 */
                SimpleHlsClipOutcome SimpleHlsClip(const Model::SimpleHlsClipRequest &request);
                void SimpleHlsClipAsync(const Model::SimpleHlsClipRequest& request, const SimpleHlsClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimpleHlsClipOutcomeCallable SimpleHlsClipCallable(const Model::SimpleHlsClipRequest& request);

                /**
                 *This API is used to split an on-demand video into multiple new on-demand videos.
                 * @param req SplitMediaRequest
                 * @return SplitMediaOutcome
                 */
                SplitMediaOutcome SplitMedia(const Model::SplitMediaRequest &request);
                void SplitMediaAsync(const Model::SplitMediaRequest& request, const SplitMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SplitMediaOutcomeCallable SplitMediaCallable(const Model::SplitMediaRequest& request);

                /**
                 *This API is used to enable or disable a CDN acceleration domain name.
                 * @param req StartCDNDomainRequest
                 * @return StartCDNDomainOutcome
                 */
                StartCDNDomainOutcome StartCDNDomain(const Model::StartCDNDomainRequest &request);
                void StartCDNDomainAsync(const Model::StartCDNDomainRequest& request, const StartCDNDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCDNDomainOutcomeCallable StartCDNDomainCallable(const Model::StartCDNDomainRequest& request);

                /**
                 *Initiate a speech synthesis task to convert text to speech for long text scenarios (up to 200,000 characters). It supports specifying voice tone, speaking rate, volume, pitch, sampling rate, output format, and other synthesis parameters. Speech synthesis is an asynchronous task, and audio results are generated upon completion.
                 * @param req TextToSpeechAsyncRequest
                 * @return TextToSpeechAsyncOutcome
                 */
                TextToSpeechAsyncOutcome TextToSpeechAsync(const Model::TextToSpeechAsyncRequest &request);
                void TextToSpeechAsyncAsync(const Model::TextToSpeechAsyncRequest& request, const TextToSpeechAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToSpeechAsyncOutcomeCallable TextToSpeechAsyncCallable(const Model::TextToSpeechAsyncRequest& request);

                /**
                 *This API is used to initiate a text to speech task.
                 * @param req TextToSpeechSyncRequest
                 * @return TextToSpeechSyncOutcome
                 */
                TextToSpeechSyncOutcome TextToSpeechSync(const Model::TextToSpeechSyncRequest &request);
                void TextToSpeechSyncAsync(const Model::TextToSpeechSyncRequest& request, const TextToSpeechSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToSpeechSyncOutcomeCallable TextToSpeechSyncCallable(const Model::TextToSpeechSyncRequest& request);

                /**
                 *This API is used to create a Token for AIGC API calls. Data sync may delay once created. It can be queried or deleted after about 30 seconds.
                 * @param req UpdateAigcApiTokenRequest
                 * @return UpdateAigcApiTokenOutcome
                 */
                UpdateAigcApiTokenOutcome UpdateAigcApiToken(const Model::UpdateAigcApiTokenRequest &request);
                void UpdateAigcApiTokenAsync(const Model::UpdateAigcApiTokenRequest& request, const UpdateAigcApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAigcApiTokenOutcomeCallable UpdateAigcApiTokenCallable(const Model::UpdateAigcApiTokenRequest& request);

                /**
                 *This API is used to update the profile information of a voice type by voice ID, including name, description, gender, age, language, tag, and scenario. It returns the complete voice type information after the update. Only voice types for this account can be updated. System preset voice types do not support update.

Note: Newly designed or cloned voice types cannot be updated before activation. They are activated only after the new voice type is used for TTS once.
                 * @param req UpdateVoiceRequest
                 * @return UpdateVoiceOutcome
                 */
                UpdateVoiceOutcome UpdateVoice(const Model::UpdateVoiceRequest &request);
                void UpdateVoiceAsync(const Model::UpdateVoiceRequest& request, const UpdateVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateVoiceOutcomeCallable UpdateVoiceCallable(const Model::UpdateVoiceRequest& request);

                /**
                 *This API is used to verify domain name resolution values.
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
