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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Permission objects
                */
                class Policy : public AbstractModel
                {
                public:
                    Policy();
                    ~Policy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the target database. `*` represents all databases in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any database.
                     * @return Database The name of the target database. `*` represents all databases in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any database.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置The name of the target database. `*` represents all databases in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any database.
                     * @param _database The name of the target database. `*` represents all databases in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any database.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取The name of the target data source. To grant admin permission, it must be `*` (all resources at this level); to grant data source and database permissions, it must be `COSDataCatalog` or `*`; to grant table permissions, it can be a custom data source; if it is left empty, `DataLakeCatalog` is used. Note: To grant permissions on a custom data source, the permissions that can be managed in the Data Lake Compute console are subsets of the account permissions granted when you connect the data source to the console.
                     * @return Catalog The name of the target data source. To grant admin permission, it must be `*` (all resources at this level); to grant data source and database permissions, it must be `COSDataCatalog` or `*`; to grant table permissions, it can be a custom data source; if it is left empty, `DataLakeCatalog` is used. Note: To grant permissions on a custom data source, the permissions that can be managed in the Data Lake Compute console are subsets of the account permissions granted when you connect the data source to the console.
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置The name of the target data source. To grant admin permission, it must be `*` (all resources at this level); to grant data source and database permissions, it must be `COSDataCatalog` or `*`; to grant table permissions, it can be a custom data source; if it is left empty, `DataLakeCatalog` is used. Note: To grant permissions on a custom data source, the permissions that can be managed in the Data Lake Compute console are subsets of the account permissions granted when you connect the data source to the console.
                     * @param _catalog The name of the target data source. To grant admin permission, it must be `*` (all resources at this level); to grant data source and database permissions, it must be `COSDataCatalog` or `*`; to grant table permissions, it can be a custom data source; if it is left empty, `DataLakeCatalog` is used. Note: To grant permissions on a custom data source, the permissions that can be managed in the Data Lake Compute console are subsets of the account permissions granted when you connect the data source to the console.
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取The name of the target table. `*` represents all tables in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any table.
                     * @return Table The name of the target table. `*` represents all tables in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any table.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置The name of the target table. `*` represents all tables in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any table.
                     * @param _table The name of the target table. `*` represents all tables in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any table.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取The target permissions, which vary by permission level. Admin: `ALL` (default); data connection: `CREATE`; database: `ALL`, `CREATE`, `ALTER`, and `DROP`; table: `ALL`, `SELECT`, `INSERT`, `ALTER`, `DELETE`, `DROP`, and `UPDATE`. Note: For table permissions, if a data source other than `COSDataCatalog` is specified, only the `SELECT` permission can be granted here.
                     * @return Operation The target permissions, which vary by permission level. Admin: `ALL` (default); data connection: `CREATE`; database: `ALL`, `CREATE`, `ALTER`, and `DROP`; table: `ALL`, `SELECT`, `INSERT`, `ALTER`, `DELETE`, `DROP`, and `UPDATE`. Note: For table permissions, if a data source other than `COSDataCatalog` is specified, only the `SELECT` permission can be granted here.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置The target permissions, which vary by permission level. Admin: `ALL` (default); data connection: `CREATE`; database: `ALL`, `CREATE`, `ALTER`, and `DROP`; table: `ALL`, `SELECT`, `INSERT`, `ALTER`, `DELETE`, `DROP`, and `UPDATE`. Note: For table permissions, if a data source other than `COSDataCatalog` is specified, only the `SELECT` permission can be granted here.
                     * @param _operation The target permissions, which vary by permission level. Admin: `ALL` (default); data connection: `CREATE`; database: `ALL`, `CREATE`, `ALTER`, and `DROP`; table: `ALL`, `SELECT`, `INSERT`, `ALTER`, `DELETE`, `DROP`, and `UPDATE`. Note: For table permissions, if a data source other than `COSDataCatalog` is specified, only the `SELECT` permission can be granted here.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取The permission type. Valid values: `ADMIN`, `DATASOURCE`, `DATABASE`, `TABLE`, `VIEW`, `FUNCTION`, `COLUMN`, and `ENGINE`. Note: If it is left empty, `ADMIN` is used.
                     * @return PolicyType The permission type. Valid values: `ADMIN`, `DATASOURCE`, `DATABASE`, `TABLE`, `VIEW`, `FUNCTION`, `COLUMN`, and `ENGINE`. Note: If it is left empty, `ADMIN` is used.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置The permission type. Valid values: `ADMIN`, `DATASOURCE`, `DATABASE`, `TABLE`, `VIEW`, `FUNCTION`, `COLUMN`, and `ENGINE`. Note: If it is left empty, `ADMIN` is used.
                     * @param _policyType The permission type. Valid values: `ADMIN`, `DATASOURCE`, `DATABASE`, `TABLE`, `VIEW`, `FUNCTION`, `COLUMN`, and `ENGINE`. Note: If it is left empty, `ADMIN` is used.
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取The name of the target function. `*` represents all functions in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any function.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Function The name of the target function. `*` represents all functions in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any function.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置The name of the target function. `*` represents all functions in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any function.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _function The name of the target function. `*` represents all functions in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any function.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取The name of the target view. `*` represents all views in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any view.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return View The name of the target view. `*` represents all views in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any view.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置The name of the target view. `*` represents all views in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any view.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _view The name of the target view. `*` represents all views in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any view.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取The name of the target column. `*` represents all columns. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Column The name of the target column. `*` represents all columns. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置The name of the target column. `*` represents all columns. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _column The name of the target column. `*` represents all columns. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取The name of the target data engine. `*` represents all engines. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataEngine The name of the target data engine. `*` represents all engines. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置The name of the target data engine. `*` represents all engines. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataEngine The name of the target data engine. `*` represents all engines. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取Whether the grantee is allowed to further grant the permissions. Valid values: `false` (default) and `true` (the grantee can grant permissions gained here to other sub-users).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReAuth Whether the grantee is allowed to further grant the permissions. Valid values: `false` (default) and `true` (the grantee can grant permissions gained here to other sub-users).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetReAuth() const;

                    /**
                     * 设置Whether the grantee is allowed to further grant the permissions. Valid values: `false` (default) and `true` (the grantee can grant permissions gained here to other sub-users).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reAuth Whether the grantee is allowed to further grant the permissions. Valid values: `false` (default) and `true` (the grantee can grant permissions gained here to other sub-users).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReAuth(const bool& _reAuth);

                    /**
                     * 判断参数 ReAuth 是否已赋值
                     * @return ReAuth 是否已赋值
                     * 
                     */
                    bool ReAuthHasBeenSet() const;

                    /**
                     * 获取The permission source, which is not required when input parameters are passed in. Valid values: `USER` (from the user) and `WORKGROUP` (from one or more associated work groups).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Source The permission source, which is not required when input parameters are passed in. Valid values: `USER` (from the user) and `WORKGROUP` (from one or more associated work groups).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置The permission source, which is not required when input parameters are passed in. Valid values: `USER` (from the user) and `WORKGROUP` (from one or more associated work groups).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _source The permission source, which is not required when input parameters are passed in. Valid values: `USER` (from the user) and `WORKGROUP` (from one or more associated work groups).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取The grant mode, which is not required as an input parameter. Valid values: `COMMON` and `SENIOR`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mode The grant mode, which is not required as an input parameter. Valid values: `COMMON` and `SENIOR`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The grant mode, which is not required as an input parameter. Valid values: `COMMON` and `SENIOR`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mode The grant mode, which is not required as an input parameter. Valid values: `COMMON` and `SENIOR`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The operator, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operator The operator, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The operator, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operator The operator, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取The permission policy creation time, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The permission policy creation time, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The permission policy creation time, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The permission policy creation time, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The ID of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceId The ID of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSourceId() const;

                    /**
                     * 设置The ID of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceId The ID of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceId(const int64_t& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取The name of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceName The name of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置The name of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceName The name of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取The policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id The policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置The policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id The policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * The name of the target database. `*` represents all databases in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any database.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * The name of the target data source. To grant admin permission, it must be `*` (all resources at this level); to grant data source and database permissions, it must be `COSDataCatalog` or `*`; to grant table permissions, it can be a custom data source; if it is left empty, `DataLakeCatalog` is used. Note: To grant permissions on a custom data source, the permissions that can be managed in the Data Lake Compute console are subsets of the account permissions granted when you connect the data source to the console.
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * The name of the target table. `*` represents all tables in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any table.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * The target permissions, which vary by permission level. Admin: `ALL` (default); data connection: `CREATE`; database: `ALL`, `CREATE`, `ALTER`, and `DROP`; table: `ALL`, `SELECT`, `INSERT`, `ALTER`, `DELETE`, `DROP`, and `UPDATE`. Note: For table permissions, if a data source other than `COSDataCatalog` is specified, only the `SELECT` permission can be granted here.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * The permission type. Valid values: `ADMIN`, `DATASOURCE`, `DATABASE`, `TABLE`, `VIEW`, `FUNCTION`, `COLUMN`, and `ENGINE`. Note: If it is left empty, `ADMIN` is used.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * The name of the target function. `*` represents all functions in the current catalog. To grant admin permissions, it must be `*`; to grant data connection permissions, it must be null; to grant other permissions, it can be any function.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * The name of the target view. `*` represents all views in the current database. To grant admin permissions, it must be `*`; to grant data connection and database permissions, it must be null; to grant other permissions, it can be any view.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * The name of the target column. `*` represents all columns. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * The name of the target data engine. `*` represents all engines. To grant admin permissions, it must be `*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * Whether the grantee is allowed to further grant the permissions. Valid values: `false` (default) and `true` (the grantee can grant permissions gained here to other sub-users).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_reAuth;
                    bool m_reAuthHasBeenSet;

                    /**
                     * The permission source, which is not required when input parameters are passed in. Valid values: `USER` (from the user) and `WORKGROUP` (from one or more associated work groups).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * The grant mode, which is not required as an input parameter. Valid values: `COMMON` and `SENIOR`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The operator, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The permission policy creation time, which is not required as an input parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The ID of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * The name of the work group, which applies only when the value of the `Source` field is `WORKGROUP`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * The policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
