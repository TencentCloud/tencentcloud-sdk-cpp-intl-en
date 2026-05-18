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
                     * 获取<p>Instance memory size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable memory specifications.</p>
                     * @return Memory <p>Instance memory size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable memory specifications.</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable memory specifications.</p>
                     * @param _memory <p>Instance memory size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable memory specifications.</p>
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
                     * 获取<p>Instance disk size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.</p>
                     * @return Volume <p>Instance disk size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.</p>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>Instance disk size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.</p>
                     * @param _volume <p>Instance disk size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.</p>
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
                     * 获取<ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * @return ReplicateSetNum <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * 
                     */
                    uint64_t GetReplicateSetNum() const;

                    /**
                     * 设置<ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * @param _replicateSetNum <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
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
                     * 获取<ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * @return NodeNum <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * @param _nodeNum <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
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
                     * 获取<p>Refers to version information. For supported versions, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to query.</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger engine version.</li></ul>
                     * @return MongoVersion <p>Refers to version information. For supported versions, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to query.</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger engine version.</li></ul>
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置<p>Refers to version information. For supported versions, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to query.</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger engine version.</li></ul>
                     * @param _mongoVersion <p>Refers to version information. For supported versions, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to query.</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger engine version.</li></ul>
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
                     * 获取<p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * @return MachineCode <p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * 
                     */
                    std::string GetMachineCode() const;

                    /**
                     * 设置<p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     * @param _machineCode <p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
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
                     * 获取<p>Number of instances. The minimum value is 1, and the maximum value is 30.</p>
                     * @return GoodsNum <p>Number of instances. The minimum value is 1, and the maximum value is 30.</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Number of instances. The minimum value is 1, and the maximum value is 30.</p>
                     * @param _goodsNum <p>Number of instances. The minimum value is 1, and the maximum value is 30.</p>
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
                     * 获取<p>AZ information. The input format must be ap-guangzhou-2.</p><ul><li>For details, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to obtain them.</li><li>This parameter is the primary AZ. If multi-AZ deployment is used, Zone must be one of AvailabilityZoneList.</li></ul>
                     * @return Zone <p>AZ information. The input format must be ap-guangzhou-2.</p><ul><li>For details, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to obtain them.</li><li>This parameter is the primary AZ. If multi-AZ deployment is used, Zone must be one of AvailabilityZoneList.</li></ul>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ information. The input format must be ap-guangzhou-2.</p><ul><li>For details, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to obtain them.</li><li>This parameter is the primary AZ. If multi-AZ deployment is used, Zone must be one of AvailabilityZoneList.</li></ul>
                     * @param _zone <p>AZ information. The input format must be ap-guangzhou-2.</p><ul><li>For details, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to obtain them.</li><li>This parameter is the primary AZ. If multi-AZ deployment is used, Zone must be one of AvailabilityZoneList.</li></ul>
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
                     * 获取<p>Instance architecture type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * @return ClusterType <p>Instance architecture type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Instance architecture type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * @param _clusterType <p>Instance architecture type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
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
                     * 获取<p>VPC ID.</p><ul><li>Only supports configuration of private networks. A private network in the same region as the instance must be selected. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain a usable VPC ID.</li><li>After successful instance creation, VPC replacement is allowed. For detailed operations, see <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Changing the Network</a>.</li></ul>
                     * @return VpcId <p>VPC ID.</p><ul><li>Only supports configuration of private networks. A private network in the same region as the instance must be selected. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain a usable VPC ID.</li><li>After successful instance creation, VPC replacement is allowed. For detailed operations, see <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Changing the Network</a>.</li></ul>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID.</p><ul><li>Only supports configuration of private networks. A private network in the same region as the instance must be selected. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain a usable VPC ID.</li><li>After successful instance creation, VPC replacement is allowed. For detailed operations, see <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Changing the Network</a>.</li></ul>
                     * @param _vpcId <p>VPC ID.</p><ul><li>Only supports configuration of private networks. A private network in the same region as the instance must be selected. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain a usable VPC ID.</li><li>After successful instance creation, VPC replacement is allowed. For detailed operations, see <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Changing the Network</a>.</li></ul>
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
                     * 获取<p>Subnet ID of the VPC.</p><ul><li>You must specify a subnet within the selected private network. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain the subnet ID.</li><li>After the instance is successfully created, replacement of the private network and subnet is allowed. For detailed operations, please refer to <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Network Change</a>.</li></ul>
                     * @return SubnetId <p>Subnet ID of the VPC.</p><ul><li>You must specify a subnet within the selected private network. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain the subnet ID.</li><li>After the instance is successfully created, replacement of the private network and subnet is allowed. For detailed operations, please refer to <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Network Change</a>.</li></ul>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID of the VPC.</p><ul><li>You must specify a subnet within the selected private network. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain the subnet ID.</li><li>After the instance is successfully created, replacement of the private network and subnet is allowed. For detailed operations, please refer to <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Network Change</a>.</li></ul>
                     * @param _subnetId <p>Subnet ID of the VPC.</p><ul><li>You must specify a subnet within the selected private network. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain the subnet ID.</li><li>After the instance is successfully created, replacement of the private network and subnet is allowed. For detailed operations, please refer to <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Network Change</a>.</li></ul>
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
                     * 获取<p>Instance password. The requirements are as follows:</p><ul><li>Character count is [8,32].</li><li>Enter characters within [A,Z], [a,z], [0,9].</li><li>Special characters include: exclamation mark "!", at "@", pound sign "#", percent sign "%", caret "^", asterisk "*", brackets "()", underscore "_".</li><li>Cannot set a single letter or number.</li></ul>
                     * @return Password <p>Instance password. The requirements are as follows:</p><ul><li>Character count is [8,32].</li><li>Enter characters within [A,Z], [a,z], [0,9].</li><li>Special characters include: exclamation mark "!", at "@", pound sign "#", percent sign "%", caret "^", asterisk "*", brackets "()", underscore "_".</li><li>Cannot set a single letter or number.</li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Instance password. The requirements are as follows:</p><ul><li>Character count is [8,32].</li><li>Enter characters within [A,Z], [a,z], [0,9].</li><li>Special characters include: exclamation mark "!", at "@", pound sign "#", percent sign "%", caret "^", asterisk "*", brackets "()", underscore "_".</li><li>Cannot set a single letter or number.</li></ul>
                     * @param _password <p>Instance password. The requirements are as follows:</p><ul><li>Character count is [8,32].</li><li>Enter characters within [A,Z], [a,z], [0,9].</li><li>Special characters include: exclamation mark "!", at "@", pound sign "#", percent sign "%", caret "^", asterisk "*", brackets "()", underscore "_".</li><li>Cannot set a single letter or number.</li></ul>
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
                     * 获取<p>Project ID.</p><ul><li>If this parameter is not set, the default project is used.</li><li>You can obtain the project ID on the <a href="https://console.cloud.tencent.com/project">MongoDB console project management</a> page.</li></ul>
                     * @return ProjectId <p>Project ID.</p><ul><li>If this parameter is not set, the default project is used.</li><li>You can obtain the project ID on the <a href="https://console.cloud.tencent.com/project">MongoDB console project management</a> page.</li></ul>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p><ul><li>If this parameter is not set, the default project is used.</li><li>You can obtain the project ID on the <a href="https://console.cloud.tencent.com/project">MongoDB console project management</a> page.</li></ul>
                     * @param _projectId <p>Project ID.</p><ul><li>If this parameter is not set, the default project is used.</li><li>You can obtain the project ID on the <a href="https://console.cloud.tencent.com/project">MongoDB console project management</a> page.</li></ul>
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
                     * 获取<p>Instance tag information.</p>
                     * @return Tags <p>Instance tag information.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>Instance tag information.</p>
                     * @param _tags <p>Instance tag information.</p>
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
                     * 获取<p>Instance type.</p><ul><li>1: Formal instance.</li><li>3: Read-only instance.</li><li>4: Disaster recovery instance.</li><li>5: Clone instance. Note: RestoreTime is a required item when you clone an instance.</li></ul>
                     * @return Clone <p>Instance type.</p><ul><li>1: Formal instance.</li><li>3: Read-only instance.</li><li>4: Disaster recovery instance.</li><li>5: Clone instance. Note: RestoreTime is a required item when you clone an instance.</li></ul>
                     * 
                     */
                    int64_t GetClone() const;

                    /**
                     * 设置<p>Instance type.</p><ul><li>1: Formal instance.</li><li>3: Read-only instance.</li><li>4: Disaster recovery instance.</li><li>5: Clone instance. Note: RestoreTime is a required item when you clone an instance.</li></ul>
                     * @param _clone <p>Instance type.</p><ul><li>1: Formal instance.</li><li>3: Read-only instance.</li><li>4: Disaster recovery instance.</li><li>5: Clone instance. Note: RestoreTime is a required item when you clone an instance.</li></ul>
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
                     * 获取<p>Parent instance ID.</p><ul><li>When the <strong>Clone</strong> parameter is 3 or 4, that is, the instance is read-only or a disaster recovery instance, this parameter must be configured.</li><li>Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the parent instance ID in the instance list.</li></ul>
                     * @return Father <p>Parent instance ID.</p><ul><li>When the <strong>Clone</strong> parameter is 3 or 4, that is, the instance is read-only or a disaster recovery instance, this parameter must be configured.</li><li>Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the parent instance ID in the instance list.</li></ul>
                     * 
                     */
                    std::string GetFather() const;

                    /**
                     * 设置<p>Parent instance ID.</p><ul><li>When the <strong>Clone</strong> parameter is 3 or 4, that is, the instance is read-only or a disaster recovery instance, this parameter must be configured.</li><li>Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the parent instance ID in the instance list.</li></ul>
                     * @param _father <p>Parent instance ID.</p><ul><li>When the <strong>Clone</strong> parameter is 3 or 4, that is, the instance is read-only or a disaster recovery instance, this parameter must be configured.</li><li>Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the parent instance ID in the instance list.</li></ul>
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
                     * 获取<p>Security group ID. Log in to the <a href="https://console.cloud.tencent.com/vpc/security-group">security group console</a> to obtain the ID of the security group within the same region as the database instance.</p>
                     * @return SecurityGroup <p>Security group ID. Log in to the <a href="https://console.cloud.tencent.com/vpc/security-group">security group console</a> to obtain the ID of the security group within the same region as the database instance.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>Security group ID. Log in to the <a href="https://console.cloud.tencent.com/vpc/security-group">security group console</a> to obtain the ID of the security group within the same region as the database instance.</p>
                     * @param _securityGroup <p>Security group ID. Log in to the <a href="https://console.cloud.tencent.com/vpc/security-group">security group console</a> to obtain the ID of the security group within the same region as the database instance.</p>
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
                     * 获取<p>Rollback time of the cloned instance.</p><ul><li>This parameter is required for cloned instances. Format: 2021-08-13 16:30:00.</li><li>Rollback time range: Only data within the last 7 days can be rolled back.</li></ul>
                     * @return RestoreTime <p>Rollback time of the cloned instance.</p><ul><li>This parameter is required for cloned instances. Format: 2021-08-13 16:30:00.</li><li>Rollback time range: Only data within the last 7 days can be rolled back.</li></ul>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>Rollback time of the cloned instance.</p><ul><li>This parameter is required for cloned instances. Format: 2021-08-13 16:30:00.</li><li>Rollback time range: Only data within the last 7 days can be rolled back.</li></ul>
                     * @param _restoreTime <p>Rollback time of the cloned instance.</p><ul><li>This parameter is required for cloned instances. Format: 2021-08-13 16:30:00.</li><li>Rollback time range: Only data within the last 7 days can be rolled back.</li></ul>
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
                     * 获取<p>Instance name. Only Chinese, English, digits, underscores (_), and hyphens (-) are supported, with a maximum length of 128 characters. When purchasing database instances in batches, you can efficiently set instance names by using custom pattern strings and automatically ascending numeric suffixes.</p><ul><li>Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for <strong>lnstanceName</strong>. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.</li><li>Custom starting number mode: prefix + {R:x} (x is the custom starting number). <strong>InstanceName</strong> requires "prefix{R:x}". For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.</li><li>Composite pattern string: prefix1{R:x} + prefix2{R:y} + ⋯ + fixed suffix, where x and y are the starting numbers for each prefix. <strong>InstanceName</strong> requires a composite pattern string. For example, cmgo{R:10}_node{R:12}_db. If the batch purchase quantity is set to 5, the instance names will be cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, and cmgo14_node16_db.</li></ul>
                     * @return InstanceName <p>Instance name. Only Chinese, English, digits, underscores (_), and hyphens (-) are supported, with a maximum length of 128 characters. When purchasing database instances in batches, you can efficiently set instance names by using custom pattern strings and automatically ascending numeric suffixes.</p><ul><li>Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for <strong>lnstanceName</strong>. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.</li><li>Custom starting number mode: prefix + {R:x} (x is the custom starting number). <strong>InstanceName</strong> requires "prefix{R:x}". For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.</li><li>Composite pattern string: prefix1{R:x} + prefix2{R:y} + ⋯ + fixed suffix, where x and y are the starting numbers for each prefix. <strong>InstanceName</strong> requires a composite pattern string. For example, cmgo{R:10}_node{R:12}_db. If the batch purchase quantity is set to 5, the instance names will be cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, and cmgo14_node16_db.</li></ul>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name. Only Chinese, English, digits, underscores (_), and hyphens (-) are supported, with a maximum length of 128 characters. When purchasing database instances in batches, you can efficiently set instance names by using custom pattern strings and automatically ascending numeric suffixes.</p><ul><li>Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for <strong>lnstanceName</strong>. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.</li><li>Custom starting number mode: prefix + {R:x} (x is the custom starting number). <strong>InstanceName</strong> requires "prefix{R:x}". For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.</li><li>Composite pattern string: prefix1{R:x} + prefix2{R:y} + ⋯ + fixed suffix, where x and y are the starting numbers for each prefix. <strong>InstanceName</strong> requires a composite pattern string. For example, cmgo{R:10}_node{R:12}_db. If the batch purchase quantity is set to 5, the instance names will be cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, and cmgo14_node16_db.</li></ul>
                     * @param _instanceName <p>Instance name. Only Chinese, English, digits, underscores (_), and hyphens (-) are supported, with a maximum length of 128 characters. When purchasing database instances in batches, you can efficiently set instance names by using custom pattern strings and automatically ascending numeric suffixes.</p><ul><li>Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for <strong>lnstanceName</strong>. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.</li><li>Custom starting number mode: prefix + {R:x} (x is the custom starting number). <strong>InstanceName</strong> requires "prefix{R:x}". For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.</li><li>Composite pattern string: prefix1{R:x} + prefix2{R:y} + ⋯ + fixed suffix, where x and y are the starting numbers for each prefix. <strong>InstanceName</strong> requires a composite pattern string. For example, cmgo{R:10}_node{R:12}_db. If the batch purchase quantity is set to 5, the instance names will be cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, and cmgo14_node16_db.</li></ul>
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
                     * 获取<p>For cloud database instances in multi-AZ deployment, specify the availability zone list.</p><ul><li>For instances in multi-AZ deployment mode, the <strong>Zone</strong> parameter specifies the primary AZ, and <strong>AvailabilityZoneList</strong> specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].</li><li>Use the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to access cloud databases and obtain availability zone information planned for different regions, so that you can assign valid AZs.</li><li>Nodes in multi-AZ deployment can only be deployed in 3 different availability zones. Deploying most nodes of a cluster in the same availability zone is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same zone.</li></ul>
                     * @return AvailabilityZoneList <p>For cloud database instances in multi-AZ deployment, specify the availability zone list.</p><ul><li>For instances in multi-AZ deployment mode, the <strong>Zone</strong> parameter specifies the primary AZ, and <strong>AvailabilityZoneList</strong> specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].</li><li>Use the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to access cloud databases and obtain availability zone information planned for different regions, so that you can assign valid AZs.</li><li>Nodes in multi-AZ deployment can only be deployed in 3 different availability zones. Deploying most nodes of a cluster in the same availability zone is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same zone.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAvailabilityZoneList() const;

                    /**
                     * 设置<p>For cloud database instances in multi-AZ deployment, specify the availability zone list.</p><ul><li>For instances in multi-AZ deployment mode, the <strong>Zone</strong> parameter specifies the primary AZ, and <strong>AvailabilityZoneList</strong> specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].</li><li>Use the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to access cloud databases and obtain availability zone information planned for different regions, so that you can assign valid AZs.</li><li>Nodes in multi-AZ deployment can only be deployed in 3 different availability zones. Deploying most nodes of a cluster in the same availability zone is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same zone.</li></ul>
                     * @param _availabilityZoneList <p>For cloud database instances in multi-AZ deployment, specify the availability zone list.</p><ul><li>For instances in multi-AZ deployment mode, the <strong>Zone</strong> parameter specifies the primary AZ, and <strong>AvailabilityZoneList</strong> specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].</li><li>Use the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to access cloud databases and obtain availability zone information planned for different regions, so that you can assign valid AZs.</li><li>Nodes in multi-AZ deployment can only be deployed in 3 different availability zones. Deploying most nodes of a cluster in the same availability zone is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same zone.</li></ul>
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
                     * 获取<p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.</p>
                     * @return MongosCpu <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.</p>
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置<p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.</p>
                     * @param _mongosCpu <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.</p>
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
                     * 获取<p>Mongos node memory size.</p><ul><li>This parameter is required during sharded cluster instance purchase.</li><li>Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores).</li></ul>
                     * @return MongosMemory <p>Mongos node memory size.</p><ul><li>This parameter is required during sharded cluster instance purchase.</li><li>Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores).</li></ul>
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置<p>Mongos node memory size.</p><ul><li>This parameter is required during sharded cluster instance purchase.</li><li>Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores).</li></ul>
                     * @param _mongosMemory <p>Mongos node memory size.</p><ul><li>This parameter is required during sharded cluster instance purchase.</li><li>Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores).</li></ul>
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
                     * 获取<p>Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.</p><ul><li>For single-AZ deployment instances, the quantity range is [3,32].</li><li>For instances deployed across multiple availability zones, the quantity range is [6,32].</li></ul>
                     * @return MongosNodeNum <p>Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.</p><ul><li>For single-AZ deployment instances, the quantity range is [3,32].</li><li>For instances deployed across multiple availability zones, the quantity range is [6,32].</li></ul>
                     * 
                     */
                    uint64_t GetMongosNodeNum() const;

                    /**
                     * 设置<p>Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.</p><ul><li>For single-AZ deployment instances, the quantity range is [3,32].</li><li>For instances deployed across multiple availability zones, the quantity range is [6,32].</li></ul>
                     * @param _mongosNodeNum <p>Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.</p><ul><li>For single-AZ deployment instances, the quantity range is [3,32].</li><li>For instances deployed across multiple availability zones, the quantity range is [6,32].</li></ul>
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
                     * 获取<p>Number of read-only nodes. Value ranges from 0 to 5.</p>
                     * @return ReadonlyNodeNum <p>Number of read-only nodes. Value ranges from 0 to 5.</p>
                     * 
                     */
                    uint64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置<p>Number of read-only nodes. Value ranges from 0 to 5.</p>
                     * @param _readonlyNodeNum <p>Number of read-only nodes. Value ranges from 0 to 5.</p>
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
                     * 获取<p>Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when <strong>ReadonlyNodeNum</strong> is not set to <strong>0</strong>.</p>
                     * @return ReadonlyNodeAvailabilityZoneList <p>Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when <strong>ReadonlyNodeNum</strong> is not set to <strong>0</strong>.</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeAvailabilityZoneList() const;

                    /**
                     * 设置<p>Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when <strong>ReadonlyNodeNum</strong> is not set to <strong>0</strong>.</p>
                     * @param _readonlyNodeAvailabilityZoneList <p>Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when <strong>ReadonlyNodeNum</strong> is not set to <strong>0</strong>.</p>
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
                     * 获取<p>Availability zone of the Hidden node. To deploy instances across availability zones, you must configure this parameter.</p>
                     * @return HiddenZone <p>Availability zone of the Hidden node. To deploy instances across availability zones, you must configure this parameter.</p>
                     * 
                     */
                    std::string GetHiddenZone() const;

                    /**
                     * 设置<p>Availability zone of the Hidden node. To deploy instances across availability zones, you must configure this parameter.</p>
                     * @param _hiddenZone <p>Availability zone of the Hidden node. To deploy instances across availability zones, you must configure this parameter.</p>
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
                     * 获取<p>Parameter template ID.</p><ul><li>A parameter template is a collection of preset specific parameters applicable to quick configuration of new MongoDB instances. Proper use of parameter templates can effectively improve database deployment efficiency and operating performance.</li><li>The parameter template ID can be obtained through the <a href="https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1">DescribeDBInstanceParamTpl</a> API. Please select the parameter template ID corresponding to your instance version and architecture.</li></ul>
                     * @return ParamTemplateId <p>Parameter template ID.</p><ul><li>A parameter template is a collection of preset specific parameters applicable to quick configuration of new MongoDB instances. Proper use of parameter templates can effectively improve database deployment efficiency and operating performance.</li><li>The parameter template ID can be obtained through the <a href="https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1">DescribeDBInstanceParamTpl</a> API. Please select the parameter template ID corresponding to your instance version and architecture.</li></ul>
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID.</p><ul><li>A parameter template is a collection of preset specific parameters applicable to quick configuration of new MongoDB instances. Proper use of parameter templates can effectively improve database deployment efficiency and operating performance.</li><li>The parameter template ID can be obtained through the <a href="https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1">DescribeDBInstanceParamTpl</a> API. Please select the parameter template ID corresponding to your instance version and architecture.</li></ul>
                     * @param _paramTemplateId <p>Parameter template ID.</p><ul><li>A parameter template is a collection of preset specific parameters applicable to quick configuration of new MongoDB instances. Proper use of parameter templates can effectively improve database deployment efficiency and operating performance.</li><li>The parameter template ID can be obtained through the <a href="https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1">DescribeDBInstanceParamTpl</a> API. Please select the parameter template ID corresponding to your instance version and architecture.</li></ul>
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance CPU core size. Unit: C. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable CPU specifications.<br>Note: CPU size must be set for common I Instance Type.</p>
                     * @return CpuCore <p>Instance CPU core size. Unit: C. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable CPU specifications.<br>Note: CPU size must be set for common I Instance Type.</p>
                     * 
                     */
                    int64_t GetCpuCore() const;

                    /**
                     * 设置<p>Instance CPU core size. Unit: C. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable CPU specifications.<br>Note: CPU size must be set for common I Instance Type.</p>
                     * @param _cpuCore <p>Instance CPU core size. Unit: C. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable CPU specifications.<br>Note: CPU size must be set for common I Instance Type.</p>
                     * 
                     */
                    void SetCpuCore(const int64_t& _cpuCore);

                    /**
                     * 判断参数 CpuCore 是否已赋值
                     * @return CpuCore 是否已赋值
                     * 
                     */
                    bool CpuCoreHasBeenSet() const;

                private:

                    /**
                     * <p>Instance memory size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable memory specifications.</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance disk size. Unit: GB. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum disk sizes corresponding to each CPU specification.</p>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     */
                    uint64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Refers to version information. For supported versions, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to query.</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger engine version.</li></ul>
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * <p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * <p>Number of instances. The minimum value is 1, and the maximum value is 30.</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>AZ information. The input format must be ap-guangzhou-2.</p><ul><li>For details, use the interface <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> to obtain them.</li><li>This parameter is the primary AZ. If multi-AZ deployment is used, Zone must be one of AvailabilityZoneList.</li></ul>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance architecture type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>VPC ID.</p><ul><li>Only supports configuration of private networks. A private network in the same region as the instance must be selected. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain a usable VPC ID.</li><li>After successful instance creation, VPC replacement is allowed. For detailed operations, see <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Changing the Network</a>.</li></ul>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID of the VPC.</p><ul><li>You must specify a subnet within the selected private network. Log in to the <a href="https://console.cloud.tencent.com/vpc">VPC console</a> to obtain the subnet ID.</li><li>After the instance is successfully created, replacement of the private network and subnet is allowed. For detailed operations, please refer to <a href="https://www.tencentcloud.com/document/product/239/30910?from_cn_redirect=1">Network Change</a>.</li></ul>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance password. The requirements are as follows:</p><ul><li>Character count is [8,32].</li><li>Enter characters within [A,Z], [a,z], [0,9].</li><li>Special characters include: exclamation mark "!", at "@", pound sign "#", percent sign "%", caret "^", asterisk "*", brackets "()", underscore "_".</li><li>Cannot set a single letter or number.</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Project ID.</p><ul><li>If this parameter is not set, the default project is used.</li><li>You can obtain the project ID on the <a href="https://console.cloud.tencent.com/project">MongoDB console project management</a> page.</li></ul>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Instance tag information.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Instance type.</p><ul><li>1: Formal instance.</li><li>3: Read-only instance.</li><li>4: Disaster recovery instance.</li><li>5: Clone instance. Note: RestoreTime is a required item when you clone an instance.</li></ul>
                     */
                    int64_t m_clone;
                    bool m_cloneHasBeenSet;

                    /**
                     * <p>Parent instance ID.</p><ul><li>When the <strong>Clone</strong> parameter is 3 or 4, that is, the instance is read-only or a disaster recovery instance, this parameter must be configured.</li><li>Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the parent instance ID in the instance list.</li></ul>
                     */
                    std::string m_father;
                    bool m_fatherHasBeenSet;

                    /**
                     * <p>Security group ID. Log in to the <a href="https://console.cloud.tencent.com/vpc/security-group">security group console</a> to obtain the ID of the security group within the same region as the database instance.</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>Rollback time of the cloned instance.</p><ul><li>This parameter is required for cloned instances. Format: 2021-08-13 16:30:00.</li><li>Rollback time range: Only data within the last 7 days can be rolled back.</li></ul>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * <p>Instance name. Only Chinese, English, digits, underscores (_), and hyphens (-) are supported, with a maximum length of 128 characters. When purchasing database instances in batches, you can efficiently set instance names by using custom pattern strings and automatically ascending numeric suffixes.</p><ul><li>Basic mode: prefix + automatic ascending number (starting from 1 by default). Only a custom instance name prefix is required for <strong>lnstanceName</strong>. For example, it can be set to cmgo. If the purchase quantity is set to 5, after purchase, the instances will be sequentially named cmgo1, cmgo2, cmgo3, cmgo4, and cmgo5, respectively.</li><li>Custom starting number mode: prefix + {R:x} (x is the custom starting number). <strong>InstanceName</strong> requires "prefix{R:x}". For example, cmgo{R:3}. If the purchase quantity is set to 5, the instance names will be cmgo3, cmgo4, cmgo5, cmgo6, and cmgo7.</li><li>Composite pattern string: prefix1{R:x} + prefix2{R:y} + ⋯ + fixed suffix, where x and y are the starting numbers for each prefix. <strong>InstanceName</strong> requires a composite pattern string. For example, cmgo{R:10}_node{R:12}_db. If the batch purchase quantity is set to 5, the instance names will be cmgo10_node12_db, cmgo11_node13_db, cmgo12_node14_db, cmgo13_node15_db, and cmgo14_node16_db.</li></ul>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>For cloud database instances in multi-AZ deployment, specify the availability zone list.</p><ul><li>For instances in multi-AZ deployment mode, the <strong>Zone</strong> parameter specifies the primary AZ, and <strong>AvailabilityZoneList</strong> specifies all AZs, including the primary AZ. Format: [ap-guangzhou-2,ap-guangzhou-3,ap-guangzhou-4].</li><li>Use the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to access cloud databases and obtain availability zone information planned for different regions, so that you can assign valid AZs.</li><li>Nodes in multi-AZ deployment can only be deployed in 3 different availability zones. Deploying most nodes of a cluster in the same availability zone is not supported. For example, a 3-node cluster does not support deploying 2 nodes in the same zone.</li></ul>
                     */
                    std::vector<std::string> m_availabilityZoneList;
                    bool m_availabilityZoneListHasBeenSet;

                    /**
                     * <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase.</p>
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * <p>Mongos node memory size.</p><ul><li>This parameter is required during sharded cluster instance purchase.</li><li>Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores).</li></ul>
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>Number of Mongos nodes. This parameter is required during sharded cluster instance purchase.</p><ul><li>For single-AZ deployment instances, the quantity range is [3,32].</li><li>For instances deployed across multiple availability zones, the quantity range is [6,32].</li></ul>
                     */
                    uint64_t m_mongosNodeNum;
                    bool m_mongosNodeNumHasBeenSet;

                    /**
                     * <p>Number of read-only nodes. Value ranges from 0 to 5.</p>
                     */
                    uint64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * <p>Array of AZs of read-only nodes. This parameter is required for instances in multi-AZ deployment mode when <strong>ReadonlyNodeNum</strong> is not set to <strong>0</strong>.</p>
                     */
                    std::vector<std::string> m_readonlyNodeAvailabilityZoneList;
                    bool m_readonlyNodeAvailabilityZoneListHasBeenSet;

                    /**
                     * <p>Availability zone of the Hidden node. To deploy instances across availability zones, you must configure this parameter.</p>
                     */
                    std::string m_hiddenZone;
                    bool m_hiddenZoneHasBeenSet;

                    /**
                     * <p>Parameter template ID.</p><ul><li>A parameter template is a collection of preset specific parameters applicable to quick configuration of new MongoDB instances. Proper use of parameter templates can effectively improve database deployment efficiency and operating performance.</li><li>The parameter template ID can be obtained through the <a href="https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1">DescribeDBInstanceParamTpl</a> API. Please select the parameter template ID corresponding to your instance version and architecture.</li></ul>
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Instance CPU core size. Unit: C. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain specific saleable CPU specifications.<br>Note: CPU size must be set for common I Instance Type.</p>
                     */
                    int64_t m_cpuCore;
                    bool m_cpuCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
