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
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdNameDateRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdNameDateResponse.h>
#include <tencentcloud/faceid/v20180301/model/CompareFaceLivenessRequest.h>
#include <tencentcloud/faceid/v20180301/model/CompareFaceLivenessResponse.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlRequest.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectAIFakeFacesRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectAIFakeFacesResponse.h>
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
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlResponse.h>
#include <tencentcloud/faceid/v20180301/model/IdCardOCRVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/IdCardOCRVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionRequest.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionResponse.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionV2Request.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionV2Response.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/MobileStatusRequest.h>
#include <tencentcloud/faceid/v20180301/model/MobileStatusResponse.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationResponse.h>
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
                typedef Outcome<Core::Error, Model::BankCard2EVerificationResponse> BankCard2EVerificationOutcome;
                typedef std::future<BankCard2EVerificationOutcome> BankCard2EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard2EVerificationRequest&, BankCard2EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard2EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCard4EVerificationResponse> BankCard4EVerificationOutcome;
                typedef std::future<BankCard4EVerificationOutcome> BankCard4EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard4EVerificationRequest&, BankCard4EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard4EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCardVerificationResponse> BankCardVerificationOutcome;
                typedef std::future<BankCardVerificationOutcome> BankCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCardVerificationRequest&, BankCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCardInformationResponse> CheckBankCardInformationOutcome;
                typedef std::future<CheckBankCardInformationOutcome> CheckBankCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckBankCardInformationRequest&, CheckBankCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCardInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIdCardInformationResponse> CheckIdCardInformationOutcome;
                typedef std::future<CheckIdCardInformationOutcome> CheckIdCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckIdCardInformationRequest&, CheckIdCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdCardInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIdNameDateResponse> CheckIdNameDateOutcome;
                typedef std::future<CheckIdNameDateOutcome> CheckIdNameDateOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckIdNameDateRequest&, CheckIdNameDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdNameDateAsyncHandler;
                typedef Outcome<Core::Error, Model::CompareFaceLivenessResponse> CompareFaceLivenessOutcome;
                typedef std::future<CompareFaceLivenessOutcome> CompareFaceLivenessOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CompareFaceLivenessRequest&, CompareFaceLivenessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceLivenessAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUploadUrlResponse> CreateUploadUrlOutcome;
                typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CreateUploadUrlRequest&, CreateUploadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectAIFakeFacesResponse> DetectAIFakeFacesOutcome;
                typedef std::future<DetectAIFakeFacesOutcome> DetectAIFakeFacesOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectAIFakeFacesRequest&, DetectAIFakeFacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectAIFakeFacesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::GetWebVerificationResultIntlResponse> GetWebVerificationResultIntlOutcome;
                typedef std::future<GetWebVerificationResultIntlOutcome> GetWebVerificationResultIntlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetWebVerificationResultIntlRequest&, GetWebVerificationResultIntlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWebVerificationResultIntlAsyncHandler;
                typedef Outcome<Core::Error, Model::IdCardOCRVerificationResponse> IdCardOCRVerificationOutcome;
                typedef std::future<IdCardOCRVerificationOutcome> IdCardOCRVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardOCRVerificationRequest&, IdCardOCRVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardOCRVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::IdCardVerificationResponse> IdCardVerificationOutcome;
                typedef std::future<IdCardVerificationOutcome> IdCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardVerificationRequest&, IdCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageRecognitionResponse> ImageRecognitionOutcome;
                typedef std::future<ImageRecognitionOutcome> ImageRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ImageRecognitionRequest&, ImageRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageRecognitionAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageRecognitionV2Response> ImageRecognitionV2Outcome;
                typedef std::future<ImageRecognitionV2Outcome> ImageRecognitionV2OutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ImageRecognitionV2Request&, ImageRecognitionV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageRecognitionV2AsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::MobileNetworkTimeVerificationResponse> MobileNetworkTimeVerificationOutcome;
                typedef std::future<MobileNetworkTimeVerificationOutcome> MobileNetworkTimeVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileNetworkTimeVerificationRequest&, MobileNetworkTimeVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileNetworkTimeVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::MobileStatusResponse> MobileStatusOutcome;
                typedef std::future<MobileStatusOutcome> MobileStatusOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileStatusRequest&, MobileStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PhoneVerificationResponse> PhoneVerificationOutcome;
                typedef std::future<PhoneVerificationOutcome> PhoneVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationRequest&, PhoneVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationAsyncHandler;
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
                 *This API is used to apply for a token before calling the eKYC SDK service each time. This token is required for initiating the verification process and getting the result after the verification is completed.
                 * @param req ApplySdkVerificationTokenRequest
                 * @return ApplySdkVerificationTokenOutcome
                 */
                ApplySdkVerificationTokenOutcome ApplySdkVerificationToken(const Model::ApplySdkVerificationTokenRequest &request);
                void ApplySdkVerificationTokenAsync(const Model::ApplySdkVerificationTokenRequest& request, const ApplySdkVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySdkVerificationTokenOutcomeCallable ApplySdkVerificationTokenCallable(const Model::ApplySdkVerificationTokenRequest& request);

                /**
                 *This API is used to obtain a BizToken before each call to the Web verification service. Save the BizToken to initiate the verification process and retrieve the result upon completion. The BizToken is valid for 10 minutes.
                 * @param req ApplyWebVerificationBizTokenIntlRequest
                 * @return ApplyWebVerificationBizTokenIntlOutcome
                 */
                ApplyWebVerificationBizTokenIntlOutcome ApplyWebVerificationBizTokenIntl(const Model::ApplyWebVerificationBizTokenIntlRequest &request);
                void ApplyWebVerificationBizTokenIntlAsync(const Model::ApplyWebVerificationBizTokenIntlRequest& request, const ApplyWebVerificationBizTokenIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWebVerificationBizTokenIntlOutcomeCallable ApplyWebVerificationBizTokenIntlCallable(const Model::ApplyWebVerificationBizTokenIntlRequest& request);

                /**
                 *This API is used to validate the authenticity and consistency of the name and bank card number.
                 * @param req BankCard2EVerificationRequest
                 * @return BankCard2EVerificationOutcome
                 */
                BankCard2EVerificationOutcome BankCard2EVerification(const Model::BankCard2EVerificationRequest &request);
                void BankCard2EVerificationAsync(const Model::BankCard2EVerificationRequest& request, const BankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCard2EVerificationOutcomeCallable BankCard2EVerificationCallable(const Model::BankCard2EVerificationRequest& request);

                /**
                 *This API is used to verify the authenticity and consistency of the bank card number, name, ID number, and mobile number for account opening.
                 * @param req BankCard4EVerificationRequest
                 * @return BankCard4EVerificationOutcome
                 */
                BankCard4EVerificationOutcome BankCard4EVerification(const Model::BankCard4EVerificationRequest &request);
                void BankCard4EVerificationAsync(const Model::BankCard4EVerificationRequest& request, const BankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCard4EVerificationOutcomeCallable BankCard4EVerificationCallable(const Model::BankCard4EVerificationRequest& request);

                /**
                 *This API is used to verify the authenticity and consistency of the bank card number, name, and ID number of information.
                 * @param req BankCardVerificationRequest
                 * @return BankCardVerificationOutcome
                 */
                BankCardVerificationOutcome BankCardVerification(const Model::BankCardVerificationRequest &request);
                void BankCardVerificationAsync(const Model::BankCardVerificationRequest& request, const BankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardVerificationOutcomeCallable BankCardVerificationCallable(const Model::BankCardVerificationRequest& request);

                /**
                 *Bank card basic information query
                 * @param req CheckBankCardInformationRequest
                 * @return CheckBankCardInformationOutcome
                 */
                CheckBankCardInformationOutcome CheckBankCardInformation(const Model::CheckBankCardInformationRequest &request);
                void CheckBankCardInformationAsync(const Model::CheckBankCardInformationRequest& request, const CheckBankCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCardInformationOutcomeCallable CheckBankCardInformationCallable(const Model::CheckBankCardInformationRequest& request);

                /**
                 *This API is used to import the ID card portrait side photo, recognize the information on the ID card photo, and compare the name, identity card number, and ID card portrait photo with the ID photo in the authoritative database to verify if they belong to the same person, thereby verifying the authenticity of the identity card information.
                 * @param req CheckIdCardInformationRequest
                 * @return CheckIdCardInformationOutcome
                 */
                CheckIdCardInformationOutcome CheckIdCardInformation(const Model::CheckIdCardInformationRequest &request);
                void CheckIdCardInformationAsync(const Model::CheckIdCardInformationRequest& request, const CheckIdCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdCardInformationOutcomeCallable CheckIdCardInformationCallable(const Model::CheckIdCardInformationRequest& request);

                /**
                 *This API is used to validate the authenticity and consistency of the name, identity card number, and valid period.
                 * @param req CheckIdNameDateRequest
                 * @return CheckIdNameDateOutcome
                 */
                CheckIdNameDateOutcome CheckIdNameDate(const Model::CheckIdNameDateRequest &request);
                void CheckIdNameDateAsync(const Model::CheckIdNameDateRequest& request, const CheckIdNameDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdNameDateOutcomeCallable CheckIdNameDateCallable(const Model::CheckIdNameDateRequest& request);

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
                 *Based on the multimodal AI large model algorithm, it provides anti-attack detection capabilities for facial images and videos. It can effectively identify highly simulated AIGC face-changing, high-definition remakes, batch black market attacks, watermarks and other attack traces, and enhance the anti-counterfeiting security capabilities of images and videos.
                 * @param req DetectAIFakeFacesRequest
                 * @return DetectAIFakeFacesOutcome
                 */
                DetectAIFakeFacesOutcome DetectAIFakeFaces(const Model::DetectAIFakeFacesRequest &request);
                void DetectAIFakeFacesAsync(const Model::DetectAIFakeFacesRequest& request, const DetectAIFakeFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectAIFakeFacesOutcomeCallable DetectAIFakeFacesCallable(const Model::DetectAIFakeFacesRequest& request);

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
                 *This API is used to generate an appropriate light sequence based on the information collected by the liveness comparison (reflection-based) SDK and pass the light sequence into the SDK to start the eKYC process.
The data generated with the SDK must be stored in COS, and the region of the COS bucket must be same as that of requests made with this API. We recommend that you pass resources with upload link APIs.
                 * @param req GenerateReflectSequenceRequest
                 * @return GenerateReflectSequenceOutcome
                 */
                GenerateReflectSequenceOutcome GenerateReflectSequence(const Model::GenerateReflectSequenceRequest &request);
                void GenerateReflectSequenceAsync(const Model::GenerateReflectSequenceRequest& request, const GenerateReflectSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateReflectSequenceOutcomeCallable GenerateReflectSequenceCallable(const Model::GenerateReflectSequenceRequest& request);

                /**
                 *This API is used to get the verification result with the corresponding SDK token after the identity verification process is completed. The SDK token is valid for 72 hours (72*3600s) after generation and can be called multiple times.
                 * @param req GetFaceIdResultIntlRequest
                 * @return GetFaceIdResultIntlOutcome
                 */
                GetFaceIdResultIntlOutcome GetFaceIdResultIntl(const Model::GetFaceIdResultIntlRequest &request);
                void GetFaceIdResultIntlAsync(const Model::GetFaceIdResultIntlRequest& request, const GetFaceIdResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFaceIdResultIntlOutcomeCallable GetFaceIdResultIntlCallable(const Model::GetFaceIdResultIntlRequest& request);

                /**
                 *This API is used to apply for an SDK token before calling the selfie verification SDK each time. The SDK token is used throughout the eKYC process and to get the verification result after the verification is completed. A token is valid for one eKYC process only.
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
                 *This API is used to get the verification result with the corresponding BizToken after the web-based verification is completed. The token is valid for three days (259,200s) after issuance and can be called multiple times.
                 * @param req GetWebVerificationResultIntlRequest
                 * @return GetWebVerificationResultIntlOutcome
                 */
                GetWebVerificationResultIntlOutcome GetWebVerificationResultIntl(const Model::GetWebVerificationResultIntlRequest &request);
                void GetWebVerificationResultIntlAsync(const Model::GetWebVerificationResultIntlRequest& request, const GetWebVerificationResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWebVerificationResultIntlOutcomeCallable GetWebVerificationResultIntlCallable(const Model::GetWebVerificationResultIntlRequest& request);

                /**
                 *This API is used to validate the authenticity and consistency of the name and identity card number. You can provide the required verification information by manually inputting the name and identity card number or importing the ID card portrait side image.
                 * @param req IdCardOCRVerificationRequest
                 * @return IdCardOCRVerificationOutcome
                 */
                IdCardOCRVerificationOutcome IdCardOCRVerification(const Model::IdCardOCRVerificationRequest &request);
                void IdCardOCRVerificationAsync(const Model::IdCardOCRVerificationRequest& request, const IdCardOCRVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdCardOCRVerificationOutcomeCallable IdCardOCRVerificationCallable(const Model::IdCardOCRVerificationRequest& request);

                /**
                 *This API is used to validate the authenticity and consistency of the name and identity card number.
                 * @param req IdCardVerificationRequest
                 * @return IdCardVerificationOutcome
                 */
                IdCardVerificationOutcome IdCardVerification(const Model::IdCardVerificationRequest &request);
                void IdCardVerificationAsync(const Model::IdCardVerificationRequest& request, const IdCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdCardVerificationOutcomeCallable IdCardVerificationCallable(const Model::IdCardVerificationRequest& request);

                /**
                 *This API is used to judge whether the image passed in and the ID photo in the authoritative database belong to the same person based on the identity information (this interface has stopped integration, new customers please use the <a href="https://www.tencentcloud.com/document/product/1007/102203?from_cn_redirect=1">photo face verification (V2.0)</a> API).
                 * @param req ImageRecognitionRequest
                 * @return ImageRecognitionOutcome
                 */
                ImageRecognitionOutcome ImageRecognition(const Model::ImageRecognitionRequest &request);
                void ImageRecognitionAsync(const Model::ImageRecognitionRequest& request, const ImageRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageRecognitionOutcomeCallable ImageRecognitionCallable(const Model::ImageRecognitionRequest& request);

                /**
                 *This API is used to judge whether the image passed in and the ID photo in the authoritative database belong to the same person based on the identity information.
                 * @param req ImageRecognitionV2Request
                 * @return ImageRecognitionV2Outcome
                 */
                ImageRecognitionV2Outcome ImageRecognitionV2(const Model::ImageRecognitionV2Request &request);
                void ImageRecognitionV2Async(const Model::ImageRecognitionV2Request& request, const ImageRecognitionV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageRecognitionV2OutcomeCallable ImageRecognitionV2Callable(const Model::ImageRecognitionV2Request& request);

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
                 *This API is used to query the duration of a mobile number. Enter mobile number to query.
                 * @param req MobileNetworkTimeVerificationRequest
                 * @return MobileNetworkTimeVerificationOutcome
                 */
                MobileNetworkTimeVerificationOutcome MobileNetworkTimeVerification(const Model::MobileNetworkTimeVerificationRequest &request);
                void MobileNetworkTimeVerificationAsync(const Model::MobileNetworkTimeVerificationRequest& request, const MobileNetworkTimeVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MobileNetworkTimeVerificationOutcomeCallable MobileNetworkTimeVerificationCallable(const Model::MobileNetworkTimeVerificationRequest& request);

                /**
                 *This API is used to verify phone number status. You can enter mobile number to query.
                 * @param req MobileStatusRequest
                 * @return MobileStatusOutcome
                 */
                MobileStatusOutcome MobileStatus(const Model::MobileStatusRequest &request);
                void MobileStatusAsync(const Model::MobileStatusRequest& request, const MobileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MobileStatusOutcomeCallable MobileStatusCallable(const Model::MobileStatusRequest& request);

                /**
                 *This API is used to validate the authenticity and consistency of the mobile number, name, and identity card number. For details on supported mobile number segments, see the <a href="https://www.tencentcloud.com/document/product/1007/46063?from_cn_redirect=1">carrier</a> document.
                 * @param req PhoneVerificationRequest
                 * @return PhoneVerificationOutcome
                 */
                PhoneVerificationOutcome PhoneVerification(const Model::PhoneVerificationRequest &request);
                void PhoneVerificationAsync(const Model::PhoneVerificationRequest& request, const PhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationOutcomeCallable PhoneVerificationCallable(const Model::PhoneVerificationRequest& request);

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
