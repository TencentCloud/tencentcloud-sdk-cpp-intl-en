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

#include <tencentcloud/mdl/v20200326/model/StreamLiveRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamLiveRegionInfo::StreamLiveRegionInfo() :
    m_regionsHasBeenSet(false)
{
}

CoreInternalOutcome StreamLiveRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveRegionInfo.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regions.push_back(item);
        }
        m_regionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamLiveRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RegionInfo> StreamLiveRegionInfo::GetRegions() const
{
    return m_regions;
}

void StreamLiveRegionInfo::SetRegions(const vector<RegionInfo>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool StreamLiveRegionInfo::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

