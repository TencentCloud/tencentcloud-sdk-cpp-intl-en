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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationConfigInfo::DescribeApplicationConfigInfo() :
    m_androidConfigHasBeenSet(false),
    m_iosConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidConfig") && !value["AndroidConfig"].IsNull())
    {
        if (!value["AndroidConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationConfigInfo.AndroidConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["AndroidConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_androidConfig.push_back(item);
        }
        m_androidConfigHasBeenSet = true;
    }

    if (value.HasMember("IosConfig") && !value["IosConfig"].IsNull())
    {
        if (!value["IosConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationConfigInfo.IosConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["IosConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iosConfig.push_back(item);
        }
        m_iosConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_androidConfig.begin(); itr != m_androidConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iosConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IosConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iosConfig.begin(); itr != m_iosConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ApplicationConfigInfo> DescribeApplicationConfigInfo::GetAndroidConfig() const
{
    return m_androidConfig;
}

void DescribeApplicationConfigInfo::SetAndroidConfig(const vector<ApplicationConfigInfo>& _androidConfig)
{
    m_androidConfig = _androidConfig;
    m_androidConfigHasBeenSet = true;
}

bool DescribeApplicationConfigInfo::AndroidConfigHasBeenSet() const
{
    return m_androidConfigHasBeenSet;
}

vector<ApplicationConfigInfo> DescribeApplicationConfigInfo::GetIosConfig() const
{
    return m_iosConfig;
}

void DescribeApplicationConfigInfo::SetIosConfig(const vector<ApplicationConfigInfo>& _iosConfig)
{
    m_iosConfig = _iosConfig;
    m_iosConfigHasBeenSet = true;
}

bool DescribeApplicationConfigInfo::IosConfigHasBeenSet() const
{
    return m_iosConfigHasBeenSet;
}

