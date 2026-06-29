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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETCARDVERIFICATIONEXTERNALRESULTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETCARDVERIFICATIONEXTERNALRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralCard.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetCardVerificationExternalResult response structure.
                */
                class GetCardVerificationExternalResultResponse : public AbstractModel
                {
                public:
                    GetCardVerificationExternalResultResponse();
                    ~GetCardVerificationExternalResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification status. Valid values: 
PROCESSING
ABNORMAL
COMPLETED
                     * @return Status Verification status. Valid values: 
PROCESSING
ABNORMAL
COMPLETED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Anti-counterfeiting information. 
- ScreenshotSuspected: The image is a screenshot.
- RetakeSuspected: The image is taken from another screen.
- PaperCopy: The image is a black and white, or color photocopy.
- FakeSuspected: The image of the card, or the information on the card has been edited or altered.
- PoorImageQuality: The image is bad quality.
- InformationVerificationFailed: Information verification failed based on OCR recognition results
- TooManyCards: Multiple cards present in the frame.
- IncompleteCard: Captured document is incomplete.
- OtherWarning: Document's authenticity is not verified for various reasons.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarnInfo Anti-counterfeiting information. 
- ScreenshotSuspected: The image is a screenshot.
- RetakeSuspected: The image is taken from another screen.
- PaperCopy: The image is a black and white, or color photocopy.
- FakeSuspected: The image of the card, or the information on the card has been edited or altered.
- PoorImageQuality: The image is bad quality.
- InformationVerificationFailed: Information verification failed based on OCR recognition results
- TooManyCards: Multiple cards present in the frame.
- IncompleteCard: Captured document is incomplete.
- OtherWarning: Document's authenticity is not verified for various reasons.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetWarnInfo() const;

                    /**
                     * 判断参数 WarnInfo 是否已赋值
                     * @return WarnInfo 是否已赋值
                     * 
                     */
                    bool WarnInfoHasBeenSet() const;

                    /**
                     * 获取Country or region of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Country or region of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * @deprecated
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Front-side document recognition results. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfo Front-side document recognition results. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    GeneralCard GetCardInfo() const;

                    /**
                     * 判断参数 CardInfo 是否已赋值
                     * @return CardInfo 是否已赋值
                     * 
                     */
                    bool CardInfoHasBeenSet() const;

                    /**
                     * 获取Back-side document recognition results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackCardInfo Back-side document recognition results.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    GeneralCard GetBackCardInfo() const;

                    /**
                     * 判断参数 BackCardInfo 是否已赋值
                     * @return BackCardInfo 是否已赋值
                     * 
                     */
                    bool BackCardInfoHasBeenSet() const;

                    /**
                     * 获取The token passed in the input parameters.
                     * @return CardVerificationToken The token passed in the input parameters.
                     * 
                     */
                    std::string GetCardVerificationToken() const;

                    /**
                     * 判断参数 CardVerificationToken 是否已赋值
                     * @return CardVerificationToken 是否已赋值
                     * 
                     */
                    bool CardVerificationTokenHasBeenSet() const;

                    /**
                     * 获取Base64-encoded head image from the document. If ReturnHeadImage was set to false or not provided in the request, this field returns an empty string. If ReturnHeadImage was set to true and this field returns an empty string, indicating a failure to extract the head image extraction failed. Please check the input document photo.
                     * @return HeadImageBase64 Base64-encoded head image from the document. If ReturnHeadImage was set to false or not provided in the request, this field returns an empty string. If ReturnHeadImage was set to true and this field returns an empty string, indicating a failure to extract the head image extraction failed. Please check the input document photo.
                     * 
                     */
                    std::string GetHeadImageBase64() const;

                    /**
                     * 判断参数 HeadImageBase64 是否已赋值
                     * @return HeadImageBase64 是否已赋值
                     * 
                     */
                    bool HeadImageBase64HasBeenSet() const;

                private:

                    /**
                     * Verification status. Valid values: 
PROCESSING
ABNORMAL
COMPLETED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Anti-counterfeiting information. 
- ScreenshotSuspected: The image is a screenshot.
- RetakeSuspected: The image is taken from another screen.
- PaperCopy: The image is a black and white, or color photocopy.
- FakeSuspected: The image of the card, or the information on the card has been edited or altered.
- PoorImageQuality: The image is bad quality.
- InformationVerificationFailed: Information verification failed based on OCR recognition results
- TooManyCards: Multiple cards present in the frame.
- IncompleteCard: Captured document is incomplete.
- OtherWarning: Document's authenticity is not verified for various reasons.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_warnInfo;
                    bool m_warnInfoHasBeenSet;

                    /**
                     * Country or region of the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Front-side document recognition results. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GeneralCard m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * Back-side document recognition results.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GeneralCard m_backCardInfo;
                    bool m_backCardInfoHasBeenSet;

                    /**
                     * The token passed in the input parameters.
                     */
                    std::string m_cardVerificationToken;
                    bool m_cardVerificationTokenHasBeenSet;

                    /**
                     * Base64-encoded head image from the document. If ReturnHeadImage was set to false or not provided in the request, this field returns an empty string. If ReturnHeadImage was set to true and this field returns an empty string, indicating a failure to extract the head image extraction failed. Please check the input document photo.
                     */
                    std::string m_headImageBase64;
                    bool m_headImageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETCARDVERIFICATIONEXTERNALRESULTRESPONSE_H_
