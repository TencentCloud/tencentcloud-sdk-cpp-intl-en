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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataGovernPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Table configurations
                */
                class TableBaseInfo : public AbstractModel
                {
                public:
                    TableBaseInfo();
                    ~TableBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The database name.
                     * @return DatabaseName The database name.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置The database name.
                     * @param _databaseName The database name.
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
                     * 获取The table name.
                     * @return TableName The table name.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置The table name.
                     * @param _tableName The table name.
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
                     * 获取The data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatasourceConnectionName The data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置The data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _datasourceConnectionName The data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取The table remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableComment The table remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置The table remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableComment The table remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取The specific type: `table` or `view`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type The specific type: `table` or `view`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The specific type: `table` or `view`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type The specific type: `table` or `view`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The data format type, such as `hive` and `iceberg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableFormat The data format type, such as `hive` and `iceberg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置The data format type, such as `hive` and `iceberg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableFormat The data format type, such as `hive` and `iceberg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

                    /**
                     * 获取The table creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAlias The table creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置The table creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAlias The table creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取The table creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserSubUin The table creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置The table creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userSubUin The table creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserSubUin(const std::string& _userSubUin);

                    /**
                     * 判断参数 UserSubUin 是否已赋值
                     * @return UserSubUin 是否已赋值
                     * 
                     */
                    bool UserSubUinHasBeenSet() const;

                    /**
                     * 获取The data governance configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GovernPolicy The data governance configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置The data governance configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _governPolicy The data governance configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGovernPolicy(const DataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * 
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取Whether database data governance is disabled. Valid values: `true` (disabled) and `false` (not disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbGovernPolicyIsDisable Whether database data governance is disabled. Valid values: `true` (disabled) and `false` (not disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbGovernPolicyIsDisable() const;

                    /**
                     * 设置Whether database data governance is disabled. Valid values: `true` (disabled) and `false` (not disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbGovernPolicyIsDisable Whether database data governance is disabled. Valid values: `true` (disabled) and `false` (not disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbGovernPolicyIsDisable(const std::string& _dbGovernPolicyIsDisable);

                    /**
                     * 判断参数 DbGovernPolicyIsDisable 是否已赋值
                     * @return DbGovernPolicyIsDisable 是否已赋值
                     * 
                     */
                    bool DbGovernPolicyIsDisableHasBeenSet() const;

                private:

                    /**
                     * The database name.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * The table name.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * The data source name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * The table remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * The specific type: `table` or `view`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The data format type, such as `hive` and `iceberg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * The table creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * The table creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                    /**
                     * The data governance configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * Whether database data governance is disabled. Valid values: `true` (disabled) and `false` (not disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbGovernPolicyIsDisable;
                    bool m_dbGovernPolicyIsDisableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
