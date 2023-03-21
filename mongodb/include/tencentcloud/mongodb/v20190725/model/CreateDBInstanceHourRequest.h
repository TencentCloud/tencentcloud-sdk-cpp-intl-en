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
                     * 获取Number of replica sets
- Number of the replica set instances to be created. Valid value: `1`.
- Number of sharded cluster instances to be created. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     * @return ReplicateSetNum Number of replica sets
- Number of the replica set instances to be created. Valid value: `1`.
- Number of sharded cluster instances to be created. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of replica sets
- Number of the replica set instances to be created. Valid value: `1`.
- Number of sharded cluster instances to be created. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     * @param ReplicateSetNum Number of replica sets
- Number of the replica set instances to be created. Valid value: `1`.
- Number of sharded cluster instances to be created. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取The number of nodes in each replica set. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     * @return NodeNum The number of nodes in each replica set. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置The number of nodes in each replica set. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     * @param NodeNum The number of nodes in each replica set. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Version information. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT：MongoDB 3.6 WiredTiger storage engine
- MONGO_40_WT：MongoDB 4.0 WiredTiger storage engine
- MONGO_42_WT：MongoDB 4.2 WiredTiger storage engine
- MONGO_44_WT：MongoDB 4.4 WiredTiger storage engine
                     * @return MongoVersion Version information. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT：MongoDB 3.6 WiredTiger storage engine
- MONGO_40_WT：MongoDB 4.0 WiredTiger storage engine
- MONGO_42_WT：MongoDB 4.2 WiredTiger storage engine
- MONGO_44_WT：MongoDB 4.4 WiredTiger storage engine
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Version information. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT：MongoDB 3.6 WiredTiger storage engine
- MONGO_40_WT：MongoDB 4.0 WiredTiger storage engine
- MONGO_42_WT：MongoDB 4.2 WiredTiger storage engine
- MONGO_44_WT：MongoDB 4.4 WiredTiger storage engine
                     * @param MongoVersion Version information. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT：MongoDB 3.6 WiredTiger storage engine
- MONGO_40_WT：MongoDB 4.0 WiredTiger storage engine
- MONGO_42_WT：MongoDB 4.2 WiredTiger storage engine
- MONGO_44_WT：MongoDB 4.4 WiredTiger storage engine
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取Machine type
- HIO: High IO
- HIO10G: 10-Gigabit high IO
                     * @return MachineCode Machine type
- HIO: High IO
- HIO10G: 10-Gigabit high IO
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Machine type
- HIO: High IO
- HIO10G: 10-Gigabit high IO
                     * @param MachineCode Machine type
