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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DlcDataGovernPolicy.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Information Required for Creating DLC Table
                */
                class TableBaseInfo : public AbstractModel
                {
                public:
                    TableBaseInfo();
                    ~TableBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TableName Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableName Table NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Table's Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceConnectionName Data Table's Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置Data Table's Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceConnectionName Data Table's Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableComment Table Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置Table Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableComment Table Remarks
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Format Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableFormat Data Format Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置Data Format Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableFormat Data Format Type
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取User Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserAlias User Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userAlias User Nickname
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Table Creation User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserSubUin Table Creation User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置Table Creation User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userSubUin Table Creation User ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Governance Configuration ItemsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return GovernPolicy Data Governance Configuration ItemsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DlcDataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置Data Governance Configuration ItemsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _governPolicy Data Governance Configuration ItemsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGovernPolicy(const DlcDataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * 
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取Is Database Data Governance disabled, true for disabled, false for enabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DbGovernPolicyIsDisable Is Database Data Governance disabled, true for disabled, false for enabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDbGovernPolicyIsDisable() const;

                    /**
                     * 设置Is Database Data Governance disabled, true for disabled, false for enabled
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dbGovernPolicyIsDisable Is Database Data Governance disabled, true for disabled, false for enabled
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Database nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Table NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Data Table's Data Source Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * Table Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Data Format Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * User Nickname
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * Table Creation User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                    /**
                     * Data Governance Configuration ItemsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    DlcDataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * Is Database Data Governance disabled, true for disabled, false for enabled
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dbGovernPolicyIsDisable;
                    bool m_dbGovernPolicyIsDisableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_
