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

#ifndef TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
#define TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Request.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Response.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRResponse.h>


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

                typedef Outcome<Core::Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::HKIDCardOCRResponse> HKIDCardOCROutcome;
                typedef std::future<HKIDCardOCROutcome> HKIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HKIDCardOCRRequest&, HKIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HKIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeIndonesiaIDCardOCRResponse> RecognizeIndonesiaIDCardOCROutcome;
                typedef std::future<RecognizeIndonesiaIDCardOCROutcome> RecognizeIndonesiaIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeIndonesiaIDCardOCRRequest&, RecognizeIndonesiaIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeIndonesiaIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesDrivingLicenseOCRResponse> RecognizePhilippinesDrivingLicenseOCROutcome;
                typedef std::future<RecognizePhilippinesDrivingLicenseOCROutcome> RecognizePhilippinesDrivingLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesDrivingLicenseOCRRequest&, RecognizePhilippinesDrivingLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesDrivingLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesSssIDOCRResponse> RecognizePhilippinesSssIDOCROutcome;
                typedef std::future<RecognizePhilippinesSssIDOCROutcome> RecognizePhilippinesSssIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesSssIDOCRRequest&, RecognizePhilippinesSssIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesSssIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesTinIDOCRResponse> RecognizePhilippinesTinIDOCROutcome;
                typedef std::future<RecognizePhilippinesTinIDOCROutcome> RecognizePhilippinesTinIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesTinIDOCRRequest&, RecognizePhilippinesTinIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesTinIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizePhilippinesVoteIDOCRResponse> RecognizePhilippinesVoteIDOCROutcome;
                typedef std::future<RecognizePhilippinesVoteIDOCROutcome> RecognizePhilippinesVoteIDOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizePhilippinesVoteIDOCRRequest&, RecognizePhilippinesVoteIDOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePhilippinesVoteIDOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralOCRV2Response> SmartStructuralOCRV2Outcome;
                typedef std::future<SmartStructuralOCRV2Outcome> SmartStructuralOCRV2OutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralOCRV2Request&, SmartStructuralOCRV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralOCRV2AsyncHandler;
                typedef Outcome<Core::Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;



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
                 *This API is used to recognize key fields on the photo side of a Hong Kong (China) identity card, including name in Chinese, name in English, telecode for name, date of birth, gender, document symbol, date of the first issue, date of the last receipt, identity card number, and permanent residency attribute. It can check for card authenticity and crop the identity photo.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).

                 * @param req HKIDCardOCRRequest
                 * @return HKIDCardOCROutcome
                 */
                HKIDCardOCROutcome HKIDCardOCR(const Model::HKIDCardOCRRequest &request);
                void HKIDCardOCRAsync(const Model::HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HKIDCardOCROutcomeCallable HKIDCardOCRCallable(const Model::HKIDCardOCRRequest& request);

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

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

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
                 *This API is used to recognize a Philippine voters ID card. It can recognize fields such as first name, family name, date of birth, civil status, citizenship, address, precinct, and voter's identification number (VIN).

The API request rate is limited to 20 requests/sec by default.
                 * @param req RecognizePhilippinesVoteIDOCRRequest
                 * @return RecognizePhilippinesVoteIDOCROutcome
                 */
                RecognizePhilippinesVoteIDOCROutcome RecognizePhilippinesVoteIDOCR(const Model::RecognizePhilippinesVoteIDOCRRequest &request);
                void RecognizePhilippinesVoteIDOCRAsync(const Model::RecognizePhilippinesVoteIDOCRRequest& request, const RecognizePhilippinesVoteIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizePhilippinesVoteIDOCROutcomeCallable RecognizePhilippinesVoteIDOCRCallable(const Model::RecognizePhilippinesVoteIDOCRRequest& request);

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
                 *This API is used to detect and recognize Chinese and English forms in images. It can return the text content of each cell and save the recognition result as Excel.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
