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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateCloudReadOnlyDBInstances request structure.
                */
                class CreateCloudReadOnlyDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateCloudReadOnlyDBInstancesRequest();
                    ~CreateCloudReadOnlyDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of  `mssql-3l3fgqn7`.
                     * @return InstanceId Instance ID in the format of  `mssql-3l3fgqn7`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of  `mssql-3l3fgqn7`.
                     * @param _instanceId Instance ID in the format of  `mssql-3l3fgqn7`.
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
                     * 获取Instance AZ, such as `ap-guangzhou-1` (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the`DescribeZones` API.
                     * @return Zone Instance AZ, such as `ap-guangzhou-1` (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the`DescribeZones` API.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ, such as `ap-guangzhou-1` (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the`DescribeZones` API.
                     * @param _zone Instance AZ, such as `ap-guangzhou-1` (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the`DescribeZones` API.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Read-only group types. Valid values: `1` (each read-only replica is placed in one auto-created read-only group), `2` (all read-only replicas are placed in one auto-created read-only group), `3` (all read-only replicas are placed in one existing read-only group).
                     * @return ReadOnlyGroupType Read-only group types. Valid values: `1` (each read-only replica is placed in one auto-created read-only group), `2` (all read-only replicas are placed in one auto-created read-only group), `3` (all read-only replicas are placed in one existing read-only group).
                     * 
                     */
                    int64_t GetReadOnlyGroupType() const;

                    /**
                     * 设置Read-only group types. Valid values: `1` (each read-only replica is placed in one auto-created read-only group), `2` (all read-only replicas are placed in one auto-created read-only group), `3` (all read-only replicas are placed in one existing read-only group).
                     * @param _readOnlyGroupType Read-only group types. Valid values: `1` (each read-only replica is placed in one auto-created read-only group), `2` (all read-only replicas are placed in one auto-created read-only group), `3` (all read-only replicas are placed in one existing read-only group).
                     * 
                     */
                    void SetReadOnlyGroupType(const int64_t& _readOnlyGroupType);

                    /**
                     * 判断参数 ReadOnlyGroupType 是否已赋值
                     * @return ReadOnlyGroupType 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupTypeHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB
                     * @return Memory Instance memory size in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB
                     * @param _memory Instance memory size in GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB
                     * @return Storage Instance disk size in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance disk size in GB
                     * @param _storage Instance disk size in GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Number of instance cores
                     * @return Cpu Number of instance cores
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of instance cores
                     * @param _cpu Number of instance cores
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取The host type of purchased instance. Valid values: `CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * @return MachineType The host type of purchased instance. Valid values: `CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置The host type of purchased instance. Valid values: `CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * @param _machineType The host type of purchased instance. Valid values: `CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Valid values: `0` (not upgrade the primary instance by default), `1` (upgrade the primary instance to complete the RO deployment).  You need to pass in `1` for this parameter and upgrade the primary instance to cluster edition.
                     * @return ReadOnlyGroupForcedUpgrade Valid values: `0` (not upgrade the primary instance by default), `1` (upgrade the primary instance to complete the RO deployment).  You need to pass in `1` for this parameter and upgrade the primary instance to cluster edition.
                     * 
                     */
                    int64_t GetReadOnlyGroupForcedUpgrade() const;

                    /**
                     * 设置Valid values: `0` (not upgrade the primary instance by default), `1` (upgrade the primary instance to complete the RO deployment).  You need to pass in `1` for this parameter and upgrade the primary instance to cluster edition.
                     * @param _readOnlyGroupForcedUpgrade Valid values: `0` (not upgrade the primary instance by default), `1` (upgrade the primary instance to complete the RO deployment).  You need to pass in `1` for this parameter and upgrade the primary instance to cluster edition.
                     * 
                     */
                    void SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade);

                    /**
                     * 判断参数 ReadOnlyGroupForcedUpgrade 是否已赋值
                     * @return ReadOnlyGroupForcedUpgrade 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupForcedUpgradeHasBeenSet() const;

                    /**
                     * 获取Existing read-only group ID, which is required when `ReadOnlyGroupType` is `3`.
                     * @return ReadOnlyGroupId Existing read-only group ID, which is required when `ReadOnlyGroupType` is `3`.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置Existing read-only group ID, which is required when `ReadOnlyGroupType` is `3`.
                     * @param _readOnlyGroupId Existing read-only group ID, which is required when `ReadOnlyGroupType` is `3`.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取New read-only group ID, which is required when `ReadOnlyGroupType` is `2`.
                     * @return ReadOnlyGroupName New read-only group ID, which is required when `ReadOnlyGroupType` is `2`.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置New read-only group ID, which is required when `ReadOnlyGroupType` is `2`.
                     * @param _readOnlyGroupName New read-only group ID, which is required when `ReadOnlyGroupType` is `2`.
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether delayed read-only instance removal is enabled in a new read-only group, which is required when `ReadOnlyGroupType` is `2`. Valid values: `1` (enabled), `0` (disabled).  The read-only replica will be automatically removed when the delay between it and the primary instance exceeds the threshold.
                     * @return ReadOnlyGroupIsOfflineDelay Whether delayed read-only instance removal is enabled in a new read-only group, which is required when `ReadOnlyGroupType` is `2`. Valid values: `1` (enabled), `0` (disabled).  The read-only replica will be automatically removed when the delay between it and the primary instance exceeds the threshold.
                     * 
                     */
                    int64_t GetReadOnlyGroupIsOfflineDelay() const;

                    /**
                     * 设置Whether delayed read-only instance removal is enabled in a new read-only group, which is required when `ReadOnlyGroupType` is `2`. Valid values: `1` (enabled), `0` (disabled).  The read-only replica will be automatically removed when the delay between it and the primary instance exceeds the threshold.
                     * @param _readOnlyGroupIsOfflineDelay Whether delayed read-only instance removal is enabled in a new read-only group, which is required when `ReadOnlyGroupType` is `2`. Valid values: `1` (enabled), `0` (disabled).  The read-only replica will be automatically removed when the delay between it and the primary instance exceeds the threshold.
                     * 
                     */
                    void SetReadOnlyGroupIsOfflineDelay(const int64_t& _readOnlyGroupIsOfflineDelay);

                    /**
                     * 判断参数 ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * @return ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取The delay threshold for a new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * @return ReadOnlyGroupMaxDelayTime The delay threshold for a new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * 
                     */
                    int64_t GetReadOnlyGroupMaxDelayTime() const;

                    /**
                     * 设置The delay threshold for a new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * @param _readOnlyGroupMaxDelayTime The delay threshold for a new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * 
                     */
                    void SetReadOnlyGroupMaxDelayTime(const int64_t& _readOnlyGroupMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyGroupMaxDelayTime 是否已赋值
                     * @return ReadOnlyGroupMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Minimum number of reserved read-only replicas when the delayed removal is enabled for the new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * @return ReadOnlyGroupMinInGroup Minimum number of reserved read-only replicas when the delayed removal is enabled for the new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * 
                     */
                    int64_t GetReadOnlyGroupMinInGroup() const;

                    /**
                     * 设置Minimum number of reserved read-only replicas when the delayed removal is enabled for the new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * @param _readOnlyGroupMinInGroup Minimum number of reserved read-only replicas when the delayed removal is enabled for the new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     * 
                     */
                    void SetReadOnlyGroupMinInGroup(const int64_t& _readOnlyGroupMinInGroup);

                    /**
                     * 判断参数 ReadOnlyGroupMinInGroup 是否已赋值
                     * @return ReadOnlyGroupMinInGroup 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMinInGroupHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID` (pay-as-you-go).
                     * @return InstanceChargeType Billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID` (pay-as-you-go).
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID` (pay-as-you-go).
                     * @param _instanceChargeType Billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID` (pay-as-you-go).
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Number of instances purchased this time. Default value: `1`.
                     * @return GoodsNum Number of instances purchased this time. Default value: `1`.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances purchased this time. Default value: `1`.
                     * @param _goodsNum Number of instances purchased this time. Default value: `1`.
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID in the format of `subnet-bdoe83fa`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * @return SubnetId VPC subnet ID in the format of `subnet-bdoe83fa`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in the format of `subnet-bdoe83fa`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * @param _subnetId VPC subnet ID in the format of `subnet-bdoe83fa`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
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
                     * 获取VPC ID in the format of `vpc-dsp338hz`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * @return VpcId VPC ID in the format of `vpc-dsp338hz`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of `vpc-dsp338hz`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     * @param _vpcId VPC ID in the format of `vpc-dsp338hz`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
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
                     * 获取The purchase period of an instance. Default value: `1` (one month).  Maximum value: `48`.
                     * @return Period The purchase period of an instance. Default value: `1` (one month).  Maximum value: `48`.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置The purchase period of an instance. Default value: `1` (one month).  Maximum value: `48`.
                     * @param _period The purchase period of an instance. Default value: `1` (one month).  Maximum value: `48`.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Security group list, which contains security group IDs in the format of `sg-xxx`.
                     * @return SecurityGroupList Security group list, which contains security group IDs in the format of `sg-xxx`.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置Security group list, which contains security group IDs in the format of `sg-xxx`.
                     * @param _securityGroupList Security group list, which contains security group IDs in the format of `sg-xxx`.
                     * 
                     */
                    void SetSecurityGroupList(const std::vector<std::string>& _securityGroupList);

                    /**
                     * 判断参数 SecurityGroupList 是否已赋值
                     * @return SecurityGroupList 是否已赋值
                     * 
                     */
                    bool SecurityGroupListHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use voucher. Valid values: `0` (no, default), `1` (yes).
                     * @return AutoVoucher Whether to automatically use voucher. Valid values: `0` (no, default), `1` (yes).
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use voucher. Valid values: `0` (no, default), `1` (yes).
                     * @param _autoVoucher Whether to automatically use voucher. Valid values: `0` (no, default), `1` (yes).
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Array of voucher IDs (currently, only one voucher can be used per order)
                     * @return VoucherIds Array of voucher IDs (currently, only one voucher can be used per order)
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Array of voucher IDs (currently, only one voucher can be used per order)
                     * @param _voucherIds Array of voucher IDs (currently, only one voucher can be used per order)
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取Tags associated with the instances to be created
                     * @return ResourceTags Tags associated with the instances to be created
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Tags associated with the instances to be created
                     * @param _resourceTags Tags associated with the instances to be created
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Collation of system character sets. Default value:  Chinese_PRC_CI_AS
                     * @return Collation Collation of system character sets. Default value:  Chinese_PRC_CI_AS
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置Collation of system character sets. Default value:  Chinese_PRC_CI_AS
                     * @param _collation Collation of system character sets. Default value:  Chinese_PRC_CI_AS
                     * 
                     */
                    void SetCollation(const std::string& _collation);

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     * 
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取System time zone. Default value:  `China Standard Time`
                     * @return TimeZone System time zone. Default value:  `China Standard Time`
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置System time zone. Default value:  `China Standard Time`
                     * @param _timeZone System time zone. Default value:  `China Standard Time`
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of  `mssql-3l3fgqn7`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance AZ, such as `ap-guangzhou-1` (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the`DescribeZones` API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Read-only group types. Valid values: `1` (each read-only replica is placed in one auto-created read-only group), `2` (all read-only replicas are placed in one auto-created read-only group), `3` (all read-only replicas are placed in one existing read-only group).
                     */
                    int64_t m_readOnlyGroupType;
                    bool m_readOnlyGroupTypeHasBeenSet;

                    /**
                     * Instance memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Number of instance cores
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * The host type of purchased instance. Valid values: `CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Valid values: `0` (not upgrade the primary instance by default), `1` (upgrade the primary instance to complete the RO deployment).  You need to pass in `1` for this parameter and upgrade the primary instance to cluster edition.
                     */
                    int64_t m_readOnlyGroupForcedUpgrade;
                    bool m_readOnlyGroupForcedUpgradeHasBeenSet;

                    /**
                     * Existing read-only group ID, which is required when `ReadOnlyGroupType` is `3`.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * New read-only group ID, which is required when `ReadOnlyGroupType` is `2`.
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Whether delayed read-only instance removal is enabled in a new read-only group, which is required when `ReadOnlyGroupType` is `2`. Valid values: `1` (enabled), `0` (disabled).  The read-only replica will be automatically removed when the delay between it and the primary instance exceeds the threshold.
                     */
                    int64_t m_readOnlyGroupIsOfflineDelay;
                    bool m_readOnlyGroupIsOfflineDelayHasBeenSet;

                    /**
                     * The delay threshold for a new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     */
                    int64_t m_readOnlyGroupMaxDelayTime;
                    bool m_readOnlyGroupMaxDelayTimeHasBeenSet;

                    /**
                     * Minimum number of reserved read-only replicas when the delayed removal is enabled for the new read-only group, which is required when `ReadOnlyGroupType` is `2` and `ReadOnlyGroupIsOfflineDelay` is `1`.
                     */
                    int64_t m_readOnlyGroupMinInGroup;
                    bool m_readOnlyGroupMinInGroupHasBeenSet;

                    /**
                     * Billing mode. Valid values: `PREPAID` (monthly subscription), `POSTPAID` (pay-as-you-go).
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Number of instances purchased this time. Default value: `1`.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * VPC subnet ID in the format of `subnet-bdoe83fa`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC ID in the format of `vpc-dsp338hz`. Both `SubnetId` and `VpcId` need to be set or unset at the same time.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The purchase period of an instance. Default value: `1` (one month).  Maximum value: `48`.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Security group list, which contains security group IDs in the format of `sg-xxx`.
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * Whether to automatically use voucher. Valid values: `0` (no, default), `1` (yes).
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Array of voucher IDs (currently, only one voucher can be used per order)
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Tags associated with the instances to be created
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Collation of system character sets. Default value:  Chinese_PRC_CI_AS
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * System time zone. Default value:  `China Standard Time`
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATECLOUDREADONLYDBINSTANCESREQUEST_H_
