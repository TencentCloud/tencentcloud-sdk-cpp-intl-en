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
                     * 获取Chinese name
Note: This field may return null, indicating that no valid values can be obtained.

                     * @return FullName Chinese name
Note: This field may return null, indicating that no valid values can be obtained.

                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Chinese name
Note: This field may return null, indicating that no valid values can be obtained.

                     * @param _fullName Chinese name
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
                     * 获取Sex
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Sex
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Sex
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Sex
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
                     * 获取Nation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nation Nation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置Nation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nation Nation
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
                     * 获取Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address
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
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.

                     * @return LicenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.

                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.

                     * @param _licenseNumber License number
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormattedAddress Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formattedAddress Address
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

                private:

                    /**
                     * Chinese name
Note: This field may return null, indicating that no valid values can be obtained.

                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Sex
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Nation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.

                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MAINLANDIDCARD_H_
