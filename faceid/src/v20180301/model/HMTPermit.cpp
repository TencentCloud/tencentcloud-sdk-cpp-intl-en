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

#include <tencentcloud/faceid/v20180301/model/HMTPermit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

HMTPermit::HMTPermit() :
    m_nameHasBeenSet(false),
    m_englishNameHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_issueAuthorityHasBeenSet(false),
    m_issueAddressHasBeenSet(false),
    m_birthdayHasBeenSet(false)
{
}

CoreInternalOutcome HMTPermit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EnglishName") && !value["EnglishName"].IsNull())
    {
        if (!value["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(value["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("ValidDate") && !value["ValidDate"].IsNull())
    {
        if (!value["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(value["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (value.HasMember("IssueAuthority") && !value["IssueAuthority"].IsNull())
    {
        if (!value["IssueAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.IssueAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueAuthority = string(value["IssueAuthority"].GetString());
        m_issueAuthorityHasBeenSet = true;
    }

    if (value.HasMember("IssueAddress") && !value["IssueAddress"].IsNull())
    {
        if (!value["IssueAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.IssueAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueAddress = string(value["IssueAddress"].GetString());
        m_issueAddressHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HMTPermit.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HMTPermit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issueAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_issueAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthday.c_str(), allocator).Move(), allocator);
    }

}


string HMTPermit::GetName() const
{
    return m_name;
}

void HMTPermit::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HMTPermit::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HMTPermit::GetEnglishName() const
{
    return m_englishName;
}

void HMTPermit::SetEnglishName(const string& _englishName)
{
    m_englishName = _englishName;
    m_englishNameHasBeenSet = true;
}

bool HMTPermit::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

string HMTPermit::GetNumber() const
{
    return m_number;
}

void HMTPermit::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool HMTPermit::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string HMTPermit::GetSex() const
{
    return m_sex;
}

void HMTPermit::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool HMTPermit::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string HMTPermit::GetValidDate() const
{
    return m_validDate;
}

void HMTPermit::SetValidDate(const string& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool HMTPermit::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string HMTPermit::GetIssueAuthority() const
{
    return m_issueAuthority;
}

void HMTPermit::SetIssueAuthority(const string& _issueAuthority)
{
    m_issueAuthority = _issueAuthority;
    m_issueAuthorityHasBeenSet = true;
}

bool HMTPermit::IssueAuthorityHasBeenSet() const
{
    return m_issueAuthorityHasBeenSet;
}

string HMTPermit::GetIssueAddress() const
{
    return m_issueAddress;
}

void HMTPermit::SetIssueAddress(const string& _issueAddress)
{
    m_issueAddress = _issueAddress;
    m_issueAddressHasBeenSet = true;
}

bool HMTPermit::IssueAddressHasBeenSet() const
{
    return m_issueAddressHasBeenSet;
}

string HMTPermit::GetBirthday() const
{
    return m_birthday;
}

void HMTPermit::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool HMTPermit::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

