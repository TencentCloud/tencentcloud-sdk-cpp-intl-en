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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleExecResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Group Execution Result
                */
                class RuleGroupExecResult : public AbstractModel
                {
                public:
                    RuleGroupExecResult();
                    ~RuleGroupExecResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupExecId Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupExecId Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取Execution Trigger Type (1: Manual Trigger, 2: In-process Scheduling Trigger, 3: Periodic Scheduling Trigger)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerType Execution Trigger Type (1: Manual Trigger, 2: In-process Scheduling Trigger, 3: Periodic Scheduling Trigger)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Execution Trigger Type (1: Manual Trigger, 2: In-process Scheduling Trigger, 3: Periodic Scheduling Trigger)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerType Execution Trigger Type (1: Manual Trigger, 2: In-process Scheduling Trigger, 3: Periodic Scheduling Trigger)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Execution time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecTime Execution time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecTime() const;

                    /**
                     * 设置Execution time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execTime Execution time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecTime(const std::string& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Execution Status (1. Submitted, 2. Under detection, 3. Normal, 4. Abnormal)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Execution Status (1. Submitted, 2. Under detection, 3. Normal, 4. Abnormal)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Execution Status (1. Submitted, 2. Under detection, 3. Normal, 4. Abnormal)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Execution Status (1. Submitted, 2. Under detection, 3. Normal, 4. Abnormal)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of Exceptional Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmRuleCount Number of Exceptional Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlarmRuleCount() const;

                    /**
                     * 设置Number of Exceptional Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmRuleCount Number of Exceptional Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmRuleCount(const uint64_t& _alarmRuleCount);

                    /**
                     * 判断参数 AlarmRuleCount 是否已赋值
                     * @return AlarmRuleCount 是否已赋值
                     * 
                     */
                    bool AlarmRuleCountHasBeenSet() const;

                    /**
                     * 获取Total Number of Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalRuleCount Total Number of Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalRuleCount() const;

                    /**
                     * 设置Total Number of Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalRuleCount Total Number of Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalRuleCount(const uint64_t& _totalRuleCount);

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                    /**
                     * 获取Source Table Responsible Person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerName Source Table Responsible Person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置Source Table Responsible Person
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerName Source Table Responsible Person
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     * 
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取Source Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Source Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Source Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Source Table Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Permission Availability
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Permission Permission Availability
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetPermission() const;

                    /**
                     * 设置Permission Availability
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _permission Permission Availability
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPermission(const bool& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取Execution Details, Scheduling Plan, or Associated Production Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecDetail Execution Details, Scheduling Plan, or Associated Production Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecDetail() const;

                    /**
                     * 设置Execution Details, Scheduling Plan, or Associated Production Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execDetail Execution Details, Scheduling Plan, or Associated Production Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecDetail(const std::string& _execDetail);

                    /**
                     * 判断参数 ExecDetail 是否已赋值
                     * @return ExecDetail 是否已赋值
                     * 
                     */
                    bool ExecDetailHasBeenSet() const;

                    /**
                     * 获取Actual Execution Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EngineType Actual Execution Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Actual Execution Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engineType Actual Execution Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Rule Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleExecResultVOList Rule Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RuleExecResult> GetRuleExecResultVOList() const;

                    /**
                     * 设置Rule Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleExecResultVOList Rule Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleExecResultVOList(const std::vector<RuleExecResult>& _ruleExecResultVOList);

                    /**
                     * 判断参数 RuleExecResultVOList 是否已赋值
                     * @return RuleExecResultVOList 是否已赋值
                     * 
                     */
                    bool RuleExecResultVOListHasBeenSet() const;

                private:

                    /**
                     * Rule Group Execution ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Execution Trigger Type (1: Manual Trigger, 2: In-process Scheduling Trigger, 3: Periodic Scheduling Trigger)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Execution time yyyy-MM-dd HH:mm:ss
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Execution Status (1. Submitted, 2. Under detection, 3. Normal, 4. Abnormal)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of Exceptional Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alarmRuleCount;
                    bool m_alarmRuleCountHasBeenSet;

                    /**
                     * Total Number of Rules
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                    /**
                     * Source Table Responsible Person
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * Source Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Data Source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Permission Availability
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * Execution Details, Scheduling Plan, or Associated Production Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_execDetail;
                    bool m_execDetailHasBeenSet;

                    /**
                     * Actual Execution Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Rule Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RuleExecResult> m_ruleExecResultVOList;
                    bool m_ruleExecResultVOListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_
