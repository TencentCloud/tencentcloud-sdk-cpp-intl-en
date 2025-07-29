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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PassportRecognizeInfos.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MLIDPassportOCR response structure.
                */
                class MLIDPassportOCRResponse : public AbstractModel
                {
                public:
                    MLIDPassportOCRResponse();
                    ~MLIDPassportOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Passport ID
                     * @return ID Passport ID
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
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return DateOfBirth Date of birth
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取Gender (F: female, M: male)
                     * @return Sex Gender (F: female, M: male)
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Expiration date
                     * @return DateOfExpiration Expiration date
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取Issuing country
                     * @return IssuingCountry Issuing country
                     * 
                     */
                    std::string GetIssuingCountry() const;

                    /**
                     * 判断参数 IssuingCountry 是否已赋值
                     * @return IssuingCountry 是否已赋值
                     * 
                     */
                    bool IssuingCountryHasBeenSet() const;

                    /**
                     * 获取Country/region code
                     * @return Nationality Country/region code
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
                     * 获取This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @return Warn This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @deprecated
                     */
                    std::vector<int64_t> GetWarn() const;

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     * @deprecated
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取Identity photo
                     * @return Image Identity photo
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

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
                     * 获取The first row of the machine-readable zone (MRZ) at the bottom
                     * @return CodeSet The first row of the machine-readable zone (MRZ) at the bottom
                     * 
                     */
                    std::string GetCodeSet() const;

                    /**
                     * 判断参数 CodeSet 是否已赋值
                     * @return CodeSet 是否已赋值
                     * 
                     */
                    bool CodeSetHasBeenSet() const;

                    /**
                     * 获取The second row of the MRZ at the bottom
                     * @return CodeCrc The second row of the MRZ at the bottom
                     * 
                     */
                    std::string GetCodeCrc() const;

                    /**
                     * 判断参数 CodeCrc 是否已赋值
                     * @return CodeCrc 是否已赋值
                     * 
                     */
                    bool CodeCrcHasBeenSet() const;

                    /**
                     * 获取The surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Surname The surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取The given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GivenName The given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取Type (in Machine Readable Zone)
                     * @return Type Type (in Machine Readable Zone)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Document content in Information Zone
                     * @return PassportRecognizeInfos Document content in Information Zone
                     * 
                     */
                    PassportRecognizeInfos GetPassportRecognizeInfos() const;

                    /**
                     * 判断参数 PassportRecognizeInfos 是否已赋值
                     * @return PassportRecognizeInfos 是否已赋值
                     * 
                     */
                    bool PassportRecognizeInfosHasBeenSet() const;

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
                     * 获取The number of cards detected in the input image.(Currently supported only in ap-bangkok region)
                     * @return CardCount The number of cards detected in the input image.(Currently supported only in ap-bangkok region)
                     * 
                     */
                    int64_t GetCardCount() const;

                    /**
                     * 判断参数 CardCount 是否已赋值
                     * @return CardCount 是否已赋值
                     * 
                     */
                    bool CardCountHasBeenSet() const;

                private:

                    /**
                     * Passport ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Gender (F: female, M: male)
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Expiration date
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Issuing country
                     */
                    std::string m_issuingCountry;
                    bool m_issuingCountryHasBeenSet;

                    /**
                     * Country/region code
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * This field is deprecated and will always return an empty array. Usage is not recommended.
                     */
                    std::vector<int64_t> m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * Identity photo
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * This field is deprecated and will always return "1". Usage is not recommended.
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * The first row of the machine-readable zone (MRZ) at the bottom
                     */
                    std::string m_codeSet;
                    bool m_codeSetHasBeenSet;

                    /**
                     * The second row of the MRZ at the bottom
                     */
                    std::string m_codeCrc;
                    bool m_codeCrcHasBeenSet;

                    /**
                     * The surname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * The given name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Type (in Machine Readable Zone)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Document content in Information Zone
                     */
                    PassportRecognizeInfos m_passportRecognizeInfos;
                    bool m_passportRecognizeInfosHasBeenSet;

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
                     * The number of cards detected in the input image.(Currently supported only in ap-bangkok region)
                     */
                    int64_t m_cardCount;
                    bool m_cardCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDPASSPORTOCRRESPONSE_H_
