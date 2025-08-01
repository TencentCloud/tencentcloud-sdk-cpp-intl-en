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

#include <tencentcloud/vpc/v20170312/model/BandwidthPackageBillBandwidth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BandwidthPackageBillBandwidth::BandwidthPackageBillBandwidth() :
    m_bandwidthUsageHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthPackageBillBandwidth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BandwidthUsage") && !value["BandwidthUsage"].IsNull())
    {
        if (!value["BandwidthUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPackageBillBandwidth.BandwidthUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthUsage = value["BandwidthUsage"].GetDouble();
        m_bandwidthUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthPackageBillBandwidth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bandwidthUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthUsage, allocator);
    }

}


double BandwidthPackageBillBandwidth::GetBandwidthUsage() const
{
    return m_bandwidthUsage;
}

void BandwidthPackageBillBandwidth::SetBandwidthUsage(const double& _bandwidthUsage)
{
    m_bandwidthUsage = _bandwidthUsage;
    m_bandwidthUsageHasBeenSet = true;
}

bool BandwidthPackageBillBandwidth::BandwidthUsageHasBeenSet() const
{
    return m_bandwidthUsageHasBeenSet;
}

