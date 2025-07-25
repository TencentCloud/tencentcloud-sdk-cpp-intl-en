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

#include <tencentcloud/mariadb/v20170312/model/DcnDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DcnDetailItem::DcnDetailItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vipv6HasBeenSet(false),
    m_vportHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_dcnFlagHasBeenSet(false),
    m_dcnStatusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_replicaConfigHasBeenSet(false),
    m_replicaStatusHasBeenSet(false),
    m_encryptStatusHasBeenSet(false)
{
}

CoreInternalOutcome DcnDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vipv6") && !value["Vipv6"].IsNull())
    {
        if (!value["Vipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Vipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipv6 = string(value["Vipv6"].GetString());
        m_vipv6HasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("DcnFlag") && !value["DcnFlag"].IsNull())
    {
        if (!value["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = value["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }

    if (value.HasMember("DcnStatus") && !value["DcnStatus"].IsNull())
    {
        if (!value["DcnStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.DcnStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnStatus = value["DcnStatus"].GetInt64();
        m_dcnStatusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ReplicaConfig") && !value["ReplicaConfig"].IsNull())
    {
        if (!value["ReplicaConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.ReplicaConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_replicaConfig.Deserialize(value["ReplicaConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_replicaConfigHasBeenSet = true;
    }

    if (value.HasMember("ReplicaStatus") && !value["ReplicaStatus"].IsNull())
    {
        if (!value["ReplicaStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.ReplicaStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_replicaStatus.Deserialize(value["ReplicaStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_replicaStatusHasBeenSet = true;
    }

    if (value.HasMember("EncryptStatus") && !value["EncryptStatus"].IsNull())
    {
        if (!value["EncryptStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDetailItem.EncryptStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptStatus = value["EncryptStatus"].GetInt64();
        m_encryptStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DcnDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dcnFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnFlag, allocator);
    }

    if (m_dcnStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnStatus, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_replicaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_replicaConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_replicaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_replicaStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptStatus, allocator);
    }

}


string DcnDetailItem::GetInstanceId() const
{
    return m_instanceId;
}

void DcnDetailItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DcnDetailItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DcnDetailItem::GetInstanceName() const
{
    return m_instanceName;
}

void DcnDetailItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DcnDetailItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DcnDetailItem::GetRegion() const
{
    return m_region;
}

void DcnDetailItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DcnDetailItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DcnDetailItem::GetZone() const
{
    return m_zone;
}

void DcnDetailItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DcnDetailItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DcnDetailItem::GetVip() const
{
    return m_vip;
}

void DcnDetailItem::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DcnDetailItem::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string DcnDetailItem::GetVipv6() const
{
    return m_vipv6;
}

void DcnDetailItem::SetVipv6(const string& _vipv6)
{
    m_vipv6 = _vipv6;
    m_vipv6HasBeenSet = true;
}

bool DcnDetailItem::Vipv6HasBeenSet() const
{
    return m_vipv6HasBeenSet;
}

int64_t DcnDetailItem::GetVport() const
{
    return m_vport;
}

void DcnDetailItem::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DcnDetailItem::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t DcnDetailItem::GetStatus() const
{
    return m_status;
}

void DcnDetailItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DcnDetailItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DcnDetailItem::GetStatusDesc() const
{
    return m_statusDesc;
}

void DcnDetailItem::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DcnDetailItem::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DcnDetailItem::GetDcnFlag() const
{
    return m_dcnFlag;
}

void DcnDetailItem::SetDcnFlag(const int64_t& _dcnFlag)
{
    m_dcnFlag = _dcnFlag;
    m_dcnFlagHasBeenSet = true;
}

bool DcnDetailItem::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}

int64_t DcnDetailItem::GetDcnStatus() const
{
    return m_dcnStatus;
}

void DcnDetailItem::SetDcnStatus(const int64_t& _dcnStatus)
{
    m_dcnStatus = _dcnStatus;
    m_dcnStatusHasBeenSet = true;
}

bool DcnDetailItem::DcnStatusHasBeenSet() const
{
    return m_dcnStatusHasBeenSet;
}

int64_t DcnDetailItem::GetCpu() const
{
    return m_cpu;
}

void DcnDetailItem::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DcnDetailItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DcnDetailItem::GetMemory() const
{
    return m_memory;
}

void DcnDetailItem::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DcnDetailItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DcnDetailItem::GetStorage() const
{
    return m_storage;
}

void DcnDetailItem::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DcnDetailItem::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t DcnDetailItem::GetPayMode() const
{
    return m_payMode;
}

void DcnDetailItem::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DcnDetailItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DcnDetailItem::GetCreateTime() const
{
    return m_createTime;
}

void DcnDetailItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DcnDetailItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DcnDetailItem::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DcnDetailItem::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DcnDetailItem::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DcnDetailItem::GetInstanceType() const
{
    return m_instanceType;
}

void DcnDetailItem::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DcnDetailItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

DCNReplicaConfig DcnDetailItem::GetReplicaConfig() const
{
    return m_replicaConfig;
}

void DcnDetailItem::SetReplicaConfig(const DCNReplicaConfig& _replicaConfig)
{
    m_replicaConfig = _replicaConfig;
    m_replicaConfigHasBeenSet = true;
}

bool DcnDetailItem::ReplicaConfigHasBeenSet() const
{
    return m_replicaConfigHasBeenSet;
}

DCNReplicaStatus DcnDetailItem::GetReplicaStatus() const
{
    return m_replicaStatus;
}

void DcnDetailItem::SetReplicaStatus(const DCNReplicaStatus& _replicaStatus)
{
    m_replicaStatus = _replicaStatus;
    m_replicaStatusHasBeenSet = true;
}

bool DcnDetailItem::ReplicaStatusHasBeenSet() const
{
    return m_replicaStatusHasBeenSet;
}

int64_t DcnDetailItem::GetEncryptStatus() const
{
    return m_encryptStatus;
}

void DcnDetailItem::SetEncryptStatus(const int64_t& _encryptStatus)
{
    m_encryptStatus = _encryptStatus;
    m_encryptStatusHasBeenSet = true;
}

bool DcnDetailItem::EncryptStatusHasBeenSet() const
{
    return m_encryptStatusHasBeenSet;
}

