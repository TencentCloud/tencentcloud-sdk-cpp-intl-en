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

#include <tencentcloud/mdp/v20200527/model/HarvestJobResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

HarvestJobResp::HarvestJobResp() :
    m_iDHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_callbackURLHasBeenSet(false)
{
}

CoreInternalOutcome HarvestJobResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("EndpointName") && !value["EndpointName"].IsNull())
    {
        if (!value["EndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.EndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointName = string(value["EndpointName"].GetString());
        m_endpointNameHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Destination") && !value["Destination"].IsNull())
    {
        if (!value["Destination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.Destination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destination = string(value["Destination"].GetString());
        m_destinationHasBeenSet = true;
    }

    if (value.HasMember("Manifest") && !value["Manifest"].IsNull())
    {
        if (!value["Manifest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.Manifest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifest = string(value["Manifest"].GetString());
        m_manifestHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrMessage") && !value["ErrMessage"].IsNull())
    {
        if (!value["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(value["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CallbackURL") && !value["CallbackURL"].IsNull())
    {
        if (!value["CallbackURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarvestJobResp.CallbackURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackURL = string(value["CallbackURL"].GetString());
        m_callbackURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HarvestJobResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
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

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

}


string HarvestJobResp::GetID() const
{
    return m_iD;
}

void HarvestJobResp::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool HarvestJobResp::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string HarvestJobResp::GetChannelName() const
{
    return m_channelName;
}

void HarvestJobResp::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool HarvestJobResp::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string HarvestJobResp::GetEndpointName() const
{
    return m_endpointName;
}

void HarvestJobResp::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool HarvestJobResp::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string HarvestJobResp::GetTimeFormat() const
{
    return m_timeFormat;
}

void HarvestJobResp::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool HarvestJobResp::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string HarvestJobResp::GetStartTime() const
{
    return m_startTime;
}

void HarvestJobResp::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HarvestJobResp::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string HarvestJobResp::GetEndTime() const
{
    return m_endTime;
}

void HarvestJobResp::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HarvestJobResp::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string HarvestJobResp::GetDestination() const
{
    return m_destination;
}

void HarvestJobResp::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool HarvestJobResp::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string HarvestJobResp::GetManifest() const
{
    return m_manifest;
}

void HarvestJobResp::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool HarvestJobResp::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string HarvestJobResp::GetStatus() const
{
    return m_status;
}

void HarvestJobResp::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HarvestJobResp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string HarvestJobResp::GetErrMessage() const
{
    return m_errMessage;
}

void HarvestJobResp::SetErrMessage(const string& _errMessage)
{
    m_errMessage = _errMessage;
    m_errMessageHasBeenSet = true;
}

bool HarvestJobResp::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

uint64_t HarvestJobResp::GetCreateTime() const
{
    return m_createTime;
}

void HarvestJobResp::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HarvestJobResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HarvestJobResp::GetChannelId() const
{
    return m_channelId;
}

void HarvestJobResp::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool HarvestJobResp::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string HarvestJobResp::GetRegion() const
{
    return m_region;
}

void HarvestJobResp::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool HarvestJobResp::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string HarvestJobResp::GetCallbackURL() const
{
    return m_callbackURL;
}

void HarvestJobResp::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool HarvestJobResp::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

