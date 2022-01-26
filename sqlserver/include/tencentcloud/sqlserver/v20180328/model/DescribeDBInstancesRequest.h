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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values:
<li>1: applying</li>
<li>2: running</li>
<li>3: running restrictedly (primary/secondary switching)</li>
<li>4: isolated</li>
<li>5: repossessing</li>
<li>6: repossessed</li>
<li>7: executing task (e.g., backing up or rolling back instance)</li>
<li>8: deactivated</li>
<li>9: scaling out instance</li>
<li>10: migrating instance</li>
<li>11: read-only</li>
<li>12: restarting</li>
                     * @return Status Instance status. Valid values:
<li>1: applying</li>
<li>2: running</li>
<li>3: running restrictedly (primary/secondary switching)</li>
<li>4: isolated</li>
<li>5: repossessing</li>
<li>6: repossessed</li>
<li>7: executing task (e.g., backing up or rolling back instance)</li>
<li>8: deactivated</li>
<li>9: scaling out instance</li>
<li>10: migrating instance</li>
<li>11: read-only</li>
<li>12: restarting</li>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values:
<li>1: applying</li>
<li>2: running</li>
<li>3: running restrictedly (primary/secondary switching)</li>
<li>4: isolated</li>
<li>5: repossessing</li>
<li>6: repossessed</li>
<li>7: executing task (e.g., backing up or rolling back instance)</li>
<li>8: deactivated</li>
<li>9: scaling out instance</li>
<li>10: migrating instance</li>
<li>11: read-only</li>
<li>12: restarting</li>
                     * @param Status Instance status. Valid values:
