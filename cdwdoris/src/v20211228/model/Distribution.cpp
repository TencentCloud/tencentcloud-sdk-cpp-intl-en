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

#include <tencentcloud/cdwdoris/v20211228/model/Distribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

Distribution::Distribution() :
    m_distributionTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome Distribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DistributionType") && !value["DistributionType"].IsNull())
    {
        if (!value["DistributionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.DistributionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distributionType = string(value["DistributionType"].GetString());
        m_distributionTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Distribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_distributionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distributionType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string Distribution::GetDistributionType() const
{
    return m_distributionType;
}

void Distribution::SetDistributionType(const string& _distributionType)
{
    m_distributionType = _distributionType;
    m_distributionTypeHasBeenSet = true;
}

bool Distribution::DistributionTypeHasBeenSet() const
{
    return m_distributionTypeHasBeenSet;
}

int64_t Distribution::GetCount() const
{
    return m_count;
}

void Distribution::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Distribution::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

