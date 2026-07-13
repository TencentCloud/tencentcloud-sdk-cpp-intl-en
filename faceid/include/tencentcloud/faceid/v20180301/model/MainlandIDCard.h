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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MAINLANDIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MAINLANDIDCARD_H_

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
                * Mainland (China) ID Card OCR
                */
                class MainlandIDCard : public AbstractModel
                {
                public:
                    MainlandIDCard();
                    ~MainlandIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName <p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置<p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName <p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取<p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex <p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置<p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex <p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nation <p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置<p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nation <p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取<p>Birthday</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday <p>Birthday</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置<p>Birthday</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday <p>Birthday</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取<p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * @deprecated
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber <p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置<p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber <p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseNumber(const std::string& _licenseNumber);

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取<p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormattedAddress <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置<p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formattedAddress <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormattedAddress(const std::string& _formattedAddress);

                    /**
                     * 判断参数 FormattedAddress 是否已赋值
                     * @return FormattedAddress 是否已赋值
                     * 
                     */
                    bool FormattedAddressHasBeenSet() const;

                    /**
                     * 获取<p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Authority <p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 设置<p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authority <p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthority(const std::string& _authority);

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取<p>Validity period</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidDate <p>Validity period</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 设置<p>Validity period</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validDate <p>Validity period</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValidDate(const std::string& _validDate);

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                private:

                    /**
                     * <p>name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * <p>Gender</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>Ethnicity</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>Birthday</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Identity card number</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * <p>Address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * <p>Issuing authority</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * <p>Validity period</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MAINLANDIDCARD_H_
