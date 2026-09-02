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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>
#include <tencentcloud/csip/v20221121/model/DiskPartitionInfo.h>
#include <tencentcloud/csip/v20221121/model/NetworkCardInfo.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/AssetTagModifyAssetItem.h>
#include <tencentcloud/csip/v20221121/model/ContainerEnvInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host list
                */
                class MachineDetail : public AbstractModel
                {
                public:
                    MachineDetail();
                    ~MachineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent status</p>
                     * @return AgentStatus <p>Agent status</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>Agent status</p>
                     * @param _agentStatus <p>Agent status</p>
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取<p>Agent version</p>
                     * @return AgentVersion <p>Agent version</p>
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>Agent version</p>
                     * @param _agentVersion <p>Agent version</p>
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
                     * 获取<p>Account AppId</p>
                     * @return AppId <p>Account AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Account AppId</p>
                     * @param _appId <p>Account AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Asset type name</p>
                     * @return AssetTypeName <p>Asset type name</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>Asset type name</p>
                     * @param _assetTypeName <p>Asset type name</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>System boot time (Unix timestamp).</p>
                     * @return BootTime <p>System boot time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetBootTime() const;

                    /**
                     * 设置<p>System boot time (Unix timestamp).</p>
                     * @param _bootTime <p>System boot time (Unix timestamp).</p>
                     * 
                     */
                    void SetBootTime(const int64_t& _bootTime);

                    /**
                     * 判断参数 BootTime 是否已赋值
                     * @return BootTime 是否已赋值
                     * 
                     */
                    bool BootTimeHasBeenSet() const;

                    /**
                     * 获取<p>Purchase time (Unix timestamp).</p>
                     * @return BuyTime <p>Purchase time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置<p>Purchase time (Unix timestamp).</p>
                     * @param _buyTime <p>Purchase time (Unix timestamp).</p>
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Cloud service provider</p>
                     * @return CloudFromEnum <p>Cloud service provider</p>
                     * 
                     */
                    std::string GetCloudFromEnum() const;

                    /**
                     * 设置<p>Cloud service provider</p>
                     * @param _cloudFromEnum <p>Cloud service provider</p>
                     * 
                     */
                    void SetCloudFromEnum(const std::string& _cloudFromEnum);

                    /**
                     * 判断参数 CloudFromEnum 是否已赋值
                     * @return CloudFromEnum 是否已赋值
                     * 
                     */
                    bool CloudFromEnumHasBeenSet() const;

                    /**
                     * 获取<p>Cloud tag list</p>
                     * @return CloudTags <p>Cloud tag list</p>
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置<p>Cloud tag list</p>
                     * @param _cloudTags <p>Cloud tag list</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>Kernel version</p>
                     * @return CoreVersion <p>Kernel version</p>
                     * 
                     */
                    std::string GetCoreVersion() const;

                    /**
                     * 设置<p>Kernel version</p>
                     * @param _coreVersion <p>Kernel version</p>
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
                     * 获取<p>CPU info</p>
                     * @return Cpu <p>CPU info</p>
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置<p>CPU info</p>
                     * @param _cpu <p>CPU info</p>
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
                     * 获取<p>CPU load</p>
                     * @return CpuLoad <p>CPU load</p>
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置<p>CPU load</p>
                     * @param _cpuLoad <p>CPU load</p>
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
                     * 获取<p>CPU cores.</p>
                     * @return CpuSize <p>CPU cores.</p>
                     * 
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置<p>CPU cores.</p>
                     * @param _cpuSize <p>CPU cores.</p>
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
                     * 获取<p>Device model</p>
                     * @return DeviceVersion <p>Device model</p>
                     * 
                     */
                    std::string GetDeviceVersion() const;

                    /**
                     * 设置<p>Device model</p>
                     * @param _deviceVersion <p>Device model</p>
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
                     * 获取<p>Disk partition information</p>
                     * @return Disks <p>Disk partition information</p>
                     * 
                     */
                    std::vector<DiskPartitionInfo> GetDisks() const;

                    /**
                     * 设置<p>Disk partition information</p>
                     * @param _disks <p>Disk partition information</p>
                     * 
                     */
                    void SetDisks(const std::vector<DiskPartitionInfo>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time (Unix timestamp).</p>
                     * @return EndTime <p>Expiration time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Expiration time (Unix timestamp).</p>
                     * @param _endTime <p>Expiration time (Unix timestamp).</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Exposure status</p>
                     * @return ExposedStatus <p>Exposure status</p>
                     * 
                     */
                    std::string GetExposedStatus() const;

                    /**
                     * 设置<p>Exposure status</p>
                     * @param _exposedStatus <p>Exposure status</p>
                     * 
                     */
                    void SetExposedStatus(const std::string& _exposedStatus);

                    /**
                     * 判断参数 ExposedStatus 是否已赋值
                     * @return ExposedStatus 是否已赋值
                     * 
                     */
                    bool ExposedStatusHasBeenSet() const;

                    /**
                     * 获取<p>Installation time (Unix timestamp).</p>
                     * @return InstallTime <p>Installation time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetInstallTime() const;

                    /**
                     * 设置<p>Installation time (Unix timestamp).</p>
                     * @param _installTime <p>Installation time (Unix timestamp).</p>
                     * 
                     */
                    void SetInstallTime(const int64_t& _installTime);

                    /**
                     * 判断参数 InstallTime 是否已赋值
                     * @return InstallTime 是否已赋值
                     * 
                     */
                    bool InstallTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceID <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceID <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Instance status</p>
                     * @return InstanceStatus <p>Instance status</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status</p>
                     * @param _instanceStatus <p>Instance status</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Kernel version</p>
                     * @return KernelVersion <p>Kernel version</p>
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置<p>Kernel version</p>
                     * @param _kernelVersion <p>Kernel version</p>
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取<p>Last online time (Unix timestamp).</p>
                     * @return LatestLiveTime <p>Last online time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetLatestLiveTime() const;

                    /**
                     * 设置<p>Last online time (Unix timestamp).</p>
                     * @param _latestLiveTime <p>Last online time (Unix timestamp).</p>
                     * 
                     */
                    void SetLatestLiveTime(const int64_t& _latestLiveTime);

                    /**
                     * 判断参数 LatestLiveTime 是否已赋值
                     * @return LatestLiveTime 是否已赋值
                     * 
                     */
                    bool LatestLiveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last offline time (Unix timestamp).</p>
                     * @return LatestOfflineTime <p>Last offline time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetLatestOfflineTime() const;

                    /**
                     * 设置<p>Last offline time (Unix timestamp).</p>
                     * @param _latestOfflineTime <p>Last offline time (Unix timestamp).</p>
                     * 
                     */
                    void SetLatestOfflineTime(const int64_t& _latestOfflineTime);

                    /**
                     * 判断参数 LatestOfflineTime 是否已赋值
                     * @return LatestOfflineTime 是否已赋值
                     * 
                     */
                    bool LatestOfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return MachineIp <p>Private IP address.</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _machineIp <p>Private IP address.</p>
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
                     * 获取<p>Host name.</p>
                     * @return MachineName <p>Host name.</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _machineName <p>Host name.</p>
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
                     * 获取<p>Operating system (cloud collection)</p>
                     * @return MachineOs <p>Operating system (cloud collection)</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>Operating system (cloud collection)</p>
                     * @param _machineOs <p>Operating system (cloud collection)</p>
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取<p>Host status</p>
                     * @return MachineStatus <p>Host status</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>Host status</p>
                     * @param _machineStatus <p>Host status</p>
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address.</p>
                     * @return MachineWanIp <p>Public IP address.</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>Public IP address.</p>
                     * @param _machineWanIp <p>Public IP address.</p>
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
                     * 获取<p>Memory size (MB)</p>
                     * @return MemSize <p>Memory size (MB)</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory size (MB)</p>
                     * @param _memSize <p>Memory size (MB)</p>
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
                     * 获取<p>Memory usage rate</p>
                     * @return MemoryLoad <p>Memory usage rate</p>
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置<p>Memory usage rate</p>
                     * @param _memoryLoad <p>Memory usage rate</p>
                     * 
                     */
                    void SetMemoryLoad(const std::string& _memoryLoad);

                    /**
                     * 判断参数 MemoryLoad 是否已赋值
                     * @return MemoryLoad 是否已赋值
                     * 
                     */
                    bool MemoryLoadHasBeenSet() const;

                    /**
                     * 获取<p>ENI information.</p>
                     * @return NetCards <p>ENI information.</p>
                     * 
                     */
                    std::vector<NetworkCardInfo> GetNetCards() const;

                    /**
                     * 设置<p>ENI information.</p>
                     * @param _netCards <p>ENI information.</p>
                     * 
                     */
                    void SetNetCards(const std::vector<NetworkCardInfo>& _netCards);

                    /**
                     * 判断参数 NetCards 是否已赋值
                     * @return NetCards 是否已赋值
                     * 
                     */
                    bool NetCardsHasBeenSet() const;

                    /**
                     * 获取<p>Operating system (client collection)</p>
                     * @return OsByAgent <p>Operating system (client collection)</p>
                     * 
                     */
                    std::string GetOsByAgent() const;

                    /**
                     * 设置<p>Operating system (client collection)</p>
                     * @param _osByAgent <p>Operating system (client collection)</p>
                     * 
                     */
                    void SetOsByAgent(const std::string& _osByAgent);

                    /**
                     * 判断参数 OsByAgent 是否已赋值
                     * @return OsByAgent 是否已赋值
                     * 
                     */
                    bool OsByAgentHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode</p>
                     * @return PayMode <p>Payment mode</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Payment mode</p>
                     * @param _payMode <p>Payment mode</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Days protected</p>
                     * @return ProtectDays <p>Days protected</p>
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 设置<p>Days protected</p>
                     * @param _protectDays <p>Days protected</p>
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
                     * 获取<p>Protection type</p>
                     * @return ProtectType <p>Protection type</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>Protection type</p>
                     * @param _protectType <p>Protection type</p>
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Host unique identifier</p>
                     * @return Quuid <p>Host unique identifier</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host unique identifier</p>
                     * @param _quuid <p>Host unique identifier</p>
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
                     * 获取<p>Region information.</p>
                     * @return RegionInfo <p>Region information.</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>Region information.</p>
                     * @param _regionInfo <p>Region information.</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Serial number</p>
                     * @return SerialNumber <p>Serial number</p>
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置<p>Serial number</p>
                     * @param _serialNumber <p>Serial number</p>
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
                     * 获取<p>Asset tag list</p>
                     * @return TagItems <p>Asset tag list</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItems() const;

                    /**
                     * 设置<p>Asset tag list</p>
                     * @param _tagItems <p>Asset tag list</p>
                     * 
                     */
                    void SetTagItems(const std::vector<MiniTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>Tag change information</p>
                     * @return TagModifyInfo <p>Tag change information</p>
                     * 
                     */
                    AssetTagModifyAssetItem GetTagModifyInfo() const;

                    /**
                     * 设置<p>Tag change information</p>
                     * @param _tagModifyInfo <p>Tag change information</p>
                     * 
                     */
                    void SetTagModifyInfo(const AssetTagModifyAssetItem& _tagModifyInfo);

                    /**
                     * 判断参数 TagModifyInfo 是否已赋值
                     * @return TagModifyInfo 是否已赋值
                     * 
                     */
                    bool TagModifyInfoHasBeenSet() const;

                    /**
                     * 获取<p>Agent unique ID</p>
                     * @return Uuid <p>Agent unique ID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Agent unique ID</p>
                     * @param _uuid <p>Agent unique ID</p>
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
                     * 获取<p>VPC CIDR</p>
                     * @return VpcCidrBlock <p>VPC CIDR</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>VPC CIDR</p>
                     * @param _vpcCidrBlock <p>VPC CIDR</p>
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC name.</p>
                     * @return VpcName <p>VPC name.</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC name.</p>
                     * @param _vpcName <p>VPC name.</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>Host node type</p><p>Enumeration values:</p><ul><li>NONE: Host node</li><li>CLUSTER: Cluster node</li><li>CONTAINER: Container node</li></ul>
                     * @return NodeType <p>Host node type</p><p>Enumeration values:</p><ul><li>NONE: Host node</li><li>CLUSTER: Cluster node</li><li>CONTAINER: Container node</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Host node type</p><p>Enumeration values:</p><ul><li>NONE: Host node</li><li>CLUSTER: Cluster node</li><li>CONTAINER: Container node</li></ul>
                     * @param _nodeType <p>Host node type</p><p>Enumeration values:</p><ul><li>NONE: Host node</li><li>CLUSTER: Cluster node</li><li>CONTAINER: Container node</li></ul>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Container protection status</p><p>Enumeration values:</p><ul><li>Enabled: Enable protection</li><li>Disabled: Disable protection</li><li>Unknown: Unknown</li></ul>
                     * @return ContainerDefendStatus <p>Container protection status</p><p>Enumeration values:</p><ul><li>Enabled: Enable protection</li><li>Disabled: Disable protection</li><li>Unknown: Unknown</li></ul>
                     * 
                     */
                    std::string GetContainerDefendStatus() const;

                    /**
                     * 设置<p>Container protection status</p><p>Enumeration values:</p><ul><li>Enabled: Enable protection</li><li>Disabled: Disable protection</li><li>Unknown: Unknown</li></ul>
                     * @param _containerDefendStatus <p>Container protection status</p><p>Enumeration values:</p><ul><li>Enabled: Enable protection</li><li>Disabled: Disable protection</li><li>Unknown: Unknown</li></ul>
                     * 
                     */
                    void SetContainerDefendStatus(const std::string& _containerDefendStatus);

                    /**
                     * 判断参数 ContainerDefendStatus 是否已赋值
                     * @return ContainerDefendStatus 是否已赋值
                     * 
                     */
                    bool ContainerDefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>Cluster visa md5</p>
                     * @return ClusterCaMd5 <p>Cluster visa md5</p>
                     * 
                     */
                    std::string GetClusterCaMd5() const;

                    /**
                     * 设置<p>Cluster visa md5</p>
                     * @param _clusterCaMd5 <p>Cluster visa md5</p>
                     * 
                     */
                    void SetClusterCaMd5(const std::string& _clusterCaMd5);

                    /**
                     * 判断参数 ClusterCaMd5 是否已赋值
                     * @return ClusterCaMd5 是否已赋值
                     * 
                     */
                    bool ClusterCaMd5HasBeenSet() const;

                    /**
                     * 获取<p>Container environment info</p>
                     * @return ContainerEnvInfo <p>Container environment info</p>
                     * 
                     */
                    ContainerEnvInfo GetContainerEnvInfo() const;

                    /**
                     * 设置<p>Container environment info</p>
                     * @param _containerEnvInfo <p>Container environment info</p>
                     * 
                     */
                    void SetContainerEnvInfo(const ContainerEnvInfo& _containerEnvInfo);

                    /**
                     * 判断参数 ContainerEnvInfo 是否已赋值
                     * @return ContainerEnvInfo 是否已赋值
                     * 
                     */
                    bool ContainerEnvInfoHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>Agent status</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>Agent version</p>
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>Account AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Asset type name</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>System boot time (Unix timestamp).</p>
                     */
                    int64_t m_bootTime;
                    bool m_bootTimeHasBeenSet;

                    /**
                     * <p>Purchase time (Unix timestamp).</p>
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * <p>Cloud service provider</p>
                     */
                    std::string m_cloudFromEnum;
                    bool m_cloudFromEnumHasBeenSet;

                    /**
                     * <p>Cloud tag list</p>
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>Kernel version</p>
                     */
                    std::string m_coreVersion;
                    bool m_coreVersionHasBeenSet;

                    /**
                     * <p>CPU info</p>
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>CPU load</p>
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * <p>CPU cores.</p>
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * <p>Device model</p>
                     */
                    std::string m_deviceVersion;
                    bool m_deviceVersionHasBeenSet;

                    /**
                     * <p>Disk partition information</p>
                     */
                    std::vector<DiskPartitionInfo> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * <p>Expiration time (Unix timestamp).</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Exposure status</p>
                     */
                    std::string m_exposedStatus;
                    bool m_exposedStatusHasBeenSet;

                    /**
                     * <p>Installation time (Unix timestamp).</p>
                     */
                    int64_t m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Kernel version</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * <p>Last online time (Unix timestamp).</p>
                     */
                    int64_t m_latestLiveTime;
                    bool m_latestLiveTimeHasBeenSet;

                    /**
                     * <p>Last offline time (Unix timestamp).</p>
                     */
                    int64_t m_latestOfflineTime;
                    bool m_latestOfflineTimeHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Operating system (cloud collection)</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>Host status</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>Public IP address.</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>Memory size (MB)</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Memory usage rate</p>
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * <p>ENI information.</p>
                     */
                    std::vector<NetworkCardInfo> m_netCards;
                    bool m_netCardsHasBeenSet;

                    /**
                     * <p>Operating system (client collection)</p>
                     */
                    std::string m_osByAgent;
                    bool m_osByAgentHasBeenSet;

                    /**
                     * <p>Payment mode</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Days protected</p>
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * <p>Protection type</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>Host unique identifier</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Region information.</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Serial number</p>
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * <p>Asset tag list</p>
                     */
                    std::vector<MiniTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>Tag change information</p>
                     */
                    AssetTagModifyAssetItem m_tagModifyInfo;
                    bool m_tagModifyInfoHasBeenSet;

                    /**
                     * <p>Agent unique ID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>VPC CIDR</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPC name.</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>Host node type</p><p>Enumeration values:</p><ul><li>NONE: Host node</li><li>CLUSTER: Cluster node</li><li>CONTAINER: Container node</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Container protection status</p><p>Enumeration values:</p><ul><li>Enabled: Enable protection</li><li>Disabled: Disable protection</li><li>Unknown: Unknown</li></ul>
                     */
                    std::string m_containerDefendStatus;
                    bool m_containerDefendStatusHasBeenSet;

                    /**
                     * <p>Cluster visa md5</p>
                     */
                    std::string m_clusterCaMd5;
                    bool m_clusterCaMd5HasBeenSet;

                    /**
                     * <p>Container environment info</p>
                     */
                    ContainerEnvInfo m_containerEnvInfo;
                    bool m_containerEnvInfoHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEDETAIL_H_
