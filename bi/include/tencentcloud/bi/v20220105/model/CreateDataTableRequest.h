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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>
#include <tencentcloud/bi/v20220105/model/JoinSourceTable.h>
#include <tencentcloud/bi/v20220105/model/JoinRelation.h>
#include <tencentcloud/bi/v20220105/model/ApiDatasourceConfig.h>
#include <tencentcloud/bi/v20220105/model/ParamCreateDTO.h>
#include <tencentcloud/bi/v20220105/model/FieldRemarkDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateDataTable request structure.
                */
                class CreateDataTableRequest : public AbstractModel
                {
                public:
                    CreateDataTableRequest();
                    ~CreateDataTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * @return Type The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * @param _type The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Data table name
                     * @return Name Data table name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Data table name
                     * @param _name Data table name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return ProjectId None.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置None.
                     * @param _projectId None.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取folder
                     * @return FoldId folder
                     * 
                     */
                    uint64_t GetFoldId() const;

                    /**
                     * 设置folder
                     * @param _foldId folder
                     * 
                     */
                    void SetFoldId(const uint64_t& _foldId);

                    /**
                     * 判断参数 FoldId 是否已赋值
                     * @return FoldId 是否已赋值
                     * 
                     */
                    bool FoldIdHasBeenSet() const;

                    /**
                     * 获取data source Id
                     * @return DatasourceId data source Id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置data source Id
                     * @param _datasourceId data source Id
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
                     * 获取physical table name
                     * @return TableName physical table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置physical table name
                     * @param _tableName physical table name
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
                     * 获取sql statement
                     * @return Sql sql statement
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql statement
                     * @param _sql sql statement
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取excel address
                     * @return ExcelUrl excel address
                     * 
                     */
                    std::string GetExcelUrl() const;

                    /**
                     * 设置excel address
                     * @param _excelUrl excel address
                     * 
                     */
                    void SetExcelUrl(const std::string& _excelUrl);

                    /**
                     * 判断参数 ExcelUrl 是否已赋值
                     * @return ExcelUrl 是否已赋值
                     * 
                     */
                    bool ExcelUrlHasBeenSet() const;

                    /**
                     * 获取configure field
                     * @return Fields configure field
                     * 
                     */
                    std::vector<TableField> GetFields() const;

                    /**
                     * 设置configure field
                     * @param _fields configure field
                     * 
                     */
                    void SetFields(const std::vector<TableField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取Multi-table join usage: 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
                     * @return TableNodeType Multi-table join usage: 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
                     * 
                     */
                    uint64_t GetTableNodeType() const;

                    /**
                     * 设置Multi-table join usage: 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
                     * @param _tableNodeType Multi-table join usage: 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
                     * 
                     */
                    void SetTableNodeType(const uint64_t& _tableNodeType);

                    /**
                     * 判断参数 TableNodeType 是否已赋值
                     * @return TableNodeType 是否已赋值
                     * 
                     */
                    bool TableNodeTypeHasBeenSet() const;

                    /**
                     * 获取Original table information for multi-table join
                     * @return Tables Original table information for multi-table join
                     * 
                     */
                    std::vector<JoinSourceTable> GetTables() const;

                    /**
                     * 设置Original table information for multi-table join
                     * @param _tables Original table information for multi-table join
                     * 
                     */
                    void SetTables(const std::vector<JoinSourceTable>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取Multi-table join association information
                     * @return Joins Multi-table join association information
                     * 
                     */
                    std::vector<JoinRelation> GetJoins() const;

                    /**
                     * 设置Multi-table join association information
                     * @param _joins Multi-table join association information
                     * 
                     */
                    void SetJoins(const std::vector<JoinRelation>& _joins);

                    /**
                     * 判断参数 Joins 是否已赋值
                     * @return Joins 是否已赋值
                     * 
                     */
                    bool JoinsHasBeenSet() const;

                    /**
                     * 获取Additional info, such as api data source info and Tencent document access info
                     * @return ExtInfo Additional info, such as api data source info and Tencent document access info
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Additional info, such as api data source info and Tencent document access info
                     * @param _extInfo Additional info, such as api data source info and Tencent document access info
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取whether
                     * @return AsyncRequest whether
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置whether
                     * @param _asyncRequest whether
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取dependent async transaction id
                     * @return ParentTranId dependent async transaction id
                     * 
                     */
                    std::string GetParentTranId() const;

                    /**
                     * 设置dependent async transaction id
                     * @param _parentTranId dependent async transaction id
                     * 
                     */
                    void SetParentTranId(const std::string& _parentTranId);

                    /**
                     * 判断参数 ParentTranId 是否已赋值
                     * @return ParentTranId 是否已赋值
                     * 
                     */
                    bool ParentTranIdHasBeenSet() const;

                    /**
                     * 获取API data source configuration
                     * @return ApiDatasourceConfig API data source configuration
                     * 
                     */
                    ApiDatasourceConfig GetApiDatasourceConfig() const;

                    /**
                     * 设置API data source configuration
                     * @param _apiDatasourceConfig API data source configuration
                     * 
                     */
                    void SetApiDatasourceConfig(const ApiDatasourceConfig& _apiDatasourceConfig);

                    /**
                     * 判断参数 ApiDatasourceConfig 是否已赋值
                     * @return ApiDatasourceConfig 是否已赋值
                     * 
                     */
                    bool ApiDatasourceConfigHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ParamList 1
                     * 
                     */
                    std::vector<ParamCreateDTO> GetParamList() const;

                    /**
                     * 设置1
                     * @param _paramList 1
                     * 
                     */
                    void SetParamList(const std::vector<ParamCreateDTO>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取dlc advanced parameter
                     * @return DlcExtInfo dlc advanced parameter
                     * 
                     */
                    std::string GetDlcExtInfo() const;

                    /**
                     * 设置dlc advanced parameter
                     * @param _dlcExtInfo dlc advanced parameter
                     * 
                     */
                    void SetDlcExtInfo(const std::string& _dlcExtInfo);

                    /**
                     * 判断参数 DlcExtInfo 是否已赋值
                     * @return DlcExtInfo 是否已赋值
                     * 
                     */
                    bool DlcExtInfoHasBeenSet() const;

                    /**
                     * 获取Query database required or not
                     * @return QueryDbData Query database required or not
                     * 
                     */
                    std::string GetQueryDbData() const;

                    /**
                     * 设置Query database required or not
                     * @param _queryDbData Query database required or not
                     * 
                     */
                    void SetQueryDbData(const std::string& _queryDbData);

                    /**
                     * 判断参数 QueryDbData 是否已赋值
                     * @return QueryDbData 是否已赋值
                     * 
                     */
                    bool QueryDbDataHasBeenSet() const;

                    /**
                     * 获取Table remark
                     * @return TableComment Table remark
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置Table remark
                     * @param _tableComment Table remark
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
                     * 获取Whether to query field remarks
                     * @return QueryFieldRemark Whether to query field remarks
                     * 
                     */
                    int64_t GetQueryFieldRemark() const;

                    /**
                     * 设置Whether to query field remarks
                     * @param _queryFieldRemark Whether to query field remarks
                     * 
                     */
                    void SetQueryFieldRemark(const int64_t& _queryFieldRemark);

                    /**
                     * 判断参数 QueryFieldRemark 是否已赋值
                     * @return QueryFieldRemark 是否已赋值
                     * 
                     */
                    bool QueryFieldRemarkHasBeenSet() const;

                    /**
                     * 获取Field remarks list
                     * @return FieldRemarkList Field remarks list
                     * 
                     */
                    std::vector<FieldRemarkDTO> GetFieldRemarkList() const;

                    /**
                     * 设置Field remarks list
                     * @param _fieldRemarkList Field remarks list
                     * 
                     */
                    void SetFieldRemarkList(const std::vector<FieldRemarkDTO>& _fieldRemarkList);

                    /**
                     * 判断参数 FieldRemarkList 是否已赋值
                     * @return FieldRemarkList 是否已赋值
                     * 
                     */
                    bool FieldRemarkListHasBeenSet() const;

                private:

                    /**
                     * The backend provides a dictionary: table type, 1. database table creation, 2. SQL table creation, 3. Excel upload, 4. API connection, 5. Tencent documentation, 6. cloud database, 7. manually enter, 8. join query.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Data table name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * None.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * folder
                     */
                    uint64_t m_foldId;
                    bool m_foldIdHasBeenSet;

                    /**
                     * data source Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * physical table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * sql statement
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * excel address
                     */
                    std::string m_excelUrl;
                    bool m_excelUrlHasBeenSet;

                    /**
                     * configure field
                     */
                    std::vector<TableField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * Multi-table join usage: 1: Data source original table, 2: Local table, 3: Excel table, 4: API table
                     */
                    uint64_t m_tableNodeType;
                    bool m_tableNodeTypeHasBeenSet;

                    /**
                     * Original table information for multi-table join
                     */
                    std::vector<JoinSourceTable> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * Multi-table join association information
                     */
                    std::vector<JoinRelation> m_joins;
                    bool m_joinsHasBeenSet;

                    /**
                     * Additional info, such as api data source info and Tencent document access info
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * whether
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * dependent async transaction id
                     */
                    std::string m_parentTranId;
                    bool m_parentTranIdHasBeenSet;

                    /**
                     * API data source configuration
                     */
                    ApiDatasourceConfig m_apiDatasourceConfig;
                    bool m_apiDatasourceConfigHasBeenSet;

                    /**
                     * 1
                     */
                    std::vector<ParamCreateDTO> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * dlc advanced parameter
                     */
                    std::string m_dlcExtInfo;
                    bool m_dlcExtInfoHasBeenSet;

                    /**
                     * Query database required or not
                     */
                    std::string m_queryDbData;
                    bool m_queryDbDataHasBeenSet;

                    /**
                     * Table remark
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * Whether to query field remarks
                     */
                    int64_t m_queryFieldRemark;
                    bool m_queryFieldRemarkHasBeenSet;

                    /**
                     * Field remarks list
                     */
                    std::vector<FieldRemarkDTO> m_fieldRemarkList;
                    bool m_fieldRemarkListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_
