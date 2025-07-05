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

#include <tencentcloud/privatedns/v20201028/model/EndpointService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

EndpointService::EndpointService() :
    m_accessTypeHasBeenSet(false),
    m_pipHasBeenSet(false),
    m_pportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_accessGatewayIdHasBeenSet(false),
    m_snatVipCidrHasBeenSet(false),
    m_snatVipSetHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome EndpointService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Pip") && !value["Pip"].IsNull())
    {
        if (!value["Pip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Pip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pip = string(value["Pip"].GetString());
        m_pipHasBeenSet = true;
    }

    if (value.HasMember("Pport") && !value["Pport"].IsNull())
    {
        if (!value["Pport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Pport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pport = value["Pport"].GetInt64();
        m_pportHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AccessGatewayId") && !value["AccessGatewayId"].IsNull())
    {
        if (!value["AccessGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.AccessGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGatewayId = string(value["AccessGatewayId"].GetString());
        m_accessGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("SnatVipCidr") && !value["SnatVipCidr"].IsNull())
    {
        if (!value["SnatVipCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.SnatVipCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snatVipCidr = string(value["SnatVipCidr"].GetString());
        m_snatVipCidrHasBeenSet = true;
    }

    if (value.HasMember("SnatVipSet") && !value["SnatVipSet"].IsNull())
    {
        if (!value["SnatVipSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.SnatVipSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snatVipSet = string(value["SnatVipSet"].GetString());
        m_snatVipSetHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointService.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_pipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pip.c_str(), allocator).Move(), allocator);
    }

    if (m_pportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pport, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
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

    if (m_snatVipCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatVipCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snatVipCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_snatVipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatVipSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snatVipSet.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string EndpointService::GetAccessType() const
{
    return m_accessType;
}

void EndpointService::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool EndpointService::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string EndpointService::GetPip() const
{
    return m_pip;
}

void EndpointService::SetPip(const string& _pip)
{
    m_pip = _pip;
    m_pipHasBeenSet = true;
}

bool EndpointService::PipHasBeenSet() const
{
    return m_pipHasBeenSet;
}

int64_t EndpointService::GetPport() const
{
    return m_pport;
}

void EndpointService::SetPport(const int64_t& _pport)
{
    m_pport = _pport;
    m_pportHasBeenSet = true;
}

bool EndpointService::PportHasBeenSet() const
{
    return m_pportHasBeenSet;
}

string EndpointService::GetVpcId() const
{
    return m_vpcId;
}

void EndpointService::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EndpointService::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EndpointService::GetVip() const
{
    return m_vip;
}

void EndpointService::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool EndpointService::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t EndpointService::GetVport() const
{
    return m_vport;
}

void EndpointService::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool EndpointService::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string EndpointService::GetProto() const
{
    return m_proto;
}

void EndpointService::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool EndpointService::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string EndpointService::GetSubnetId() const
{
    return m_subnetId;
}

void EndpointService::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EndpointService::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EndpointService::GetAccessGatewayId() const
{
    return m_accessGatewayId;
}

void EndpointService::SetAccessGatewayId(const string& _accessGatewayId)
{
    m_accessGatewayId = _accessGatewayId;
    m_accessGatewayIdHasBeenSet = true;
}

bool EndpointService::AccessGatewayIdHasBeenSet() const
{
    return m_accessGatewayIdHasBeenSet;
}

string EndpointService::GetSnatVipCidr() const
{
    return m_snatVipCidr;
}

void EndpointService::SetSnatVipCidr(const string& _snatVipCidr)
{
    m_snatVipCidr = _snatVipCidr;
    m_snatVipCidrHasBeenSet = true;
}

bool EndpointService::SnatVipCidrHasBeenSet() const
{
    return m_snatVipCidrHasBeenSet;
}

string EndpointService::GetSnatVipSet() const
{
    return m_snatVipSet;
}

void EndpointService::SetSnatVipSet(const string& _snatVipSet)
{
    m_snatVipSet = _snatVipSet;
    m_snatVipSetHasBeenSet = true;
}

bool EndpointService::SnatVipSetHasBeenSet() const
{
    return m_snatVipSetHasBeenSet;
}

string EndpointService::GetRegion() const
{
    return m_region;
}

void EndpointService::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EndpointService::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

