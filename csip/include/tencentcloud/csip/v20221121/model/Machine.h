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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/AssetTagModifyAssetItem.h>


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
                class Machine : public AbstractModel
                {
                public:
                    Machine();
                    ~Machine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent status. Valid values: ONLINE: online; OFFLINE: offline; UNINSTALL: not installed</p>
                     * @return AgentStatus <p>Agent status. Valid values: ONLINE: online; OFFLINE: offline; UNINSTALL: not installed</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>Agent status. Valid values: ONLINE: online; OFFLINE: offline; UNINSTALL: not installed</p>
                     * @param _agentStatus <p>Agent status. Valid values: ONLINE: online; OFFLINE: offline; UNINSTALL: not installed</p>
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
                    std::vector<Tag> GetCloudTags() const;

                    /**
                     * 设置<p>Cloud tag list</p>
                     * @param _cloudTags <p>Cloud tag list</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<Tag>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>CSIP protection type. Value: BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition</p>
                     * @return CsipProtectType <p>CSIP protection type. Value: BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition</p>
                     * 
                     */
                    std::string GetCsipProtectType() const;

                    /**
                     * 设置<p>CSIP protection type. Value: BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition</p>
                     * @param _csipProtectType <p>CSIP protection type. Value: BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition</p>
                     * 
                     */
                    void SetCsipProtectType(const std::string& _csipProtectType);

                    /**
                     * 判断参数 CsipProtectType 是否已赋值
                     * @return CsipProtectType 是否已赋值
                     * 
                     */
                    bool CsipProtectTypeHasBeenSet() const;

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
                     * 获取<p>Instance status. Value: RUNNING-running, STOPPED-shut down, EXPIRED-pending recycling</p>
                     * @return InstanceStatus <p>Instance status. Value: RUNNING-running, STOPPED-shut down, EXPIRED-pending recycling</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status. Value: RUNNING-running, STOPPED-shut down, EXPIRED-pending recycling</p>
                     * @param _instanceStatus <p>Instance status. Value: RUNNING-running, STOPPED-shut down, EXPIRED-pending recycling</p>
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
                     * 获取<p>Network Card IP List</p>
                     * @return IpList <p>Network Card IP List</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>Network Card IP List</p>
                     * @param _ipList <p>Network Card IP List</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a new host (added within 15 days)</p>
                     * @return IsNew <p>Whether it is a new host (added within 15 days)</p>
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置<p>Whether it is a new host (added within 15 days)</p>
                     * @param _isNew <p>Whether it is a new host (added within 15 days)</p>
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

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
                     * 获取<p>Operating system.</p>
                     * @return MachineOs <p>Operating system.</p>
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置<p>Operating system.</p>
                     * @param _machineOs <p>Operating system.</p>
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
                     * 获取<p>Payment mode. Valid values: PREPAID: prepaid; POSTPAID: postpaid</p>
                     * @return PayMode <p>Payment mode. Valid values: PREPAID: prepaid; POSTPAID: postpaid</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Payment mode. Valid values: PREPAID: prepaid; POSTPAID: postpaid</p>
                     * @param _payMode <p>Payment mode. Valid values: PREPAID: prepaid; POSTPAID: postpaid</p>
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
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
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
                     * 获取<p>Protection type. Value: NONE: no protection; BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition; PRO_LH: lightweight edition</p>
                     * @return ProtectType <p>Protection type. Value: NONE: no protection; BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition; PRO_LH: lightweight edition</p>
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置<p>Protection type. Value: NONE: no protection; BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition; PRO_LH: lightweight edition</p>
                     * @param _protectType <p>Protection type. Value: NONE: no protection; BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition; PRO_LH: lightweight edition</p>
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
                     * 获取<p>TAT status. Valid values: ONLINE: online; OFFLINE: offline</p>
                     * @return TatStatus <p>TAT status. Valid values: ONLINE: online; OFFLINE: offline</p>
                     * 
                     */
                    std::string GetTatStatus() const;

                    /**
                     * 设置<p>TAT status. Valid values: ONLINE: online; OFFLINE: offline</p>
                     * @param _tatStatus <p>TAT status. Valid values: ONLINE: online; OFFLINE: offline</p>
                     * 
                     */
                    void SetTatStatus(const std::string& _tatStatus);

                    /**
                     * 判断参数 TatStatus 是否已赋值
                     * @return TatStatus 是否已赋值
                     * 
                     */
                    bool TatStatusHasBeenSet() const;

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
                     * 获取<p>Container count</p>
                     * @return ContainerCount <p>Container count</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 设置<p>Container count</p>
                     * @param _containerCount <p>Container count</p>
                     * 
                     */
                    void SetContainerCount(const uint64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of cores.</p>
                     * @return CpuCoreCount <p>Number of cores.</p>
                     * 
                     */
                    uint64_t GetCpuCoreCount() const;

                    /**
                     * 设置<p>Number of cores.</p>
                     * @param _cpuCoreCount <p>Number of cores.</p>
                     * 
                     */
                    void SetCpuCoreCount(const uint64_t& _cpuCoreCount);

                    /**
                     * 判断参数 CpuCoreCount 是否已赋值
                     * @return CpuCoreCount 是否已赋值
                     * 
                     */
                    bool CpuCoreCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether migration is supported</p>
                     * @return MigrationRequired <p>Whether migration is supported</p>
                     * 
                     */
                    bool GetMigrationRequired() const;

                    /**
                     * 设置<p>Whether migration is supported</p>
                     * @param _migrationRequired <p>Whether migration is supported</p>
                     * 
                     */
                    void SetMigrationRequired(const bool& _migrationRequired);

                    /**
                     * 判断参数 MigrationRequired 是否已赋值
                     * @return MigrationRequired 是否已赋值
                     * 
                     */
                    bool MigrationRequiredHasBeenSet() const;

                    /**
                     * 获取<p>Whether exposed surface scan is supported</p>
                     * @return IsSupportXSPM <p>Whether exposed surface scan is supported</p>
                     * 
                     */
                    bool GetIsSupportXSPM() const;

                    /**
                     * 设置<p>Whether exposed surface scan is supported</p>
                     * @param _isSupportXSPM <p>Whether exposed surface scan is supported</p>
                     * 
                     */
                    void SetIsSupportXSPM(const bool& _isSupportXSPM);

                    /**
                     * 判断参数 IsSupportXSPM 是否已赋值
                     * @return IsSupportXSPM 是否已赋值
                     * 
                     */
                    bool IsSupportXSPMHasBeenSet() const;

                    /**
                     * 获取<p>Whether it can be unbound</p>
                     * @return CanUnbind <p>Whether it can be unbound</p>
                     * 
                     */
                    bool GetCanUnbind() const;

                    /**
                     * 设置<p>Whether it can be unbound</p>
                     * @param _canUnbind <p>Whether it can be unbound</p>
                     * 
                     */
                    void SetCanUnbind(const bool& _canUnbind);

                    /**
                     * 判断参数 CanUnbind 是否已赋值
                     * @return CanUnbind 是否已赋值
                     * 
                     */
                    bool CanUnbindHasBeenSet() const;

                private:

                    /**
                     * <p>Agent status. Valid values: ONLINE: online; OFFLINE: offline; UNINSTALL: not installed</p>
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
                     * <p>Cloud service provider</p>
                     */
                    std::string m_cloudFromEnum;
                    bool m_cloudFromEnumHasBeenSet;

                    /**
                     * <p>Cloud tag list</p>
                     */
                    std::vector<Tag> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>CSIP protection type. Value: BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition</p>
                     */
                    std::string m_csipProtectType;
                    bool m_csipProtectTypeHasBeenSet;

                    /**
                     * <p>Exposure status</p>
                     */
                    std::string m_exposedStatus;
                    bool m_exposedStatusHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Instance status. Value: RUNNING-running, STOPPED-shut down, EXPIRED-pending recycling</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Network Card IP List</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>Whether it is a new host (added within 15 days)</p>
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * <p>Kernel version</p>
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

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
                     * <p>Operating system.</p>
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * <p>Public IP address.</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>Payment mode. Valid values: PREPAID: prepaid; POSTPAID: postpaid</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Protection type. Value: NONE: no protection; BASIC: basic version; PRO: pro edition; ULTIMATE: flagship edition; PRO_LH: lightweight edition</p>
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
                     * <p>TAT status. Valid values: ONLINE: online; OFFLINE: offline</p>
                     */
                    std::string m_tatStatus;
                    bool m_tatStatusHasBeenSet;

                    /**
                     * <p>Agent unique ID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

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
                     * <p>Container count</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>Number of cores.</p>
                     */
                    uint64_t m_cpuCoreCount;
                    bool m_cpuCoreCountHasBeenSet;

                    /**
                     * <p>Whether migration is supported</p>
                     */
                    bool m_migrationRequired;
                    bool m_migrationRequiredHasBeenSet;

                    /**
                     * <p>Whether exposed surface scan is supported</p>
                     */
                    bool m_isSupportXSPM;
                    bool m_isSupportXSPMHasBeenSet;

                    /**
                     * <p>Whether it can be unbound</p>
                     */
                    bool m_canUnbind;
                    bool m_canUnbindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINE_H_
