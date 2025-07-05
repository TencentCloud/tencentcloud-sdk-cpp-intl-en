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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateHiveTableByDDL request structure.
                */
                class CreateHiveTableByDDLRequest : public AbstractModel
                {
                public:
                    CreateHiveTableByDDLRequest();
                    ~CreateHiveTableByDDLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data Source ID
                     * @return DatasourceId Data Source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
                     * @param _datasourceId Data Source ID
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
                     * 获取Database
                     * @return Database Database
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database
                     * @param _database Database
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
                     * 获取Create Hive Table DDL
                     * @return DDLSql Create Hive Table DDL
                     * 
                     */
                    std::string GetDDLSql() const;

                    /**
                     * 设置Create Hive Table DDL
                     * @param _dDLSql Create Hive Table DDL
                     * 
                     */
                    void SetDDLSql(const std::string& _dDLSql);

                    /**
                     * 判断参数 DDLSql 是否已赋值
                     * @return DDLSql 是否已赋值
                     * 
                     */
                    bool DDLSqlHasBeenSet() const;

                    /**
                     * 获取Table permissions, default is 0: Project share; 1: Individual and administrator only
                     * @return Privilege Table permissions, default is 0: Project share; 1: Individual and administrator only
                     * 
                     */
                    int64_t GetPrivilege() const;

                    /**
                     * 设置Table permissions, default is 0: Project share; 1: Individual and administrator only
                     * @param _privilege Table permissions, default is 0: Project share; 1: Individual and administrator only
                     * 
                     */
                    void SetPrivilege(const int64_t& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Target Table Type (HIVE or GBASE)
                     * @return Type Target Table Type (HIVE or GBASE)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Target Table Type (HIVE or GBASE)
                     * @param _type Target Table Type (HIVE or GBASE)
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
                     * 获取Person in Charge
                     * @return Incharge Person in Charge
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置Person in Charge
                     * @param _incharge Person in Charge
                     * 
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     * 
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取Schema Name
                     * @return SchemaName Schema Name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema Name
                     * @param _schemaName Schema Name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * Data Source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Create Hive Table DDL
                     */
                    std::string m_dDLSql;
                    bool m_dDLSqlHasBeenSet;

                    /**
                     * Table permissions, default is 0: Project share; 1: Individual and administrator only
                     */
                    int64_t m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Target Table Type (HIVE or GBASE)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * Schema Name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEBYDDLREQUEST_H_
