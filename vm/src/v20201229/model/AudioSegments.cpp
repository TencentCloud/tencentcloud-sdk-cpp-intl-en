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

#include <tencentcloud/vm/v20201229/model/AudioSegments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

AudioSegments::AudioSegments() :
    m_offsetTimeHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome AudioSegments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OffsetTime") && !value["OffsetTime"].IsNull())
    {
        if (!value["OffsetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSegments.OffsetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetTime = string(value["OffsetTime"].GetString());
        m_offsetTimeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSegments.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioSegments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AudioSegments::GetOffsetTime() const
{
    return m_offsetTime;
}

void AudioSegments::SetOffsetTime(const string& _offsetTime)
{
    m_offsetTime = _offsetTime;
    m_offsetTimeHasBeenSet = true;
}

bool AudioSegments::OffsetTimeHasBeenSet() const
{
    return m_offsetTimeHasBeenSet;
}

AudioResult AudioSegments::GetResult() const
{
    return m_result;
}

void AudioSegments::SetResult(const AudioResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AudioSegments::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

