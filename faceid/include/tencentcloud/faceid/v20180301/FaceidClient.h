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

#ifndef TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
#define TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/faceid/v20180301/model/ApplyLivenessTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplyLivenessTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlResponse.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/CompareFaceLivenessRequest.h>
#include <tencentcloud/faceid/v20180301/model/CompareFaceLivenessResponse.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlRequest.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultIntlRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultIntlResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenIntlRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenIntlResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetLivenessResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetLivenessResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/VideoLivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/VideoLivenessCompareResponse.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            class FaceidClient : public AbstractClient
            {
            public:
                FaceidClient(const Credential &credential, const std::string &region);
                FaceidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyLivenessTokenResponse> ApplyLivenessTokenOutcome;
                typedef std::future<ApplyLivenessTokenOutcome> ApplyLivenessTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplyLivenessTokenRequest&, ApplyLivenessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyLivenessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySdkVerificationTokenResponse> ApplySdkVerificationTokenOutcome;
                typedef std::future<ApplySdkVerificationTokenOutcome> ApplySdkVerificationTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplySdkVerificationTokenRequest&, ApplySdkVerificationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySdkVerificationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyWebVerificationBizTokenIntlResponse> ApplyWebVerificationBizTokenIntlOutcome;
                typedef std::future<ApplyWebVerificationBizTokenIntlOutcome> ApplyWebVerificationBizTokenIntlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplyWebVerificationBizTokenIntlRequest&, ApplyWebVerificationBizTokenIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyWebVerificationBizTokenIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyWebVerificationTokenResponse> ApplyWebVerificationTokenOutcome;
                typedef std::future<ApplyWebVerificationTokenOutcome> ApplyWebVerificationTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplyWebVerificationTokenRequest&, ApplyWebVerificationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyWebVerificationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CompareFaceLivenessResponse> CompareFaceLivenessOutcome;
                typedef std::future<CompareFaceLivenessOutcome> CompareFaceLivenessOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CompareFaceLivenessRequest&, CompareFaceLivenessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceLivenessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUploadUrlResponse> CreateUploadUrlOutcome;
                typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CreateUploadUrlRequest&, CreateUploadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectReflectLivenessAndCompareResponse> DetectReflectLivenessAndCompareOutcome;
                typedef std::future<DetectReflectLivenessAndCompareOutcome> DetectReflectLivenessAndCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectReflectLivenessAndCompareRequest&, DetectReflectLivenessAndCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectReflectLivenessAndCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateReflectSequenceResponse> GenerateReflectSequenceOutcome;
                typedef std::future<GenerateReflectSequenceOutcome> GenerateReflectSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GenerateReflectSequenceRequest&, GenerateReflectSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateReflectSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFaceIdResultIntlResponse> GetFaceIdResultIntlOutcome;
                typedef std::future<GetFaceIdResultIntlOutcome> GetFaceIdResultIntlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdResultIntlRequest&, GetFaceIdResultIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdResultIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFaceIdTokenIntlResponse> GetFaceIdTokenIntlOutcome;
                typedef std::future<GetFaceIdTokenIntlOutcome> GetFaceIdTokenIntlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdTokenIntlRequest&, GetFaceIdTokenIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdTokenIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLivenessResultResponse> GetLivenessResultOutcome;
                typedef std::future<GetLivenessResultOutcome> GetLivenessResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetLivenessResultRequest&, GetLivenessResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLivenessResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSdkVerificationResultResponse> GetSdkVerificationResultOutcome;
                typedef std::future<GetSdkVerificationResultOutcome> GetSdkVerificationResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetSdkVerificationResultRequest&, GetSdkVerificationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSdkVerificationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWebVerificationResultResponse> GetWebVerificationResultOutcome;
                typedef std::future<GetWebVerificationResultOutcome> GetWebVerificationResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetWebVerificationResultRequest&, GetWebVerificationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWebVerificationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWebVerificationResultIntlResponse> GetWebVerificationResultIntlOutcome;
                typedef std::future<GetWebVerificationResultIntlOutcome> GetWebVerificationResultIntlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetWebVerificationResultIntlRequest&, GetWebVerificationResultIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWebVerificationResultIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::VideoLivenessCompareResponse> VideoLivenessCompareOutcome;
                typedef std::future<VideoLivenessCompareOutcome> VideoLivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::VideoLivenessCompareRequest&, VideoLivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VideoLivenessCompareAsyncHandler;



                /**
                 *This API is used to apply for a token before calling the liveness detection service each time. This token is required for initiating the verification process and getting the result after the verification is completed.
                 * @param req ApplyLivenessTokenRequest
                 * @return ApplyLivenessTokenOutcome
                 */
                ApplyLivenessTokenOutcome ApplyLivenessToken(const Model::ApplyLivenessTokenRequest &request);
                void ApplyLivenessTokenAsync(const Model::ApplyLivenessTokenRequest& request, const ApplyLivenessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyLivenessTokenOutcomeCallable ApplyLivenessTokenCallable(const Model::ApplyLivenessTokenRequest& request);

                /**
                 *This API is used to apply for a token before calling the Identity Verification SDK service each time. This token is required for initiating the verification process and getting the result after the verification is completed.
                 * @param req ApplySdkVerificationTokenRequest
                 * @return ApplySdkVerificationTokenOutcome
                 */
                ApplySdkVerificationTokenOutcome ApplySdkVerificationToken(const Model::ApplySdkVerificationTokenRequest &request);
                void ApplySdkVerificationTokenAsync(const Model::ApplySdkVerificationTokenRequest& request, const ApplySdkVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySdkVerificationTokenOutcomeCallable ApplySdkVerificationTokenCallable(const Model::ApplySdkVerificationTokenRequest& request);

                /**
                 *This API is used to apply for a BizToken before calling the web-based verification service each time. This token is required for initiating a verification process and getting the result after the verification is completed.
                 * @param req ApplyWebVerificationBizTokenIntlRequest
                 * @return ApplyWebVerificationBizTokenIntlOutcome
                 */
                ApplyWebVerificationBizTokenIntlOutcome ApplyWebVerificationBizTokenIntl(const Model::ApplyWebVerificationBizTokenIntlRequest &request);
                void ApplyWebVerificationBizTokenIntlAsync(const Model::ApplyWebVerificationBizTokenIntlRequest& request, const ApplyWebVerificationBizTokenIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWebVerificationBizTokenIntlOutcomeCallable ApplyWebVerificationBizTokenIntlCallable(const Model::ApplyWebVerificationBizTokenIntlRequest& request);

                /**
                 *This API is used to apply for a token before calling the web-based verification service each time. This token is required for initiating the verification process and getting the result after the verification is completed.
                 * @param req ApplyWebVerificationTokenRequest
                 * @return ApplyWebVerificationTokenOutcome
                 */
                ApplyWebVerificationTokenOutcome ApplyWebVerificationToken(const Model::ApplyWebVerificationTokenRequest &request);
                void ApplyWebVerificationTokenAsync(const Model::ApplyWebVerificationTokenRequest& request, const ApplyWebVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWebVerificationTokenOutcomeCallable ApplyWebVerificationTokenCallable(const Model::ApplyWebVerificationTokenRequest& request);

                /**
                 *This interface supports judgment of real person and photo comparison to verify the user's identity online. By passing the video and photo into the interface, it will first judge whether the person in the video is real. If yes, it judges whether the person in the video is the same one as the uploaded photo and returns authentication result.
                 * @param req CompareFaceLivenessRequest
                 * @return CompareFaceLivenessOutcome
                 */
                CompareFaceLivenessOutcome CompareFaceLiveness(const Model::CompareFaceLivenessRequest &request);
                void CompareFaceLivenessAsync(const Model::CompareFaceLivenessRequest& request, const CompareFaceLivenessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompareFaceLivenessOutcomeCallable CompareFaceLivenessCallable(const Model::CompareFaceLivenessRequest& request);

                /**
                 *This API is used to generate a temporary `UploadUrl` for uploading resource files (with the `HTTP PUT` method). After resource upload, `ResourceUrl` will be passed to the `TargetAction` API to complete the resource passing (specific fields vary by case). 
The data will be stored in a COS bucket in the region specified by the parameter `Region` for two hours.
                 * @param req CreateUploadUrlRequest
                 * @return CreateUploadUrlOutcome
                 */
                CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest &request);
                void CreateUploadUrlAsync(const Model::CreateUploadUrlRequest& request, const CreateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const Model::CreateUploadUrlRequest& request);

                /**
                 *This API is used to detect liveness with the package generated by the liveness comparison (reflection-based) SDK, and to compare the person detected with that in the image passed in.
The image and the data generated with the SDK must be stored in COS, and the region of the COS bucket must be same as that of requests made with this API. We recommend that you pass resources with upload link APIs.
                 * @param req DetectReflectLivenessAndCompareRequest
                 * @return DetectReflectLivenessAndCompareOutcome
                 */
                DetectReflectLivenessAndCompareOutcome DetectReflectLivenessAndCompare(const Model::DetectReflectLivenessAndCompareRequest &request);
                void DetectReflectLivenessAndCompareAsync(const Model::DetectReflectLivenessAndCompareRequest& request, const DetectReflectLivenessAndCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectReflectLivenessAndCompareOutcomeCallable DetectReflectLivenessAndCompareCallable(const Model::DetectReflectLivenessAndCompareRequest& request);

                /**
                 *This API is used to generate an appropriate light sequence based on the information collected by the liveness comparison (reflection-based) SDK and pass the light sequence into the SDK to start the identity verification process.
The data generated with the SDK must be stored in COS, and the region of the COS bucket must be same as that of requests made with this API. We recommend that you pass resources with upload link APIs.
                 * @param req GenerateReflectSequenceRequest
                 * @return GenerateReflectSequenceOutcome
                 */
                GenerateReflectSequenceOutcome GenerateReflectSequence(const Model::GenerateReflectSequenceRequest &request);
                void GenerateReflectSequenceAsync(const Model::GenerateReflectSequenceRequest& request, const GenerateReflectSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateReflectSequenceOutcomeCallable GenerateReflectSequenceCallable(const Model::GenerateReflectSequenceRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding SDK token after the identity verification process is completed. The SDK token is valid for two hours (2*3,600s) after generation and can be called multiple times.
                 * @param req GetFaceIdResultIntlRequest
                 * @return GetFaceIdResultIntlOutcome
                 */
                GetFaceIdResultIntlOutcome GetFaceIdResultIntl(const Model::GetFaceIdResultIntlRequest &request);
                void GetFaceIdResultIntlAsync(const Model::GetFaceIdResultIntlRequest& request, const GetFaceIdResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFaceIdResultIntlOutcomeCallable GetFaceIdResultIntlCallable(const Model::GetFaceIdResultIntlRequest& request);

                /**
                 *This API is used to apply for an SDK token before calling the liveness detection and face comparison SDK each time. The SDK token is used throughout the identity verification process and to get the verification result after the verification is completed. A token is valid for one identity verification process only.
                 * @param req GetFaceIdTokenIntlRequest
                 * @return GetFaceIdTokenIntlOutcome
                 */
                GetFaceIdTokenIntlOutcome GetFaceIdTokenIntl(const Model::GetFaceIdTokenIntlRequest &request);
                void GetFaceIdTokenIntlAsync(const Model::GetFaceIdTokenIntlRequest& request, const GetFaceIdTokenIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFaceIdTokenIntlOutcomeCallable GetFaceIdTokenIntlCallable(const Model::GetFaceIdTokenIntlRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding token (SdkToken) after the liveness detection is completed. The token is valid for two hours after issuance and can be called multiple times.
                 * @param req GetLivenessResultRequest
                 * @return GetLivenessResultOutcome
                 */
                GetLivenessResultOutcome GetLivenessResult(const Model::GetLivenessResultRequest &request);
                void GetLivenessResultAsync(const Model::GetLivenessResultRequest& request, const GetLivenessResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLivenessResultOutcomeCallable GetLivenessResultCallable(const Model::GetLivenessResultRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding token after the SDK-based verification is completed. The token is valid for three days after issuance and can be called multiple times.
                 * @param req GetSdkVerificationResultRequest
                 * @return GetSdkVerificationResultOutcome
                 */
                GetSdkVerificationResultOutcome GetSdkVerificationResult(const Model::GetSdkVerificationResultRequest &request);
                void GetSdkVerificationResultAsync(const Model::GetSdkVerificationResultRequest& request, const GetSdkVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSdkVerificationResultOutcomeCallable GetSdkVerificationResultCallable(const Model::GetSdkVerificationResultRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding token (BizToken) after the web-based verification is completed. The BizToken is valid for three days (3*24*3,600s) after issuance and can be called multiple times.
                 * @param req GetWebVerificationResultRequest
                 * @return GetWebVerificationResultOutcome
                 */
                GetWebVerificationResultOutcome GetWebVerificationResult(const Model::GetWebVerificationResultRequest &request);
                void GetWebVerificationResultAsync(const Model::GetWebVerificationResultRequest& request, const GetWebVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWebVerificationResultOutcomeCallable GetWebVerificationResultCallable(const Model::GetWebVerificationResultRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding BizToken after the u200dweb-based verification is completed. The token is valid for three days (259,200s) after issuance and can be called multiple times.
                 * @param req GetWebVerificationResultIntlRequest
                 * @return GetWebVerificationResultIntlOutcome
                 */
                GetWebVerificationResultIntlOutcome GetWebVerificationResultIntl(const Model::GetWebVerificationResultIntlRequest &request);
                void GetWebVerificationResultIntlAsync(const Model::GetWebVerificationResultIntlRequest& request, const GetWebVerificationResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWebVerificationResultIntlOutcomeCallable GetWebVerificationResultIntlCallable(const Model::GetWebVerificationResultIntlRequest& request);

                /**
                 *This API is used to pass in a video and a photo, determine whether the person in the video is real, and if yes, then determine whether the person in the video is the same as that in the photo.
This API on the legacy version will continue to serve existing users but will be unavailable to new users. We recommend you use `VideoLivenessCompare` for better service quality.
                 * @param req LivenessCompareRequest
                 * @return LivenessCompareOutcome
                 */
                LivenessCompareOutcome LivenessCompare(const Model::LivenessCompareRequest &request);
                void LivenessCompareAsync(const Model::LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessCompareOutcomeCallable LivenessCompareCallable(const Model::LivenessCompareRequest& request);

                /**
                 *This API is used to pass in URLs of a video and a photo, determine whether the person in the video is real, and if yes, then determine whether the person in the video is the same as that in the photo.
                 * @param req VideoLivenessCompareRequest
                 * @return VideoLivenessCompareOutcome
                 */
                VideoLivenessCompareOutcome VideoLivenessCompare(const Model::VideoLivenessCompareRequest &request);
                void VideoLivenessCompareAsync(const Model::VideoLivenessCompareRequest& request, const VideoLivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VideoLivenessCompareOutcomeCallable VideoLivenessCompareCallable(const Model::VideoLivenessCompareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
