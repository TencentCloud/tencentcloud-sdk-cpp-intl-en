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

#include <tencentcloud/vod/v20180717/model/MaxAge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MaxAge::MaxAge() :
    m_maxAgeRulesHasBeenSet(false)
{
}

CoreInternalOutcome MaxAge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxAgeRules") && !value["MaxAgeRules"].IsNull())
    {
        if (!value["MaxAgeRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaxAge.MaxAgeRules` is not array type"));

        const rapidjson::Value &tmpValue = value["MaxAgeRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaxAgeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_maxAgeRules.push_back(item);
        }
        m_maxAgeRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxAgeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_maxAgeRules.begin(); itr != m_maxAgeRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MaxAgeRule> MaxAge::GetMaxAgeRules() const
{
    return m_maxAgeRules;
}

void MaxAge::SetMaxAgeRules(const vector<MaxAgeRule>& _maxAgeRules)
{
    m_maxAgeRules = _maxAgeRules;
    m_maxAgeRulesHasBeenSet = true;
}

bool MaxAge::MaxAgeRulesHasBeenSet() const
{
    return m_maxAgeRulesHasBeenSet;
}

