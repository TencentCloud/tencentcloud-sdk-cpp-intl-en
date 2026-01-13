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
                     * 获取 - Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each replica set.
 - Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each shard.
                     * @return NodeNum  - Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each replica set.
 - Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each shard.
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置 - Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each replica set.
 - Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each shard.
                     * @param _nodeNum  - Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each replica set.
 - Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each shard.
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
                     * 获取Instance memory size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain specific saleable memory specifications.
                     * @return Memory Instance memory size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain specific saleable memory specifications.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance memory size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain specific saleable memory specifications.
                     * @param _memory Instance memory size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain specific saleable memory specifications.
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
                     * 获取Instance disk size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * @return Volume Instance disk size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Instance disk size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     * @param _volume Instance disk size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
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
                     * 获取Refers to version information. The [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain detailed information about the supported versions.
- MONGO_40_WT: version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
                     * @return MongoVersion Refers to version information. The [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain detailed information about the supported versions.
- MONGO_40_WT: version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置Refers to version information. The [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain detailed information about the supported versions.
- MONGO_40_WT: version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
                     * @param _mongoVersion Refers to version information. The [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain detailed information about the supported versions.
- MONGO_40_WT: version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
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
                     * 获取Number of instances. The minimum value is 1, and the maximum value is 30.
                     * @return GoodsNum Number of instances. The minimum value is 1, and the maximum value is 30.
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. The minimum value is 1, and the maximum value is 30.
                     * @param _goodsNum Number of instances. The minimum value is 1, and the maximum value is 30.
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
                     * 获取AZ information. Format: ap-guangzhou-2.
 - Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the specific information.
 - This parameter indicates the primary AZ. If multi-AZ deployment is adopted, the value of Zone should be one of the values of AvailabilityZoneList.
                     * @return Zone AZ information. Format: ap-guangzhou-2.
 - Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the specific information.
 - This parameter indicates the primary AZ. If multi-AZ deployment is adopted, the value of Zone should be one of the values of AvailabilityZoneList.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information. Format: ap-guangzhou-2.
 - Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the specific information.
 - This parameter indicates the primary AZ. If multi-AZ deployment is adopted, the value of Zone should be one of the values of AvailabilityZoneList.
                     * @param _zone AZ information. Format: ap-guangzhou-2.
 - Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the specific information.
 - This parameter indicates the primary AZ. If multi-AZ deployment is adopted, the value of Zone should be one of the values of AvailabilityZoneList.
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
                     * 获取Specifies the purchase duration during the instance purchase, in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * @return Period Specifies the purchase duration during the instance purchase, in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Specifies the purchase duration during the instance purchase, in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     * @param _period Specifies the purchase duration during the instance purchase, in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
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
                     * 获取Product specification type.
 - HIO10G: general high-I/O 10GE type.
 - HCD: cloud disk type.
                     * @return MachineCode Product specification type.
 - HIO10G: general high-I/O 10GE type.
 - HCD: cloud disk type.
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置Product specification type.
 - HIO10G: general high-I/O 10GE type.
 - HCD: cloud disk type.
                     * @param _machineCode Product specification type.
 - HIO10G: general high-I/O 10GE type.
 - HCD: cloud disk type.
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
                     * 获取Instance architecture type.
 - REPLSET: replica set.
 - SHARD: sharded cluster.
                     * @return ClusterType Instance architecture type.
 - REPLSET: replica set.
 - SHARD: sharded cluster.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Instance architecture type.
 - REPLSET: replica set.
 - SHARD: sharded cluster.
                     * @param _clusterType Instance architecture type.
 - REPLSET: replica set.
 - SHARD: sharded cluster.
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
                     * 获取 - Specifies the number of replica sets during replica set instance creation. This parameter can only be set to 1.
 - Specifies the number of shards during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.
                     * @return ReplicateSetNum  - Specifies the number of replica sets during replica set instance creation. This parameter can only be set to 1.
 - Specifies the number of shards during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置 - Specifies the number of replica sets during replica set instance creation. This parameter can only be set to 1.
 - Specifies the number of shards during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.
                     * @param _replicateSetNum  - Specifies the number of replica sets during replica set instance creation. This parameter can only be set to 1.
 - Specifies the number of shards during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.
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
                     * 获取Project ID.  - The default project is used if this parameter is not specified.
 - The project ID can be obtained on the [project management page in the TencentDB for MongoDB console](https://console.cloud.tencent.com/project).
                     * @return ProjectId Project ID.  - The default project is used if this parameter is not specified.
 - The project ID can be obtained on the [project management page in the TencentDB for MongoDB console](https://console.cloud.tencent.com/project).
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.  - The default project is used if this parameter is not specified.
 - The project ID can be obtained on the [project management page in the TencentDB for MongoDB console](https://console.cloud.tencent.com/project).
                     * @param _projectId Project ID.  - The default project is used if this parameter is not specified.
 - The project ID can be obtained on the [project management page in the TencentDB for MongoDB console](https://console.cloud.tencent.com/project).
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
                     * 获取VPC ID.
- Only VPC configuration is supported, and a VPC in the same region as the instance should be selected. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available VPC ID.
- After successful instance creation, VPCs can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * @return VpcId VPC ID.
- Only VPC configuration is supported, and a VPC in the same region as the instance should be selected. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available VPC ID.
- After successful instance creation, VPCs can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
- Only VPC configuration is supported, and a VPC in the same region as the instance should be selected. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available VPC ID.
- After successful instance creation, VPCs can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * @param _vpcId VPC ID.
- Only VPC configuration is supported, and a VPC in the same region as the instance should be selected. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available VPC ID.
- After successful instance creation, VPCs can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
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
                     * 获取Subnet ID of the VPC.
- A subnet should be specified within the selected VPC. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available subnet ID.
- After successful instance creation, VPCs and subnets can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * @return SubnetId Subnet ID of the VPC.
- A subnet should be specified within the selected VPC. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available subnet ID.
- After successful instance creation, VPCs and subnets can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the VPC.
- A subnet should be specified within the selected VPC. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available subnet ID.
- After successful instance creation, VPCs and subnets can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     * @param _subnetId Subnet ID of the VPC.
- A subnet should be specified within the selected VPC. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available subnet ID.
- After successful instance creation, VPCs and subnets can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
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
                     * 获取Instance password. The requirements are as follows:
 - The number of characters should be in the range of [8, 32].
 - Characters within the ranges [A,Z], [a,z], and [0,9] are allowed.
 - Special characters that can be entered include exclamation marks (!), at signs (@), number signs (#), percent signs (%), carets (^), asterisks (\*), brackets (()), and underscores (_).
 - It cannot contain only the same letters or digits.
                     * @return Password Instance password. The requirements are as follows:
 - The number of characters should be in the range of [8, 32].
 - Characters within the ranges [A,Z], [a,z], and [0,9] are allowed.
 - Special characters that can be entered include exclamation marks (!), at signs (@), number signs (#), percent signs (%), carets (^), asterisks (\*), brackets (()), and underscores (_).
 - It cannot contain only the same letters or digits.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password. The requirements are as follows:
 - The number of characters should be in the range of [8, 32].
 - Characters within the ranges [A,Z], [a,z], and [0,9] are allowed.
 - Special characters that can be entered include exclamation marks (!), at signs (@), number signs (#), percent signs (%), carets (^), asterisks (\*), brackets (()), and underscores (_).
 - It cannot contain only the same letters or digits.
                     * @param _password Instance password. The requirements are as follows:
 - The number of characters should be in the range of [8, 32].
 - Characters within the ranges [A,Z], [a,z], and [0,9] are allowed.
 - Special characters that can be entered include exclamation marks (!), at signs (@), number signs (#), percent signs (%), carets (^), asterisks (\*), brackets (()), and underscores (_).
 - It cannot contain only the same letters or digits.
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
                     * 获取Automatic renewal flag.
 - 0: no automatic renewal.
 - 1: automatic renewal.
                     * @return AutoRenewFlag Automatic renewal flag.
 - 0: no automatic renewal.
 - 1: automatic renewal.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Automatic renewal flag.
 - 0: no automatic renewal.
 - 1: automatic renewal.
                     * @param _autoRenewFlag Automatic renewal flag.
 - 0: no automatic renewal.
 - 1: automatic renewal.
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
                     * 获取Whether to automatically select a voucher.
 - 1: yes.
 - 0: no. Default value: 0.
                     * @return AutoVoucher Whether to automatically select a voucher.
 - 1: yes.
 - 0: no. Default value: 0.
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher.
 - 1: yes.
 - 0: no. Default value: 0.
                     * @param _autoVoucher Whether to automatically select a voucher.
 - 1: yes.
 - 0: no. Default value: 0.
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
                     * 获取Instance type.
- 1: formal instance.
- 3: read-only instance.
- 4: disaster recovery instance.
- 5: cloned instance. Note: For a cloned instance, RestoreTime is required.
                     * @return Clone Instance type.
- 1: formal instance.
- 3: read-only instance.
- 4: disaster recovery instance.
- 5: cloned instance. Note: For a cloned instance, RestoreTime is required.
                     * 
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置Instance type.
- 1: formal instance.
- 3: read-only instance.
- 4: disaster recovery instance.
- 5: cloned instance. Note: For a cloned instance, RestoreTime is required.
                     * @param _clone Instance type.
- 1: formal instance.
- 3: read-only instance.
- 4: disaster recovery instance.
- 5: cloned instance. Note: For a cloned instance, RestoreTime is required.
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
                     * 获取Parent instance ID.
- This parameter is required when the value of the **Clone** parameter is set to 3 or 4, indicating a read-only or disaster recovery instance.
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the parent instance ID from the instance list.
                     * @return Father Parent instance ID.
- This parameter is required when the value of the **Clone** parameter is set to 3 or 4, indicating a read-only or disaster recovery instance.
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the parent instance ID from the instance list.
                     * 
                     */
                    std::string GetFather() const;

                    /**
                     * 设置Parent instance ID.
- This parameter is required when the value of the **Clone** parameter is set to 3 or 4, indicating a read-only or disaster recovery instance.
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the parent instance ID from the instance list.
                     * @param _father Parent instance ID.
- This parameter is required when the value of the **Clone** parameter is set to 3 or 4, indicating a read-only or disaster recovery instance.
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the parent instance ID from the instance list.
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
                     * 获取Security group ID. Log in to the [security group console](https://console.cloud.tencent.com/vpc/security-group) to obtain the ID of the security group in the same region as the database instance.
                     * @return SecurityGroup Security group ID. Log in to the [security group console](https://console.cloud.tencent.com/vpc/security-group) to obtain the ID of the security group in the same region as the database instance.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置Security group ID. Log in to the [security group console](https://console.cloud.tencent.com/vpc/security-group) to obtain the ID of the security group in the same region as the database instance.
                     * @param _securityGroup Security group ID. Log in to the [security group console](https://console.cloud.tencent.com/vpc/security-group) to obtain the ID of the security group in the same region as the database instance.
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
                     * 获取Rollback time of the cloned instance. It is required when the Clone value is 5 or 6. - This parameter is required for cloned instances. Format: 2021-08-13 16:30:00. - Rollback time range: Only data within the last 7 days can be rolled back.
                     * @return RestoreTime Rollback time of the cloned instance. It is required when the Clone value is 5 or 6. - This parameter is required for cloned instances. Format: 2021-08-13 16:30:00. - Rollback time range: Only data within the last 7 days can be rolled back.
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置Rollback time of the cloned instance. It is required when the Clone value is 5 or 6. - This parameter is required for cloned instances. Format: 2021-08-13 16:30:00. - Rollback time range: Only data within the last 7 days can be rolled back.
                     * @param _restoreTime Rollback time of the cloned instance. It is required when the Clone value is 5 or 6. - This parameter is required for cloned instances. Format: 2021-08-13 16:30:00. - Rollback time range: Only data within the last 7 days can be rolled back.
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
                     * 获取Instance name. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported, with a length of 128 characters. When database instances are purchased in batches, the automatic ascending feature is supported through the custom naming pattern string and numeric suffix to set instance names efficiently.
- Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for **lnstanceName**. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.
- Custom starting number mode: prefix + {R:x} (x is the custom starting number). Prefix{R:x} is required for **InstanceName**. For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be sequentially named cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.
- Composite pattern string: prefix 1{R:x} + prefix 2{R:y}+ ⋯ + fixed suffix, where x and y are the starting numbers of each prefix. A composite pattern string is required for **instanceName**. For example, cmgo{R:10}\_node{R:12}\_db. If the batch purchase quantity is set to 5, the instances will be sequentially named cmgo10\_node12\_db, cmgo11\_node13\_db, cmgo12\_node14\_db, cmgo13\_node15\_db, and cmgo14\_node16\_db.
                     * @return InstanceName Instance name. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported, with a length of 128 characters. When database instances are purchased in batches, the automatic ascending feature is supported through the custom naming pattern string and numeric suffix to set instance names efficiently.
- Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for **lnstanceName**. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.
- Custom starting number mode: prefix + {R:x} (x is the custom starting number). Prefix{R:x} is required for **InstanceName**. For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be sequentially named cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.
- Composite pattern string: prefix 1{R:x} + prefix 2{R:y}+ ⋯ + fixed suffix, where x and y are the starting numbers of each prefix. A composite pattern string is required for **instanceName**. For example, cmgo{R:10}\_node{R:12}\_db. If the batch purchase quantity is set to 5, the instances will be sequentially named cmgo10\_node12\_db, cmgo11\_node13\_db, cmgo12\_node14\_db, cmgo13\_node15\_db, and cmgo14\_node16\_db.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported, with a length of 128 characters. When database instances are purchased in batches, the automatic ascending feature is supported through the custom naming pattern string and numeric suffix to set instance names efficiently.
- Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for **lnstanceName**. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.
- Custom starting number mode: prefix + {R:x} (x is the custom starting number). Prefix{R:x} is required for **InstanceName**. For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be sequentially named cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.
- Composite pattern string: prefix 1{R:x} + prefix 2{R:y}+ ⋯ + fixed suffix, where x and y are the starting numbers of each prefix. A composite pattern string is required for **instanceName**. For example, cmgo{R:10}\_node{R:12}\_db. If the batch purchase quantity is set to 5, the instances will be sequentially named cmgo10\_node12\_db, cmgo11\_node13\_db, cmgo12\_node14\_db, cmgo13\_node15\_db, and cmgo14\_node16\_db.
                     * @param _instanceName Instance name. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported, with a length of 128 characters. When database instances are purchased in batches, the automatic ascending feature is supported through the custom naming pattern string and numeric suffix to set instance names efficiently.
- Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for **lnstanceName**. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.
- Custom starting number mode: prefix + {R:x} (x is the custom starting number). Prefix{R:x} is required for **InstanceName**. For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be sequentially named cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.
- Composite pattern string: prefix 1{R:x} + prefix 2{R:y}+ ⋯ + fixed suffix, where x and y are the starting numbers of each prefix. A composite pattern string is required for **instanceName**. For example, cmgo{R:10}\_node{R:12}\_db. If the batch purchase quantity is set to 5, the instances will be sequentially named cmgo10\_node12\_db, cmgo11\_node13\_db, cmgo12\_node14\_db, cmgo13\_node15\_db, and cmgo14\_node16\_db.
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
                     * 获取Specifies the list of AZs during multi-AZ deployment of TencentDB for MongoDB instances.
 - For instances in multi-AZ deployment mode, the **Zone** parameter specifies the primary AZ, and **AvailabilityZoneList** specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].
 - The [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain AZs planned for TencentDB for MongoDB instances in different regions, helping you specify valid AZs.
 - Nodes in multi-AZ deployment mode can only be deployed in 3 different AZs. Deploying most nodes of a cluster in the same AZ is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same AZ.
                     * @return AvailabilityZoneList Specifies the list of AZs during multi-AZ deployment of TencentDB for MongoDB instances.
 - For instances in multi-AZ deployment mode, the **Zone** parameter specifies the primary AZ, and **AvailabilityZoneList** specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].
 - The [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain AZs planned for TencentDB for MongoDB instances in different regions, helping you specify valid AZs.
 - Nodes in multi-AZ deployment mode can only be deployed in 3 different AZs. Deploying most nodes of a cluster in the same AZ is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same AZ.
                     * 
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置Specifies the list of AZs during multi-AZ deployment of TencentDB for MongoDB instances.
 - For instances in multi-AZ deployment mode, the **Zone** parameter specifies the primary AZ, and **AvailabilityZoneList** specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].
 - The [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain AZs planned for TencentDB for MongoDB instances in different regions, helping you specify valid AZs.
 - Nodes in multi-AZ deployment mode can only be deployed in 3 different AZs. Deploying most nodes of a cluster in the same AZ is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same AZ.
                     * @param _availabilityZoneList Specifies the list of AZs during multi-AZ deployment of TencentDB for MongoDB instances.
 - For instances in multi-AZ deployment mode, the **Zone** parameter specifies the primary AZ, and **AvailabilityZoneList** specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].
 - The [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain AZs planned for TencentDB for MongoDB instances in different regions, helping you specify valid AZs.
 - Nodes in multi-AZ deployment mode can only be deployed in 3 different AZs. Deploying most nodes of a cluster in the same AZ is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same AZ.
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
                     * 获取Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.
                     * @return MongosCpu Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.
                     * @param _mongosCpu Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.
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
                     * 获取Mongos node memory size.
 - This parameter is required during sharded cluster instance purchase.
 - Unit: GB. 1-core 2GB, 2-core 4GB, 4-core 8GB, 8-core 16GB, and 16-core 32GB are supported.
                     * @return MongosMemory Mongos node memory size.
 - This parameter is required during sharded cluster instance purchase.
 - Unit: GB. 1-core 2GB, 2-core 4GB, 4-core 8GB, 8-core 16GB, and 16-core 32GB are supported.
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置Mongos node memory size.
 - This parameter is required during sharded cluster instance purchase.
 - Unit: GB. 1-core 2GB, 2-core 4GB, 4-core 8GB, 8-core 16GB, and 16-core 32GB are supported.
                     * @param _mongosMemory Mongos node memory size.
 - This parameter is required during sharded cluster instance purchase.
 - Unit: GB. 1-core 2GB, 2-core 4GB, 4-core 8GB, 8-core 16GB, and 16-core 32GB are supported.
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
                     * 获取Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.
 - For instances in single-AZ deployment mode, the value range is [3,32].
 - For instances in multi-AZ deployment mode, the value range is [6,32].
                     * @return MongosNodeNum Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.
 - For instances in single-AZ deployment mode, the value range is [3,32].
 - For instances in multi-AZ deployment mode, the value range is [6,32].
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.
 - For instances in single-AZ deployment mode, the value range is [3,32].
 - For instances in multi-AZ deployment mode, the value range is [6,32].
                     * @param _mongosNodeNum Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.
 - For instances in single-AZ deployment mode, the value range is [3,32].
 - For instances in multi-AZ deployment mode, the value range is [6,32].
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
                     * 获取Number of read-only nodes. Value ranges: [0,5].
                     * @return ReadonlyNodeNum Number of read-only nodes. Value ranges: [0,5].
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置Number of read-only nodes. Value ranges: [0,5].
                     * @param _readonlyNodeNum Number of read-only nodes. Value ranges: [0,5].
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
                     * 获取Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when **ReadonlyNodeNum** is not set to **0**.
                     * @return ReadonlyNodeAvailabilityZoneList Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when **ReadonlyNodeNum** is not set to **0**.
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when **ReadonlyNodeNum** is not set to **0**.
                     * @param _readonlyNodeAvailabilityZoneList Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when **ReadonlyNodeNum** is not set to **0**.
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
                     * 获取AZ of the hidden node. This parameter is required for instances in multi-AZ deployment mode.
                     * @return HiddenZone AZ of the hidden node. This parameter is required for instances in multi-AZ deployment mode.
                     * 
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置AZ of the hidden node. This parameter is required for instances in multi-AZ deployment mode.
                     * @param _hiddenZone AZ of the hidden node. This parameter is required for instances in multi-AZ deployment mode.
                     * 
                     */
                    void SetHiddenZone(const std::string& _hiddenZone);

                    /**
                     * 判断参数 HiddenZone 是否已赋值
                     * @return HiddenZone 是否已赋值
                     * 
                     */
                    bool HiddenZoneHasBeenSet() const;

                    /**
                     * 获取Parameter template ID.
- A parameter template is a collection of predefined parameter values that can be used to quickly configure new MongoDB instances. Proper use of parameter templates can significantly enhance the deployment efficiency and operational performance of the database.
- The [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) API can be called to obtain the parameter template ID. Select the parameter template ID corresponding to the instance version and architecture.
                     * @return ParamTemplateId Parameter template ID.
- A parameter template is a collection of predefined parameter values that can be used to quickly configure new MongoDB instances. Proper use of parameter templates can significantly enhance the deployment efficiency and operational performance of the database.
- The [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) API can be called to obtain the parameter template ID. Select the parameter template ID corresponding to the instance version and architecture.
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置Parameter template ID.
- A parameter template is a collection of predefined parameter values that can be used to quickly configure new MongoDB instances. Proper use of parameter templates can significantly enhance the deployment efficiency and operational performance of the database.
- The [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) API can be called to obtain the parameter template ID. Select the parameter template ID corresponding to the instance version and architecture.
                     * @param _paramTemplateId Parameter template ID.
- A parameter template is a collection of predefined parameter values that can be used to quickly configure new MongoDB instances. Proper use of parameter templates can significantly enhance the deployment efficiency and operational performance of the database.
- The [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) API can be called to obtain the parameter template ID. Select the parameter template ID corresponding to the instance version and architecture.
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                private:

                    /**
                     *  - Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each replica set.
 - Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum number of nodes supported for each shard.
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Instance memory size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain specific saleable memory specifications.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size. Unit: GB. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Refers to version information. The [DescribeSpecInfo](https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain detailed information about the supported versions.
- MONGO_40_WT: version of the MongoDB 4.0 WiredTiger storage engine.
- MONGO_42_WT: version of the MongoDB 4.2 WiredTiger storage engine.
- MONGO_44_WT: version of the MongoDB 4.4 WiredTiger storage engine.
- MONGO_50_WT: version of the MongoDB 5.0 WiredTiger storage engine.
- MONGO_60_WT: version of the MongoDB 6.0 WiredTiger storage engine.
- MONGO_70_WT: version of the MongoDB 7.0 WiredTiger storage engine.
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * Number of instances. The minimum value is 1, and the maximum value is 30.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * AZ information. Format: ap-guangzhou-2.
 - Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to obtain the specific information.
 - This parameter indicates the primary AZ. If multi-AZ deployment is adopted, the value of Zone should be one of the values of AvailabilityZoneList.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Specifies the purchase duration during the instance purchase, in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Product specification type.
 - HIO10G: general high-I/O 10GE type.
 - HCD: cloud disk type.
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * Instance architecture type.
 - REPLSET: replica set.
 - SHARD: sharded cluster.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     *  - Specifies the number of replica sets during replica set instance creation. This parameter can only be set to 1.
 - Specifies the number of shards during sharded cluster instance creation. Call the [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * Project ID.  - The default project is used if this parameter is not specified.
 - The project ID can be obtained on the [project management page in the TencentDB for MongoDB console](https://console.cloud.tencent.com/project).
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * VPC ID.
- Only VPC configuration is supported, and a VPC in the same region as the instance should be selected. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available VPC ID.
- After successful instance creation, VPCs can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the VPC.
- A subnet should be specified within the selected VPC. Log in to the [VPC console](https://console.cloud.tencent.com/vpc) to obtain the available subnet ID.
- After successful instance creation, VPCs and subnets can be changed. For detailed operations, see [Changing the Network](https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1).
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance password. The requirements are as follows:
 - The number of characters should be in the range of [8, 32].
 - Characters within the ranges [A,Z], [a,z], and [0,9] are allowed.
 - Special characters that can be entered include exclamation marks (!), at signs (@), number signs (#), percent signs (%), carets (^), asterisks (\*), brackets (()), and underscores (_).
 - It cannot contain only the same letters or digits.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Instance tag information.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Automatic renewal flag.
 - 0: no automatic renewal.
 - 1: automatic renewal.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether to automatically select a voucher.
 - 1: yes.
 - 0: no. Default value: 0.
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Instance type.
- 1: formal instance.
- 3: read-only instance.
- 4: disaster recovery instance.
- 5: cloned instance. Note: For a cloned instance, RestoreTime is required.
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * Parent instance ID.
- This parameter is required when the value of the **Clone** parameter is set to 3 or 4, indicating a read-only or disaster recovery instance.
- Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the parent instance ID from the instance list.
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * Security group ID. Log in to the [security group console](https://console.cloud.tencent.com/vpc/security-group) to obtain the ID of the security group in the same region as the database instance.
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Rollback time of the cloned instance. It is required when the Clone value is 5 or 6. - This parameter is required for cloned instances. Format: 2021-08-13 16:30:00. - Rollback time range: Only data within the last 7 days can be rolled back.
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * Instance name. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported, with a length of 128 characters. When database instances are purchased in batches, the automatic ascending feature is supported through the custom naming pattern string and numeric suffix to set instance names efficiently.
- Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for **lnstanceName**. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.
- Custom starting number mode: prefix + {R:x} (x is the custom starting number). Prefix{R:x} is required for **InstanceName**. For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be sequentially named cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.
- Composite pattern string: prefix 1{R:x} + prefix 2{R:y}+ ⋯ + fixed suffix, where x and y are the starting numbers of each prefix. A composite pattern string is required for **instanceName**. For example, cmgo{R:10}\_node{R:12}\_db. If the batch purchase quantity is set to 5, the instances will be sequentially named cmgo10\_node12\_db, cmgo11\_node13\_db, cmgo12\_node14\_db, cmgo13\_node15\_db, and cmgo14\_node16\_db.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Specifies the list of AZs during multi-AZ deployment of TencentDB for MongoDB instances.
 - For instances in multi-AZ deployment mode, the **Zone** parameter specifies the primary AZ, and **AvailabilityZoneList** specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].
 - The [DescribeSpecInfo](https://intl.cloud.tencent.com/document/product/240/38567?from_cn_redirect=1) API can be called to obtain AZs planned for TencentDB for MongoDB instances in different regions, helping you specify valid AZs.
 - Nodes in multi-AZ deployment mode can only be deployed in 3 different AZs. Deploying most nodes of a cluster in the same AZ is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same AZ.
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * Mongos node memory size.
 - This parameter is required during sharded cluster instance purchase.
 - Unit: GB. 1-core 2GB, 2-core 4GB, 4-core 8GB, 8-core 16GB, and 16-core 32GB are supported.
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.
 - For instances in single-AZ deployment mode, the value range is [3,32].
 - For instances in multi-AZ deployment mode, the value range is [6,32].
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * Number of read-only nodes. Value ranges: [0,5].
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when **ReadonlyNodeNum** is not set to **0**.
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * AZ of the hidden node. This parameter is required for instances in multi-AZ deployment mode.
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                    /**
                     * Parameter template ID.
- A parameter template is a collection of predefined parameter values that can be used to quickly configure new MongoDB instances. Proper use of parameter templates can significantly enhance the deployment efficiency and operational performance of the database.
- The [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) API can be called to obtain the parameter template ID. Select the parameter template ID corresponding to the instance version and architecture.
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEREQUEST_H_
