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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateInstance request structure.
                */
                class InquiryPriceCreateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceRequest();
                    ~InquiryPriceCreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance type. - 2: Redis 2.8 memory edition (standard architecture). - 6: Redis 4.0 memory edition (standard architecture). - 7: Redis 4.0 memory edition (cluster architecture). - 8: Redis 5.0 memory edition (standard architecture). - 9: Redis 5.0 memory edition (cluster architecture). - 15: Redis 6.2 memory edition (standard architecture). - 16: Redis 6.2 memory edition (cluster architecture). - 17: Redis 7.0 memory edition (standard architecture). - 18: Redis 7.0 memory edition (cluster architecture). - 200: Memcached 1.6 memory edition (cluster architecture).</p>
                     * @return TypeId <p>Instance type. - 2: Redis 2.8 memory edition (standard architecture). - 6: Redis 4.0 memory edition (standard architecture). - 7: Redis 4.0 memory edition (cluster architecture). - 8: Redis 5.0 memory edition (standard architecture). - 9: Redis 5.0 memory edition (cluster architecture). - 15: Redis 6.2 memory edition (standard architecture). - 16: Redis 6.2 memory edition (cluster architecture). - 17: Redis 7.0 memory edition (standard architecture). - 18: Redis 7.0 memory edition (cluster architecture). - 200: Memcached 1.6 memory edition (cluster architecture).</p>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置<p>Instance type. - 2: Redis 2.8 memory edition (standard architecture). - 6: Redis 4.0 memory edition (standard architecture). - 7: Redis 4.0 memory edition (cluster architecture). - 8: Redis 5.0 memory edition (standard architecture). - 9: Redis 5.0 memory edition (cluster architecture). - 15: Redis 6.2 memory edition (standard architecture). - 16: Redis 6.2 memory edition (cluster architecture). - 17: Redis 7.0 memory edition (standard architecture). - 18: Redis 7.0 memory edition (cluster architecture). - 200: Memcached 1.6 memory edition (cluster architecture).</p>
                     * @param _typeId <p>Instance type. - 2: Redis 2.8 memory edition (standard architecture). - 6: Redis 4.0 memory edition (standard architecture). - 7: Redis 4.0 memory edition (cluster architecture). - 8: Redis 5.0 memory edition (standard architecture). - 9: Redis 5.0 memory edition (cluster architecture). - 15: Redis 6.2 memory edition (standard architecture). - 16: Redis 6.2 memory edition (cluster architecture). - 17: Redis 7.0 memory edition (standard architecture). - 18: Redis 7.0 memory edition (cluster architecture). - 200: Memcached 1.6 memory edition (cluster architecture).</p>
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, refer to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>. When TypeId is standard architecture, MemSize is the total memory capacity of the instance. When TypeId is cluster architecture, MemSize is the sharded memory capacity.</p>
                     * @return MemSize <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, refer to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>. When TypeId is standard architecture, MemSize is the total memory capacity of the instance. When TypeId is cluster architecture, MemSize is the sharded memory capacity.</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, refer to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>. When TypeId is standard architecture, MemSize is the total memory capacity of the instance. When TypeId is cluster architecture, MemSize is the sharded memory capacity.</p>
                     * @param _memSize <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, refer to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>. When TypeId is standard architecture, MemSize is the total memory capacity of the instance. When TypeId is cluster architecture, MemSize is the sharded memory capacity.</p>
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
                     * 获取<p>Instance count. The number of instances to purchase at a time is subject to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>.</p>
                     * @return GoodsNum <p>Instance count. The number of instances to purchase at a time is subject to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>.</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Instance count. The number of instances to purchase at a time is subject to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>.</p>
                     * @param _goodsNum <p>Instance count. The number of instances to purchase at a time is subject to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>.</p>
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
                     * 获取<p>Purchase period needs to be filled in when creating an annual and monthly subscription instance. For pay-as-you-go instances, just fill in 1. Unit: month. Value ranges from 1 to 36 [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @return Period <p>Purchase period needs to be filled in when creating an annual and monthly subscription instance. For pay-as-you-go instances, just fill in 1. Unit: month. Value ranges from 1 to 36 [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase period needs to be filled in when creating an annual and monthly subscription instance. For pay-as-you-go instances, just fill in 1. Unit: month. Value ranges from 1 to 36 [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * @param _period <p>Purchase period needs to be filled in when creating an annual and monthly subscription instance. For pay-as-you-go instances, just fill in 1. Unit: month. Value ranges from 1 to 36 [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Payment method. - 0: Pay-As-You-Go. - 1: Monthly Subscription.</p>
                     * @return BillingMode <p>Payment method. - 0: Pay-As-You-Go. - 1: Monthly Subscription.</p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>Payment method. - 0: Pay-As-You-Go. - 1: Monthly Subscription.</p>
                     * @param _billingMode <p>Payment method. - 0: Pay-As-You-Go. - 1: Monthly Subscription.</p>
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.<strong>Note</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * @return ZoneId <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.<strong>Note</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.<strong>Note</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * @param _zoneId <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.<strong>Note</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of instance shards. - The shard number should be set to 1 for the standard architecture. - The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.</p>
                     * @return RedisShardNum <p>Number of instance shards. - The shard number should be set to 1 for the standard architecture. - The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.</p>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>Number of instance shards. - The shard number should be set to 1 for the standard architecture. - The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.</p>
                     * @param _redisShardNum <p>Number of instance shards. - The shard number should be set to 1 for the standard architecture. - The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.</p>
                     * 
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.</p>
                     * @return RedisReplicasNum <p>Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.</p>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.</p>
                     * @param _redisReplicasNum <p>Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.</p>
                     * 
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>Whether replica read-only is supported. For Redis 2.8 standard architecture and CKV standard architecture, this parameter is not required. - true: replica read-only not required. - false: read-only replica supported.</p>
                     * @return ReplicasReadonly <p>Whether replica read-only is supported. For Redis 2.8 standard architecture and CKV standard architecture, this parameter is not required. - true: replica read-only not required. - false: read-only replica supported.</p>
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置<p>Whether replica read-only is supported. For Redis 2.8 standard architecture and CKV standard architecture, this parameter is not required. - true: replica read-only not required. - false: read-only replica supported.</p>
                     * @param _replicasReadonly <p>Whether replica read-only is supported. For Redis 2.8 standard architecture and CKV standard architecture, this parameter is not required. - true: replica read-only not required. - false: read-only replica supported.</p>
                     * 
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     * 
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取<p>Name of the availability zone to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>. <strong>Description</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * @return ZoneName <p>Name of the availability zone to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>. <strong>Description</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Name of the availability zone to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>. <strong>Description</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * @param _zoneName <p>Name of the availability zone to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>. <strong>Description</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>Deployment method. - local: local disk, defaults to local. - cloud: cloud disk. - cdc: dedicated cluster edition.</p>
                     * @return ProductVersion <p>Deployment method. - local: local disk, defaults to local. - cloud: cloud disk. - cdc: dedicated cluster edition.</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>Deployment method. - local: local disk, defaults to local. - cloud: cloud disk. - cdc: dedicated cluster edition.</p>
                     * @param _productVersion <p>Deployment method. - local: local disk, defaults to local. - cloud: cloud disk. - cdc: dedicated cluster edition.</p>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Instance type. - 2: Redis 2.8 memory edition (standard architecture). - 6: Redis 4.0 memory edition (standard architecture). - 7: Redis 4.0 memory edition (cluster architecture). - 8: Redis 5.0 memory edition (standard architecture). - 9: Redis 5.0 memory edition (cluster architecture). - 15: Redis 6.2 memory edition (standard architecture). - 16: Redis 6.2 memory edition (cluster architecture). - 17: Redis 7.0 memory edition (standard architecture). - 18: Redis 7.0 memory edition (cluster architecture). - 200: Memcached 1.6 memory edition (cluster architecture).</p>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>Memory capacity, measured in MB, must be a multiple of 1024. For specific specifications, refer to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>. When TypeId is standard architecture, MemSize is the total memory capacity of the instance. When TypeId is cluster architecture, MemSize is the sharded memory capacity.</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Instance count. The number of instances to purchase at a time is subject to the specifications returned by <a href="https://www.tencentcloud.com/document/api/239/30600?from_cn_redirect=1">query product sales specifications</a>.</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Purchase period needs to be filled in when creating an annual and monthly subscription instance. For pay-as-you-go instances, just fill in 1. Unit: month. Value ranges from 1 to 36 [1,2,3,4,5,6,7,8,9,10,11,12,24,36].</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Payment method. - 0: Pay-As-You-Go. - 1: Monthly Subscription.</p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>ID of the AZ to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and AZs</a>.<strong>Note</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Number of instance shards. - The shard number should be set to 1 for the standard architecture. - The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.</p>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.</p>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>Whether replica read-only is supported. For Redis 2.8 standard architecture and CKV standard architecture, this parameter is not required. - true: replica read-only not required. - false: read-only replica supported.</p>
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * <p>Name of the availability zone to which the instance belongs. See <a href="https://www.tencentcloud.com/document/product/239/4106?from_cn_redirect=1">Regions and Availability Zones</a>. <strong>Description</strong>: Please specify at least one parameter in <strong>ZoneId</strong> and <strong>ZoneName</strong>.</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>Deployment method. - local: local disk, defaults to local. - cloud: cloud disk. - cdc: dedicated cluster edition.</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
