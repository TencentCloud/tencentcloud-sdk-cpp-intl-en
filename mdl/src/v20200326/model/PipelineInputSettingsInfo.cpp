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

#include <tencentcloud/mdl/v20200326/model/PipelineInputSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PipelineInputSettingsInfo::PipelineInputSettingsInfo() :
    m_faultBehaviorHasBeenSet(false)
{
}

CoreInternalOutcome PipelineInputSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaultBehavior") && !value["FaultBehavior"].IsNull())
    {
        if (!value["FaultBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PipelineInputSettingsInfo.FaultBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faultBehavior = string(value["FaultBehavior"].GetString());
        m_faultBehaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PipelineInputSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faultBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faultBehavior.c_str(), allocator).Move(), allocator);
    }

}


string PipelineInputSettingsInfo::GetFaultBehavior() const
{
    return m_faultBehavior;
}

void PipelineInputSettingsInfo::SetFaultBehavior(const string& _faultBehavior)
{
    m_faultBehavior = _faultBehavior;
    m_faultBehaviorHasBeenSet = true;
}

bool PipelineInputSettingsInfo::FaultBehaviorHasBeenSet() const
{
    return m_faultBehaviorHasBeenSet;
}

