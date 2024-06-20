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

#include <tencentcloud/mdl/v20200326/model/InputTrack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

InputTrack::InputTrack() :
    m_trackIndexHasBeenSet(false)
{
}

CoreInternalOutcome InputTrack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrackIndex") && !value["TrackIndex"].IsNull())
    {
        if (!value["TrackIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputTrack.TrackIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trackIndex = value["TrackIndex"].GetUint64();
        m_trackIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputTrack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trackIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackIndex, allocator);
    }

}


uint64_t InputTrack::GetTrackIndex() const
{
    return m_trackIndex;
}

void InputTrack::SetTrackIndex(const uint64_t& _trackIndex)
{
    m_trackIndex = _trackIndex;
    m_trackIndexHasBeenSet = true;
}

bool InputTrack::TrackIndexHasBeenSet() const
{
    return m_trackIndexHasBeenSet;
}

