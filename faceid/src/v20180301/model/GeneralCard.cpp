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

#include <tencentcloud/faceid/v20180301/model/GeneralCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GeneralCard::GeneralCard() :
    m_licenseNumberHasBeenSet(false),
    m_personalNumberHasBeenSet(false),
    m_passportCodeFirstHasBeenSet(false),
    m_passportCodeSecondHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_dueDateHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_issuedAuthorityHasBeenSet(false),
    m_issuedCountryHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_birthPlaceHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_registrationNumberHasBeenSet(false)
{
}

CoreInternalOutcome GeneralCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("PersonalNumber") && !value["PersonalNumber"].IsNull())
    {
        if (!value["PersonalNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.PersonalNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personalNumber = string(value["PersonalNumber"].GetString());
        m_personalNumberHasBeenSet = true;
    }

    if (value.HasMember("PassportCodeFirst") && !value["PassportCodeFirst"].IsNull())
    {
        if (!value["PassportCodeFirst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.PassportCodeFirst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportCodeFirst = string(value["PassportCodeFirst"].GetString());
        m_passportCodeFirstHasBeenSet = true;
    }

    if (value.HasMember("PassportCodeSecond") && !value["PassportCodeSecond"].IsNull())
    {
        if (!value["PassportCodeSecond"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.PassportCodeSecond` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportCodeSecond = string(value["PassportCodeSecond"].GetString());
        m_passportCodeSecondHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("DueDate") && !value["DueDate"].IsNull())
    {
        if (!value["DueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.DueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dueDate = string(value["DueDate"].GetString());
        m_dueDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("IssuedAuthority") && !value["IssuedAuthority"].IsNull())
    {
        if (!value["IssuedAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.IssuedAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedAuthority = string(value["IssuedAuthority"].GetString());
        m_issuedAuthorityHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("BirthPlace") && !value["BirthPlace"].IsNull())
    {
        if (!value["BirthPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.BirthPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthPlace = string(value["BirthPlace"].GetString());
        m_birthPlaceHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("RegistrationNumber") && !value["RegistrationNumber"].IsNull())
    {
        if (!value["RegistrationNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCard.RegistrationNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationNumber = string(value["RegistrationNumber"].GetString());
        m_registrationNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_personalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personalNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_passportCodeFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassportCodeFirst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passportCodeFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_passportCodeSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassportCodeSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passportCodeSecond.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_dueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
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

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
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

    if (m_birthPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationNumber.c_str(), allocator).Move(), allocator);
    }

}


string GeneralCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void GeneralCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool GeneralCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string GeneralCard::GetPersonalNumber() const
{
    return m_personalNumber;
}

void GeneralCard::SetPersonalNumber(const string& _personalNumber)
{
    m_personalNumber = _personalNumber;
    m_personalNumberHasBeenSet = true;
}

bool GeneralCard::PersonalNumberHasBeenSet() const
{
    return m_personalNumberHasBeenSet;
}

string GeneralCard::GetPassportCodeFirst() const
{
    return m_passportCodeFirst;
}

void GeneralCard::SetPassportCodeFirst(const string& _passportCodeFirst)
{
    m_passportCodeFirst = _passportCodeFirst;
    m_passportCodeFirstHasBeenSet = true;
}

bool GeneralCard::PassportCodeFirstHasBeenSet() const
{
    return m_passportCodeFirstHasBeenSet;
}

string GeneralCard::GetPassportCodeSecond() const
{
    return m_passportCodeSecond;
}

void GeneralCard::SetPassportCodeSecond(const string& _passportCodeSecond)
{
    m_passportCodeSecond = _passportCodeSecond;
    m_passportCodeSecondHasBeenSet = true;
}

bool GeneralCard::PassportCodeSecondHasBeenSet() const
{
    return m_passportCodeSecondHasBeenSet;
}

string GeneralCard::GetExpirationDate() const
{
    return m_expirationDate;
}

void GeneralCard::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool GeneralCard::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string GeneralCard::GetDueDate() const
{
    return m_dueDate;
}

void GeneralCard::SetDueDate(const string& _dueDate)
{
    m_dueDate = _dueDate;
    m_dueDateHasBeenSet = true;
}

bool GeneralCard::DueDateHasBeenSet() const
{
    return m_dueDateHasBeenSet;
}

string GeneralCard::GetIssuedDate() const
{
    return m_issuedDate;
}

void GeneralCard::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool GeneralCard::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string GeneralCard::GetIssuedAuthority() const
{
    return m_issuedAuthority;
}

void GeneralCard::SetIssuedAuthority(const string& _issuedAuthority)
{
    m_issuedAuthority = _issuedAuthority;
    m_issuedAuthorityHasBeenSet = true;
}

bool GeneralCard::IssuedAuthorityHasBeenSet() const
{
    return m_issuedAuthorityHasBeenSet;
}

string GeneralCard::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void GeneralCard::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool GeneralCard::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

string GeneralCard::GetFullName() const
{
    return m_fullName;
}

void GeneralCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool GeneralCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string GeneralCard::GetFirstName() const
{
    return m_firstName;
}

void GeneralCard::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool GeneralCard::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string GeneralCard::GetLastName() const
{
    return m_lastName;
}

void GeneralCard::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool GeneralCard::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string GeneralCard::GetSex() const
{
    return m_sex;
}

void GeneralCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool GeneralCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string GeneralCard::GetAge() const
{
    return m_age;
}

void GeneralCard::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool GeneralCard::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string GeneralCard::GetBirthday() const
{
    return m_birthday;
}

void GeneralCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool GeneralCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string GeneralCard::GetBirthPlace() const
{
    return m_birthPlace;
}

void GeneralCard::SetBirthPlace(const string& _birthPlace)
{
    m_birthPlace = _birthPlace;
    m_birthPlaceHasBeenSet = true;
}

bool GeneralCard::BirthPlaceHasBeenSet() const
{
    return m_birthPlaceHasBeenSet;
}

string GeneralCard::GetNationality() const
{
    return m_nationality;
}

void GeneralCard::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool GeneralCard::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string GeneralCard::GetRegistrationNumber() const
{
    return m_registrationNumber;
}

void GeneralCard::SetRegistrationNumber(const string& _registrationNumber)
{
    m_registrationNumber = _registrationNumber;
    m_registrationNumberHasBeenSet = true;
}

bool GeneralCard::RegistrationNumberHasBeenSet() const
{
    return m_registrationNumberHasBeenSet;
}

