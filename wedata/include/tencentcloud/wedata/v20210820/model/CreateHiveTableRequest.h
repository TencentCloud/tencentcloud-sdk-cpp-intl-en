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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_

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
                * CreateHiveTable request structure.
                */
                class CreateHiveTableRequest : public AbstractModel
                {
                public:
                    CreateHiveTableRequest();
                    ~CreateHiveTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data source ID
                     * @return DatasourceId Data source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID
                     * @param _datasourceId Data source ID
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
                     * 获取Database name
                     * @return Database Database name
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name
                     * @param _database Database name
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
                     * 获取Base64-encoded Table Creation Statement
                     * @return DDLSql Base64-encoded Table Creation Statement
                     * 
                     */
                    std::string GetDDLSql() const;

                    /**
                     * 设置Base64-encoded Table Creation Statement
                     * @param _dDLSql Base64-encoded Table Creation Statement
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

                private:

                    /**
                     * Data source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Base64-encoded Table Creation Statement
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
                     * Person in Charge
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEHIVETABLEREQUEST_H_
