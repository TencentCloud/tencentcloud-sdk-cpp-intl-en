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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Table.h>
#include <tencentcloud/dts/v20211206/model/View.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * The database/table objects to be synced
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database name for migration or synchronization. This item is required when ObjectMode is Partial.</p>
                     * @return DbName <p>Database name for migration or synchronization. This item is required when ObjectMode is Partial.</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name for migration or synchronization. This item is required when ObjectMode is Partial.</p>
                     * @param _dbName <p>Database name for migration or synchronization. This item is required when ObjectMode is Partial.</p>
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
                     * 获取<p>The name of the migrated or synchronized database is identical to that of the source database by default.</p>
                     * @return NewDbName <p>The name of the migrated or synchronized database is identical to that of the source database by default.</p>
                     * 
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置<p>The name of the migrated or synchronized database is identical to that of the source database by default.</p>
                     * @param _newDbName <p>The name of the migrated or synchronized database is identical to that of the source database by default.</p>
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
                     * 获取<p>DB selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when Mode is Partial. Note that synchronization of advanced objects is independent of this value. If you sync entire database, it should be All here.</p>
                     * @return DbMode <p>DB selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when Mode is Partial. Note that synchronization of advanced objects is independent of this value. If you sync entire database, it should be All here.</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>DB selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when Mode is Partial. Note that synchronization of advanced objects is independent of this value. If you sync entire database, it should be All here.</p>
                     * @param _dbMode <p>DB selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when Mode is Partial. Note that synchronization of advanced objects is independent of this value. If you sync entire database, it should be All here.</p>
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
                     * 获取<p>schema for migration or synchronization</p>
                     * @return SchemaName <p>schema for migration or synchronization</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema for migration or synchronization</p>
                     * @param _schemaName <p>schema for migration or synchronization</p>
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
                     * 获取<p>schema name after migration or synchronization</p>
                     * @return NewSchemaName <p>schema name after migration or synchronization</p>
                     * 
                     */
                    std::string GetNewSchemaName() const;

                    /**
                     * 设置<p>schema name after migration or synchronization</p>
                     * @param _newSchemaName <p>schema name after migration or synchronization</p>
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
                     * 获取<p>schema Selection Mode, pg and sqlserver require the use of</p><p>Enumeration value:</p><ul><li>All: All objects under the current object</li><li>Partial: Partial objects</li></ul>
                     * @return SchemaMode <p>schema Selection Mode, pg and sqlserver require the use of</p><p>Enumeration value:</p><ul><li>All: All objects under the current object</li><li>Partial: Partial objects</li></ul>
                     * 
                     */
                    std::string GetSchemaMode() const;

                    /**
                     * 设置<p>schema Selection Mode, pg and sqlserver require the use of</p><p>Enumeration value:</p><ul><li>All: All objects under the current object</li><li>Partial: Partial objects</li></ul>
                     * @param _schemaMode <p>schema Selection Mode, pg and sqlserver require the use of</p><p>Enumeration value:</p><ul><li>All: All objects under the current object</li><li>Partial: Partial objects</li></ul>
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
                     * 获取<p>Schema selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when DBMode is Partial. If you sync entire database, it should be All here.</p>
                     * @return TableMode <p>Schema selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when DBMode is Partial. If you sync entire database, it should be All here.</p>
                     * 
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置<p>Schema selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when DBMode is Partial. If you sync entire database, it should be All here.</p>
                     * @param _tableMode <p>Schema selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when DBMode is Partial. If you sync entire database, it should be All here.</p>
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
                     * 获取<p>Table diagram object set. This item needs to be filled in when TableMode is Partial.</p>
                     * @return Tables <p>Table diagram object set. This item needs to be filled in when TableMode is Partial.</p>
                     * 
                     */
                    std::vector<Table> GetTables() const;

                    /**
                     * 设置<p>Table diagram object set. This item needs to be filled in when TableMode is Partial.</p>
                     * @param _tables <p>Table diagram object set. This item needs to be filled in when TableMode is Partial.</p>
                     * 
                     */
                    void SetTables(const std::vector<Table>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>View selection mode: All indicates all view objects under the current object, Partial indicates partial view objects. If you sync entire database, it should be All here.</p>
                     * @return ViewMode <p>View selection mode: All indicates all view objects under the current object, Partial indicates partial view objects. If you sync entire database, it should be All here.</p>
                     * 
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置<p>View selection mode: All indicates all view objects under the current object, Partial indicates partial view objects. If you sync entire database, it should be All here.</p>
                     * @param _viewMode <p>View selection mode: All indicates all view objects under the current object, Partial indicates partial view objects. If you sync entire database, it should be All here.</p>
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
                     * 获取<p>View object set. When ViewMode is Partial, this item requires filling in.</p>
                     * @return Views <p>View object set. When ViewMode is Partial, this item requires filling in.</p>
                     * 
                     */
                    std::vector<View> GetViews() const;

                    /**
                     * 设置<p>View object set. When ViewMode is Partial, this item requires filling in.</p>
                     * @param _views <p>View object set. When ViewMode is Partial, this item requires filling in.</p>
                     * 
                     */
                    void SetViews(const std::vector<View>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     * 
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取<p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * @return FunctionMode <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * 
                     */
                    std::string GetFunctionMode() const;

                    /**
                     * 设置<p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * @param _functionMode <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
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
                     * 获取<p>This item needs to be filled in when FunctionMode value is Partial.</p>
                     * @return Functions <p>This item needs to be filled in when FunctionMode value is Partial.</p>
                     * 
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置<p>This item needs to be filled in when FunctionMode value is Partial.</p>
                     * @param _functions <p>This item needs to be filled in when FunctionMode value is Partial.</p>
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
                     * 获取<p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * @return ProcedureMode <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * 
                     */
                    std::string GetProcedureMode() const;

                    /**
                     * 设置<p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     * @param _procedureMode <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
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
                     * 获取<p>This item needs to be filled in when the ProcedureMode value is Partial.</p>
                     * @return Procedures <p>This item needs to be filled in when the ProcedureMode value is Partial.</p>
                     * 
                     */
                    std::vector<std::string> GetProcedures() const;

                    /**
                     * 设置<p>This item needs to be filled in when the ProcedureMode value is Partial.</p>
                     * @param _procedures <p>This item needs to be filled in when the ProcedureMode value is Partial.</p>
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
                     * 获取<p>Trigger migration mode, All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. Data sync does not currently support this advanced object.</p>
                     * @return TriggerMode <p>Trigger migration mode, All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. Data sync does not currently support this advanced object.</p>
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>Trigger migration mode, All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. Data sync does not currently support this advanced object.</p>
                     * @param _triggerMode <p>Trigger migration mode, All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. Data sync does not currently support this advanced object.</p>
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
                     * 获取<p>When TriggerMode is partial, specify the trigger name to migrate.</p>
                     * @return Triggers <p>When TriggerMode is partial, specify the trigger name to migrate.</p>
                     * 
                     */
                    std::vector<std::string> GetTriggers() const;

                    /**
                     * 设置<p>When TriggerMode is partial, specify the trigger name to migrate.</p>
                     * @param _triggers <p>When TriggerMode is partial, specify the trigger name to migrate.</p>
                     * 
                     */
                    void SetTriggers(const std::vector<std::string>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     * 
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取<p>Event migration mode: All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. This advanced object is not currently supported for data sync.</p>
                     * @return EventMode <p>Event migration mode: All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. This advanced object is not currently supported for data sync.</p>
                     * 
                     */
                    std::string GetEventMode() const;

                    /**
                     * 设置<p>Event migration mode: All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. This advanced object is not currently supported for data sync.</p>
                     * @param _eventMode <p>Event migration mode: All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. This advanced object is not currently supported for data sync.</p>
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
                     * 获取<p>When EventMode is partial, specify the event name to migrate.</p>
                     * @return Events <p>When EventMode is partial, specify the event name to migrate.</p>
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置<p>When EventMode is partial, specify the event name to migrate.</p>
                     * @param _events <p>When EventMode is partial, specify the event name to migrate.</p>
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * <p>Database name for migration or synchronization. This item is required when ObjectMode is Partial.</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>The name of the migrated or synchronized database is identical to that of the source database by default.</p>
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * <p>DB selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when Mode is Partial. Note that synchronization of advanced objects is independent of this value. If you sync entire database, it should be All here.</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>schema for migration or synchronization</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>schema name after migration or synchronization</p>
                     */
                    std::string m_newSchemaName;
                    bool m_newSchemaNameHasBeenSet;

                    /**
                     * <p>schema Selection Mode, pg and sqlserver require the use of</p><p>Enumeration value:</p><ul><li>All: All objects under the current object</li><li>Partial: Partial objects</li></ul>
                     */
                    std::string m_schemaMode;
                    bool m_schemaModeHasBeenSet;

                    /**
                     * <p>Schema selection mode: All (for all objects under the current object), Partial (partial objects). This item is required when DBMode is Partial. If you sync entire database, it should be All here.</p>
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * <p>Table diagram object set. This item needs to be filled in when TableMode is Partial.</p>
                     */
                    std::vector<Table> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>View selection mode: All indicates all view objects under the current object, Partial indicates partial view objects. If you sync entire database, it should be All here.</p>
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * <p>View object set. When ViewMode is Partial, this item requires filling in.</p>
                     */
                    std::vector<View> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     */
                    std::string m_functionMode;
                    bool m_functionModeHasBeenSet;

                    /**
                     * <p>This item needs to be filled in when FunctionMode value is Partial.</p>
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * <p>Select the sync mode. Partial means part, and All means the entire database. If you want to sync entire database, select All here.</p>
                     */
                    std::string m_procedureMode;
                    bool m_procedureModeHasBeenSet;

                    /**
                     * <p>This item needs to be filled in when the ProcedureMode value is Partial.</p>
                     */
                    std::vector<std::string> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * <p>Trigger migration mode, All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. Data sync does not currently support this advanced object.</p>
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * <p>When TriggerMode is partial, specify the trigger name to migrate.</p>
                     */
                    std::vector<std::string> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * <p>Event migration mode: All (all objects under the current object), Partial (partial objects). If syncing the entire database, it should be All here. This advanced object is not currently supported for data sync.</p>
                     */
                    std::string m_eventMode;
                    bool m_eventModeHasBeenSet;

                    /**
                     * <p>When EventMode is partial, specify the event name to migrate.</p>
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
