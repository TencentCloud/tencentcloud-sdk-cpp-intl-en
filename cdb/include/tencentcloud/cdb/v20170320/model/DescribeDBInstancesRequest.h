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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Tag.h>


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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取<p>Instance type. Valid values: 1 - Primary instance, 2 - Disaster recovery instance, 3 - Read-only instance.</p>
                     * @return InstanceTypes <p>Instance type. Valid values: 1 - Primary instance, 2 - Disaster recovery instance, 3 - Read-only instance.</p>
                     * 
                     */
                    std::vector<uint64_t> GetInstanceTypes() const;

                    /**
                     * 设置<p>Instance type. Valid values: 1 - Primary instance, 2 - Disaster recovery instance, 3 - Read-only instance.</p>
                     * @param _instanceTypes <p>Instance type. Valid values: 1 - Primary instance, 2 - Disaster recovery instance, 3 - Read-only instance.</p>
                     * 
                     */
                    void SetInstanceTypes(const std::vector<uint64_t>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address of the instance.</p>
                     * @return Vips <p>Private IP address of the instance.</p>
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置<p>Private IP address of the instance.</p>
                     * @param _vips <p>Private IP address of the instance.</p>
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取<p>Instance status. Valid values:<br>0 - Creating<br>1 - Running<br>4 - Isolation operation in progress<br>5 - Isolated (can be restored from the Recycle Bin)</p>
                     * @return Status <p>Instance status. Valid values:<br>0 - Creating<br>1 - Running<br>4 - Isolation operation in progress<br>5 - Isolated (can be restored from the Recycle Bin)</p>
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置<p>Instance status. Valid values:<br>0 - Creating<br>1 - Running<br>4 - Isolation operation in progress<br>5 - Isolated (can be restored from the Recycle Bin)</p>
                     * @param _status <p>Instance status. Valid values:<br>0 - Creating<br>1 - Running<br>4 - Isolation operation in progress<br>5 - Isolated (can be restored from the Recycle Bin)</p>
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Offset. Default value is 0.</p>
                     * @return Offset <p>Offset. Default value is 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value is 0.</p>
                     * @param _offset <p>Offset. Default value is 0.</p>
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
                     * 获取<p>Number of items returned per request. Default value: 20. Maximum value: 2000.</p>
                     * @return Limit <p>Number of items returned per request. Default value: 20. Maximum value: 2000.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items returned per request. Default value: 20. Maximum value: 2000.</p>
                     * @param _limit <p>Number of items returned per request. Default value: 20. Maximum value: 2000.</p>
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
                     * 获取<p>Security group ID. When using security group ID as the filter condition, the WithSecurityGroup parameter needs to be specified as 1.</p>
                     * @return SecurityGroupId <p>Security group ID. When using security group ID as the filter condition, the WithSecurityGroup parameter needs to be specified as 1.</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>Security group ID. When using security group ID as the filter condition, the WithSecurityGroup parameter needs to be specified as 1.</p>
                     * @param _securityGroupId <p>Security group ID. When using security group ID as the filter condition, the WithSecurityGroup parameter needs to be specified as 1.</p>
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Payment type. Valid values: 0 - yearly/monthly subscription; 1 - bill by hour.</p>
                     * @return PayTypes <p>Payment type. Valid values: 0 - yearly/monthly subscription; 1 - bill by hour.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPayTypes() const;

                    /**
                     * 设置<p>Payment type. Valid values: 0 - yearly/monthly subscription; 1 - bill by hour.</p>
                     * @param _payTypes <p>Payment type. Valid values: 0 - yearly/monthly subscription; 1 - bill by hour.</p>
                     * 
                     */
                    void SetPayTypes(const std::vector<uint64_t>& _payTypes);

                    /**
                     * 判断参数 PayTypes 是否已赋值
                     * @return PayTypes 是否已赋值
                     * 
                     */
                    bool PayTypesHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceNames <p>Instance name.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceNames <p>Instance name.</p>
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取<p>Instance task status, possible values:<br>0 - No tasks<br>1 - Upgrading<br>2 - Data import in progress<br>3 - Enabling Slave<br>4 - Enabling public network access<br>5 - Batch operation in progress<br>6 - Rolling back<br>7 - Disabling public network access<br>8 - Password change in progress<br>9 - Renaming instance<br>10 - Restarting<br>12 - Self-built migration in progress<br>13 - Deleting database table<br>14 - Disaster recovery instance creation sync in progress<br>15 - Upgrade pending switch<br>16 - Upgrade and switch in progress<br>17 - Switch completed<br>19 - Parameter setting pending execution<br>34 - Node in-place upgrade to be executed</p>
                     * @return TaskStatus <p>Instance task status, possible values:<br>0 - No tasks<br>1 - Upgrading<br>2 - Data import in progress<br>3 - Enabling Slave<br>4 - Enabling public network access<br>5 - Batch operation in progress<br>6 - Rolling back<br>7 - Disabling public network access<br>8 - Password change in progress<br>9 - Renaming instance<br>10 - Restarting<br>12 - Self-built migration in progress<br>13 - Deleting database table<br>14 - Disaster recovery instance creation sync in progress<br>15 - Upgrade pending switch<br>16 - Upgrade and switch in progress<br>17 - Switch completed<br>19 - Parameter setting pending execution<br>34 - Node in-place upgrade to be executed</p>
                     * 
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置<p>Instance task status, possible values:<br>0 - No tasks<br>1 - Upgrading<br>2 - Data import in progress<br>3 - Enabling Slave<br>4 - Enabling public network access<br>5 - Batch operation in progress<br>6 - Rolling back<br>7 - Disabling public network access<br>8 - Password change in progress<br>9 - Renaming instance<br>10 - Restarting<br>12 - Self-built migration in progress<br>13 - Deleting database table<br>14 - Disaster recovery instance creation sync in progress<br>15 - Upgrade pending switch<br>16 - Upgrade and switch in progress<br>17 - Switch completed<br>19 - Parameter setting pending execution<br>34 - Node in-place upgrade to be executed</p>
                     * @param _taskStatus <p>Instance task status, possible values:<br>0 - No tasks<br>1 - Upgrading<br>2 - Data import in progress<br>3 - Enabling Slave<br>4 - Enabling public network access<br>5 - Batch operation in progress<br>6 - Rolling back<br>7 - Disabling public network access<br>8 - Password change in progress<br>9 - Renaming instance<br>10 - Restarting<br>12 - Self-built migration in progress<br>13 - Deleting database table<br>14 - Disaster recovery instance creation sync in progress<br>15 - Upgrade pending switch<br>16 - Upgrade and switch in progress<br>17 - Switch completed<br>19 - Parameter setting pending execution<br>34 - Node in-place upgrade to be executed</p>
                     * 
                     */
                    void SetTaskStatus(const std::vector<uint64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Database engine version of the instance. Possible values: 5.1, 5.5, 5.6, and 5.7.</p>
                     * @return EngineVersions <p>Database engine version of the instance. Possible values: 5.1, 5.5, 5.6, and 5.7.</p>
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置<p>Database engine version of the instance. Possible values: 5.1, 5.5, 5.6, and 5.7.</p>
                     * @param _engineVersions <p>Database engine version of the instance. Possible values: 5.1, 5.5, 5.6, and 5.7.</p>
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID.</p>
                     * @return VpcIds <p>VPC ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetVpcIds() const;

                    /**
                     * 设置<p>VPC ID.</p>
                     * @param _vpcIds <p>VPC ID.</p>
                     * 
                     */
                    void SetVpcIds(const std::vector<uint64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone ID.</p>
                     * @return ZoneIds <p>Availability zone ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置<p>Availability zone ID.</p>
                     * @param _zoneIds <p>Availability zone ID.</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<uint64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetIds <p>Subnet ID.</p>
                     * 
                     */
                    std::vector<uint64_t> GetSubnetIds() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetIds <p>Subnet ID.</p>
                     * 
                     */
                    void SetSubnetIds(const std::vector<uint64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to set the lock flag. Available values: 0 - not lock, 1 - lock. Default is 0.</p>
                     * @return CdbErrors <p>Whether to set the lock flag. Available values: 0 - not lock, 1 - lock. Default is 0.</p>
                     * 
                     */
                    std::vector<int64_t> GetCdbErrors() const;

                    /**
                     * 设置<p>Whether to set the lock flag. Available values: 0 - not lock, 1 - lock. Default is 0.</p>
                     * @param _cdbErrors <p>Whether to set the lock flag. Available values: 0 - not lock, 1 - lock. Default is 0.</p>
                     * 
                     */
                    void SetCdbErrors(const std::vector<int64_t>& _cdbErrors);

                    /**
                     * 判断参数 CdbErrors 是否已赋值
                     * @return CdbErrors 是否已赋值
                     * 
                     */
                    bool CdbErrorsHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field of the returned result set. Currently supports: "instanceId", "instanceName", "createTime", and "deadlineTime".</p>
                     * @return OrderBy <p>Sorting field of the returned result set. Currently supports: "instanceId", "instanceName", "createTime", and "deadlineTime".</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field of the returned result set. Currently supports: "instanceId", "instanceName", "createTime", and "deadlineTime".</p>
                     * @param _orderBy <p>Sorting field of the returned result set. Currently supports: "instanceId", "instanceName", "createTime", and "deadlineTime".</p>
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
                     * 获取<p>Sorting method of the returned result set. Valid values: "ASC" - ascending order; "DESC" - descending order. The default is "DESC".</p>
                     * @return OrderDirection <p>Sorting method of the returned result set. Valid values: "ASC" - ascending order; "DESC" - descending order. The default is "DESC".</p>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>Sorting method of the returned result set. Valid values: "ASC" - ascending order; "DESC" - descending order. The default is "DESC".</p>
                     * @param _orderDirection <p>Sorting method of the returned result set. Valid values: "ASC" - ascending order; "DESC" - descending order. The default is "DESC".</p>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use security group ID as the filter condition.<br>Description: 0 indicates no, 1 indicates yes.</p>
                     * @return WithSecurityGroup <p>Whether to use security group ID as the filter condition.<br>Description: 0 indicates no, 1 indicates yes.</p>
                     * 
                     */
                    int64_t GetWithSecurityGroup() const;

                    /**
                     * 设置<p>Whether to use security group ID as the filter condition.<br>Description: 0 indicates no, 1 indicates yes.</p>
                     * @param _withSecurityGroup <p>Whether to use security group ID as the filter condition.<br>Description: 0 indicates no, 1 indicates yes.</p>
                     * 
                     */
                    void SetWithSecurityGroup(const int64_t& _withSecurityGroup);

                    /**
                     * 判断参数 WithSecurityGroup 是否已赋值
                     * @return WithSecurityGroup 是否已赋值
                     * 
                     */
                    bool WithSecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>Whether the exclusive cluster detail is included. Value range: 0 - not contained, 1 - contained.</p>
                     * @return WithExCluster <p>Whether the exclusive cluster detail is included. Value range: 0 - not contained, 1 - contained.</p>
                     * 
                     */
                    int64_t GetWithExCluster() const;

                    /**
                     * 设置<p>Whether the exclusive cluster detail is included. Value range: 0 - not contained, 1 - contained.</p>
                     * @param _withExCluster <p>Whether the exclusive cluster detail is included. Value range: 0 - not contained, 1 - contained.</p>
                     * 
                     */
                    void SetWithExCluster(const int64_t& _withExCluster);

                    /**
                     * 判断参数 WithExCluster 是否已赋值
                     * @return WithExCluster 是否已赋值
                     * 
                     */
                    bool WithExClusterHasBeenSet() const;

                    /**
                     * 获取<p>Dedicated cluster ID.</p>
                     * @return ExClusterId <p>Dedicated cluster ID.</p>
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置<p>Dedicated cluster ID.</p>
                     * @param _exClusterId <p>Dedicated cluster ID.</p>
                     * 
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     * 
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceIds <p>Instance ID.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceIds <p>Instance ID.</p>
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
                     * 获取<p>Initialization flag. Valid values: 0 - uninitialized, 1 - initialized.</p>
                     * @return InitFlag <p>Initialization flag. Valid values: 0 - uninitialized, 1 - initialized.</p>
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置<p>Initialization flag. Valid values: 0 - uninitialized, 1 - initialized.</p>
                     * @param _initFlag <p>Initialization flag. Valid values: 0 - uninitialized, 1 - initialized.</p>
                     * 
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取<p>Whether the corresponding instance in the disaster recovery relationship is included. Valid values: 0 - excluding, 1 - included. Default value: 1. If pulling the primary instance, the data of the disaster recovery relationship is in the DrInfo field. If pulling the disaster recovery instance, the data of the disaster recovery relationship is in the MasterInfo field. The disaster recovery relationship only contains partial basic data. Detailed data must be pulled manually via the interface.</p>
                     * @return WithDr <p>Whether the corresponding instance in the disaster recovery relationship is included. Valid values: 0 - excluding, 1 - included. Default value: 1. If pulling the primary instance, the data of the disaster recovery relationship is in the DrInfo field. If pulling the disaster recovery instance, the data of the disaster recovery relationship is in the MasterInfo field. The disaster recovery relationship only contains partial basic data. Detailed data must be pulled manually via the interface.</p>
                     * 
                     */
                    int64_t GetWithDr() const;

                    /**
                     * 设置<p>Whether the corresponding instance in the disaster recovery relationship is included. Valid values: 0 - excluding, 1 - included. Default value: 1. If pulling the primary instance, the data of the disaster recovery relationship is in the DrInfo field. If pulling the disaster recovery instance, the data of the disaster recovery relationship is in the MasterInfo field. The disaster recovery relationship only contains partial basic data. Detailed data must be pulled manually via the interface.</p>
                     * @param _withDr <p>Whether the corresponding instance in the disaster recovery relationship is included. Valid values: 0 - excluding, 1 - included. Default value: 1. If pulling the primary instance, the data of the disaster recovery relationship is in the DrInfo field. If pulling the disaster recovery instance, the data of the disaster recovery relationship is in the MasterInfo field. The disaster recovery relationship only contains partial basic data. Detailed data must be pulled manually via the interface.</p>
                     * 
                     */
                    void SetWithDr(const int64_t& _withDr);

                    /**
                     * 判断参数 WithDr 是否已赋值
                     * @return WithDr 是否已赋值
                     * 
                     */
                    bool WithDrHasBeenSet() const;

                    /**
                     * 获取<p>Whether it contains read-only instances. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * @return WithRo <p>Whether it contains read-only instances. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * 
                     */
                    int64_t GetWithRo() const;

                    /**
                     * 设置<p>Whether it contains read-only instances. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * @param _withRo <p>Whether it contains read-only instances. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * 
                     */
                    void SetWithRo(const int64_t& _withRo);

                    /**
                     * 判断参数 WithRo 是否已赋值
                     * @return WithRo 是否已赋值
                     * 
                     */
                    bool WithRoHasBeenSet() const;

                    /**
                     * 获取<p>Whether the primary instance is included. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * @return WithMaster <p>Whether the primary instance is included. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * 
                     */
                    int64_t GetWithMaster() const;

                    /**
                     * 设置<p>Whether the primary instance is included. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * @param _withMaster <p>Whether the primary instance is included. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     * 
                     */
                    void SetWithMaster(const int64_t& _withMaster);

                    /**
                     * 判断参数 WithMaster 是否已赋值
                     * @return WithMaster 是否已赋值
                     * 
                     */
                    bool WithMasterHasBeenSet() const;

                    /**
                     * 获取<p>Placement group ID list.</p>
                     * @return DeployGroupIds <p>Placement group ID list.</p>
                     * 
                     */
                    std::vector<std::string> GetDeployGroupIds() const;

                    /**
                     * 设置<p>Placement group ID list.</p>
                     * @param _deployGroupIds <p>Placement group ID list.</p>
                     * 
                     */
                    void SetDeployGroupIds(const std::vector<std::string>& _deployGroupIds);

                    /**
                     * 判断参数 DeployGroupIds 是否已赋值
                     * @return DeployGroupIds 是否已赋值
                     * 
                     */
                    bool DeployGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Filter by tag key.</p>
                     * @return TagKeysForSearch <p>Filter by tag key.</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeysForSearch() const;

                    /**
                     * 设置<p>Filter by tag key.</p>
                     * @param _tagKeysForSearch <p>Filter by tag key.</p>
                     * 
                     */
                    void SetTagKeysForSearch(const std::vector<std::string>& _tagKeysForSearch);

                    /**
                     * 判断参数 TagKeysForSearch 是否已赋值
                     * @return TagKeysForSearch 是否已赋值
                     * 
                     */
                    bool TagKeysForSearchHasBeenSet() const;

                    /**
                     * 获取<p>Financial Enclosure ID.</p>
                     * @return CageIds <p>Financial Enclosure ID.</p>
                     * 
                     */
                    std::vector<std::string> GetCageIds() const;

                    /**
                     * 设置<p>Financial Enclosure ID.</p>
                     * @param _cageIds <p>Financial Enclosure ID.</p>
                     * 
                     */
                    void SetCageIds(const std::vector<std::string>& _cageIds);

                    /**
                     * 判断参数 CageIds 是否已赋值
                     * @return CageIds 是否已赋值
                     * 
                     */
                    bool CageIdsHasBeenSet() const;

                    /**
                     * 获取<p>Tag value</p>
                     * @return TagValues <p>Tag value</p>
                     * 
                     */
                    std::vector<std::string> GetTagValues() const;

                    /**
                     * 设置<p>Tag value</p>
                     * @param _tagValues <p>Tag value</p>
                     * 
                     */
                    void SetTagValues(const std::vector<std::string>& _tagValues);

                    /**
                     * 判断参数 TagValues 是否已赋值
                     * @return TagValues 是否已赋值
                     * 
                     */
                    bool TagValuesHasBeenSet() const;

                    /**
                     * 获取<p>Character type VPC ID</p>
                     * @return UniqueVpcIds <p>Character type VPC ID</p>
                     * 
                     */
                    std::vector<std::string> GetUniqueVpcIds() const;

                    /**
                     * 设置<p>Character type VPC ID</p>
                     * @param _uniqueVpcIds <p>Character type VPC ID</p>
                     * 
                     */
                    void SetUniqueVpcIds(const std::vector<std::string>& _uniqueVpcIds);

                    /**
                     * 判断参数 UniqueVpcIds 是否已赋值
                     * @return UniqueVpcIds 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>VPC character type subnetId</p>
                     * @return UniqSubnetIds <p>VPC character type subnetId</p>
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置<p>VPC character type subnetId</p>
                     * @param _uniqSubnetIds <p>VPC character type subnetId</p>
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
                     * 获取<p>Tag key value<br>Please note, tags of the instance being created are unable to query.</p>
                     * @return Tags <p>Tag key value<br>Please note, tags of the instance being created are unable to query.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag key value<br>Please note, tags of the instance being created are unable to query.</p>
                     * @param _tags <p>Tag key value<br>Please note, tags of the instance being created are unable to query.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Database proxy IP.</p>
                     * @return ProxyVips <p>Database proxy IP.</p>
                     * 
                     */
                    std::vector<std::string> GetProxyVips() const;

                    /**
                     * 设置<p>Database proxy IP.</p>
                     * @param _proxyVips <p>Database proxy IP.</p>
                     * 
                     */
                    void SetProxyVips(const std::vector<std::string>& _proxyVips);

                    /**
                     * 判断参数 ProxyVips 是否已赋值
                     * @return ProxyVips 是否已赋值
                     * 
                     */
                    bool ProxyVipsHasBeenSet() const;

                    /**
                     * 获取<p>Database proxy ID.</p>
                     * @return ProxyIds <p>Database proxy ID.</p>
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置<p>Database proxy ID.</p>
                     * @param _proxyIds <p>Database proxy ID.</p>
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取<p>Database engine type. Valid values: InnoDB, RocksDB.</p>
                     * @return EngineTypes <p>Database engine type. Valid values: InnoDB, RocksDB.</p>
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置<p>Database engine type. Valid values: InnoDB, RocksDB.</p>
                     * @param _engineTypes <p>Database engine type. Valid values: InnoDB, RocksDB.</p>
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to obtain the Cluster Edition instance node information. Valid values: true or false. The default value is false.</p>
                     * @return QueryClusterInfo <p>Whether to obtain the Cluster Edition instance node information. Valid values: true or false. The default value is false.</p>
                     * 
                     */
                    bool GetQueryClusterInfo() const;

                    /**
                     * 设置<p>Whether to obtain the Cluster Edition instance node information. Valid values: true or false. The default value is false.</p>
                     * @param _queryClusterInfo <p>Whether to obtain the Cluster Edition instance node information. Valid values: true or false. The default value is false.</p>
                     * 
                     */
                    void SetQueryClusterInfo(const bool& _queryClusterInfo);

                    /**
                     * 判断参数 QueryClusterInfo 是否已赋值
                     * @return QueryClusterInfo 是否已赋值
                     * 
                     */
                    bool QueryClusterInfoHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Instance type. Valid values: 1 - Primary instance, 2 - Disaster recovery instance, 3 - Read-only instance.</p>
                     */
                    std::vector<uint64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>Private IP address of the instance.</p>
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * <p>Instance status. Valid values:<br>0 - Creating<br>1 - Running<br>4 - Isolation operation in progress<br>5 - Isolated (can be restored from the Recycle Bin)</p>
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Offset. Default value is 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items returned per request. Default value: 20. Maximum value: 2000.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Security group ID. When using security group ID as the filter condition, the WithSecurityGroup parameter needs to be specified as 1.</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * <p>Payment type. Valid values: 0 - yearly/monthly subscription; 1 - bill by hour.</p>
                     */
                    std::vector<uint64_t> m_payTypes;
                    bool m_payTypesHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * <p>Instance task status, possible values:<br>0 - No tasks<br>1 - Upgrading<br>2 - Data import in progress<br>3 - Enabling Slave<br>4 - Enabling public network access<br>5 - Batch operation in progress<br>6 - Rolling back<br>7 - Disabling public network access<br>8 - Password change in progress<br>9 - Renaming instance<br>10 - Restarting<br>12 - Self-built migration in progress<br>13 - Deleting database table<br>14 - Disaster recovery instance creation sync in progress<br>15 - Upgrade pending switch<br>16 - Upgrade and switch in progress<br>17 - Switch completed<br>19 - Parameter setting pending execution<br>34 - Node in-place upgrade to be executed</p>
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Database engine version of the instance. Possible values: 5.1, 5.5, 5.6, and 5.7.</p>
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * <p>VPC ID.</p>
                     */
                    std::vector<uint64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>Availability zone ID.</p>
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::vector<uint64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>Whether to set the lock flag. Available values: 0 - not lock, 1 - lock. Default is 0.</p>
                     */
                    std::vector<int64_t> m_cdbErrors;
                    bool m_cdbErrorsHasBeenSet;

                    /**
                     * <p>Sorting field of the returned result set. Currently supports: "instanceId", "instanceName", "createTime", and "deadlineTime".</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Sorting method of the returned result set. Valid values: "ASC" - ascending order; "DESC" - descending order. The default is "DESC".</p>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>Whether to use security group ID as the filter condition.<br>Description: 0 indicates no, 1 indicates yes.</p>
                     */
                    int64_t m_withSecurityGroup;
                    bool m_withSecurityGroupHasBeenSet;

                    /**
                     * <p>Whether the exclusive cluster detail is included. Value range: 0 - not contained, 1 - contained.</p>
                     */
                    int64_t m_withExCluster;
                    bool m_withExClusterHasBeenSet;

                    /**
                     * <p>Dedicated cluster ID.</p>
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Initialization flag. Valid values: 0 - uninitialized, 1 - initialized.</p>
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * <p>Whether the corresponding instance in the disaster recovery relationship is included. Valid values: 0 - excluding, 1 - included. Default value: 1. If pulling the primary instance, the data of the disaster recovery relationship is in the DrInfo field. If pulling the disaster recovery instance, the data of the disaster recovery relationship is in the MasterInfo field. The disaster recovery relationship only contains partial basic data. Detailed data must be pulled manually via the interface.</p>
                     */
                    int64_t m_withDr;
                    bool m_withDrHasBeenSet;

                    /**
                     * <p>Whether it contains read-only instances. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     */
                    int64_t m_withRo;
                    bool m_withRoHasBeenSet;

                    /**
                     * <p>Whether the primary instance is included. Valid values: 0 - does not include, 1 - includes. Default value is 1.</p>
                     */
                    int64_t m_withMaster;
                    bool m_withMasterHasBeenSet;

                    /**
                     * <p>Placement group ID list.</p>
                     */
                    std::vector<std::string> m_deployGroupIds;
                    bool m_deployGroupIdsHasBeenSet;

                    /**
                     * <p>Filter by tag key.</p>
                     */
                    std::vector<std::string> m_tagKeysForSearch;
                    bool m_tagKeysForSearchHasBeenSet;

                    /**
                     * <p>Financial Enclosure ID.</p>
                     */
                    std::vector<std::string> m_cageIds;
                    bool m_cageIdsHasBeenSet;

                    /**
                     * <p>Tag value</p>
                     */
                    std::vector<std::string> m_tagValues;
                    bool m_tagValuesHasBeenSet;

                    /**
                     * <p>Character type VPC ID</p>
                     */
                    std::vector<std::string> m_uniqueVpcIds;
                    bool m_uniqueVpcIdsHasBeenSet;

                    /**
                     * <p>VPC character type subnetId</p>
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * <p>Tag key value<br>Please note, tags of the instance being created are unable to query.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Database proxy IP.</p>
                     */
                    std::vector<std::string> m_proxyVips;
                    bool m_proxyVipsHasBeenSet;

                    /**
                     * <p>Database proxy ID.</p>
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * <p>Database engine type. Valid values: InnoDB, RocksDB.</p>
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * <p>Whether to obtain the Cluster Edition instance node information. Valid values: true or false. The default value is false.</p>
                     */
                    bool m_queryClusterInfo;
                    bool m_queryClusterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
