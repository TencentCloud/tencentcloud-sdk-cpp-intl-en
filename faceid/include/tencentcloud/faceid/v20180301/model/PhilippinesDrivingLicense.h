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
                     * 获取Last name

                     * @return LastName Last name

                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name

                     * @param _lastName Last name

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
                     * @return FirstName First name
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name
                     * @param _firstName First name
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
                     * @return MiddleName Middle name
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle name
                     * @param _middleName Middle name
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
                     * @return Nationality Nationality
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Nationality
                     * @param _nationality Nationality
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
                     * 获取Address.
                     * @return Address Address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address.
                     * @param _address Address.
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
                     * 获取ID number
                     * @return LicenseNo ID number
                     * 
                     */
                    std::string GetLicenseNo() const;

                    /**
                     * 设置ID number
                     * @param _licenseNo ID number
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
                     * 获取Validity period.
                     * @return ExpiresDate Validity period.
                     * 
                     */
                    std::string GetExpiresDate() const;

                    /**
                     * 设置Validity period.
                     * @param _expiresDate Validity period.
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
                     * 获取Organization code
                     * @return AgencyCode Organization code
                     * 
                     */
                    std::string GetAgencyCode() const;

                    /**
                     * 设置Organization code
                     * @param _agencyCode Organization code
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
                     * Last name

                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Middle name
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * ID number
                     */
                    std::string m_licenseNo;
                    bool m_licenseNoHasBeenSet;

                    /**
                     * Validity period.
                     */
                    std::string m_expiresDate;
                    bool m_expiresDateHasBeenSet;

                    /**
                     * Organization code
                     */
                    std::string m_agencyCode;
                    bool m_agencyCodeHasBeenSet;

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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESDRIVINGLICENSE_H_
