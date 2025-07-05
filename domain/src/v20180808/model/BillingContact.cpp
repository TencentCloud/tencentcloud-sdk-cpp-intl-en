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

#include <tencentcloud/domain/v20180808/model/BillingContact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BillingContact::BillingContact() :
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

CoreInternalOutcome BillingContact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AddressLine") && !value["AddressLine"].IsNull())
    {
        if (!value["AddressLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.AddressLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressLine = string(value["AddressLine"].GetString());
        m_addressLineHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("JobTitle") && !value["JobTitle"].IsNull())
    {
        if (!value["JobTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.JobTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobTitle = string(value["JobTitle"].GetString());
        m_jobTitleHasBeenSet = true;
    }

    if (value.HasMember("AddressLineTwo") && !value["AddressLineTwo"].IsNull())
    {
        if (!value["AddressLineTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.AddressLineTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressLineTwo = string(value["AddressLineTwo"].GetString());
        m_addressLineTwoHasBeenSet = true;
    }

    if (value.HasMember("Fax") && !value["Fax"].IsNull())
    {
        if (!value["Fax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingContact.Fax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fax = string(value["Fax"].GetString());
        m_faxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillingContact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string BillingContact::GetFirstName() const
{
    return m_firstName;
}

void BillingContact::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool BillingContact::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string BillingContact::GetLastName() const
{
    return m_lastName;
}

void BillingContact::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool BillingContact::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string BillingContact::GetCountry() const
{
    return m_country;
}

void BillingContact::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BillingContact::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string BillingContact::GetProvince() const
{
    return m_province;
}

void BillingContact::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool BillingContact::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string BillingContact::GetCity() const
{
    return m_city;
}

void BillingContact::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool BillingContact::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string BillingContact::GetAddressLine() const
{
    return m_addressLine;
}

void BillingContact::SetAddressLine(const string& _addressLine)
{
    m_addressLine = _addressLine;
    m_addressLineHasBeenSet = true;
}

bool BillingContact::AddressLineHasBeenSet() const
{
    return m_addressLineHasBeenSet;
}

string BillingContact::GetZipCode() const
{
    return m_zipCode;
}

void BillingContact::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool BillingContact::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

string BillingContact::GetEmail() const
{
    return m_email;
}

void BillingContact::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool BillingContact::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string BillingContact::GetPhone() const
{
    return m_phone;
}

void BillingContact::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool BillingContact::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string BillingContact::GetCompanyName() const
{
    return m_companyName;
}

void BillingContact::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool BillingContact::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string BillingContact::GetJobTitle() const
{
    return m_jobTitle;
}

void BillingContact::SetJobTitle(const string& _jobTitle)
{
    m_jobTitle = _jobTitle;
    m_jobTitleHasBeenSet = true;
}

bool BillingContact::JobTitleHasBeenSet() const
{
    return m_jobTitleHasBeenSet;
}

string BillingContact::GetAddressLineTwo() const
{
    return m_addressLineTwo;
}

void BillingContact::SetAddressLineTwo(const string& _addressLineTwo)
{
    m_addressLineTwo = _addressLineTwo;
    m_addressLineTwoHasBeenSet = true;
}

bool BillingContact::AddressLineTwoHasBeenSet() const
{
    return m_addressLineTwoHasBeenSet;
}

string BillingContact::GetFax() const
{
    return m_fax;
}

void BillingContact::SetFax(const string& _fax)
{
    m_fax = _fax;
    m_faxHasBeenSet = true;
}

bool BillingContact::FaxHasBeenSet() const
{
    return m_faxHasBeenSet;
}