- HIO: High IO
- HIO10G: 10-Gigabit high IO
                     */
                    void SetMachineCode(const std::string& _machineCode);

                    /**
                     * 判断参数 MachineCode 是否已赋值
                     * @return MachineCode 是否已赋值
                     */
                    bool MachineCodeHasBeenSet() const;

                    /**
                     * 获取Number of instances. Value range: 1-10.
                     * @return GoodsNum Number of instances. Value range: 1-10.
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Value range: 1-10.
                     * @param GoodsNum Number of instances. Value range: 1-10.
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取AZ information in the format of ap-guangzhou-2
- For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     * @return Zone AZ information in the format of ap-guangzhou-2
- For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information in the format of ap-guangzhou-2
- For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     * @param Zone AZ information in the format of ap-guangzhou-2
- For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance architecture type
- REPLSET: Replica set
- SHARD: Sharded cluster
                     * @return ClusterType Instance architecture type
- REPLSET: Replica set
- SHARD: Sharded cluster
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance architecture type
- REPLSET: Replica set
- SHARD: Sharded cluster
                     * @param ClusterType Instance architecture type
- REPLSET: Replica set
- SHARD: Sharded cluster
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. If `VpcId` is set, then `SubnetId` will be required.
                     * @return SubnetId VPC subnet ID. If `VpcId` is set, then `SubnetId` will be required.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID. If `VpcId` is set, then `SubnetId` will be required.
                     * @param SubnetId VPC subnet ID. If `VpcId` is set, then `SubnetId` will be required.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance password
- If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". 
- The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * @return Password Instance password
- If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". 
- The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password
- If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". 
- The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * @param Password Instance password
- If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". 
- The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Project ID. If it is left empty, `Default project` will be used.
                     * @return ProjectId Project ID. If it is left empty, `Default project` will be used.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If it is left empty, `Default project` will be used.
                     * @param ProjectId Project ID. If it is left empty, `Default project` will be used.
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

                    /**
                     * 获取Instance type. Valid values:
- `1`: Primary instance
- `3`: Read-only instance
- `4`: Disaster recovery instance
                     * @return Clone Instance type. Valid values:
- `1`: Primary instance
- `3`: Read-only instance
- `4`: Disaster recovery instance
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置Instance type. Valid values:
- `1`: Primary instance
- `3`: Read-only instance
- `4`: Disaster recovery instance
                     * @param Clone Instance type. Valid values:
- `1`: Primary instance
- `3`: Read-only instance
- `4`: Disaster recovery instance
                     */
                    void SetClone(const int64_t& _clone);

                    /**
                     * 判断参数 Clone 是否已赋值
                     * @return Clone 是否已赋值
                     */
                    bool CloneHasBeenSet() const;

                    /**
                     * 获取Parent instance ID. It is required if the `Clone` is `3` or `4`, that is, read-only instance or disaster recovery instance
                     * @return Father Parent instance ID. It is required if the `Clone` is `3` or `4`, that is, read-only instance or disaster recovery instance
                     */
                    std::string GetFather() const;

                    /**
                     * 设置Parent instance ID. It is required if the `Clone` is `3` or `4`, that is, read-only instance or disaster recovery instance
                     * @param Father Parent instance ID. It is required if the `Clone` is `3` or `4`, that is, read-only instance or disaster recovery instance
                     */
                    void SetFather(const std::string& _father);

                    /**
                     * 判断参数 Father 是否已赋值
                     * @return Father 是否已赋值
                     */
                    bool FatherHasBeenSet() const;

                    /**
                     * 获取Security group
                     * @return SecurityGroup Security group
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group
                     * @param SecurityGroup Security group
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Rollback time of the cloned instance
- This parameter is required for a cloned instance in the format of 2021-08-13 16:30:00.
- Time range for rollback: You can roll back data in the last 7 days.
                     * @return RestoreTime Rollback time of the cloned instance
- This parameter is required for a cloned instance in the format of 2021-08-13 16:30:00.
- Time range for rollback: You can roll back data in the last 7 days.
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置Rollback time of the cloned instance
- This parameter is required for a cloned instance in the format of 2021-08-13 16:30:00.
- Time range for rollback: You can roll back data in the last 7 days.
                     * @param RestoreTime Rollback time of the cloned instance
- This parameter is required for a cloned instance in the format of 2021-08-13 16:30:00.
- Time range for rollback: You can roll back data in the last 7 days.
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取Instance name, which can contain up to 60 letters, digits, and symbols (_-).
                     * @return InstanceName Instance name, which can contain up to 60 letters, digits, and symbols (_-).
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can contain up to 60 letters, digits, and symbols (_-).
                     * @param InstanceName Instance name, which can contain up to 60 letters, digits, and symbols (_-).
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取List of multi-AZ deployed nodes. For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- Nodes of a multi-AZ instance must be deployed across three AZs. Most nodes of the cluster can’t be deployed in the same AZ. For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.
- MongoDB 4.2 and later versions do not support multi-AZ deployment.
- Read-only and disaster recovery instances do not support multi-AZ deployment.
-Instances in the classic network do not support multi-AZ deployment.
                     * @return AvailabilityZoneList List of multi-AZ deployed nodes. For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- Nodes of a multi-AZ instance must be deployed across three AZs. Most nodes of the cluster can’t be deployed in the same AZ. For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.
- MongoDB 4.2 and later versions do not support multi-AZ deployment.
- Read-only and disaster recovery instances do not support multi-AZ deployment.
-Instances in the classic network do not support multi-AZ deployment.
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置List of multi-AZ deployed nodes. For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- Nodes of a multi-AZ instance must be deployed across three AZs. Most nodes of the cluster can’t be deployed in the same AZ. For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.
- MongoDB 4.2 and later versions do not support multi-AZ deployment.
- Read-only and disaster recovery instances do not support multi-AZ deployment.
-Instances in the classic network do not support multi-AZ deployment.
                     * @param AvailabilityZoneList List of multi-AZ deployed nodes. For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- Nodes of a multi-AZ instance must be deployed across three AZs. Most nodes of the cluster can’t be deployed in the same AZ. For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.
- MongoDB 4.2 and later versions do not support multi-AZ deployment.
- Read-only and disaster recovery instances do not support multi-AZ deployment.
-Instances in the classic network do not support multi-AZ deployment.
                     */
                    void SetAvailabilityZoneList(const std::vector<std::string>& _availabilityZoneList);

                    /**
                     * 判断参数 AvailabilityZoneList 是否已赋值
                     * @return AvailabilityZoneList 是否已赋值
                     */
                    bool AvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取Number of Mongos CPU cores
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @return MongosCpu Number of Mongos CPU cores
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置Number of Mongos CPU cores
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @param MongosCpu Number of Mongos CPU cores
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    void SetMongosCpu(const uint64_t& _mongosCpu);

                    /**
                     * 判断参数 MongosCpu 是否已赋值
                     * @return MongosCpu 是否已赋值
                     */
                    bool MongosCpuHasBeenSet() const;

                    /**
                     * 获取Mongos memory size
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @return MongosMemory Mongos memory size
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置Mongos memory size
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @param MongosMemory Mongos memory size
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    void SetMongosMemory(const uint64_t& _mongosMemory);

                    /**
                     * 判断参数 MongosMemory 是否已赋值
                     * @return MongosMemory 是否已赋值
                     */
                    bool MongosMemoryHasBeenSet() const;

                    /**
                     * 获取Number of Monogs
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @return MongosNodeNum Number of Monogs
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置Number of Monogs
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     * @param MongosNodeNum Number of Monogs
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of read-only nodes. Value range: 0-5.
                     * @return ReadonlyNodeNum Number of read-only nodes. Value range: 0-5.
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置Number of read-only nodes. Value range: 0-5.
                     * @param ReadonlyNodeNum Number of read-only nodes. Value range: 0-5.
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取AZ of read-only nodes, which is required when `ReadonlyNodeNum` is not `0` in cross-AZ instance deployment.
                     * @return ReadonlyNodeAvailabilityZoneList AZ of read-only nodes, which is required when `ReadonlyNodeNum` is not `0` in cross-AZ instance deployment.
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置AZ of read-only nodes, which is required when `ReadonlyNodeNum` is not `0` in cross-AZ instance deployment.
                     * @param ReadonlyNodeAvailabilityZoneList AZ of read-only nodes, which is required when `ReadonlyNodeNum` is not `0` in cross-AZ instance deployment.
                     */
                    void SetReadonlyNodeAvailabilityZoneList(const std::vector<std::string>& _readonlyNodeAvailabilityZoneList);

                    /**
                     * 判断参数 ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * @return ReadonlyNodeAvailabilityZoneList 是否已赋值
                     */
                    bool ReadonlyNodeAvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取AZ where the hidden node resides, which is required in cross-AZ instance deployment.
                     * @return HiddenZone AZ where the hidden node resides, which is required in cross-AZ instance deployment.
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置AZ where the hidden node resides, which is required in cross-AZ instance deployment.
                     * @param HiddenZone AZ where the hidden node resides, which is required in cross-AZ instance deployment.
                     */
                    void SetHiddenZone(const std::string& _hiddenZone);

                    /**
                     * 判断参数 HiddenZone 是否已赋值
                     * @return HiddenZone 是否已赋值
                     */
                    bool HiddenZoneHasBeenSet() const;

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
                     * Number of replica sets
