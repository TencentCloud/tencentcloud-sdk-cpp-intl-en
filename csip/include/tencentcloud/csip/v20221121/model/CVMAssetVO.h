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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/Element.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host Asset Information

Enumerate host protection status. left is a constant, right side displays.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: flagship protection.
5: offline.
6: shut down.
                */
                class CVMAssetVO : public AbstractModel
                {
                public:
                    CVMAssetVO();
                    ~CVMAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset ID
                     * @return AssetId Asset ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset name.
                     * @return AssetName Asset name.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name.
                     * @param _assetName Asset name.
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Asset type.
                     * @return AssetType Asset type.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type.
                     * @param _assetType Asset type.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Protection status
                     * @return CWPStatus Protection status
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置Protection status
                     * @param _cWPStatus Protection status
                     * 
                     */
                    void SetCWPStatus(const uint64_t& _cWPStatus);

                    /**
                     * 判断参数 CWPStatus 是否已赋值
                     * @return CWPStatus 是否已赋值
                     * 
                     */
                    bool CWPStatusHasBeenSet() const;

                    /**
                     * 获取Asset creation time.
                     * @return AssetCreateTime Asset creation time.
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset creation time.
                     * @param _assetCreateTime Asset creation time.
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP.
                     * @return PrivateIp Private IP.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP.
                     * @param _privateIp Private IP.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取VPC Name
                     * @return VpcName VPC Name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC Name
                     * @param _vpcName VPC Name
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
                     * 获取App ID information
                     * @return AppId App ID information
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置App ID information
                     * @param _appId App ID information
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
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Nickname.
                     * @return NickName Nickname.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Nickname.
                     * @param _nickName Nickname.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return AvailableArea Availability zone
                     * 
                     */
                    std::string GetAvailableArea() const;

                    /**
                     * 设置Availability zone
                     * @param _availableArea Availability zone
                     * 
                     */
                    void SetAvailableArea(const std::string& _availableArea);

                    /**
                     * 判断参数 AvailableArea 是否已赋值
                     * @return AvailableArea 是否已赋值
                     * 
                     */
                    bool AvailableAreaHasBeenSet() const;

                    /**
                     * 获取Core or Not
                     * @return IsCore Core or Not
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Core or Not
                     * @param _isCore Core or Not
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Subnet Name
                     * @return SubnetName Subnet Name
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet Name
                     * @param _subnetName Subnet Name
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取CWP Agent UUID.
                     * @return InstanceUuid CWP Agent UUID.
                     * 
                     */
                    std::string GetInstanceUuid() const;

                    /**
                     * 设置CWP Agent UUID.
                     * @param _instanceUuid CWP Agent UUID.
                     * 
                     */
                    void SetInstanceUuid(const std::string& _instanceUuid);

                    /**
                     * 判断参数 InstanceUuid 是否已赋值
                     * @return InstanceUuid 是否已赋值
                     * 
                     */
                    bool InstanceUuidHasBeenSet() const;

                    /**
                     * 获取CVM host UUID.
                     * @return InstanceQUuid CVM host UUID.
                     * 
                     */
                    std::string GetInstanceQUuid() const;

                    /**
                     * 设置CVM host UUID.
                     * @param _instanceQUuid CVM host UUID.
                     * 
                     */
                    void SetInstanceQUuid(const std::string& _instanceQUuid);

                    /**
                     * 判断参数 InstanceQUuid 是否已赋值
                     * @return InstanceQUuid 是否已赋值
                     * 
                     */
                    bool InstanceQUuidHasBeenSet() const;

                    /**
                     * 获取OS Name
                     * @return OsName OS Name
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置OS Name
                     * @param _osName OS Name
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Partition
                     * @return PartitionCount Partition
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置Partition
                     * @param _partitionCount Partition
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
                     * 获取CPU Information
                     * @return CPUInfo CPU Information
                     * 
                     */
                    std::string GetCPUInfo() const;

                    /**
                     * 设置CPU Information
                     * @param _cPUInfo CPU Information
                     * 
                     */
                    void SetCPUInfo(const std::string& _cPUInfo);

                    /**
                     * 判断参数 CPUInfo 是否已赋值
                     * @return CPUInfo 是否已赋值
                     * 
                     */
                    bool CPUInfoHasBeenSet() const;

                    /**
                     * 获取CPU Size
                     * @return CPUSize CPU Size
                     * 
                     */
                    uint64_t GetCPUSize() const;

                    /**
                     * 设置CPU Size
                     * @param _cPUSize CPU Size
                     * 
                     */
                    void SetCPUSize(const uint64_t& _cPUSize);

                    /**
                     * 判断参数 CPUSize 是否已赋值
                     * @return CPUSize 是否已赋值
                     * 
                     */
                    bool CPUSizeHasBeenSet() const;

                    /**
                     * 获取CPU Load
                     * @return CPULoad CPU Load
                     * 
                     */
                    std::string GetCPULoad() const;

                    /**
                     * 设置CPU Load
                     * @param _cPULoad CPU Load
                     * 
                     */
                    void SetCPULoad(const std::string& _cPULoad);

                    /**
                     * 判断参数 CPULoad 是否已赋值
                     * @return CPULoad 是否已赋值
                     * 
                     */
                    bool CPULoadHasBeenSet() const;

                    /**
                     * 获取Memory size.
                     * @return MemorySize Memory size.
                     * 
                     */
                    std::string GetMemorySize() const;

                    /**
                     * 设置Memory size.
                     * @param _memorySize Memory size.
                     * 
                     */
                    void SetMemorySize(const std::string& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Memory Load
                     * @return MemoryLoad Memory Load
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置Memory Load
                     * @param _memoryLoad Memory Load
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
                     * 获取Hard disk size.
                     * @return DiskSize Hard disk size.
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置Hard disk size.
                     * @param _diskSize Hard disk size.
                     * 
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Hard Disk Load
                     * @return DiskLoad Hard Disk Load
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置Hard Disk Load
                     * @param _diskLoad Hard Disk Load
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
                     * 获取Number of Accounts
                     * @return AccountCount Number of Accounts
                     * 
                     */
                    std::string GetAccountCount() const;

                    /**
                     * 设置Number of Accounts
                     * @param _accountCount Number of Accounts
                     * 
                     */
                    void SetAccountCount(const std::string& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取Number of Processes
                     * @return ProcessCount Number of Processes
                     * 
                     */
                    std::string GetProcessCount() const;

                    /**
                     * 设置Number of Processes
                     * @param _processCount Number of Processes
                     * 
                     */
                    void SetProcessCount(const std::string& _processCount);

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     * 
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取Software application.
                     * @return AppCount Software application.
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置Software application.
                     * @param _appCount Software application.
                     * 
                     */
                    void SetAppCount(const std::string& _appCount);

                    /**
                     * 判断参数 AppCount 是否已赋值
                     * @return AppCount 是否已赋值
                     * 
                     */
                    bool AppCountHasBeenSet() const;

                    /**
                     * 获取Listening port
                     * @return PortCount Listening port
                     * 
                     */
                    uint64_t GetPortCount() const;

                    /**
                     * 设置Listening port
                     * @param _portCount Listening port
                     * 
                     */
                    void SetPortCount(const uint64_t& _portCount);

                    /**
                     * 判断参数 PortCount 是否已赋值
                     * @return PortCount 是否已赋值
                     * 
                     */
                    bool PortCountHasBeenSet() const;

                    /**
                     * 获取Network attack.
                     * @return Attack Network attack.
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Network attack.
                     * @param _attack Network attack.
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取Network access.
                     * @return Access Network access.
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置Network access.
                     * @param _access Network access.
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取Network Interception
                     * @return Intercept Network Interception
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置Network Interception
                     * @param _intercept Network Interception
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取Inbound peak bandwidth.
                     * @return InBandwidth Inbound peak bandwidth.
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置Inbound peak bandwidth.
                     * @param _inBandwidth Inbound peak bandwidth.
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取Outbound peak bandwidth.
                     * @return OutBandwidth Outbound peak bandwidth.
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置Outbound peak bandwidth.
                     * @param _outBandwidth Outbound peak bandwidth.
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取Total inbound traffic.
                     * @return InFlow Total inbound traffic.
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置Total inbound traffic.
                     * @param _inFlow Total inbound traffic.
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取Outbound cumulative traffic.
                     * @return OutFlow Outbound cumulative traffic.
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置Outbound cumulative traffic.
                     * @param _outFlow Outbound cumulative traffic.
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Malicious outgoing request.
                     * @return NetWorkOut Malicious outgoing request.
                     * 
                     */
                    uint64_t GetNetWorkOut() const;

                    /**
                     * 设置Malicious outgoing request.
                     * @param _netWorkOut Malicious outgoing request.
                     * 
                     */
                    void SetNetWorkOut(const uint64_t& _netWorkOut);

                    /**
                     * 判断参数 NetWorkOut 是否已赋值
                     * @return NetWorkOut 是否已赋值
                     * 
                     */
                    bool NetWorkOutHasBeenSet() const;

                    /**
                     * 获取Port risk.
                     * @return PortRisk Port risk.
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置Port risk.
                     * @param _portRisk Port risk.
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk.
                     * @return VulnerabilityRisk Vulnerability risk.
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置Vulnerability risk.
                     * @param _vulnerabilityRisk Vulnerability risk.
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取Configuration risk.
                     * @return ConfigurationRisk Configuration risk.
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuration risk.
                     * @param _configurationRisk Configuration risk.
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取Scan Task Count
                     * @return ScanTask Scan Task Count
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置Scan Task Count
                     * @param _scanTask Scan Task Count
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取memberId
                     * @return MemberId memberId
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置memberId
                     * @param _memberId memberId
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Full OS Name
                     * @return Os Full OS Name
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Full OS Name
                     * @param _os Full OS Name
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取Risk service exposure.
                     * @return RiskExposure Risk service exposure.
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置Risk service exposure.
                     * @param _riskExposure Risk service exposure.
                     * 
                     */
                    void SetRiskExposure(const int64_t& _riskExposure);

                    /**
                     * 判断参数 RiskExposure 是否已赋值
                     * @return RiskExposure 是否已赋值
                     * 
                     */
                    bool RiskExposureHasBeenSet() const;

                    /**
                     * 获取Simulated Attack Tool Status. 0 indicates not installed. 1 indicates installed. 2 indicates offline.
                     * @return BASAgentStatus Simulated Attack Tool Status. 0 indicates not installed. 1 indicates installed. 2 indicates offline.
                     * 
                     */
                    int64_t GetBASAgentStatus() const;

                    /**
                     * 设置Simulated Attack Tool Status. 0 indicates not installed. 1 indicates installed. 2 indicates offline.
                     * @param _bASAgentStatus Simulated Attack Tool Status. 0 indicates not installed. 1 indicates installed. 2 indicates offline.
                     * 
                     */
                    void SetBASAgentStatus(const int64_t& _bASAgentStatus);

                    /**
                     * 判断参数 BASAgentStatus 是否已赋值
                     * @return BASAgentStatus 是否已赋值
                     * 
                     */
                    bool BASAgentStatusHasBeenSet() const;

                    /**
                     * 获取1-New Asset; 0-Not a New Asset
                     * @return IsNewAsset 1-New Asset; 0-Not a New Asset
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置1-New Asset; 0-Not a New Asset
                     * @param _isNewAsset 1-New Asset; 0-Not a New Asset
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取0: not installed; 1: install; 2: installing.
                     * @return CVMAgentStatus 0: not installed; 1: install; 2: installing.
                     * 
                     */
                    int64_t GetCVMAgentStatus() const;

                    /**
                     * 设置0: not installed; 1: install; 2: installing.
                     * @param _cVMAgentStatus 0: not installed; 1: install; 2: installing.
                     * 
                     */
                    void SetCVMAgentStatus(const int64_t& _cVMAgentStatus);

                    /**
                     * 判断参数 CVMAgentStatus 是否已赋值
                     * @return CVMAgentStatus 是否已赋值
                     * 
                     */
                    bool CVMAgentStatusHasBeenSet() const;

                    /**
                     * 获取1: enable 0: not enabled.
                     * @return CVMStatus 1: enable 0: not enabled.
                     * 
                     */
                    int64_t GetCVMStatus() const;

                    /**
                     * 设置1: enable 0: not enabled.
                     * @param _cVMStatus 1: enable 0: not enabled.
                     * 
                     */
                    void SetCVMStatus(const int64_t& _cVMStatus);

                    /**
                     * 判断参数 CVMStatus 是否已赋值
                     * @return CVMStatus 是否已赋值
                     * 
                     */
                    bool CVMStatusHasBeenSet() const;

                    /**
                     * 获取1: client installed 0: not installed 2: Agentless.
                     * @return DefenseModel 1: client installed 0: not installed 2: Agentless.
                     * 
                     */
                    int64_t GetDefenseModel() const;

                    /**
                     * 设置1: client installed 0: not installed 2: Agentless.
                     * @param _defenseModel 1: client installed 0: not installed 2: Agentless.
                     * 
                     */
                    void SetDefenseModel(const int64_t& _defenseModel);

                    /**
                     * 判断参数 DefenseModel 是否已赋值
                     * @return DefenseModel 是否已赋值
                     * 
                     */
                    bool DefenseModelHasBeenSet() const;

                    /**
                     * 获取1: installed 0: not installed.
                     * @return TatStatus 1: installed 0: not installed.
                     * 
                     */
                    int64_t GetTatStatus() const;

                    /**
                     * 设置1: installed 0: not installed.
                     * @param _tatStatus 1: installed 0: not installed.
                     * 
                     */
                    void SetTatStatus(const int64_t& _tatStatus);

                    /**
                     * 判断参数 TatStatus 是否已赋值
                     * @return TatStatus 是否已赋值
                     * 
                     */
                    bool TatStatusHasBeenSet() const;

                    /**
                     * 获取cpu trend chart.
                     * @return CpuTrend cpu trend chart.
                     * 
                     */
                    std::vector<Element> GetCpuTrend() const;

                    /**
                     * 设置cpu trend chart.
                     * @param _cpuTrend cpu trend chart.
                     * 
                     */
                    void SetCpuTrend(const std::vector<Element>& _cpuTrend);

                    /**
                     * 判断参数 CpuTrend 是否已赋值
                     * @return CpuTrend 是否已赋值
                     * 
                     */
                    bool CpuTrendHasBeenSet() const;

                    /**
                     * 获取Memory trend chart.
                     * @return MemoryTrend Memory trend chart.
                     * 
                     */
                    std::vector<Element> GetMemoryTrend() const;

                    /**
                     * 设置Memory trend chart.
                     * @param _memoryTrend Memory trend chart.
                     * 
                     */
                    void SetMemoryTrend(const std::vector<Element>& _memoryTrend);

                    /**
                     * 判断参数 MemoryTrend 是否已赋值
                     * @return MemoryTrend 是否已赋值
                     * 
                     */
                    bool MemoryTrendHasBeenSet() const;

                    /**
                     * 获取1: agent online 0: agent offline 2: host offline.
                     * @return AgentStatus 1: agent online 0: agent offline 2: host offline.
                     * 
                     */
                    int64_t GetAgentStatus() const;

                    /**
                     * 设置1: agent online 0: agent offline 2: host offline.
                     * @param _agentStatus 1: agent online 0: agent offline 2: host offline.
                     * 
                     */
                    void SetAgentStatus(const int64_t& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取Number of shutdowns this month.
                     * @return CloseDefenseCount Number of shutdowns this month.
                     * 
                     */
                    int64_t GetCloseDefenseCount() const;

                    /**
                     * 设置Number of shutdowns this month.
                     * @param _closeDefenseCount Number of shutdowns this month.
                     * 
                     */
                    void SetCloseDefenseCount(const int64_t& _closeDefenseCount);

                    /**
                     * 判断参数 CloseDefenseCount 是否已赋值
                     * @return CloseDefenseCount 是否已赋值
                     * 
                     */
                    bool CloseDefenseCountHasBeenSet() const;

                    /**
                     * 获取Running state.
                     * @return InstanceState Running state.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Running state.
                     * @param _instanceState Running state.
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Security group data.
                     * @return SecurityGroupIds Security group data.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group data.
                     * @param _securityGroupIds Security group data.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Physical memory occupied KB.
                     * @return AgentMemRss Physical memory occupied KB.
                     * 
                     */
                    int64_t GetAgentMemRss() const;

                    /**
                     * 设置Physical memory occupied KB.
                     * @param _agentMemRss Physical memory occupied KB.
                     * 
                     */
                    void SetAgentMemRss(const int64_t& _agentMemRss);

                    /**
                     * 判断参数 AgentMemRss 是否已赋值
                     * @return AgentMemRss 是否已赋值
                     * 
                     */
                    bool AgentMemRssHasBeenSet() const;

                    /**
                     * 获取CPU utilization percentage.
                     * @return AgentCpuPer CPU utilization percentage.
                     * 
                     */
                    double GetAgentCpuPer() const;

                    /**
                     * 设置CPU utilization percentage.
                     * @param _agentCpuPer CPU utilization percentage.
                     * 
                     */
                    void SetAgentCpuPer(const double& _agentCpuPer);

                    /**
                     * 判断参数 AgentCpuPer 是否已赋值
                     * @return AgentCpuPer 是否已赋值
                     * 
                     */
                    bool AgentCpuPerHasBeenSet() const;

                    /**
                     * 获取Actual appid belonging to cvm.
                     * @return RealAppid Actual appid belonging to cvm.
                     * 
                     */
                    int64_t GetRealAppid() const;

                    /**
                     * 设置Actual appid belonging to cvm.
                     * @param _realAppid Actual appid belonging to cvm.
                     * 
                     */
                    void SetRealAppid(const int64_t& _realAppid);

                    /**
                     * 判断参数 RealAppid 是否已赋值
                     * @return RealAppid 是否已赋值
                     * 
                     */
                    bool RealAppidHasBeenSet() const;

                    /**
                     * 获取Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * @return CloudType Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * @param _cloudType Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Host protection status enumeration.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: ultimate edition protection.
5: offline.
6: shutdown.
                     * @return ProtectStatus Host protection status enumeration.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: ultimate edition protection.
5: offline.
6: shutdown.
                     * 
                     */
                    int64_t GetProtectStatus() const;

                    /**
                     * 设置Host protection status enumeration.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: ultimate edition protection.
5: offline.
6: shutdown.
                     * @param _protectStatus Host protection status enumeration.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: ultimate edition protection.
5: offline.
6: shutdown.
                     * 
                     */
                    void SetProtectStatus(const int64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取Last offline time.
                     * @return OfflineTime Last offline time.
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Last offline time.
                     * @param _offlineTime Last offline time.
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Protection status
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * Asset creation time.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC Name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * App ID information
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_availableArea;
                    bool m_availableAreaHasBeenSet;

                    /**
                     * Core or Not
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet Name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * CWP Agent UUID.
                     */
                    std::string m_instanceUuid;
                    bool m_instanceUuidHasBeenSet;

                    /**
                     * CVM host UUID.
                     */
                    std::string m_instanceQUuid;
                    bool m_instanceQUuidHasBeenSet;

                    /**
                     * OS Name
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Partition
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * CPU Information
                     */
                    std::string m_cPUInfo;
                    bool m_cPUInfoHasBeenSet;

                    /**
                     * CPU Size
                     */
                    uint64_t m_cPUSize;
                    bool m_cPUSizeHasBeenSet;

                    /**
                     * CPU Load
                     */
                    std::string m_cPULoad;
                    bool m_cPULoadHasBeenSet;

                    /**
                     * Memory size.
                     */
                    std::string m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Memory Load
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * Hard disk size.
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Hard Disk Load
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * Number of Accounts
                     */
                    std::string m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * Number of Processes
                     */
                    std::string m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * Software application.
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * Listening port
                     */
                    uint64_t m_portCount;
                    bool m_portCountHasBeenSet;

                    /**
                     * Network attack.
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * Network access.
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Network Interception
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * Inbound peak bandwidth.
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * Outbound peak bandwidth.
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Total inbound traffic.
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * Outbound cumulative traffic.
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Malicious outgoing request.
                     */
                    uint64_t m_netWorkOut;
                    bool m_netWorkOutHasBeenSet;

                    /**
                     * Port risk.
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * Vulnerability risk.
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * Configuration risk.
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Scan Task Count
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * memberId
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Full OS Name
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Risk service exposure.
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * Simulated Attack Tool Status. 0 indicates not installed. 1 indicates installed. 2 indicates offline.
                     */
                    int64_t m_bASAgentStatus;
                    bool m_bASAgentStatusHasBeenSet;

                    /**
                     * 1-New Asset; 0-Not a New Asset
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 0: not installed; 1: install; 2: installing.
                     */
                    int64_t m_cVMAgentStatus;
                    bool m_cVMAgentStatusHasBeenSet;

                    /**
                     * 1: enable 0: not enabled.
                     */
                    int64_t m_cVMStatus;
                    bool m_cVMStatusHasBeenSet;

                    /**
                     * 1: client installed 0: not installed 2: Agentless.
                     */
                    int64_t m_defenseModel;
                    bool m_defenseModelHasBeenSet;

                    /**
                     * 1: installed 0: not installed.
                     */
                    int64_t m_tatStatus;
                    bool m_tatStatusHasBeenSet;

                    /**
                     * cpu trend chart.
                     */
                    std::vector<Element> m_cpuTrend;
                    bool m_cpuTrendHasBeenSet;

                    /**
                     * Memory trend chart.
                     */
                    std::vector<Element> m_memoryTrend;
                    bool m_memoryTrendHasBeenSet;

                    /**
                     * 1: agent online 0: agent offline 2: host offline.
                     */
                    int64_t m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * Number of shutdowns this month.
                     */
                    int64_t m_closeDefenseCount;
                    bool m_closeDefenseCountHasBeenSet;

                    /**
                     * Running state.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Security group data.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Physical memory occupied KB.
                     */
                    int64_t m_agentMemRss;
                    bool m_agentMemRssHasBeenSet;

                    /**
                     * CPU utilization percentage.
                     */
                    double m_agentCpuPer;
                    bool m_agentCpuPerHasBeenSet;

                    /**
                     * Actual appid belonging to cvm.
                     */
                    int64_t m_realAppid;
                    bool m_realAppidHasBeenSet;

                    /**
                     * Cloud asset type: 0: tencent cloud, 1: aws, 2: azure.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Host protection status enumeration.
0: not installed.
Basic edition protection.
2: inclusive edition protection.
3: protection by pro edition.
4: ultimate edition protection.
5: offline.
6: shutdown.
                     */
                    int64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * Last offline time.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
