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

#include <tencentcloud/faceid/v20180301/model/NormalHKIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

NormalHKIDCard::NormalHKIDCard() :
    m_chineseNameHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_registrationNumberHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_permanentHasBeenSet(false),
    m_licenseNumberHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_currentIssueDateHasBeenSet(false)
{
}

CoreInternalOutcome NormalHKIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChineseName") && !value["ChineseName"].IsNull())
    {
        if (!value["ChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.ChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chineseName = string(value["ChineseName"].GetString());
        m_chineseNameHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("RegistrationNumber") && !value["RegistrationNumber"].IsNull())
    {
        if (!value["RegistrationNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.RegistrationNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationNumber = string(value["RegistrationNumber"].GetString());
        m_registrationNumberHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Permanent") && !value["Permanent"].IsNull())
    {
        if (!value["Permanent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.Permanent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permanent = string(value["Permanent"].GetString());
        m_permanentHasBeenSet = true;
    }

    if (value.HasMember("LicenseNumber") && !value["LicenseNumber"].IsNull())
    {
        if (!value["LicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.LicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNumber = string(value["LicenseNumber"].GetString());
        m_licenseNumberHasBeenSet = true;
    }

    if (value.HasMember("Symbol") && !value["Symbol"].IsNull())
    {
        if (!value["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(value["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("CurrentIssueDate") && !value["CurrentIssueDate"].IsNull())
    {
        if (!value["CurrentIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalHKIDCard.CurrentIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentIssueDate = string(value["CurrentIssueDate"].GetString());
        m_currentIssueDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalHKIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationNumber.c_str(), allocator).Move(), allocator);
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

    if (m_permanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permanent.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_currentIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentIssueDate.c_str(), allocator).Move(), allocator);
    }

}


string NormalHKIDCard::GetChineseName() const
{
    return m_chineseName;
}

void NormalHKIDCard::SetChineseName(const string& _chineseName)
{
    m_chineseName = _chineseName;
    m_chineseNameHasBeenSet = true;
}

bool NormalHKIDCard::ChineseNameHasBeenSet() const
{
    return m_chineseNameHasBeenSet;
}

string NormalHKIDCard::GetFullName() const
{
    return m_fullName;
}

void NormalHKIDCard::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool NormalHKIDCard::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string NormalHKIDCard::GetRegistrationNumber() const
{
    return m_registrationNumber;
}

void NormalHKIDCard::SetRegistrationNumber(const string& _registrationNumber)
{
    m_registrationNumber = _registrationNumber;
    m_registrationNumberHasBeenSet = true;
}

bool NormalHKIDCard::RegistrationNumberHasBeenSet() const
{
    return m_registrationNumberHasBeenSet;
}

string NormalHKIDCard::GetSex() const
{
    return m_sex;
}

void NormalHKIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool NormalHKIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string NormalHKIDCard::GetBirthday() const
{
    return m_birthday;
}

void NormalHKIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool NormalHKIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string NormalHKIDCard::GetPermanent() const
{
    return m_permanent;
}

void NormalHKIDCard::SetPermanent(const string& _permanent)
{
    m_permanent = _permanent;
    m_permanentHasBeenSet = true;
}

bool NormalHKIDCard::PermanentHasBeenSet() const
{
    return m_permanentHasBeenSet;
}

string NormalHKIDCard::GetLicenseNumber() const
{
    return m_licenseNumber;
}

void NormalHKIDCard::SetLicenseNumber(const string& _licenseNumber)
{
    m_licenseNumber = _licenseNumber;
    m_licenseNumberHasBeenSet = true;
}

bool NormalHKIDCard::LicenseNumberHasBeenSet() const
{
    return m_licenseNumberHasBeenSet;
}

string NormalHKIDCard::GetSymbol() const
{
    return m_symbol;
}

void NormalHKIDCard::SetSymbol(const string& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool NormalHKIDCard::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

string NormalHKIDCard::GetIssuedDate() const
{
    return m_issuedDate;
}

void NormalHKIDCard::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool NormalHKIDCard::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string NormalHKIDCard::GetCurrentIssueDate() const
{
    return m_currentIssueDate;
}

void NormalHKIDCard::SetCurrentIssueDate(const string& _currentIssueDate)
{
    m_currentIssueDate = _currentIssueDate;
    m_currentIssueDateHasBeenSet = true;
}

bool NormalHKIDCard::CurrentIssueDateHasBeenSet() const
{
    return m_currentIssueDateHasBeenSet;
}

