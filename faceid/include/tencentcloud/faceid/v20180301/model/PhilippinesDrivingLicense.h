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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESDRIVINGLICENSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESDRIVINGLICENSE_H_

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
                * Philippines driving license
                */
                class PhilippinesDrivingLicense : public AbstractModel
                {
                public:
                    PhilippinesDrivingLicense();
                    ~PhilippinesDrivingLicense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Full Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Last name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Last name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取Middle name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiddleName Middle name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _middleName Middle name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiddleName(const std::string& _middleName);

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nationality Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

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
                     * @return Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNo License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNo() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNo License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseNo(const std::string& _licenseNo);

                    /**
                     * 判断参数 LicenseNo 是否已赋值
                     * @return LicenseNo 是否已赋值
                     * 
                     */
                    bool LicenseNoHasBeenSet() const;

                    /**
                     * 获取Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiresDate Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpiresDate() const;

                    /**
                     * 设置Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expiresDate Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpiresDate(const std::string& _expiresDate);

                    /**
                     * 判断参数 ExpiresDate 是否已赋值
                     * @return ExpiresDate 是否已赋值
                     * 
                     */
                    bool ExpiresDateHasBeenSet() const;

                    /**
                     * 获取Agency code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AgencyCode Agency code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAgencyCode() const;

                    /**
                     * 设置Agency code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _agencyCode Agency code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAgencyCode(const std::string& _agencyCode);

                    /**
                     * 判断参数 AgencyCode 是否已赋值
                     * @return AgencyCode 是否已赋值
                     * 
                     */
                    bool AgencyCodeHasBeenSet() const;

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

                private:

                    /**
                     * Full Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Last name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Middle name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

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
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNo;
                    bool m_licenseNoHasBeenSet;

                    /**
                     * Date of expiry
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiresDate;
                    bool m_expiresDateHasBeenSet;

                    /**
                     * Agency code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_agencyCode;
                    bool m_agencyCodeHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESDRIVINGLICENSE_H_
