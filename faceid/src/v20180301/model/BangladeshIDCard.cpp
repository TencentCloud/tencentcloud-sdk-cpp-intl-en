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

#include <tencentcloud/faceid/v20180301/model/BangladeshIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

BangladeshIDCard::BangladeshIDCard() :
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_issuedCountryHasBeenSet(false)
{
}

CoreInternalOutcome BangladeshIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BangladeshIDCard.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BangladeshIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_age.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

}


string BangladeshIDCard::GetLastName() const
{
    return m_lastName;
}

void BangladeshIDCard::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool BangladeshIDCard::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string BangladeshIDCard::GetFirstName() const
{
    return m_firstName;
}

void BangladeshIDCard::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool BangladeshIDCard::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string BangladeshIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void BangladeshIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool BangladeshIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string BangladeshIDCard::GetAge() const
{
    return m_age;
}

void BangladeshIDCard::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool BangladeshIDCard::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string BangladeshIDCard::GetBirthday() const
{
    return m_birthday;
}

void BangladeshIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool BangladeshIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string BangladeshIDCard::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void BangladeshIDCard::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool BangladeshIDCard::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

