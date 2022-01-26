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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Product information
                */
                class ProductConf : public AbstractModel
                {
                public:
                    ProductConf();
                    ~ProductConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product type. Valid values: `2` (Redis 2.8 Memory Edition in standard architecture), `3` (CKV 3.2 Memory Edition in standard architecture), `4` (CKV 3.2 Memory Edition in cluster architecture), `5` (Redis 2.8 Memory Edition in standalone architecture), `6` (Redis 4.0 Memory Edition in standard architecture), `7` (Redis 4.0 Memory Edition in cluster architecture), `8` (Redis 5.0 Memory Edition in standard architecture), `9` (Redis 5.0 Memory Edition in cluster architecture), `10` (Redis 4.0 Hybrid Storage Edition (Tendis)).
                     * @return Type Product type. Valid values: `2` (Redis 2.8 Memory Edition in standard architecture), `3` (CKV 3.2 Memory Edition in standard architecture), `4` (CKV 3.2 Memory Edition in cluster architecture), `5` (Redis 2.8 Memory Edition in standalone architecture), `6` (Redis 4.0 Memory Edition in standard architecture), `7` (Redis 4.0 Memory Edition in cluster architecture), `8` (Redis 5.0 Memory Edition in standard architecture), `9` (Redis 5.0 Memory Edition in cluster architecture), `10` (Redis 4.0 Hybrid Storage Edition (Tendis)).
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Product type. Valid values: `2` (Redis 2.8 Memory Edition in standard architecture), `3` (CKV 3.2 Memory Edition in standard architecture), `4` (CKV 3.2 Memory Edition in cluster architecture), `5` (Redis 2.8 Memory Edition in standalone architecture), `6` (Redis 4.0 Memory Edition in standard architecture), `7` (Redis 4.0 Memory Edition in cluster architecture), `8` (Redis 5.0 Memory Edition in standard architecture), `9` (Redis 5.0 Memory Edition in cluster architecture), `10` (Redis 4.0 Hybrid Storage Edition (Tendis)).
                     * @param Type Product type. Valid values: `2` (Redis 2.8 Memory Edition in standard architecture), `3` (CKV 3.2 Memory Edition in standard architecture), `4` (CKV 3.2 Memory Edition in cluster architecture), `5` (Redis 2.8 Memory Edition in standalone architecture), `6` (Redis 4.0 Memory Edition in standard architecture), `7` (Redis 4.0 Memory Edition in cluster architecture), `8` (Redis 5.0 Memory Edition in standard architecture), `9` (Redis 5.0 Memory Edition in cluster architecture), `10` (Redis 4.0 Hybrid Storage Edition (Tendis)).
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Product name: Redis Master-Replica Edition, CKV Master-Replica Edition, CKV Cluster Edition, Redis Standalone Edition, Redis Cluster Edition, Tendis Hybrid Storage Edition
                     * @return TypeName Product name: Redis Master-Replica Edition, CKV Master-Replica Edition, CKV Cluster Edition, Redis Standalone Edition, Redis Cluster Edition, Tendis Hybrid Storage Edition
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Product name: Redis Master-Replica Edition, CKV Master-Replica Edition, CKV Cluster Edition, Redis Standalone Edition, Redis Cluster Edition, Tendis Hybrid Storage Edition
                     * @param TypeName Product name: Redis Master-Replica Edition, CKV Master-Replica Edition, CKV Cluster Edition, Redis Standalone Edition, Redis Cluster Edition, Tendis Hybrid Storage Edition
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Minimum purchasable quantity
                     * @return MinBuyNum Minimum purchasable quantity
                     */
                    int64_t GetMinBuyNum() const;

                    /**
                     * 设置Minimum purchasable quantity
                     * @param MinBuyNum Minimum purchasable quantity
                     */
                    void SetMinBuyNum(const int64_t& _minBuyNum);

                    /**
                     * 判断参数 MinBuyNum 是否已赋值
                     * @return MinBuyNum 是否已赋值
                     */
                    bool MinBuyNumHasBeenSet() const;

                    /**
                     * 获取Maximum purchasable quantity
                     * @return MaxBuyNum Maximum purchasable quantity
                     */
                    int64_t GetMaxBuyNum() const;

                    /**
                     * 设置Maximum purchasable quantity
                     * @param MaxBuyNum Maximum purchasable quantity
                     */
                    void SetMaxBuyNum(const int64_t& _maxBuyNum);

                    /**
                     * 判断参数 MaxBuyNum 是否已赋值
                     * @return MaxBuyNum 是否已赋值
                     */
                    bool MaxBuyNumHasBeenSet() const;

                    /**
                     * 获取Whether a product is sold out
                     * @return Saleout Whether a product is sold out
                     */
                    bool GetSaleout() const;

                    /**
                     * 设置Whether a product is sold out
                     * @param Saleout Whether a product is sold out
                     */
                    void SetSaleout(const bool& _saleout);

                    /**
                     * 判断参数 Saleout 是否已赋值
                     * @return Saleout 是否已赋值
                     */
                    bool SaleoutHasBeenSet() const;

                    /**
                     * 获取Product engine: Tencent Cloud CKV or Redis community edition
                     * @return Engine Product engine: Tencent Cloud CKV or Redis community edition
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Product engine: Tencent Cloud CKV or Redis community edition
                     * @param Engine Product engine: Tencent Cloud CKV or Redis community edition
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Compatible version: Redis 2.8, Redis 3.2, or Redis 4.0
                     * @return Version Compatible version: Redis 2.8, Redis 3.2, or Redis 4.0
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Compatible version: Redis 2.8, Redis 3.2, or Redis 4.0
                     * @param Version Compatible version: Redis 2.8, Redis 3.2, or Redis 4.0
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Total capacity in GB
                     * @return TotalSize Total capacity in GB
                     */
                    std::vector<std::string> GetTotalSize() const;

                    /**
                     * 设置Total capacity in GB
                     * @param TotalSize Total capacity in GB
                     */
                    void SetTotalSize(const std::vector<std::string>& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Shard size in GB
                     * @return ShardSize Shard size in GB
                     */
                    std::vector<std::string> GetShardSize() const;

                    /**
                     * 设置Shard size in GB
                     * @param ShardSize Shard size in GB
                     */
                    void SetShardSize(const std::vector<std::string>& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     */
                    bool ShardSizeHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return ReplicaNum Number of replicas
                     */
                    std::vector<std::string> GetReplicaNum() const;

                    /**
                     * 设置Number of replicas
                     * @param ReplicaNum Number of replicas
                     */
                    void SetReplicaNum(const std::vector<std::string>& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return ShardNum Number of shards
                     */
                    std::vector<std::string> GetShardNum() const;

                    /**
                     * 设置Number of shards
                     * @param ShardNum Number of shards
                     */
                    void SetShardNum(const std::vector<std::string>& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取Supported billing method. 1: monthly subscription; 0: pay-as-you-go
                     * @return PayMode Supported billing method. 1: monthly subscription; 0: pay-as-you-go
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Supported billing method. 1: monthly subscription; 0: pay-as-you-go
                     * @param PayMode Supported billing method. 1: monthly subscription; 0: pay-as-you-go
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether to support read-only replicas
                     * @return EnableRepicaReadOnly Whether to support read-only replicas
                     */
                    bool GetEnableRepicaReadOnly() const;

                    /**
                     * 设置Whether to support read-only replicas
                     * @param EnableRepicaReadOnly Whether to support read-only replicas
                     */
                    void SetEnableRepicaReadOnly(const bool& _enableRepicaReadOnly);

                    /**
                     * 判断参数 EnableRepicaReadOnly 是否已赋值
                     * @return EnableRepicaReadOnly 是否已赋值
                     */
                    bool EnableRepicaReadOnlyHasBeenSet() const;

                private:

                    /**
                     * Product type. Valid values: `2` (Redis 2.8 Memory Edition in standard architecture), `3` (CKV 3.2 Memory Edition in standard architecture), `4` (CKV 3.2 Memory Edition in cluster architecture), `5` (Redis 2.8 Memory Edition in standalone architecture), `6` (Redis 4.0 Memory Edition in standard architecture), `7` (Redis 4.0 Memory Edition in cluster architecture), `8` (Redis 5.0 Memory Edition in standard architecture), `9` (Redis 5.0 Memory Edition in cluster architecture), `10` (Redis 4.0 Hybrid Storage Edition (Tendis)).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Product name: Redis Master-Replica Edition, CKV Master-Replica Edition, CKV Cluster Edition, Redis Standalone Edition, Redis Cluster Edition, Tendis Hybrid Storage Edition
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Minimum purchasable quantity
                     */
                    int64_t m_minBuyNum;
                    bool m_minBuyNumHasBeenSet;

                    /**
                     * Maximum purchasable quantity
                     */
                    int64_t m_maxBuyNum;
                    bool m_maxBuyNumHasBeenSet;

                    /**
                     * Whether a product is sold out
                     */
                    bool m_saleout;
                    bool m_saleoutHasBeenSet;

                    /**
                     * Product engine: Tencent Cloud CKV or Redis community edition
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Compatible version: Redis 2.8, Redis 3.2, or Redis 4.0
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Total capacity in GB
                     */
                    std::vector<std::string> m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * Shard size in GB
                     */
                    std::vector<std::string> m_shardSize;
                    bool m_shardSizeHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    std::vector<std::string> m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Number of shards
                     */
                    std::vector<std::string> m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * Supported billing method. 1: monthly subscription; 0: pay-as-you-go
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to support read-only replicas
                     */
                    bool m_enableRepicaReadOnly;
                    bool m_enableRepicaReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_
