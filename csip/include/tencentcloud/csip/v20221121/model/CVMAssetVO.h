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


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Details of a server asset
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPStatus Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPStatus Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
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
                     * 获取VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcName VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取App ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId App ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置App ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId App ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NickName User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nickName User name
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AvailableArea Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAvailableArea() const;

                    /**
                     * 设置Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _availableArea Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCore Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCore Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Subnet name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SubnetName Subnet name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _subnetName Subnet name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取UUID of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InstanceUuid UUID of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceUuid() const;

                    /**
                     * 设置UUID of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _instanceUuid UUID of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取QUuid of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InstanceQUuid QUuid of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceQUuid() const;

                    /**
                     * 设置QUuid of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _instanceQUuid QUuid of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取OS name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OsName OS name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置OS name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _osName OS name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of partitions
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PartitionCount Number of partitions
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置Number of partitions
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _partitionCount Number of partitions
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CPU information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CPUInfo CPU information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCPUInfo() const;

                    /**
                     * 设置CPU information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cPUInfo CPU information
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CPU size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CPUSize CPU size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCPUSize() const;

                    /**
                     * 设置CPU size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cPUSize CPU size
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CPU load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CPULoad CPU load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCPULoad() const;

                    /**
                     * 设置CPU load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cPULoad CPU load
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Memory size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MemorySize Memory size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemorySize() const;

                    /**
                     * 设置Memory size
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _memorySize Memory size
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Memory load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MemoryLoad Memory load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置Memory load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _memoryLoad Memory load
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Disk size.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DiskSize Disk size.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置Disk size.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _diskSize Disk size.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Disk load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DiskLoad Disk load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置Disk load
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _diskLoad Disk load
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AccountCount Number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountCount() const;

                    /**
                     * 设置Number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _accountCount Number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ProcessCount Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcessCount() const;

                    /**
                     * 设置Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _processCount Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppCount Number of applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置Number of applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appCount Number of applications
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of listened ports.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PortCount Number of listened ports.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPortCount() const;

                    /**
                     * 设置Number of listened ports.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _portCount Number of listened ports.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Attack Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _attack Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Access Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _access Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InBandwidth Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inBandwidth Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取OutInbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutBandwidth OutInbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置OutInbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outBandwidth OutInbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InFlow Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inFlow Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutFlow Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outFlow Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Proactive malicious outgoing requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NetWorkOut Proactive malicious outgoing requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNetWorkOut() const;

                    /**
                     * 设置Proactive malicious outgoing requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _netWorkOut Proactive malicious outgoing requests
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PortRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _portRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Configuraiton risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ConfigurationRisk Configuraiton risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuraiton risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _configurationRisk Configuraiton risks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanTask Number of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置Number of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanTask Number of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MemberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _memberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Full name of the operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Os Full name of the operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Full name of the operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _os Full name of the operating system
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskExposure Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskExposure Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取BAS toolkit status. `0`: Not installed; `1`: Installed; `2`: Offline.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return BASAgentStatus BAS toolkit status. `0`: Not installed; `1`: Installed; `2`: Offline.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBASAgentStatus() const;

                    /**
                     * 设置BAS toolkit status. `0`: Not installed; `1`: Installed; `2`: Offline.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _bASAgentStatus BAS toolkit status. `0`: Not installed; `1`: Installed; `2`: Offline.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取`1`: New asset; `0`: Not a new asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsNewAsset `1`: New asset; `0`: Not a new asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置`1`: New asset; `0`: Not a new asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isNewAsset `1`: New asset; `0`: Not a new asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                private:

                    /**
                     * Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * App ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Availability zone
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_availableArea;
                    bool m_availableAreaHasBeenSet;

                    /**
                     * Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * UUID of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceUuid;
                    bool m_instanceUuidHasBeenSet;

                    /**
                     * QUuid of the instance
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceQUuid;
                    bool m_instanceQUuidHasBeenSet;

                    /**
                     * OS name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Number of partitions
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * CPU information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cPUInfo;
                    bool m_cPUInfoHasBeenSet;

                    /**
                     * CPU size
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cPUSize;
                    bool m_cPUSizeHasBeenSet;

                    /**
                     * CPU load
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cPULoad;
                    bool m_cPULoadHasBeenSet;

                    /**
                     * Memory size
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Memory load
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * Disk size.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Disk load
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * Number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * Number of applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * Number of listened ports.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_portCount;
                    bool m_portCountHasBeenSet;

                    /**
                     * Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * Inbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * OutInbound peak bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Total inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * Total outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Proactive malicious outgoing requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_netWorkOut;
                    bool m_netWorkOutHasBeenSet;

                    /**
                     * Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * Configuraiton risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Number of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Full name of the operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * BAS toolkit status. `0`: Not installed; `1`: Installed; `2`: Offline.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bASAgentStatus;
                    bool m_bASAgentStatusHasBeenSet;

                    /**
                     * `1`: New asset; `0`: Not a new asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
