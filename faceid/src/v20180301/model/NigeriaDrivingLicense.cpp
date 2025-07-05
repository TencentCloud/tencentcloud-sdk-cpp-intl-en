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

#include <tencentcloud/faceid/v20180301/model/NigeriaDrivingLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

NigeriaDrivingLicense::NigeriaDrivingLicense() :
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_issuedCountryHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_sexHasBeenSet(false)
{
}

CoreInternalOutcome NigeriaDrivingLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NigeriaDrivingLicense.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NigeriaDrivingLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

}


string NigeriaDrivingLicense::GetLastName() const
{
    return m_lastName;
}

void NigeriaDrivingLicense::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool NigeriaDrivingLicense::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string NigeriaDrivingLicense::GetFirstName() const
{
    return m_firstName;
}

void NigeriaDrivingLicense::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool NigeriaDrivingLicense::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string NigeriaDrivingLicense::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void NigeriaDrivingLicense::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool NigeriaDrivingLicense::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string NigeriaDrivingLicense::GetAge() const
{
    return m_age;
}

void NigeriaDrivingLicense::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool NigeriaDrivingLicense::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string NigeriaDrivingLicense::GetBirthday() const
{
    return m_birthday;
}

void NigeriaDrivingLicense::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool NigeriaDrivingLicense::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string NigeriaDrivingLicense::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void NigeriaDrivingLicense::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool NigeriaDrivingLicense::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

string NigeriaDrivingLicense::GetExpirationDate() const
{
    return m_expirationDate;
}

void NigeriaDrivingLicense::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool NigeriaDrivingLicense::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string NigeriaDrivingLicense::GetIssuedDate() const
{
    return m_issuedDate;
}

void NigeriaDrivingLicense::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool NigeriaDrivingLicense::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string NigeriaDrivingLicense::GetSex() const
{
    return m_sex;
}

void NigeriaDrivingLicense::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool NigeriaDrivingLicense::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

