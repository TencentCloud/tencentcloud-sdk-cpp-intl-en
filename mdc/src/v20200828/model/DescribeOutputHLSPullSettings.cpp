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

#include <tencentcloud/mdc/v20200828/model/DescribeOutputHLSPullSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

DescribeOutputHLSPullSettings::DescribeOutputHLSPullSettings() :
    m_serverUrlsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOutputHLSPullSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerUrls") && !value["ServerUrls"].IsNull())
    {
        if (!value["ServerUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutputHLSPullSettings.ServerUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ServerUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeOutputHLSPullServerUrl item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serverUrls.push_back(item);
        }
        m_serverUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeOutputHLSPullSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverUrls.begin(); itr != m_serverUrls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DescribeOutputHLSPullServerUrl> DescribeOutputHLSPullSettings::GetServerUrls() const
{
    return m_serverUrls;
}

void DescribeOutputHLSPullSettings::SetServerUrls(const vector<DescribeOutputHLSPullServerUrl>& _serverUrls)
{
    m_serverUrls = _serverUrls;
    m_serverUrlsHasBeenSet = true;
}

bool DescribeOutputHLSPullSettings::ServerUrlsHasBeenSet() const
{
    return m_serverUrlsHasBeenSet;
}

