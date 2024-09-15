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

#include <tencentcloud/car/v20220110/model/VideoEncodeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

VideoEncodeConfig::VideoEncodeConfig() :
    m_streamPushGOPSecondsHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncodeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamPushGOPSeconds") && !value["StreamPushGOPSeconds"].IsNull())
    {
        if (!value["StreamPushGOPSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodeConfig.StreamPushGOPSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamPushGOPSeconds = value["StreamPushGOPSeconds"].GetUint64();
        m_streamPushGOPSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncodeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamPushGOPSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamPushGOPSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamPushGOPSeconds, allocator);
    }

}


uint64_t VideoEncodeConfig::GetStreamPushGOPSeconds() const
{
    return m_streamPushGOPSeconds;
}

void VideoEncodeConfig::SetStreamPushGOPSeconds(const uint64_t& _streamPushGOPSeconds)
{
    m_streamPushGOPSeconds = _streamPushGOPSeconds;
    m_streamPushGOPSecondsHasBeenSet = true;
}

bool VideoEncodeConfig::StreamPushGOPSecondsHasBeenSet() const
{
    return m_streamPushGOPSecondsHasBeenSet;
}

