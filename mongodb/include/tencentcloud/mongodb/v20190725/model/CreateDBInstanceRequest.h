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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_

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
                * CreateDBInstance request structure.
                */
                class CreateDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceRequest();
                    ~CreateDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of nodes in each replica set. The value range is subject to the response parameter of the `DescribeSpecInfo` API.
                     * @return NodeNum The number of nodes in each replica set. The value range is subject to the response parameter of the `DescribeSpecInfo` API.
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置The number of nodes in each replica set. The value range is subject to the response parameter of the `DescribeSpecInfo` API.
                     * @param _nodeNum The number of nodes in each replica set. The value range is subject to the response parameter of the `DescribeSpecInfo` API.
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

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
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in GB.
                     * @param _memory Instance memory size in GB.
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB.
                     * @return Volume Instance disk size in GB.
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB.
                     * @param _volume Instance disk size in GB.
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition; MONGO_42_WT: MongoDB 4.2 WiredTiger Edition.
                     * @return MongoVersion Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition; MONGO_42_WT: MongoDB 4.2 WiredTiger Edition.
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition; MONGO_42_WT: MongoDB 4.2 WiredTiger Edition.
                     * @param _mongoVersion Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition; MONGO_42_WT: MongoDB 4.2 WiredTiger Edition.
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
                     * 获取Number of instances. Minimum value: 1. Maximum value: 10.
                     * @return GoodsNum Number of instances. Minimum value: 1. Maximum value: 10.
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Minimum value: 1. Maximum value: 10.
                     * @param _goodsNum Number of instances. Minimum value: 1. Maximum value: 10.
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
                     * 获取AZ in the format of ap-guangzhou-2. If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     * @return Zone AZ in the format of ap-guangzhou-2. If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ in the format of ap-guangzhou-2. If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     * @param _zone AZ in the format of ap-guangzhou-2. If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
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
                     * 获取Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param _period Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
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
                     * 获取Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     * @return MachineCode Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     * @param _machineCode Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
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
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * @param _replicateSetNum Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     * 
                     */
                    void SetReplicateSetNum(const uint64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Project ID. If this parameter is not set, the default project will be used.
                     * @return ProjectId Project ID. If this parameter is not set, the default project will be used.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If this parameter is not set, the default project will be used.
                     * @param _projectId Project ID. If this parameter is not set, the default project will be used.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取VPC ID. If this parameter is not set, the classic network will be used. Please use the `DescribeVpcs` API to query the VPC list.
                     * @return VpcId VPC ID. If this parameter is not set, the classic network will be used. Please use the `DescribeVpcs` API to query the VPC list.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. If this parameter is not set, the classic network will be used. Please use the `DescribeVpcs` API to query the VPC list.
                     * @param _vpcId VPC ID. If this parameter is not set, the classic network will be used. Please use the `DescribeVpcs` API to query the VPC list.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the `DescribeSubnets` API to query the subnet list.
                     * @return SubnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the `DescribeSubnets` API to query the subnet list.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the `DescribeSubnets` API to query the subnet list.
                     * @param _subnetId VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the `DescribeSubnets` API to query the subnet list.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance password. If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * @return Password Instance password. If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password. If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * @param _password Instance password. If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Instance tag information.
                     * @return Tags Instance tag information.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Instance tag information.
                     * @param _tags Instance tag information.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values: 0 (auto-renewal not enabled), 1 (auto-renewal enabled). Default value: 0.
                     * @return AutoRenewFlag Auto-renewal flag. Valid values: 0 (auto-renewal not enabled), 1 (auto-renewal enabled). Default value: 0.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values: 0 (auto-renewal not enabled), 1 (auto-renewal enabled). Default value: 0.
                     * @param _autoRenewFlag Auto-renewal flag. Valid values: 0 (auto-renewal not enabled), 1 (auto-renewal enabled). Default value: 0.
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use a voucher. Valid values: 1 (yes), 0 (no). Default value: 0.
                     * @return AutoVoucher Whether to automatically use a voucher. Valid values: 1 (yes), 0 (no). Default value: 0.
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use a voucher. Valid values: 1 (yes), 0 (no). Default value: 0.
                     * @param _autoVoucher Whether to automatically use a voucher. Valid values: 1 (yes), 0 (no). Default value: 0.
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `1` (primary instance), `2` (temp instance), `3` (read-only instance), `4` (disaster recovery instance), `5` (cloned instance).
                     * @return Clone Instance type. Valid values: `1` (primary instance), `2` (temp instance), `3` (read-only instance), `4` (disaster recovery instance), `5` (cloned instance).
                     * 
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置Instance type. Valid values: `1` (primary instance), `2` (temp instance), `3` (read-only instance), `4` (disaster recovery instance), `5` (cloned instance).
                     * @param _clone Instance type. Valid values: `1` (primary instance), `2` (temp instance), `3` (read-only instance), `4` (disaster recovery instance), `5` (cloned instance).
                     * 
                     */
                    void SetClone(const int64_t& _clone);

                    /**
                     * 判断参数 Clone 是否已赋值
                     * @return Clone 是否已赋值
                     * 
                     */
                    bool CloneHasBeenSet() const;

                    /**
                     * 获取Primary instance ID. It is required for read-only, disaster recovery, and cloned instances.
                     * @return Father Primary instance ID. It is required for read-only, disaster recovery, and cloned instances.
                     * 
                     */
                    std::string GetFather() const;

                    /**
                     * 设置Primary instance ID. It is required for read-only, disaster recovery, and cloned instances.
                     * @param _father Primary instance ID. It is required for read-only, disaster recovery, and cloned instances.
                     * 
                     */
                    void SetFather(const std::string& _father);

                    /**
                     * 判断参数 Father 是否已赋值
                     * @return Father 是否已赋值
                     * 
                     */
                    bool FatherHasBeenSet() const;

                    /**
                     * 获取Security group.
                     * @return SecurityGroup Security group.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group.
                     * @param _securityGroup Security group.
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取The point in time to which the cloned instance will be rolled back. This parameter is required for a cloned instance. The point in time in the format of 2021-08-13 16:30:00 must be within the last seven days.
                     * @return RestoreTime The point in time to which the cloned instance will be rolled back. This parameter is required for a cloned instance. The point in time in the format of 2021-08-13 16:30:00 must be within the last seven days.
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置The point in time to which the cloned instance will be rolled back. This parameter is required for a cloned instance. The point in time in the format of 2021-08-13 16:30:00 must be within the last seven days.
                     * @param _restoreTime The point in time to which the cloned instance will be rolled back. This parameter is required for a cloned instance. The point in time in the format of 2021-08-13 16:30:00 must be within the last seven days.
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取Instance name, which can contain up to 60 letters, digits, or symbols (_-).
                     * @return InstanceName Instance name, which can contain up to 60 letters, digits, or symbols (_-).
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can contain up to 60 letters, digits, or symbols (_-).
                     * @param _instanceName Instance name, which can contain up to 60 letters, digits, or symbols (_-).
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取AZ list when multi-AZ deployment is enabled. For the specific purchasable versions which support multi-AZ deployment, please see the return result of the `DescribeSpecInfo` API. Notes: 1. Nodes of a multi-AZ instance must be deployed across three AZs. 2. To ensure a successful cross-AZ switch, you should not deploy most of the nodes to the same AZ. (For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.) 3. MongoDB 4.2 and later versions do not support multi-AZ deployment. 4. Read-Only and disaster recovery instances do not support multi-AZ deployment. 5. Instances in the classic network do not support multi-AZ deployment.
                     * @return AvailabilityZoneList AZ list when multi-AZ deployment is enabled. For the specific purchasable versions which support multi-AZ deployment, please see the return result of the `DescribeSpecInfo` API. Notes: 1. Nodes of a multi-AZ instance must be deployed across three AZs. 2. To ensure a successful cross-AZ switch, you should not deploy most of the nodes to the same AZ. (For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.) 3. MongoDB 4.2 and later versions do not support multi-AZ deployment. 4. Read-Only and disaster recovery instances do not support multi-AZ deployment. 5. Instances in the classic network do not support multi-AZ deployment.
                     * 
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置AZ list when multi-AZ deployment is enabled. For the specific purchasable versions which support multi-AZ deployment, please see the return result of the `DescribeSpecInfo` API. Notes: 1. Nodes of a multi-AZ instance must be deployed across three AZs. 2. To ensure a successful cross-AZ switch, you should not deploy most of the nodes to the same AZ. (For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.) 3. MongoDB 4.2 and later versions do not support multi-AZ deployment. 4. Read-Only and disaster recovery instances do not support multi-AZ deployment. 5. Instances in the classic network do not support multi-AZ deployment.
                     * @param _availabilityZoneList AZ list when multi-AZ deployment is enabled. For the specific purchasable versions which support multi-AZ deployment, please see the return result of the `DescribeSpecInfo` API. Notes: 1. Nodes of a multi-AZ instance must be deployed across three AZs. 2. To ensure a successful cross-AZ switch, you should not deploy most of the nodes to the same AZ. (For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.) 3. MongoDB 4.2 and later versions do not support multi-AZ deployment. 4. Read-Only and disaster recovery instances do not support multi-AZ deployment. 5. Instances in the classic network do not support multi-AZ deployment.
                     * 
                     */
                    void SetAvailabilityZoneList(const std::vector<std::string>& _availabilityZoneList);

                    /**
                     * 判断参数 AvailabilityZoneList 是否已赋值
                     * @return AvailabilityZoneList 是否已赋值
                     * 
                     */
                    bool AvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取The number of mongos CPUs, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * @return MongosCpu The number of mongos CPUs, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置The number of mongos CPUs, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * @param _mongosCpu The number of mongos CPUs, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
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
                     * 获取The size of mongos memory, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * @return MongosMemory The size of mongos memory, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置The size of mongos memory, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     * @param _mongosMemory The size of mongos memory, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
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
                     * 获取The number of mongos routers, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. Note: please purchase 3-32 mongos routers for high availability.
                     * @return MongosNodeNum The number of mongos routers, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. Note: please purchase 3-32 mongos routers for high availability.
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置The number of mongos routers, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. Note: please purchase 3-32 mongos routers for high availability.
                     * @param _mongosNodeNum The number of mongos routers, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. Note: please purchase 3-32 mongos routers for high availability.
                     * 
                     */
                    void SetMongosNodeNum(const uint64_t& _mongosNodeNum);

                    /**
                     * 判断参数 MongosNodeNum 是否已赋值
                     * @return MongosNodeNum 是否已赋值
                     * 
                     */
                    bool MongosNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of read-only nodes. Value range: 2-7.
                     * @return ReadonlyNodeNum Number of read-only nodes. Value range: 2-7.
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置Number of read-only nodes. Value range: 2-7.
                     * @param _readonlyNodeNum Number of read-only nodes. Value range: 2-7.
                     * 
                     */
                    void SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取The AZ where the read-only node is deployed
                     * @return ReadonlyNodeAvailabilityZoneList The AZ where the read-only node is deployed
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置The AZ where the read-only node is deployed
                     * @param _readonlyNodeAvailabilityZoneList The AZ where the read-only node is deployed
                     * 
                     */
                    void SetReadonlyNodeAvailabilityZoneList(const std::vector<std::string>& _readonlyNodeAvailabilityZoneList);

                    /**
                     * 判断参数 ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * @return ReadonlyNodeAvailabilityZoneList 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeAvailabilityZoneListHasBeenSet() const;

                    /**
                     * 获取The AZ where the hidden node resides. It is required for cross-AZ instances.
                     * @return HiddenZone The AZ where the hidden node resides. It is required for cross-AZ instances.
                     * 
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置The AZ where the hidden node resides. It is required for cross-AZ instances.
                     * @param _hiddenZone The AZ where the hidden node resides. It is required for cross-AZ instances.
                     * 
                     */
                    void SetHiddenZone(const std::string& _hiddenZone);

                    /**
                     * 判断参数 HiddenZone 是否已赋值
                     * @return HiddenZone 是否已赋值
                     * 
                     */
                    bool HiddenZoneHasBeenSet() const;

                private:

                    /**
                     * The number of nodes in each replica set. The value range is subject to the response parameter of the `DescribeSpecInfo` API.
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Instance memory size in GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB.
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Version number. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. The correspondences between parameters and versions are as follows: MONGO_3_WT: MongoDB 3.2 WiredTiger Edition; MONGO_3_ROCKS: MongoDB 3.2 RocksDB Edition; MONGO_36_WT: MongoDB 3.6 WiredTiger Edition; MONGO_40_WT: MongoDB 4.0 WiredTiger Edition; MONGO_42_WT: MongoDB 4.2 WiredTiger Edition.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Number of instances. Minimum value: 1. Maximum value: 10.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * AZ in the format of ap-guangzhou-2. If multi-AZ deployment is enabled, this parameter refers to the primary AZ and must be one of the values of `AvailabilityZoneList`.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance validity period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Server type. Valid values: HIO (high IO), HIO10G (10-gigabit high IO), STDS5 (standard).
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Instance type. Valid values: REPLSET (replica set), SHARD (sharded cluster), STANDALONE (single-node).
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Number of replica sets. To create a replica set instance, set this parameter to 1; to create a shard instance, see the parameters returned by the `DescribeSpecInfo` API; to create a single-node instance, set this parameter to 0.
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * Project ID. If this parameter is not set, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID. If this parameter is not set, the classic network will be used. Please use the `DescribeVpcs` API to query the VPC list.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID. If `UniqVpcId` is set, then `UniqSubnetId` will be required. Please use the `DescribeSubnets` API to query the subnet list.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance password. If it is left empty, the password is in the default format of "instance ID+@+root account UIN". For example, if the instance ID is "cmgo-higv73ed" and the root account UIN "100000001", the instance password will be "cmgo-higv73ed@100000001". The custom password must contain 8-32 characters in at least two of the following types: letters, digits, and symbols (!@#%^*()_).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Instance tag information.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values: 0 (auto-renewal not enabled), 1 (auto-renewal enabled). Default value: 0.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically use a voucher. Valid values: 1 (yes), 0 (no). Default value: 0.
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Instance type. Valid values: `1` (primary instance), `2` (temp instance), `3` (read-only instance), `4` (disaster recovery instance), `5` (cloned instance).
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * Primary instance ID. It is required for read-only, disaster recovery, and cloned instances.
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * Security group.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * The point in time to which the cloned instance will be rolled back. This parameter is required for a cloned instance. The point in time in the format of 2021-08-13 16:30:00 must be within the last seven days.
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * Instance name, which can contain up to 60 letters, digits, or symbols (_-).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * AZ list when multi-AZ deployment is enabled. For the specific purchasable versions which support multi-AZ deployment, please see the return result of the `DescribeSpecInfo` API. Notes: 1. Nodes of a multi-AZ instance must be deployed across three AZs. 2. To ensure a successful cross-AZ switch, you should not deploy most of the nodes to the same AZ. (For example, a three-node sharded cluster instance does not support deploying two or more nodes in the same AZ.) 3. MongoDB 4.2 and later versions do not support multi-AZ deployment. 4. Read-Only and disaster recovery instances do not support multi-AZ deployment. 5. Instances in the classic network do not support multi-AZ deployment.
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * The number of mongos CPUs, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * The size of mongos memory, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API.
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * The number of mongos routers, which is required for a sharded cluster instance of MongoDB 4.2 WiredTiger. For the specific purchasable versions supported, please see the return result of the `DescribeSpecInfo` API. Note: please purchase 3-32 mongos routers for high availability.
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * Number of read-only nodes. Value range: 2-7.
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * The AZ where the read-only node is deployed
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * The AZ where the hidden node resides. It is required for cross-AZ instances.
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_
