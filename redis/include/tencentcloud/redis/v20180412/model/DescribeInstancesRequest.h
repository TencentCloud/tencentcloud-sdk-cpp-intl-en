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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instances returned per page. Default value: `20`. Maximum value: `1000`.
                     * @return Limit Number of instances returned per page. Default value: `20`. Maximum value: `1000`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of instances returned per page. Default value: `20`. Maximum value: `1000`.
                     * @param _limit Number of instances returned per page. Default value: `20`. Maximum value: `1000`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @return Offset Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @param _offset Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.


                     * @return InstanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.


                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.


                     * @param _instanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.


                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The instance list is sorted according to the following enumeration valid values:
- projectId: By project ID.- createtime: By the creation time of instances.- instancename: By the name of instances.- type: By the type of instances.- curDeadline: By the expiration time of instances.
                     * @return OrderBy The instance list is sorted according to the following enumeration valid values:
- projectId: By project ID.- createtime: By the creation time of instances.- instancename: By the name of instances.- type: By the type of instances.- curDeadline: By the expiration time of instances.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置The instance list is sorted according to the following enumeration valid values:
- projectId: By project ID.- createtime: By the creation time of instances.- instancename: By the name of instances.- type: By the type of instances.- curDeadline: By the expiration time of instances.
                     * @param _orderBy The instance list is sorted according to the following enumeration valid values:
- projectId: By project ID.- createtime: By the creation time of instances.- instancename: By the name of instances.- type: By the type of instances.- curDeadline: By the expiration time of instances.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取For instance sorting order, the default is descending order.
- 1: Descending order.
- 0: Ascending order.
                     * @return OrderType For instance sorting order, the default is descending order.
- 1: Descending order.
- 0: Ascending order.
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置For instance sorting order, the default is descending order.
- 1: Descending order.
- 0: Ascending order.
                     * @param _orderType For instance sorting order, the default is descending order.
- 1: Descending order.
- 0: Ascending order.
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * @return VpcIds Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * @param _vpcIds Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * @return SubnetIds Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * @param _subnetIds Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Setting keywords field for fuzzy query, only instance names support fuzzy query.
                     * @return SearchKey Setting keywords field for fuzzy query, only instance names support fuzzy query.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Setting keywords field for fuzzy query, only instance names support fuzzy query.
                     * @param _searchKey Setting keywords field for fuzzy query, only instance names support fuzzy query.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Array of project IDs
                     * @return ProjectIds Array of project IDs
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Array of project IDs
                     * @param _projectIds Array of project IDs
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * @return UniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * @param _uniqVpcIds Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * @return UniqSubnetIds Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * @param _uniqSubnetIds Array of VPC subnet IDs such as subnet-fdj24n34j2
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * @return RegionIds Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * @param _regionIds Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     * 
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取Instance status.
- 0: To be initialized.
- 1: In process.
- 2: Running.
- -2: Isolated.
- -3: Pending Delete.
                     * @return Status Instance status.
- 0: To be initialized.
- 1: In process.
- 2: Running.
- -2: Isolated.
- -3: Pending Delete.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status.
- 0: To be initialized.
- 1: In process.
- 2: Running.
- -2: Isolated.
- -3: Pending Delete.
                     * @param _status Instance status.
- 0: To be initialized.
- 1: In process.
- 2: Running.
- -2: Isolated.
- -3: Pending Delete.
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance architecture version.
- 1: Single-node edition.
- 2: Master-replica edition.- 3: Cluster edition.
                     * @return TypeVersion Instance architecture version.
- 1: Single-node edition.
- 2: Master-replica edition.- 3: Cluster edition.
                     * 
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置Instance architecture version.
- 1: Single-node edition.
- 2: Master-replica edition.- 3: Cluster edition.
                     * @param _typeVersion Instance architecture version.
- 1: Single-node edition.
- 2: Master-replica edition.- 3: Cluster edition.
                     * 
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     * 
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * @return EngineName Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * @param _engineName Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Renewal pattern.
- 0: Manual renewal.
- 1: Automatic renewal.
- 2: No renewal after expiry.
                     * @return AutoRenew Renewal pattern.
- 0: Manual renewal.
- 1: Automatic renewal.
- 2: No renewal after expiry.
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置Renewal pattern.
- 0: Manual renewal.
- 1: Automatic renewal.
- 2: No renewal after expiry.
                     * @param _autoRenew Renewal pattern.
- 0: Manual renewal.
- 1: Automatic renewal.
- 2: No renewal after expiry.
                     * 
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Billing mode. Only pay-as-you-go billing is supported.
                     * @return BillingMode Billing mode. Only pay-as-you-go billing is supported.
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置Billing mode. Only pay-as-you-go billing is supported.
                     * @param _billingMode Billing mode. Only pay-as-you-go billing is supported.
                     * 
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * @return Type Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     * @param _type Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
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
                     * 获取This parameter is of array type and supports the configuration of instance names, instance IDs, and IP addresses. Among these, the instance name is fuzzy matching while the instance ID and IP address are precise matching.
- Each element in the array is used for a union-based matching query.- When both **InstanceId** and **SearchKeys** are configured simultaneously, their intersection will be used for the matching query.
                     * @return SearchKeys This parameter is of array type and supports the configuration of instance names, instance IDs, and IP addresses. Among these, the instance name is fuzzy matching while the instance ID and IP address are precise matching.
- Each element in the array is used for a union-based matching query.- When both **InstanceId** and **SearchKeys** are configured simultaneously, their intersection will be used for the matching query.
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置This parameter is of array type and supports the configuration of instance names, instance IDs, and IP addresses. Among these, the instance name is fuzzy matching while the instance ID and IP address are precise matching.
- Each element in the array is used for a union-based matching query.- When both **InstanceId** and **SearchKeys** are configured simultaneously, their intersection will be used for the matching query.
                     * @param _searchKeys This parameter is of array type and supports the configuration of instance names, instance IDs, and IP addresses. Among these, the instance name is fuzzy matching while the instance ID and IP address are precise matching.
- Each element in the array is used for a union-based matching query.- When both **InstanceId** and **SearchKeys** are configured simultaneously, their intersection will be used for the matching query.
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
                     * @return TypeList Internal parameter, which can be ignored.
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
                     * @param _typeList Internal parameter, which can be ignored.
                     * 
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
                     * @return MonitorVersion Internal parameter, which can be ignored.
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
                     * @param _monitorVersion Internal parameter, which can be ignored.
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return InstanceTags Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param _instanceTags Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @return TagKeys Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * @param _tagKeys Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取The product version of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.
- local: local Disk Edition.- cdc: Cluster dedicated edition.

                     * @return ProductVersions The product version of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.
- local: local Disk Edition.- cdc: Cluster dedicated edition.

                     * 
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置The product version of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.
- local: local Disk Edition.- cdc: Cluster dedicated edition.

                     * @param _productVersions The product version of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.
