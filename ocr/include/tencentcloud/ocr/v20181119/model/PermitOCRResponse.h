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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_

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
                * PermitOCR response structure.
                */
                class PermitOCRResponse : public AbstractModel
                {
                public:
                    PermitOCRResponse();
                    ~PermitOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name in Chinese
                     * @return Name Name in Chinese
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
                     * 获取English name
                     * @return EnglishName English name
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取ID number
                     * @return Number ID number
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return Sex Gender
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
                     * 获取Validity period
                     * @return ValidDate Validity period
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
                     * 获取Issuing authority
                     * @return IssueAuthority Issuing authority
                     * 
                     */
                    std::string GetIssueAuthority() const;

                    /**
                     * 判断参数 IssueAuthority 是否已赋值
                     * @return IssueAuthority 是否已赋值
                     * 
                     */
                    bool IssueAuthorityHasBeenSet() const;

                    /**
                     * 获取Place of issue
                     * @return IssueAddress Place of issue
                     * 
                     */
                    std::string GetIssueAddress() const;

                    /**
                     * 判断参数 IssueAddress 是否已赋值
                     * @return IssueAddress 是否已赋值
                     * 
                     */
                    bool IssueAddressHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return Birthday Date of birth
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
                     * 获取Base64-encoded profile photo of the document holder.
                     * @return PortraitImage Base64-encoded profile photo of the document holder.
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
                     * 获取Document type, such as: Exit-Entry Permit for Travelling to and from Hong Kong and Macao, or Exit-Entry Permit for Travelling to and from Taiwan.
                     * @return Type Document type, such as: Exit-Entry Permit for Travelling to and from Hong Kong and Macao, or Exit-Entry Permit for Travelling to and from Taiwan.
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
                     * 获取Warning information for the document. This field is only valid for international site requests. Warning codes:
-9101: Incomplete card border warning
-9102: Photocopied card warning
-9103: Recaptured card warning
-9104: Photoshopped card warning
-9107: Reflective card warning
-9108: Blurry image warning
-9109: Warning capability not enabled
                     * @return WarnCardInfos Warning information for the document. This field is only valid for international site requests. Warning codes:
-9101: Incomplete card border warning
-9102: Photocopied card warning
-9103: Recaptured card warning
-9104: Photoshopped card warning
-9107: Reflective card warning
-9108: Blurry image warning
-9109: Warning capability not enabled
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * Name in Chinese
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * ID number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Validity period
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_issueAuthority;
                    bool m_issueAuthorityHasBeenSet;

                    /**
                     * Place of issue
                     */
                    std::string m_issueAddress;
                    bool m_issueAddressHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Base64-encoded profile photo of the document holder.
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * Document type, such as: Exit-Entry Permit for Travelling to and from Hong Kong and Macao, or Exit-Entry Permit for Travelling to and from Taiwan.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Warning information for the document. This field is only valid for international site requests. Warning codes:
-9101: Incomplete card border warning
-9102: Photocopied card warning
-9103: Recaptured card warning
-9104: Photoshopped card warning
-9107: Reflective card warning
-9108: Blurry image warning
-9109: Warning capability not enabled
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PERMITOCRRESPONSE_H_
