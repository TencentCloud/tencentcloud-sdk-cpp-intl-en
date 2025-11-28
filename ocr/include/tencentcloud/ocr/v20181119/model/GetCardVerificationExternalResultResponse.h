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
                     * 获取Indicates the status. valid values: 
PASSED
PROCESSING
WARNING
                     * @return Status Indicates the status. valid values: 
PASSED
PROCESSING
WARNING
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
                     * 获取Indicates the anti-counterfeiting information.
-ScreenshotSuspected: The image is a screenshot.
-RetakeSuspected: The image is taken from another screen.
-PaperCopy: The image is a black and white, or color photocopy.
-FakeSuspected: The image of the card, or the information on the card has been edited or altered.
-OtherWarning: Document's authenticity is not verified for various reasons.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarnInfo Indicates the anti-counterfeiting information.
-ScreenshotSuspected: The image is a screenshot.
-RetakeSuspected: The image is taken from another screen.
-PaperCopy: The image is a black and white, or color photocopy.
-FakeSuspected: The image of the card, or the information on the card has been edited or altered.
-OtherWarning: Document's authenticity is not verified for various reasons.
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
                     * 获取Country Code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Country Code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Recognition result of the text in the id photo.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfo Recognition result of the text in the id photo.	
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
                     * 获取Specifies the token in the request parameters.
                     * @return CardVerificationToken Specifies the token in the request parameters.
                     * 
                     */
                    std::string GetCardVerificationToken() const;

                    /**
                     * 判断参数 CardVerificationToken 是否已赋值
                     * @return CardVerificationToken 是否已赋值
                     * 
                     */
                    bool CardVerificationTokenHasBeenSet() const;

                private:

                    /**
                     * Indicates the status. valid values: 
PASSED
PROCESSING
WARNING
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates the anti-counterfeiting information.
-ScreenshotSuspected: The image is a screenshot.
-RetakeSuspected: The image is taken from another screen.
-PaperCopy: The image is a black and white, or color photocopy.
-FakeSuspected: The image of the card, or the information on the card has been edited or altered.
-OtherWarning: Document's authenticity is not verified for various reasons.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_warnInfo;
                    bool m_warnInfoHasBeenSet;

                    /**
                     * Country Code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Recognition result of the text in the id photo.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GeneralCard m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * Specifies the token in the request parameters.
                     */
                    std::string m_cardVerificationToken;
                    bool m_cardVerificationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETCARDVERIFICATIONEXTERNALRESULTRESPONSE_H_
