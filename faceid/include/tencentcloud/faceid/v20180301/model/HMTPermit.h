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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_HMTPERMIT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_HMTPERMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Hong Kong, Macau and Taiwan Travel Permit
                */
                class HMTPermit : public AbstractModel
                {
                public:
                    HMTPermit();
                    ~HMTPermit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

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
                     * 设置English name
                     * @param _englishName English name
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

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
                     * 设置ID number
                     * @param _number ID number
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Sex
                     * @return Sex Sex
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Sex
                     * @param _sex Sex
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Validity period.
                     * @return ValidDate Validity period.
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 设置Validity period.
                     * @param _validDate Validity period.
                     * 
                     */
                    void SetValidDate(const std::string& _validDate);

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
                     * 设置Issuing authority
                     * @param _issueAuthority Issuing authority
                     * 
                     */
                    void SetIssueAuthority(const std::string& _issueAuthority);

                    /**
                     * 判断参数 IssueAuthority 是否已赋值
                     * @return IssueAuthority 是否已赋值
                     * 
                     */
                    bool IssueAuthorityHasBeenSet() const;

                    /**
                     * 获取Issuing place
                     * @return IssueAddress Issuing place
                     * 
                     */
                    std::string GetIssueAddress() const;

                    /**
                     * 设置Issuing place
                     * @param _issueAddress Issuing place
                     * 
                     */
                    void SetIssueAddress(const std::string& _issueAddress);

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
                     * 设置Date of birth
                     * @param _birthday Date of birth
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * Name
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
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Validity period.
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_issueAuthority;
                    bool m_issueAuthorityHasBeenSet;

                    /**
                     * Issuing place
                     */
                    std::string m_issueAddress;
                    bool m_issueAddressHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_HMTPERMIT_H_
