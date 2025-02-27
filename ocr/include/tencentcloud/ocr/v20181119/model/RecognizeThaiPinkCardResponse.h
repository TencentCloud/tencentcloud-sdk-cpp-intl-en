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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIPINKCARDRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIPINKCARDRESPONSE_H_

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
                * RecognizeThaiPinkCard response structure.
                */
                class RecognizeThaiPinkCardResponse : public AbstractModel
                {
                public:
                    RecognizeThaiPinkCardResponse();
                    ~RecognizeThaiPinkCardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Country
                     * @return Country Country
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取ID number
                     * @return IDNumber ID number
                     * 
                     */
                    std::string GetIDNumber() const;

                    /**
                     * 判断参数 IDNumber 是否已赋值
                     * @return IDNumber 是否已赋值
                     * 
                     */
                    bool IDNumberHasBeenSet() const;

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
                     * @return EnName Name in English
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Surname in Thai
                     * @return ThaiSurName Surname in Thai
                     * 
                     */
                    std::string GetThaiSurName() const;

                    /**
                     * 判断参数 ThaiSurName 是否已赋值
                     * @return ThaiSurName 是否已赋值
                     * 
                     */
                    bool ThaiSurNameHasBeenSet() const;

                    /**
                     * 获取Date of birth in Thai
                     * @return ThaiDOB Date of birth in Thai
                     * 
                     */
                    std::string GetThaiDOB() const;

                    /**
                     * 判断参数 ThaiDOB 是否已赋值
                     * @return ThaiDOB 是否已赋值
                     * 
                     */
                    bool ThaiDOBHasBeenSet() const;

                    /**
                     * 获取Date of birth in English
                     * @return EnDOB Date of birth in English
                     * 
                     */
                    std::string GetEnDOB() const;

                    /**
                     * 判断参数 EnDOB 是否已赋值
                     * @return EnDOB 是否已赋值
                     * 
                     */
                    bool EnDOBHasBeenSet() const;

                    /**
                     * 获取Photo number
                     * @return PhotoNumber Photo number
                     * 
                     */
                    std::string GetPhotoNumber() const;

                    /**
                     * 判断参数 PhotoNumber 是否已赋值
                     * @return PhotoNumber 是否已赋值
                     * 
                     */
                    bool PhotoNumberHasBeenSet() const;

                    /**
                     * 获取Address in Thai
                     * @return ThaiAddress Address in Thai
                     * 
                     */
                    std::string GetThaiAddress() const;

                    /**
                     * 判断参数 ThaiAddress 是否已赋值
                     * @return ThaiAddress 是否已赋值
                     * 
                     */
                    bool ThaiAddressHasBeenSet() const;

                    /**
                     * 获取Date of issue in Thai
                     * @return ThaiDateOfIssue Date of issue in Thai
                     * 
                     */
                    std::string GetThaiDateOfIssue() const;

                    /**
                     * 判断参数 ThaiDateOfIssue 是否已赋值
                     * @return ThaiDateOfIssue 是否已赋值
                     * 
                     */
                    bool ThaiDateOfIssueHasBeenSet() const;

                    /**
                     * 获取Date of issue in English
                     * @return DateOfIssue Date of issue in English
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 判断参数 DateOfIssue 是否已赋值
                     * @return DateOfIssue 是否已赋值
                     * 
                     */
                    bool DateOfIssueHasBeenSet() const;

                    /**
                     * 获取Expiration date in Thai
                     * @return ThaiDateOfExpiry Expiration date in Thai
                     * 
                     */
                    std::string GetThaiDateOfExpiry() const;

                    /**
                     * 判断参数 ThaiDateOfExpiry 是否已赋值
                     * @return ThaiDateOfExpiry 是否已赋值
                     * 
                     */
                    bool ThaiDateOfExpiryHasBeenSet() const;

                    /**
                     * 获取Expiration date in English
                     * @return DateOfExpiry Expiration date in English
                     * 
                     */
                    std::string GetDateOfExpiry() const;

                    /**
                     * 判断参数 DateOfExpiry 是否已赋值
                     * @return DateOfExpiry 是否已赋值
                     * 
                     */
                    bool DateOfExpiryHasBeenSet() const;

                    /**
                     * 获取Issuing agency
                     * @return IssuingAgency Issuing agency
                     * 
                     */
                    std::string GetIssuingAgency() const;

                    /**
                     * 判断参数 IssuingAgency 是否已赋值
                     * @return IssuingAgency 是否已赋值
                     * 
                     */
                    bool IssuingAgencyHasBeenSet() const;

                    /**
                     * 获取Ref number
                     * @return RefNumber Ref number
                     * 
                     */
                    std::string GetRefNumber() const;

                    /**
                     * 判断参数 RefNumber 是否已赋值
                     * @return RefNumber 是否已赋值
                     * 
                     */
                    bool RefNumberHasBeenSet() const;

                    /**
                     * 获取Field confidence:
 { "ID": { "Confidence": 0.9999 }, "ThaiName": { "Confidence": 0.9996 } }
                     * @return AdvancedInfo Field confidence:
 { "ID": { "Confidence": 0.9999 }, "ThaiName": { "Confidence": 0.9996 } }
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

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

                private:

                    /**
                     * Country
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * ID number
                     */
                    std::string m_iDNumber;
                    bool m_iDNumberHasBeenSet;

                    /**
                     * Name in Thai
                     */
                    std::string m_thaiName;
                    bool m_thaiNameHasBeenSet;

                    /**
                     * Name in English
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Surname in Thai
                     */
                    std::string m_thaiSurName;
                    bool m_thaiSurNameHasBeenSet;

                    /**
                     * Date of birth in Thai
                     */
                    std::string m_thaiDOB;
                    bool m_thaiDOBHasBeenSet;

                    /**
                     * Date of birth in English
                     */
                    std::string m_enDOB;
                    bool m_enDOBHasBeenSet;

                    /**
                     * Photo number
                     */
                    std::string m_photoNumber;
                    bool m_photoNumberHasBeenSet;

                    /**
                     * Address in Thai
                     */
                    std::string m_thaiAddress;
                    bool m_thaiAddressHasBeenSet;

                    /**
                     * Date of issue in Thai
                     */
                    std::string m_thaiDateOfIssue;
                    bool m_thaiDateOfIssueHasBeenSet;

                    /**
                     * Date of issue in English
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * Expiration date in Thai
                     */
                    std::string m_thaiDateOfExpiry;
                    bool m_thaiDateOfExpiryHasBeenSet;

                    /**
                     * Expiration date in English
                     */
                    std::string m_dateOfExpiry;
                    bool m_dateOfExpiryHasBeenSet;

                    /**
                     * Issuing agency
                     */
                    std::string m_issuingAgency;
                    bool m_issuingAgencyHasBeenSet;

                    /**
                     * Ref number
                     */
                    std::string m_refNumber;
                    bool m_refNumberHasBeenSet;

                    /**
                     * Field confidence:
 { "ID": { "Confidence": 0.9999 }, "ThaiName": { "Confidence": 0.9996 } }
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * Identity photo
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIPINKCARDRESPONSE_H_
