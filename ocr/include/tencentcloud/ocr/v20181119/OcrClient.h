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

#ifndef TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
#define TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ocr/v20181119/model/ApplyCardVerificationExternalRequest.h>
#include <tencentcloud/ocr/v20181119/model/ApplyCardVerificationExternalResponse.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ExtractDocMultiRequest.h>
#include <tencentcloud/ocr/v20181119/model/ExtractDocMultiResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GetCardVerificationExternalResultRequest.h>
#include <tencentcloud/ocr/v20181119/model/GetCardVerificationExternalResultResponse.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MainlandPermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MainlandPermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/PermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/PermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilCommonOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilCommonOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilDriverLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilDriverLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNEOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNEOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNMOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilRNMOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeDetectCardCoordsRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeDetectCardCoordsResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMainlandIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMexicoVTIDRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMexicoVTIDResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesUMIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesUMIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiPinkCardRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiPinkCardResponse.h>
#include <tencentcloud/ocr/v20181119/model/SealOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/SealOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Request.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Response.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralProRequest.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralProResponse.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRResponse.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            class OcrClient : public AbstractClient
            {
            public:
                OcrClient(const Credential &credential, const std::string &region);
                OcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyCardVerificationExternalResponse> ApplyCardVerificationExternalOutcome;
                typedef std::future<ApplyCardVerificationExternalOutcome> ApplyCardVerificationExternalOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ApplyCardVerificationExternalRequest&, ApplyCardVerificationExternalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCardVerificationExternalAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ExtractDocMultiResponse> ExtractDocMultiOutcome;
                typedef std::future<ExtractDocMultiOutcome> ExtractDocMultiOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ExtractDocMultiRequest&, ExtractDocMultiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExtractDocMultiAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCardVerificationExternalResultResponse> GetCardVerificationExternalResultOutcome;
                typedef std::future<GetCardVerificationExternalResultOutcome> GetCardVerificationExternalResultOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GetCardVerificationExternalResultRequest&, GetCardVerificationExternalResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCardVerificationExternalResultAsyncHandler;
                typedef Outcome<Core::Error, Model::HKIDCardOCRResponse> HKIDCardOCROutcome;
                typedef std::future<HKIDCardOCROutcome> HKIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HKIDCardOCRRequest&, HKIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HKIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::HmtResidentPermitOCRResponse> HmtResidentPermitOCROutcome;
                typedef std::future<HmtResidentPermitOCROutcome> HmtResidentPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HmtResidentPermitOCRRequest&, HmtResidentPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HmtResidentPermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::IDCardOCRResponse> IDCardOCROutcome;
                typedef std::future<IDCardOCROutcome> IDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::IDCardOCRRequest&, IDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> IDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::LicensePlateOCRResponse> LicensePlateOCROutcome;
                typedef std::future<LicensePlateOCROutcome> LicensePlateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::LicensePlateOCRRequest&, LicensePlateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> LicensePlateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MainlandPermitOCRResponse> MainlandPermitOCROutcome;
                typedef std::future<MainlandPermitOCROutcome> MainlandPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MainlandPermitOCRRequest&, MainlandPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MainlandPermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::PermitOCRResponse> PermitOCROutcome;
                typedef std::future<PermitOCROutcome> PermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PermitOCRRequest&, PermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeBrazilCommonOCRResponse> RecognizeBrazilCommonOCROutcome;
                typedef std::future<RecognizeBrazilCommonOCROutcome> RecognizeBrazilCommonOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeBrazilCommonOCRRequest&, RecognizeBrazilCommonOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBrazilCommonOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeBrazilDriverLicenseOCRResponse> RecognizeBrazilDriverLicenseOCROutcome;
                typedef std::future<RecognizeBrazilDriverLicenseOCROutcome> RecognizeBrazilDriverLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeBrazilDriverLicenseOCRRequest&, RecognizeBrazilDriverLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBrazilDriverLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeBrazilIDCardOCRResponse> RecognizeBrazilIDCardOCROutcome;
                typedef std::future<RecognizeBrazilIDCardOCROutcome> RecognizeBrazilIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeBrazilIDCardOCRRequest&, RecognizeBrazilIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBrazilIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeBrazilRNEOCRResponse> RecognizeBrazilRNEOCROutcome;
                typedef std::future<RecognizeBrazilRNEOCROutcome> RecognizeBrazilRNEOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeBrazilRNEOCRRequest&, RecognizeBrazilRNEOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBrazilRNEOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeBrazilRNMOCRResponse> RecognizeBrazilRNMOCROutcome;
                typedef std::future<RecognizeBrazilRNMOCROutcome> RecognizeBrazilRNMOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeBrazilRNMOCRRequest&, RecognizeBrazilRNMOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBrazilRNMOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeDetectCardCoordsResponse> RecognizeDetectCardCoordsOutcome;
                typedef std::future<RecognizeDetectCardCoordsOutcome> RecognizeDetectCardCoordsOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeDetectCardCoordsRequest&, RecognizeDetectCardCoordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeDetectCardCoordsAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeGeneralInvoiceResponse> RecognizeGeneralInvoiceOutcome;
                typedef std::future<RecognizeGeneralInvoiceOutcome> RecognizeGeneralInvoiceOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeGeneralInvoiceRequest&, RecognizeGeneralInvoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeGeneralInvoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeIndonesiaIDCardOCRResponse> RecognizeIndonesiaIDCardOCROutcome;
                typedef std::future<RecognizeIndonesiaIDCardOCROutcome> RecognizeIndonesiaIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeIndonesiaIDCardOCRRequest&, RecognizeIndonesiaIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeIndonesiaIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeKoreanDrivingLicenseOCRResponse> RecognizeKoreanDrivingLicenseOCROutcome;
                typedef std::future<RecognizeKoreanDrivingLicenseOCROutcome> RecognizeKoreanDrivingLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeKoreanDrivingLicenseOCRRequest&, RecognizeKoreanDrivingLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeKoreanDrivingLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeKoreanIDCardOCRResponse> RecognizeKoreanIDCardOCROutcome;
                typedef std::future<RecognizeKoreanIDCardOCROutcome> RecognizeKoreanIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeKoreanIDCardOCRRequest&, RecognizeKoreanIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeKoreanIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMacaoIDCardOCRResponse> RecognizeMacaoIDCardOCROutcome;
                typedef std::future<RecognizeMacaoIDCardOCROutcome> RecognizeMacaoIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeMacaoIDCardOCRRequest&, RecognizeMacaoIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMacaoIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMainlandIDCardOCRResponse> RecognizeMainlandIDCardOCROutcome;
                typedef std::future<RecognizeMainlandIDCardOCROutcome> RecognizeMainlandIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeMainlandIDCardOCRRequest&, RecognizeMainlandIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMainlandIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMexicoVTIDResponse> RecognizeMexicoVTIDOutcome;
                typedef std::future<RecognizeMexicoVTIDOutcome> RecognizeMexicoVTIDOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeMexicoVTIDRequest&, RecognizeMexicoVTIDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMexicoVTIDAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesDrivingLicenseOCRResponse> RecognizePhilippinesDrivingLicenseOCROutcome;
                typedef std::future<RecognizePhilippinesDrivingLicenseOCROutcome> RecognizePhilippinesDrivingLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesDrivingLicenseOCRRequest&, RecognizePhilippinesDrivingLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesDrivingLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesSssIDOCRResponse> RecognizePhilippinesSssIDOCROutcome;
                typedef std::future<RecognizePhilippinesSssIDOCROutcome> RecognizePhilippinesSssIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesSssIDOCRRequest&, RecognizePhilippinesSssIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesSssIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesTinIDOCRResponse> RecognizePhilippinesTinIDOCROutcome;
                typedef std::future<RecognizePhilippinesTinIDOCROutcome> RecognizePhilippinesTinIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesTinIDOCRRequest&, RecognizePhilippinesTinIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesTinIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesUMIDOCRResponse> RecognizePhilippinesUMIDOCROutcome;
                typedef std::future<RecognizePhilippinesUMIDOCROutcome> RecognizePhilippinesUMIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesUMIDOCRRequest&, RecognizePhilippinesUMIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesUMIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesVoteIDOCRResponse> RecognizePhilippinesVoteIDOCROutcome;
                typedef std::future<RecognizePhilippinesVoteIDOCROutcome> RecognizePhilippinesVoteIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesVoteIDOCRRequest&, RecognizePhilippinesVoteIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesVoteIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeSingaporeIDCardOCRResponse> RecognizeSingaporeIDCardOCROutcome;
                typedef std::future<RecognizeSingaporeIDCardOCROutcome> RecognizeSingaporeIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeSingaporeIDCardOCRRequest&, RecognizeSingaporeIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeSingaporeIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeTableAccurateOCRResponse> RecognizeTableAccurateOCROutcome;
                typedef std::future<RecognizeTableAccurateOCROutcome> RecognizeTableAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeTableAccurateOCRRequest&, RecognizeTableAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTableAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeThaiIDCardOCRResponse> RecognizeThaiIDCardOCROutcome;
                typedef std::future<RecognizeThaiIDCardOCROutcome> RecognizeThaiIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeThaiIDCardOCRRequest&, RecognizeThaiIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeThaiIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeThaiPinkCardResponse> RecognizeThaiPinkCardOutcome;
                typedef std::future<RecognizeThaiPinkCardOutcome> RecognizeThaiPinkCardOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeThaiPinkCardRequest&, RecognizeThaiPinkCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeThaiPinkCardAsyncHandler;
                typedef Outcome<Core::Error, Model::SealOCRResponse> SealOCROutcome;
                typedef std::future<SealOCROutcome> SealOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SealOCRRequest&, SealOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> SealOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralOCRV2Response> SmartStructuralOCRV2Outcome;
                typedef std::future<SmartStructuralOCRV2Outcome> SmartStructuralOCRV2OutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralOCRV2Request&, SmartStructuralOCRV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralOCRV2AsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralProResponse> SmartStructuralProOutcome;
                typedef std::future<SmartStructuralProOutcome> SmartStructuralProOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralProRequest&, SmartStructuralProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralProAsyncHandler;
                typedef Outcome<Core::Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VinOCRResponse> VinOCROutcome;
                typedef std::future<VinOCROutcome> VinOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VinOCRRequest&, VinOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VinOCRAsyncHandler;



                /**
                 *This API is used for general recognition of overseas cards.

The following list details the countries or regions, document types supported by the overseas document recognition API and whether the back side of the document is required:

<table>
<thead>
<tr>
<td style="width:200px">Nationality</td>
<td style="width:200px">CardType</td>
<td style="width:200px">Whether the Back Side is Required</td>
</tr>
</thead>
<tbody>
<tr>
<td>Argentina</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Argentina</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Argentina</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Australia</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Australia</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Australia</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Australia</td>
<td>Residence Permit</td>
<td>Yes</td>
</tr>
<tr>
<td>Bangladesh</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Bangladesh</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Bangladesh</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Cambodia</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Cambodia</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Cambodia</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Canada</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Canada</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Canada</td>
<td>Passport</td>
<td>Yes</td>
</tr>
<tr>
<td>Canada</td>
<td>Residence Permit</td>
<td>Yes</td>
</tr>
<tr>
<td>Chile</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Chile</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Chile</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Germany</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Germany</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Germany</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Germany</td>
<td>Residence Permit</td>
<td>Yes</td>
</tr>
<tr>
<td>Mexico</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Mexico</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Mexico</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Myanmar</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Myanmar</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Myanmar</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>New Zealand</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>New Zealand</td>
<td>National ID Card</td>
<td>No</td>
</tr>
<tr>
<td>New Zealand</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>New Zealand</td>
<td>Residence Permit</td>
<td>No</td>
</tr>
<tr>
<td>Nigeria</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Nigeria</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Nigeria</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Nigeria</td>
<td>Residence Permit</td>
<td>Yes</td>
</tr>
<tr>
<td>Pakistan</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Pakistan</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Pakistan</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Russia</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Russia</td>
<td>National ID Card</td>
<td>No</td>
</tr>
<tr>
<td>Russia</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Singapore</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Singapore</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Singapore</td>
<td>Passport</td>
<td>No</td>
</tr>
<tr>
<td>Singapore</td>
<td>Residence Permit</td>
<td>Yes</td>
</tr>
<tr>
<td>Indonesia</td>
<td>National ID Card</td>
<td>No</td>
</tr>
<tr>
<td>Indonesia</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Hong Kong, China</td>
<td>Identity Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Thailand</td>
<td>National ID Card</td>
<td>No</td>
</tr>
<tr>
<td>Thailand</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Malaysia</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Malaysia</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Singapore</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Singapore</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Philippines</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Philippines</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Japan</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Japan</td>
<td>Driver's License</td>
<td>No</td>
</tr>
<tr>
<td>Macau, China</td>
<td>Identity Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Taiwan, China</td>
<td>Identity Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Bangladesh</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Nigeria</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Nigeria</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
<tr>
<td>Pakistan</td>
<td>National ID Card</td>
<td>Yes</td>
</tr>
<tr>
<td>Pakistan</td>
<td>Driver's License</td>
<td>Yes</td>
</tr>
</tbody>
</table>
                 * @param req ApplyCardVerificationExternalRequest
                 * @return ApplyCardVerificationExternalOutcome
                 */
                ApplyCardVerificationExternalOutcome ApplyCardVerificationExternal(const Model::ApplyCardVerificationExternalRequest &request);
                void ApplyCardVerificationExternalAsync(const Model::ApplyCardVerificationExternalRequest& request, const ApplyCardVerificationExternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyCardVerificationExternalOutcomeCallable ApplyCardVerificationExternalCallable(const Model::ApplyCardVerificationExternalRequest& request);

                /**
                 *This API is used to detect and recognize key fields such as the card number, bank information, and expiration date on mainstream bank cards in Mainland China.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req BankCardOCRRequest
                 * @return BankCardOCROutcome
                 */
                BankCardOCROutcome BankCardOCR(const Model::BankCardOCRRequest &request);
                void BankCardOCRAsync(const Model::BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardOCROutcomeCallable BankCardOCRCallable(const Model::BankCardOCRRequest& request);

                /**
                 *This API supports identifying and extracting field information in structured scenarios such as complex scenarios and multiple formats. Key scenarios include: finance, health care, transportation, travel, insurance. Click [experience now](https://ocrdemo.cloud.tencent.com/).

This API is used to set the alias SmartStructuralPro.

The default API request rate limit is 5 requests per second.
                 * @param req ExtractDocMultiRequest
                 * @return ExtractDocMultiOutcome
                 */
                ExtractDocMultiOutcome ExtractDocMulti(const Model::ExtractDocMultiRequest &request);
                void ExtractDocMultiAsync(const Model::ExtractDocMultiRequest& request, const ExtractDocMultiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExtractDocMultiOutcomeCallable ExtractDocMultiCallable(const Model::ExtractDocMultiRequest& request);

                /**
                 *This API is used to detect and recognize characters in an image. It can recognize Chinese, English, Chinese-English, digits, and special symbols and return the text box positions and characters.

It is suitable for scenarios with a lot of characters in complex layouts and requiring high recognition accuracy, such as examination papers, online images, signboards, and legal documents.

Strengths: compared with general print recognition, it provides higher-precision character recognition services. Its accuracy and recall rate are higher in difficult scenarios such as a large number of characters, long strings of digits, small characters, blurry characters, and tilted text.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req GeneralAccurateOCRRequest
                 * @return GeneralAccurateOCROutcome
                 */
                GeneralAccurateOCROutcome GeneralAccurateOCR(const Model::GeneralAccurateOCRRequest &request);
                void GeneralAccurateOCRAsync(const Model::GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralAccurateOCROutcomeCallable GeneralAccurateOCRCallable(const Model::GeneralAccurateOCRRequest& request);

                /**
                 *This API is used to detect and recognize characters in an image in the following 20 languages: Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, and Arabic. Mixed characters in English and each supported language can be recognized together.

It can recognize printed text in paper documents, online images, ads, signboards, menus, video titles, profile photos, etc.

Strengths: it can automatically recognize the text language, return the text box coordinate information, and automatically rotate tilted text to the upright direction.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req GeneralBasicOCRRequest
                 * @return GeneralBasicOCROutcome
                 */
                GeneralBasicOCROutcome GeneralBasicOCR(const Model::GeneralBasicOCRRequest &request);
                void GeneralBasicOCRAsync(const Model::GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralBasicOCROutcomeCallable GeneralBasicOCRCallable(const Model::GeneralBasicOCRRequest& request);

                /**
                 *This API is used to obtain document recognition results.
                 * @param req GetCardVerificationExternalResultRequest
                 * @return GetCardVerificationExternalResultOutcome
                 */
                GetCardVerificationExternalResultOutcome GetCardVerificationExternalResult(const Model::GetCardVerificationExternalResultRequest &request);
                void GetCardVerificationExternalResultAsync(const Model::GetCardVerificationExternalResultRequest& request, const GetCardVerificationExternalResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCardVerificationExternalResultOutcomeCallable GetCardVerificationExternalResultCallable(const Model::GetCardVerificationExternalResultRequest& request);

                /**
                 *This API is used to recognize key fields on the photo side of a Hong Kong (China) identity card, including name in Chinese, name in English, telecode for name, date of birth, gender, document symbol, date of the first issue, date of the last receipt, identity card number, and permanent residency attribute. 

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req HKIDCardOCRRequest
                 * @return HKIDCardOCROutcome
                 */
                HKIDCardOCROutcome HKIDCardOCR(const Model::HKIDCardOCRRequest &request);
                void HKIDCardOCRAsync(const Model::HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HKIDCardOCROutcomeCallable HKIDCardOCRCallable(const Model::HKIDCardOCRRequest& request);

                /**
                 *This API is used to recognize key fields on the front and back sides of a residence permit for Hong Kong, Macao, or Taiwan residents, including name, gender, date of birth, address, ID number, issuing authority, validity period, number of issues, and permit number. It can be used for residence permit OCR in scenarios such as bank account opening and user registration.

A maximum of 20 requests can be initiated per second for this API.
                 * @param req HmtResidentPermitOCRRequest
                 * @return HmtResidentPermitOCROutcome
                 */
                HmtResidentPermitOCROutcome HmtResidentPermitOCR(const Model::HmtResidentPermitOCRRequest &request);
                void HmtResidentPermitOCRAsync(const Model::HmtResidentPermitOCRRequest& request, const HmtResidentPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HmtResidentPermitOCROutcomeCallable HmtResidentPermitOCRCallable(const Model::HmtResidentPermitOCRRequest& request);

                /**
                 *This API is used to recognize all fields on the front and back sides of a second-generation resident identity card for the Chinese mainland: name, gender, ethnicity, date of birth, domicile, identification number, issuing authority, and validity period, with a recognition accuracy of over 99%.

In addition, this API supports multiple value-added capabilities to meet the needs of different scenarios. It can crop ID card photos and profile photos, and provide warnings for nine cases, as detailed below.

<table style="width:650px">
      <thead>
        <tr>
       <th width="150">Capability</th>
          <th width="500">Description</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td rowspan="2">Cropping</td>
          <td>Crops the ID card photo (by removing extra edges outside the ID card and automatically correcting the shooting angle).</td>
        </tr>
        <tr>
          <td>Crops the profile photo (by automatically cutting out the face area in the ID card).</td>
        </tr>
        <tr>
          <td rowspan="9">Warning</td>
          <td>Warns about invalid ID card validity periods.</td>
        </tr>
        <tr>
          <td>Warns about  incomplete ID card borders.</td>
        </tr>
        <tr>
          <td>Warns about photocopied images.</td>
        </tr>
        <tr>
          <td>Warns about spoofed images.</td>
        </tr>
          <tr>
          <td>Warns about border and frame occlusions.</td>
        </tr>
         <tr>
          <td>Warns about temporary ID cards.</td>
        </tr>
          <tr>
          <td>Warns about photoshopped images.</td>
        </tr>
          <tr>
          <td>Warns about blurry ID card images (blurriness can be determined based on the image quality score).</td>
        </tr>
      </tbody>
    </table>

A maximum of 20 requests can be initiated per second for this API.
                 * @param req IDCardOCRRequest
                 * @return IDCardOCROutcome
                 */
                IDCardOCROutcome IDCardOCR(const Model::IDCardOCRRequest &request);
                void IDCardOCRAsync(const Model::IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IDCardOCROutcomeCallable IDCardOCRCallable(const Model::IDCardOCRRequest& request);

                /**
                 *This API is used to recognize a license plate attached to a motor vehicle in the Chinese mainland and return the regional code, license plate number, and license plate color.

A maximum of 10 requests can be initiated per second for this API.
                 * @param req LicensePlateOCRRequest
                 * @return LicensePlateOCROutcome
                 */
                LicensePlateOCROutcome LicensePlateOCR(const Model::LicensePlateOCRRequest &request);
                void LicensePlateOCRAsync(const Model::LicensePlateOCRRequest& request, const LicensePlateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LicensePlateOCROutcomeCallable LicensePlateOCRCallable(const Model::LicensePlateOCRRequest& request);

                /**
                 *This API is used to recognize a Malaysian identity card, including identity card number, name, gender, and address. It is also used to crop identity photos and give alarms for photographed or photocopied certificates.

This API is not fully available for the time being. For more information, contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req MLIDCardOCRRequest
                 * @return MLIDCardOCROutcome
                 */
                MLIDCardOCROutcome MLIDCardOCR(const Model::MLIDCardOCRRequest &request);
                void MLIDCardOCRAsync(const Model::MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDCardOCROutcomeCallable MLIDCardOCRCallable(const Model::MLIDCardOCRRequest& request);

                /**
                 *This API is used to recognize a passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions. Recognizable fields include passport ID, name, date of birth, gender, expiration date, issuing country/region, and nationality. It has the features of cropping identity photos and alarming for photographed or photocopied documents.
This interface supports regional scope: countries with machine-readable passports
                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

                /**
                 *This API is used to recognize all fields on the front of a mainland travel permit for Hong Kong, Macao, or Taiwan residents: name in Chinese, name in English, gender, date of birth, issuing authority, validity period, document number, place of issuance, number of issues, and document type.

A maximum of 20 requests can be initiated per second for this API.
                 * @param req MainlandPermitOCRRequest
                 * @return MainlandPermitOCROutcome
                 */
                MainlandPermitOCROutcome MainlandPermitOCR(const Model::MainlandPermitOCRRequest &request);
                void MainlandPermitOCRAsync(const Model::MainlandPermitOCRRequest& request, const MainlandPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MainlandPermitOCROutcomeCallable MainlandPermitOCRCallable(const Model::MainlandPermitOCRRequest& request);

                /**
                 *This API is used to recognize the fields on an exit/entry permit (card) for traveling to and from Hong Kong, Macao, or Taiwan, including place of issuance, issuing authority, validity period, gender, date of birth, name in English, name in Chinese, and document number.

A maximum of 10 requests can be initiated per second for this API.
                 * @param req PermitOCRRequest
                 * @return PermitOCROutcome
                 */
                PermitOCROutcome PermitOCR(const Model::PermitOCRRequest &request);
                void PermitOCRAsync(const Model::PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PermitOCROutcomeCallable PermitOCRCallable(const Model::PermitOCRRequest& request);

                /**
                 *This API is used to identify Brazil common documents.

This API is used to set the default request rate limit to 5 requests/second.
                 * @param req RecognizeBrazilCommonOCRRequest
                 * @return RecognizeBrazilCommonOCROutcome
                 */
                RecognizeBrazilCommonOCROutcome RecognizeBrazilCommonOCR(const Model::RecognizeBrazilCommonOCRRequest &request);
                void RecognizeBrazilCommonOCRAsync(const Model::RecognizeBrazilCommonOCRRequest& request, const RecognizeBrazilCommonOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeBrazilCommonOCROutcomeCallable RecognizeBrazilCommonOCRCallable(const Model::RecognizeBrazilCommonOCRRequest& request);

                /**
                 *This interface supports identification of the front and back of Brazilian driver's license. The identification fields include name, driver's license category, number, validity period, etc.
                 * @param req RecognizeBrazilDriverLicenseOCRRequest
                 * @return RecognizeBrazilDriverLicenseOCROutcome
                 */
                RecognizeBrazilDriverLicenseOCROutcome RecognizeBrazilDriverLicenseOCR(const Model::RecognizeBrazilDriverLicenseOCRRequest &request);
                void RecognizeBrazilDriverLicenseOCRAsync(const Model::RecognizeBrazilDriverLicenseOCRRequest& request, const RecognizeBrazilDriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeBrazilDriverLicenseOCROutcomeCallable RecognizeBrazilDriverLicenseOCRCallable(const Model::RecognizeBrazilDriverLicenseOCRRequest& request);

                /**
                 *This interface supports identification of the front and back of Brazilian ID license. The identification fields include name, driver's license category, number, validity period, etc.
                 * @param req RecognizeBrazilIDCardOCRRequest
                 * @return RecognizeBrazilIDCardOCROutcome
                 */
                RecognizeBrazilIDCardOCROutcome RecognizeBrazilIDCardOCR(const Model::RecognizeBrazilIDCardOCRRequest &request);
                void RecognizeBrazilIDCardOCRAsync(const Model::RecognizeBrazilIDCardOCRRequest& request, const RecognizeBrazilIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeBrazilIDCardOCROutcomeCallable RecognizeBrazilIDCardOCRCallable(const Model::RecognizeBrazilIDCardOCRRequest& request);

                /**
                 *Brazil RNE document recognition Default interface request frequency limit: 5 times/second
                 * @param req RecognizeBrazilRNEOCRRequest
                 * @return RecognizeBrazilRNEOCROutcome
                 */
                RecognizeBrazilRNEOCROutcome RecognizeBrazilRNEOCR(const Model::RecognizeBrazilRNEOCRRequest &request);
                void RecognizeBrazilRNEOCRAsync(const Model::RecognizeBrazilRNEOCRRequest& request, const RecognizeBrazilRNEOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeBrazilRNEOCROutcomeCallable RecognizeBrazilRNEOCRCallable(const Model::RecognizeBrazilRNEOCRRequest& request);

                /**
                 *This interface supports identification of the front and back of Brazilian RNM license. The default interface request frequency limit is 5 times per second.
                 * @param req RecognizeBrazilRNMOCRRequest
                 * @return RecognizeBrazilRNMOCROutcome
                 */
                RecognizeBrazilRNMOCROutcome RecognizeBrazilRNMOCR(const Model::RecognizeBrazilRNMOCRRequest &request);
                void RecognizeBrazilRNMOCRAsync(const Model::RecognizeBrazilRNMOCRRequest& request, const RecognizeBrazilRNMOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeBrazilRNMOCROutcomeCallable RecognizeBrazilRNMOCRCallable(const Model::RecognizeBrazilRNMOCRRequest& request);

                /**
                 *This API is used to recognize the coordinates of four corners of cards.
                 * @param req RecognizeDetectCardCoordsRequest
                 * @return RecognizeDetectCardCoordsOutcome
                 */
                RecognizeDetectCardCoordsOutcome RecognizeDetectCardCoords(const Model::RecognizeDetectCardCoordsRequest &request);
                void RecognizeDetectCardCoordsAsync(const Model::RecognizeDetectCardCoordsRequest& request, const RecognizeDetectCardCoordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeDetectCardCoordsOutcomeCallable RecognizeDetectCardCoordsCallable(const Model::RecognizeDetectCardCoordsRequest& request);

                /**
                 *This API is used to recognize various types of invoices or tickets in an image or PDF file. You can also specify a type. 14 types of standard expense reimbursement invoices are supported, including value-added tax (VAT) invoice (special, general, roll, blockchain, and toll), fully digitalized electronic invoice (special and general), non-tax revenue invoice (general receipt and general payment voucher), quota invoice, general machine-printed invoice, car sales invoice (motor vehicle sales invoice and used car invoice), train ticket, taxi receipt, itinerary/receipt of e-ticket for air transportation, bus ticket, ship ticket, toll receipt, and medical invoice (inpatient and outpatient). This API can also be used for intelligent recognition of other types of invoices. To try now, click [here](https://intl.cloud.tencent.com/product/ocr?from_cn_redirect=1).

A maximum of 5 requests can be initiated per second for this API.


The invoice/ticket subtype (SubType), subtype description (TypeDescription), and parent type (Type) can be returned, as described below:
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:200px">SubType</th>
          <th style="width:200px">TypeDescription</th>
          <th >Type</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td> VatSpecialInvoice</td>
          <td> Special VAT invoice </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatCommonInvoice</td>
          <td> General VAT invoice </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicCommonInvoice </td>
          <td> Electronic general VAT invoice </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicSpecialInvoice </td>
          <td> Electronic special VAT invoice </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceBlockchain</td>
          <td> Blockchain electronic invoice </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceToll</td>
          <td> Electronic general VAT invoice (toll)</td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicSpecialInvoiceFull</td>
          <td> Electronic invoice (special)</td>
          <td> 16 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceFull</td>
          <td> Electronic invoice (general) </td>
          <td> 16 </td>
        </tr>
        <tr>
          <td> MotorVehicleSaleInvoice </td>
          <td> Motor vehicle sales invoice </td>
          <td> 12 </td>
        </tr>
        <tr>
          <td> UsedCarPurchaseInvoice </td>
          <td> Used car invoice </td>
          <td> 12 </td>
        </tr>
        <tr>
          <td> VatInvoiceRoll </td>
          <td> General VAT invoice (roll) </td>
          <td> 11 </td>
        </tr>
        <tr>
          <td> TaxiTicket </td>
          <td> Taxi receipt </td>
          <td> 0 </td>
        </tr>
        <tr>
          <td> QuotaInvoice </td>
          <td> Quota invoice </td>
          <td> 1 </td>
        </tr>
        <tr>
          <td> TrainTicket </td>
          <td> Train ticket </td>
          <td> 2 </td>
        </tr>
        <tr>
          <td> AirTransport </td>
          <td> Itinerary/Receipt of e-ticket for air transportation </td>
          <td> 5 </td>
        </tr>
        <tr>
          <td> MachinePrintedInvoice </td>
          <td> General machine-printed invoice </td>
          <td> 8 </td>
        </tr>
        <tr>
          <td> BusInvoice </td>
          <td> Bus ticket </td>
          <td> 9 </td>
        </tr>
        <tr>
          <td> ShippingInvoice </td>
          <td> Ship ticket </td>
          <td> 10 </td>
        </tr>
        <tr>
          <td> NonTaxIncomeGeneralBill </td>
          <td> General receipt for non-tax revenue </td>
          <td> 15 </td>
        </tr>
        <tr>
          <td> NonTaxIncomeElectronicBill </td>
          <td> General payment voucher for non-tax revenue (electronic) </td>
          <td> 15 </td>
        </tr>
        <tr>
          <td> TollInvoice </td>
          <td> Toll receipt </td>
          <td> 13 </td>
        </tr>
        <tr>
          <td> OtherInvoice </td>
          <td> Other </td>
          <td> -1 </td>
        </tr>
      </tbody>
    </table>
                 * @param req RecognizeGeneralInvoiceRequest
                 * @return RecognizeGeneralInvoiceOutcome
                 */
                RecognizeGeneralInvoiceOutcome RecognizeGeneralInvoice(const Model::RecognizeGeneralInvoiceRequest &request);
                void RecognizeGeneralInvoiceAsync(const Model::RecognizeGeneralInvoiceRequest& request, const RecognizeGeneralInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeGeneralInvoiceOutcomeCallable RecognizeGeneralInvoiceCallable(const Model::RecognizeGeneralInvoiceRequest& request);

                /**
                 *This API is used to recognize an Indonesian identity card.

The API request rate is limited to 20 requests/sec by default.
                 * @param req RecognizeIndonesiaIDCardOCRRequest
                 * @return RecognizeIndonesiaIDCardOCROutcome
                 */
                RecognizeIndonesiaIDCardOCROutcome RecognizeIndonesiaIDCardOCR(const Model::RecognizeIndonesiaIDCardOCRRequest &request);
                void RecognizeIndonesiaIDCardOCRAsync(const Model::RecognizeIndonesiaIDCardOCRRequest& request, const RecognizeIndonesiaIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeIndonesiaIDCardOCROutcomeCallable RecognizeIndonesiaIDCardOCRCallable(const Model::RecognizeIndonesiaIDCardOCRRequest& request);

                /**
                 *This API is used to recognize a South Korean driver's license.
                 * @param req RecognizeKoreanDrivingLicenseOCRRequest
                 * @return RecognizeKoreanDrivingLicenseOCROutcome
                 */
                RecognizeKoreanDrivingLicenseOCROutcome RecognizeKoreanDrivingLicenseOCR(const Model::RecognizeKoreanDrivingLicenseOCRRequest &request);
                void RecognizeKoreanDrivingLicenseOCRAsync(const Model::RecognizeKoreanDrivingLicenseOCRRequest& request, const RecognizeKoreanDrivingLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeKoreanDrivingLicenseOCROutcomeCallable RecognizeKoreanDrivingLicenseOCRCallable(const Model::RecognizeKoreanDrivingLicenseOCRRequest& request);

                /**
                 *This API is used to recognize a South Korean ID card.
                 * @param req RecognizeKoreanIDCardOCRRequest
                 * @return RecognizeKoreanIDCardOCROutcome
                 */
                RecognizeKoreanIDCardOCROutcome RecognizeKoreanIDCardOCR(const Model::RecognizeKoreanIDCardOCRRequest &request);
                void RecognizeKoreanIDCardOCRAsync(const Model::RecognizeKoreanIDCardOCRRequest& request, const RecognizeKoreanIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeKoreanIDCardOCROutcomeCallable RecognizeKoreanIDCardOCRCallable(const Model::RecognizeKoreanIDCardOCRRequest& request);

                /**
                 *This API is used to recognize key fields on the photo side of a Macao (China) identity card, including name in Chinese, name in English, telecode for name, date of birth, gender, document symbol, date of the first issue, date of the last receipt, identity card number, and permanent residency attribute. 

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req RecognizeMacaoIDCardOCRRequest
                 * @return RecognizeMacaoIDCardOCROutcome
                 */
                RecognizeMacaoIDCardOCROutcome RecognizeMacaoIDCardOCR(const Model::RecognizeMacaoIDCardOCRRequest &request);
                void RecognizeMacaoIDCardOCRAsync(const Model::RecognizeMacaoIDCardOCRRequest& request, const RecognizeMacaoIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMacaoIDCardOCROutcomeCallable RecognizeMacaoIDCardOCRCallable(const Model::RecognizeMacaoIDCardOCRRequest& request);

                /**
                 *This interface supports the identification of all fields on the front and back of the second-generation ID card for mainland Chinese residents.Including name, gender, ethnicity, date of birth, address, citizen ID number, issuing authority, and validity period, the identification accuracy reaches more than 99%.In addition, this interface also supports a variety of value-added capabilities to meet the needs of different scenarios. Such as the cropping function of ID card photos and portrait photos, and also has 5 alarm functions.
As shown in the table below. <table style="width:650px"> <thead> <tr> <th width="150">Value-added ability</th> <th width="500">Ability items</th> </tr> </thead> <tbody> <tr> <td rowspan="9">Alarm function</td> </tr> <tr> <td>ID card photocopy warning</td> </tr> <tr> <td>ID card on-screen display warning</td> </tr> <tr> <td>Alarm for occlusion in the ID card frame</td> </tr> <tr> <td>ID card reflective warning</td> </tr> <tr> <td>Blurry picture warning</td> </tr> </tbody> </table> Default interface request frequency limit: 20 times/second
                 * @param req RecognizeMainlandIDCardOCRRequest
                 * @return RecognizeMainlandIDCardOCROutcome
                 */
                RecognizeMainlandIDCardOCROutcome RecognizeMainlandIDCardOCR(const Model::RecognizeMainlandIDCardOCRRequest &request);
                void RecognizeMainlandIDCardOCRAsync(const Model::RecognizeMainlandIDCardOCRRequest& request, const RecognizeMainlandIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMainlandIDCardOCROutcomeCallable RecognizeMainlandIDCardOCRCallable(const Model::RecognizeMainlandIDCardOCRRequest& request);

                /**
                 *This interface supports identification of the front and back of Mexican Voter ID Card. The default interface request frequency limit is 5 times per second.
                 * @param req RecognizeMexicoVTIDRequest
                 * @return RecognizeMexicoVTIDOutcome
                 */
                RecognizeMexicoVTIDOutcome RecognizeMexicoVTID(const Model::RecognizeMexicoVTIDRequest &request);
                void RecognizeMexicoVTIDAsync(const Model::RecognizeMexicoVTIDRequest& request, const RecognizeMexicoVTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMexicoVTIDOutcomeCallable RecognizeMexicoVTIDCallable(const Model::RecognizeMexicoVTIDRequest& request);

                /**
                 *This API is used to recognize a Philippine driver's license.
                 * @param req RecognizePhilippinesDrivingLicenseOCRRequest
                 * @return RecognizePhilippinesDrivingLicenseOCROutcome
                 */
                RecognizePhilippinesDrivingLicenseOCROutcome RecognizePhilippinesDrivingLicenseOCR(const Model::RecognizePhilippinesDrivingLicenseOCRRequest &request);
                void RecognizePhilippinesDrivingLicenseOCRAsync(const Model::RecognizePhilippinesDrivingLicenseOCRRequest& request, const RecognizePhilippinesDrivingLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesDrivingLicenseOCROutcomeCallable RecognizePhilippinesDrivingLicenseOCRCallable(const Model::RecognizePhilippinesDrivingLicenseOCRRequest& request);

                /**
                 *This API is used to recognize a Philippine SSSID/UMID card.
                 * @param req RecognizePhilippinesSssIDOCRRequest
                 * @return RecognizePhilippinesSssIDOCROutcome
                 */
                RecognizePhilippinesSssIDOCROutcome RecognizePhilippinesSssIDOCR(const Model::RecognizePhilippinesSssIDOCRRequest &request);
                void RecognizePhilippinesSssIDOCRAsync(const Model::RecognizePhilippinesSssIDOCRRequest& request, const RecognizePhilippinesSssIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesSssIDOCROutcomeCallable RecognizePhilippinesSssIDOCRCallable(const Model::RecognizePhilippinesSssIDOCRRequest& request);

                /**
                 *This API is used to recognize a Philippine TIN ID card.
                 * @param req RecognizePhilippinesTinIDOCRRequest
                 * @return RecognizePhilippinesTinIDOCROutcome
                 */
                RecognizePhilippinesTinIDOCROutcome RecognizePhilippinesTinIDOCR(const Model::RecognizePhilippinesTinIDOCRRequest &request);
                void RecognizePhilippinesTinIDOCRAsync(const Model::RecognizePhilippinesTinIDOCRRequest& request, const RecognizePhilippinesTinIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesTinIDOCROutcomeCallable RecognizePhilippinesTinIDOCRCallable(const Model::RecognizePhilippinesTinIDOCRRequest& request);

                /**
                 *This API is used to recognize a Philippine Unified Multi-Purpose ID (UMID) card.
                 * @param req RecognizePhilippinesUMIDOCRRequest
                 * @return RecognizePhilippinesUMIDOCROutcome
                 */
                RecognizePhilippinesUMIDOCROutcome RecognizePhilippinesUMIDOCR(const Model::RecognizePhilippinesUMIDOCRRequest &request);
                void RecognizePhilippinesUMIDOCRAsync(const Model::RecognizePhilippinesUMIDOCRRequest& request, const RecognizePhilippinesUMIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesUMIDOCROutcomeCallable RecognizePhilippinesUMIDOCRCallable(const Model::RecognizePhilippinesUMIDOCRRequest& request);

                /**
                 *This API is used to recognize a Philippine voters ID card. It can recognize fields such as first name, family name, date of birth, civil status, citizenship, address, precinct, and voter's identification number (VIN).

The API request rate is limited to 20 requests/sec by default.
                 * @param req RecognizePhilippinesVoteIDOCRRequest
                 * @return RecognizePhilippinesVoteIDOCROutcome
                 */
                RecognizePhilippinesVoteIDOCROutcome RecognizePhilippinesVoteIDOCR(const Model::RecognizePhilippinesVoteIDOCRRequest &request);
                void RecognizePhilippinesVoteIDOCRAsync(const Model::RecognizePhilippinesVoteIDOCRRequest& request, const RecognizePhilippinesVoteIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesVoteIDOCROutcomeCallable RecognizePhilippinesVoteIDOCRCallable(const Model::RecognizePhilippinesVoteIDOCRRequest& request);

                /**
                 *This interface supports the identification of all fields on the front side of ID card for Singapore residents.The identification accuracy reaches more than 99%.In addition, this interface also supports a variety of value-added capabilities to meet the needs of different scenarios. Such as the cropping function of ID card photos and portrait photos, and also has 5 alarm functions.
As shown in the table below. <table style="width:650px"> <thead> <tr> <th width="150">Value-added ability</th> <th width="500">Ability items</th> </tr> </thead> <tbody> <tr> <td rowspan="9">Alarm function</td> </tr> <tr> <td>ID card copy warning</td> </tr> <tr> <td>ID card copy warning</td> </tr> <tr> <td>Alarm for occlusion in the ID card frame</td> </tr> <tr> <td>ID card reflective warning</td> </tr> <tr> <td>Blurry picture warning</td> </tr> </tbody> </table> Default interface request frequency limit: 20 times/second
                 * @param req RecognizeSingaporeIDCardOCRRequest
                 * @return RecognizeSingaporeIDCardOCROutcome
                 */
                RecognizeSingaporeIDCardOCROutcome RecognizeSingaporeIDCardOCR(const Model::RecognizeSingaporeIDCardOCRRequest &request);
                void RecognizeSingaporeIDCardOCRAsync(const Model::RecognizeSingaporeIDCardOCRRequest& request, const RecognizeSingaporeIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeSingaporeIDCardOCROutcomeCallable RecognizeSingaporeIDCardOCRCallable(const Model::RecognizeSingaporeIDCardOCRRequest& request);

                /**
                 *This API is used to recognize regular tables, borderless tables, or multi-tables in images or PDF files containing Chinese and English texts. It returns the text content of each cell, supports recognition of rotated table images, and can save the recognition results into an Excel document. It delivers higher recognition accuracy than that of table OCR v2 and applies to more scenarios. The recognition accuracy in difficult table scenarios, such as irregular tables and nested tables (borderless tables contained in bordered tables), is better than that of table OCR v2. To try it, click [here](https://intl.cloud.tencent.com/product/smart?from_cn_redirect=1-ocr).

A maximum of 2 requests can be initiated per second for this API.
                 * @param req RecognizeTableAccurateOCRRequest
                 * @return RecognizeTableAccurateOCROutcome
                 */
                RecognizeTableAccurateOCROutcome RecognizeTableAccurateOCR(const Model::RecognizeTableAccurateOCRRequest &request);
                void RecognizeTableAccurateOCRAsync(const Model::RecognizeTableAccurateOCRRequest& request, const RecognizeTableAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTableAccurateOCROutcomeCallable RecognizeTableAccurateOCRCallable(const Model::RecognizeTableAccurateOCRRequest& request);

                /**
                 *This API is used to recognize the fields on a Thai identity card, including name in Thai, name in English, address, date of birth, identification number, date of issue, and date of expiry.

A maximum of 10 requests can be initiated per second for this API.
                 * @param req RecognizeThaiIDCardOCRRequest
                 * @return RecognizeThaiIDCardOCROutcome
                 */
                RecognizeThaiIDCardOCROutcome RecognizeThaiIDCardOCR(const Model::RecognizeThaiIDCardOCRRequest &request);
                void RecognizeThaiIDCardOCRAsync(const Model::RecognizeThaiIDCardOCRRequest& request, const RecognizeThaiIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeThaiIDCardOCROutcomeCallable RecognizeThaiIDCardOCRCallable(const Model::RecognizeThaiIDCardOCRRequest& request);

                /**
                 *This API is used to recognize the fields on a Thai identity card, including name in Thai, name in English, address, date of birth, identification number, date of issue, and date of expiry.
Currently, this API is not generally available. For more information, please [contact your sales rep](https://intl.cloud.tencent.com/about/connect?from_cn_redirect=1).

A maximum of 5 requests can be initiated per second for this API.
                 * @param req RecognizeThaiPinkCardRequest
                 * @return RecognizeThaiPinkCardOutcome
                 */
                RecognizeThaiPinkCardOutcome RecognizeThaiPinkCard(const Model::RecognizeThaiPinkCardRequest &request);
                void RecognizeThaiPinkCardAsync(const Model::RecognizeThaiPinkCardRequest& request, const RecognizeThaiPinkCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeThaiPinkCardOutcomeCallable RecognizeThaiPinkCardCallable(const Model::RecognizeThaiPinkCardRequest& request);

                /**
                 *This API is used to recognize various types of seals, including invoice seals and finance seals. It is suitable for scenarios such as official document and invoice/ticket OCR.

A maximum of 5 requests can be initiated per second for this API.
                 * @param req SealOCRRequest
                 * @return SealOCROutcome
                 */
                SealOCROutcome SealOCR(const Model::SealOCRRequest &request);
                void SealOCRAsync(const Model::SealOCRRequest& request, const SealOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SealOCROutcomeCallable SealOCRCallable(const Model::SealOCRRequest& request);

                /**
                 *This API is used to recognize fields from cards, documents, bills, forms, contracts, and other structured information. It is flexible and efficient to use, without any configuration required. This API is suitable for recognizing structured information.

A maximum of 10 requests can be initiated per second for this API.
                 * @param req SmartStructuralOCRV2Request
                 * @return SmartStructuralOCRV2Outcome
                 */
                SmartStructuralOCRV2Outcome SmartStructuralOCRV2(const Model::SmartStructuralOCRV2Request &request);
                void SmartStructuralOCRV2Async(const Model::SmartStructuralOCRV2Request& request, const SmartStructuralOCRV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartStructuralOCRV2OutcomeCallable SmartStructuralOCRV2Callable(const Model::SmartStructuralOCRV2Request& request);

                /**
                 *This API is used to recognize fields from cards, documents, bills, forms, contracts, and other structured information. It is flexible and efficient to use, without any configuration required. This API is suitable for recognizing structured information.

A maximum of 10 requests can be initiated per second for this API.
                 * @param req SmartStructuralProRequest
                 * @return SmartStructuralProOutcome
                 */
                SmartStructuralProOutcome SmartStructuralPro(const Model::SmartStructuralProRequest &request);
                void SmartStructuralProAsync(const Model::SmartStructuralProRequest& request, const SmartStructuralProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartStructuralProOutcomeCallable SmartStructuralProCallable(const Model::SmartStructuralProRequest& request);

                /**
                 *This API is used to detect and recognize Chinese and English forms in images. It can return the text content of each cell and save the recognition result as Excel.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

                /**
                 *This API is used to recognize the vehicle identification number (VIN) in an image.
                 * @param req VinOCRRequest
                 * @return VinOCROutcome
                 */
                VinOCROutcome VinOCR(const Model::VinOCRRequest &request);
                void VinOCRAsync(const Model::VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VinOCROutcomeCallable VinOCRCallable(const Model::VinOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
