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

#include <tencentcloud/mdl/v20200326/model/AdBreakSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AdBreakSetting::AdBreakSetting() :
    m_formatHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_adSourceHasBeenSet(false),
    m_lSqueezeSettingHasBeenSet(false),
    m_pipSettingHasBeenSet(false),
    m_borderFrameSettingHasBeenSet(false)
{
}

CoreInternalOutcome AdBreakSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("AdSource") && !value["AdSource"].IsNull())
    {
        if (!value["AdSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.AdSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adSource = string(value["AdSource"].GetString());
        m_adSourceHasBeenSet = true;
    }

    if (value.HasMember("LSqueezeSetting") && !value["LSqueezeSetting"].IsNull())
    {
        if (!value["LSqueezeSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.LSqueezeSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lSqueezeSetting.Deserialize(value["LSqueezeSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lSqueezeSettingHasBeenSet = true;
    }

    if (value.HasMember("PipSetting") && !value["PipSetting"].IsNull())
    {
        if (!value["PipSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.PipSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pipSetting.Deserialize(value["PipSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pipSettingHasBeenSet = true;
    }

    if (value.HasMember("BorderFrameSetting") && !value["BorderFrameSetting"].IsNull())
    {
        if (!value["BorderFrameSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdBreakSetting.BorderFrameSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_borderFrameSetting.Deserialize(value["BorderFrameSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_borderFrameSettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdBreakSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_adSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adSource.c_str(), allocator).Move(), allocator);
    }

    if (m_lSqueezeSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LSqueezeSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lSqueezeSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pipSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pipSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_borderFrameSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderFrameSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_borderFrameSetting.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AdBreakSetting::GetFormat() const
{
    return m_format;
}

void AdBreakSetting::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AdBreakSetting::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t AdBreakSetting::GetDuration() const
{
    return m_duration;
}

void AdBreakSetting::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AdBreakSetting::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AdBreakSetting::GetAdSource() const
{
    return m_adSource;
}

void AdBreakSetting::SetAdSource(const string& _adSource)
{
    m_adSource = _adSource;
    m_adSourceHasBeenSet = true;
}

bool AdBreakSetting::AdSourceHasBeenSet() const
{
    return m_adSourceHasBeenSet;
}

LSqueezeSetting AdBreakSetting::GetLSqueezeSetting() const
{
    return m_lSqueezeSetting;
}

void AdBreakSetting::SetLSqueezeSetting(const LSqueezeSetting& _lSqueezeSetting)
{
    m_lSqueezeSetting = _lSqueezeSetting;
    m_lSqueezeSettingHasBeenSet = true;
}

bool AdBreakSetting::LSqueezeSettingHasBeenSet() const
{
    return m_lSqueezeSettingHasBeenSet;
}

PipSetting AdBreakSetting::GetPipSetting() const
{
    return m_pipSetting;
}

void AdBreakSetting::SetPipSetting(const PipSetting& _pipSetting)
{
    m_pipSetting = _pipSetting;
    m_pipSettingHasBeenSet = true;
}

bool AdBreakSetting::PipSettingHasBeenSet() const
{
    return m_pipSettingHasBeenSet;
}

BorderFrameSetting AdBreakSetting::GetBorderFrameSetting() const
{
    return m_borderFrameSetting;
}

void AdBreakSetting::SetBorderFrameSetting(const BorderFrameSetting& _borderFrameSetting)
{
    m_borderFrameSetting = _borderFrameSetting;
    m_borderFrameSettingHasBeenSet = true;
}

bool AdBreakSetting::BorderFrameSettingHasBeenSet() const
{
    return m_borderFrameSettingHasBeenSet;
}

