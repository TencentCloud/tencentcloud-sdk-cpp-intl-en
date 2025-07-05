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
                     * 获取Instance validity period in months. Value range: 1-36. This field is invalid when querying the prices of pay-as-you-go instances.
                     * @return Period Instance validity period in months. Value range: 1-36. This field is invalid when querying the prices of pay-as-you-go instances.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Value range: 1-36. This field is invalid when querying the prices of pay-as-you-go instances.
                     * @param _period Instance validity period in months. Value range: 1-36. This field is invalid when querying the prices of pay-as-you-go instances.
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
                     * 获取AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> API to query the configurable values. This parameter is required when `InstanceId` is empty.
                     * @return Zone AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> API to query the configurable values. This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> API to query the configurable values. This parameter is required when `InstanceId` is empty.
                     * @param _zone AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> API to query the configurable values. This parameter is required when `InstanceId` is empty.
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
                     * 获取Number of instances. Value range: 1-100. Default value: 1. This parameter is required when `InstanceId` is empty.
                     * @return GoodsNum Number of instances. Value range: 1-100. Default value: 1. This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Value range: 1-100. Default value: 1. This parameter is required when `InstanceId` is empty.
                     * @param _goodsNum Number of instances. Value range: 1-100. Default value: 1. This parameter is required when `InstanceId` is empty.
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
                     * 获取Instance memory size in MB. This parameter is required when `InstanceId` is empty.
                     * @return Memory Instance memory size in MB. This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in MB. This parameter is required when `InstanceId` is empty.
                     * @param _memory Instance memory size in MB. This parameter is required when `InstanceId` is empty.
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
                     * 获取Instance disk size in GB. This parameter is required when `InstanceId` is empty.
                     * @return Volume Instance disk size in GB. This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB. This parameter is required when `InstanceId` is empty.
                     * @param _volume Instance disk size in GB. This parameter is required when `InstanceId` is empty.
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
                     * 获取Instance type. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance). Default value: `master`. This parameter is required when `InstanceId` is empty.
                     * @return InstanceRole Instance type. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance). Default value: `master`. This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance type. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance). Default value: `master`. This parameter is required when `InstanceId` is empty.
                     * @param _instanceRole Instance type. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance). Default value: `master`. This parameter is required when `InstanceId` is empty.
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
                     * 获取Billing mode. Valid values: `PRE_PAID` (monthly subscribed), `HOUR_PAID` (pay-as-you-go). This parameter is required when `InstanceId` is empty.
                     * @return PayType Billing mode. Valid values: `PRE_PAID` (monthly subscribed), `HOUR_PAID` (pay-as-you-go). This parameter is required when `InstanceId` is empty.
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing mode. Valid values: `PRE_PAID` (monthly subscribed), `HOUR_PAID` (pay-as-you-go). This parameter is required when `InstanceId` is empty.
                     * @param _payType Billing mode. Valid values: `PRE_PAID` (monthly subscribed), `HOUR_PAID` (pay-as-you-go). This parameter is required when `InstanceId` is empty.
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
                     * 获取Data replication mode. Valid values: `0` (async), 1 (semi-sync), `2` (strong sync). Default value: `0`.
                     * @return ProtectMode Data replication mode. Valid values: `0` (async), 1 (semi-sync), `2` (strong sync). Default value: `0`.
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Valid values: `0` (async), 1 (semi-sync), `2` (strong sync). Default value: `0`.
                     * @param _protectMode Data replication mode. Valid values: `0` (async), 1 (semi-sync), `2` (strong sync). Default value: `0`.
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
                     * 获取Instance isolation types Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.  Default value: `UNIVERSAL`.
                     * @return DeviceType Instance isolation types Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.  Default value: `UNIVERSAL`.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance isolation types Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.  Default value: `UNIVERSAL`.
                     * @param _deviceType Instance isolation types Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.  Default value: `UNIVERSAL`.
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
                     * 获取The number of the instance. Valid values: `1` (for read-only and basic instances), `2` (for other source instances). To query the price of a three-node instance, set this value to `3`.
                     * @return InstanceNodes The number of the instance. Valid values: `1` (for read-only and basic instances), `2` (for other source instances). To query the price of a three-node instance, set this value to `3`.
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置The number of the instance. Valid values: `1` (for read-only and basic instances), `2` (for other source instances). To query the price of a three-node instance, set this value to `3`.
                     * @param _instanceNodes The number of the instance. Valid values: `1` (for read-only and basic instances), `2` (for other source instances). To query the price of a three-node instance, set this value to `3`.
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
                     * 获取CPU core count of the price-queried instance. To ensure that the CPU value to be passed in is valid, use the [DescribeDBZoneConfig](https://www.tencentcloud.com/document/product/236/17229) API to query the number of purchasable cores. If this value is not specified, a default value based on memory size will be set.
                     * @return Cpu CPU core count of the price-queried instance. To ensure that the CPU value to be passed in is valid, use the [DescribeDBZoneConfig](https://www.tencentcloud.com/document/product/236/17229) API to query the number of purchasable cores. If this value is not specified, a default value based on memory size will be set.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU core count of the price-queried instance. To ensure that the CPU value to be passed in is valid, use the [DescribeDBZoneConfig](https://www.tencentcloud.com/document/product/236/17229) API to query the number of purchasable cores. If this value is not specified, a default value based on memory size will be set.
                     * @param _cpu CPU core count of the price-queried instance. To ensure that the CPU value to be passed in is valid, use the [DescribeDBZoneConfig](https://www.tencentcloud.com/document/product/236/17229) API to query the number of purchasable cores. If this value is not specified, a default value based on memory size will be set.
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
                     * 获取Instance ID for querying renewal price. To query the renewal price of the instance, pass in the values of `InstanceId` and `Period`.
                     * @return InstanceId Instance ID for querying renewal price. To query the renewal price of the instance, pass in the values of `InstanceId` and `Period`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID for querying renewal price. To query the renewal price of the instance, pass in the values of `InstanceId` and `Period`.
                     * @param _instanceId Instance ID for querying renewal price. To query the renewal price of the instance, pass in the values of `InstanceId` and `Period`.
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
                     * 获取Tiered pay-as-you-go pricing, which is valid only when `PayType` is set to `HOUR_PAID`. Valid values: `1`, `2`, `3`. For more information on tiered duration, visit https://intl.cloud.tencent.com/document/product/236/18335.?from_cn_redirect=1
                     * @return Ladder Tiered pay-as-you-go pricing, which is valid only when `PayType` is set to `HOUR_PAID`. Valid values: `1`, `2`, `3`. For more information on tiered duration, visit https://intl.cloud.tencent.com/document/product/236/18335.?from_cn_redirect=1
                     * 
                     */
                    uint64_t GetLadder() const;

                    /**
                     * 设置Tiered pay-as-you-go pricing, which is valid only when `PayType` is set to `HOUR_PAID`. Valid values: `1`, `2`, `3`. For more information on tiered duration, visit https://intl.cloud.tencent.com/document/product/236/18335.?from_cn_redirect=1
                     * @param _ladder Tiered pay-as-you-go pricing, which is valid only when `PayType` is set to `HOUR_PAID`. Valid values: `1`, `2`, `3`. For more information on tiered duration, visit https://intl.cloud.tencent.com/document/product/236/18335.?from_cn_redirect=1
                     * 
                     */
                    void SetLadder(const uint64_t& _ladder);

                    /**
                     * 判断参数 Ladder 是否已赋值
                     * @return Ladder 是否已赋值
                     * 
                     */
                    bool LadderHasBeenSet() const;

                private:

                    /**
                     * Instance validity period in months. Value range: 1-36. This field is invalid when querying the prices of pay-as-you-go instances.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://intl.cloud.tencent.com/document/api/236/17229?from_cn_redirect=1">DescribeDBZoneConfig</a> API to query the configurable values. This parameter is required when `InstanceId` is empty.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of instances. Value range: 1-100. Default value: 1. This parameter is required when `InstanceId` is empty.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance memory size in MB. This parameter is required when `InstanceId` is empty.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB. This parameter is required when `InstanceId` is empty.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Instance type. Valid values: `master` (source instance), `dr` (disaster recovery instance), `ro` (read-only instance). Default value: `master`. This parameter is required when `InstanceId` is empty.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Billing mode. Valid values: `PRE_PAID` (monthly subscribed), `HOUR_PAID` (pay-as-you-go). This parameter is required when `InstanceId` is empty.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Data replication mode. Valid values: `0` (async), 1 (semi-sync), `2` (strong sync). Default value: `0`.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Instance isolation types Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance). Default value: `UNIVERSAL`.  Default value: `UNIVERSAL`.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * The number of the instance. Valid values: `1` (for read-only and basic instances), `2` (for other source instances). To query the price of a three-node instance, set this value to `3`.
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * CPU core count of the price-queried instance. To ensure that the CPU value to be passed in is valid, use the [DescribeDBZoneConfig](https://www.tencentcloud.com/document/product/236/17229) API to query the number of purchasable cores. If this value is not specified, a default value based on memory size will be set.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance ID for querying renewal price. To query the renewal price of the instance, pass in the values of `InstanceId` and `Period`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Tiered pay-as-you-go pricing, which is valid only when `PayType` is set to `HOUR_PAID`. Valid values: `1`, `2`, `3`. For more information on tiered duration, visit https://intl.cloud.tencent.com/document/product/236/18335.?from_cn_redirect=1
                     */
                    uint64_t m_ladder;
                    bool m_ladderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
