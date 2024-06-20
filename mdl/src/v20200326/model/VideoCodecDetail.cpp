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

#include <tencentcloud/mdl/v20200326/model/VideoCodecDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

VideoCodecDetail::VideoCodecDetail() :
    m_profileHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_entropyEncodingHasBeenSet(false),
    m_adaptiveQuantizationHasBeenSet(false),
    m_lookAheadRateControlHasBeenSet(false)
{
}

CoreInternalOutcome VideoCodecDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCodecDetail.Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(value["Profile"].GetString());
        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCodecDetail.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("EntropyEncoding") && !value["EntropyEncoding"].IsNull())
    {
        if (!value["EntropyEncoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCodecDetail.EntropyEncoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entropyEncoding = string(value["EntropyEncoding"].GetString());
        m_entropyEncodingHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveQuantization") && !value["AdaptiveQuantization"].IsNull())
    {
        if (!value["AdaptiveQuantization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCodecDetail.AdaptiveQuantization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adaptiveQuantization = string(value["AdaptiveQuantization"].GetString());
        m_adaptiveQuantizationHasBeenSet = true;
    }

    if (value.HasMember("LookAheadRateControl") && !value["LookAheadRateControl"].IsNull())
    {
        if (!value["LookAheadRateControl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCodecDetail.LookAheadRateControl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lookAheadRateControl = string(value["LookAheadRateControl"].GetString());
        m_lookAheadRateControlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoCodecDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_entropyEncodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntropyEncoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entropyEncoding.c_str(), allocator).Move(), allocator);
    }

    if (m_adaptiveQuantizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveQuantization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adaptiveQuantization.c_str(), allocator).Move(), allocator);
    }

    if (m_lookAheadRateControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LookAheadRateControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lookAheadRateControl.c_str(), allocator).Move(), allocator);
    }

}


string VideoCodecDetail::GetProfile() const
{
    return m_profile;
}

void VideoCodecDetail::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool VideoCodecDetail::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string VideoCodecDetail::GetLevel() const
{
    return m_level;
}

void VideoCodecDetail::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VideoCodecDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VideoCodecDetail::GetEntropyEncoding() const
{
    return m_entropyEncoding;
}

void VideoCodecDetail::SetEntropyEncoding(const string& _entropyEncoding)
{
    m_entropyEncoding = _entropyEncoding;
    m_entropyEncodingHasBeenSet = true;
}

bool VideoCodecDetail::EntropyEncodingHasBeenSet() const
{
    return m_entropyEncodingHasBeenSet;
}

string VideoCodecDetail::GetAdaptiveQuantization() const
{
    return m_adaptiveQuantization;
}

void VideoCodecDetail::SetAdaptiveQuantization(const string& _adaptiveQuantization)
{
    m_adaptiveQuantization = _adaptiveQuantization;
    m_adaptiveQuantizationHasBeenSet = true;
}

bool VideoCodecDetail::AdaptiveQuantizationHasBeenSet() const
{
    return m_adaptiveQuantizationHasBeenSet;
}

string VideoCodecDetail::GetLookAheadRateControl() const
{
    return m_lookAheadRateControl;
}

void VideoCodecDetail::SetLookAheadRateControl(const string& _lookAheadRateControl)
{
    m_lookAheadRateControl = _lookAheadRateControl;
    m_lookAheadRateControlHasBeenSet = true;
}

bool VideoCodecDetail::LookAheadRateControlHasBeenSet() const
{
    return m_lookAheadRateControlHasBeenSet;
}

