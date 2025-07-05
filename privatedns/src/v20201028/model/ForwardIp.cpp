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

#include <tencentcloud/privatedns/v20201028/model/ForwardIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

ForwardIp::ForwardIp() :
    m_accessTypeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_ipNumHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_accessGatewayIdHasBeenSet(false)
{
}

CoreInternalOutcome ForwardIp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("IpNum") && !value["IpNum"].IsNull())
    {
        if (!value["IpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.IpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipNum = value["IpNum"].GetInt64();
        m_ipNumHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AccessGatewayId") && !value["AccessGatewayId"].IsNull())
    {
        if (!value["AccessGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardIp.AccessGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGatewayId = string(value["AccessGatewayId"].GetString());
        m_accessGatewayIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardIp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_ipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipNum, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessGatewayId.c_str(), allocator).Move(), allocator);
    }

}


string ForwardIp::GetAccessType() const
{
    return m_accessType;
}

void ForwardIp::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ForwardIp::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string ForwardIp::GetHost() const
{
    return m_host;
}

void ForwardIp::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ForwardIp::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t ForwardIp::GetPort() const
{
    return m_port;
}

void ForwardIp::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ForwardIp::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t ForwardIp::GetIpNum() const
{
    return m_ipNum;
}

void ForwardIp::SetIpNum(const int64_t& _ipNum)
{
    m_ipNum = _ipNum;
    m_ipNumHasBeenSet = true;
}

bool ForwardIp::IpNumHasBeenSet() const
{
    return m_ipNumHasBeenSet;
}

string ForwardIp::GetVpcId() const
{
    return m_vpcId;
}

void ForwardIp::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ForwardIp::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ForwardIp::GetSubnetId() const
{
    return m_subnetId;
}

void ForwardIp::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ForwardIp::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ForwardIp::GetAccessGatewayId() const
{
    return m_accessGatewayId;
}

void ForwardIp::SetAccessGatewayId(const string& _accessGatewayId)
{
    m_accessGatewayId = _accessGatewayId;
    m_accessGatewayIdHasBeenSet = true;
}

bool ForwardIp::AccessGatewayIdHasBeenSet() const
{
    return m_accessGatewayIdHasBeenSet;
}

