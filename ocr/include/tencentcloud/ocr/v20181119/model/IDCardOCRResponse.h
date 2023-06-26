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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_

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
                * IDCardOCR response structure.
                */
                class IDCardOCRResponse : public AbstractModel
                {
                public:
                    IDCardOCRResponse();
                    ~IDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name (profile photo side)
                     * @return Name Name (profile photo side)
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
                     * 获取Gender (profile photo side)
                     * @return Sex Gender (profile photo side)
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
                     * 获取Ethnicity (profile photo side)
                     * @return Nation Ethnicity (profile photo side)
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取Date of birth (profile photo side)
                     * @return Birth Date of birth (profile photo side)
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取Address (profile photo side)
                     * @return Address Address (profile photo side)
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
                     * 获取ID number (profile photo side)
                     * @return IdNum ID number (profile photo side)
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取Issuing authority (national emblem side)
                     * @return Authority Issuing authority (national emblem side)
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取Validity period (national emblem side)
                     * @return ValidDate Validity period (national emblem side)
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取Extended information, which will be returned only when requested. For the input parameters, please see example 3 and example 4.
`IdCard`: Base64-encoded content of the cropped ID card photo, which will be returned if `Config.CropIdCard` is set to `true`.
`Portrait`: Base64-encoded content of the ID photo on the card, which will be returned if `Config.CropPortrait` is set to `true`.

`Quality`: Image quality score, which will be returned if `Config.Quality` is set to `true`. Value range: 0–100. The lower the score, the blurrier the image. The recommended threshold is ≥ 50.
`BorderCodeValue`: Warning threshold score for incomplete ID card borders, which will be returned if `Config.BorderCheckWarn` is set to `true`. Value range: 0–100. The lower the score, the lower the probability of border occlusion. The recommended threshold value is ≤ 50.

`WarnInfos`: Warning information. Warning codes and descriptions are as follows:
-9100: The ID card validity period is invalid.
-9101: The ID card borders are incomplete.
-9102: The ID card image is photocopied.
-9103: The ID card image is spoofed. 
-9104: The ID card is a temporary one. 
-9105: The ID card frame is occluded.
-9106: The ID card image is photoshopped.
-9107: The ID card image has glares.
                     * @return AdvancedInfo Extended information, which will be returned only when requested. For the input parameters, please see example 3 and example 4.
`IdCard`: Base64-encoded content of the cropped ID card photo, which will be returned if `Config.CropIdCard` is set to `true`.
`Portrait`: Base64-encoded content of the ID photo on the card, which will be returned if `Config.CropPortrait` is set to `true`.

`Quality`: Image quality score, which will be returned if `Config.Quality` is set to `true`. Value range: 0–100. The lower the score, the blurrier the image. The recommended threshold is ≥ 50.
`BorderCodeValue`: Warning threshold score for incomplete ID card borders, which will be returned if `Config.BorderCheckWarn` is set to `true`. Value range: 0–100. The lower the score, the lower the probability of border occlusion. The recommended threshold value is ≤ 50.

`WarnInfos`: Warning information. Warning codes and descriptions are as follows:
-9100: The ID card validity period is invalid.
-9101: The ID card borders are incomplete.
-9102: The ID card image is photocopied.
-9103: The ID card image is spoofed. 
-9104: The ID card is a temporary one. 
-9105: The ID card frame is occluded.
-9106: The ID card image is photoshopped.
-9107: The ID card image has glares.
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * Name (profile photo side)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Gender (profile photo side)
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Ethnicity (profile photo side)
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Date of birth (profile photo side)
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * Address (profile photo side)
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * ID number (profile photo side)
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * Issuing authority (national emblem side)
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * Validity period (national emblem side)
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * Extended information, which will be returned only when requested. For the input parameters, please see example 3 and example 4.
`IdCard`: Base64-encoded content of the cropped ID card photo, which will be returned if `Config.CropIdCard` is set to `true`.
`Portrait`: Base64-encoded content of the ID photo on the card, which will be returned if `Config.CropPortrait` is set to `true`.

`Quality`: Image quality score, which will be returned if `Config.Quality` is set to `true`. Value range: 0–100. The lower the score, the blurrier the image. The recommended threshold is ≥ 50.
`BorderCodeValue`: Warning threshold score for incomplete ID card borders, which will be returned if `Config.BorderCheckWarn` is set to `true`. Value range: 0–100. The lower the score, the lower the probability of border occlusion. The recommended threshold value is ≤ 50.

`WarnInfos`: Warning information. Warning codes and descriptions are as follows:
-9100: The ID card validity period is invalid.
-9101: The ID card borders are incomplete.
-9102: The ID card image is photocopied.
-9103: The ID card image is spoofed. 
-9104: The ID card is a temporary one. 
-9105: The ID card frame is occluded.
-9106: The ID card image is photoshopped.
-9107: The ID card image has glares.
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_
