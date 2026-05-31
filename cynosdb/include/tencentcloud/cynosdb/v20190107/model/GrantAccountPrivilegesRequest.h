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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>
#include <tencentcloud/cynosdb/v20190107/model/DbTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * GrantAccountPrivileges request structure.
                */
                class GrantAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    GrantAccountPrivilegesRequest();
                    ~GrantAccountPrivilegesRequest() = default;
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
                     * 获取Array of table permission codes
                     * @return DbTablePrivileges Array of table permission codes
                     * 
                     */
                    std::vector<std::string> GetDbTablePrivileges() const;

                    /**
                     * 设置Array of table permission codes
                     * @param _dbTablePrivileges Array of table permission codes
                     * 
                     */
                    void SetDbTablePrivileges(const std::vector<std::string>& _dbTablePrivileges);

                    /**
                     * 判断参数 DbTablePrivileges 是否已赋值
                     * @return DbTablePrivileges 是否已赋值
                     * 
                     */
                    bool DbTablePrivilegesHasBeenSet() const;

                    /**
                     * 获取Database table information
                     * @return DbTables Database table information
                     * 
                     */
                    std::vector<DbTable> GetDbTables() const;

                    /**
                     * 设置Database table information
                     * @param _dbTables Database table information
                     * 
                     */
                    void SetDbTables(const std::vector<DbTable>& _dbTables);

                    /**
                     * 判断参数 DbTables 是否已赋值
                     * @return DbTables 是否已赋值
                     * 
                     */
                    bool DbTablesHasBeenSet() const;

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
                     * Array of table permission codes
                     */
                    std::vector<std::string> m_dbTablePrivileges;
                    bool m_dbTablePrivilegesHasBeenSet;

                    /**
                     * Database table information
                     */
                    std::vector<DbTable> m_dbTables;
                    bool m_dbTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GRANTACCOUNTPRIVILEGESREQUEST_H_