- local: local Disk Edition.- cdc: Cluster dedicated edition.

                     * 
                     */
                    void SetProductVersions(const std::vector<std::string>& _productVersions);

                    /**
                     * 判断参数 ProductVersions 是否已赋值
                     * @return ProductVersions 是否已赋值
                     * 
                     */
                    bool ProductVersionsHasBeenSet() const;

                    /**
                     * 获取Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * @return InstanceIds Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * @param _instanceIds Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Availability zone mode.
- singleaz: Single availability zone.- multiaz: Multiple availability zones.
                     * @return AzMode Availability zone mode.
- singleaz: Single availability zone.- multiaz: Multiple availability zones.
                     * 
                     */
                    std::string GetAzMode() const;

                    /**
                     * 设置Availability zone mode.
- singleaz: Single availability zone.- multiaz: Multiple availability zones.
                     * @param _azMode Availability zone mode.
- singleaz: Single availability zone.- multiaz: Multiple availability zones.
                     * 
                     */
                    void SetAzMode(const std::string& _azMode);

                    /**
                     * 判断参数 AzMode 是否已赋值
                     * @return AzMode 是否已赋值
                     * 
                     */
                    bool AzModeHasBeenSet() const;

                private:

                    /**
                     * Number of instances returned per page. Default value: `20`. Maximum value: `1000`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.


                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The instance list is sorted according to the following enumeration valid values:
- projectId: By project ID.- createtime: By the creation time of instances.- instancename: By the name of instances.- type: By the type of instances.- curDeadline: By the expiration time of instances.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * For instance sorting order, the default is descending order.
- 1: Descending order.
- 0: Ascending order.
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Array of VPC IDs such as 47525. If this parameter is not passed in or the array is empty, the classic network will be selected by default. This parameter is retained and can be ignored. It is set based on `UniqVpcIds` parameter format.
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * Array of VPC subnet IDs such as 56854. This parameter is retained and can be ignored. It is set based on `UniqSubnetIds` parameter format.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Setting keywords field for fuzzy query, only instance names support fuzzy query.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Array of project IDs
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Array of VPC IDs such as vpc-sad23jfdfk. If this parameter is not passed in or or the array is empty, the classic network will be selected by default.
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * Array of VPC subnet IDs such as subnet-fdj24n34j2
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * Array of region IDs (disused). The corresponding region can be queried through the common parameter `Region`.
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Instance status.
- 0: To be initialized.
- 1: In process.
- 2: Running.
- -2: Isolated.
- -3: Pending Delete.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance architecture version.
- 1: Single-node edition.
- 2: Master-replica edition.- 3: Cluster edition.
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * Storage engine information. Valid values: `Redis-2.8`, `Redis-4.0`, `Redis-5.0`, `Redis-6.0` or `CKV`.
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Renewal pattern.
- 0: Manual renewal.
- 1: Automatic renewal.
- 2: No renewal after expiry.
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Billing mode. Only pay-as-you-go billing is supported.
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * Instance type.
- 2: Redis 2.8 Memory Edition (standard architecture).
- 3: CKV 3.2 Memory Edition (standard architecture).
- 4: CKV 3.2 Memory Edition (cluster architecture).
- 5: Redis 2.8 Memory Edition (stand-alone).
- 6: Redis 4.0 Memory Edition (standard architecture).
- 7: Redis 4.0 Memory Edition (cluster architecture).
- 8: Redis 5.0 Memory Edition (standard architecture).
- 9: Redis 5.0 Memory Edition (cluster architecture).
- 15: Redis 6.2 Memory Edition (standard architecture).
- 16: Redis 6.2 Memory Edition (cluster architecture).
- 17: Redis 7.0 Memory Edition (standard architecture).
- 18: Redis 7.0 Memory Edition (cluster architecture).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter is of array type and supports the configuration of instance names, instance IDs, and IP addresses. Among these, the instance name is fuzzy matching while the instance ID and IP address are precise matching.
- Each element in the array is used for a union-based matching query.- When both **InstanceId** and **SearchKeys** are configured simultaneously, their intersection will be used for the matching query.
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * Resources filter by tag key and value. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Resources filter by tag key. If this parameter is not specified or is an empty array, resources will not be filtered.
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * The product version of the instance. If this parameter is not configured or the array is set to empty, instances will not be filtered based on this parameter by default.
- local: local Disk Edition.- cdc: Cluster dedicated edition.

                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                    /**
                     * Batch query of the specified instances ID. The number of results returned is based on `Limit`.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Availability zone mode.
- singleaz: Single availability zone.- multiaz: Multiple availability zones.
                     */
                    std::string m_azMode;
                    bool m_azModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
