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

#include <tencentcloud/vod/v20180717/model/HeuristicCacheConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

HeuristicCacheConfig::HeuristicCacheConfig() :
    m_heuristicCacheTimeSwitchHasBeenSet(false),
    m_heuristicCacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome HeuristicCacheConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeuristicCacheTimeSwitch") && !value["HeuristicCacheTimeSwitch"].IsNull())
    {
        if (!value["HeuristicCacheTimeSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeuristicCacheConfig.HeuristicCacheTimeSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_heuristicCacheTimeSwitch = string(value["HeuristicCacheTimeSwitch"].GetString());
        m_heuristicCacheTimeSwitchHasBeenSet = true;
    }

    if (value.HasMember("HeuristicCacheTime") && !value["HeuristicCacheTime"].IsNull())
    {
        if (!value["HeuristicCacheTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HeuristicCacheConfig.HeuristicCacheTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_heuristicCacheTime = value["HeuristicCacheTime"].GetUint64();
        m_heuristicCacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeuristicCacheConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heuristicCacheTimeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeuristicCacheTimeSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_heuristicCacheTimeSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_heuristicCacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeuristicCacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heuristicCacheTime, allocator);
    }

}


string HeuristicCacheConfig::GetHeuristicCacheTimeSwitch() const
{
    return m_heuristicCacheTimeSwitch;
}

void HeuristicCacheConfig::SetHeuristicCacheTimeSwitch(const string& _heuristicCacheTimeSwitch)
{
    m_heuristicCacheTimeSwitch = _heuristicCacheTimeSwitch;
    m_heuristicCacheTimeSwitchHasBeenSet = true;
}

bool HeuristicCacheConfig::HeuristicCacheTimeSwitchHasBeenSet() const
{
    return m_heuristicCacheTimeSwitchHasBeenSet;
}

uint64_t HeuristicCacheConfig::GetHeuristicCacheTime() const
{
    return m_heuristicCacheTime;
}

void HeuristicCacheConfig::SetHeuristicCacheTime(const uint64_t& _heuristicCacheTime)
{
    m_heuristicCacheTime = _heuristicCacheTime;
    m_heuristicCacheTimeHasBeenSet = true;
}

bool HeuristicCacheConfig::HeuristicCacheTimeHasBeenSet() const
{
    return m_heuristicCacheTimeHasBeenSet;
}

