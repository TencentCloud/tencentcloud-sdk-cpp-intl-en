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

#include <tencentcloud/faceid/v20180301/model/HKIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

HKIDCard::HKIDCard() :
    m_cnNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_telexCodeHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_permanentHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_firstIssueDateHasBeenSet(false),
    m_currentIssueDateHasBeenSet(false)
{
}

CoreInternalOutcome HKIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CnName") && !value["CnName"].IsNull())
    {
        if (!value["CnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.CnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnName = string(value["CnName"].GetString());
        m_cnNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("TelexCode") && !value["TelexCode"].IsNull())
    {
        if (!value["TelexCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.TelexCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telexCode = string(value["TelexCode"].GetString());
        m_telexCodeHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(value["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Birthday") && !value["Birthday"].IsNull())
    {
        if (!value["Birthday"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(value["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (value.HasMember("Permanent") && !value["Permanent"].IsNull())
    {
        if (!value["Permanent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.Permanent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permanent = string(value["Permanent"].GetString());
        m_permanentHasBeenSet = true;
    }

    if (value.HasMember("IdNum") && !value["IdNum"].IsNull())
    {
        if (!value["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(value["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (value.HasMember("Symbol") && !value["Symbol"].IsNull())
    {
        if (!value["Symbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.Symbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = string(value["Symbol"].GetString());
        m_symbolHasBeenSet = true;
    }

    if (value.HasMember("FirstIssueDate") && !value["FirstIssueDate"].IsNull())
    {
        if (!value["FirstIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.FirstIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIssueDate = string(value["FirstIssueDate"].GetString());
        m_firstIssueDateHasBeenSet = true;
    }

    if (value.HasMember("CurrentIssueDate") && !value["CurrentIssueDate"].IsNull())
    {
        if (!value["CurrentIssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HKIDCard.CurrentIssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentIssueDate = string(value["CurrentIssueDate"].GetString());
        m_currentIssueDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HKIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_telexCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelexCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telexCode.c_str(), allocator).Move(), allocator);
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

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_symbol.c_str(), allocator).Move(), allocator);
    }

    if (m_firstIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIssueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_currentIssueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentIssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentIssueDate.c_str(), allocator).Move(), allocator);
    }

}


string HKIDCard::GetCnName() const
{
    return m_cnName;
}

void HKIDCard::SetCnName(const string& _cnName)
{
    m_cnName = _cnName;
    m_cnNameHasBeenSet = true;
}

bool HKIDCard::CnNameHasBeenSet() const
{
    return m_cnNameHasBeenSet;
}

string HKIDCard::GetEnName() const
{
    return m_enName;
}

void HKIDCard::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool HKIDCard::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string HKIDCard::GetTelexCode() const
{
    return m_telexCode;
}

void HKIDCard::SetTelexCode(const string& _telexCode)
{
    m_telexCode = _telexCode;
    m_telexCodeHasBeenSet = true;
}

bool HKIDCard::TelexCodeHasBeenSet() const
{
    return m_telexCodeHasBeenSet;
}

string HKIDCard::GetSex() const
{
    return m_sex;
}

void HKIDCard::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool HKIDCard::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string HKIDCard::GetBirthday() const
{
    return m_birthday;
}

void HKIDCard::SetBirthday(const string& _birthday)
{
    m_birthday = _birthday;
    m_birthdayHasBeenSet = true;
}

bool HKIDCard::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string HKIDCard::GetPermanent() const
{
    return m_permanent;
}

void HKIDCard::SetPermanent(const string& _permanent)
{
    m_permanent = _permanent;
    m_permanentHasBeenSet = true;
}

bool HKIDCard::PermanentHasBeenSet() const
{
    return m_permanentHasBeenSet;
}

string HKIDCard::GetIdNum() const
{
    return m_idNum;
}

void HKIDCard::SetIdNum(const string& _idNum)
{
    m_idNum = _idNum;
    m_idNumHasBeenSet = true;
}

bool HKIDCard::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string HKIDCard::GetSymbol() const
{
    return m_symbol;
}

void HKIDCard::SetSymbol(const string& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool HKIDCard::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

string HKIDCard::GetFirstIssueDate() const
{
    return m_firstIssueDate;
}

void HKIDCard::SetFirstIssueDate(const string& _firstIssueDate)
{
    m_firstIssueDate = _firstIssueDate;
    m_firstIssueDateHasBeenSet = true;
}

bool HKIDCard::FirstIssueDateHasBeenSet() const
{
    return m_firstIssueDateHasBeenSet;
}

string HKIDCard::GetCurrentIssueDate() const
{
    return m_currentIssueDate;
}

void HKIDCard::SetCurrentIssueDate(const string& _currentIssueDate)
{
    m_currentIssueDate = _currentIssueDate;
    m_currentIssueDateHasBeenSet = true;
}

bool HKIDCard::CurrentIssueDateHasBeenSet() const
{
    return m_currentIssueDateHasBeenSet;
}

