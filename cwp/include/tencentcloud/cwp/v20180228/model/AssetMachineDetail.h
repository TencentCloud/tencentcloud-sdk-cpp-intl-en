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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetNetworkCardInfo.h>
#include <tencentcloud/cwp/v20180228/model/AssetDiskPartitionInfo.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Basic information on the server list in asset fingerprint
                */
                class AssetMachineDetail : public AbstractModel
                {
                public:
                    AssetMachineDetail();
                    ~AssetMachineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server QUUID
                     * @return Quuid Server QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server QUUID
                     * @param _quuid Server QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Server UUID
                     * @return Uuid Server UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Server UUID
                     * @param _uuid Server UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Private IP address of server
                     * @return MachineIp Private IP address of server
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP address of server
                     * @param _machineIp Private IP address of server
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return MachineName Server name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
                     * @param _machineName Server name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Operating system name
                     * @return OsInfo Operating system name
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置Operating system name
                     * @param _osInfo Operating system name
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取CPU information
                     * @return Cpu CPU information
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU information
                     * @param _cpu CPU information
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory capacity, in GB
                     * @return MemSize Memory capacity, in GB
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Memory capacity, in GB
                     * @param _memSize Memory capacity, in GB
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Memory utilization, in percentage
                     * @return MemLoad Memory utilization, in percentage
                     * 
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置Memory utilization, in percentage
                     * @param _memLoad Memory utilization, in percentage
                     * 
                     */
                    void SetMemLoad(const std::string& _memLoad);

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取Hard disk capacity, in GB
                     * @return DiskSize Hard disk capacity, in GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Hard disk capacity, in GB
                     * @param _diskSize Hard disk capacity, in GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Hard disk usage, in percentage
                     * @return DiskLoad Hard disk usage, in percentage
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置Hard disk usage, in percentage
                     * @param _diskLoad Hard disk usage, in percentage
                     * 
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取Number of partitions
                     * @return PartitionCount Number of partitions
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置Number of partitions
                     * @param _partitionCount Number of partitions
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Host public IP address
                     * @return MachineWanIp Host public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Host public IP address
                     * @param _machineWanIp Host public IP address
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Number of CPU
                     * @return CpuSize Number of CPU
                     * 
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置Number of CPU
                     * @param _cpuSize Number of CPU
                     * 
                     */
                    void SetCpuSize(const uint64_t& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取CPU load
                     * @return CpuLoad CPU load
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置CPU load
                     * @param _cpuLoad CPU load
                     * 
                     */
                    void SetCpuLoad(const std::string& _cpuLoad);

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取Protection Level. 0 Basic Edition; 1 Professional Edition; 2 Premium Edition; 3 General Discount Edition
                     * @return ProtectLevel Protection Level. 0 Basic Edition; 1 Professional Edition; 2 Premium Edition; 3 General Discount Edition
                     * 
                     */
                    uint64_t GetProtectLevel() const;

                    /**
                     * 设置Protection Level. 0 Basic Edition; 1 Professional Edition; 2 Premium Edition; 3 General Discount Edition
                     * @param _protectLevel Protection Level. 0 Basic Edition; 1 Professional Edition; 2 Premium Edition; 3 General Discount Edition
                     * 
                     */
                    void SetProtectLevel(const uint64_t& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取Risk status: UNKNOW - unknown; RISK - risky; SAFT - Safe
                     * @return RiskStatus Risk status: UNKNOW - unknown; RISK - risky; SAFT - Safe
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置Risk status: UNKNOW - unknown; RISK - risky; SAFT - Safe
                     * @param _riskStatus Risk status: UNKNOW - unknown; RISK - risky; SAFT - Safe
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取Days protected
                     * @return ProtectDays Days protected
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 设置Days protected
                     * @param _protectDays Days protected
                     * 
                     */
                    void SetProtectDays(const uint64_t& _protectDays);

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取Professional edition activation time
                     * @return BuyTime Professional edition activation time
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置Professional edition activation time
                     * @param _buyTime Professional edition activation time
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取Professional edition expiration time
                     * @return EndTime Professional edition expiration time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Professional edition expiration time
                     * @param _endTime Professional edition expiration time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Kernel version
                     * @return CoreVersion Kernel version
                     * 
                     */
                    std::string GetCoreVersion() const;

                    /**
                     * 设置Kernel version
                     * @param _coreVersion Kernel version
                     * 
                     */
                    void SetCoreVersion(const std::string& _coreVersion);

                    /**
                     * 判断参数 CoreVersion 是否已赋值
                     * @return CoreVersion 是否已赋值
                     * 
                     */
                    bool CoreVersionHasBeenSet() const;

                    /**
                     * 获取linux/windows
                     * @return OsType linux/windows
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置linux/windows
                     * @param _osType linux/windows
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取Agent version
                     * @return AgentVersion Agent version
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置Agent version
                     * @param _agentVersion Agent version
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取Installation time
                     * @return InstallTime Installation time
                     * 
                     */
                    std::string GetInstallTime() const;

                    /**
                     * 设置Installation time
                     * @param _installTime Installation time
                     * 
                     */
                    void SetInstallTime(const std::string& _installTime);

                    /**
                     * 判断参数 InstallTime 是否已赋值
                     * @return InstallTime 是否已赋值
                     * 
                     */
                    bool InstallTimeHasBeenSet() const;

                    /**
                     * 获取System startup time
                     * @return BootTime System startup time
                     * 
                     */
                    std::string GetBootTime() const;

                    /**
                     * 设置System startup time
                     * @param _bootTime System startup time
                     * 
                     */
                    void SetBootTime(const std::string& _bootTime);

                    /**
                     * 判断参数 BootTime 是否已赋值
                     * @return BootTime 是否已赋值
                     * 
                     */
                    bool BootTimeHasBeenSet() const;

                    /**
                     * 获取Last online time
                     * @return LastLiveTime Last online time
                     * 
                     */
                    std::string GetLastLiveTime() const;

                    /**
                     * 设置Last online time
                     * @param _lastLiveTime Last online time
                     * 
                     */
                    void SetLastLiveTime(const std::string& _lastLiveTime);

                    /**
                     * 判断参数 LastLiveTime 是否已赋值
                     * @return LastLiveTime 是否已赋值
                     * 
                     */
                    bool LastLiveTimeHasBeenSet() const;

                    /**
                     * 获取Manufacturer
                     * @return Producer Manufacturer
                     * 
                     */
                    std::string GetProducer() const;

                    /**
                     * 设置Manufacturer
                     * @param _producer Manufacturer
                     * 
                     */
                    void SetProducer(const std::string& _producer);

                    /**
                     * 判断参数 Producer 是否已赋值
                     * @return Producer 是否已赋值
                     * 
                     */
                    bool ProducerHasBeenSet() const;

                    /**
                     * 获取Serial number
                     * @return SerialNumber Serial number
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置Serial number
                     * @param _serialNumber Serial number
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取Network interface

                     * @return NetCards Network interface

                     * 
                     */
                    std::vector<AssetNetworkCardInfo> GetNetCards() const;

                    /**
                     * 设置Network interface

                     * @param _netCards Network interface

                     * 
                     */
                    void SetNetCards(const std::vector<AssetNetworkCardInfo>& _netCards);

                    /**
                     * 判断参数 NetCards 是否已赋值
                     * @return NetCards 是否已赋值
                     * 
                     */
                    bool NetCardsHasBeenSet() const;

                    /**
                     * 获取Partition
                     * @return Disks Partition
                     * 
                     */
                    std::vector<AssetDiskPartitionInfo> GetDisks() const;

                    /**
                     * 设置Partition
                     * @param _disks Partition
                     * 
                     */
                    void SetDisks(const std::vector<AssetDiskPartitionInfo>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取0: online; 1: offline
                     * @return Status 0: online; 1: offline
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: online; 1: offline
                     * @param _status 0: online; 1: offline
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Business group ID
                     * @return ProjectId Business group ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Business group ID
                     * @param _projectId Business group ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Server model
                     * @return DeviceVersion Server model
                     * 
                     */
                    std::string GetDeviceVersion() const;

                    /**
                     * 设置Server model
                     * @param _deviceVersion Server model
                     * 
                     */
                    void SetDeviceVersion(const std::string& _deviceVersion);

                    /**
                     * 判断参数 DeviceVersion 是否已赋值
                     * @return DeviceVersion 是否已赋值
                     * 
                     */
                    bool DeviceVersionHasBeenSet() const;

                    /**
                     * 获取Offline time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Offline time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Offline time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _offlineTime Offline time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Host ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Host ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Host ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Host ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取CpuLoadVul
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuLoadVul CpuLoadVul
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCpuLoadVul() const;

                    /**
                     * 设置CpuLoadVul
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuLoadVul CpuLoadVul
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuLoadVul(const std::string& _cpuLoadVul);

                    /**
                     * 判断参数 CpuLoadVul 是否已赋值
                     * @return CpuLoadVul 是否已赋值
                     * 
                     */
                    bool CpuLoadVulHasBeenSet() const;

                    /**
                     * 获取Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstTime Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstTime Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                private:

                    /**
                     * Server QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Server UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Private IP address of server
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating system name
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * CPU information
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory capacity, in GB
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Memory utilization, in percentage
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * Hard disk capacity, in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Hard disk usage, in percentage
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Host public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Number of CPU
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * CPU load
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * Protection Level. 0 Basic Edition; 1 Professional Edition; 2 Premium Edition; 3 General Discount Edition
                     */
                    uint64_t m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * Risk status: UNKNOW - unknown; RISK - risky; SAFT - Safe
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * Days protected
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * Professional edition activation time
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * Professional edition expiration time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * linux/windows
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * Agent version
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * Installation time
                     */
                    std::string m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * System startup time
                     */
                    std::string m_bootTime;
                    bool m_bootTimeHasBeenSet;

                    /**
                     * Last online time
                     */
                    std::string m_lastLiveTime;
                    bool m_lastLiveTimeHasBeenSet;

                    /**
                     * Manufacturer
                     */
                    std::string m_producer;
                    bool m_producerHasBeenSet;

                    /**
                     * Serial number
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * Network interface

                     */
                    std::vector<AssetNetworkCardInfo> m_netCards;
                    bool m_netCardsHasBeenSet;

                    /**
                     * Partition
                     */
                    std::vector<AssetDiskPartitionInfo> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * 0: online; 1: offline
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Business group ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Server model
                     */
                    std::string m_deviceVersion;
                    bool m_deviceVersionHasBeenSet;

                    /**
                     * Offline time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Host ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * CpuLoadVul
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cpuLoadVul;
                    bool m_cpuLoadVulHasBeenSet;

                    /**
                     * Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEDETAIL_H_
