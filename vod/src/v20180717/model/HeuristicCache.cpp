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

#include <tencentcloud/vod/v20180717/model/HeuristicCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

HeuristicCache::HeuristicCache() :
    m_switchHasBeenSet(false),
    m_cacheConfigHasBeenSet(false)
{
}

CoreInternalOutcome HeuristicCache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeuristicCache.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CacheConfig") && !value["CacheConfig"].IsNull())
    {
        if (!value["CacheConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HeuristicCache.CacheConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheConfig.Deserialize(value["CacheConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeuristicCache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HeuristicCache::GetSwitch() const
{
    return m_switch;
}

void HeuristicCache::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool HeuristicCache::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

HeuristicCacheConfig HeuristicCache::GetCacheConfig() const
{
    return m_cacheConfig;
}

void HeuristicCache::SetCacheConfig(const HeuristicCacheConfig& _cacheConfig)
{
    m_cacheConfig = _cacheConfig;
    m_cacheConfigHasBeenSet = true;
}

bool HeuristicCache::CacheConfigHasBeenSet() const
{
    return m_cacheConfigHasBeenSet;
}

