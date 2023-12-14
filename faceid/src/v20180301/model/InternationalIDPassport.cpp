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

#include <tencentcloud/faceid/v20180301/model/InternationalIDPassport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

InternationalIDPassport::InternationalIDPassport() :
    m_licenseNumberHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_issuingCountryHasBeenSet(false),
    m_nationalityCodeHasBeenSet(false),
    m_passportCodeFirstHasBeenSet(false),
    m_passportCodeSecondHasBeenSet(false)
{
}

CoreInternalOutcome InternationalIDPassport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Surname") && !value["Surname"].IsNull())
    {
        if (!value["Surname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.Surname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surname = string(value["Surname"].GetString());
        m_surnameHasBeenSet = true;
    }

    if (value.HasMember("GivenName") && !value["GivenName"].IsNull())
    {
        if (!value["GivenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.GivenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_givenName = string(value["GivenName"].GetString());
        m_givenNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("DateOfExpiration") && !value["DateOfExpiration"].IsNull())
    {
        if (!value["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(value["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (value.HasMember("IssuingCountry") && !value["IssuingCountry"].IsNull())
    {
        if (!value["IssuingCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.IssuingCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingCountry = string(value["IssuingCountry"].GetString());
        m_issuingCountryHasBeenSet = true;
    }

    if (value.HasMember("NationalityCode") && !value["NationalityCode"].IsNull())
    {
        if (!value["NationalityCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.NationalityCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationalityCode = string(value["NationalityCode"].GetString());
        m_nationalityCodeHasBeenSet = true;
    }

    if (value.HasMember("PassportCodeFirst") && !value["PassportCodeFirst"].IsNull())
    {
        if (!value["PassportCodeFirst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.PassportCodeFirst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportCodeFirst = string(value["PassportCodeFirst"].GetString());
        m_passportCodeFirstHasBeenSet = true;
    }

    if (value.HasMember("PassportCodeSecond") && !value["PassportCodeSecond"].IsNull())
    {
        if (!value["PassportCodeSecond"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternationalIDPassport.PassportCodeSecond` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passportCodeSecond = string(value["PassportCodeSecond"].GetString());
        m_passportCodeSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternationalIDPassport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_surnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surname.c_str(), allocator).Move(), allocator);
    }

    if (m_givenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_givenName.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiration.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationalityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationalityCode.c_str(), allocator).Move(), allocator);
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

}


string InternationalIDPassport::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void InternationalIDPassport::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool InternationalIDPassport::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string InternationalIDPassport::GetFullName() const
{
    return m_fullName;
}

void InternationalIDPassport::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool InternationalIDPassport::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string InternationalIDPassport::GetSurname() const
{
    return m_surname;
}

void InternationalIDPassport::SetSurname(const string& _surname)
{
    m_surname = _surname;
    m_surnameHasBeenSet = true;
}

bool InternationalIDPassport::SurnameHasBeenSet() const
{
    return m_surnameHasBeenSet;
}

string InternationalIDPassport::GetGivenName() const
{
    return m_givenName;
}

void InternationalIDPassport::SetGivenName(const string& _givenName)
{
    m_givenName = _givenName;
    m_givenNameHasBeenSet = true;
}

bool InternationalIDPassport::GivenNameHasBeenSet() const
{
    return m_givenNameHasBeenSet;
}

string InternationalIDPassport::GetBirthday() const
{
    return m_birthday;
}

void InternationalIDPassport::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool InternationalIDPassport::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string InternationalIDPassport::GetSex() const
{
    return m_sex;
}

void InternationalIDPassport::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool InternationalIDPassport::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string InternationalIDPassport::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

void InternationalIDPassport::SetDateOfExpiration(const string& _dateOfExpiration)
{
    m_dateOfExpiration = _dateOfExpiration;
    m_dateOfExpirationHasBeenSet = true;
}

bool InternationalIDPassport::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string InternationalIDPassport::GetIssuingCountry() const
{
    return m_issuingCountry;
}

void InternationalIDPassport::SetIssuingCountry(const string& _issuingCountry)
{
    m_issuingCountry = _issuingCountry;
    m_issuingCountryHasBeenSet = true;
}

bool InternationalIDPassport::IssuingCountryHasBeenSet() const
{
    return m_issuingCountryHasBeenSet;
}

string InternationalIDPassport::GetNationalityCode() const
{
    return m_nationalityCode;
}

void InternationalIDPassport::SetNationalityCode(const string& _nationalityCode)
{
    m_nationalityCode = _nationalityCode;
    m_nationalityCodeHasBeenSet = true;
}

bool InternationalIDPassport::NationalityCodeHasBeenSet() const
{
    return m_nationalityCodeHasBeenSet;
}

string InternationalIDPassport::GetPassportCodeFirst() const
{
    return m_passportCodeFirst;
}

void InternationalIDPassport::SetPassportCodeFirst(const string& _passportCodeFirst)
{
    m_passportCodeFirst = _passportCodeFirst;
    m_passportCodeFirstHasBeenSet = true;
}

bool InternationalIDPassport::PassportCodeFirstHasBeenSet() const
{
    return m_passportCodeFirstHasBeenSet;
}

string InternationalIDPassport::GetPassportCodeSecond() const
{
    return m_passportCodeSecond;
}

void InternationalIDPassport::SetPassportCodeSecond(const string& _passportCodeSecond)
{
    m_passportCodeSecond = _passportCodeSecond;
    m_passportCodeSecondHasBeenSet = true;
}

bool InternationalIDPassport::PassportCodeSecondHasBeenSet() const
{
    return m_passportCodeSecondHasBeenSet;
}

