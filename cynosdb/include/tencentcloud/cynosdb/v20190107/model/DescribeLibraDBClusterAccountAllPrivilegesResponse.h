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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTALLPRIVILEGESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTALLPRIVILEGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeLibraDBClusterAccountAllPrivileges response structure.
                */
                class DescribeLibraDBClusterAccountAllPrivilegesResponse : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterAccountAllPrivilegesResponse();
                    ~DescribeLibraDBClusterAccountAllPrivilegesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivilegeStatements Permission statement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivilegeStatements() const;

                    /**
                     * 判断参数 PrivilegeStatements 是否已赋值
                     * @return PrivilegeStatements 是否已赋值
                     * 
                     */
                    bool PrivilegeStatementsHasBeenSet() const;

                    /**
                     * 获取Global permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GlobalPrivileges Global permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取Database permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabasePrivileges Database permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DatabasePrivileges> GetDatabasePrivileges() const;

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取Table permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TablePrivileges Table permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TablePrivileges> GetTablePrivileges() const;

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                private:

                    /**
                     * Permission statement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privilegeStatements;
                    bool m_privilegeStatementsHasBeenSet;

                    /**
                     * Global permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * Database permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DatabasePrivileges> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * Table permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TablePrivileges> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTALLPRIVILEGESRESPONSE_H_
