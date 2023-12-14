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

#include <tencentcloud/faceid/v20180301/model/IndonesiaDrivingLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

IndonesiaDrivingLicense::IndonesiaDrivingLicense() :
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_issuedCountryHasBeenSet(false)
{
}

CoreInternalOutcome IndonesiaDrivingLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaDrivingLicense.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndonesiaDrivingLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

}


string IndonesiaDrivingLicense::GetLastName() const
{
    return m_lastName;
}

void IndonesiaDrivingLicense::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool IndonesiaDrivingLicense::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string IndonesiaDrivingLicense::GetFirstName() const
{
    return m_firstName;
}

void IndonesiaDrivingLicense::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool IndonesiaDrivingLicense::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string IndonesiaDrivingLicense::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void IndonesiaDrivingLicense::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool IndonesiaDrivingLicense::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string IndonesiaDrivingLicense::GetBirthday() const
{
    return m_birthday;
}

void IndonesiaDrivingLicense::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool IndonesiaDrivingLicense::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string IndonesiaDrivingLicense::GetAddress() const
{
    return m_address;
}

void IndonesiaDrivingLicense::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool IndonesiaDrivingLicense::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string IndonesiaDrivingLicense::GetExpirationDate() const
{
    return m_expirationDate;
}

void IndonesiaDrivingLicense::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool IndonesiaDrivingLicense::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string IndonesiaDrivingLicense::GetIssuedDate() const
{
    return m_issuedDate;
}

void IndonesiaDrivingLicense::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool IndonesiaDrivingLicense::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string IndonesiaDrivingLicense::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void IndonesiaDrivingLicense::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool IndonesiaDrivingLicense::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

