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
                     * 获取Instance type.

- 2: Redis 2.8 memory edition (standard architecture).
- 6: Redis 4.0 memory edition (standard architecture).
- 7: Redis 4.0 memory edition (cluster architecture).
- 8: Redis 5.0 memory edition (standard architecture).
- 9: Redis 5.0 memory edition (cluster architecture).
- 15: Redis 6.2 memory edition (standard architecture).
- 16: Redis 6.2 memory edition (cluster architecture).
- 17: Redis 7.0 memory edition (standard architecture).
- 18: Redis 7.0 memory edition (cluster architecture).
- 200: Memcached 1.6 memory edition (cluster architecture).
                     * @return TypeId Instance type.

- 2: Redis 2.8 memory edition (standard architecture).
- 6: Redis 4.0 memory edition (standard architecture).
- 7: Redis 4.0 memory edition (cluster architecture).
- 8: Redis 5.0 memory edition (standard architecture).
- 9: Redis 5.0 memory edition (cluster architecture).
- 15: Redis 6.2 memory edition (standard architecture).
- 16: Redis 6.2 memory edition (cluster architecture).
- 17: Redis 7.0 memory edition (standard architecture).
- 18: Redis 7.0 memory edition (cluster architecture).
- 200: Memcached 1.6 memory edition (cluster architecture).
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置Instance type.

- 2: Redis 2.8 memory edition (standard architecture).
- 6: Redis 4.0 memory edition (standard architecture).
- 7: Redis 4.0 memory edition (cluster architecture).
- 8: Redis 5.0 memory edition (standard architecture).
- 9: Redis 5.0 memory edition (cluster architecture).
- 15: Redis 6.2 memory edition (standard architecture).
- 16: Redis 6.2 memory edition (cluster architecture).
- 17: Redis 7.0 memory edition (standard architecture).
- 18: Redis 7.0 memory edition (cluster architecture).
- 200: Memcached 1.6 memory edition (cluster architecture).
                     * @param _typeId Instance type.

- 2: Redis 2.8 memory edition (standard architecture).
- 6: Redis 4.0 memory edition (standard architecture).
- 7: Redis 4.0 memory edition (cluster architecture).
- 8: Redis 5.0 memory edition (standard architecture).
- 9: Redis 5.0 memory edition (cluster architecture).
- 15: Redis 6.2 memory edition (standard architecture).
- 16: Redis 6.2 memory edition (cluster architecture).
- 17: Redis 7.0 memory edition (standard architecture).
- 18: Redis 7.0 memory edition (cluster architecture).
- 200: Memcached 1.6 memory edition (cluster architecture).
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
                     * 获取Memory capacity in MB, which must be a multiple of 1,024. It is subject to the purchasable specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
If `TypeId` indicates the standard architecture, `MemSize` indicates the total memory capacity of an instance; if `TypeId` indicates the cluster architecture, `MemSize` indicates the memory capacity per shard.
                     * @return MemSize Memory capacity in MB, which must be a multiple of 1,024. It is subject to the purchasable specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
If `TypeId` indicates the standard architecture, `MemSize` indicates the total memory capacity of an instance; if `TypeId` indicates the cluster architecture, `MemSize` indicates the memory capacity per shard.
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Memory capacity in MB, which must be a multiple of 1,024. It is subject to the purchasable specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
If `TypeId` indicates the standard architecture, `MemSize` indicates the total memory capacity of an instance; if `TypeId` indicates the cluster architecture, `MemSize` indicates the memory capacity per shard.
                     * @param _memSize Memory capacity in MB, which must be a multiple of 1,024. It is subject to the purchasable specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
If `TypeId` indicates the standard architecture, `MemSize` indicates the total memory capacity of an instance; if `TypeId` indicates the cluster architecture, `MemSize` indicates the memory capacity per shard.
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
                     * 获取Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
                     * @return GoodsNum Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
                     * @param _goodsNum Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
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
                     * 获取Length of purchase in months, which is required when creating a monthly-subscribed instance. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36]. For pay-as-you-go instances, set the parameter to `1`.
                     * @return Period Length of purchase in months, which is required when creating a monthly-subscribed instance. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36]. For pay-as-you-go instances, set the parameter to `1`.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Length of purchase in months, which is required when creating a monthly-subscribed instance. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36]. For pay-as-you-go instances, set the parameter to `1`.
                     * @param _period Length of purchase in months, which is required when creating a monthly-subscribed instance. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36]. For pay-as-you-go instances, set the parameter to `1`.
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
                     * 获取Billing mode.
- 0: pay-as-you-go.
- 1: monthly subscription.
                     * @return BillingMode Billing mode.
