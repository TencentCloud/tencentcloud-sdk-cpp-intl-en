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

#include <tencentcloud/mdl/v20200326/model/TimedMetadataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

TimedMetadataInfo::TimedMetadataInfo() :
    m_iD3HasBeenSet(false)
{
}

CoreInternalOutcome TimedMetadataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID3") && !value["ID3"].IsNull())
    {
        if (!value["ID3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedMetadataInfo.ID3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD3 = string(value["ID3"].GetString());
        m_iD3HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimedMetadataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iD3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD3.c_str(), allocator).Move(), allocator);
    }

}


string TimedMetadataInfo::GetID3() const
{
    return m_iD3;
}

void TimedMetadataInfo::SetID3(const string& _iD3)
{
    m_iD3 = _iD3;
    m_iD3HasBeenSet = true;
}

bool TimedMetadataInfo::ID3HasBeenSet() const
{
    return m_iD3HasBeenSet;
}

