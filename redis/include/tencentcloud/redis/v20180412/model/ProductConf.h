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
                     * 获取Product type
- `2`: Redis 2.8 Memory Edition (Standard Architecture).
- `3`: CKV 3.2 Memory Edition (Standard Architecture).
- `4`: CKV 3.2 Memory Edition (Cluster Architecture).
- `5`: Redis 2.8 Memory Edition (Standalone).
- `6`: Redis 4.0 Memory Edition (Standard Architecture).
- `7`: Redis 4.0 Memory Edition (Cluster Architecture).
- `8`: Redis 5.0 Memory Edition (Standard Architecture).
- `9`: Redis 5.0 Memory Edition (Cluster Architecture).
- `15`: Redis 6.2 Memory Edition (Standard Architecture).
- `16`: Redis 6.2 Memory Edition (Cluster Architecture).
                     * @return Type Product type
- `2`: Redis 2.8 Memory Edition (Standard Architecture).
- `3`: CKV 3.2 Memory Edition (Standard Architecture).
- `4`: CKV 3.2 Memory Edition (Cluster Architecture).
- `5`: Redis 2.8 Memory Edition (Standalone).
- `6`: Redis 4.0 Memory Edition (Standard Architecture).
- `7`: Redis 4.0 Memory Edition (Cluster Architecture).
- `8`: Redis 5.0 Memory Edition (Standard Architecture).
- `9`: Redis 5.0 Memory Edition (Cluster Architecture).
- `15`: Redis 6.2 Memory Edition (Standard Architecture).
- `16`: Redis 6.2 Memory Edition (Cluster Architecture).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Product type
- `2`: Redis 2.8 Memory Edition (Standard Architecture).
- `3`: CKV 3.2 Memory Edition (Standard Architecture).
- `4`: CKV 3.2 Memory Edition (Cluster Architecture).
- `5`: Redis 2.8 Memory Edition (Standalone).
- `6`: Redis 4.0 Memory Edition (Standard Architecture).
- `7`: Redis 4.0 Memory Edition (Cluster Architecture).
- `8`: Redis 5.0 Memory Edition (Standard Architecture).
- `9`: Redis 5.0 Memory Edition (Cluster Architecture).
- `15`: Redis 6.2 Memory Edition (Standard Architecture).
- `16`: Redis 6.2 Memory Edition (Cluster Architecture).
                     * @param _type Product type
