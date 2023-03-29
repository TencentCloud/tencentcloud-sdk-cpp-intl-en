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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_TECHNICALCONTACT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_TECHNICALCONTACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The technical contact.
                */
                class TechnicalContact : public AbstractModel
                {
                public:
                    TechnicalContact();
                    ~TechnicalContact() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The first name.
                     * @return FirstName The first name.
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置The first name.
                     * @param FirstName The first name.
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取The last name.
                     * @return LastName The last name.
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置The last name.
                     * @param LastName The last name.
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取The country or region name, such as `CN`.
                     * @return Country The country or region name, such as `CN`.
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置The country or region name, such as `CN`.
                     * @param Country The country or region name, such as `CN`.
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取The province or state name.
                     * @return Province The province or state name.
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置The province or state name.
                     * @param Province The province or state name.
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取The city name.
                     * @return City The city name.
                     */
                    std::string GetCity() const;

                    /**
                     * 设置The city name.
                     * @param City The city name.
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取The address line 1.
                     * @return AddressLine The address line 1.
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置The address line 1.
                     * @param AddressLine The address line 1.
                     */
                    void SetAddressLine(const std::string& _addressLine);

                    /**
                     * 判断参数 AddressLine 是否已赋值
                     * @return AddressLine 是否已赋值
                     */
                    bool AddressLineHasBeenSet() const;

                    /**
                     * 获取The zip code.
                     * @return ZipCode The zip code.
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置The zip code.
                     * @param ZipCode The zip code.
                     */
                    void SetZipCode(const std::string& _zipCode);

                    /**
                     * 判断参数 ZipCode 是否已赋值
                     * @return ZipCode 是否已赋值
                     */
                    bool ZipCodeHasBeenSet() const;

                    /**
                     * 获取The email address.
                     * @return Email The email address.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置The email address.
                     * @param Email The email address.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取The mobile number, such as `+86.13600000000`.
                     * @return Phone The mobile number, such as `+86.13600000000`.
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置The mobile number, such as `+86.13600000000`.
                     * @param Phone The mobile number, such as `+86.13600000000`.
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取The company or organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompanyName The company or organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置The company or organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CompanyName The company or organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取The job title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobTitle The job title.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJobTitle() const;

                    /**
                     * 设置The job title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param JobTitle The job title.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetJobTitle(const std::string& _jobTitle);

                    /**
                     * 判断参数 JobTitle 是否已赋值
                     * @return JobTitle 是否已赋值
                     */
                    bool JobTitleHasBeenSet() const;

                    /**
                     * 获取The address line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddressLineTwo The address line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddressLineTwo() const;

                    /**
                     * 设置The address line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AddressLineTwo The address line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddressLineTwo(const std::string& _addressLineTwo);

                    /**
                     * 判断参数 AddressLineTwo 是否已赋值
                     * @return AddressLineTwo 是否已赋值
                     */
                    bool AddressLineTwoHasBeenSet() const;

                    /**
                     * 获取The fax number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fax The fax number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFax() const;

                    /**
                     * 设置The fax number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Fax The fax number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFax(const std::string& _fax);

                    /**
                     * 判断参数 Fax 是否已赋值
                     * @return Fax 是否已赋值
                     */
                    bool FaxHasBeenSet() const;

                private:

                    /**
                     * The first name.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * The last name.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * The country or region name, such as `CN`.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * The province or state name.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * The city name.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * The address line 1.
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                    /**
                     * The zip code.
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                    /**
                     * The email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * The mobile number, such as `+86.13600000000`.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * The company or organization name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * The job title.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobTitle;
                    bool m_jobTitleHasBeenSet;

                    /**
                     * The address line 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressLineTwo;
                    bool m_addressLineTwoHasBeenSet;

                    /**
                     * The fax number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fax;
                    bool m_faxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_TECHNICALCONTACT_H_
