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

#include <tencentcloud/tcsas/v20250106/model/MNPDetailI18nVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MNPDetailI18nVO::MNPDetailI18nVO() :
    m_iDHasBeenSet(false),
    m_langHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIntroHasBeenSet(false)
{
}

CoreInternalOutcome MNPDetailI18nVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetailI18nVO.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetailI18nVO.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetailI18nVO.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetailI18nVO.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetailI18nVO.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNPDetailI18nVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

}


int64_t MNPDetailI18nVO::GetID() const
{
    return m_iD;
}

void MNPDetailI18nVO::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MNPDetailI18nVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MNPDetailI18nVO::GetLang() const
{
    return m_lang;
}

void MNPDetailI18nVO::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool MNPDetailI18nVO::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

int64_t MNPDetailI18nVO::GetIsDefault() const
{
    return m_isDefault;
}

void MNPDetailI18nVO::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool MNPDetailI18nVO::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string MNPDetailI18nVO::GetMNPName() const
{
    return m_mNPName;
}

void MNPDetailI18nVO::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool MNPDetailI18nVO::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string MNPDetailI18nVO::GetMNPIntro() const
{
    return m_mNPIntro;
}

void MNPDetailI18nVO::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool MNPDetailI18nVO::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

