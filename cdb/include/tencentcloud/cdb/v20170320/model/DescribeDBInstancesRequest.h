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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Project ID. You can use the [project list querying API](https://cloud.tencent.com/document/product/378/4400) to query the project ID.
                     * @return ProjectId Project ID. You can use the [project list querying API](https://cloud.tencent.com/document/product/378/4400) to query the project ID.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. You can use the [project list querying API](https://cloud.tencent.com/document/product/378/4400) to query the project ID.
                     * @param ProjectId Project ID. You can use the [project list querying API](https://cloud.tencent.com/document/product/378/4400) to query the project ID.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance type. Value range: 1 (master), 2 (disaster recovery), 3 (read-only).
                     * @return InstanceTypes Instance type. Value range: 1 (master), 2 (disaster recovery), 3 (read-only).
                     */
                    std::vector<uint64_t> GetInstanceTypes() const;

                    /**
                     * 设置Instance type. Value range: 1 (master), 2 (disaster recovery), 3 (read-only).
                     * @param InstanceTypes Instance type. Value range: 1 (master), 2 (disaster recovery), 3 (read-only).
                     */
                    void SetInstanceTypes(const std::vector<uint64_t>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取Private IP address of the instance.
                     * @return Vips Private IP address of the instance.
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置Private IP address of the instance.
                     * @param Vips Private IP address of the instance.
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取Instance status. Value range: <br>0 - creating <br>1 - running <br>4 - isolating <br>5 - isolated (the instance can be restored and started in the recycle bin)
                     * @return Status Instance status. Value range: <br>0 - creating <br>1 - running <br>4 - isolating <br>5 - isolated (the instance can be restored and started in the recycle bin)
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置Instance status. Value range: <br>0 - creating <br>1 - running <br>4 - isolating <br>5 - isolated (the instance can be restored and started in the recycle bin)
                     * @param Status Instance status. Value range: <br>0 - creating <br>1 - running <br>4 - isolating <br>5 - isolated (the instance can be restored and started in the recycle bin)
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     * @return Limit Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     * @param Limit Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Security group ID. When it is used as a filter, the `WithSecurityGroup` parameter should be set to 1.
                     * @return SecurityGroupId Security group ID. When it is used as a filter, the `WithSecurityGroup` parameter should be set to 1.
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID. When it is used as a filter, the `WithSecurityGroup` parameter should be set to 1.
                     * @param SecurityGroupId Security group ID. When it is used as a filter, the `WithSecurityGroup` parameter should be set to 1.
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Billing method. Value range: 0 (monthly subscribed), 1 (hourly).
                     * @return PayTypes Billing method. Value range: 0 (monthly subscribed), 1 (hourly).
                     */
                    std::vector<uint64_t> GetPayTypes() const;

                    /**
                     * 设置Billing method. Value range: 0 (monthly subscribed), 1 (hourly).
                     * @param PayTypes Billing method. Value range: 0 (monthly subscribed), 1 (hourly).
                     */
                    void SetPayTypes(const std::vector<uint64_t>& _payTypes);

                    /**
                     * 判断参数 PayTypes 是否已赋值
                     * @return PayTypes 是否已赋值
                     */
                    bool PayTypesHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceNames Instance name.
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置Instance name.
                     * @param InstanceNames Instance name.
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取Instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating slave <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance <br>15 - pending upgrade and switch <br>16 - upgrade and switch in progress <br>17 - upgrade and switch completed
                     * @return TaskStatus Instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating slave <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance <br>15 - pending upgrade and switch <br>16 - upgrade and switch in progress <br>17 - upgrade and switch completed
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置Instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating slave <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance <br>15 - pending upgrade and switch <br>16 - upgrade and switch in progress <br>17 - upgrade and switch completed
                     * @param TaskStatus Instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating slave <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance <br>15 - pending upgrade and switch <br>16 - upgrade and switch in progress <br>17 - upgrade and switch completed
                     */
                    void SetTaskStatus(const std::vector<uint64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Version of the instance database engine. Value range: 5.1, 5.5, 5.6, 5.7.
                     * @return EngineVersions Version of the instance database engine. Value range: 5.1, 5.5, 5.6, 5.7.
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置Version of the instance database engine. Value range: 5.1, 5.5, 5.6, 5.7.
                     * @param EngineVersions Version of the instance database engine. Value range: 5.1, 5.5, 5.6, 5.7.
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取VPC ID.
                     * @return VpcIds VPC ID.
                     */
                    std::vector<uint64_t> GetVpcIds() const;

                    /**
                     * 设置VPC ID.
                     * @param VpcIds VPC ID.
                     */
                    void SetVpcIds(const std::vector<uint64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取AZ ID.
                     * @return ZoneIds AZ ID.
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置AZ ID.
                     * @param ZoneIds AZ ID.
                     */
                    void SetZoneIds(const std::vector<uint64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return SubnetIds Subnet ID.
                     */
                    std::vector<uint64_t> GetSubnetIds() const;

                    /**
                     * 设置Subnet ID.
                     * @param SubnetIds Subnet ID.
                     */
                    void SetSubnetIds(const std::vector<uint64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Lock flag.
                     * @return CdbErrors Lock flag.
                     */
                    std::vector<int64_t> GetCdbErrors() const;

                    /**
                     * 设置Lock flag.
                     * @param CdbErrors Lock flag.
                     */
                    void SetCdbErrors(const std::vector<int64_t>& _cdbErrors);

                    /**
                     * 判断参数 CdbErrors 是否已赋值
                     * @return CdbErrors 是否已赋值
                     */
                    bool CdbErrorsHasBeenSet() const;

                    /**
                     * 获取Sort by field of the returned result set. Currently, supported values include "InstanceId", "InstanceName", "CreateTime", and "DeadlineTime".
                     * @return OrderBy Sort by field of the returned result set. Currently, supported values include "InstanceId", "InstanceName", "CreateTime", and "DeadlineTime".
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sort by field of the returned result set. Currently, supported values include "InstanceId", "InstanceName", "CreateTime", and "DeadlineTime".
                     * @param OrderBy Sort by field of the returned result set. Currently, supported values include "InstanceId", "InstanceName", "CreateTime", and "DeadlineTime".
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting method of the returned result set. Currently, "ASC" or "DESC" is supported.
                     * @return OrderDirection Sorting method of the returned result set. Currently, "ASC" or "DESC" is supported.
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting method of the returned result set. Currently, "ASC" or "DESC" is supported.
                     * @param OrderDirection Sorting method of the returned result set. Currently, "ASC" or "DESC" is supported.
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取Whether security group ID is used as a filter
                     * @return WithSecurityGroup Whether security group ID is used as a filter
                     */
                    int64_t GetWithSecurityGroup() const;

                    /**
                     * 设置Whether security group ID is used as a filter
                     * @param WithSecurityGroup Whether security group ID is used as a filter
                     */
                    void SetWithSecurityGroup(const int64_t& _withSecurityGroup);

                    /**
                     * 判断参数 WithSecurityGroup 是否已赋值
                     * @return WithSecurityGroup 是否已赋值
                     */
                    bool WithSecurityGroupHasBeenSet() const;

                    /**
                     * 获取Whether dedicated cluster details are included. Value range: 0 (not included), 1 (included)
                     * @return WithExCluster Whether dedicated cluster details are included. Value range: 0 (not included), 1 (included)
                     */
                    int64_t GetWithExCluster() const;

                    /**
                     * 设置Whether dedicated cluster details are included. Value range: 0 (not included), 1 (included)
                     * @param WithExCluster Whether dedicated cluster details are included. Value range: 0 (not included), 1 (included)
                     */
                    void SetWithExCluster(const int64_t& _withExCluster);

                    /**
                     * 判断参数 WithExCluster 是否已赋值
                     * @return WithExCluster 是否已赋值
                     */
                    bool WithExClusterHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster ID.
                     * @return ExClusterId Exclusive cluster ID.
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置Exclusive cluster ID.
                     * @param ExClusterId Exclusive cluster ID.
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceIds Instance ID.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceIds Instance ID.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Initialization flag. Value range: 0 (not initialized), 1 (initialized).
                     * @return InitFlag Initialization flag. Value range: 0 (not initialized), 1 (initialized).
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置Initialization flag. Value range: 0 (not initialized), 1 (initialized).
                     * @param InitFlag Initialization flag. Value range: 0 (not initialized), 1 (initialized).
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取Whether instances corresponding to the disaster recovery relationship are included. Valid values: 0 (not included), 1 (included). Default value: 1. If a master instance is pulled, the data of the disaster recovery relationship will be in the `DrInfo` field. If a disaster recovery instance is pulled, the data of the disaster recovery relationship will be in the `MasterInfo` field. The disaster recovery relationship contains only partial basic data. To get the detailed data, you need to call an API to pull it.
                     * @return WithDr Whether instances corresponding to the disaster recovery relationship are included. Valid values: 0 (not included), 1 (included). Default value: 1. If a master instance is pulled, the data of the disaster recovery relationship will be in the `DrInfo` field. If a disaster recovery instance is pulled, the data of the disaster recovery relationship will be in the `MasterInfo` field. The disaster recovery relationship contains only partial basic data. To get the detailed data, you need to call an API to pull it.
                     */
                    int64_t GetWithDr() const;

                    /**
                     * 设置Whether instances corresponding to the disaster recovery relationship are included. Valid values: 0 (not included), 1 (included). Default value: 1. If a master instance is pulled, the data of the disaster recovery relationship will be in the `DrInfo` field. If a disaster recovery instance is pulled, the data of the disaster recovery relationship will be in the `MasterInfo` field. The disaster recovery relationship contains only partial basic data. To get the detailed data, you need to call an API to pull it.
                     * @param WithDr Whether instances corresponding to the disaster recovery relationship are included. Valid values: 0 (not included), 1 (included). Default value: 1. If a master instance is pulled, the data of the disaster recovery relationship will be in the `DrInfo` field. If a disaster recovery instance is pulled, the data of the disaster recovery relationship will be in the `MasterInfo` field. The disaster recovery relationship contains only partial basic data. To get the detailed data, you need to call an API to pull it.
                     */
                    void SetWithDr(const int64_t& _withDr);

                    /**
                     * 判断参数 WithDr 是否已赋值
                     * @return WithDr 是否已赋值
                     */
                    bool WithDrHasBeenSet() const;

                    /**
                     * 获取Whether read-only instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     * @return WithRo Whether read-only instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    int64_t GetWithRo() const;

                    /**
                     * 设置Whether read-only instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     * @param WithRo Whether read-only instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    void SetWithRo(const int64_t& _withRo);

                    /**
                     * 判断参数 WithRo 是否已赋值
                     * @return WithRo 是否已赋值
                     */
                    bool WithRoHasBeenSet() const;

                    /**
                     * 获取Whether master instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     * @return WithMaster Whether master instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    int64_t GetWithMaster() const;

                    /**
                     * 设置Whether master instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     * @param WithMaster Whether master instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    void SetWithMaster(const int64_t& _withMaster);

                    /**
                     * 判断参数 WithMaster 是否已赋值
                     * @return WithMaster 是否已赋值
                     */
                    bool WithMasterHasBeenSet() const;

                    /**
                     * 获取Placement group ID list.
                     * @return DeployGroupIds Placement group ID list.
                     */
                    std::vector<std::string> GetDeployGroupIds() const;

                    /**
                     * 设置Placement group ID list.
                     * @param DeployGroupIds Placement group ID list.
                     */
                    void SetDeployGroupIds(const std::vector<std::string>& _deployGroupIds);

                    /**
                     * 判断参数 DeployGroupIds 是否已赋值
                     * @return DeployGroupIds 是否已赋值
                     */
                    bool DeployGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Project ID. You can use the [project list querying API](https://cloud.tencent.com/document/product/378/4400) to query the project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance type. Value range: 1 (master), 2 (disaster recovery), 3 (read-only).
                     */
                    std::vector<uint64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * Private IP address of the instance.
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * Instance status. Value range: <br>0 - creating <br>1 - running <br>4 - isolating <br>5 - isolated (the instance can be restored and started in the recycle bin)
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned for a single request. Default value: 20. Maximum value: 2,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Security group ID. When it is used as a filter, the `WithSecurityGroup` parameter should be set to 1.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Billing method. Value range: 0 (monthly subscribed), 1 (hourly).
                     */
                    std::vector<uint64_t> m_payTypes;
                    bool m_payTypesHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * Instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating slave <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance <br>15 - pending upgrade and switch <br>16 - upgrade and switch in progress <br>17 - upgrade and switch completed
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Version of the instance database engine. Value range: 5.1, 5.5, 5.6, 5.7.
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * VPC ID.
                     */
                    std::vector<uint64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * AZ ID.
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::vector<uint64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Lock flag.
                     */
                    std::vector<int64_t> m_cdbErrors;
                    bool m_cdbErrorsHasBeenSet;

                    /**
                     * Sort by field of the returned result set. Currently, supported values include "InstanceId", "InstanceName", "CreateTime", and "DeadlineTime".
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method of the returned result set. Currently, "ASC" or "DESC" is supported.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * Whether security group ID is used as a filter
                     */
                    int64_t m_withSecurityGroup;
                    bool m_withSecurityGroupHasBeenSet;

                    /**
                     * Whether dedicated cluster details are included. Value range: 0 (not included), 1 (included)
                     */
                    int64_t m_withExCluster;
                    bool m_withExClusterHasBeenSet;

                    /**
                     * Exclusive cluster ID.
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Initialization flag. Value range: 0 (not initialized), 1 (initialized).
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * Whether instances corresponding to the disaster recovery relationship are included. Valid values: 0 (not included), 1 (included). Default value: 1. If a master instance is pulled, the data of the disaster recovery relationship will be in the `DrInfo` field. If a disaster recovery instance is pulled, the data of the disaster recovery relationship will be in the `MasterInfo` field. The disaster recovery relationship contains only partial basic data. To get the detailed data, you need to call an API to pull it.
                     */
                    int64_t m_withDr;
                    bool m_withDrHasBeenSet;

                    /**
                     * Whether read-only instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    int64_t m_withRo;
                    bool m_withRoHasBeenSet;

                    /**
                     * Whether master instances are included. Valid values: 0 (not included), 1 (included). Default value: 1.
                     */
                    int64_t m_withMaster;
                    bool m_withMasterHasBeenSet;

                    /**
                     * Placement group ID list.
                     */
                    std::vector<std::string> m_deployGroupIds;
                    bool m_deployGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
