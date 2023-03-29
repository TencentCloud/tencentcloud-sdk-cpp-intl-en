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

#include <tencentcloud/domain/v20180808/model/TechnicalContact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

TechnicalContact::TechnicalContact() :
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_addressLineHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_jobTitleHasBeenSet(false),
    m_addressLineTwoHasBeenSet(false),
    m_faxHasBeenSet(false)
{
}

CoreInternalOutcome TechnicalContact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AddressLine") && !value["AddressLine"].IsNull())
    {
        if (!value["AddressLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.AddressLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressLine = string(value["AddressLine"].GetString());
        m_addressLineHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("JobTitle") && !value["JobTitle"].IsNull())
    {
        if (!value["JobTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.JobTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobTitle = string(value["JobTitle"].GetString());
        m_jobTitleHasBeenSet = true;
    }

    if (value.HasMember("AddressLineTwo") && !value["AddressLineTwo"].IsNull())
    {
        if (!value["AddressLineTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.AddressLineTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressLineTwo = string(value["AddressLineTwo"].GetString());
        m_addressLineTwoHasBeenSet = true;
    }

    if (value.HasMember("Fax") && !value["Fax"].IsNull())
    {
        if (!value["Fax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TechnicalContact.Fax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fax = string(value["Fax"].GetString());
        m_faxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TechnicalContact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_addressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressLine.c_str(), allocator).Move(), allocator);
    }

    if (m_zipCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipCode.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_addressLineTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressLineTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressLineTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_faxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fax.c_str(), allocator).Move(), allocator);
    }

}


string TechnicalContact::GetFirstName() const
{
    return m_firstName;
}

void TechnicalContact::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool TechnicalContact::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string TechnicalContact::GetLastName() const
{
    return m_lastName;
}

void TechnicalContact::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool TechnicalContact::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string TechnicalContact::GetCountry() const
{
    return m_country;
}

void TechnicalContact::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool TechnicalContact::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string TechnicalContact::GetProvince() const
{
    return m_province;
}

void TechnicalContact::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool TechnicalContact::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string TechnicalContact::GetCity() const
{
    return m_city;
}

void TechnicalContact::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool TechnicalContact::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string TechnicalContact::GetAddressLine() const
{
    return m_addressLine;
}

void TechnicalContact::SetAddressLine(const string& _addressLine)
{
    m_addressLine = _addressLine;
    m_addressLineHasBeenSet = true;
}

bool TechnicalContact::AddressLineHasBeenSet() const
{
    return m_addressLineHasBeenSet;
}

string TechnicalContact::GetZipCode() const
{
    return m_zipCode;
}

void TechnicalContact::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool TechnicalContact::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

string TechnicalContact::GetEmail() const
{
    return m_email;
}

void TechnicalContact::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool TechnicalContact::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string TechnicalContact::GetPhone() const
{
    return m_phone;
}

void TechnicalContact::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool TechnicalContact::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string TechnicalContact::GetCompanyName() const
{
    return m_companyName;
}

void TechnicalContact::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool TechnicalContact::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string TechnicalContact::GetJobTitle() const
{
    return m_jobTitle;
}

void TechnicalContact::SetJobTitle(const string& _jobTitle)
{
    m_jobTitle = _jobTitle;
    m_jobTitleHasBeenSet = true;
}

bool TechnicalContact::JobTitleHasBeenSet() const
{
    return m_jobTitleHasBeenSet;
}

string TechnicalContact::GetAddressLineTwo() const
{
    return m_addressLineTwo;
}

void TechnicalContact::SetAddressLineTwo(const string& _addressLineTwo)
{
    m_addressLineTwo = _addressLineTwo;
    m_addressLineTwoHasBeenSet = true;
}

bool TechnicalContact::AddressLineTwoHasBeenSet() const
{
    return m_addressLineTwoHasBeenSet;
}

string TechnicalContact::GetFax() const
{
    return m_fax;
}

void TechnicalContact::SetFax(const string& _fax)
{
    m_fax = _fax;
    m_faxHasBeenSet = true;
}

bool TechnicalContact::FaxHasBeenSet() const
{
    return m_faxHasBeenSet;
}

