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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstances request structure.
                */
                class DescribeDCDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDCDBInstancesRequest();
                    ~DescribeDCDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by instance ID or IDs. Instance ID is in the format of dcdbt-2t4cf98d
                     * @return InstanceIds Query by instance ID or IDs. Instance ID is in the format of dcdbt-2t4cf98d
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Query by instance ID or IDs. Instance ID is in the format of dcdbt-2t4cf98d
                     * @param InstanceIds Query by instance ID or IDs. Instance ID is in the format of dcdbt-2t4cf98d
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Search field name. Valid values: instancename (search by instance name); vip (search by private IP); all (search by instance ID, instance name, and private IP).
                     * @return SearchName Search field name. Valid values: instancename (search by instance name); vip (search by private IP); all (search by instance ID, instance name, and private IP).
                     */
                    std::string GetSearchName() const;

                    /**
                     * 设置Search field name. Valid values: instancename (search by instance name); vip (search by private IP); all (search by instance ID, instance name, and private IP).
                     * @param SearchName Search field name. Valid values: instancename (search by instance name); vip (search by private IP); all (search by instance ID, instance name, and private IP).
                     */
                    void SetSearchName(const std::string& _searchName);

                    /**
                     * 判断参数 SearchName 是否已赋值
                     * @return SearchName 是否已赋值
                     */
                    bool SearchNameHasBeenSet() const;

                    /**
                     * 获取Search keyword. Fuzzy search is supported. Multiple keywords should be separated by line breaks (`\n`).
                     * @return SearchKey Search keyword. Fuzzy search is supported. Multiple keywords should be separated by line breaks (`\n`).
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword. Fuzzy search is supported. Multiple keywords should be separated by line breaks (`\n`).
                     * @param SearchKey Search keyword. Fuzzy search is supported. Multiple keywords should be separated by line breaks (`\n`).
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Query by project ID
                     * @return ProjectIds Query by project ID
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Query by project ID
                     * @param ProjectIds Query by project ID
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Whether to search by VPC
                     * @return IsFilterVpc Whether to search by VPC
                     */
                    bool GetIsFilterVpc() const;

                    /**
                     * 设置Whether to search by VPC
                     * @param IsFilterVpc Whether to search by VPC
                     */
                    void SetIsFilterVpc(const bool& _isFilterVpc);

                    /**
                     * 判断参数 IsFilterVpc 是否已赋值
                     * @return IsFilterVpc 是否已赋值
                     */
                    bool IsFilterVpcHasBeenSet() const;

                    /**
                     * 获取VPC ID, which is valid when `IsFilterVpc` is 1
                     * @return VpcId VPC ID, which is valid when `IsFilterVpc` is 1
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, which is valid when `IsFilterVpc` is 1
                     * @param VpcId VPC ID, which is valid when `IsFilterVpc` is 1
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID, which is valid when `IsFilterVpc` is 1
                     * @return SubnetId VPC subnet ID, which is valid when `IsFilterVpc` is 1
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID, which is valid when `IsFilterVpc` is 1
                     * @param SubnetId VPC subnet ID, which is valid when `IsFilterVpc` is 1
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values: projectId; createtime; instancename
                     * @return OrderBy Sort by field. Valid values: projectId; createtime; instancename
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field. Valid values: projectId; createtime; instancename
                     * @param OrderBy Sort by field. Valid values: projectId; createtime; instancename
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sort by type. Valid values: desc; asc
                     * @return OrderByType Sort by type. Valid values: desc; asc
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sort by type. Valid values: desc; asc
                     * @param OrderByType Sort by type. Valid values: desc; asc
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param Offset Offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 10. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取1: non-dedicated cluster; 2: dedicated cluster; 0: all
                     * @return ExclusterType 1: non-dedicated cluster; 2: dedicated cluster; 0: all
                     */
                    int64_t GetExclusterType() const;

                    /**
                     * 设置1: non-dedicated cluster; 2: dedicated cluster; 0: all
                     * @param ExclusterType 1: non-dedicated cluster; 2: dedicated cluster; 0: all
                     */
                    void SetExclusterType(const int64_t& _exclusterType);

                    /**
                     * 判断参数 ExclusterType 是否已赋值
                     * @return ExclusterType 是否已赋值
                     */
                    bool ExclusterTypeHasBeenSet() const;

                    /**
                     * 获取Identifies whether to use the `ExclusterType` field. false: no; true: yes
                     * @return IsFilterExcluster Identifies whether to use the `ExclusterType` field. false: no; true: yes
                     */
                    bool GetIsFilterExcluster() const;

                    /**
                     * 设置Identifies whether to use the `ExclusterType` field. false: no; true: yes
                     * @param IsFilterExcluster Identifies whether to use the `ExclusterType` field. false: no; true: yes
                     */
                    void SetIsFilterExcluster(const bool& _isFilterExcluster);

                    /**
                     * 判断参数 IsFilterExcluster 是否已赋值
                     * @return IsFilterExcluster 是否已赋值
                     */
                    bool IsFilterExclusterHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster ID
                     * @return ExclusterIds Dedicated cluster ID
                     */
                    std::vector<std::string> GetExclusterIds() const;

                    /**
                     * 设置Dedicated cluster ID
                     * @param ExclusterIds Dedicated cluster ID
                     */
                    void SetExclusterIds(const std::vector<std::string>& _exclusterIds);

                    /**
                     * 判断参数 ExclusterIds 是否已赋值
                     * @return ExclusterIds 是否已赋值
                     */
                    bool ExclusterIdsHasBeenSet() const;

                    /**
                     * 获取Tag key used in queries
                     * @return TagKeys Tag key used in queries
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Tag key used in queries
                     * @param TagKeys Tag key used in queries
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Instance types used in filtering. Valid values: 1 (dedicated instance), 2 (primary instance), 3 (disaster recovery instance). Multiple values should be separated by commas.
                     * @return FilterInstanceType Instance types used in filtering. Valid values: 1 (dedicated instance), 2 (primary instance), 3 (disaster recovery instance). Multiple values should be separated by commas.
                     */
                    std::string GetFilterInstanceType() const;

                    /**
                     * 设置Instance types used in filtering. Valid values: 1 (dedicated instance), 2 (primary instance), 3 (disaster recovery instance). Multiple values should be separated by commas.
                     * @param FilterInstanceType Instance types used in filtering. Valid values: 1 (dedicated instance), 2 (primary instance), 3 (disaster recovery instance). Multiple values should be separated by commas.
                     */
                    void SetFilterInstanceType(const std::string& _filterInstanceType);

                    /**
                     * 判断参数 FilterInstanceType 是否已赋值
                     * @return FilterInstanceType 是否已赋值
                     */
                    bool FilterInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Use this filter to include instances in specific statuses
                     * @return Status Use this filter to include instances in specific statuses
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Use this filter to include instances in specific statuses
                     * @param Status Use this filter to include instances in specific statuses
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Use this filter to exclude instances in specific statuses
                     * @return ExcludeStatus Use this filter to exclude instances in specific statuses
                     */
                    std::vector<int64_t> GetExcludeStatus() const;

                    /**
                     * 设置Use this filter to exclude instances in specific statuses
                     * @param ExcludeStatus Use this filter to exclude instances in specific statuses
                     */
                    void SetExcludeStatus(const std::vector<int64_t>& _excludeStatus);

                    /**
                     * 判断参数 ExcludeStatus 是否已赋值
                     * @return ExcludeStatus 是否已赋值
                     */
                    bool ExcludeStatusHasBeenSet() const;

                private:

                    /**
                     * Query by instance ID or IDs. Instance ID is in the format of dcdbt-2t4cf98d
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Search field name. Valid values: instancename (search by instance name); vip (search by private IP); all (search by instance ID, instance name, and private IP).
                     */
                    std::string m_searchName;
                    bool m_searchNameHasBeenSet;

                    /**
                     * Search keyword. Fuzzy search is supported. Multiple keywords should be separated by line breaks (`\n`).
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Query by project ID
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Whether to search by VPC
                     */
                    bool m_isFilterVpc;
                    bool m_isFilterVpcHasBeenSet;

                    /**
                     * VPC ID, which is valid when `IsFilterVpc` is 1
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID, which is valid when `IsFilterVpc` is 1
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Sort by field. Valid values: projectId; createtime; instancename
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sort by type. Valid values: desc; asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 1: non-dedicated cluster; 2: dedicated cluster; 0: all
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * Identifies whether to use the `ExclusterType` field. false: no; true: yes
                     */
                    bool m_isFilterExcluster;
                    bool m_isFilterExclusterHasBeenSet;

                    /**
                     * Dedicated cluster ID
                     */
                    std::vector<std::string> m_exclusterIds;
                    bool m_exclusterIdsHasBeenSet;

                    /**
                     * Tag key used in queries
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Instance types used in filtering. Valid values: 1 (dedicated instance), 2 (primary instance), 3 (disaster recovery instance). Multiple values should be separated by commas.
                     */
                    std::string m_filterInstanceType;
                    bool m_filterInstanceTypeHasBeenSet;

                    /**
                     * Use this filter to include instances in specific statuses
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Use this filter to exclude instances in specific statuses
                     */
                    std::vector<int64_t> m_excludeStatus;
                    bool m_excludeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_
