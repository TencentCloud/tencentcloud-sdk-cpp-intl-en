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

#include <tencentcloud/faceid/v20180301/model/PhilippinesUMID.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhilippinesUMID::PhilippinesUMID() :
    m_surnameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_cRNHasBeenSet(false)
{
}

CoreInternalOutcome PhilippinesUMID::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Surname") && !value["Surname"].IsNull())
    {
        if (!value["Surname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.Surname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_surname = string(value["Surname"].GetString());
        m_surnameHasBeenSet = true;
    }

    if (value.HasMember("MiddleName") && !value["MiddleName"].IsNull())
    {
        if (!value["MiddleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.MiddleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_middleName = string(value["MiddleName"].GetString());
        m_middleNameHasBeenSet = true;
    }

    if (value.HasMember("GivenName") && !value["GivenName"].IsNull())
    {
        if (!value["GivenName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.GivenName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_givenName = string(value["GivenName"].GetString());
        m_givenNameHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("CRN") && !value["CRN"].IsNull())
    {
        if (!value["CRN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhilippinesUMID.CRN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cRN = string(value["CRN"].GetString());
        m_cRNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhilippinesUMID::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_surnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_surname.c_str(), allocator).Move(), allocator);
    }

    if (m_middleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_middleName.c_str(), allocator).Move(), allocator);
    }

    if (m_givenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GivenName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_givenName.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
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

    if (m_cRNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cRN.c_str(), allocator).Move(), allocator);
    }

}


string PhilippinesUMID::GetSurname() const
{
    return m_surname;
}

void PhilippinesUMID::SetSurname(const string& _surname)
{
    m_surname = _surname;
    m_surnameHasBeenSet = true;
}

bool PhilippinesUMID::SurnameHasBeenSet() const
{
    return m_surnameHasBeenSet;
}

string PhilippinesUMID::GetMiddleName() const
{
    return m_middleName;
}

void PhilippinesUMID::SetMiddleName(const string& _middleName)
{
    m_middleName = _middleName;
    m_middleNameHasBeenSet = true;
}

bool PhilippinesUMID::MiddleNameHasBeenSet() const
{
    return m_middleNameHasBeenSet;
}

string PhilippinesUMID::GetGivenName() const
{
    return m_givenName;
}

void PhilippinesUMID::SetGivenName(const string& _givenName)
{
    m_givenName = _givenName;
    m_givenNameHasBeenSet = true;
}

bool PhilippinesUMID::GivenNameHasBeenSet() const
{
    return m_givenNameHasBeenSet;
}

string PhilippinesUMID::GetSex() const
{
    return m_sex;
}

void PhilippinesUMID::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool PhilippinesUMID::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string PhilippinesUMID::GetBirthday() const
{
    return m_birthday;
}

void PhilippinesUMID::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool PhilippinesUMID::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string PhilippinesUMID::GetAddress() const
{
    return m_address;
}

void PhilippinesUMID::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PhilippinesUMID::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PhilippinesUMID::GetCRN() const
{
    return m_cRN;
}

void PhilippinesUMID::SetCRN(const string& _cRN)
{
    m_cRN = _cRN;
    m_cRNHasBeenSet = true;
}

bool PhilippinesUMID::CRNHasBeenSet() const
{
    return m_cRNHasBeenSet;
}

