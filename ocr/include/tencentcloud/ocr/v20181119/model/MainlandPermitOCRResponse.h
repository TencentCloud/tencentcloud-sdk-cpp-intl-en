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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_

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
                * MainlandPermitOCR response structure.
                */
                class MainlandPermitOCRResponse : public AbstractModel
                {
                public:
                    MainlandPermitOCRResponse();
                    ~MainlandPermitOCRResponse() = default;
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
                     * 获取Name in English
                     * @return EnglishName Name in English
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
                     * 获取Number of issues
                     * @return IssueNumber Number of issues
                     * 
                     */
                    std::string GetIssueNumber() const;

                    /**
                     * 判断参数 IssueNumber 是否已赋值
                     * @return IssueNumber 是否已赋值
                     * 
                     */
                    bool IssueNumberHasBeenSet() const;

                    /**
                     * 获取Document type
                     * @return Type Document type
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
                     * 获取Base64-encoded profile photo, which is returned only when `RetProfile` is set to `True`
                     * @return Profile Base64-encoded profile photo, which is returned only when `RetProfile` is set to `True`
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * Name in Chinese
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Name in English
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_issueAuthority;
                    bool m_issueAuthorityHasBeenSet;

                    /**
                     * Validity period
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * ID number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Place of issue
                     */
                    std::string m_issueAddress;
                    bool m_issueAddressHasBeenSet;

                    /**
                     * Number of issues
                     */
                    std::string m_issueNumber;
                    bool m_issueNumberHasBeenSet;

                    /**
                     * Document type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Base64-encoded profile photo, which is returned only when `RetProfile` is set to `True`
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDPERMITOCRRESPONSE_H_
