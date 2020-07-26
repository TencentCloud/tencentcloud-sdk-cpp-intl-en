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

#include <tencentcloud/mdp/v20200527/model/ChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

ChannelInfo::ChannelInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_pointsHasBeenSet(false)
{
}

CoreInternalOutcome ChannelInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ChannelInfo.Points` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_points.Deserialize(value["Points"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_pointsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_points.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChannelInfo::GetId() const
{
    return m_id;
}

void ChannelInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ChannelInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ChannelInfo::GetName() const
{
    return m_name;
}

void ChannelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChannelInfo::GetProtocol() const
{
    return m_protocol;
}

void ChannelInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ChannelInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

PointInfo ChannelInfo::GetPoints() const
{
    return m_points;
}

void ChannelInfo::SetPoints(const PointInfo& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool ChannelInfo::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

