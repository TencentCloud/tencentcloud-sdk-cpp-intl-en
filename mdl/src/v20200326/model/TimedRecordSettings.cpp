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

#include <tencentcloud/mdl/v20200326/model/TimedRecordSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

TimedRecordSettings::TimedRecordSettings() :
    m_autoClearHasBeenSet(false)
{
}

CoreInternalOutcome TimedRecordSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoClear") && !value["AutoClear"].IsNull())
    {
        if (!value["AutoClear"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimedRecordSettings.AutoClear` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoClear = string(value["AutoClear"].GetString());
        m_autoClearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimedRecordSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoClearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoClear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoClear.c_str(), allocator).Move(), allocator);
    }

}


string TimedRecordSettings::GetAutoClear() const
{
    return m_autoClear;
}

void TimedRecordSettings::SetAutoClear(const string& _autoClear)
{
    m_autoClear = _autoClear;
    m_autoClearHasBeenSet = true;
}

bool TimedRecordSettings::AutoClearHasBeenSet() const
{
    return m_autoClearHasBeenSet;
}

