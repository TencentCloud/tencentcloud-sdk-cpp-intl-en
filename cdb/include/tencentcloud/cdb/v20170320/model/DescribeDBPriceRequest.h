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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBPrice request structure.
                */
                class DescribeDBPriceRequest : public AbstractModel
                {
                public:
                    DescribeDBPriceRequest();
                    ~DescribeDBPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance duration, in months, minimum value 1, maximum value 36. This field is invalid when querying the pay-as-you-go rate.</p>
                     * @return Period <p>Instance duration, in months, minimum value 1, maximum value 36. This field is invalid when querying the pay-as-you-go rate.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Instance duration, in months, minimum value 1, maximum value 36. This field is invalid when querying the pay-as-you-go rate.</p>
                     * @param _period <p>Instance duration, in months, minimum value 1, maximum value 36. This field is invalid when querying the pay-as-you-go rate.</p>
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
                     * 获取<p>AZ information, in the format of "ap-guangzhou-2". For available values, query the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> api. This parameter is required when InstanceId is empty.</p>
                     * @return Zone <p>AZ information, in the format of "ap-guangzhou-2". For available values, query the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> api. This parameter is required when InstanceId is empty.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ information, in the format of "ap-guangzhou-2". For available values, query the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> api. This parameter is required when InstanceId is empty.</p>
                     * @param _zone <p>AZ information, in the format of "ap-guangzhou-2". For available values, query the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> api. This parameter is required when InstanceId is empty.</p>
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
                     * 获取<p>Instance count. Default value is 1, minimum value 1, maximum value 100. This parameter is required when InstanceId is empty.</p>
                     * @return GoodsNum <p>Instance count. Default value is 1, minimum value 1, maximum value 100. This parameter is required when InstanceId is empty.</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Instance count. Default value is 1, minimum value 1, maximum value 100. This parameter is required when InstanceId is empty.</p>
                     * @param _goodsNum <p>Instance count. Default value is 1, minimum value 1, maximum value 100. This parameter is required when InstanceId is empty.</p>
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
                     * 获取<p>Instance memory size, measurement unit: MB. Required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain the saleable instance memory size range.</p>
                     * @return Memory <p>Instance memory size, measurement unit: MB. Required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain the saleable instance memory size range.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory size, measurement unit: MB. Required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain the saleable instance memory size range.</p>
                     * @param _memory <p>Instance memory size, measurement unit: MB. Required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain the saleable instance memory size range.</p>
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
                     * 获取<p>Instance disk size, unit: GB. This parameter is required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the saleable disk size range.</p>
                     * @return Volume <p>Instance disk size, unit: GB. This parameter is required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the saleable disk size range.</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Instance disk size, unit: GB. This parameter is required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the saleable disk size range.</p>
                     * @param _volume <p>Instance disk size, unit: GB. This parameter is required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the saleable disk size range.</p>
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取<p>Instance type, defaults to master. Supported values include: master - primary instance, ro - read-only instance, dr - disaster recovery instance. Required when InstanceId is empty.</p>
                     * @return InstanceRole <p>Instance type, defaults to master. Supported values include: master - primary instance, ro - read-only instance, dr - disaster recovery instance. Required when InstanceId is empty.</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>Instance type, defaults to master. Supported values include: master - primary instance, ro - read-only instance, dr - disaster recovery instance. Required when InstanceId is empty.</p>
                     * @param _instanceRole <p>Instance type, defaults to master. Supported values include: master - primary instance, ro - read-only instance, dr - disaster recovery instance. Required when InstanceId is empty.</p>
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取<p>Payment type. Supported values: PRE_PAID (yearly/monthly subscription) and HOUR_PAID (pay-as-you-go). This parameter is required when InstanceId is empty.</p>
                     * @return PayType <p>Payment type. Supported values: PRE_PAID (yearly/monthly subscription) and HOUR_PAID (pay-as-you-go). This parameter is required when InstanceId is empty.</p>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>Payment type. Supported values: PRE_PAID (yearly/monthly subscription) and HOUR_PAID (pay-as-you-go). This parameter is required when InstanceId is empty.</p>
                     * @param _payType <p>Payment type. Supported values: PRE_PAID (yearly/monthly subscription) and HOUR_PAID (pay-as-you-go). This parameter is required when InstanceId is empty.</p>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @return ProtectMode <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @param _protectMode <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance isolation type.</p><p>Enumeration value:</p><ul><li>UNIVERSAL: General-purpose instance</li><li>EXCLUSIVE: Dedicated instance</li><li>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_ULTRA: Flagship type of cloud disk edition</li></ul><p>Default value: UNIVERSAL</p><p>If needed to query the price of a single-node instance of cloud disk edition, set up this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes as 1.</p>
                     * @return DeviceType <p>Instance isolation type.</p><p>Enumeration value:</p><ul><li>UNIVERSAL: General-purpose instance</li><li>EXCLUSIVE: Dedicated instance</li><li>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_ULTRA: Flagship type of cloud disk edition</li></ul><p>Default value: UNIVERSAL</p><p>If needed to query the price of a single-node instance of cloud disk edition, set up this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes as 1.</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance isolation type.</p><p>Enumeration value:</p><ul><li>UNIVERSAL: General-purpose instance</li><li>EXCLUSIVE: Dedicated instance</li><li>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_ULTRA: Flagship type of cloud disk edition</li></ul><p>Default value: UNIVERSAL</p><p>If needed to query the price of a single-node instance of cloud disk edition, set up this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes as 1.</p>
                     * @param _deviceType <p>Instance isolation type.</p><p>Enumeration value:</p><ul><li>UNIVERSAL: General-purpose instance</li><li>EXCLUSIVE: Dedicated instance</li><li>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_ULTRA: Flagship type of cloud disk edition</li></ul><p>Default value: UNIVERSAL</p><p>If needed to query the price of a single-node instance of cloud disk edition, set up this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes as 1.</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of instance nodes.<br>1. When querying the price of a read-only instance or a single-node instance, the value of this field is 1.<br>2. When querying the price of a dual-node instance, the value of this field is 2.<br>3. When querying the price of a three-node instance, the value of this field is 3.<br>4. When querying the price of a cloud disk edition instance, the value range of this field can be 2 - 6. A value of 2 means the cloud disk edition instance has 1 read-write node + 1 read-only node. A value of 6 means the cloud disk edition instance has 1 read-write node + 5 read-only nodes. For other values (3 - 5), the rule is 1 read-write node + (value - 1) read-only nodes.</p>
                     * @return InstanceNodes <p>Number of instance nodes.<br>1. When querying the price of a read-only instance or a single-node instance, the value of this field is 1.<br>2. When querying the price of a dual-node instance, the value of this field is 2.<br>3. When querying the price of a three-node instance, the value of this field is 3.<br>4. When querying the price of a cloud disk edition instance, the value range of this field can be 2 - 6. A value of 2 means the cloud disk edition instance has 1 read-write node + 1 read-only node. A value of 6 means the cloud disk edition instance has 1 read-write node + 5 read-only nodes. For other values (3 - 5), the rule is 1 read-write node + (value - 1) read-only nodes.</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>Number of instance nodes.<br>1. When querying the price of a read-only instance or a single-node instance, the value of this field is 1.<br>2. When querying the price of a dual-node instance, the value of this field is 2.<br>3. When querying the price of a three-node instance, the value of this field is 3.<br>4. When querying the price of a cloud disk edition instance, the value range of this field can be 2 - 6. A value of 2 means the cloud disk edition instance has 1 read-write node + 1 read-only node. A value of 6 means the cloud disk edition instance has 1 read-write node + 5 read-only nodes. For other values (3 - 5), the rule is 1 read-write node + (value - 1) read-only nodes.</p>
                     * @param _instanceNodes <p>Number of instance nodes.<br>1. When querying the price of a read-only instance or a single-node instance, the value of this field is 1.<br>2. When querying the price of a dual-node instance, the value of this field is 2.<br>3. When querying the price of a three-node instance, the value of this field is 3.<br>4. When querying the price of a cloud disk edition instance, the value range of this field can be 2 - 6. A value of 2 means the cloud disk edition instance has 1 read-write node + 1 read-only node. A value of 6 means the cloud disk edition instance has 1 read-write node + 5 read-only nodes. For other values (3 - 5), the rule is 1 read-write node + (value - 1) read-only nodes.</p>
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取<p>The number of CPU cores of the price-query instance, measurement unit: core. To ensure the validity of the input CPU value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API acquisition to get the saleable number of cores. When this value is not specified, a default value will be padded based on the Memory size.</p>
                     * @return Cpu <p>The number of CPU cores of the price-query instance, measurement unit: core. To ensure the validity of the input CPU value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API acquisition to get the saleable number of cores. When this value is not specified, a default value will be padded based on the Memory size.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>The number of CPU cores of the price-query instance, measurement unit: core. To ensure the validity of the input CPU value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API acquisition to get the saleable number of cores. When this value is not specified, a default value will be padded based on the Memory size.</p>
                     * @param _cpu <p>The number of CPU cores of the price-query instance, measurement unit: core. To ensure the validity of the input CPU value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API acquisition to get the saleable number of cores. When this value is not specified, a default value will be padded based on the Memory size.</p>
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
                     * 获取<p>Query the ID of the instance to be renewed. If needed, fill in InstanceId and Period to query instance renewal price.</p>
                     * @return InstanceId <p>Query the ID of the instance to be renewed. If needed, fill in InstanceId and Period to query instance renewal price.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Query the ID of the instance to be renewed. If needed, fill in InstanceId and Period to query instance renewal price.</p>
                     * @param _instanceId <p>Query the ID of the instance to be renewed. If needed, fill in InstanceId and Period to query instance renewal price.</p>
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
                     * 获取<p>Usage-based billing tier. Valid only when PayType=HOUR_PAID. Supported values include: 1, 2, 3. For step duration, see https://www.tencentcloud.com/document/product/236/18335.?from_cn_redirect=1</p>
                     * @return Ladder <p>Usage-based billing tier. Valid only when PayType=HOUR_PAID. Supported values include: 1, 2, 3. For step duration, see https://www.tencentcloud.com/document/product/236/18335.?from_cn_redirect=1</p>
                     * 
                     */
                    uint64_t GetLadder() const;

                    /**
                     * 设置<p>Usage-based billing tier. Valid only when PayType=HOUR_PAID. Supported values include: 1, 2, 3. For step duration, see https://www.tencentcloud.com/document/product/236/18335.?from_cn_redirect=1</p>
                     * @param _ladder <p>Usage-based billing tier. Valid only when PayType=HOUR_PAID. Supported values include: 1, 2, 3. For step duration, see https://www.tencentcloud.com/document/product/236/18335.?from_cn_redirect=1</p>
                     * 
                     */
                    void SetLadder(const uint64_t& _ladder);

                    /**
                     * 判断参数 Ladder 是否已赋值
                     * @return Ladder 是否已赋值
                     * 
                     */
                    bool LadderHasBeenSet() const;

                    /**
                     * 获取<p>Disk Type. Specify this parameter when querying the price of CLOUD disk edition or single-node instance of CLOUD disk edition. Default value: SSD CLOUD Block Storage.<br>Supported values include:<br>"CLOUD_SSD" - SSD CLOUD Block Storage.<br>"CLOUD_HSSD" - Enhanced SSD CLOUD Disk.<br>"CLOUD_PREMIUM" - High-performance CLOUD Block Storage.</p>
                     * @return DiskType <p>Disk Type. Specify this parameter when querying the price of CLOUD disk edition or single-node instance of CLOUD disk edition. Default value: SSD CLOUD Block Storage.<br>Supported values include:<br>"CLOUD_SSD" - SSD CLOUD Block Storage.<br>"CLOUD_HSSD" - Enhanced SSD CLOUD Disk.<br>"CLOUD_PREMIUM" - High-performance CLOUD Block Storage.</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Disk Type. Specify this parameter when querying the price of CLOUD disk edition or single-node instance of CLOUD disk edition. Default value: SSD CLOUD Block Storage.<br>Supported values include:<br>"CLOUD_SSD" - SSD CLOUD Block Storage.<br>"CLOUD_HSSD" - Enhanced SSD CLOUD Disk.<br>"CLOUD_PREMIUM" - High-performance CLOUD Block Storage.</p>
                     * @param _diskType <p>Disk Type. Specify this parameter when querying the price of CLOUD disk edition or single-node instance of CLOUD disk edition. Default value: SSD CLOUD Block Storage.<br>Supported values include:<br>"CLOUD_SSD" - SSD CLOUD Block Storage.<br>"CLOUD_HSSD" - Enhanced SSD CLOUD Disk.<br>"CLOUD_PREMIUM" - High-performance CLOUD Block Storage.</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance duration, in months, minimum value 1, maximum value 36. This field is invalid when querying the pay-as-you-go rate.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>AZ information, in the format of "ap-guangzhou-2". For available values, query the <a href="https://www.tencentcloud.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> api. This parameter is required when InstanceId is empty.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance count. Default value is 1, minimum value 1, maximum value 100. This parameter is required when InstanceId is empty.</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Instance memory size, measurement unit: MB. Required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to obtain the saleable instance memory size range.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance disk size, unit: GB. This parameter is required when InstanceId is empty. To ensure the input value is valid, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API to get the saleable disk size range.</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Instance type, defaults to master. Supported values include: master - primary instance, ro - read-only instance, dr - disaster recovery instance. Required when InstanceId is empty.</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Payment type. Supported values: PRE_PAID (yearly/monthly subscription) and HOUR_PAID (pay-as-you-go). This parameter is required when InstanceId is empty.</p>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>Data replication method, defaults to 0. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>Instance isolation type.</p><p>Enumeration value:</p><ul><li>UNIVERSAL: General-purpose instance</li><li>EXCLUSIVE: Dedicated instance</li><li>CLOUD_NATIVE_CLUSTER: Standard type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Enhanced type of cloud disk edition</li><li>CLOUD_NATIVE_CLUSTER_ULTRA: Flagship type of cloud disk edition</li></ul><p>Default value: UNIVERSAL</p><p>If needed to query the price of a single-node instance of cloud disk edition, set up this parameter as CLOUD_NATIVE_CLUSTER and specify parameter InstanceNodes as 1.</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Number of instance nodes.<br>1. When querying the price of a read-only instance or a single-node instance, the value of this field is 1.<br>2. When querying the price of a dual-node instance, the value of this field is 2.<br>3. When querying the price of a three-node instance, the value of this field is 3.<br>4. When querying the price of a cloud disk edition instance, the value range of this field can be 2 - 6. A value of 2 means the cloud disk edition instance has 1 read-write node + 1 read-only node. A value of 6 means the cloud disk edition instance has 1 read-write node + 5 read-only nodes. For other values (3 - 5), the rule is 1 read-write node + (value - 1) read-only nodes.</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>The number of CPU cores of the price-query instance, measurement unit: core. To ensure the validity of the input CPU value, please use the <a href="https://www.tencentcloud.com/document/product/236/17229?from_cn_redirect=1">obtain the purchasable specifications of cloud databases</a> API acquisition to get the saleable number of cores. When this value is not specified, a default value will be padded based on the Memory size.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Query the ID of the instance to be renewed. If needed, fill in InstanceId and Period to query instance renewal price.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Usage-based billing tier. Valid only when PayType=HOUR_PAID. Supported values include: 1, 2, 3. For step duration, see https://www.tencentcloud.com/document/product/236/18335.?from_cn_redirect=1</p>
                     */
                    uint64_t m_ladder;
                    bool m_ladderHasBeenSet;

                    /**
                     * <p>Disk Type. Specify this parameter when querying the price of CLOUD disk edition or single-node instance of CLOUD disk edition. Default value: SSD CLOUD Block Storage.<br>Supported values include:<br>"CLOUD_SSD" - SSD CLOUD Block Storage.<br>"CLOUD_HSSD" - Enhanced SSD CLOUD Disk.<br>"CLOUD_PREMIUM" - High-performance CLOUD Block Storage.</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
