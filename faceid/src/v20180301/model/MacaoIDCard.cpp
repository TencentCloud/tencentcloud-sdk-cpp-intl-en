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

#include <tencentcloud/faceid/v20180301/model/MacaoIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

MacaoIDCard::MacaoIDCard() :
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_issuedCountryHasBeenSet(false),
    m_field1HasBeenSet(false),
    m_field2HasBeenSet(false)
{
}

CoreInternalOutcome MacaoIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.Age` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_age = string(value["Age"].GetString());
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("IssuedCountry") && !value["IssuedCountry"].IsNull())
    {
        if (!value["IssuedCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.IssuedCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedCountry = string(value["IssuedCountry"].GetString());
        m_issuedCountryHasBeenSet = true;
    }

    if (value.HasMember("Field1") && !value["Field1"].IsNull())
    {
        if (!value["Field1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.Field1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field1 = string(value["Field1"].GetString());
        m_field1HasBeenSet = true;
    }

    if (value.HasMember("Field2") && !value["Field2"].IsNull())
    {
        if (!value["Field2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MacaoIDCard.Field2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field2 = string(value["Field2"].GetString());
        m_field2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MacaoIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
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

    if (m_issuedCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_field1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field1.c_str(), allocator).Move(), allocator);
    }

    if (m_field2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field2.c_str(), allocator).Move(), allocator);
    }

}


string MacaoIDCard::GetFirstName() const
{
    return m_firstName;
}

void MacaoIDCard::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool MacaoIDCard::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string MacaoIDCard::GetLastName() const
{
    return m_lastName;
}

void MacaoIDCard::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool MacaoIDCard::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string MacaoIDCard::GetBirthday() const
{
    return m_birthday;
}

void MacaoIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool MacaoIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string MacaoIDCard::GetExpirationDate() const
{
    return m_expirationDate;
}

void MacaoIDCard::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool MacaoIDCard::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string MacaoIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void MacaoIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool MacaoIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string MacaoIDCard::GetSex() const
{
    return m_sex;
}

void MacaoIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool MacaoIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string MacaoIDCard::GetAge() const
{
    return m_age;
}

void MacaoIDCard::SetAge(const string& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool MacaoIDCard::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

string MacaoIDCard::GetIssuedCountry() const
{
    return m_issuedCountry;
}

void MacaoIDCard::SetIssuedCountry(const string& _issuedCountry)
{
    m_issuedCountry = _issuedCountry;
    m_issuedCountryHasBeenSet = true;
}

bool MacaoIDCard::IssuedCountryHasBeenSet() const
{
    return m_issuedCountryHasBeenSet;
}

string MacaoIDCard::GetField1() const
{
    return m_field1;
}

void MacaoIDCard::SetField1(const string& _field1)
{
    m_field1 = _field1;
    m_field1HasBeenSet = true;
}

bool MacaoIDCard::Field1HasBeenSet() const
{
    return m_field1HasBeenSet;
}

string MacaoIDCard::GetField2() const
{
    return m_field2;
}

void MacaoIDCard::SetField2(const string& _field2)
{
    m_field2 = _field2;
    m_field2HasBeenSet = true;
}

bool MacaoIDCard::Field2HasBeenSet() const
{
    return m_field2HasBeenSet;
}