<li>1: applying</li>
<li>2: running</li>
<li>3: running restrictedly (primary/secondary switching)</li>
<li>4: isolated</li>
<li>5: repossessing</li>
<li>6: repossessed</li>
<li>7: executing task (e.g., backing up or rolling back instance)</li>
<li>8: deactivated</li>
<li>9: scaling out instance</li>
<li>10: migrating instance</li>
<li>11: read-only</li>
<li>12: restarting</li>
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param Offset Page number. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page. Value range: 1-100. Default value: 100
                     * @return Limit Number of results per page. Value range: 1-100. Default value: 100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Value range: 1-100. Default value: 100
                     * @param Limit Number of results per page. Value range: 1-100. Default value: 100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取One or more instance IDs in the format of mssql-si2823jyl
                     * @return InstanceIdSet One or more instance IDs in the format of mssql-si2823jyl
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置One or more instance IDs in the format of mssql-si2823jyl
                     * @param InstanceIdSet One or more instance IDs in the format of mssql-si2823jyl
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Retrieves billing type. 0: pay-as-you-go
                     * @return PayMode Retrieves billing type. 0: pay-as-you-go
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Retrieves billing type. 0: pay-as-you-go
                     * @param PayMode Retrieves billing type. 0: pay-as-you-go
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Unique string-type ID of instance VPC in the format of `vpc-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     * @return VpcId Unique string-type ID of instance VPC in the format of `vpc-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique string-type ID of instance VPC in the format of `vpc-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     * @param VpcId Unique string-type ID of instance VPC in the format of `vpc-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Unique string-type ID of instance subnet in the format of `subnet-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     * @return SubnetId Unique string-type ID of instance subnet in the format of `subnet-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique string-type ID of instance subnet in the format of `subnet-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     * @param SubnetId Unique string-type ID of instance subnet in the format of `subnet-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The list of instance private IPs, such as 172.1.0.12
                     * @return VipSet The list of instance private IPs, such as 172.1.0.12
                     */
                    std::vector<std::string> GetVipSet() const;

                    /**
                     * 设置The list of instance private IPs, such as 172.1.0.12
                     * @param VipSet The list of instance private IPs, such as 172.1.0.12
                     */
                    void SetVipSet(const std::vector<std::string>& _vipSet);

                    /**
                     * 判断参数 VipSet 是否已赋值
                     * @return VipSet 是否已赋值
                     */
                    bool VipSetHasBeenSet() const;

                    /**
                     * 获取The list of instance names used for fuzzy match
                     * @return InstanceNameSet The list of instance names used for fuzzy match
                     */
                    std::vector<std::string> GetInstanceNameSet() const;

                    /**
                     * 设置The list of instance names used for fuzzy match
                     * @param InstanceNameSet The list of instance names used for fuzzy match
                     */
                    void SetInstanceNameSet(const std::vector<std::string>& _instanceNameSet);

                    /**
                     * 判断参数 InstanceNameSet 是否已赋值
                     * @return InstanceNameSet 是否已赋值
                     */
                    bool InstanceNameSetHasBeenSet() const;

                    /**
                     * 获取The list of instance version numbers, such as 2008R2, 2012SP3
                     * @return VersionSet The list of instance version numbers, such as 2008R2, 2012SP3
                     */
                    std::vector<std::string> GetVersionSet() const;

                    /**
                     * 设置The list of instance version numbers, such as 2008R2, 2012SP3
                     * @param VersionSet The list of instance version numbers, such as 2008R2, 2012SP3
                     */
                    void SetVersionSet(const std::vector<std::string>& _versionSet);

                    /**
                     * 判断参数 VersionSet 是否已赋值
                     * @return VersionSet 是否已赋值
                     */
                    bool VersionSetHasBeenSet() const;

                    /**
                     * 获取Instance availability zone, such as ap-guangzhou-2
                     * @return Zone Instance availability zone, such as ap-guangzhou-2
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance availability zone, such as ap-guangzhou-2
                     * @param Zone Instance availability zone, such as ap-guangzhou-2
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The list of instance tags
                     * @return TagKeys The list of instance tags
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置The list of instance tags
                     * @param TagKeys The list of instance tags
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取Keyword used for fuzzy match, including instance ID, instance name, and instance private IP
                     * @return SearchKey Keyword used for fuzzy match, including instance ID, instance name, and instance private IP
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Keyword used for fuzzy match, including instance ID, instance name, and instance private IP
                     * @param SearchKey Keyword used for fuzzy match, including instance ID, instance name, and instance private IP
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Unique Uid of an instance
                     * @return UidSet Unique Uid of an instance
                     */
                    std::vector<std::string> GetUidSet() const;

                    /**
                     * 设置Unique Uid of an instance
                     * @param UidSet Unique Uid of an instance
                     */
                    void SetUidSet(const std::vector<std::string>& _uidSet);

                    /**
                     * 判断参数 UidSet 是否已赋值
                     * @return UidSet 是否已赋值
                     */
                    bool UidSetHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance status. Valid values:
<li>1: applying</li>
<li>2: running</li>
<li>3: running restrictedly (primary/secondary switching)</li>
<li>4: isolated</li>
<li>5: repossessing</li>
<li>6: repossessed</li>
<li>7: executing task (e.g., backing up or rolling back instance)</li>
<li>8: deactivated</li>
<li>9: scaling out instance</li>
<li>10: migrating instance</li>
<li>11: read-only</li>
<li>12: restarting</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page. Value range: 1-100. Default value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * One or more instance IDs in the format of mssql-si2823jyl
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Retrieves billing type. 0: pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Unique string-type ID of instance VPC in the format of `vpc-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique string-type ID of instance subnet in the format of `subnet-xxx`. If an empty string ("") is passed in, filtering will be made by basic network.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The list of instance private IPs, such as 172.1.0.12
                     */
                    std::vector<std::string> m_vipSet;
                    bool m_vipSetHasBeenSet;

                    /**
                     * The list of instance names used for fuzzy match
                     */
                    std::vector<std::string> m_instanceNameSet;
                    bool m_instanceNameSetHasBeenSet;

                    /**
                     * The list of instance version numbers, such as 2008R2, 2012SP3
                     */
                    std::vector<std::string> m_versionSet;
                    bool m_versionSetHasBeenSet;

                    /**
                     * Instance availability zone, such as ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The list of instance tags
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * Keyword used for fuzzy match, including instance ID, instance name, and instance private IP
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Unique Uid of an instance
                     */
                    std::vector<std::string> m_uidSet;
                    bool m_uidSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
