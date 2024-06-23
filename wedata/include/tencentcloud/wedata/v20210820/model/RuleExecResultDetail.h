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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_

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
                * Rule Execution Result Details
                */
                class RuleExecResultDetail : public AbstractModel
                {
                public:
                    RuleExecResultDetail();
                    ~RuleExecResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

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
                     * 获取Database GUID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatabaseId Database GUID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database GUID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _databaseId Database GUID
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
                     * 获取table guid
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableId table guid
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置table guid
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableId table guid
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
                     * 获取Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取rule execution record
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleExecResult rule execution record
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleExecResult GetRuleExecResult() const;

                    /**
                     * 设置rule execution record
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleExecResult rule execution record
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleExecResult(const RuleExecResult& _ruleExecResult);

                    /**
                     * 判断参数 RuleExecResult 是否已赋值
                     * @return RuleExecResult 是否已赋值
                     * 
                     */
                    bool RuleExecResultHasBeenSet() const;

                    /**
                     * 获取table owner userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableOwnerUserId table owner userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置table owner userId
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableOwnerUserId table owner userId
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
                     * 获取2.HIVE 3.DLC
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceType 2.HIVE 3.DLC
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置2.HIVE 3.DLC
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceType 2.HIVE 3.DLC
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * Database GUID
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
                     * Instance IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * table guid
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Table nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * rule execution record
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RuleExecResult m_ruleExecResult;
                    bool m_ruleExecResultHasBeenSet;

                    /**
                     * table owner userId
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                    /**
                     * 2.HIVE 3.DLC
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_
