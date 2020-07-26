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
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>


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

                typedef Outcome<Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;



                /**
                 *This API is used to detect and recognize key fields such as the card number, bank information, and expiration date on mainstream bank cards in Mainland China.
                 * @param req BankCardOCRRequest
                 * @return BankCardOCROutcome
                 */
                BankCardOCROutcome BankCardOCR(const Model::BankCardOCRRequest &request);
                void BankCardOCRAsync(const Model::BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardOCROutcomeCallable BankCardOCRCallable(const Model::BankCardOCRRequest& request);

                /**
                 *This API is used to detect and recognize characters in an image in the following 19 languages: Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, and Thai. Mixed characters in English and each supported language can be recognized together.

It can recognize printed text in paper documents, online images, ads, signboards, menus, video titles, profile photos, etc.

Product strengths: it can automatically recognize the text language, return the text box coordinate information, and automatically rotate tilted text to the upright direction.

The differences between different editions of general print recognition are as detailed below:
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:150px"></th>
          <th style="width:200px">**(Recommended)** General Print Recognition</th>
          <th ><a href="https://cloud.tencent.com/document/product/866/34937">**(Recommended)** General Print Recognition (High-Precision)</a></th>
          <th><a href="https://cloud.tencent.com/document/product/866/37831">General Print Recognition (Simplified)</a></th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td>Use case</td>
          <td>It is suitable for recognition of printed text in all general scenarios</td>
          <td>It is suitable for content with high recognition difficulty such as a large number of characters, long strings of digits, small characters, blurry characters, and tilted text</td>
          <td>It is suitable for fast text recognition, which compromises the accuracy and recall rate but is more cost-effective</td>
        </tr>
        <tr>
          <td>Recognition accuracy rate</td>
          <td>96%</td>
          <td>99%</td>
          <td>91%</td>
        </tr>
        <tr>
          <td>Price</td>
          <td>Medium</td>
          <td>High</td>
          <td>Low</td>
        </tr>
        <tr>
          <td>Supported languages</td>
          <td>Chinese, English, Chinese-English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, and Thai</td>
          <td>Chinese, English, and Chinese-English</td>
          <td>Chinese, English, and Chinese-English</td>
        </tr>
        <tr>
          <td>Automatic language detection</td>
          <td>Supported</td>
          <td>Supported</td>
          <td>Supported</td>
        </tr>
        <tr>
          <td>Return of text line coordinates</td>
          <td>Supported</td>
          <td>Supported</td>
          <td>Supported</td>
        </tr>
        <tr>
          <td>Automatic rotation correction</td>
          <td>Rotation recognition is supported, and the angle information can be returned</td>
          <td>Rotation recognition is supported, but no angle information can be returned</td>
          <td>Rotation recognition is supported, and the angle information can be returned</td>
        </tr>
      </tbody>
    </table>
                 * @param req GeneralBasicOCRRequest
                 * @return GeneralBasicOCROutcome
                 */
                GeneralBasicOCROutcome GeneralBasicOCR(const Model::GeneralBasicOCRRequest &request);
                void GeneralBasicOCRAsync(const Model::GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralBasicOCROutcomeCallable GeneralBasicOCRCallable(const Model::GeneralBasicOCRRequest& request);

                /**
                 *This API is used to recognize a Malaysian identity card. Recognizable fields include identity card number, name, gender, and address. It has the features of cropping identity photos and alarming for photographed or photocopied documents.
This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://cloud.tencent.com/about/connect).

                 * @param req MLIDCardOCRRequest
                 * @return MLIDCardOCROutcome
                 */
                MLIDCardOCROutcome MLIDCardOCR(const Model::MLIDCardOCRRequest &request);
                void MLIDCardOCRAsync(const Model::MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDCardOCROutcomeCallable MLIDCardOCRCallable(const Model::MLIDCardOCRRequest& request);

                /**
                 *This API is used to recognize a passport issued outside Mainland China. Recognizable fields include passport ID, name, date of birth, gender, expiration date, issuing country/region, and nationality. It has the features of cropping identity photos and alarming for spoofed or photocopied documents.
This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://cloud.tencent.com/about/connect).
                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
