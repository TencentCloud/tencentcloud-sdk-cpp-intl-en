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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMLOGLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmLogList request structure.
                */
                class DescribeDspmLogListRequest : public AbstractModel
                {
                public:
                    DescribeDspmLogListRequest();
                    ~DescribeDspmLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Number limit.</p>
                     * @return Limit <p>Number limit.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number limit.</p>
                     * @param _limit <p>Number limit.</p>
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
                     * 获取<p>Offset.</p>
                     * @return Offset <p>Offset.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
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
                     * 获取<p>Sorting method (desc=descending order, asc=ascending order)</p>
                     * @return Sort <p>Sorting method (desc=descending order, asc=ascending order)</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Sorting method (desc=descending order, asc=ascending order)</p>
                     * @param _sort <p>Sorting method (desc=descending order, asc=ascending order)</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field (opTime=time, dangerLvl=risk level)</p>
                     * @return Field <p>Sorting field (opTime=time, dangerLvl=risk level)</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>Sorting field (opTime=time, dangerLvl=risk level)</p>
                     * @param _field <p>Sorting field (opTime=time, dangerLvl=risk level)</p>
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取<p>Risk level (0-safe, 1-low risk, 2-medium-risk, 3-high-risk, all if not passed)</p>
                     * @return DangerLevel <p>Risk level (0-safe, 1-low risk, 2-medium-risk, 3-high-risk, all if not passed)</p>
                     * 
                     */
                    std::string GetDangerLevel() const;

                    /**
                     * 设置<p>Risk level (0-safe, 1-low risk, 2-medium-risk, 3-high-risk, all if not passed)</p>
                     * @param _dangerLevel <p>Risk level (0-safe, 1-low risk, 2-medium-risk, 3-high-risk, all if not passed)</p>
                     * 
                     */
                    void SetDangerLevel(const std::string& _dangerLevel);

                    /**
                     * 判断参数 DangerLevel 是否已赋值
                     * @return DangerLevel 是否已赋值
                     * 
                     */
                    bool DangerLevelHasBeenSet() const;

                    /**
                     * 获取<p>Database name</p>
                     * @return DbName <p>Database name</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name</p>
                     * @param _dbName <p>Database name</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>Database port</p>
                     * @return DbPort <p>Database port</p>
                     * 
                     */
                    int64_t GetDbPort() const;

                    /**
                     * 设置<p>Database port</p>
                     * @param _dbPort <p>Database port</p>
                     * 
                     */
                    void SetDbPort(const int64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取<p>Database IP</p>
                     * @return DbIp <p>Database IP</p>
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置<p>Database IP</p>
                     * @param _dbIp <p>Database IP</p>
                     * 
                     */
                    void SetDbIp(const std::string& _dbIp);

                    /**
                     * 判断参数 DbIp 是否已赋值
                     * @return DbIp 是否已赋值
                     * 
                     */
                    bool DbIpHasBeenSet() const;

                    /**
                     * 获取<p>Asset ID.</p>
                     * @return AssetsId <p>Asset ID.</p>
                     * 
                     */
                    int64_t GetAssetsId() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetsId <p>Asset ID.</p>
                     * 
                     */
                    void SetAssetsId(const int64_t& _assetsId);

                    /**
                     * 判断参数 AssetsId 是否已赋值
                     * @return AssetsId 是否已赋值
                     * 
                     */
                    bool AssetsIdHasBeenSet() const;

                    /**
                     * 获取<p>Session ID</p>
                     * @return SessionId <p>Session ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Session ID</p>
                     * @param _sessionId <p>Session ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Client IP</p>
                     * @return ClientSideIp <p>Client IP</p>
                     * 
                     */
                    std::string GetClientSideIp() const;

                    /**
                     * 设置<p>Client IP</p>
                     * @param _clientSideIp <p>Client IP</p>
                     * 
                     */
                    void SetClientSideIp(const std::string& _clientSideIp);

                    /**
                     * 判断参数 ClientSideIp 是否已赋值
                     * @return ClientSideIp 是否已赋值
                     * 
                     */
                    bool ClientSideIpHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return EndTime <p>End time.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _endTime <p>End time.</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule.</p>
                     * @return HitRule <p>Hit rule.</p>
                     * 
                     */
                    int64_t GetHitRule() const;

                    /**
                     * 设置<p>Hit rule.</p>
                     * @param _hitRule <p>Hit rule.</p>
                     * 
                     */
                    void SetHitRule(const int64_t& _hitRule);

                    /**
                     * 判断参数 HitRule 是否已赋值
                     * @return HitRule 是否已赋值
                     * 
                     */
                    bool HitRuleHasBeenSet() const;

                    /**
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy query</p>
                     * @return FuzzySearch <p>Fuzzy query</p>
                     * 
                     */
                    std::string GetFuzzySearch() const;

                    /**
                     * 设置<p>Fuzzy query</p>
                     * @param _fuzzySearch <p>Fuzzy query</p>
                     * 
                     */
                    void SetFuzzySearch(const std::string& _fuzzySearch);

                    /**
                     * 判断参数 FuzzySearch 是否已赋值
                     * @return FuzzySearch 是否已赋值
                     * 
                     */
                    bool FuzzySearchHasBeenSet() const;

                    /**
                     * 获取<p>Username.</p>
                     * @return UserName <p>Username.</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _userName <p>Username.</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Restore log id</p>
                     * @return RestoreLogId <p>Restore log id</p>
                     * 
                     */
                    int64_t GetRestoreLogId() const;

                    /**
                     * 设置<p>Restore log id</p>
                     * @param _restoreLogId <p>Restore log id</p>
                     * 
                     */
                    void SetRestoreLogId(const int64_t& _restoreLogId);

                    /**
                     * 判断参数 RestoreLogId 是否已赋值
                     * @return RestoreLogId 是否已赋值
                     * 
                     */
                    bool RestoreLogIdHasBeenSet() const;

                    /**
                     * 获取<p>Client</p>
                     * @return ClientName <p>Client</p>
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置<p>Client</p>
                     * @param _clientName <p>Client</p>
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取<p>Traffic source. Parameter Value: Agent/Proxy/empty. If Agent is passed, Agent logs will be returned. If Proxy is passed, proxy logs will be returned. If both are passed or neither is passed, all will be returned.</p>
                     * @return SourceTypes <p>Traffic source. Parameter Value: Agent/Proxy/empty. If Agent is passed, Agent logs will be returned. If Proxy is passed, proxy logs will be returned. If both are passed or neither is passed, all will be returned.</p>
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置<p>Traffic source. Parameter Value: Agent/Proxy/empty. If Agent is passed, Agent logs will be returned. If Proxy is passed, proxy logs will be returned. If both are passed or neither is passed, all will be returned.</p>
                     * @param _sourceTypes <p>Traffic source. Parameter Value: Agent/Proxy/empty. If Agent is passed, Agent logs will be returned. If Proxy is passed, proxy logs will be returned. If both are passed or neither is passed, all will be returned.</p>
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>Table name, length limited to 64. For queries on multiple tables, use space-separated names.</p>
                     * @return TableName <p>Table name, length limited to 64. For queries on multiple tables, use space-separated names.</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>Table name, length limited to 64. For queries on multiple tables, use space-separated names.</p>
                     * @param _tableName <p>Table name, length limited to 64. For queries on multiple tables, use space-separated names.</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>Field name. Length limit: 64. For querying multiple field names, use space-separated values.</p>
                     * @return FieldName <p>Field name. Length limit: 64. For querying multiple field names, use space-separated values.</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>Field name. Length limit: 64. For querying multiple field names, use space-separated values.</p>
                     * @param _fieldName <p>Field name. Length limit: 64. For querying multiple field names, use space-separated values.</p>
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取<p>Main SQL types, DDL, DML, DCL, TCL</p>
                     * @return SqlMainTypes <p>Main SQL types, DDL, DML, DCL, TCL</p>
                     * 
                     */
                    std::vector<std::string> GetSqlMainTypes() const;

                    /**
                     * 设置<p>Main SQL types, DDL, DML, DCL, TCL</p>
                     * @param _sqlMainTypes <p>Main SQL types, DDL, DML, DCL, TCL</p>
                     * 
                     */
                    void SetSqlMainTypes(const std::vector<std::string>& _sqlMainTypes);

                    /**
                     * 判断参数 SqlMainTypes 是否已赋值
                     * @return SqlMainTypes 是否已赋值
                     * 
                     */
                    bool SqlMainTypesHasBeenSet() const;

                    /**
                     * 获取<p>Operation type.</p>
                     * @return SqlType <p>Operation type.</p>
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>Operation type.</p>
                     * @param _sqlType <p>Operation type.</p>
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of affected rows</p>
                     * @return RowNumMin <p>Minimum number of affected rows</p>
                     * 
                     */
                    int64_t GetRowNumMin() const;

                    /**
                     * 设置<p>Minimum number of affected rows</p>
                     * @param _rowNumMin <p>Minimum number of affected rows</p>
                     * 
                     */
                    void SetRowNumMin(const int64_t& _rowNumMin);

                    /**
                     * 判断参数 RowNumMin 是否已赋值
                     * @return RowNumMin 是否已赋值
                     * 
                     */
                    bool RowNumMinHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of affected rows</p>
                     * @return RowNumMax <p>Maximum number of affected rows</p>
                     * 
                     */
                    int64_t GetRowNumMax() const;

                    /**
                     * 设置<p>Maximum number of affected rows</p>
                     * @param _rowNumMax <p>Maximum number of affected rows</p>
                     * 
                     */
                    void SetRowNumMax(const int64_t& _rowNumMax);

                    /**
                     * 判断参数 RowNumMax 是否已赋值
                     * @return RowNumMax 是否已赋值
                     * 
                     */
                    bool RowNumMaxHasBeenSet() const;

                    /**
                     * 获取<p>Database type. Supported values: cdb, mariadb</p>
                     * @return DbTypes <p>Database type. Supported values: cdb, mariadb</p>
                     * 
                     */
                    std::vector<std::string> GetDbTypes() const;

                    /**
                     * 设置<p>Database type. Supported values: cdb, mariadb</p>
                     * @param _dbTypes <p>Database type. Supported values: cdb, mariadb</p>
                     * 
                     */
                    void SetDbTypes(const std::vector<std::string>& _dbTypes);

                    /**
                     * 判断参数 DbTypes 是否已赋值
                     * @return DbTypes 是否已赋值
                     * 
                     */
                    bool DbTypesHasBeenSet() const;

                    /**
                     * 获取<p>Status code.</p>
                     * @return RetNo <p>Status code.</p>
                     * 
                     */
                    int64_t GetRetNo() const;

                    /**
                     * 设置<p>Status code.</p>
                     * @param _retNo <p>Status code.</p>
                     * 
                     */
                    void SetRetNo(const int64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

                    /**
                     * 获取<p>Client tool</p>
                     * @return ClientDriverName <p>Client tool</p>
                     * 
                     */
                    std::string GetClientDriverName() const;

                    /**
                     * 设置<p>Client tool</p>
                     * @param _clientDriverName <p>Client tool</p>
                     * 
                     */
                    void SetClientDriverName(const std::string& _clientDriverName);

                    /**
                     * 判断参数 ClientDriverName 是否已赋值
                     * @return ClientDriverName 是否已赋值
                     * 
                     */
                    bool ClientDriverNameHasBeenSet() const;

                    /**
                     * 获取<p>Client port</p>
                     * @return ClientPort <p>Client port</p>
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置<p>Client port</p>
                     * @param _clientPort <p>Client port</p>
                     * 
                     */
                    void SetClientPort(const int64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取<p>Audit log ID</p>
                     * @return LogId <p>Audit log ID</p>
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置<p>Audit log ID</p>
                     * @param _logId <p>Audit log ID</p>
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取<p>Risk level array (0-safe, 1-low risk, 2-medium-risk, 3-high-risk)</p>
                     * @return DangerLevels <p>Risk level array (0-safe, 1-low risk, 2-medium-risk, 3-high-risk)</p>
                     * 
                     */
                    std::vector<int64_t> GetDangerLevels() const;

                    /**
                     * 设置<p>Risk level array (0-safe, 1-low risk, 2-medium-risk, 3-high-risk)</p>
                     * @param _dangerLevels <p>Risk level array (0-safe, 1-low risk, 2-medium-risk, 3-high-risk)</p>
                     * 
                     */
                    void SetDangerLevels(const std::vector<int64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     * 
                     */
                    bool DangerLevelsHasBeenSet() const;

                    /**
                     * 获取<p>Field classification</p>
                     * @return SensitiveCategoryRule <p>Field classification</p>
                     * 
                     */
                    std::string GetSensitiveCategoryRule() const;

                    /**
                     * 设置<p>Field classification</p>
                     * @param _sensitiveCategoryRule <p>Field classification</p>
                     * 
                     */
                    void SetSensitiveCategoryRule(const std::string& _sensitiveCategoryRule);

                    /**
                     * 判断参数 SensitiveCategoryRule 是否已赋值
                     * @return SensitiveCategoryRule 是否已赋值
                     * 
                     */
                    bool SensitiveCategoryRuleHasBeenSet() const;

                    /**
                     * 获取<p>Field classification</p>
                     * @return SensitiveLevelRisk <p>Field classification</p>
                     * 
                     */
                    std::string GetSensitiveLevelRisk() const;

                    /**
                     * 设置<p>Field classification</p>
                     * @param _sensitiveLevelRisk <p>Field classification</p>
                     * 
                     */
                    void SetSensitiveLevelRisk(const std::string& _sensitiveLevelRisk);

                    /**
                     * 判断参数 SensitiveLevelRisk 是否已赋值
                     * @return SensitiveLevelRisk 是否已赋值
                     * 
                     */
                    bool SensitiveLevelRiskHasBeenSet() const;

                    /**
                     * 获取<p>Client MAC</p>
                     * @return ClientMac <p>Client MAC</p>
                     * 
                     */
                    std::string GetClientMac() const;

                    /**
                     * 设置<p>Client MAC</p>
                     * @param _clientMac <p>Client MAC</p>
                     * 
                     */
                    void SetClientMac(const std::string& _clientMac);

                    /**
                     * 判断参数 ClientMac 是否已赋值
                     * @return ClientMac 是否已赋值
                     * 
                     */
                    bool ClientMacHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Number limit.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting method (desc=descending order, asc=ascending order)</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Sorting field (opTime=time, dangerLvl=risk level)</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>Risk level (0-safe, 1-low risk, 2-medium-risk, 3-high-risk, all if not passed)</p>
                     */
                    std::string m_dangerLevel;
                    bool m_dangerLevelHasBeenSet;

                    /**
                     * <p>Database name</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>Database port</p>
                     */
                    int64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * <p>Database IP</p>
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * <p>Asset ID.</p>
                     */
                    int64_t m_assetsId;
                    bool m_assetsIdHasBeenSet;

                    /**
                     * <p>Session ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Client IP</p>
                     */
                    std::string m_clientSideIp;
                    bool m_clientSideIpHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Hit rule.</p>
                     */
                    int64_t m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Fuzzy query</p>
                     */
                    std::string m_fuzzySearch;
                    bool m_fuzzySearchHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Restore log id</p>
                     */
                    int64_t m_restoreLogId;
                    bool m_restoreLogIdHasBeenSet;

                    /**
                     * <p>Client</p>
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * <p>Traffic source. Parameter Value: Agent/Proxy/empty. If Agent is passed, Agent logs will be returned. If Proxy is passed, proxy logs will be returned. If both are passed or neither is passed, all will be returned.</p>
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * <p>Table name, length limited to 64. For queries on multiple tables, use space-separated names.</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>Field name. Length limit: 64. For querying multiple field names, use space-separated values.</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>Main SQL types, DDL, DML, DCL, TCL</p>
                     */
                    std::vector<std::string> m_sqlMainTypes;
                    bool m_sqlMainTypesHasBeenSet;

                    /**
                     * <p>Operation type.</p>
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>Minimum number of affected rows</p>
                     */
                    int64_t m_rowNumMin;
                    bool m_rowNumMinHasBeenSet;

                    /**
                     * <p>Maximum number of affected rows</p>
                     */
                    int64_t m_rowNumMax;
                    bool m_rowNumMaxHasBeenSet;

                    /**
                     * <p>Database type. Supported values: cdb, mariadb</p>
                     */
                    std::vector<std::string> m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                    /**
                     * <p>Status code.</p>
                     */
                    int64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * <p>Client tool</p>
                     */
                    std::string m_clientDriverName;
                    bool m_clientDriverNameHasBeenSet;

                    /**
                     * <p>Client port</p>
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * <p>Audit log ID</p>
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * <p>Risk level array (0-safe, 1-low risk, 2-medium-risk, 3-high-risk)</p>
                     */
                    std::vector<int64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                    /**
                     * <p>Field classification</p>
                     */
                    std::string m_sensitiveCategoryRule;
                    bool m_sensitiveCategoryRuleHasBeenSet;

                    /**
                     * <p>Field classification</p>
                     */
                    std::string m_sensitiveLevelRisk;
                    bool m_sensitiveLevelRiskHasBeenSet;

                    /**
                     * <p>Client MAC</p>
                     */
                    std::string m_clientMac;
                    bool m_clientMacHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMLOGLISTREQUEST_H_
