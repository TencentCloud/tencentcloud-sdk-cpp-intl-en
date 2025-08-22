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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_

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
                * CreateBasicDBInstances request structure.
                */
                class CreateBasicDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateBasicDBInstancesRequest();
                    ~CreateBasicDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance AZ, such as ap-guangzhou-1 (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the `DescribeZones` API.
                     * @return Zone Instance AZ, such as ap-guangzhou-1 (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the `DescribeZones` API.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ, such as ap-guangzhou-1 (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the `DescribeZones` API.
                     * @param _zone Instance AZ, such as ap-guangzhou-1 (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the `DescribeZones` API.
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
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
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
                     * 获取Instance memory size in GB.
                     * @return Memory Instance memory size in GB.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB.
                     * @param _memory Instance memory size in GB.
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance storage capacity in GB.
                     * @return Storage Instance storage capacity in GB.
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB.
                     * @param _storage Instance storage capacity in GB.
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID in the format of subnet-bdoe83fa.
                     * @return SubnetId VPC subnet ID in the format of subnet-bdoe83fa.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in the format of subnet-bdoe83fa.
                     * @param _subnetId VPC subnet ID in the format of subnet-bdoe83fa.
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
                     * 获取VPC ID in the format of vpc-dsp338hz.
                     * @return VpcId VPC ID in the format of vpc-dsp338hz.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of vpc-dsp338hz.
                     * @param _vpcId VPC ID in the format of vpc-dsp338hz.
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
                     * 获取Host type of purchased instances. CLOUD_PREMIUM: Premium Disk for virtual machines; CLOUD_SSD: Cloud SSD for virtual machines; CLOUD_HSSD: Enhanced SSD for virtual machines; CLOUD_BSSD: Balanced SSD for virtual machines.
                     * @return MachineType Host type of purchased instances. CLOUD_PREMIUM: Premium Disk for virtual machines; CLOUD_SSD: Cloud SSD for virtual machines; CLOUD_HSSD: Enhanced SSD for virtual machines; CLOUD_BSSD: Balanced SSD for virtual machines.
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Host type of purchased instances. CLOUD_PREMIUM: Premium Disk for virtual machines; CLOUD_SSD: Cloud SSD for virtual machines; CLOUD_HSSD: Enhanced SSD for virtual machines; CLOUD_BSSD: Balanced SSD for virtual machines.
                     * @param _machineType Host type of purchased instances. CLOUD_PREMIUM: Premium Disk for virtual machines; CLOUD_SSD: Cloud SSD for virtual machines; CLOUD_HSSD: Enhanced SSD for virtual machines; CLOUD_BSSD: Balanced SSD for virtual machines.
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
                     * 获取Billing mode. Valid value: POSTPAID (pay-as-you-go).
                     * @return InstanceChargeType Billing mode. Valid value: POSTPAID (pay-as-you-go).
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Billing mode. Valid value: POSTPAID (pay-as-you-go).
                     * @param _instanceChargeType Billing mode. Valid value: POSTPAID (pay-as-you-go).
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * @return GoodsNum Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * @param _goodsNum Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     * @return DBVersion SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     * @param _dBVersion SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Length of purchase of instance. The default value is 1, indicating one month. The value cannot exceed 48.
                     * @return Period Length of purchase of instance. The default value is 1, indicating one month. The value cannot exceed 48.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Length of purchase of instance. The default value is 1, indicating one month. The value cannot exceed 48.
                     * @param _period Length of purchase of instance. The default value is 1, indicating one month. The value cannot exceed 48.
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
                     * 获取Security group list, which contains security group IDs in the format of sg-xxx.
                     * @return SecurityGroupList Security group list, which contains security group IDs in the format of sg-xxx.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置Security group list, which contains security group IDs in the format of sg-xxx.
                     * @param _securityGroupList Security group list, which contains security group IDs in the format of sg-xxx.
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
                     * 获取Auto-renewal flag. 0: normal renewal, 1: auto-renewal. Default value: 1.
                     * @return AutoRenewFlag Auto-renewal flag. 0: normal renewal, 1: auto-renewal. Default value: 1.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0: normal renewal, 1: auto-renewal. Default value: 1.
                     * @param _autoRenewFlag Auto-renewal flag. 0: normal renewal, 1: auto-renewal. Default value: 1.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * @return AutoVoucher Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     * @param _autoVoucher Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
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
                     * 获取Array of voucher IDs (currently, only one voucher can be used per order).
                     * @return VoucherIds Array of voucher IDs (currently, only one voucher can be used per order).
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Array of voucher IDs (currently, only one voucher can be used per order).
                     * @param _voucherIds Array of voucher IDs (currently, only one voucher can be used per order).
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
                     * 获取Configuration of the maintenance window, which specifies the day of the week when maintenance can be performed. Valid values: 1 (Monday), 2 (Tuesday), 3 (Wednesday), 4 (Thursday), 5 (Friday), 6 (Saturday), 7 (Sunday).
                     * @return Weekly Configuration of the maintenance window, which specifies the day of the week when maintenance can be performed. Valid values: 1 (Monday), 2 (Tuesday), 3 (Wednesday), 4 (Thursday), 5 (Friday), 6 (Saturday), 7 (Sunday).
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置Configuration of the maintenance window, which specifies the day of the week when maintenance can be performed. Valid values: 1 (Monday), 2 (Tuesday), 3 (Wednesday), 4 (Thursday), 5 (Friday), 6 (Saturday), 7 (Sunday).
                     * @param _weekly Configuration of the maintenance window, which specifies the day of the week when maintenance can be performed. Valid values: 1 (Monday), 2 (Tuesday), 3 (Wednesday), 4 (Thursday), 5 (Friday), 6 (Saturday), 7 (Sunday).
                     * 
                     */
                    void SetWeekly(const std::vector<int64_t>& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取Configuration of the maintenance window, which specifies the start time of daily maintenance.
                     * @return StartTime Configuration of the maintenance window, which specifies the start time of daily maintenance.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Configuration of the maintenance window, which specifies the start time of daily maintenance.
                     * @param _startTime Configuration of the maintenance window, which specifies the start time of daily maintenance.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Configuration of the maintenance window, which specifies the maintenance duration in hours.
                     * @return Span Configuration of the maintenance window, which specifies the maintenance duration in hours.
                     * 
                     */
                    int64_t GetSpan() const;

                    /**
                     * 设置Configuration of the maintenance window, which specifies the maintenance duration in hours.
                     * @param _span Configuration of the maintenance window, which specifies the maintenance duration in hours.
                     * 
                     */
                    void SetSpan(const int64_t& _span);

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

                    /**
                     * 获取Tags associated with the instances to be created.
                     * @return ResourceTags Tags associated with the instances to be created.
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置Tags associated with the instances to be created.
                     * @param _resourceTags Tags associated with the instances to be created.
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
                     * 获取Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     * @return Collation Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     * @param _collation Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
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
                     * 获取System time zone. Default value: `China Standard Time`.
                     * @return TimeZone System time zone. Default value: `China Standard Time`.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置System time zone. Default value: `China Standard Time`.
                     * @param _timeZone System time zone. Default value: `China Standard Time`.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取Disk encryption identifier, 0-unencrypted, 1-encrypted.
                     * @return DiskEncryptFlag Disk encryption identifier, 0-unencrypted, 1-encrypted.
                     * 
                     */
                    int64_t GetDiskEncryptFlag() const;

                    /**
                     * 设置Disk encryption identifier, 0-unencrypted, 1-encrypted.
                     * @param _diskEncryptFlag Disk encryption identifier, 0-unencrypted, 1-encrypted.
                     * 
                     */
                    void SetDiskEncryptFlag(const int64_t& _diskEncryptFlag);

                    /**
                     * 判断参数 DiskEncryptFlag 是否已赋值
                     * @return DiskEncryptFlag 是否已赋值
                     * 
                     */
                    bool DiskEncryptFlagHasBeenSet() const;

                private:

                    /**
                     * Instance AZ, such as ap-guangzhou-1 (Guangzhou Zone 1). Purchasable AZs for an instance can be obtained through the `DescribeZones` API.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory size in GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance storage capacity in GB.
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * VPC subnet ID in the format of subnet-bdoe83fa.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC ID in the format of vpc-dsp338hz.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Host type of purchased instances. CLOUD_PREMIUM: Premium Disk for virtual machines; CLOUD_SSD: Cloud SSD for virtual machines; CLOUD_HSSD: Enhanced SSD for virtual machines; CLOUD_BSSD: Balanced SSD for virtual machines.
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Billing mode. Valid value: POSTPAID (pay-as-you-go).
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Length of purchase of instance. The default value is 1, indicating one month. The value cannot exceed 48.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Security group list, which contains security group IDs in the format of sg-xxx.
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * Auto-renewal flag. 0: normal renewal, 1: auto-renewal. Default value: 1.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically use voucher. 0: no, 1: yes. Default value: no.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Array of voucher IDs (currently, only one voucher can be used per order).
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Configuration of the maintenance window, which specifies the day of the week when maintenance can be performed. Valid values: 1 (Monday), 2 (Tuesday), 3 (Wednesday), 4 (Thursday), 5 (Friday), 6 (Saturday), 7 (Sunday).
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * Configuration of the maintenance window, which specifies the start time of daily maintenance.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Configuration of the maintenance window, which specifies the maintenance duration in hours.
                     */
                    int64_t m_span;
                    bool m_spanHasBeenSet;

                    /**
                     * Tags associated with the instances to be created.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * System time zone. Default value: `China Standard Time`.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Disk encryption identifier, 0-unencrypted, 1-encrypted.
                     */
                    int64_t m_diskEncryptFlag;
                    bool m_diskEncryptFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBASICDBINSTANCESREQUEST_H_
