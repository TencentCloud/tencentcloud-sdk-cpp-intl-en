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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateDBInstanceHour request structure.
                */
                class CreateDBInstanceHourRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceHourRequest();
                    ~CreateDBInstanceHourRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance memory size in GB
                     * @return Memory Instance memory size in GB
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB
                     * @param Memory Instance memory size in GB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB
                     * @return Volume Instance disk size in GB
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB
                     * @param Volume Instance disk size in GB
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Number of replica sets. When a replica set instance is created, this parameter must be set to 1. When a sharding instance is created, please see the parameters returned by the DescribeSpecInfo API
                     * @return ReplicateSetNum Number of replica sets. When a replica set instance is created, this parameter must be set to 1. When a sharding instance is created, please see the parameters returned by the DescribeSpecInfo API
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of replica sets. When a replica set instance is created, this parameter must be set to 1. When a sharding instance is created, please see the parameters returned by the DescribeSpecInfo API
                     * @param ReplicateSetNum Number of replica sets. When a replica set instance is created, this parameter must be set to 1. When a sharding instance is created, please see the parameters returned by the DescribeSpecInfo API
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Number of nodes in each replica set. Currently, the number of nodes in a replica set is fixed at 3, while the number of shards is customizable. For more information, please see the parameter returned by the DescribeSpecInfo API
                     * @return NodeNum Number of nodes in each replica set. Currently, the number of nodes in a replica set is fixed at 3, while the number of shards is customizable. For more information, please see the parameter returned by the DescribeSpecInfo API
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes in each replica set. Currently, the number of nodes in a replica set is fixed at 3, while the number of shards is customizable. For more information, please see the parameter returned by the DescribeSpecInfo API
                     * @param NodeNum Number of nodes in each replica set. Currently, the number of nodes in a replica set is fixed at 3, while the number of shards is customizable. For more information, please see the parameter returned by the DescribeSpecInfo API
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Version number. For the specific purchasable versions supported, please see the return result of the DescribeSpecInfo API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition
                     * @return MongoVersion Version number. For the specific purchasable versions supported, please see the return result of the DescribeSpecInfo API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Version number. For the specific purchasable versions supported, please see the return result of the DescribeSpecInfo API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition
                     * @param MongoVersion Version number. For the specific purchasable versions supported, please see the return result of the DescribeSpecInfo API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Server type. HIO: high IO; HIO10G: 10-Gigabit high IO
                     * @return MachineCode Server type. HIO: high IO; HIO10G: 10-Gigabit high IO
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Server type. HIO: high IO; HIO10G: 10-Gigabit high IO
                     * @param MachineCode Server type. HIO: high IO; HIO10G: 10-Gigabit high IO
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取Number of instances. Minimum value: 1. Maximum value: 10
                     * @return GoodsNum Number of instances. Minimum value: 1. Maximum value: 10
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Minimum value: 1. Maximum value: 10
                     * @param GoodsNum Number of instances. Minimum value: 1. Maximum value: 10
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取AZ information in the format of ap-guangzhou-2
                     * @return Zone AZ information in the format of ap-guangzhou-2
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information in the format of ap-guangzhou-2
                     * @param Zone AZ information in the format of ap-guangzhou-2
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance type. REPLSET: replica set; SHARD: sharding cluster
                     * @return ClusterType Instance type. REPLSET: replica set; SHARD: sharding cluster
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance type. REPLSET: replica set; SHARD: sharding cluster
                     * @param ClusterType Instance type. REPLSET: replica set; SHARD: sharding cluster
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is not set, the basic network will be selected by default
                     * @return VpcId VPC ID. If this parameter is not set, the basic network will be selected by default
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not set, the basic network will be selected by default
                     * @param VpcId VPC ID. If this parameter is not set, the basic network will be selected by default
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. If VpcId is set, then SubnetId will be required
                     * @return SubnetId VPC subnet ID. If VpcId is set, then SubnetId will be required
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID. If VpcId is set, then SubnetId will be required
                     * @param SubnetId VPC subnet ID. If VpcId is set, then SubnetId will be required
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance password. If this parameter is not set, you need to set an instance password through the password setting API after creating an instance. The password can only contain 8–16 characters and must contain at least two of the following types of characters: letters, digits, and special characters `!@#%^*()` |
                     * @return Password Instance password. If this parameter is not set, you need to set an instance password through the password setting API after creating an instance. The password can only contain 8–16 characters and must contain at least two of the following types of characters: letters, digits, and special characters `!@#%^*()` |
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password. If this parameter is not set, you need to set an instance password through the password setting API after creating an instance. The password can only contain 8–16 characters and must contain at least two of the following types of characters: letters, digits, and special characters `!@#%^*()` |
                     * @param Password Instance password. If this parameter is not set, you need to set an instance password through the password setting API after creating an instance. The password can only contain 8–16 characters and must contain at least two of the following types of characters: letters, digits, and special characters `!@#%^*()` |
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Project ID. If this parameter is not set, the default project will be used
                     * @return ProjectId Project ID. If this parameter is not set, the default project will be used
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If this parameter is not set, the default project will be used
                     * @param ProjectId Project ID. If this parameter is not set, the default project will be used
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance tag information
                     * @return Tags Instance tag information
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Instance tag information
                     * @param Tags Instance tag information
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance memory size in GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Number of replica sets. When a replica set instance is created, this parameter must be set to 1. When a sharding instance is created, please see the parameters returned by the DescribeSpecInfo API
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * Number of nodes in each replica set. Currently, the number of nodes in a replica set is fixed at 3, while the number of shards is customizable. For more information, please see the parameter returned by the DescribeSpecInfo API
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Version number. For the specific purchasable versions supported, please see the return result of the DescribeSpecInfo API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Server type. HIO: high IO; HIO10G: 10-Gigabit high IO
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Number of instances. Minimum value: 1. Maximum value: 10
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * AZ information in the format of ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance type. REPLSET: replica set; SHARD: sharding cluster
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not set, the basic network will be selected by default
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. If VpcId is set, then SubnetId will be required
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance password. If this parameter is not set, you need to set an instance password through the password setting API after creating an instance. The password can only contain 8–16 characters and must contain at least two of the following types of characters: letters, digits, and special characters `!@#%^*()` |
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Project ID. If this parameter is not set, the default project will be used
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance tag information
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
