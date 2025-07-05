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

#include <tencentcloud/mdl/v20200326/model/AudioCodecDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AudioCodecDetail::AudioCodecDetail() :
    m_channelModeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

CoreInternalOutcome AudioCodecDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelMode") && !value["ChannelMode"].IsNull())
    {
        if (!value["ChannelMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioCodecDetail.ChannelMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelMode = string(value["ChannelMode"].GetString());
        m_channelModeHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioCodecDetail.Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(value["Profile"].GetString());
        m_profileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioCodecDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelMode.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

}


string AudioCodecDetail::GetChannelMode() const
{
    return m_channelMode;
}

void AudioCodecDetail::SetChannelMode(const string& _channelMode)
{
    m_channelMode = _channelMode;
    m_channelModeHasBeenSet = true;
}

bool AudioCodecDetail::ChannelModeHasBeenSet() const
{
    return m_channelModeHasBeenSet;
}

string AudioCodecDetail::GetProfile() const
{
    return m_profile;
}

void AudioCodecDetail::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AudioCodecDetail::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

