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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>
#include <tencentcloud/cynosdb/v20190107/model/DatabasePrivileges.h>
#include <tencentcloud/cynosdb/v20190107/model/TablePrivileges.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivileges request structure.
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Account information
                     * @return Account Account information
                     * 
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置Account information
                     * @param _account Account information
                     * 
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Global permission array
                     * @return GlobalPrivileges Global permission array
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置Global permission array
                     * @param _globalPrivileges Global permission array
                     * 
                     */
                    void SetGlobalPrivileges(const std::vector<std::string>& _globalPrivileges);

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取Array of database permissions
                     * @return DatabasePrivileges Array of database permissions
                     * 
                     */
                    std::vector<DatabasePrivileges> GetDatabasePrivileges() const;

                    /**
                     * 设置Array of database permissions
                     * @param _databasePrivileges Array of database permissions
                     * 
                     */
                    void SetDatabasePrivileges(const std::vector<DatabasePrivileges>& _databasePrivileges);

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取Table permission array
                     * @return TablePrivileges Table permission array
                     * 
                     */
                    std::vector<TablePrivileges> GetTablePrivileges() const;

                    /**
                     * 设置Table permission array
                     * @param _tablePrivileges Table permission array
                     * 
                     */
                    void SetTablePrivileges(const std::vector<TablePrivileges>& _tablePrivileges);

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account information
                     */
                    InputAccount m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Global permission array
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * Array of database permissions
                     */
                    std::vector<DatabasePrivileges> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * Table permission array
                     */
                    std::vector<TablePrivileges> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
