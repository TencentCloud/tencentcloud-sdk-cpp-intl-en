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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBPrice request structure.
                */
                class DescribeDCDBPriceRequest : public AbstractModel
                {
                public:
                    DescribeDCDBPriceRequest();
                    ~DescribeDCDBPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID of the purchased instance.
                     * @return Zone AZ ID of the purchased instance.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID of the purchased instance.
                     * @param _zone AZ ID of the purchased instance.
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
                     * 获取The number of instances to be purchased. You can purchase 1-10 instances.
                     * @return Count The number of instances to be purchased. You can purchase 1-10 instances.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of instances to be purchased. You can purchase 1-10 instances.
                     * @param _count The number of instances to be purchased. You can purchase 1-10 instances.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Validity period in months
                     * @return Period Validity period in months
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Validity period in months
                     * @param _period Validity period in months
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
                     * 获取Number of nodes in a single shard, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return ShardNodeCount Number of nodes in a single shard, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置Number of nodes in a single shard, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _shardNodeCount Number of nodes in a single shard, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     * 
                     */
                    bool ShardNodeCountHasBeenSet() const;

                    /**
                     * 获取Shard memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return ShardMemory Shard memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置Shard memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _shardMemory Shard memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取Shard storage size in GB, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return ShardStorage Shard storage size in GB, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置Shard storage size in GB, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _shardStorage Shard storage size in GB, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * @return ShardCount The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * @param _shardCount The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * @return Paymode Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * @param _paymode Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     * 
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     * 
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * @return AmountUnit Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * @param _amountUnit Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * AZ ID of the purchased instance.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The number of instances to be purchased. You can purchase 1-10 instances.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Validity period in months
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of nodes in a single shard, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                    /**
                     * Shard memory size in GB, which can be obtained 
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * Shard storage size in GB, which can be obtained
 by querying the instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * The number of shards in the instance. Value range: 2-8. Upgrade your instance to have up to 64 shards if you require more.
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * Billing type. Valid values: `postpaid` (pay-as-you-go), `prepaid` (monthly subscription).
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * Price unit. Valid values:   
`* pent` (cent), 
`* microPent` (microcent).
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_
