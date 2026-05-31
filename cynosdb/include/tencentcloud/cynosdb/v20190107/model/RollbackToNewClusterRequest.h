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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
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
                     * 获取<p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * @return OriginalClusterId <p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置<p>During rollback, input the source cluster ID to search for the source poolId</p>
                     * @param _originalClusterId <p>During rollback, input the source cluster ID to search for the source poolId</p>
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
                     * 获取<p>VPC network ID</p>
                     * @return UniqVpcId <p>VPC network ID</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>VPC network ID</p>
                     * @param _uniqVpcId <p>VPC network ID</p>
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
                     * 获取<p>Subnet ID</p>
                     * @return UniqSubnetId <p>Subnet ID</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet ID</p>
                     * @param _uniqSubnetId <p>Subnet ID</p>
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
                     * 获取<p>Cluster name, length less than 64 characters. Each character value ranges from uppercase/lowercase letters, digits, to special symbols ('-', '_', '.').</p>
                     * @return ClusterName <p>Cluster name, length less than 64 characters. Each character value ranges from uppercase/lowercase letters, digits, to special symbols ('-', '_', '.').</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name, length less than 64 characters. Each character value ranges from uppercase/lowercase letters, digits, to special symbols ('-', '_', '.').</p>
                     * @param _clusterName <p>Cluster name, length less than 64 characters. Each character value ranges from uppercase/lowercase letters, digits, to special symbols ('-', '_', '.').</p>
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
                     * 获取<p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * @return RollbackId <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置<p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     * @param _rollbackId <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
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
                     * 获取<p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * @return ExpectTime <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置<p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     * @param _expectTime <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
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
                     * 获取<p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * @return AutoVoucher <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * @param _autoVoucher <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
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
                     * 获取<p>tag Array information that should be bound for cluster creation</p>
                     * @return ResourceTags <p>tag Array information that should be bound for cluster creation</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>tag Array information that should be bound for cluster creation</p>
                     * @param _resourceTags <p>tag Array information that should be bound for cluster creation</p>
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
                     * 获取<p>DB type<br>Selectable when DbType is MYSQL (default NORMAL):</p><li>NORMAL</li><li>SERVERLESS</li>
                     * @return DbMode <p>DB type<br>Selectable when DbType is MYSQL (default NORMAL):</p><li>NORMAL</li><li>SERVERLESS</li>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>DB type<br>Selectable when DbType is MYSQL (default NORMAL):</p><li>NORMAL</li><li>SERVERLESS</li>
                     * @param _dbMode <p>DB type<br>Selectable when DbType is MYSQL (default NORMAL):</p><li>NORMAL</li><li>SERVERLESS</li>
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
                     * 获取<p>Required when DbMode is SEVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * @return MinCpu <p>Required when DbMode is SEVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>Required when DbMode is SEVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     * @param _minCpu <p>Required when DbMode is SEVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
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
                     * 获取<p>Required when DbMode is SEVERLESS:<br>Maximum value of cpu. For the optional range, see the API response of DescribeServerlessInstanceSpecs.</p>
                     * @return MaxCpu <p>Required when DbMode is SEVERLESS:<br>Maximum value of cpu. For the optional range, see the API response of DescribeServerlessInstanceSpecs.</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>Required when DbMode is SEVERLESS:<br>Maximum value of cpu. For the optional range, see the API response of DescribeServerlessInstanceSpecs.</p>
                     * @param _maxCpu <p>Required when DbMode is SEVERLESS:<br>Maximum value of cpu. For the optional range, see the API response of DescribeServerlessInstanceSpecs.</p>
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
                     * 获取<p>When DbMode is SEVERLESS, whether to automatically pause within specified clusters. Optional range</p><li>yes</li><li>no</li>Default value: yes
                     * @return AutoPause <p>When DbMode is SEVERLESS, whether to automatically pause within specified clusters. Optional range</p><li>yes</li><li>no</li>Default value: yes
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>When DbMode is SEVERLESS, whether to automatically pause within specified clusters. Optional range</p><li>yes</li><li>no</li>Default value: yes
                     * @param _autoPause <p>When DbMode is SEVERLESS, whether to automatically pause within specified clusters. Optional range</p><li>yes</li><li>no</li>Default value: yes
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
                     * 获取<p>When DbMode is SEVERLESS, specify the delay for Cluster Auto-Pause in seconds, optional range [600,691200]<br>Default value: 600</p>
                     * @return AutoPauseDelay <p>When DbMode is SEVERLESS, specify the delay for Cluster Auto-Pause in seconds, optional range [600,691200]<br>Default value: 600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>When DbMode is SEVERLESS, specify the delay for Cluster Auto-Pause in seconds, optional range [600,691200]<br>Default value: 600</p>
                     * @param _autoPauseDelay <p>When DbMode is SEVERLESS, specify the delay for Cluster Auto-Pause in seconds, optional range [600,691200]<br>Default value: 600</p>
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
                     * 获取<p>Security group id array</p>
                     * @return SecurityGroupIds <p>Security group id array</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group id array</p>
                     * @param _securityGroupIds <p>Security group id array</p>
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
                     * 获取<p>Alarm policy Id array</p>
                     * @return AlarmPolicyIds <p>Alarm policy Id array</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置<p>Alarm policy Id array</p>
                     * @param _alarmPolicyIds <p>Alarm policy Id array</p>
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
                     * 获取<p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive.</p>
                     * @return ClusterParams <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive.</p>
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置<p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive.</p>
                     * @param _clusterParams <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive.</p>
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
                     * 获取<p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * @return ParamTemplateId <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     * @param _paramTemplateId <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
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
                     * 获取<p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * @return InstanceInitInfos <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * 
                     */
                    std::vector<InstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置<p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     * @param _instanceInitInfos <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
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
                     * 获取<p>0-Place order and pay 1-Placing order</p>
                     * @return DealMode <p>0-Place order and pay 1-Placing order</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>0-Place order and pay 1-Placing order</p>
                     * @param _dealMode <p>0-Place order and pay 1-Placing order</p>
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
                     * 获取<p>Pay-per-compute-node model: 0-Pay-As-You-Go, 1-Prepayment</p>
                     * @return PayMode <p>Pay-per-compute-node model: 0-Pay-As-You-Go, 1-Prepayment</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Pay-per-compute-node model: 0-Pay-As-You-Go, 1-Prepayment</p>
                     * @param _payMode <p>Pay-per-compute-node model: 0-Pay-As-You-Go, 1-Prepayment</p>
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
                     * 获取<p>Time</p>
                     * @return TimeSpan <p>Time</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Time</p>
                     * @param _timeSpan <p>Time</p>
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
                     * 获取<p>Unit</p>
                     * @return TimeUnit <p>Unit</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Unit</p>
                     * @param _timeUnit <p>Unit</p>
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
                     * 获取<p>Rollback database info</p>
                     * @return RollbackDatabases <p>Rollback database info</p>
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置<p>Rollback database info</p>
                     * @param _rollbackDatabases <p>Rollback database info</p>
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
                     * 获取<p>Roll back table information</p>
                     * @return RollbackTables <p>Roll back table information</p>
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置<p>Roll back table information</p>
                     * @param _rollbackTables <p>Roll back table information</p>
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
                     * 获取<p>Original ro instance information</p>
                     * @return OriginalROInstanceList <p>Original ro instance information</p>
                     * 
                     */
                    std::vector<std::string> GetOriginalROInstanceList() const;

                    /**
                     * 设置<p>Original ro instance information</p>
                     * @param _originalROInstanceList <p>Original ro instance information</p>
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
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
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
                     * 获取<p>Whether to enable archive. Optional range <li>yes</li><li>no</li> Default value: yes</p>
                     * @return AutoArchive <p>Whether to enable archive. Optional range <li>yes</li><li>no</li> Default value: yes</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>Whether to enable archive. Optional range <li>yes</li><li>no</li> Default value: yes</p>
                     * @param _autoArchive <p>Whether to enable archive. Optional range <li>yes</li><li>no</li> Default value: yes</p>
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取<p>Whether to restore from the saved backup</p>
                     * @return FromSaveBackup <p>Whether to restore from the saved backup</p>
                     * 
                     */
                    bool GetFromSaveBackup() const;

                    /**
                     * 设置<p>Whether to restore from the saved backup</p>
                     * @param _fromSaveBackup <p>Whether to restore from the saved backup</p>
                     * 
                     */
                    void SetFromSaveBackup(const bool& _fromSaveBackup);

                    /**
                     * 判断参数 FromSaveBackup 是否已赋值
                     * @return FromSaveBackup 是否已赋值
                     * 
                     */
                    bool FromSaveBackupHasBeenSet() const;

                private:

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>During rollback, input the source cluster ID to search for the source poolId</p>
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * <p>VPC network ID</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Cluster name, length less than 64 characters. Each character value ranges from uppercase/lowercase letters, digits, to special symbols ('-', '_', '.').</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Snapshot rollback means snapshotId; point-in-time rollback means queryId. A value of 0 indicates requirement to judge whether the time point is valid.</p>
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * <p>Point-in-time rollback, specified time; snapshot rollback, snapshot time</p>
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>tag Array information that should be bound for cluster creation</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>DB type<br>Selectable when DbType is MYSQL (default NORMAL):</p><li>NORMAL</li><li>SERVERLESS</li>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>Required when DbMode is SEVERLESS<br>Minimum value of cpu. For optional range, see API response of DescribeServerlessInstanceSpecs</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>Required when DbMode is SEVERLESS:<br>Maximum value of cpu. For the optional range, see the API response of DescribeServerlessInstanceSpecs.</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>When DbMode is SEVERLESS, whether to automatically pause within specified clusters. Optional range</p><li>yes</li><li>no</li>Default value: yes
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>When DbMode is SEVERLESS, specify the delay for Cluster Auto-Pause in seconds, optional range [600,691200]<br>Default value: 600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>Security group id array</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Alarm policy Id array</p>
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * <p>Parameter array, temporarily supports character_set_server (utf8|latin1|gbk|utf8mb4), lower_case_table_names, 1-case-insensitive, 0-case-sensitive.</p>
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * <p>Parameter template ID. The parameter template ID can be obtained through querying parameter template information DescribeParamTemplates.</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Instance initialization configuration information is mainly used to select different specification instances during cluster purchase.</p>
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * <p>0-Place order and pay 1-Placing order</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>Pay-per-compute-node model: 0-Pay-As-You-Go, 1-Prepayment</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Time</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Unit</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Rollback database info</p>
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * <p>Roll back table information</p>
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * <p>Original ro instance information</p>
                     */
                    std::vector<std::string> m_originalROInstanceList;
                    bool m_originalROInstanceListHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Whether to enable archive. Optional range <li>yes</li><li>no</li> Default value: yes</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>Whether to restore from the saved backup</p>
                     */
                    bool m_fromSaveBackup;
                    bool m_fromSaveBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
