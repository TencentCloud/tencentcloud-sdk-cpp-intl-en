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

#include <tencentcloud/mdl/v20200326/model/DescribeTranscodeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DescribeTranscodeDetailInfo::DescribeTranscodeDetailInfo() :
    m_channelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_moduleCodecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTranscodeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ModuleCodec") && !value["ModuleCodec"].IsNull())
    {
        if (!value["ModuleCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.ModuleCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCodec = string(value["ModuleCodec"].GetString());
        m_moduleCodecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTranscodeDetailInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTranscodeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_moduleCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


string DescribeTranscodeDetailInfo::GetChannelId() const
{
    return m_channelId;
}

void DescribeTranscodeDetailInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetStartTime() const
{
    return m_startTime;
}

void DescribeTranscodeDetailInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetEndTime() const
{
    return m_endTime;
}

void DescribeTranscodeDetailInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeTranscodeDetailInfo::GetDuration() const
{
    return m_duration;
}

void DescribeTranscodeDetailInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetModuleCodec() const
{
    return m_moduleCodec;
}

void DescribeTranscodeDetailInfo::SetModuleCodec(const string& _moduleCodec)
{
    m_moduleCodec = _moduleCodec;
    m_moduleCodecHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::ModuleCodecHasBeenSet() const
{
    return m_moduleCodecHasBeenSet;
}

int64_t DescribeTranscodeDetailInfo::GetBitrate() const
{
    return m_bitrate;
}

void DescribeTranscodeDetailInfo::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetType() const
{
    return m_type;
}

void DescribeTranscodeDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetPushDomain() const
{
    return m_pushDomain;
}

void DescribeTranscodeDetailInfo::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string DescribeTranscodeDetailInfo::GetResolution() const
{
    return m_resolution;
}

void DescribeTranscodeDetailInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool DescribeTranscodeDetailInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

