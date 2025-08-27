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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETRADEPARAMETERREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETRADEPARAMETERREQUEST_H_

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
                * DescribeInstanceTradeParameter request structure.
                */
                class DescribeInstanceTradeParameterRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTradeParameterRequest();
                    ~DescribeInstanceTradeParameterRequest() = default;
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
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB.
                     * @param _memory Instance memory size in GB.
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
                     * 获取Instance storage capacity in GB.
                     * @return Storage Instance storage capacity in GB.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance storage capacity in GB.
                     * @param _storage Instance storage capacity in GB.
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
                     * 获取Type of purchased instances. HA: high-availability edition (including dual-server high-availability edition and Always On cluster edition); RO: read-only replica edition; SI: single-node edition; BI: business intelligence edition; cvmHA: new high-availability edition; cvmRO: new read-only replica edition; MultiHA: multi-node edition; cvmMultiHA: multi-node cloud disk edition.
                     * @return InstanceType Type of purchased instances. HA: high-availability edition (including dual-server high-availability edition and Always On cluster edition); RO: read-only replica edition; SI: single-node edition; BI: business intelligence edition; cvmHA: new high-availability edition; cvmRO: new read-only replica edition; MultiHA: multi-node edition; cvmMultiHA: multi-node cloud disk edition.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type of purchased instances. HA: high-availability edition (including dual-server high-availability edition and Always On cluster edition); RO: read-only replica edition; SI: single-node edition; BI: business intelligence edition; cvmHA: new high-availability edition; cvmRO: new read-only replica edition; MultiHA: multi-node edition; cvmMultiHA: multi-node cloud disk edition.
                     * @param _instanceType Type of purchased instances. HA: high-availability edition (including dual-server high-availability edition and Always On cluster edition); RO: read-only replica edition; SI: single-node edition; BI: business intelligence edition; cvmHA: new high-availability edition; cvmRO: new read-only replica edition; MultiHA: multi-node edition; cvmMultiHA: multi-node cloud disk edition.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Host disk type of purchased instances. CLOUD_HSSD - Enhanced SSD for CVMs, CLOUD_TSSD - Tremendous SSD for CVMs, CLOUD_BSSD - Balanced SSD for CVMs. 
                     * @return MachineType Host disk type of purchased instances. CLOUD_HSSD - Enhanced SSD for CVMs, CLOUD_TSSD - Tremendous SSD for CVMs, CLOUD_BSSD - Balanced SSD for CVMs. 
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Host disk type of purchased instances. CLOUD_HSSD - Enhanced SSD for CVMs, CLOUD_TSSD - Tremendous SSD for CVMs, CLOUD_BSSD - Balanced SSD for CVMs. 
                     * @param _machineType Host disk type of purchased instances. CLOUD_HSSD - Enhanced SSD for CVMs, CLOUD_TSSD - Tremendous SSD for CVMs, CLOUD_BSSD - Balanced SSD for CVMs. 
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
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * @return GoodsNum Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     * @param _goodsNum Number of instances purchased this time. Default value: 1. Maximum value: 10.
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
                     * 获取VPC subnet ID in the format of subnet-bdoe83fa. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * @return SubnetId VPC subnet ID in the format of subnet-bdoe83fa. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID in the format of subnet-bdoe83fa. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * @param _subnetId VPC subnet ID in the format of subnet-bdoe83fa. `SubnetId` and `VpcId` should be set or ignored simultaneously.
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
                     * 获取VPC ID in the format of vpc-dsp338hz. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * @return VpcId VPC ID in the format of vpc-dsp338hz. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of vpc-dsp338hz. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     * @param _vpcId VPC ID in the format of vpc-dsp338hz. `SubnetId` and `VpcId` should be set or ignored simultaneously.
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
                     * 获取Whether to deploy across availability zones. Default value: false.
                     * @return MultiZones Whether to deploy across availability zones. Default value: false.
                     * 
                     */
                    bool GetMultiZones() const;

                    /**
                     * 设置Whether to deploy across availability zones. Default value: false.
                     * @param _multiZones Whether to deploy across availability zones. Default value: false.
                     * 
                     */
                    void SetMultiZones(const bool& _multiZones);

                    /**
                     * 判断参数 MultiZones 是否已赋值
                     * @return MultiZones 是否已赋值
                     * 
                     */
                    bool MultiZonesHasBeenSet() const;

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
                     * 获取Whether it is a multi-node architecture instance. Default value: `false`.
                     * @return MultiNodes Whether it is a multi-node architecture instance. Default value: `false`.
                     * 
                     */
                    bool GetMultiNodes() const;

                    /**
                     * 设置Whether it is a multi-node architecture instance. Default value: `false`.
                     * @param _multiNodes Whether it is a multi-node architecture instance. Default value: `false`.
                     * 
                     */
                    void SetMultiNodes(const bool& _multiNodes);

                    /**
                     * 判断参数 MultiNodes 是否已赋值
                     * @return MultiNodes 是否已赋值
                     * 
                     */
                    bool MultiNodesHasBeenSet() const;

                    /**
                     * 获取The zone in which the standby node is available. Default is empty. If it is a multi-node architecture, it must be transmitted. When MultiNodes = true, the availability zones of the primary and standby nodes cannot all be the same. The minimum number of availability zones for the standby nodes is 2, and the maximum is 5.
                     * @return DrZones The zone in which the standby node is available. Default is empty. If it is a multi-node architecture, it must be transmitted. When MultiNodes = true, the availability zones of the primary and standby nodes cannot all be the same. The minimum number of availability zones for the standby nodes is 2, and the maximum is 5.
                     * 
                     */
                    std::vector<std::string> GetDrZones() const;

                    /**
                     * 设置The zone in which the standby node is available. Default is empty. If it is a multi-node architecture, it must be transmitted. When MultiNodes = true, the availability zones of the primary and standby nodes cannot all be the same. The minimum number of availability zones for the standby nodes is 2, and the maximum is 5.
                     * @param _drZones The zone in which the standby node is available. Default is empty. If it is a multi-node architecture, it must be transmitted. When MultiNodes = true, the availability zones of the primary and standby nodes cannot all be the same. The minimum number of availability zones for the standby nodes is 2, and the maximum is 5.
                     * 
                     */
                    void SetDrZones(const std::vector<std::string>& _drZones);

                    /**
                     * 判断参数 DrZones 是否已赋值
                     * @return DrZones 是否已赋值
                     * 
                     */
                    bool DrZonesHasBeenSet() const;

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
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance storage capacity in GB.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Type of purchased instances. HA: high-availability edition (including dual-server high-availability edition and Always On cluster edition); RO: read-only replica edition; SI: single-node edition; BI: business intelligence edition; cvmHA: new high-availability edition; cvmRO: new read-only replica edition; MultiHA: multi-node edition; cvmMultiHA: multi-node cloud disk edition.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Host disk type of purchased instances. CLOUD_HSSD - Enhanced SSD for CVMs, CLOUD_TSSD - Tremendous SSD for CVMs, CLOUD_BSSD - Balanced SSD for CVMs. 
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
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of instances purchased this time. Default value: 1. Maximum value: 10.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * SQL Server version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), 201402 (SQL Server 2014 Standard), `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The available version varies by region, and you can pull the version information by calling the `DescribeProductConfig` API.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * VPC subnet ID in the format of subnet-bdoe83fa. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC ID in the format of vpc-dsp338hz. `SubnetId` and `VpcId` should be set or ignored simultaneously.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

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
                     * Whether to deploy across availability zones. Default value: false.
                     */
                    bool m_multiZones;
                    bool m_multiZonesHasBeenSet;

                    /**
                     * Tags associated with the instances to be created.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * System time zone. Default value: `China Standard Time`.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Collation of system character sets. Default value: `Chinese_PRC_CI_AS`.
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * Whether it is a multi-node architecture instance. Default value: `false`.
                     */
                    bool m_multiNodes;
                    bool m_multiNodesHasBeenSet;

                    /**
                     * The zone in which the standby node is available. Default is empty. If it is a multi-node architecture, it must be transmitted. When MultiNodes = true, the availability zones of the primary and standby nodes cannot all be the same. The minimum number of availability zones for the standby nodes is 2, and the maximum is 5.
                     */
                    std::vector<std::string> m_drZones;
                    bool m_drZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETRADEPARAMETERREQUEST_H_
