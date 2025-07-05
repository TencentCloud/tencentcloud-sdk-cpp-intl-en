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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_

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
                * Malaysia ID card.
                */
                class NormalMLIDCard : public AbstractModel
                {
                public:
                    NormalMLIDCard();
                    ~NormalMLIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Full Name
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
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender
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

                    /**
                     * 获取Lisence type
MyKad ID card
MyPR Permanent resident ID card
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD Labor ID card
MyKid Juvenile ID card
Example: MyKad
                     * @return Type Lisence type
MyKad ID card
MyPR Permanent resident ID card
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD Labor ID card
MyKid Juvenile ID card
Example: MyKad
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Lisence type
MyKad ID card
MyPR Permanent resident ID card
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD Labor ID card
MyKid Juvenile ID card
Example: MyKad
                     * @param _type Lisence type
MyKad ID card
MyPR Permanent resident ID card
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD Labor ID card
MyKid Juvenile ID card
Example: MyKad
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Birthday (Currently, this filed only supports IKAD labor ID card and MyKad ID card)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday (Currently, this filed only supports IKAD labor ID card and MyKad ID card)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday (Currently, this filed only supports IKAD labor ID card and MyKad ID card)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday (Currently, this filed only supports IKAD labor ID card and MyKad ID card)
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

                private:

                    /**
                     * Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Lisence type
MyKad ID card
MyPR Permanent resident ID card
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD Labor ID card
MyKid Juvenile ID card
Example: MyKad
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Birthday (Currently, this filed only supports IKAD labor ID card and MyKad ID card)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_
