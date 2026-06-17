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

#include <tencentcloud/clb/v20230417/model/ExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20230417::Model;
using namespace std;

ExtraInfo::ExtraInfo() :
    m_dnatHasBeenSet(false),
    m_tgwGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dnat") && !value["Dnat"].IsNull())
    {
        if (!value["Dnat"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.Dnat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dnat = value["Dnat"].GetBool();
        m_dnatHasBeenSet = true;
    }

    if (value.HasMember("TgwGroupName") && !value["TgwGroupName"].IsNull())
    {
        if (!value["TgwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.TgwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tgwGroupName = string(value["TgwGroupName"].GetString());
        m_tgwGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dnat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnat, allocator);
    }

    if (m_tgwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tgwGroupName.c_str(), allocator).Move(), allocator);
    }

}


bool ExtraInfo::GetDnat() const
{
    return m_dnat;
}

void ExtraInfo::SetDnat(const bool& _dnat)
{
    m_dnat = _dnat;
    m_dnatHasBeenSet = true;
}

bool ExtraInfo::DnatHasBeenSet() const
{
    return m_dnatHasBeenSet;
}

string ExtraInfo::GetTgwGroupName() const
{
    return m_tgwGroupName;
}

void ExtraInfo::SetTgwGroupName(const string& _tgwGroupName)
{
    m_tgwGroupName = _tgwGroupName;
    m_tgwGroupNameHasBeenSet = true;
}

bool ExtraInfo::TgwGroupNameHasBeenSet() const
{
    return m_tgwGroupNameHasBeenSet;
}

