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

#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageHarvestJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

CreateStreamPackageHarvestJobRequest::CreateStreamPackageHarvestJobRequest() :
    m_iDHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_manifestHasBeenSet(false)
{
}

string CreateStreamPackageHarvestJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageHarvestJobRequest::GetID() const
{
    return m_iD;
}

void CreateStreamPackageHarvestJobRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetChannelName() const
{
    return m_channelName;
}

void CreateStreamPackageHarvestJobRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetEndpointName() const
{
    return m_endpointName;
}

void CreateStreamPackageHarvestJobRequest::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetTimeFormat() const
{
    return m_timeFormat;
}

void CreateStreamPackageHarvestJobRequest::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateStreamPackageHarvestJobRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateStreamPackageHarvestJobRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetDestination() const
{
    return m_destination;
}

void CreateStreamPackageHarvestJobRequest::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string CreateStreamPackageHarvestJobRequest::GetManifest() const
{
    return m_manifest;
}

void CreateStreamPackageHarvestJobRequest::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool CreateStreamPackageHarvestJobRequest::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}


