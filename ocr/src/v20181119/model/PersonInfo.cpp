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

#include <tencentcloud/ocr/v20181119/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PersonInfo::PersonInfo() :
    m_nameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_birthDateHasBeenSet(false),
    m_idCardNoHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("BirthDate") && !value["BirthDate"].IsNull())
    {
        if (!value["BirthDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.BirthDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthDate = string(value["BirthDate"].GetString());
        m_birthDateHasBeenSet = true;
    }

    if (value.HasMember("IdCardNo") && !value["IdCardNo"].IsNull())
    {
        if (!value["IdCardNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.IdCardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNo = string(value["IdCardNo"].GetString());
        m_idCardNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_birthDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthDate.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNo.c_str(), allocator).Move(), allocator);
    }

}


string PersonInfo::GetName() const
{
    return m_name;
}

void PersonInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PersonInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PersonInfo::GetGender() const
{
    return m_gender;
}

void PersonInfo::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool PersonInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string PersonInfo::GetBirthDate() const
{
    return m_birthDate;
}

void PersonInfo::SetBirthDate(const string& _birthDate)
{
    m_birthDate = _birthDate;
    m_birthDateHasBeenSet = true;
}

bool PersonInfo::BirthDateHasBeenSet() const
{
    return m_birthDateHasBeenSet;
}

string PersonInfo::GetIdCardNo() const
{
    return m_idCardNo;
}

void PersonInfo::SetIdCardNo(const string& _idCardNo)
{
    m_idCardNo = _idCardNo;
    m_idCardNoHasBeenSet = true;
}

bool PersonInfo::IdCardNoHasBeenSet() const
{
    return m_idCardNoHasBeenSet;
}

