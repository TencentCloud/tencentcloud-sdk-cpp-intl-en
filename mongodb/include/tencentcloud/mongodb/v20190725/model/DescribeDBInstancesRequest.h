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
                     * 获取List of instance IDs in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB console page.
                     * @return InstanceIds List of instance IDs in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB console page.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB console page.
                     * @param _instanceIds List of instance IDs in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB console page.
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
                     * 获取Instance type. Valid values: <ul><li>`0`: All instances. </li><li>`1`: Regular instances. </li><li>`2`: Temp instances. </li><li>`3`: Read-only instances. </li><li>`-1`: Regular instances, read-only instances, disaster recovery instances.</li></ul>
                     * @return InstanceType Instance type. Valid values: <ul><li>`0`: All instances. </li><li>`1`: Regular instances. </li><li>`2`: Temp instances. </li><li>`3`: Read-only instances. </li><li>`-1`: Regular instances, read-only instances, disaster recovery instances.</li></ul>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values: <ul><li>`0`: All instances. </li><li>`1`: Regular instances. </li><li>`2`: Temp instances. </li><li>`3`: Read-only instances. </li><li>`-1`: Regular instances, read-only instances, disaster recovery instances.</li></ul>
                     * @param _instanceType Instance type. Valid values: <ul><li>`0`: All instances. </li><li>`1`: Regular instances. </li><li>`2`: Temp instances. </li><li>`3`: Read-only instances. </li><li>`-1`: Regular instances, read-only instances, disaster recovery instances.</li></ul>
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
                     * 获取Cluster type. Valid values: <ul><li>`0`: Replica set instances. </li><li>`1`: Sharded cluster instances. </li><li>`-1`: All instances.</li></ul>
                     * @return ClusterType Cluster type. Valid values: <ul><li>`0`: Replica set instances. </li><li>`1`: Sharded cluster instances. </li><li>`-1`: All instances.</li></ul>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置Cluster type. Valid values: <ul><li>`0`: Replica set instances. </li><li>`1`: Sharded cluster instances. </li><li>`-1`: All instances.</li></ul>
                     * @param _clusterType Cluster type. Valid values: <ul><li>`0`: Replica set instances. </li><li>`1`: Sharded cluster instances. </li><li>`-1`: All instances.</li></ul>
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
                     * 获取Instance status. Valid values: <ul><li>`0`: To be initialized. </li><li>`1`: In process. </li><li>`2`: Valid. </li><li>`-2`: Isolated (for monthly subscribed instances). </li><li>`-3`: Isolated (for pay-as-you-go instances).</li></ul>
                     * @return Status Instance status. Valid values: <ul><li>`0`: To be initialized. </li><li>`1`: In process. </li><li>`2`: Valid. </li><li>`-2`: Isolated (for monthly subscribed instances). </li><li>`-3`: Isolated (for pay-as-you-go instances).</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: <ul><li>`0`: To be initialized. </li><li>`1`: In process. </li><li>`2`: Valid. </li><li>`-2`: Isolated (for monthly subscribed instances). </li><li>`-3`: Isolated (for pay-as-you-go instances).</li></ul>
                     * @param _status Instance status. Valid values: <ul><li>`0`: To be initialized. </li><li>`1`: In process. </li><li>`2`: Valid. </li><li>`-2`: Isolated (for monthly subscribed instances). </li><li>`-3`: Isolated (for pay-as-you-go instances).</li></ul>
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
                     * 获取VPC ID. This parameter can be left empty for the classic network.
                     * @return VpcId VPC ID. This parameter can be left empty for the classic network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This parameter can be left empty for the classic network.
                     * @param _vpcId VPC ID. This parameter can be left empty for the classic network.
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
                     * 获取Subnet ID of VPC. This parameter can be left empty for the classic network. If it is passed in as an input parameter, the corresponding VpcId must be set.
                     * @return SubnetId Subnet ID of VPC. This parameter can be left empty for the classic network. If it is passed in as an input parameter, the corresponding VpcId must be set.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of VPC. This parameter can be left empty for the classic network. If it is passed in as an input parameter, the corresponding VpcId must be set.
                     * @param _subnetId Subnet ID of VPC. This parameter can be left empty for the classic network. If it is passed in as an input parameter, the corresponding VpcId must be set.
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
                     * 获取Sort by field of the returned result set. Valid values: `ProjectId`, `InstanceName`, `CreateTime`. The return results are sorted in ascending order by default.
                     * @return OrderBy Sort by field of the returned result set. Valid values: `ProjectId`, `InstanceName`, `CreateTime`. The return results are sorted in ascending order by default.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field of the returned result set. Valid values: `ProjectId`, `InstanceName`, `CreateTime`. The return results are sorted in ascending order by default.
                     * @param _orderBy Sort by field of the returned result set. Valid values: `ProjectId`, `InstanceName`, `CreateTime`. The return results are sorted in ascending order by default.
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
                     * 获取Sorting method of the return result set. Valid values: `ASC`, `DESC`.
                     * @return OrderByType Sorting method of the return result set. Valid values: `ASC`, `DESC`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method of the return result set. Valid values: `ASC`, `DESC`.
                     * @param _orderByType Sorting method of the return result set. Valid values: `ASC`, `DESC`.
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
                     * 获取Project ID
                     * @return ProjectIds Project ID
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID
                     * @param _projectIds Project ID
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
                     * 获取Search keyword, which can be instance ID, instance name, or complete IP.
                     * @return SearchKey Search keyword, which can be instance ID, instance name, or complete IP.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword, which can be instance ID, instance name, or complete IP.
                     * @param _searchKey Search keyword, which can be instance ID, instance name, or complete IP.
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
                     * 获取Tag information
                     * @return Tags Tag information
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag information
                     * @param _tags Tag information
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
                     * List of instance IDs in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB console page.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance type. Valid values: <ul><li>`0`: All instances. </li><li>`1`: Regular instances. </li><li>`2`: Temp instances. </li><li>`3`: Read-only instances. </li><li>`-1`: Regular instances, read-only instances, disaster recovery instances.</li></ul>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Cluster type. Valid values: <ul><li>`0`: Replica set instances. </li><li>`1`: Sharded cluster instances. </li><li>`-1`: All instances.</li></ul>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Instance status. Valid values: <ul><li>`0`: To be initialized. </li><li>`1`: In process. </li><li>`2`: Valid. </li><li>`-2`: Isolated (for monthly subscribed instances). </li><li>`-3`: Isolated (for pay-as-you-go instances).</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC ID. This parameter can be left empty for the classic network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of VPC. This parameter can be left empty for the classic network. If it is passed in as an input parameter, the corresponding VpcId must be set.
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
                     * Sort by field of the returned result set. Valid values: `ProjectId`, `InstanceName`, `CreateTime`. The return results are sorted in ascending order by default.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method of the return result set. Valid values: `ASC`, `DESC`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Search keyword, which can be instance ID, instance name, or complete IP.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
