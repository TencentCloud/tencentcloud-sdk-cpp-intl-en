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

#include <tencentcloud/mdl/v20200326/model/LogMessageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

LogMessageInfo::LogMessageInfo() :
    m_streamInfoHasBeenSet(false)
{
}

CoreInternalOutcome LogMessageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamInfo") && !value["StreamInfo"].IsNull())
    {
        if (!value["StreamInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogMessageInfo.StreamInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_streamInfo.Deserialize(value["StreamInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_streamInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogMessageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


StreamInfo LogMessageInfo::GetStreamInfo() const
{
    return m_streamInfo;
}

void LogMessageInfo::SetStreamInfo(const StreamInfo& _streamInfo)
{
    m_streamInfo = _streamInfo;
    m_streamInfoHasBeenSet = true;
}

bool LogMessageInfo::StreamInfoHasBeenSet() const
{
    return m_streamInfoHasBeenSet;
}