- 0: pay-as-you-go.
- 1: monthly subscription.
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置Billing mode.
- 0: pay-as-you-go.
- 1: monthly subscription.
                     * @param _billingMode Billing mode.
- 0: pay-as-you-go.
- 1: monthly subscription.
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
                     * 获取ID of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * @return ZoneId ID of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置ID of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * @param _zoneId ID of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
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
                     * 获取Number of instance shards.
- The number of shards is required to be set to 1 for the standard architecture.
- The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.
                     * @return RedisShardNum Number of instance shards.
- The number of shards is required to be set to 1 for the standard architecture.
- The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Number of instance shards.
- The number of shards is required to be set to 1 for the standard architecture.
- The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.
                     * @param _redisShardNum Number of instance shards.
- The number of shards is required to be set to 1 for the standard architecture.
- The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.
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
                     * 获取Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.
                     * @return RedisReplicasNum Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.
                     * @param _redisReplicasNum Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.
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
                     * 获取Whether replica read-only is supported. For the standard architecture of Redis 2.8 and CKV, this parameter does not need to be configured.
- true: Replica read-only is not required.
- false: Replica read-only is required.
                     * @return ReplicasReadonly Whether replica read-only is supported. For the standard architecture of Redis 2.8 and CKV, this parameter does not need to be configured.
- true: Replica read-only is not required.
- false: Replica read-only is required.
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置Whether replica read-only is supported. For the standard architecture of Redis 2.8 and CKV, this parameter does not need to be configured.
- true: Replica read-only is not required.
- false: Replica read-only is required.
                     * @param _replicasReadonly Whether replica read-only is supported. For the standard architecture of Redis 2.8 and CKV, this parameter does not need to be configured.
- true: Replica read-only is not required.
- false: Replica read-only is required.
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
                     * 获取Name of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * @return ZoneName Name of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Name of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     * @param _zoneName Name of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
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
                     * 获取Deployment mode.
- local: local disk. This is the default value.
- cloud: cloud disk.
- cdc: CDC.
                     * @return ProductVersion Deployment mode.
- local: local disk. This is the default value.
- cloud: cloud disk.
- cdc: CDC.
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置Deployment mode.
- local: local disk. This is the default value.
- cloud: cloud disk.
- cdc: CDC.
                     * @param _productVersion Deployment mode.
- local: local disk. This is the default value.
- cloud: cloud disk.
- cdc: CDC.
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
                     * Instance type.

- 2: Redis 2.8 memory edition (standard architecture).
- 6: Redis 4.0 memory edition (standard architecture).
- 7: Redis 4.0 memory edition (cluster architecture).
- 8: Redis 5.0 memory edition (standard architecture).
- 9: Redis 5.0 memory edition (cluster architecture).
- 15: Redis 6.2 memory edition (standard architecture).
- 16: Redis 6.2 memory edition (cluster architecture).
- 17: Redis 7.0 memory edition (standard architecture).
- 18: Redis 7.0 memory edition (cluster architecture).
- 200: Memcached 1.6 memory edition (cluster architecture).
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Memory capacity in MB, which must be a multiple of 1,024. It is subject to the purchasable specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
If `TypeId` indicates the standard architecture, `MemSize` indicates the total memory capacity of an instance; if `TypeId` indicates the cluster architecture, `MemSize` indicates the memory capacity per shard.
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of instances. The actual quantity purchasable at a time is subject to the specifications returned by the [DescribeProductInfo API](https://intl.cloud.tencent.com/document/api/239/30600?from_cn_redirect=1).
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Length of purchase in months, which is required when creating a monthly-subscribed instance. Value range: [1,2,3,4,5,6,7,8,9,10,11,12,24,36]. For pay-as-you-go instances, set the parameter to `1`.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Billing mode.
- 0: pay-as-you-go.
- 1: monthly subscription.
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * ID of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Number of instance shards.
- The number of shards is required to be set to 1 for the standard architecture.
- The number of shards can be set to 1, 3, 5, 8, 12, 16, 24, 32, 40, 48, 64, 80, 96, or 128 for the cluster architecture.
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Number of instance replicas. Valid values: 1, 2, 3, 4, and 5.
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Whether replica read-only is supported. For the standard architecture of Redis 2.8 and CKV, this parameter does not need to be configured.
- true: Replica read-only is not required.
- false: Replica read-only is required.
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * Name of the AZ to which the instance belongs. See [Regions and AZs](https://www.tencentcloud.comom/document/product/239/4106?from_cn_redirect=1).
**Note**: Specify at least one parameter from **ZoneId** and **ZoneName**.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Deployment mode.
- local: local disk. This is the default value.
- cloud: cloud disk.
- cdc: CDC.
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
