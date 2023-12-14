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

#include <tencentcloud/faceid/v20180301/model/ThailandIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ThailandIDCard::ThailandIDCard() :
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_dateOfExpiryHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false),
    m_issuedCountryHasBeenSet(false)
{
}

CoreInternalOutcome ThailandIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("DateOfBirth") && !value["DateOfBirth"].IsNull())
    {
        if (!value["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(value["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (value.HasMember("DateOfExpiry") && !value["DateOfExpiry"].IsNull())
    {
        if (!value["DateOfExpiry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.DateOfExpiry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiry = string(value["DateOfExpiry"].GetString());
        m_dateOfExpiryHasBeenSet = true;
    }

    if (value.HasMember("DateOfIssue") && !value["DateOfIssue"].IsNull())
    {
        if (!value["DateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.DateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssue = string(value["DateOfIssue"].GetString());
        m_dateOfIssueHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThailandIDCard.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThailandIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpiryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiry.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

}


string ThailandIDCard::GetLastName() const
{
    return m_lastName;
}

void ThailandIDCard::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool ThailandIDCard::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string ThailandIDCard::GetFirstName() const
{
    return m_firstName;
}

void ThailandIDCard::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool ThailandIDCard::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string ThailandIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void ThailandIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool ThailandIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string ThailandIDCard::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

void ThailandIDCard::SetDateOfBirth(const string& _dateOfBirth)
{
    m_dateOfBirth = _dateOfBirth;
    m_dateOfBirthHasBeenSet = true;
}

bool ThailandIDCard::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string ThailandIDCard::GetDateOfExpiry() const
{
    return m_dateOfExpiry;
}

void ThailandIDCard::SetDateOfExpiry(const string& _dateOfExpiry)
{
    m_dateOfExpiry = _dateOfExpiry;
    m_dateOfExpiryHasBeenSet = true;
}

bool ThailandIDCard::DateOfExpiryHasBeenSet() const
{
    return m_dateOfExpiryHasBeenSet;
}

string ThailandIDCard::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

void ThailandIDCard::SetDateOfIssue(const string& _dateOfIssue)
{
    m_dateOfIssue = _dateOfIssue;
    m_dateOfIssueHasBeenSet = true;
}

bool ThailandIDCard::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

string ThailandIDCard::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void ThailandIDCard::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool ThailandIDCard::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

