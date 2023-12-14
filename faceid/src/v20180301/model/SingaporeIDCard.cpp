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

#include <tencentcloud/faceid/v20180301/model/SingaporeIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

SingaporeIDCard::SingaporeIDCard() :
    m_chNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_countryOfBirthHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_raceHasBeenSet(false),
    m_nRICCodeHasBeenSet(false),
    m_postCodeHasBeenSet(false),
    m_dateOfExpirationHasBeenSet(false),
    m_dateOfIssueHasBeenSet(false)
{
}

CoreInternalOutcome SingaporeIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChName") && !value["ChName"].IsNull())
    {
        if (!value["ChName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.ChName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chName = string(value["ChName"].GetString());
        m_chNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("CountryOfBirth") && !value["CountryOfBirth"].IsNull())
    {
        if (!value["CountryOfBirth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.CountryOfBirth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryOfBirth = string(value["CountryOfBirth"].GetString());
        m_countryOfBirthHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Race") && !value["Race"].IsNull())
    {
        if (!value["Race"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.Race` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_race = string(value["Race"].GetString());
        m_raceHasBeenSet = true;
    }

    if (value.HasMember("NRICCode") && !value["NRICCode"].IsNull())
    {
        if (!value["NRICCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.NRICCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nRICCode = string(value["NRICCode"].GetString());
        m_nRICCodeHasBeenSet = true;
    }

    if (value.HasMember("PostCode") && !value["PostCode"].IsNull())
    {
        if (!value["PostCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.PostCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postCode = string(value["PostCode"].GetString());
        m_postCodeHasBeenSet = true;
    }

    if (value.HasMember("DateOfExpiration") && !value["DateOfExpiration"].IsNull())
    {
        if (!value["DateOfExpiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.DateOfExpiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfExpiration = string(value["DateOfExpiration"].GetString());
        m_dateOfExpirationHasBeenSet = true;
    }

    if (value.HasMember("DateOfIssue") && !value["DateOfIssue"].IsNull())
    {
        if (!value["DateOfIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SingaporeIDCard.DateOfIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateOfIssue = string(value["DateOfIssue"].GetString());
        m_dateOfIssueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingaporeIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_countryOfBirthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryOfBirth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryOfBirth.c_str(), allocator).Move(), allocator);
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

    if (m_raceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Race";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_race.c_str(), allocator).Move(), allocator);
    }

    if (m_nRICCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NRICCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nRICCode.c_str(), allocator).Move(), allocator);
    }

    if (m_postCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfExpiration.c_str(), allocator).Move(), allocator);
    }

    if (m_dateOfIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateOfIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateOfIssue.c_str(), allocator).Move(), allocator);
    }

}


string SingaporeIDCard::GetChName() const
{
    return m_chName;
}

void SingaporeIDCard::SetChName(const string& _chName)
{
    m_chName = _chName;
    m_chNameHasBeenSet = true;
}

bool SingaporeIDCard::ChNameHasBeenSet() const
{
    return m_chNameHasBeenSet;
}

string SingaporeIDCard::GetEnName() const
{
    return m_enName;
}

void SingaporeIDCard::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool SingaporeIDCard::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string SingaporeIDCard::GetID() const
{
    return m_iD;
}

void SingaporeIDCard::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SingaporeIDCard::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SingaporeIDCard::GetSex() const
{
    return m_sex;
}

void SingaporeIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool SingaporeIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string SingaporeIDCard::GetCountryOfBirth() const
{
    return m_countryOfBirth;
}

void SingaporeIDCard::SetCountryOfBirth(const string& _countryOfBirth)
{
    m_countryOfBirth = _countryOfBirth;
    m_countryOfBirthHasBeenSet = true;
}

bool SingaporeIDCard::CountryOfBirthHasBeenSet() const
{
    return m_countryOfBirthHasBeenSet;
}

string SingaporeIDCard::GetBirthday() const
{
    return m_birthday;
}

void SingaporeIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool SingaporeIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string SingaporeIDCard::GetAddress() const
{
    return m_address;
}

void SingaporeIDCard::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool SingaporeIDCard::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string SingaporeIDCard::GetRace() const
{
    return m_race;
}

void SingaporeIDCard::SetRace(const string& _race)
{
    m_race = _race;
    m_raceHasBeenSet = true;
}

bool SingaporeIDCard::RaceHasBeenSet() const
{
    return m_raceHasBeenSet;
}

string SingaporeIDCard::GetNRICCode() const
{
    return m_nRICCode;
}

void SingaporeIDCard::SetNRICCode(const string& _nRICCode)
{
    m_nRICCode = _nRICCode;
    m_nRICCodeHasBeenSet = true;
}

bool SingaporeIDCard::NRICCodeHasBeenSet() const
{
    return m_nRICCodeHasBeenSet;
}

string SingaporeIDCard::GetPostCode() const
{
    return m_postCode;
}

void SingaporeIDCard::SetPostCode(const string& _postCode)
{
    m_postCode = _postCode;
    m_postCodeHasBeenSet = true;
}

bool SingaporeIDCard::PostCodeHasBeenSet() const
{
    return m_postCodeHasBeenSet;
}

string SingaporeIDCard::GetDateOfExpiration() const
{
    return m_dateOfExpiration;
}

void SingaporeIDCard::SetDateOfExpiration(const string& _dateOfExpiration)
{
    m_dateOfExpiration = _dateOfExpiration;
    m_dateOfExpirationHasBeenSet = true;
}

bool SingaporeIDCard::DateOfExpirationHasBeenSet() const
{
    return m_dateOfExpirationHasBeenSet;
}

string SingaporeIDCard::GetDateOfIssue() const
{
    return m_dateOfIssue;
}

void SingaporeIDCard::SetDateOfIssue(const string& _dateOfIssue)
{
    m_dateOfIssue = _dateOfIssue;
    m_dateOfIssueHasBeenSet = true;
}

bool SingaporeIDCard::DateOfIssueHasBeenSet() const
{
    return m_dateOfIssueHasBeenSet;
}

