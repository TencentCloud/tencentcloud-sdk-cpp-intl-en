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

#include <tencentcloud/faceid/v20180301/model/Person.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

Person::Person() :
    m_fullNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_identityNumberHasBeenSet(false),
    m_dateOfBirthHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

CoreInternalOutcome Person::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("MiddleName") && !value["MiddleName"].IsNull())
    {
        if (!value["MiddleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.MiddleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_middleName = string(value["MiddleName"].GetString());
        m_middleNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityNumber") && !value["IdentityNumber"].IsNull())
    {
        if (!value["IdentityNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.IdentityNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityNumber = string(value["IdentityNumber"].GetString());
        m_identityNumberHasBeenSet = true;
    }

    if (value.HasMember("DateOfBirth") && !value["DateOfBirth"].IsNull())
    {
        if (!value["DateOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.DateOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfBirth = string(value["DateOfBirth"].GetString());
        m_dateOfBirthHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Person::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_middleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_middleName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfBirth.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

}


string Person::GetFullName() const
{
    return m_fullName;
}

void Person::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool Person::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string Person::GetLastName() const
{
    return m_lastName;
}

void Person::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool Person::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string Person::GetFirstName() const
{
    return m_firstName;
}

void Person::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool Person::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string Person::GetMiddleName() const
{
    return m_middleName;
}

void Person::SetMiddleName(const string& _middleName)
{
    m_middleName = _middleName;
    m_middleNameHasBeenSet = true;
}

bool Person::MiddleNameHasBeenSet() const
{
    return m_middleNameHasBeenSet;
}

string Person::GetIdentityNumber() const
{
    return m_identityNumber;
}

void Person::SetIdentityNumber(const string& _identityNumber)
{
    m_identityNumber = _identityNumber;
    m_identityNumberHasBeenSet = true;
}

bool Person::IdentityNumberHasBeenSet() const
{
    return m_identityNumberHasBeenSet;
}

string Person::GetDateOfBirth() const
{
    return m_dateOfBirth;
}

void Person::SetDateOfBirth(const string& _dateOfBirth)
{
    m_dateOfBirth = _dateOfBirth;
    m_dateOfBirthHasBeenSet = true;
}

bool Person::DateOfBirthHasBeenSet() const
{
    return m_dateOfBirthHasBeenSet;
}

string Person::GetGender() const
{
    return m_gender;
}

void Person::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool Person::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string Person::GetAddress() const
{
    return m_address;
}

void Person::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Person::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string Person::GetNationality() const
{
    return m_nationality;
}

void Person::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool Person::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string Person::GetCountry() const
{
    return m_country;
}

void Person::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Person::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

