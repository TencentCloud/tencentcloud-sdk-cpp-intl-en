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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceInitInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RollbackToNewCluster request structure.
                */
                class RollbackToNewClusterRequest : public AbstractModel
                {
                public:
                    RollbackToNewClusterRequest();
                    ~RollbackToNewClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ.
                     * @return Zone AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ.
                     * @param _zone AZ.
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
                     * 获取During rollback, pass in the source cluster ID to find the source pool ID.
                     * @return OriginalClusterId During rollback, pass in the source cluster ID to find the source pool ID.
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置During rollback, pass in the source cluster ID to find the source pool ID.
                     * @param _originalClusterId During rollback, pass in the source cluster ID to find the source pool ID.
                     * 
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     * 
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取VPC ID.
                     * @return UniqVpcId VPC ID.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID.
                     * @param _uniqVpcId VPC ID.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return UniqSubnetId Subnet ID.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _uniqSubnetId Subnet ID.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取The cluster name should contain fewer than 64 characters. Valid values for each character: uppercase/lowercase letters, digits, and special characters ('-', '_', and '.').
                     * @return ClusterName The cluster name should contain fewer than 64 characters. Valid values for each character: uppercase/lowercase letters, digits, and special characters ('-', '_', and '.').
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置The cluster name should contain fewer than 64 characters. Valid values for each character: uppercase/lowercase letters, digits, and special characters ('-', '_', and '.').
                     * @param _clusterName The cluster name should contain fewer than 64 characters. Valid values for each character: uppercase/lowercase letters, digits, and special characters ('-', '_', and '.').
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Rolls back by snapshot, which indicates snapshotId; rolls back by time point, which indicates queryId. When the value of queryId is 0, it indicates that the validity of the time point needs to be verified.
                     * @return RollbackId Rolls back by snapshot, which indicates snapshotId; rolls back by time point, which indicates queryId. When the value of queryId is 0, it indicates that the validity of the time point needs to be verified.
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置Rolls back by snapshot, which indicates snapshotId; rolls back by time point, which indicates queryId. When the value of queryId is 0, it indicates that the validity of the time point needs to be verified.
                     * @param _rollbackId Rolls back by snapshot, which indicates snapshotId; rolls back by time point, which indicates queryId. When the value of queryId is 0, it indicates that the validity of the time point needs to be verified.
                     * 
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     * 
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取Rolls back by time point, which indicates the specified time; rolls back by snapshot, which indicates the snapshot time.
                     * @return ExpectTime Rolls back by time point, which indicates the specified time; rolls back by snapshot, which indicates the snapshot time.
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置Rolls back by time point, which indicates the specified time; rolls back by snapshot, which indicates the snapshot time.
                     * @param _expectTime Rolls back by time point, which indicates the specified time; rolls back by snapshot, which indicates the snapshot time.
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取Whether to select promo vouchers automatically. 1: yes; 0: no. The default value is 0.
                     * @return AutoVoucher Whether to select promo vouchers automatically. 1: yes; 0: no. The default value is 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to select promo vouchers automatically. 1: yes; 0: no. The default value is 0.
                     * @param _autoVoucher Whether to select promo vouchers automatically. 1: yes; 0: no. The default value is 0.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Information about the tag array to be bound during cluster creation.
                     * @return ResourceTags Information about the tag array to be bound during cluster creation.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Information about the tag array to be bound during cluster creation.
                     * @param _resourceTags Information about the tag array to be bound during cluster creation.
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Database type. When the value of DbType is MYSQL, the valid values are NORMAL and SERVERLESS (the default value is NORMAL).
                     * @return DbMode Database type. When the value of DbType is MYSQL, the valid values are NORMAL and SERVERLESS (the default value is NORMAL).
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database type. When the value of DbType is MYSQL, the valid values are NORMAL and SERVERLESS (the default value is NORMAL).
                     * @param _dbMode Database type. When the value of DbType is MYSQL, the valid values are NORMAL and SERVERLESS (the default value is NORMAL).
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the value of DbMode is SEVERLESS. For the settings of the minimum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * @return MinCpu This parameter is required when the value of DbMode is SEVERLESS. For the settings of the minimum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置This parameter is required when the value of DbMode is SEVERLESS. For the settings of the minimum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * @param _minCpu This parameter is required when the value of DbMode is SEVERLESS. For the settings of the minimum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the value of DbMode is SEVERLESS. For the settings of the maximum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * @return MaxCpu This parameter is required when the value of DbMode is SEVERLESS. For the settings of the maximum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置This parameter is required when the value of DbMode is SEVERLESS. For the settings of the maximum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * @param _maxCpu This parameter is required when the value of DbMode is SEVERLESS. For the settings of the maximum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取Specifies whether the cluster is automatically paused when the value of DbMode is SEVERLESS. Valid values: yes; no. The default value is yes.
                     * @return AutoPause Specifies whether the cluster is automatically paused when the value of DbMode is SEVERLESS. Valid values: yes; no. The default value is yes.
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置Specifies whether the cluster is automatically paused when the value of DbMode is SEVERLESS. Valid values: yes; no. The default value is yes.
                     * @param _autoPause Specifies whether the cluster is automatically paused when the value of DbMode is SEVERLESS. Valid values: yes; no. The default value is yes.
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取Specifies the delay for automatic cluster pause (in seconds) when the value of DbMode is SEVERLESS. Value range: [600, 691200]. The default value is 600.
                     * @return AutoPauseDelay Specifies the delay for automatic cluster pause (in seconds) when the value of DbMode is SEVERLESS. Value range: [600, 691200]. The default value is 600.
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置Specifies the delay for automatic cluster pause (in seconds) when the value of DbMode is SEVERLESS. Value range: [600, 691200]. The default value is 600.
                     * @param _autoPauseDelay Specifies the delay for automatic cluster pause (in seconds) when the value of DbMode is SEVERLESS. Value range: [600, 691200]. The default value is 600.
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取Security group ID array.
                     * @return SecurityGroupIds Security group ID array.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID array.
                     * @param _securityGroupIds Security group ID array.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID array.
                     * @return AlarmPolicyIds Alarm policy ID array.
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置Alarm policy ID array.
                     * @param _alarmPolicyIds Alarm policy ID array.
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Parameter array. The character_set_server (utf8 | latin1 | gbk | utf8mb4) is currently supported. lower_case_table_names: 1 - case-insensitive; 0 - case-sensitive.
                     * @return ClusterParams Parameter array. The character_set_server (utf8 | latin1 | gbk | utf8mb4) is currently supported. lower_case_table_names: 1 - case-insensitive; 0 - case-sensitive.
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置Parameter array. The character_set_server (utf8 | latin1 | gbk | utf8mb4) is currently supported. lower_case_table_names: 1 - case-insensitive; 0 - case-sensitive.
                     * @param _clusterParams Parameter array. The character_set_server (utf8 | latin1 | gbk | utf8mb4) is currently supported. lower_case_table_names: 1 - case-insensitive; 0 - case-sensitive.
                     * 
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     * 
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取Parameter template ID, which can be obtained through the DescribeParamTemplates API.
                     * @return ParamTemplateId Parameter template ID, which can be obtained through the DescribeParamTemplates API.
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置Parameter template ID, which can be obtained through the DescribeParamTemplates API.
                     * @param _paramTemplateId Parameter template ID, which can be obtained through the DescribeParamTemplates API.
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取Instance initialization configuration information, which is mainly used for selecting different instance specifications during cluster purchase.
                     * @return InstanceInitInfos Instance initialization configuration information, which is mainly used for selecting different instance specifications during cluster purchase.
                     * 
                     */
                    std::vector<InstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置Instance initialization configuration information, which is mainly used for selecting different instance specifications during cluster purchase.
                     * @param _instanceInitInfos Instance initialization configuration information, which is mainly used for selecting different instance specifications during cluster purchase.
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<InstanceInitInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

                    /**
                     * 获取0 - place an order and pay; 1 - place an order.
                     * @return DealMode 0 - place an order and pay; 1 - place an order.
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置0 - place an order and pay; 1 - place an order.
                     * @param _dealMode 0 - place an order and pay; 1 - place an order.
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取Compute node billing mode: 0 - pay-as-you-go; 1 - prepaid.
                     * @return PayMode Compute node billing mode: 0 - pay-as-you-go; 1 - prepaid.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Compute node billing mode: 0 - pay-as-you-go; 1 - prepaid.
                     * @param _payMode Compute node billing mode: 0 - pay-as-you-go; 1 - prepaid.
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
                     * 获取Time.
                     * @return TimeSpan Time.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Time.
                     * @param _timeSpan Time.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Unit.
                     * @return TimeUnit Unit.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit.
                     * @param _timeUnit Unit.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Rollback database information.
                     * @return RollbackDatabases Rollback database information.
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置Rollback database information.
                     * @param _rollbackDatabases Rollback database information.
                     * 
                     */
                    void SetRollbackDatabases(const std::vector<RollbackDatabase>& _rollbackDatabases);

                    /**
                     * 判断参数 RollbackDatabases 是否已赋值
                     * @return RollbackDatabases 是否已赋值
                     * 
                     */
                    bool RollbackDatabasesHasBeenSet() const;

                    /**
                     * 获取Rollback table information.
                     * @return RollbackTables Rollback table information.
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置Rollback table information.
                     * @param _rollbackTables Rollback table information.
                     * 
                     */
                    void SetRollbackTables(const std::vector<RollbackTable>& _rollbackTables);

                    /**
                     * 判断参数 RollbackTables 是否已赋值
                     * @return RollbackTables 是否已赋值
                     * 
                     */
                    bool RollbackTablesHasBeenSet() const;

                    /**
                     * 获取Source read-only instance information.
                     * @return OriginalROInstanceList Source read-only instance information.
                     * 
                     */
                    std::vector<std::string> GetOriginalROInstanceList() const;

                    /**
                     * 设置Source read-only instance information.
                     * @param _originalROInstanceList Source read-only instance information.
                     * 
                     */
                    void SetOriginalROInstanceList(const std::vector<std::string>& _originalROInstanceList);

                    /**
                     * 判断参数 OriginalROInstanceList 是否已赋值
                     * @return OriginalROInstanceList 是否已赋值
                     * 
                     */
                    bool OriginalROInstanceListHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Whether to enable archiving. Valid values: yes; no. The default value is yes.
                     * @return AutoArchive Whether to enable archiving. Valid values: yes; no. The default value is yes.
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置Whether to enable archiving. Valid values: yes; no. The default value is yes.
                     * @param _autoArchive Whether to enable archiving. Valid values: yes; no. The default value is yes.
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                private:

                    /**
                     * AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * During rollback, pass in the source cluster ID to find the source pool ID.
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * VPC ID.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * The cluster name should contain fewer than 64 characters. Valid values for each character: uppercase/lowercase letters, digits, and special characters ('-', '_', and '.').
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Rolls back by snapshot, which indicates snapshotId; rolls back by time point, which indicates queryId. When the value of queryId is 0, it indicates that the validity of the time point needs to be verified.
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * Rolls back by time point, which indicates the specified time; rolls back by snapshot, which indicates the snapshot time.
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * Whether to select promo vouchers automatically. 1: yes; 0: no. The default value is 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Information about the tag array to be bound during cluster creation.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Database type. When the value of DbType is MYSQL, the valid values are NORMAL and SERVERLESS (the default value is NORMAL).
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * This parameter is required when the value of DbMode is SEVERLESS. For the settings of the minimum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * This parameter is required when the value of DbMode is SEVERLESS. For the settings of the maximum CPU value, refer to the value returned by the DescribeServerlessInstanceSpecs API for the valid value.
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * Specifies whether the cluster is automatically paused when the value of DbMode is SEVERLESS. Valid values: yes; no. The default value is yes.
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * Specifies the delay for automatic cluster pause (in seconds) when the value of DbMode is SEVERLESS. Value range: [600, 691200]. The default value is 600.
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * Security group ID array.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Alarm policy ID array.
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * Parameter array. The character_set_server (utf8 | latin1 | gbk | utf8mb4) is currently supported. lower_case_table_names: 1 - case-insensitive; 0 - case-sensitive.
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * Parameter template ID, which can be obtained through the DescribeParamTemplates API.
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Instance initialization configuration information, which is mainly used for selecting different instance specifications during cluster purchase.
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * 0 - place an order and pay; 1 - place an order.
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * Compute node billing mode: 0 - pay-as-you-go; 1 - prepaid.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Time.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Unit.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Rollback database information.
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * Rollback table information.
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * Source read-only instance information.
                     */
                    std::vector<std::string> m_originalROInstanceList;
                    bool m_originalROInstanceListHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to enable archiving. Valid values: yes; no. The default value is yes.
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
