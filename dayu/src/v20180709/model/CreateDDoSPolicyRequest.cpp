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

#include <tencentcloud/dayu/v20180709/model/CreateDDoSPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

CreateDDoSPolicyRequest::CreateDDoSPolicyRequest() :
    m_businessHasBeenSet(false),
    m_dropOptionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portLimitsHasBeenSet(false),
    m_ipAllowDenysHasBeenSet(false),
    m_packetFiltersHasBeenSet(false),
    m_waterPrintHasBeenSet(false)
{
}

string CreateDDoSPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_dropOptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DropOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dropOptions.begin(); itr != m_dropOptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portLimitsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PortLimits";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portLimits.begin(); itr != m_portLimits.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipAllowDenysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpAllowDenys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipAllowDenys.begin(); itr != m_ipAllowDenys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_packetFiltersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PacketFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packetFilters.begin(); itr != m_packetFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_waterPrintHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaterPrint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waterPrint.begin(); itr != m_waterPrint.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDDoSPolicyRequest::GetBusiness() const
{
    return m_business;
}

void CreateDDoSPolicyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<DDoSPolicyDropOption> CreateDDoSPolicyRequest::GetDropOptions() const
{
    return m_dropOptions;
}

void CreateDDoSPolicyRequest::SetDropOptions(const vector<DDoSPolicyDropOption>& _dropOptions)
{
    m_dropOptions = _dropOptions;
    m_dropOptionsHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::DropOptionsHasBeenSet() const
{
    return m_dropOptionsHasBeenSet;
}

string CreateDDoSPolicyRequest::GetName() const
{
    return m_name;
}

void CreateDDoSPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<DDoSPolicyPortLimit> CreateDDoSPolicyRequest::GetPortLimits() const
{
    return m_portLimits;
}

void CreateDDoSPolicyRequest::SetPortLimits(const vector<DDoSPolicyPortLimit>& _portLimits)
{
    m_portLimits = _portLimits;
    m_portLimitsHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::PortLimitsHasBeenSet() const
{
    return m_portLimitsHasBeenSet;
}

vector<IpBlackWhite> CreateDDoSPolicyRequest::GetIpAllowDenys() const
{
    return m_ipAllowDenys;
}

void CreateDDoSPolicyRequest::SetIpAllowDenys(const vector<IpBlackWhite>& _ipAllowDenys)
{
    m_ipAllowDenys = _ipAllowDenys;
    m_ipAllowDenysHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::IpAllowDenysHasBeenSet() const
{
    return m_ipAllowDenysHasBeenSet;
}

vector<DDoSPolicyPacketFilter> CreateDDoSPolicyRequest::GetPacketFilters() const
{
    return m_packetFilters;
}

void CreateDDoSPolicyRequest::SetPacketFilters(const vector<DDoSPolicyPacketFilter>& _packetFilters)
{
    m_packetFilters = _packetFilters;
    m_packetFiltersHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::PacketFiltersHasBeenSet() const
{
    return m_packetFiltersHasBeenSet;
}

vector<WaterPrintPolicy> CreateDDoSPolicyRequest::GetWaterPrint() const
{
    return m_waterPrint;
}

void CreateDDoSPolicyRequest::SetWaterPrint(const vector<WaterPrintPolicy>& _waterPrint)
{
    m_waterPrint = _waterPrint;
    m_waterPrintHasBeenSet = true;
}

bool CreateDDoSPolicyRequest::WaterPrintHasBeenSet() const
{
    return m_waterPrintHasBeenSet;
}


