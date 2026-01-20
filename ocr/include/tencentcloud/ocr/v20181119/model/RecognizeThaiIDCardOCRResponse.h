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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeThaiIDCardOCR response structure.
                */
                class RecognizeThaiIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeThaiIDCardOCRResponse();
                    ~RecognizeThaiIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID card number
                     * @return ID ID card number
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Name in Thai
                     * @return ThaiName Name in Thai
                     * 
                     */
                    std::string GetThaiName() const;

                    /**
                     * 判断参数 ThaiName 是否已赋值
                     * @return ThaiName 是否已赋值
                     * 
                     */
                    bool ThaiNameHasBeenSet() const;

                    /**
                     * 获取Name in English
                     * @return EnFirstName Name in English
                     * 
                     */
                    std::string GetEnFirstName() const;

                    /**
                     * 判断参数 EnFirstName 是否已赋值
                     * @return EnFirstName 是否已赋值
                     * 
                     */
                    bool EnFirstNameHasBeenSet() const;

                    /**
                     * 获取Name in English
                     * @return EnLastName Name in English
                     * 
                     */
                    std::string GetEnLastName() const;

                    /**
                     * 判断参数 EnLastName 是否已赋值
                     * @return EnLastName 是否已赋值
                     * 
                     */
                    bool EnLastNameHasBeenSet() const;

                    /**
                     * 获取Date of issue in Thai
                     * @return IssueDate Date of issue in Thai
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取Expiration date in Thai
                     * @return ExpirationDate Expiration date in Thai
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取Date of issue in English
                     * @return EnIssueDate Date of issue in English
                     * 
                     */
                    std::string GetEnIssueDate() const;

                    /**
                     * 判断参数 EnIssueDate 是否已赋值
                     * @return EnIssueDate 是否已赋值
                     * 
                     */
                    bool EnIssueDateHasBeenSet() const;

                    /**
                     * 获取Expiration date in English
                     * @return EnExpirationDate Expiration date in English
                     * 
                     */
                    std::string GetEnExpirationDate() const;

                    /**
                     * 判断参数 EnExpirationDate 是否已赋值
                     * @return EnExpirationDate 是否已赋值
                     * 
                     */
                    bool EnExpirationDateHasBeenSet() const;

                    /**
                     * 获取Date of birth in Thai
                     * @return Birthday Date of birth in Thai
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Date of birth in English
                     * @return EnBirthday Date of birth in English
                     * 
                     */
                    std::string GetEnBirthday() const;

                    /**
                     * 判断参数 EnBirthday 是否已赋值
                     * @return EnBirthday 是否已赋值
                     * 
                     */
                    bool EnBirthdayHasBeenSet() const;

                    /**
                     * 获取Religion
                     * @return Religion Religion
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 判断参数 Religion 是否已赋值
                     * @return Religion 是否已赋值
                     * 
                     */
                    bool ReligionHasBeenSet() const;

                    /**
                     * 获取Serial number
                     * @return SerialNumber Serial number
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取LaserID in the back of the card.
                     * @return LaserID LaserID in the back of the card.
                     * 
                     */
                    std::string GetLaserID() const;

                    /**
                     * 判断参数 LaserID 是否已赋值
                     * @return LaserID 是否已赋值
                     * 
                     */
                    bool LaserIDHasBeenSet() const;

                    /**
                     * 获取Identity photo
                     * @return PortraitImage Identity photo
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * @return WarnCardInfos Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                    /**
                     * 获取This field is deprecated and will always return "1". Usage is not recommended.
                     * @return AdvancedInfo This field is deprecated and will always return "1". Usage is not recommended.
                     * @deprecated
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * @deprecated
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取The number of cards detected in the input image provided via ImageBase64 parameter.(Currently supported only in ap-bangkok region)
                     * @return CardCount The number of cards detected in the input image provided via ImageBase64 parameter.(Currently supported only in ap-bangkok region)
                     * 
                     */
                    int64_t GetCardCount() const;

                    /**
                     * 判断参数 CardCount 是否已赋值
                     * @return CardCount 是否已赋值
                     * 
                     */
                    bool CardCountHasBeenSet() const;

                    /**
                     * 获取The card information field complete or not
true: complete; false: incomplete
                     * @return IsComplete The card information field complete or not
true: complete; false: incomplete
                     * 
                     */
                    bool GetIsComplete() const;

                    /**
                     * 判断参数 IsComplete 是否已赋值
                     * @return IsComplete 是否已赋值
                     * 
                     */
                    bool IsCompleteHasBeenSet() const;

                private:

                    /**
                     * ID card number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Name in Thai
                     */
                    std::string m_thaiName;
                    bool m_thaiNameHasBeenSet;

                    /**
                     * Name in English
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * Name in English
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                    /**
                     * Date of issue in Thai
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * Expiration date in Thai
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * Date of issue in English
                     */
                    std::string m_enIssueDate;
                    bool m_enIssueDateHasBeenSet;

                    /**
                     * Expiration date in English
                     */
                    std::string m_enExpirationDate;
                    bool m_enExpirationDateHasBeenSet;

                    /**
                     * Date of birth in Thai
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Date of birth in English
                     */
                    std::string m_enBirthday;
                    bool m_enBirthdayHasBeenSet;

                    /**
                     * Religion
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * Serial number
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * LaserID in the back of the card.
                     */
                    std::string m_laserID;
                    bool m_laserIDHasBeenSet;

                    /**
                     * Identity photo
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * This field is deprecated and will always return "1". Usage is not recommended.
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * The number of cards detected in the input image provided via ImageBase64 parameter.(Currently supported only in ap-bangkok region)
                     */
                    int64_t m_cardCount;
                    bool m_cardCountHasBeenSet;

                    /**
                     * The card information field complete or not
true: complete; false: incomplete
                     */
                    bool m_isComplete;
                    bool m_isCompleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
