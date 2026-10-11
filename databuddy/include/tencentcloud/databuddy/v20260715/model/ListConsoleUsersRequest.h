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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListConsoleUsers request structure.
                */
                class ListConsoleUsersRequest : public AbstractModel
                {
                public:
                    ListConsoleUsersRequest();
                    ~ListConsoleUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Size per page. Default: 10; Minimum: 10; Maximum: 100</p>
                     * @return PageSize <p>Size per page. Default: 10; Minimum: 10; Maximum: 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default: 10; Minimum: 10; Maximum: 100</p>
                     * @param _pageSize <p>Size per page. Default: 10; Minimum: 10; Maximum: 100</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy matching between username and UIN</p>
                     * @return UserKeyword <p>Fuzzy matching between username and UIN</p>
                     * 
                     */
                    std::string GetUserKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching between username and UIN</p>
                     * @param _userKeyword <p>Fuzzy matching between username and UIN</p>
                     * 
                     */
                    void SetUserKeyword(const std::string& _userKeyword);

                    /**
                     * 判断参数 UserKeyword 是否已赋值
                     * @return UserKeyword 是否已赋值
                     * 
                     */
                    bool UserKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Used to filter users associated with roles</p><p>Enumeration values:</p><ul><li>2001: Console Administrator</li><li>2002: Console Member</li></ul><p>Can be obtained through the ListConsoleRoles API</p>
                     * @return RoleIds <p>Used to filter users associated with roles</p><p>Enumeration values:</p><ul><li>2001: Console Administrator</li><li>2002: Console Member</li></ul><p>Can be obtained through the ListConsoleRoles API</p>
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置<p>Used to filter users associated with roles</p><p>Enumeration values:</p><ul><li>2001: Console Administrator</li><li>2002: Console Member</li></ul><p>Can be obtained through the ListConsoleRoles API</p>
                     * @param _roleIds <p>Used to filter users associated with roles</p><p>Enumeration values:</p><ul><li>2001: Console Administrator</li><li>2002: Console Member</li></ul><p>Can be obtained through the ListConsoleRoles API</p>
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                    /**
                     * 获取<p>Multi-field sorting, for example [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, it sorts in descending order by creation time.</p>
                     * @return OrderBys <p>Multi-field sorting, for example [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, it sorts in descending order by creation time.</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Multi-field sorting, for example [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, it sorts in descending order by creation time.</p>
                     * @param _orderBys <p>Multi-field sorting, for example [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, it sorts in descending order by creation time.</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Default: 10; Minimum: 10; Maximum: 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Fuzzy matching between username and UIN</p>
                     */
                    std::string m_userKeyword;
                    bool m_userKeywordHasBeenSet;

                    /**
                     * <p>Used to filter users associated with roles</p><p>Enumeration values:</p><ul><li>2001: Console Administrator</li><li>2002: Console Member</li></ul><p>Can be obtained through the ListConsoleRoles API</p>
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * <p>Multi-field sorting, for example [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, it sorts in descending order by creation time.</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSREQUEST_H_
