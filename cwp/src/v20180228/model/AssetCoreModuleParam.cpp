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

#include <tencentcloud/cwp/v20180228/model/AssetCoreModuleParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetCoreModuleParam::AssetCoreModuleParam() :
    m_nameHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome AssetCoreModuleParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCoreModuleParam.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetCoreModuleParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

}


string AssetCoreModuleParam::GetName() const
{
    return m_name;
}

void AssetCoreModuleParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetCoreModuleParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetCoreModuleParam::GetData() const
{
    return m_data;
}

void AssetCoreModuleParam::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool AssetCoreModuleParam::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

