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
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance region name in the format of ap-guangzhou-2.
                     * @param _zone Instance region name in the format of ap-guangzhou-2.
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
                     * 获取Number of primary and secondary nodes per shard. <br>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and the `MinNodeNum` and `MaxNodeNum` parameters are the minimal and maximum value respectively.</li></ul>
                     * @return NodeNum Number of primary and secondary nodes per shard. <br>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and the `MinNodeNum` and `MaxNodeNum` parameters are the minimal and maximum value respectively.</li></ul>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of primary and secondary nodes per shard. <br>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and the `MinNodeNum` and `MaxNodeNum` parameters are the minimal and maximum value respectively.</li></ul>
                     * @param _nodeNum Number of primary and secondary nodes per shard. <br>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and the `MinNodeNum` and `MaxNodeNum` parameters are the minimal and maximum value respectively.</li></ul>
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

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
                     * 获取 Instance disk size. <ul><li>Unit: GB</li><li>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and `MinStorage` and `MaxStorage` parameters are the minimal and maximum value of the disk size respectively.</br>
                     * @return Volume  Instance disk size. <ul><li>Unit: GB</li><li>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and `MinStorage` and `MaxStorage` parameters are the minimal and maximum value of the disk size respectively.</br>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置 Instance disk size. <ul><li>Unit: GB</li><li>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and `MinStorage` and `MaxStorage` parameters are the minimal and maximum value of the disk size respectively.</br>
                     * @param _volume  Instance disk size. <ul><li>Unit: GB</li><li>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and `MinStorage` and `MaxStorage` parameters are the minimal and maximum value of the disk size respectively.</br>
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
                     * 获取Instance version information. <ul><li>For specific supported versions, query through the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, the returned parameter `MongoVersionCode` in data structure `SpecItems` is the supported version information. </li><li>The correspondences between parameters and versions are as follows <ul><li>MONGO_3_WT: MongoDB 3.2 WiredTiger storage engine version. </li><li>MONGO_3_ROCKS: MongoDB 3.2 RocksDB storage engine version. </li><li>MONGO_36_WT: MongoDB 3.6 WiredTiger storage engine version. </li><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version. </li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version. </li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version. </li></ul>
                     * @return MongoVersion Instance version information. <ul><li>For specific supported versions, query through the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, the returned parameter `MongoVersionCode` in data structure `SpecItems` is the supported version information. </li><li>The correspondences between parameters and versions are as follows <ul><li>MONGO_3_WT: MongoDB 3.2 WiredTiger storage engine version. </li><li>MONGO_3_ROCKS: MongoDB 3.2 RocksDB storage engine version. </li><li>MONGO_36_WT: MongoDB 3.6 WiredTiger storage engine version. </li><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version. </li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version. </li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version. </li></ul>
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Instance version information. <ul><li>For specific supported versions, query through the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, the returned parameter `MongoVersionCode` in data structure `SpecItems` is the supported version information. </li><li>The correspondences between parameters and versions are as follows <ul><li>MONGO_3_WT: MongoDB 3.2 WiredTiger storage engine version. </li><li>MONGO_3_ROCKS: MongoDB 3.2 RocksDB storage engine version. </li><li>MONGO_36_WT: MongoDB 3.6 WiredTiger storage engine version. </li><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version. </li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version. </li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version. </li></ul>
                     * @param _mongoVersion Instance version information. <ul><li>For specific supported versions, query through the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, the returned parameter `MongoVersionCode` in data structure `SpecItems` is the supported version information. </li><li>The correspondences between parameters and versions are as follows <ul><li>MONGO_3_WT: MongoDB 3.2 WiredTiger storage engine version. </li><li>MONGO_3_ROCKS: MongoDB 3.2 RocksDB storage engine version. </li><li>MONGO_36_WT: MongoDB 3.6 WiredTiger storage engine version. </li><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version. </li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version. </li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version. </li></ul>
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Server type. Valid values: `HIO` (high IO), `HIO10G` (ten-gigabit high IO)
                     * @return MachineCode Server type. Valid values: `HIO` (high IO), `HIO10G` (ten-gigabit high IO)
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Server type. Valid values: `HIO` (high IO), `HIO10G` (ten-gigabit high IO)
                     * @param _machineCode Server type. Valid values: `HIO` (high IO), `HIO10G` (ten-gigabit high IO)
                     * 
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     * 
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取Number of instances. Minimum value: 1. Maximum value: 10.
                     * @return GoodsNum Number of instances. Minimum value: 1. Maximum value: 10.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Minimum value: 1. Maximum value: 10.
                     * @param _goodsNum Number of instances. Minimum value: 1. Maximum value: 10.
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
                     * 获取Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * @return ClusterType Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * @param _clusterType Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * @return ReplicateSetNum Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * 
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * @param _replicateSetNum Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * 
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param _period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
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
                     * 获取
                     * @return InstanceChargeType 
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置
                     * @param _instanceChargeType 
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
                     * 获取
                     * @return MongosCpu 
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置
                     * @param _mongosCpu 
                     * 
                     */
                    void SetMongosCpu(const uint64_t& _mongosCpu);

                    /**
                     * 判断参数 MongosCpu 是否已赋值
                     * @return MongosCpu 是否已赋值
                     * 
                     */
                    bool MongosCpuHasBeenSet() const;

                    /**
                     * 获取
                     * @return MongosMemory 
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置
                     * @param _mongosMemory 
                     * 
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     * 
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return MongosNum 
                     * 
                     */
                    uint64_t GetMongosNum() const;

                    /**
                     * 设置
                     * @param _mongosNum 
                     * 
                     */
                    void SetMongosNum(const uint64_t& _mongosNum);

                    /**
                     * 判断参数 MongosNum 是否已赋值
                     * @return MongosNum 是否已赋值
                     * 
                     */
                    bool MongosNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConfigServerCpu 
                     * 
                     */
                    uint64_t GetConfigServerCpu() const;

                    /**
                     * 设置
                     * @param _configServerCpu 
                     * 
                     */
                    void SetConfigServerCpu(const uint64_t& _configServerCpu);

                    /**
                     * 判断参数 ConfigServerCpu 是否已赋值
                     * @return ConfigServerCpu 是否已赋值
                     * 
                     */
                    bool ConfigServerCpuHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConfigServerMemory 
                     * 
                     */
                    uint64_t GetConfigServerMemory() const;

                    /**
                     * 设置
                     * @param _configServerMemory 
                     * 
                     */
                    void SetConfigServerMemory(const uint64_t& _configServerMemory);

                    /**
                     * 判断参数 ConfigServerMemory 是否已赋值
                     * @return ConfigServerMemory 是否已赋值
                     * 
                     */
                    bool ConfigServerMemoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConfigServerVolume 
                     * 
                     */
                    uint64_t GetConfigServerVolume() const;

                    /**
                     * 设置
                     * @param _configServerVolume 
                     * 
                     */
                    void SetConfigServerVolume(const uint64_t& _configServerVolume);

                    /**
                     * 判断参数 ConfigServerVolume 是否已赋值
                     * @return ConfigServerVolume 是否已赋值
                     * 
                     */
                    bool ConfigServerVolumeHasBeenSet() const;

                private:

                    /**
                     * Instance region name in the format of ap-guangzhou-2.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of primary and secondary nodes per shard. <br>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and the `MinNodeNum` and `MaxNodeNum` parameters are the minimal and maximum value respectively.</li></ul>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Instance memory size in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     *  Instance disk size. <ul><li>Unit: GB</li><li>Value range: It can be queried by the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, and `MinStorage` and `MaxStorage` parameters are the minimal and maximum value of the disk size respectively.</br>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Instance version information. <ul><li>For specific supported versions, query through the <a href="https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API, the returned parameter `MongoVersionCode` in data structure `SpecItems` is the supported version information. </li><li>The correspondences between parameters and versions are as follows <ul><li>MONGO_3_WT: MongoDB 3.2 WiredTiger storage engine version. </li><li>MONGO_3_ROCKS: MongoDB 3.2 RocksDB storage engine version. </li><li>MONGO_36_WT: MongoDB 3.6 WiredTiger storage engine version. </li><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version. </li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version. </li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version. </li></ul>
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Server type. Valid values: `HIO` (high IO), `HIO10G` (ten-gigabit high IO)
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Number of instances. Minimum value: 1. Maximum value: 10.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

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

                    /**
                     * Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_mongosNum;
                    bool m_mongosNumHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_configServerCpu;
                    bool m_configServerCpuHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_configServerMemory;
                    bool m_configServerMemoryHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_configServerVolume;
                    bool m_configServerVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
