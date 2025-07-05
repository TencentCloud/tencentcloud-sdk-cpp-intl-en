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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLCONTACTINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLCONTACTINFO_H_

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
                * The contact information.
                */
                class IntlContactInfo : public AbstractModel
                {
                public:
                    IntlContactInfo();
                    ~IntlContactInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The city name.
                     * @return City The city name.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置The city name.
                     * @param _city The city name.
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取The country or region name.
                     * @return Country The country or region name.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置The country or region name.
                     * @param _country The country or region name.
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取The email address.
                     * @return Email The email address.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置The email address.
                     * @param _email The email address.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取The domain registrant.
                     * @return OrganizationName The domain registrant.
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置The domain registrant.
                     * @param _organizationName The domain registrant.
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取The province or state name.
                     * @return Province The province or state name.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置The province or state name.
                     * @param _province The province or state name.
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取The name of the registrant.
                     * @return RegistrantName The name of the registrant.
                     * 
                     */
                    std::string GetRegistrantName() const;

                    /**
                     * 设置The name of the registrant.
                     * @param _registrantName The name of the registrant.
                     * 
                     */
                    void SetRegistrantName(const std::string& _registrantName);

                    /**
                     * 判断参数 RegistrantName 是否已赋值
                     * @return RegistrantName 是否已赋值
                     * 
                     */
                    bool RegistrantNameHasBeenSet() const;

                    /**
                     * 获取The registrant type. Valid values: `I` (individual), `E` (organization).
                     * @return RegistrantType The registrant type. Valid values: `I` (individual), `E` (organization).
                     * 
                     */
                    std::string GetRegistrantType() const;

                    /**
                     * 设置The registrant type. Valid values: `I` (individual), `E` (organization).
                     * @param _registrantType The registrant type. Valid values: `I` (individual), `E` (organization).
                     * 
                     */
                    void SetRegistrantType(const std::string& _registrantType);

                    /**
                     * 判断参数 RegistrantType 是否已赋值
                     * @return RegistrantType 是否已赋值
                     * 
                     */
                    bool RegistrantTypeHasBeenSet() const;

                    /**
                     * 获取The detailed address.
                     * @return Street The detailed address.
                     * 
                     */
                    std::string GetStreet() const;

                    /**
                     * 设置The detailed address.
                     * @param _street The detailed address.
                     * 
                     */
                    void SetStreet(const std::string& _street);

                    /**
                     * 判断参数 Street 是否已赋值
                     * @return Street 是否已赋值
                     * 
                     */
                    bool StreetHasBeenSet() const;

                    /**
                     * 获取The mobile number.
                     * @return Telephone The mobile number.
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置The mobile number.
                     * @param _telephone The mobile number.
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取The zip code.
                     * @return ZipCode The zip code.
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置The zip code.
                     * @param _zipCode The zip code.
                     * 
                     */
                    void SetZipCode(const std::string& _zipCode);

                    /**
                     * 判断参数 ZipCode 是否已赋值
                     * @return ZipCode 是否已赋值
                     * 
                     */
                    bool ZipCodeHasBeenSet() const;

                    /**
                     * 获取The first name.
                     * @return FirstName The first name.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置The first name.
                     * @param _firstName The first name.
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
                     * 获取The last name.
                     * @return LastName The last name.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置The last name.
                     * @param _lastName The last name.
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
                     * 获取The company name.
                     * @return CompanyName The company name.
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置The company name.
                     * @param _companyName The company name.
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                private:

                    /**
                     * The city name.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * The country or region name.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * The email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * The domain registrant.
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * The province or state name.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * The name of the registrant.
                     */
                    std::string m_registrantName;
                    bool m_registrantNameHasBeenSet;

                    /**
                     * The registrant type. Valid values: `I` (individual), `E` (organization).
                     */
                    std::string m_registrantType;
                    bool m_registrantTypeHasBeenSet;

                    /**
                     * The detailed address.
                     */
                    std::string m_street;
                    bool m_streetHasBeenSet;

                    /**
                     * The mobile number.
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * The zip code.
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

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
                     * The company name.
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLCONTACTINFO_H_
