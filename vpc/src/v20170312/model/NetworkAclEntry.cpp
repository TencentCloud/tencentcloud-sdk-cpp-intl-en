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

#include <tencentcloud/vpc/v20170312/model/NetworkAclEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetworkAclEntry::NetworkAclEntry() :
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAclEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclEntry.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAclEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string NetworkAclEntry::GetProtocol() const
{
    return m_protocol;
}

void NetworkAclEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NetworkAclEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NetworkAclEntry::GetPort() const
{
    return m_port;
}

void NetworkAclEntry::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NetworkAclEntry::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NetworkAclEntry::GetCidrBlock() const
{
    return m_cidrBlock;
}

void NetworkAclEntry::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool NetworkAclEntry::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string NetworkAclEntry::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void NetworkAclEntry::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool NetworkAclEntry::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

string NetworkAclEntry::GetAction() const
{
    return m_action;
}

void NetworkAclEntry::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool NetworkAclEntry::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string NetworkAclEntry::GetDescription() const
{
    return m_description;
}

void NetworkAclEntry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NetworkAclEntry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NetworkAclEntry::GetModifyTime() const
{
    return m_modifyTime;
}

void NetworkAclEntry::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool NetworkAclEntry::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

