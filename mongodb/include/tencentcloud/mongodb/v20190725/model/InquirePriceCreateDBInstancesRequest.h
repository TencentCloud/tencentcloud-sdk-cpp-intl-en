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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * InquirePriceCreateDBInstances request structure.
                */
                class InquirePriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateDBInstancesRequest();
                    ~InquirePriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance region name in the format of ap-guangzhou-2.
                     * @return Zone Instance region name in the format of ap-guangzhou-2.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance region name in the format of ap-guangzhou-2.
                     * @param Zone Instance region name in the format of ap-guangzhou-2.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Number of nodes in each replica set. Currently, the number of nodes per replica set is fixed at 3, while the number of secondary nodes per shard is customizable. For more information, please see the parameter returned by the `DescribeSpecInfo` API.
                     * @return NodeNum Number of nodes in each replica set. Currently, the number of nodes per replica set is fixed at 3, while the number of secondary nodes per shard is customizable. For more information, please see the parameter returned by the `DescribeSpecInfo` API.
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes in each replica set. Currently, the number of nodes per replica set is fixed at 3, while the number of secondary nodes per shard is customizable. For more information, please see the parameter returned by the `DescribeSpecInfo` API.
                     * @param NodeNum Number of nodes in each replica set. Currently, the number of nodes per replica set is fixed at 3, while the number of secondary nodes per shard is customizable. For more information, please see the parameter returned by the `DescribeSpecInfo` API.
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Instance memory size in GB.
                     * @return Memory Instance memory size in GB.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB.
                     * @param Memory Instance memory size in GB.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB.
                     * @return Volume Instance disk size in GB.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB.
                     * @param Volume Instance disk size in GB.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition.
                     * @return MongoVersion Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition.
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition.
                     * @param MongoVersion Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition.
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     * @return MachineCode Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     * @param MachineCode Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取Number of instances. Minimum value: 1. Maximum value: 10.
                     * @return GoodsNum Number of instances. Minimum value: 1. Maximum value: 10.
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Minimum value: 1. Maximum value: 10.
                     * @param GoodsNum Number of instances. Minimum value: 1. Maximum value: 10.
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param Period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * @return ClusterType Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * @param ClusterType Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * @return ReplicateSetNum Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * @param ReplicateSetNum Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                private:

                    /**
                     * Instance region name in the format of ap-guangzhou-2.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of nodes in each replica set. Currently, the number of nodes per replica set is fixed at 3, while the number of secondary nodes per shard is customizable. For more information, please see the parameter returned by the `DescribeSpecInfo` API.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Instance memory size in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Number of instances. Minimum value: 1. Maximum value: 10.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
