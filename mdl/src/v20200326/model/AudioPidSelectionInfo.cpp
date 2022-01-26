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

#include <tencentcloud/mdl/v20200326/model/AudioPidSelectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioPidSelectionInfo::AudioPidSelectionInfo() :
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome AudioPidSelectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioPidSelectionInfo.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioPidSelectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


uint64_t AudioPidSelectionInfo::GetPid() const
{
    return m_pid;
}

void AudioPidSelectionInfo::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool AudioPidSelectionInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

