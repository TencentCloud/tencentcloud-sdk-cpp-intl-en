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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEROLESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeInstanceRoles request structure.
                */
                class DescribeInstanceRolesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceRolesRequest();
                    ~DescribeInstanceRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Database name. If it is empty, query the role of all databases.</p>
                     * @return Database <p>Database name. If it is empty, query the role of all databases.</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Database name. If it is empty, query the role of all databases.</p>
                     * @param _database <p>Database name. If it is empty, query the role of all databases.</p>
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
                     * 获取<p>Role type: builtin_database - built-in database role, builtin_cluster - built-in cluster role, custom - custom role. Query all if left empty.</p>
                     * @return RoleType <p>Role type: builtin_database - built-in database role, builtin_cluster - built-in cluster role, custom - custom role. Query all if left empty.</p>
                     * 
                     */
                    std::vector<std::string> GetRoleType() const;

                    /**
                     * 设置<p>Role type: builtin_database - built-in database role, builtin_cluster - built-in cluster role, custom - custom role. Query all if left empty.</p>
                     * @param _roleType <p>Role type: builtin_database - built-in database role, builtin_cluster - built-in cluster role, custom - custom role. Query all if left empty.</p>
                     * 
                     */
                    void SetRoleType(const std::vector<std::string>& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Role name. Query all roles if left empty.</p>
                     * @return RoleName <p>Role name. Query all roles if left empty.</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Role name. Query all roles if left empty.</p>
                     * @param _roleName <p>Role name. Query all roles if left empty.</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Common search keywords, fuzzy match inheritable roles and permissions relevant database name, role name, Action name, etc.</p>
                     * @return SearchKey <p>Common search keywords, fuzzy match inheritable roles and permissions relevant database name, role name, Action name, etc.</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>Common search keywords, fuzzy match inheritable roles and permissions relevant database name, role name, Action name, etc.</p>
                     * @param _searchKey <p>Common search keywords, fuzzy match inheritable roles and permissions relevant database name, role name, Action name, etc.</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field, supports: RoleName, defaults to RoleName</p>
                     * @return OrderBy <p>Sorting field, supports: RoleName, defaults to RoleName</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sorting field, supports: RoleName, defaults to RoleName</p>
                     * @param _orderBy <p>Sorting field, supports: RoleName, defaults to RoleName</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method: asc-ascending, desc-descending, defaults to asc</p>
                     * @return OrderType <p>Sorting method: asc-ascending, desc-descending, defaults to asc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>Sorting method: asc-ascending, desc-descending, defaults to asc</p>
                     * @param _orderType <p>Sorting method: asc-ascending, desc-descending, defaults to asc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset, defaults to 0</p>
                     * @return Offset <p>Pagination offset, defaults to 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, defaults to 0</p>
                     * @param _offset <p>Pagination offset, defaults to 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page. Default: 20. Maximum: 100.</p>
                     * @return Limit <p>Number of items per page. Default: 20. Maximum: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page. Default: 20. Maximum: 100.</p>
                     * @param _limit <p>Number of items per page. Default: 20. Maximum: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Database name. If it is empty, query the role of all databases.</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Role type: builtin_database - built-in database role, builtin_cluster - built-in cluster role, custom - custom role. Query all if left empty.</p>
                     */
                    std::vector<std::string> m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * <p>Role name. Query all roles if left empty.</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Common search keywords, fuzzy match inheritable roles and permissions relevant database name, role name, Action name, etc.</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>Sorting field, supports: RoleName, defaults to RoleName</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Sorting method: asc-ascending, desc-descending, defaults to asc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Pagination offset, defaults to 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items per page. Default: 20. Maximum: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEROLESREQUEST_H_
