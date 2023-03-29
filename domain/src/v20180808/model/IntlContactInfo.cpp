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

#include <tencentcloud/domain/v20180808/model/IntlContactInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

IntlContactInfo::IntlContactInfo() :
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_registrantNameHasBeenSet(false),
    m_registrantTypeHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_companyNameHasBeenSet(false)
{
}

CoreInternalOutcome IntlContactInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("RegistrantName") && !value["RegistrantName"].IsNull())
    {
        if (!value["RegistrantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.RegistrantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantName = string(value["RegistrantName"].GetString());
        m_registrantNameHasBeenSet = true;
    }

    if (value.HasMember("RegistrantType") && !value["RegistrantType"].IsNull())
    {
        if (!value["RegistrantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.RegistrantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantType = string(value["RegistrantType"].GetString());
        m_registrantTypeHasBeenSet = true;
    }

    if (value.HasMember("Street") && !value["Street"].IsNull())
    {
        if (!value["Street"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.Street` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_street = string(value["Street"].GetString());
        m_streetHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlContactInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntlContactInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantName.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantType.c_str(), allocator).Move(), allocator);
    }

    if (m_streetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Street";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_street.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_zipCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipCode.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

}


string IntlContactInfo::GetCity() const
{
    return m_city;
}

void IntlContactInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool IntlContactInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string IntlContactInfo::GetCountry() const
{
    return m_country;
}

void IntlContactInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool IntlContactInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string IntlContactInfo::GetEmail() const
{
    return m_email;
}

void IntlContactInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool IntlContactInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string IntlContactInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void IntlContactInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool IntlContactInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string IntlContactInfo::GetProvince() const
{
    return m_province;
}

void IntlContactInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool IntlContactInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string IntlContactInfo::GetRegistrantName() const
{
    return m_registrantName;
}

void IntlContactInfo::SetRegistrantName(const string& _registrantName)
{
    m_registrantName = _registrantName;
    m_registrantNameHasBeenSet = true;
}

bool IntlContactInfo::RegistrantNameHasBeenSet() const
{
    return m_registrantNameHasBeenSet;
}

string IntlContactInfo::GetRegistrantType() const
{
    return m_registrantType;
}

void IntlContactInfo::SetRegistrantType(const string& _registrantType)
{
    m_registrantType = _registrantType;
    m_registrantTypeHasBeenSet = true;
}

bool IntlContactInfo::RegistrantTypeHasBeenSet() const
{
    return m_registrantTypeHasBeenSet;
}

string IntlContactInfo::GetStreet() const
{
    return m_street;
}

void IntlContactInfo::SetStreet(const string& _street)
{
    m_street = _street;
    m_streetHasBeenSet = true;
}

bool IntlContactInfo::StreetHasBeenSet() const
{
    return m_streetHasBeenSet;
}

string IntlContactInfo::GetTelephone() const
{
    return m_telephone;
}

void IntlContactInfo::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool IntlContactInfo::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string IntlContactInfo::GetZipCode() const
{
    return m_zipCode;
}

void IntlContactInfo::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool IntlContactInfo::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

string IntlContactInfo::GetFirstName() const
{
    return m_firstName;
}

void IntlContactInfo::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool IntlContactInfo::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string IntlContactInfo::GetLastName() const
{
    return m_lastName;
}

void IntlContactInfo::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool IntlContactInfo::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string IntlContactInfo::GetCompanyName() const
{
    return m_companyName;
}

void IntlContactInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool IntlContactInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

