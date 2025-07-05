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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TableItem.h>
#include <tencentcloud/dts/v20211206/model/ViewItem.h>
#include <tencentcloud/dts/v20211206/model/RoleItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Migration object information, which is case-sensitive when objects such as databases, tables, and views are configured.
                */
                class DBItem : public AbstractModel
                {
                public:
                    DBItem();
                    ~DBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the database to be migrated or synced, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Name of the database to be migrated or synced, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Name of the database to be migrated or synced, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Name of the database to be migrated or synced, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Name of the database after migration or sync, which is the same as the source database name by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewDbName Name of the database after migration or sync, which is the same as the source database name by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置Name of the database after migration or sync, which is the same as the source database name by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _newDbName Name of the database after migration or sync, which is the same as the source database name by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewDbName(const std::string& _newDbName);

                    /**
                     * 判断参数 NewDbName 是否已赋值
                     * @return NewDbName 是否已赋值
                     * 
                     */
                    bool NewDbNameHasBeenSet() const;

                    /**
                     * 获取The schema to be migrated or synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchemaName The schema to be migrated or synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置The schema to be migrated or synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schemaName The schema to be migrated or synced
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Name of the schema after migration or sync
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewSchemaName Name of the schema after migration or sync
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNewSchemaName() const;

                    /**
                     * 设置Name of the schema after migration or sync
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _newSchemaName Name of the schema after migration or sync
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewSchemaName(const std::string& _newSchemaName);

                    /**
                     * 判断参数 NewSchemaName 是否已赋值
                     * @return NewSchemaName 是否已赋值
                     * 
                     */
                    bool NewSchemaNameHasBeenSet() const;

                    /**
                     * 获取Database selection mode, which is required if `ObjectMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBMode Database selection mode, which is required if `ObjectMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBMode() const;

                    /**
                     * 设置Database selection mode, which is required if `ObjectMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBMode Database selection mode, which is required if `ObjectMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBMode(const std::string& _dBMode);

                    /**
                     * 判断参数 DBMode 是否已赋值
                     * @return DBMode 是否已赋值
                     * 
                     */
                    bool DBModeHasBeenSet() const;

                    /**
                     * 获取Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchemaMode Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchemaMode() const;

                    /**
                     * 设置Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schemaMode Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchemaMode(const std::string& _schemaMode);

                    /**
                     * 判断参数 SchemaMode 是否已赋值
                     * @return SchemaMode 是否已赋值
                     * 
                     */
                    bool SchemaModeHasBeenSet() const;

                    /**
                     * 获取Table selection mode, which is required if `DBMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableMode Table selection mode, which is required if `DBMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置Table selection mode, which is required if `DBMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableMode Table selection mode, which is required if `DBMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableMode(const std::string& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     * 
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取The set of table objects, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tables The set of table objects, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TableItem> GetTables() const;

                    /**
                     * 设置The set of table objects, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tables The set of table objects, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTables(const std::vector<TableItem>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取View selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ViewMode View selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置View selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _viewMode View selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViewMode(const std::string& _viewMode);

                    /**
                     * 判断参数 ViewMode 是否已赋值
                     * @return ViewMode 是否已赋值
                     * 
                     */
                    bool ViewModeHasBeenSet() const;

                    /**
                     * 获取The set of view objects, which is required if `ViewMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Views The set of view objects, which is required if `ViewMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ViewItem> GetViews() const;

                    /**
                     * 设置The set of view objects, which is required if `ViewMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _views The set of view objects, which is required if `ViewMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViews(const std::vector<ViewItem>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取Role selection mode, which is exclusive to PostgreSQL. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleMode Role selection mode, which is exclusive to PostgreSQL. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleMode() const;

                    /**
                     * 设置Role selection mode, which is exclusive to PostgreSQL. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleMode Role selection mode, which is exclusive to PostgreSQL. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleMode(const std::string& _roleMode);

                    /**
                     * 判断参数 RoleMode 是否已赋值
                     * @return RoleMode 是否已赋值
                     * 
                     */
                    bool RoleModeHasBeenSet() const;

                    /**
                     * 获取Role, which is exclusive to PostgreSQL and required if `RoleMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Roles Role, which is exclusive to PostgreSQL and required if `RoleMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RoleItem> GetRoles() const;

                    /**
                     * 设置Role, which is exclusive to PostgreSQL and required if `RoleMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roles Role, which is exclusive to PostgreSQL and required if `RoleMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoles(const std::vector<RoleItem>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FunctionMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFunctionMode() const;

                    /**
                     * 设置Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _functionMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunctionMode(const std::string& _functionMode);

                    /**
                     * 判断参数 FunctionMode 是否已赋值
                     * @return FunctionMode 是否已赋值
                     * 
                     */
                    bool FunctionModeHasBeenSet() const;

                    /**
                     * 获取Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                    /**
                     * 获取Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventMode() const;

                    /**
                     * 设置Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventMode(const std::string& _eventMode);

                    /**
                     * 判断参数 EventMode 是否已赋值
                     * @return EventMode 是否已赋值
                     * 
                     */
                    bool EventModeHasBeenSet() const;

                    /**
                     * 获取Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcedureMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcedureMode() const;

                    /**
                     * 设置Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _procedureMode Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcedureMode(const std::string& _procedureMode);

                    /**
                     * 判断参数 ProcedureMode 是否已赋值
                     * @return ProcedureMode 是否已赋值
                     * 
                     */
                    bool ProcedureModeHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `FunctionMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Functions This parameter is required if `FunctionMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置This parameter is required if `FunctionMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _functions This parameter is required if `FunctionMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `ProcedureMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Procedures This parameter is required if `ProcedureMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetProcedures() const;

                    /**
                     * 设置This parameter is required if `ProcedureMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _procedures This parameter is required if `ProcedureMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcedures(const std::vector<std::string>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     * 
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `EventMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Events This parameter is required if `EventMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置This parameter is required if `EventMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _events This parameter is required if `EventMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取This parameter is required if `TriggerMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Triggers This parameter is required if `TriggerMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTriggers() const;

                    /**
                     * 设置This parameter is required if `TriggerMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggers This parameter is required if `TriggerMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggers(const std::vector<std::string>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                private:

                    /**
                     * Name of the database to be migrated or synced, which is required if `ObjectMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Name of the database after migration or sync, which is the same as the source database name by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * The schema to be migrated or synced
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Name of the schema after migration or sync
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newSchemaName;
                    bool m_newSchemaNameHasBeenSet;

                    /**
                     * Database selection mode, which is required if `ObjectMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBMode;
                    bool m_dBModeHasBeenSet;

                    /**
                     * Schema selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schemaMode;
                    bool m_schemaModeHasBeenSet;

                    /**
                     * Table selection mode, which is required if `DBMode` is `partial`. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * The set of table objects, which is required if `TableMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TableItem> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * View selection mode. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * The set of view objects, which is required if `ViewMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ViewItem> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * Role selection mode, which is exclusive to PostgreSQL. Valid values: `all`, `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleMode;
                    bool m_roleModeHasBeenSet;

                    /**
                     * Role, which is exclusive to PostgreSQL and required if `RoleMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RoleItem> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_functionMode;
                    bool m_functionModeHasBeenSet;

                    /**
                     * Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventMode;
                    bool m_eventModeHasBeenSet;

                    /**
                     * Sync mode. Valid values: `partial`, `all`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_procedureMode;
                    bool m_procedureModeHasBeenSet;

                    /**
                     * This parameter is required if `FunctionMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * This parameter is required if `ProcedureMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * This parameter is required if `EventMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * This parameter is required if `TriggerMode` is `partial`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_triggers;
                    bool m_triggersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBITEM_H_
