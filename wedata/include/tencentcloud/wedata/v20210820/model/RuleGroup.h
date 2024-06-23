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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Quality Rule Group
                */
                class RuleGroup : public AbstractModel
                {
                public:
                    RuleGroup();
                    ~RuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceName Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceName Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取Monitoring Type: 1. Not Configured, 2. Associate Production Scheduling, 3. Offline Period Detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorType Monitoring Type: 1. Not Configured, 2. Associate Production Scheduling, 3. Offline Period Detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置Monitoring Type: 1. Not Configured, 2. Associate Production Scheduling, 3. Offline Period Detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorType Monitoring Type: 1. Not Configured, 2. Associate Production Scheduling, 3. Offline Period Detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Associated Data Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Associated Data Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Associated Data Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Associated Data Table Name
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
                     * 获取Associated Data Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId Associated Data Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Associated Data Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId Associated Data Table Id
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
                     * 获取Associated Data Table Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerName Associated Data Table Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置Associated Data Table Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerName Associated Data Table Owner
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
                     * 获取Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecStrategy Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _execStrategy Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecStrategy(const RuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     * 
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Subscription Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _subscription Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubscription(const RuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

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
                     * 获取Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseName Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Permission Granted
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Permission Permission Granted
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetPermission() const;

                    /**
                     * 设置Permission Granted
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _permission Permission Granted
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
                     * 获取Number of Rules Configured
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleCount Number of Rules Configured
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置Number of Rules Configured
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleCount Number of Rules Configured
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取Monitoring Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorStatus Monitoring Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetMonitorStatus() const;

                    /**
                     * 设置Monitoring Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorStatus Monitoring Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorStatus(const bool& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取Table Leader UserId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerUserId Table Leader UserId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置Table Leader UserId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerUserId Table Leader UserId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableOwnerUserId(const uint64_t& _tableOwnerUserId);

                    /**
                     * 判断参数 TableOwnerUserId 是否已赋值
                     * @return TableOwnerUserId 是否已赋值
                     * 
                     */
                    bool TableOwnerUserIdHasBeenSet() const;

                    /**
                     * 获取Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StrategyConfig Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetStrategyConfig() const;

                    /**
                     * 设置Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _strategyConfig Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStrategyConfig(const bool& _strategyConfig);

                    /**
                     * 判断参数 StrategyConfig 是否已赋值
                     * @return StrategyConfig 是否已赋值
                     * 
                     */
                    bool StrategyConfigHasBeenSet() const;

                    /**
                     * 获取Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubscribeConfig Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetSubscribeConfig() const;

                    /**
                     * 设置Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subscribeConfig Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubscribeConfig(const bool& _subscribeConfig);

                    /**
                     * 判断参数 SubscribeConfig 是否已赋值
                     * @return SubscribeConfig 是否已赋值
                     * 
                     */
                    bool SubscribeConfigHasBeenSet() const;

                    /**
                     * 获取Data Source Environment: 0 or not returned. Undefined, 1. Production, 2. Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DsEnvType Data Source Environment: 0 or not returned. Undefined, 1. Production, 2. Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置Data Source Environment: 0 or not returned. Undefined, 1. Production, 2. Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dsEnvType Data Source Environment: 0 or not returned. Undefined, 1. Production, 2. Development
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                private:

                    /**
                     * Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Data Source IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * Monitoring Type: 1. Not Configured, 2. Associate Production Scheduling, 3. Offline Period Detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Associated Data Table Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Associated Data Table Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Associated Data Table Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * Execution policyNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * Database ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Permission Granted
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * Number of Rules Configured
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * Monitoring Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * Table Leader UserId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                    /**
                     * Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                    /**
                     * Execution Strategy Configured?
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_subscribeConfig;
                    bool m_subscribeConfigHasBeenSet;

                    /**
                     * Data Source Environment: 0 or not returned. Undefined, 1. Production, 2. Development
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
