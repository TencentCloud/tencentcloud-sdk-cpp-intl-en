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

#include <tencentcloud/cvm/v20170312/model/ChcHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ChcHost::ChcHost() :
    m_chcIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_bmcVirtualPrivateCloudHasBeenSet(false),
    m_bmcIpHasBeenSet(false),
    m_bmcSecurityGroupIdsHasBeenSet(false),
    m_deployVirtualPrivateCloudHasBeenSet(false),
    m_deployIpHasBeenSet(false),
    m_deploySecurityGroupIdsHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_hardwareDescriptionHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_bmcMACHasBeenSet(false),
    m_deployMACHasBeenSet(false),
    m_tenantTypeHasBeenSet(false),
    m_deployExtraConfigHasBeenSet(false)
{
}

CoreInternalOutcome ChcHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChcId") && !value["ChcId"].IsNull())
    {
        if (!value["ChcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.ChcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chcId = string(value["ChcId"].GetString());
        m_chcIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("BmcVirtualPrivateCloud") && !value["BmcVirtualPrivateCloud"].IsNull())
    {
        if (!value["BmcVirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.BmcVirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bmcVirtualPrivateCloud.Deserialize(value["BmcVirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bmcVirtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("BmcIp") && !value["BmcIp"].IsNull())
    {
        if (!value["BmcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.BmcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bmcIp = string(value["BmcIp"].GetString());
        m_bmcIpHasBeenSet = true;
    }

    if (value.HasMember("BmcSecurityGroupIds") && !value["BmcSecurityGroupIds"].IsNull())
    {
        if (!value["BmcSecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChcHost.BmcSecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BmcSecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bmcSecurityGroupIds.push_back((*itr).GetString());
        }
        m_bmcSecurityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("DeployVirtualPrivateCloud") && !value["DeployVirtualPrivateCloud"].IsNull())
    {
        if (!value["DeployVirtualPrivateCloud"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeployVirtualPrivateCloud` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployVirtualPrivateCloud.Deserialize(value["DeployVirtualPrivateCloud"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployVirtualPrivateCloudHasBeenSet = true;
    }

    if (value.HasMember("DeployIp") && !value["DeployIp"].IsNull())
    {
        if (!value["DeployIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeployIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployIp = string(value["DeployIp"].GetString());
        m_deployIpHasBeenSet = true;
    }

    if (value.HasMember("DeploySecurityGroupIds") && !value["DeploySecurityGroupIds"].IsNull())
    {
        if (!value["DeploySecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeploySecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DeploySecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deploySecurityGroupIds.push_back((*itr).GetString());
        }
        m_deploySecurityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("HardwareDescription") && !value["HardwareDescription"].IsNull())
    {
        if (!value["HardwareDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.HardwareDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareDescription = string(value["HardwareDescription"].GetString());
        m_hardwareDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.Disk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disk = string(value["Disk"].GetString());
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("BmcMAC") && !value["BmcMAC"].IsNull())
    {
        if (!value["BmcMAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.BmcMAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bmcMAC = string(value["BmcMAC"].GetString());
        m_bmcMACHasBeenSet = true;
    }

    if (value.HasMember("DeployMAC") && !value["DeployMAC"].IsNull())
    {
        if (!value["DeployMAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeployMAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMAC = string(value["DeployMAC"].GetString());
        m_deployMACHasBeenSet = true;
    }

    if (value.HasMember("TenantType") && !value["TenantType"].IsNull())
    {
        if (!value["TenantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.TenantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantType = string(value["TenantType"].GetString());
        m_tenantTypeHasBeenSet = true;
    }

    if (value.HasMember("DeployExtraConfig") && !value["DeployExtraConfig"].IsNull())
    {
        if (!value["DeployExtraConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChcHost.DeployExtraConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployExtraConfig.Deserialize(value["DeployExtraConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployExtraConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChcHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chcId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bmcVirtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcVirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bmcVirtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bmcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bmcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_bmcSecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcSecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bmcSecurityGroupIds.begin(); itr != m_bmcSecurityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deployVirtualPrivateCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployVirtualPrivateCloud.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deployIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployIp.c_str(), allocator).Move(), allocator);
    }

    if (m_deploySecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploySecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deploySecurityGroupIds.begin(); itr != m_deploySecurityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disk.c_str(), allocator).Move(), allocator);
    }

    if (m_bmcMACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcMAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bmcMAC.c_str(), allocator).Move(), allocator);
    }

    if (m_deployMACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMAC.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantType.c_str(), allocator).Move(), allocator);
    }

    if (m_deployExtraConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployExtraConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployExtraConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChcHost::GetChcId() const
{
    return m_chcId;
}

void ChcHost::SetChcId(const string& _chcId)
{
    m_chcId = _chcId;
    m_chcIdHasBeenSet = true;
}

bool ChcHost::ChcIdHasBeenSet() const
{
    return m_chcIdHasBeenSet;
}

string ChcHost::GetInstanceName() const
{
    return m_instanceName;
}

void ChcHost::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ChcHost::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ChcHost::GetSerialNumber() const
{
    return m_serialNumber;
}

void ChcHost::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool ChcHost::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string ChcHost::GetInstanceState() const
{
    return m_instanceState;
}

void ChcHost::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool ChcHost::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string ChcHost::GetDeviceType() const
{
    return m_deviceType;
}

void ChcHost::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ChcHost::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

Placement ChcHost::GetPlacement() const
{
    return m_placement;
}

void ChcHost::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ChcHost::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

VirtualPrivateCloud ChcHost::GetBmcVirtualPrivateCloud() const
{
    return m_bmcVirtualPrivateCloud;
}

void ChcHost::SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud)
{
    m_bmcVirtualPrivateCloud = _bmcVirtualPrivateCloud;
    m_bmcVirtualPrivateCloudHasBeenSet = true;
}

bool ChcHost::BmcVirtualPrivateCloudHasBeenSet() const
{
    return m_bmcVirtualPrivateCloudHasBeenSet;
}

string ChcHost::GetBmcIp() const
{
    return m_bmcIp;
}

void ChcHost::SetBmcIp(const string& _bmcIp)
{
    m_bmcIp = _bmcIp;
    m_bmcIpHasBeenSet = true;
}

bool ChcHost::BmcIpHasBeenSet() const
{
    return m_bmcIpHasBeenSet;
}

vector<string> ChcHost::GetBmcSecurityGroupIds() const
{
    return m_bmcSecurityGroupIds;
}

void ChcHost::SetBmcSecurityGroupIds(const vector<string>& _bmcSecurityGroupIds)
{
    m_bmcSecurityGroupIds = _bmcSecurityGroupIds;
    m_bmcSecurityGroupIdsHasBeenSet = true;
}

bool ChcHost::BmcSecurityGroupIdsHasBeenSet() const
{
    return m_bmcSecurityGroupIdsHasBeenSet;
}

VirtualPrivateCloud ChcHost::GetDeployVirtualPrivateCloud() const
{
    return m_deployVirtualPrivateCloud;
}

void ChcHost::SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud)
{
    m_deployVirtualPrivateCloud = _deployVirtualPrivateCloud;
    m_deployVirtualPrivateCloudHasBeenSet = true;
}

bool ChcHost::DeployVirtualPrivateCloudHasBeenSet() const
{
    return m_deployVirtualPrivateCloudHasBeenSet;
}

string ChcHost::GetDeployIp() const
{
    return m_deployIp;
}

void ChcHost::SetDeployIp(const string& _deployIp)
{
    m_deployIp = _deployIp;
    m_deployIpHasBeenSet = true;
}

bool ChcHost::DeployIpHasBeenSet() const
{
    return m_deployIpHasBeenSet;
}

vector<string> ChcHost::GetDeploySecurityGroupIds() const
{
    return m_deploySecurityGroupIds;
}

void ChcHost::SetDeploySecurityGroupIds(const vector<string>& _deploySecurityGroupIds)
{
    m_deploySecurityGroupIds = _deploySecurityGroupIds;
    m_deploySecurityGroupIdsHasBeenSet = true;
}

bool ChcHost::DeploySecurityGroupIdsHasBeenSet() const
{
    return m_deploySecurityGroupIdsHasBeenSet;
}

string ChcHost::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void ChcHost::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool ChcHost::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string ChcHost::GetCreatedTime() const
{
    return m_createdTime;
}

void ChcHost::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ChcHost::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ChcHost::GetHardwareDescription() const
{
    return m_hardwareDescription;
}

void ChcHost::SetHardwareDescription(const string& _hardwareDescription)
{
    m_hardwareDescription = _hardwareDescription;
    m_hardwareDescriptionHasBeenSet = true;
}

bool ChcHost::HardwareDescriptionHasBeenSet() const
{
    return m_hardwareDescriptionHasBeenSet;
}

int64_t ChcHost::GetCPU() const
{
    return m_cPU;
}

void ChcHost::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ChcHost::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

int64_t ChcHost::GetMemory() const
{
    return m_memory;
}

void ChcHost::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ChcHost::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ChcHost::GetDisk() const
{
    return m_disk;
}

void ChcHost::SetDisk(const string& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool ChcHost::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

string ChcHost::GetBmcMAC() const
{
    return m_bmcMAC;
}

void ChcHost::SetBmcMAC(const string& _bmcMAC)
{
    m_bmcMAC = _bmcMAC;
    m_bmcMACHasBeenSet = true;
}

bool ChcHost::BmcMACHasBeenSet() const
{
    return m_bmcMACHasBeenSet;
}

string ChcHost::GetDeployMAC() const
{
    return m_deployMAC;
}

void ChcHost::SetDeployMAC(const string& _deployMAC)
{
    m_deployMAC = _deployMAC;
    m_deployMACHasBeenSet = true;
}

bool ChcHost::DeployMACHasBeenSet() const
{
    return m_deployMACHasBeenSet;
}

string ChcHost::GetTenantType() const
{
    return m_tenantType;
}

void ChcHost::SetTenantType(const string& _tenantType)
{
    m_tenantType = _tenantType;
    m_tenantTypeHasBeenSet = true;
}

bool ChcHost::TenantTypeHasBeenSet() const
{
    return m_tenantTypeHasBeenSet;
}

ChcDeployExtraConfig ChcHost::GetDeployExtraConfig() const
{
    return m_deployExtraConfig;
}

void ChcHost::SetDeployExtraConfig(const ChcDeployExtraConfig& _deployExtraConfig)
{
    m_deployExtraConfig = _deployExtraConfig;
    m_deployExtraConfigHasBeenSet = true;
}

bool ChcHost::DeployExtraConfigHasBeenSet() const
{
    return m_deployExtraConfigHasBeenSet;
}