- `2`: Redis 2.8 Memory Edition (Standard Architecture).
- `3`: CKV 3.2 Memory Edition (Standard Architecture).
- `4`: CKV 3.2 Memory Edition (Cluster Architecture).
- `5`: Redis 2.8 Memory Edition (Standalone).
- `6`: Redis 4.0 Memory Edition (Standard Architecture).
- `7`: Redis 4.0 Memory Edition (Cluster Architecture).
- `8`: Redis 5.0 Memory Edition (Standard Architecture).
- `9`: Redis 5.0 Memory Edition (Cluster Architecture).
- `15`: Redis 6.2 Memory Edition (Standard Architecture).
- `16`: Redis 6.2 Memory Edition (Cluster Architecture).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Product names, including Redis Master-Replica Edition, Redis Standalone Edition, Redis 4.0 Cluster Edition, CKV Master-Replica Edition, and CKV Standalone Edition.
                     * @return TypeName Product names, including Redis Master-Replica Edition, Redis Standalone Edition, Redis 4.0 Cluster Edition, CKV Master-Replica Edition, and CKV Standalone Edition.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Product names, including Redis Master-Replica Edition, Redis Standalone Edition, Redis 4.0 Cluster Edition, CKV Master-Replica Edition, and CKV Standalone Edition.
                     * @param _typeName Product names, including Redis Master-Replica Edition, Redis Standalone Edition, Redis 4.0 Cluster Edition, CKV Master-Replica Edition, and CKV Standalone Edition.
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Minimum purchasable quantity
                     * @return MinBuyNum Minimum purchasable quantity
                     * 
                     */
                    int64_t GetMinBuyNum() const;

                    /**
                     * 设置Minimum purchasable quantity
                     * @param _minBuyNum Minimum purchasable quantity
                     * 
                     */
                    void SetMinBuyNum(const int64_t& _minBuyNum);

                    /**
                     * 判断参数 MinBuyNum 是否已赋值
                     * @return MinBuyNum 是否已赋值
                     * 
                     */
                    bool MinBuyNumHasBeenSet() const;

                    /**
                     * 获取Maximum purchasable quantity
                     * @return MaxBuyNum Maximum purchasable quantity
                     * 
                     */
                    int64_t GetMaxBuyNum() const;

                    /**
                     * 设置Maximum purchasable quantity
                     * @param _maxBuyNum Maximum purchasable quantity
                     * 
                     */
                    void SetMaxBuyNum(const int64_t& _maxBuyNum);

                    /**
                     * 判断参数 MaxBuyNum 是否已赋值
                     * @return MaxBuyNum 是否已赋值
                     * 
                     */
                    bool MaxBuyNumHasBeenSet() const;

                    /**
                     * 获取Whether a product is sold out
- `true`: Sold out.
- `false`: Not sold out.
                     * @return Saleout Whether a product is sold out
- `true`: Sold out.
- `false`: Not sold out.
                     * 
                     */
                    bool GetSaleout() const;

                    /**
                     * 设置Whether a product is sold out
- `true`: Sold out.
- `false`: Not sold out.
                     * @param _saleout Whether a product is sold out
- `true`: Sold out.
- `false`: Not sold out.
                     * 
                     */
                    void SetSaleout(const bool& _saleout);

                    /**
                     * 判断参数 Saleout 是否已赋值
                     * @return Saleout 是否已赋值
                     * 
                     */
                    bool SaleoutHasBeenSet() const;

                    /**
                     * 获取Product engines, including Tencent Cloud CKV and Redis Community Edition.
                     * @return Engine Product engines, including Tencent Cloud CKV and Redis Community Edition.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Product engines, including Tencent Cloud CKV and Redis Community Edition.
                     * @param _engine Product engines, including Tencent Cloud CKV and Redis Community Edition.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Compatible versions, including Redis 2.8, 3.2, 4.0, 5.0, and 6.2.
                     * @return Version Compatible versions, including Redis 2.8, 3.2, 4.0, 5.0, and 6.2.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Compatible versions, including Redis 2.8, 3.2, 4.0, 5.0, and 6.2.
                     * @param _version Compatible versions, including Redis 2.8, 3.2, 4.0, 5.0, and 6.2.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Total capacity in GB
                     * @return TotalSize Total capacity in GB
                     * 
                     */
                    std::vector<std::string> GetTotalSize() const;

                    /**
                     * 设置Total capacity in GB
                     * @param _totalSize Total capacity in GB
                     * 
                     */
                    void SetTotalSize(const std::vector<std::string>& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Shard size in GB
                     * @return ShardSize Shard size in GB
                     * 
                     */
                    std::vector<std::string> GetShardSize() const;

                    /**
                     * 设置Shard size in GB
                     * @param _shardSize Shard size in GB
                     * 
                     */
                    void SetShardSize(const std::vector<std::string>& _shardSize);

                    /**
                     * 判断参数 ShardSize 是否已赋值
                     * @return ShardSize 是否已赋值
                     * 
                     */
                    bool ShardSizeHasBeenSet() const;

                    /**
                     * 获取Quantity of replicas
                     * @return ReplicaNum Quantity of replicas
                     * 
                     */
                    std::vector<std::string> GetReplicaNum() const;

                    /**
                     * 设置Quantity of replicas
                     * @param _replicaNum Quantity of replicas
                     * 
                     */
                    void SetReplicaNum(const std::vector<std::string>& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取Quantity of shards
                     * @return ShardNum Quantity of shards
                     * 
                     */
                    std::vector<std::string> GetShardNum() const;

                    /**
                     * 设置Quantity of shards
                     * @param _shardNum Quantity of shards
                     * 
                     */
                    void SetShardNum(const std::vector<std::string>& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取Supported billing modes
- `1`: Monthly subscription.
- `0`: Pay-as-you-go.
                     * @return PayMode Supported billing modes
- `1`: Monthly subscription.
- `0`: Pay-as-you-go.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Supported billing modes
- `1`: Monthly subscription.
- `0`: Pay-as-you-go.
                     * @param _payMode Supported billing modes
- `1`: Monthly subscription.
- `0`: Pay-as-you-go.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether to support read-only replicas
- `true`: Supported.
-`false`: Not supported.
                     * @return EnableRepicaReadOnly Whether to support read-only replicas
- `true`: Supported.
-`false`: Not supported.
                     * 
                     */
                    bool GetEnableRepicaReadOnly() const;

                    /**
                     * 设置Whether to support read-only replicas
- `true`: Supported.
-`false`: Not supported.
                     * @param _enableRepicaReadOnly Whether to support read-only replicas
- `true`: Supported.
-`false`: Not supported.
                     * 
                     */
                    void SetEnableRepicaReadOnly(const bool& _enableRepicaReadOnly);

                    /**
                     * 判断参数 EnableRepicaReadOnly 是否已赋值
                     * @return EnableRepicaReadOnly 是否已赋值
                     * 
                     */
                    bool EnableRepicaReadOnlyHasBeenSet() const;

                private:

                    /**
                     * Product type
- `2`: Redis 2.8 Memory Edition (Standard Architecture).
- `3`: CKV 3.2 Memory Edition (Standard Architecture).
- `4`: CKV 3.2 Memory Edition (Cluster Architecture).
- `5`: Redis 2.8 Memory Edition (Standalone).
- `6`: Redis 4.0 Memory Edition (Standard Architecture).
- `7`: Redis 4.0 Memory Edition (Cluster Architecture).
- `8`: Redis 5.0 Memory Edition (Standard Architecture).
- `9`: Redis 5.0 Memory Edition (Cluster Architecture).
- `15`: Redis 6.2 Memory Edition (Standard Architecture).
- `16`: Redis 6.2 Memory Edition (Cluster Architecture).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Product names, including Redis Master-Replica Edition, Redis Standalone Edition, Redis 4.0 Cluster Edition, CKV Master-Replica Edition, and CKV Standalone Edition.
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
- `true`: Sold out.
- `false`: Not sold out.
                     */
                    bool m_saleout;
                    bool m_saleoutHasBeenSet;

                    /**
                     * Product engines, including Tencent Cloud CKV and Redis Community Edition.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Compatible versions, including Redis 2.8, 3.2, 4.0, 5.0, and 6.2.
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
                     * Quantity of replicas
                     */
                    std::vector<std::string> m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Quantity of shards
                     */
                    std::vector<std::string> m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * Supported billing modes
- `1`: Monthly subscription.
- `0`: Pay-as-you-go.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to support read-only replicas
- `true`: Supported.
-`false`: Not supported.
                     */
                    bool m_enableRepicaReadOnly;
                    bool m_enableRepicaReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PRODUCTCONF_H_
