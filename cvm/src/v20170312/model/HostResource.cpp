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

#include <tencentcloud/cvm/v20170312/model/HostResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

HostResource::HostResource() :
    m_cpuTotalHasBeenSet(false),
    m_cpuAvailableHasBeenSet(false),
    m_memTotalHasBeenSet(false),
    m_memAvailableHasBeenSet(false),
    m_diskTotalHasBeenSet(false),
    m_diskAvailableHasBeenSet(false),
    m_diskTypeHasBeenSet(false)
{
}

CoreInternalOutcome HostResource::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuTotal") && !value["CpuTotal"].IsNull())
    {
        if (!value["CpuTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HostResource.CpuTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTotal = value["CpuTotal"].GetUint64();
        m_cpuTotalHasBeenSet = true;
    }

    if (value.HasMember("CpuAvailable") && !value["CpuAvailable"].IsNull())
    {
        if (!value["CpuAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HostResource.CpuAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAvailable = value["CpuAvailable"].GetUint64();
        m_cpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("MemTotal") && !value["MemTotal"].IsNull())
    {
        if (!value["MemTotal"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `HostResource.MemTotal` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memTotal = value["MemTotal"].GetDouble();
        m_memTotalHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `HostResource.MemAvailable` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memAvailable = value["MemAvailable"].GetDouble();
        m_memAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskTotal") && !value["DiskTotal"].IsNull())
    {
        if (!value["DiskTotal"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HostResource.DiskTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskTotal = value["DiskTotal"].GetUint64();
        m_diskTotalHasBeenSet = true;
    }

    if (value.HasMember("DiskAvailable") && !value["DiskAvailable"].IsNull())
    {
        if (!value["DiskAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `HostResource.DiskAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAvailable = value["DiskAvailable"].GetUint64();
        m_diskAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `HostResource.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostResource::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cpuTotalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTotal, allocator);
    }

    if (m_cpuAvailableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAvailable, allocator);
    }

    if (m_memTotalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memTotal, allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAvailable, allocator);
    }

    if (m_diskTotalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskTotal, allocator);
    }

    if (m_diskAvailableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAvailable, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t HostResource::GetCpuTotal() const
{
    return m_cpuTotal;
}

void HostResource::SetCpuTotal(const uint64_t& _cpuTotal)
{
    m_cpuTotal = _cpuTotal;
    m_cpuTotalHasBeenSet = true;
}

bool HostResource::CpuTotalHasBeenSet() const
{
    return m_cpuTotalHasBeenSet;
}

uint64_t HostResource::GetCpuAvailable() const
{
    return m_cpuAvailable;
}

void HostResource::SetCpuAvailable(const uint64_t& _cpuAvailable)
{
    m_cpuAvailable = _cpuAvailable;
    m_cpuAvailableHasBeenSet = true;
}

bool HostResource::CpuAvailableHasBeenSet() const
{
    return m_cpuAvailableHasBeenSet;
}

double HostResource::GetMemTotal() const
{
    return m_memTotal;
}

void HostResource::SetMemTotal(const double& _memTotal)
{
    m_memTotal = _memTotal;
    m_memTotalHasBeenSet = true;
}

bool HostResource::MemTotalHasBeenSet() const
{
    return m_memTotalHasBeenSet;
}

double HostResource::GetMemAvailable() const
{
    return m_memAvailable;
}

void HostResource::SetMemAvailable(const double& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool HostResource::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

uint64_t HostResource::GetDiskTotal() const
{
    return m_diskTotal;
}

void HostResource::SetDiskTotal(const uint64_t& _diskTotal)
{
    m_diskTotal = _diskTotal;
    m_diskTotalHasBeenSet = true;
}

bool HostResource::DiskTotalHasBeenSet() const
{
    return m_diskTotalHasBeenSet;
}

uint64_t HostResource::GetDiskAvailable() const
{
    return m_diskAvailable;
}

void HostResource::SetDiskAvailable(const uint64_t& _diskAvailable)
{
    m_diskAvailable = _diskAvailable;
    m_diskAvailableHasBeenSet = true;
}

bool HostResource::DiskAvailableHasBeenSet() const
{
    return m_diskAvailableHasBeenSet;
}

string HostResource::GetDiskType() const
{
    return m_diskType;
}

void HostResource::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool HostResource::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

