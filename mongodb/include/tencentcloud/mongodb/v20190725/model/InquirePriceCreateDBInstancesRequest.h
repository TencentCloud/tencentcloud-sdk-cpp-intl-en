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
                     * 获取<p>Region and AZ information of the instance. For details, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @return Zone <p>Region and AZ information of the instance. For details, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Region and AZ information of the instance. For details, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @param _zone <p>Region and AZ information of the instance. For details, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
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
                     * 获取<ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * @return NodeNum <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置<ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     * @param _nodeNum <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
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
                     * 获取<p>Instance memory size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li></ul>
                     * @return Memory <p>Instance memory size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li></ul>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Instance memory size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li></ul>
                     * @param _memory <p>Instance memory size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li></ul>
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
                     * 获取<p>Instance disk size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The MinStorage and MaxStorage parameters in the returned data structure SpecItems correspond to the minimum and maximum disk specifications, respectively.</li></ul>
                     * @return Volume <p>Instance disk size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The MinStorage and MaxStorage parameters in the returned data structure SpecItems correspond to the minimum and maximum disk specifications, respectively.</li></ul>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Instance disk size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The MinStorage and MaxStorage parameters in the returned data structure SpecItems correspond to the minimum and maximum disk specifications, respectively.</li></ul>
                     * @param _volume <p>Instance disk size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The MinStorage and MaxStorage parameters in the returned data structure SpecItems correspond to the minimum and maximum disk specifications, respectively.</li></ul>
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
                     * 获取<p>Instance version information. The <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API can be called to obtain specific supported versions. The MongoVersionCode parameter in the returned data structure SpecItems indicates the information on versions supported by instances. The corresponding relationship between version information and version number is as follows:</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger storage engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger storage engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger storage engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger storage engine version.</li></ul>
                     * @return MongoVersion <p>Instance version information. The <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API can be called to obtain specific supported versions. The MongoVersionCode parameter in the returned data structure SpecItems indicates the information on versions supported by instances. The corresponding relationship between version information and version number is as follows:</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger storage engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger storage engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger storage engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger storage engine version.</li></ul>
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置<p>Instance version information. The <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API can be called to obtain specific supported versions. The MongoVersionCode parameter in the returned data structure SpecItems indicates the information on versions supported by instances. The corresponding relationship between version information and version number is as follows:</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger storage engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger storage engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger storage engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger storage engine version.</li></ul>
                     * @param _mongoVersion <p>Instance version information. The <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API can be called to obtain specific supported versions. The MongoVersionCode parameter in the returned data structure SpecItems indicates the information on versions supported by instances. The corresponding relationship between version information and version number is as follows:</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger storage engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger storage engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger storage engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger storage engine version.</li></ul>
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
                     * 获取<p>Number of instances. Value range: [1,10].</p>
                     * @return GoodsNum <p>Number of instances. Value range: [1,10].</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Number of instances. Value range: [1,10].</p>
                     * @param _goodsNum <p>Number of instances. Value range: [1,10].</p>
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
                     * 获取<p>Instance type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * @return ClusterType <p>Instance type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Instance type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     * @param _clusterType <p>Instance type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
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
                     * 获取<ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * @return ReplicateSetNum <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * 
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置<ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     * @param _replicateSetNum <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
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
                     * 获取<ul><li>When the monthly subscription mode is selected, that is, when <b>InstanceChargeType</b> is set to <b>PREPAID</b>, this parameter is required for specifying the purchase duration of instances. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Unit: months.<br>- When the pay-as-you-go mode is selected, that is, when <b>InstanceChargeType</b> is set to <strong>POSTPAID_BY_HOUR</strong>, this parameter can only be set to 1.</li></ul>
                     * @return Period <ul><li>When the monthly subscription mode is selected, that is, when <b>InstanceChargeType</b> is set to <b>PREPAID</b>, this parameter is required for specifying the purchase duration of instances. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Unit: months.<br>- When the pay-as-you-go mode is selected, that is, when <b>InstanceChargeType</b> is set to <strong>POSTPAID_BY_HOUR</strong>, this parameter can only be set to 1.</li></ul>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<ul><li>When the monthly subscription mode is selected, that is, when <b>InstanceChargeType</b> is set to <b>PREPAID</b>, this parameter is required for specifying the purchase duration of instances. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Unit: months.<br>- When the pay-as-you-go mode is selected, that is, when <b>InstanceChargeType</b> is set to <strong>POSTPAID_BY_HOUR</strong>, this parameter can only be set to 1.</li></ul>
                     * @param _period <ul><li>When the monthly subscription mode is selected, that is, when <b>InstanceChargeType</b> is set to <b>PREPAID</b>, this parameter is required for specifying the purchase duration of instances. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Unit: months.<br>- When the pay-as-you-go mode is selected, that is, when <b>InstanceChargeType</b> is set to <strong>POSTPAID_BY_HOUR</strong>, this parameter can only be set to 1.</li></ul>
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
                     * 获取<p>Instance payment method.</p><ul><li>PREPAID: Annual and monthly subscription.</li><li>POSTPAID_BY_HOUR: Pay-As-You-Go.</li></ul>
                     * @return InstanceChargeType <p>Instance payment method.</p><ul><li>PREPAID: Annual and monthly subscription.</li><li>POSTPAID_BY_HOUR: Pay-As-You-Go.</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance payment method.</p><ul><li>PREPAID: Annual and monthly subscription.</li><li>POSTPAID_BY_HOUR: Pay-As-You-Go.</li></ul>
                     * @param _instanceChargeType <p>Instance payment method.</p><ul><li>PREPAID: Annual and monthly subscription.</li><li>POSTPAID_BY_HOUR: Pay-As-You-Go.</li></ul>
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
                     * 获取<p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase. If this parameter is left blank, the default value 2 is used.</p>
                     * @return MongosCpu <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase. If this parameter is left blank, the default value 2 is used.</p>
                     * 
                     */
                    uint64_t GetMongosCpu() const;

                    /**
                     * 设置<p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase. If this parameter is left blank, the default value 2 is used.</p>
                     * @param _mongosCpu <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase. If this parameter is left blank, the default value 2 is used.</p>
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
                     * 获取<p>Mongos node memory size. - This parameter is required during sharded cluster instance purchase. - Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores). If this parameter is left blank, the default value 4 is used.</p>
                     * @return MongosMemory <p>Mongos node memory size. - This parameter is required during sharded cluster instance purchase. - Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores). If this parameter is left blank, the default value 4 is used.</p>
                     * 
                     */
                    uint64_t GetMongosMemory() const;

                    /**
                     * 设置<p>Mongos node memory size. - This parameter is required during sharded cluster instance purchase. - Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores). If this parameter is left blank, the default value 4 is used.</p>
                     * @param _mongosMemory <p>Mongos node memory size. - This parameter is required during sharded cluster instance purchase. - Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores). If this parameter is left blank, the default value 4 is used.</p>
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
                     * 获取<p>Specifies the number of Mongos nodes. Value range: [3,32]. For querying the price of sharded cluster instances, this parameter is required. If it is left blank, the default value 3 is used.</p>
                     * @return MongosNum <p>Specifies the number of Mongos nodes. Value range: [3,32]. For querying the price of sharded cluster instances, this parameter is required. If it is left blank, the default value 3 is used.</p>
                     * 
                     */
                    uint64_t GetMongosNum() const;

                    /**
                     * 设置<p>Specifies the number of Mongos nodes. Value range: [3,32]. For querying the price of sharded cluster instances, this parameter is required. If it is left blank, the default value 3 is used.</p>
                     * @param _mongosNum <p>Specifies the number of Mongos nodes. Value range: [3,32]. For querying the price of sharded cluster instances, this parameter is required. If it is left blank, the default value 3 is used.</p>
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
                     * 获取<p>Refers to the number of ConfigServer CPU cores, value fixed at 1, unit: GB. This parameter can be left blank.</p>
                     * @return ConfigServerCpu <p>Refers to the number of ConfigServer CPU cores, value fixed at 1, unit: GB. This parameter can be left blank.</p>
                     * 
                     */
                    uint64_t GetConfigServerCpu() const;

                    /**
                     * 设置<p>Refers to the number of ConfigServer CPU cores, value fixed at 1, unit: GB. This parameter can be left blank.</p>
                     * @param _configServerCpu <p>Refers to the number of ConfigServer CPU cores, value fixed at 1, unit: GB. This parameter can be left blank.</p>
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
                     * 获取<p>Specifies the ConfigServer memory size. The value is fixed as 2. Unit: GB. This parameter can be left blank.</p>
                     * @return ConfigServerMemory <p>Specifies the ConfigServer memory size. The value is fixed as 2. Unit: GB. This parameter can be left blank.</p>
                     * 
                     */
                    uint64_t GetConfigServerMemory() const;

                    /**
                     * 设置<p>Specifies the ConfigServer memory size. The value is fixed as 2. Unit: GB. This parameter can be left blank.</p>
                     * @param _configServerMemory <p>Specifies the ConfigServer memory size. The value is fixed as 2. Unit: GB. This parameter can be left blank.</p>
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
                     * 获取<p>Specifies the ConfigServer disk size. The value is fixed at 20. Unit: GB. This parameter can be left blank.</p>
                     * @return ConfigServerVolume <p>Specifies the ConfigServer disk size. The value is fixed at 20. Unit: GB. This parameter can be left blank.</p>
                     * 
                     */
                    uint64_t GetConfigServerVolume() const;

                    /**
                     * 设置<p>Specifies the ConfigServer disk size. The value is fixed at 20. Unit: GB. This parameter can be left blank.</p>
                     * @param _configServerVolume <p>Specifies the ConfigServer disk size. The value is fixed at 20. Unit: GB. This parameter can be left blank.</p>
                     * 
                     */
                    void SetConfigServerVolume(const uint64_t& _configServerVolume);

                    /**
                     * 判断参数 ConfigServerVolume 是否已赋值
                     * @return ConfigServerVolume 是否已赋值
                     * 
                     */
                    bool ConfigServerVolumeHasBeenSet() const;

                    /**
                     * 获取<ul><li>Create a replica set instance. It refers to the read-only node quantity in each replica set.</li><li>Create a sharded cluster instance. It refers to the read-only node quantity in each shard.<br>Value range: [1,5].</li></ul>
                     * @return ReadonlyNodeNum <ul><li>Create a replica set instance. It refers to the read-only node quantity in each replica set.</li><li>Create a sharded cluster instance. It refers to the read-only node quantity in each shard.<br>Value range: [1,5].</li></ul>
                     * 
                     */
                    int64_t GetReadonlyNodeNum() const;

                    /**
                     * 设置<ul><li>Create a replica set instance. It refers to the read-only node quantity in each replica set.</li><li>Create a sharded cluster instance. It refers to the read-only node quantity in each shard.<br>Value range: [1,5].</li></ul>
                     * @param _readonlyNodeNum <ul><li>Create a replica set instance. It refers to the read-only node quantity in each replica set.</li><li>Create a sharded cluster instance. It refers to the read-only node quantity in each shard.<br>Value range: [1,5].</li></ul>
                     * 
                     */
                    void SetReadonlyNodeNum(const int64_t& _readonlyNodeNum);

                    /**
                     * 判断参数 ReadonlyNodeNum 是否已赋值
                     * @return ReadonlyNodeNum 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>CPU size of the instance.</p><ul><li>Unit: C.</li><li>Value range: Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li><li>Note: You need to pass in the CPU core size corresponding to the memory when querying the price of a Common I Instance Type.</li></ul>
                     * @return Cpu <p>CPU size of the instance.</p><ul><li>Unit: C.</li><li>Value range: Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li><li>Note: You need to pass in the CPU core size corresponding to the memory when querying the price of a Common I Instance Type.</li></ul>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU size of the instance.</p><ul><li>Unit: C.</li><li>Value range: Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li><li>Note: You need to pass in the CPU core size corresponding to the memory when querying the price of a Common I Instance Type.</li></ul>
                     * @param _cpu <p>CPU size of the instance.</p><ul><li>Unit: C.</li><li>Value range: Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li><li>Note: You need to pass in the CPU core size corresponding to the memory when querying the price of a Common I Instance Type.</li></ul>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * <p>Region and AZ information of the instance. For details, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <ul><li>Specifies the number of primary and secondary nodes for each replica set during replica set instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each replica set.</li><li>Specifies the number of primary and secondary nodes for each shard during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to obtain the maximum and minimum number of nodes supported for each shard.</li></ul>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Instance memory size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li></ul>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Instance disk size.</p><ul><li>Unit: GB.</li><li>For the value range, call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The MinStorage and MaxStorage parameters in the returned data structure SpecItems correspond to the minimum and maximum disk specifications, respectively.</li></ul>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Instance version information. The <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API can be called to obtain specific supported versions. The MongoVersionCode parameter in the returned data structure SpecItems indicates the information on versions supported by instances. The corresponding relationship between version information and version number is as follows:</p><ul><li>MONGO_40_WT: MongoDB 4.0 WiredTiger storage engine version.</li><li>MONGO_42_WT: MongoDB 4.2 WiredTiger storage engine version.</li><li>MONGO_44_WT: MongoDB 4.4 WiredTiger storage engine version.</li><li>MONGO_50_WT: MongoDB 5.0 WiredTiger storage engine version.</li><li>MONGO_60_WT: MongoDB 6.0 WiredTiger storage engine version.</li><li>MONGO_70_WT: MongoDB 7.0 WiredTiger storage engine version.</li><li>MONGO_80_WT: MongoDB 8.0 WiredTiger storage engine version.</li></ul>
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * <p>Recommended product specification types:</p><ul><li>GE.LD.T1: Local disk (Common I).</li><li>GE.CD.T1: Cloud disk (Common I).</li></ul><p>Product allowlist specification types:</p><ul><li>HIO10G: Local disk (High IO 10G).</li><li>HCD: Cloud disk (Cloud disk edition).</li></ul><p>Note: Allowlist specification types are under allowlist control. If needed, <a href="https://console.cloud.tencent.com/workorder/category">submit a ticket</a> to apply.</p>
                     */
                    std::string m_machineCode;
                    bool m_machineCodeHasBeenSet;

                    /**
                     * <p>Number of instances. Value range: [1,10].</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Instance type.</p><ul><li>REPLSET (replica set)</li><li>SHARD (sharded cluster)</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <ul><li>Specifies the number of replica sets during replica set instance creation. This parameter can only be 1.</li><li>Specifies the number of shards during sharded cluster instance creation. Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API to query the range of shard quantity. The parameters MinReplicateSetNum and MaxReplicateSetNum in the returned data structure SpecItems correspond to the minimum value and maximum value, respectively.</li></ul>
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                    /**
                     * <ul><li>When the monthly subscription mode is selected, that is, when <b>InstanceChargeType</b> is set to <b>PREPAID</b>, this parameter is required for specifying the purchase duration of instances. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Unit: months.<br>- When the pay-as-you-go mode is selected, that is, when <b>InstanceChargeType</b> is set to <strong>POSTPAID_BY_HOUR</strong>, this parameter can only be set to 1.</li></ul>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Instance payment method.</p><ul><li>PREPAID: Annual and monthly subscription.</li><li>POSTPAID_BY_HOUR: Pay-As-You-Go.</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Number of Mongos node CPU cores. Valid values: 1, 2, 4, 8, and 16. This parameter is required during sharded cluster instance purchase. If this parameter is left blank, the default value 2 is used.</p>
                     */
                    uint64_t m_mongosCpu;
                    bool m_mongosCpuHasBeenSet;

                    /**
                     * <p>Mongos node memory size. - This parameter is required during sharded cluster instance purchase. - Unit: GB. Valid values: 2 (for 1 core), 4 (for 2 cores), 8 (for 4 cores), 16 (for 8 cores), and 32 (for 16 cores). If this parameter is left blank, the default value 4 is used.</p>
                     */
                    uint64_t m_mongosMemory;
                    bool m_mongosMemoryHasBeenSet;

                    /**
                     * <p>Specifies the number of Mongos nodes. Value range: [3,32]. For querying the price of sharded cluster instances, this parameter is required. If it is left blank, the default value 3 is used.</p>
                     */
                    uint64_t m_mongosNum;
                    bool m_mongosNumHasBeenSet;

                    /**
                     * <p>Refers to the number of ConfigServer CPU cores, value fixed at 1, unit: GB. This parameter can be left blank.</p>
                     */
                    uint64_t m_configServerCpu;
                    bool m_configServerCpuHasBeenSet;

                    /**
                     * <p>Specifies the ConfigServer memory size. The value is fixed as 2. Unit: GB. This parameter can be left blank.</p>
                     */
                    uint64_t m_configServerMemory;
                    bool m_configServerMemoryHasBeenSet;

                    /**
                     * <p>Specifies the ConfigServer disk size. The value is fixed at 20. Unit: GB. This parameter can be left blank.</p>
                     */
                    uint64_t m_configServerVolume;
                    bool m_configServerVolumeHasBeenSet;

                    /**
                     * <ul><li>Create a replica set instance. It refers to the read-only node quantity in each replica set.</li><li>Create a sharded cluster instance. It refers to the read-only node quantity in each shard.<br>Value range: [1,5].</li></ul>
                     */
                    int64_t m_readonlyNodeNum;
                    bool m_readonlyNodeNumHasBeenSet;

                    /**
                     * <p>CPU size of the instance.</p><ul><li>Unit: C.</li><li>Value range: Call the <a href="https://www.tencentcloud.com/document/product/240/38567?from_cn_redirect=1">DescribeSpecInfo</a> API. The CPU and Memory parameters in the returned data structure SpecItems correspond to the number of CPU cores and the memory specifications, respectively.</li><li>Note: You need to pass in the CPU core size corresponding to the memory when querying the price of a Common I Instance Type.</li></ul>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICECREATEDBINSTANCESREQUEST_H_
