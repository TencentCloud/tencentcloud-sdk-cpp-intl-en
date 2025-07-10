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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

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
                * DescribeDBInstances request structure.
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.
                     * @return InstanceIds Instance ID list. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.
                     * @param _instanceIds Instance ID list. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.
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
                     * 获取Specifies the instance type for querying.<ul><li>0: all instances.</li><li>1: formal instance.</li><li>3: read-only instance.</li><li>4: disaster recovery instance.</li></ul>
                     * @return InstanceType Specifies the instance type for querying.<ul><li>0: all instances.</li><li>1: formal instance.</li><li>3: read-only instance.</li><li>4: disaster recovery instance.</li></ul>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Specifies the instance type for querying.<ul><li>0: all instances.</li><li>1: formal instance.</li><li>3: read-only instance.</li><li>4: disaster recovery instance.</li></ul>
                     * @param _instanceType Specifies the instance type for querying.<ul><li>0: all instances.</li><li>1: formal instance.</li><li>3: read-only instance.</li><li>4: disaster recovery instance.</li></ul>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the cluster type of the queried instance.<ul><li>0: replica set instance.</li><li>1: sharded cluster instance.</li><li>-1: replica set and sharded cluster instance.</li></ul>
                     * @return ClusterType Specifies the cluster type of the queried instance.<ul><li>0: replica set instance.</li><li>1: sharded cluster instance.</li><li>-1: replica set and sharded cluster instance.</li></ul>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置Specifies the cluster type of the queried instance.<ul><li>0: replica set instance.</li><li>1: sharded cluster instance.</li><li>-1: replica set and sharded cluster instance.</li></ul>
                     * @param _clusterType Specifies the cluster type of the queried instance.<ul><li>0: replica set instance.</li><li>1: sharded cluster instance.</li><li>-1: replica set and sharded cluster instance.</li></ul>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Specify the current status of the queried instance.<ul><li>0: pending initialization.</li><li>1: processing, such as modifying specifications or modifying parameters.</li><li>2: instance running normally.</li><li>-2: instance expired.</li></ul>
                     * @return Status Specify the current status of the queried instance.<ul><li>0: pending initialization.</li><li>1: processing, such as modifying specifications or modifying parameters.</li><li>2: instance running normally.</li><li>-2: instance expired.</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Specify the current status of the queried instance.<ul><li>0: pending initialization.</li><li>1: processing, such as modifying specifications or modifying parameters.</li><li>2: instance running normally.</li><li>-2: instance expired.</li></ul>
                     * @param _status Specify the current status of the queried instance.<ul><li>0: pending initialization.</li><li>1: processing, such as modifying specifications or modifying parameters.</li><li>2: instance running normally.</li><li>-2: instance expired.</li></ul>
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
                     * 获取VPC ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the ID on the **VPC** page.
                     * @return VpcId VPC ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the ID on the **VPC** page.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the ID on the **VPC** page.
                     * @param _vpcId VPC ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the ID on the **VPC** page.
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
                     * 获取VPC subnet ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the subnet ID on the **VPC** page.
                     * @return SubnetId VPC subnet ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the subnet ID on the **VPC** page.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the subnet ID on the **VPC** page.
                     * @param _subnetId VPC subnet ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the subnet ID on the **VPC** page.
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
                     * 获取Billing type. Valid value: 0 (pay-as-you-go)
                     * @return PayMode Billing type. Valid value: 0 (pay-as-you-go)
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing type. Valid value: 0 (pay-as-you-go)
                     * @param _payMode Billing type. Valid value: 0 (pay-as-you-go)
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Number of results returned per request. Default value: `20`. Value range: [1,100].
                     * @return Limit Number of results returned per request. Default value: `20`. Value range: [1,100].
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned per request. Default value: `20`. Value range: [1,100].
                     * @param _limit Number of results returned per request. Default value: `20`. Value range: [1,100].
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Configures the field for sorting returned results. Currently, "ProjectId", "InstanceName", and "CreateTime" are supported for sorting.
                     * @return OrderBy Configures the field for sorting returned results. Currently, "ProjectId", "InstanceName", and "CreateTime" are supported for sorting.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Configures the field for sorting returned results. Currently, "ProjectId", "InstanceName", and "CreateTime" are supported for sorting.
                     * @param _orderBy Configures the field for sorting returned results. Currently, "ProjectId", "InstanceName", and "CreateTime" are supported for sorting.
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
                     * 获取Configures the method for sorting returned results.
 - ASC: ascending order.
 - DESC: descending order.
                     * @return OrderByType Configures the method for sorting returned results.
 - ASC: ascending order.
 - DESC: descending order.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Configures the method for sorting returned results.
 - ASC: ascending order.
 - DESC: descending order.
                     * @param _orderByType Configures the method for sorting returned results.
 - ASC: ascending order.
 - DESC: descending order.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Project ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and select Project Management in the account information drop-down menu at the top right corner to query projects.
                     * @return ProjectIds Project ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and select Project Management in the account information drop-down menu at the top right corner to query projects.
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and select Project Management in the account information drop-down menu at the top right corner to query projects.
                     * @param _projectIds Project ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and select Project Management in the account information drop-down menu at the top right corner to query projects.
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Specifies the keyword for search. Specific instance IDs, instance names, or private IP addresses are supported.
                     * @return SearchKey Specifies the keyword for search. Specific instance IDs, instance names, or private IP addresses are supported.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Specifies the keyword for search. Specific instance IDs, instance names, or private IP addresses are supported.
                     * @param _searchKey Specifies the keyword for search. Specific instance IDs, instance names, or private IP addresses are supported.
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
                     * 获取Tag information, including the tag key and tag value.
                     * @return Tags Tag information, including the tag key and tag value.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag information, including the tag key and tag value.
                     * @param _tags Tag information, including the tag key and tag value.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and copy the instance ID from the instance list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Specifies the instance type for querying.<ul><li>0: all instances.</li><li>1: formal instance.</li><li>3: read-only instance.</li><li>4: disaster recovery instance.</li></ul>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specifies the cluster type of the queried instance.<ul><li>0: replica set instance.</li><li>1: sharded cluster instance.</li><li>-1: replica set and sharded cluster instance.</li></ul>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Specify the current status of the queried instance.<ul><li>0: pending initialization.</li><li>1: processing, such as modifying specifications or modifying parameters.</li><li>2: instance running normally.</li><li>-2: instance expired.</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the ID on the **VPC** page.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID.
 - You do not need to specify this parameter for basic networks.
 - Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB), click a VPC name in the instance list, and obtain the subnet ID on the **VPC** page.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Billing type. Valid value: 0 (pay-as-you-go)
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Number of results returned per request. Default value: `20`. Value range: [1,100].
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Configures the field for sorting returned results. Currently, "ProjectId", "InstanceName", and "CreateTime" are supported for sorting.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Configures the method for sorting returned results.
 - ASC: ascending order.
 - DESC: descending order.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Project ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB) and select Project Management in the account information drop-down menu at the top right corner to query projects.
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Specifies the keyword for search. Specific instance IDs, instance names, or private IP addresses are supported.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Tag information, including the tag key and tag value.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
