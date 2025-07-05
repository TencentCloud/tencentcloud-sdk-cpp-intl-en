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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDBInstances request structure.
                */
                class InquiryPriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesRequest();
                    ~InquiryPriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API
                     * @return Zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API
                     * @param _zone AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API
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
                     * 获取Memory size in GB
                     * @return Memory Memory size in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB
                     * @param _memory Memory size in GB
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
                     * 获取Instance capacity in GB
                     * @return Storage Instance capacity in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Instance capacity in GB
                     * @param _storage Instance capacity in GB
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
                     * 获取Billing type. Valid value: POSTPAID.
                     * @return InstanceChargeType Billing type. Valid value: POSTPAID.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Billing type. Valid value: POSTPAID.
                     * @param _instanceChargeType Billing type. Valid value: POSTPAID.
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
                     * 获取Length of purchase in months. Value range: 1-48. Default value: 1
                     * @return Period Length of purchase in months. Value range: 1-48. Default value: 1
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Length of purchase in months. Value range: 1-48. Default value: 1
                     * @param _period Length of purchase in months. Value range: 1-48. Default value: 1
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
                     * 获取Number of instances purchased at a time. Value range: 1-100. Default value: 1
                     * @return GoodsNum Number of instances purchased at a time. Value range: 1-100. Default value: 1
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances purchased at a time. Value range: 1-100. Default value: 1
                     * @param _goodsNum Number of instances purchased at a time. Value range: 1-100. Default value: 1
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
                     * 获取SQL version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), `201402` (SQL Server 2014 Standard)`, `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The purchasable version varies by region. It can be queried by the `DescribeProductConfig` API.
                     * @return DBVersion SQL version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), `201402` (SQL Server 2014 Standard)`, `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The purchasable version varies by region. It can be queried by the `DescribeProductConfig` API.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置SQL version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), `201402` (SQL Server 2014 Standard)`, `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The purchasable version varies by region. It can be queried by the `DescribeProductConfig` API.
                     * @param _dBVersion SQL version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), `201402` (SQL Server 2014 Standard)`, `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The purchasable version varies by region. It can be queried by the `DescribeProductConfig` API.
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
                     * 获取The number of CPU cores of the instance you want to purchase.
                     * @return Cpu The number of CPU cores of the instance you want to purchase.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置The number of CPU cores of the instance you want to purchase.
                     * @param _cpu The number of CPU cores of the instance you want to purchase.
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取The type of instance to be purchased. Valid values: `HA` (high-availability edition, including dual-server high-availability and AlwaysOn cluster edition), `RO` (read-only replica edition), `SI` (single-node edition), `cvmHA` (dual-server high-availability edition for CVM), `cvmRO` (read-only edition for CVM).
                     * @return InstanceType The type of instance to be purchased. Valid values: `HA` (high-availability edition, including dual-server high-availability and AlwaysOn cluster edition), `RO` (read-only replica edition), `SI` (single-node edition), `cvmHA` (dual-server high-availability edition for CVM), `cvmRO` (read-only edition for CVM).
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type of instance to be purchased. Valid values: `HA` (high-availability edition, including dual-server high-availability and AlwaysOn cluster edition), `RO` (read-only replica edition), `SI` (single-node edition), `cvmHA` (dual-server high-availability edition for CVM), `cvmRO` (read-only edition for CVM).
                     * @param _instanceType The type of instance to be purchased. Valid values: `HA` (high-availability edition, including dual-server high-availability and AlwaysOn cluster edition), `RO` (read-only replica edition), `SI` (single-node edition), `cvmHA` (dual-server high-availability edition for CVM), `cvmRO` (read-only edition for CVM).
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
                     * 获取The host type of the instance to be purchased. Valid values: `PM` (physical machine), `CLOUD_PREMIUM` (virtual machine with premium cloud disk), `CLOUD_SSD` (virtual machine with SSD), 
`CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * @return MachineType The host type of the instance to be purchased. Valid values: `PM` (physical machine), `CLOUD_PREMIUM` (virtual machine with premium cloud disk), `CLOUD_SSD` (virtual machine with SSD), 
`CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置The host type of the instance to be purchased. Valid values: `PM` (physical machine), `CLOUD_PREMIUM` (virtual machine with premium cloud disk), `CLOUD_SSD` (virtual machine with SSD), 
`CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * @param _machineType The host type of the instance to be purchased. Valid values: `PM` (physical machine), `CLOUD_PREMIUM` (virtual machine with premium cloud disk), `CLOUD_SSD` (virtual machine with SSD), 
`CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * AZ ID, which can be obtained through the `Zone` field in the returned value of the `DescribeZones` API
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Memory size in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance capacity in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Billing type. Valid value: POSTPAID.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Length of purchase in months. Value range: 1-48. Default value: 1
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of instances purchased at a time. Value range: 1-100. Default value: 1
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * SQL version. Valid values: `2008R2` (SQL Server 2008 R2 Enterprise), `2012SP3` (SQL Server 2012 Enterprise), `201202` (SQL Server 2012 Standard), `2014SP2` (SQL Server 2014 Enterprise), `201402` (SQL Server 2014 Standard)`, `2016SP1` (SQL Server 2016 Enterprise), `201602` (SQL Server 2016 Standard), `2017` (SQL Server 2017 Enterprise), `201702` (SQL Server 2017 Standard), `2019` (SQL Server 2019 Enterprise), `201902` (SQL Server 2019 Standard). Default value: `2008R2`. The purchasable version varies by region. It can be queried by the `DescribeProductConfig` API.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * The number of CPU cores of the instance you want to purchase.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * The type of instance to be purchased. Valid values: `HA` (high-availability edition, including dual-server high-availability and AlwaysOn cluster edition), `RO` (read-only replica edition), `SI` (single-node edition), `cvmHA` (dual-server high-availability edition for CVM), `cvmRO` (read-only edition for CVM).
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The host type of the instance to be purchased. Valid values: `PM` (physical machine), `CLOUD_PREMIUM` (virtual machine with premium cloud disk), `CLOUD_SSD` (virtual machine with SSD), 
`CLOUD_HSSD` (virtual machine with enhanced SSD), `CLOUD_TSSD` (virtual machine with ulTra SSD), `CLOUD_BSSD` (virtual machine with balanced SSD).
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
