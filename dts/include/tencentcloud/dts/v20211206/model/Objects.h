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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Database.h>
#include <tencentcloud/dts/v20211206/model/OnlineDDL.h>
#include <tencentcloud/dts/v20211206/model/DBOpFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Description of synced database objects
                */
                class Objects : public AbstractModel
                {
                public:
                    Objects();
                    ~Objects() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sync object type Partial (partial objects)</p>
                     * @return Mode <p>Sync object type Partial (partial objects)</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Sync object type Partial (partial objects)</p>
                     * @param _mode <p>Sync object type Partial (partial objects)</p>
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
                     * 获取<p>Sync object, not empty when Mode is Partial</p>
                     * @return Databases <p>Sync object, not empty when Mode is Partial</p>
                     * 
                     */
                    std::vector<Database> GetDatabases() const;

                    /**
                     * 设置<p>Sync object, not empty when Mode is Partial</p>
                     * @param _databases <p>Sync object, not empty when Mode is Partial</p>
                     * 
                     */
                    void SetDatabases(const std::vector<Database>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取<p>Advanced object types, such as function and procedure. Note: If you need to migrate and synchronize advanced objects, this configuration should contain the corresponding advanced object type. When synchronization of advanced objects is required, the initialization type must contain the structure initialization type, that is, the field value of task Options.InitType must be Structure or Full.</p>
                     * @return AdvancedObjects <p>Advanced object types, such as function and procedure. Note: If you need to migrate and synchronize advanced objects, this configuration should contain the corresponding advanced object type. When synchronization of advanced objects is required, the initialization type must contain the structure initialization type, that is, the field value of task Options.InitType must be Structure or Full.</p>
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置<p>Advanced object types, such as function and procedure. Note: If you need to migrate and synchronize advanced objects, this configuration should contain the corresponding advanced object type. When synchronization of advanced objects is required, the initialization type must contain the structure initialization type, that is, the field value of task Options.InitType must be Structure or Full.</p>
                     * @param _advancedObjects <p>Advanced object types, such as function and procedure. Note: If you need to migrate and synchronize advanced objects, this configuration should contain the corresponding advanced object type. When synchronization of advanced objects is required, the initialization type must contain the structure initialization type, that is, the field value of task Options.InitType must be Structure or Full.</p>
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                    /**
                     * 获取<p>This field is deprecated. For temporary table synchronization, use Objects.Databases[n].Tables[n].TmpTables to import.</p>
                     * @return OnlineDDL <p>This field is deprecated. For temporary table synchronization, use Objects.Databases[n].Tables[n].TmpTables to import.</p>
                     * 
                     */
                    OnlineDDL GetOnlineDDL() const;

                    /**
                     * 设置<p>This field is deprecated. For temporary table synchronization, use Objects.Databases[n].Tables[n].TmpTables to import.</p>
                     * @param _onlineDDL <p>This field is deprecated. For temporary table synchronization, use Objects.Databases[n].Tables[n].TmpTables to import.</p>
                     * 
                     */
                    void SetOnlineDDL(const OnlineDDL& _onlineDDL);

                    /**
                     * 判断参数 OnlineDDL 是否已赋值
                     * @return OnlineDDL 是否已赋值
                     * 
                     */
                    bool OnlineDDLHasBeenSet() const;

                    /**
                     * 获取<p>Database/Table/View-level DML/DDL allowlist</p>
                     * @return DatabasesOpFilter <p>Database/Table/View-level DML/DDL allowlist</p>
                     * 
                     */
                    std::vector<DBOpFilter> GetDatabasesOpFilter() const;

                    /**
                     * 设置<p>Database/Table/View-level DML/DDL allowlist</p>
                     * @param _databasesOpFilter <p>Database/Table/View-level DML/DDL allowlist</p>
                     * 
                     */
                    void SetDatabasesOpFilter(const std::vector<DBOpFilter>& _databasesOpFilter);

                    /**
                     * 判断参数 DatabasesOpFilter 是否已赋值
                     * @return DatabasesOpFilter 是否已赋值
                     * 
                     */
                    bool DatabasesOpFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Sync object type Partial (partial objects)</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Sync object, not empty when Mode is Partial</p>
                     */
                    std::vector<Database> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * <p>Advanced object types, such as function and procedure. Note: If you need to migrate and synchronize advanced objects, this configuration should contain the corresponding advanced object type. When synchronization of advanced objects is required, the initialization type must contain the structure initialization type, that is, the field value of task Options.InitType must be Structure or Full.</p>
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                    /**
                     * <p>This field is deprecated. For temporary table synchronization, use Objects.Databases[n].Tables[n].TmpTables to import.</p>
                     */
                    OnlineDDL m_onlineDDL;
                    bool m_onlineDDLHasBeenSet;

                    /**
                     * <p>Database/Table/View-level DML/DDL allowlist</p>
                     */
                    std::vector<DBOpFilter> m_databasesOpFilter;
                    bool m_databasesOpFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OBJECTS_H_