- Number of the replica set instances to be created. Valid value: `1`.
- Number of sharded cluster instances to be created. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * The number of nodes in each replica set. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Version information. You can get the specific purchasable specifications through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- MONGO_36_WT：MongoDB 3.6 WiredTiger storage engine
- MONGO_40_WT：MongoDB 4.0 WiredTiger storage engine
- MONGO_42_WT：MongoDB 4.2 WiredTiger storage engine
- MONGO_44_WT：MongoDB 4.4 WiredTiger storage engine
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Machine type
- HIO: High IO
- HIO10G: 10-Gigabit high IO
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Number of instances. Value range: 1-10.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * AZ information in the format of ap-guangzhou-2
- For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance architecture type
- REPLSET: Replica set
- SHARD: Sharded cluster
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. If `VpcId` is set, then `SubnetId` will be required.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance password
- If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". 
- The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Project ID. If it is left empty, `Default project` will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance tag information
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance type. Valid values:
- `1`: Primary instance
- `3`: Read-only instance
- `4`: Disaster recovery instance
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * Parent instance ID. It is required if the `Clone` is `3` or `4`, that is, read-only instance or disaster recovery instance
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * Security group
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Rollback time of the cloned instance
- This parameter is required for a cloned instance in the format of 2021-08-13 16:30:00.
- Time range for rollback: You can roll back data in the last 7 days.
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * Instance name, which can contain up to 60 letters, digits, and symbols (_-).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * List of multi-AZ deployed nodes. For more information, query through the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API.
- Nodes of a multi-AZ instance must be deployed across three AZs. Most nodes of the cluster can’t be deployed in the same AZ. For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.
- MongoDB 4.2 and later versions do not support multi-AZ deployment.
- Read-only and disaster recovery instances do not support multi-AZ deployment.
-Instances in the classic network do not support multi-AZ deployment.
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * Number of Mongos CPU cores
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * Mongos memory size
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * Number of Monogs
- This parameter is not required for a sharded cluster instance of MongoDB 3.6 WiredTiger or later.
- If this parameter is not configured, the mongos specification will be configured based on the mongod specification, and the default specification is free of charge.
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * Number of read-only nodes. Value range: 0-5.
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * AZ of read-only nodes, which is required when `ReadonlyNodeNum` is not `0` in cross-AZ instance deployment.
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * AZ where the hidden node resides, which is required in cross-AZ instance deployment.
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
