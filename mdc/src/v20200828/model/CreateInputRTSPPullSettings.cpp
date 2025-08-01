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

#include <tencentcloud/mdc/v20200828/model/CreateInputRTSPPullSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

CreateInputRTSPPullSettings::CreateInputRTSPPullSettings() :
    m_sourceAddressesHasBeenSet(false)
{
}

CoreInternalOutcome CreateInputRTSPPullSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceAddresses") && !value["SourceAddresses"].IsNull())
    {
        if (!value["SourceAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInputRTSPPullSettings.SourceAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RTSPPullSourceAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceAddresses.push_back(item);
        }
        m_sourceAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInputRTSPPullSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceAddresses.begin(); itr != m_sourceAddresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RTSPPullSourceAddress> CreateInputRTSPPullSettings::GetSourceAddresses() const
{
    return m_sourceAddresses;
}

void CreateInputRTSPPullSettings::SetSourceAddresses(const vector<RTSPPullSourceAddress>& _sourceAddresses)
{
    m_sourceAddresses = _sourceAddresses;
    m_sourceAddressesHasBeenSet = true;
}

bool CreateInputRTSPPullSettings::SourceAddressesHasBeenSet() const
{
    return m_sourceAddressesHasBeenSet;
}

