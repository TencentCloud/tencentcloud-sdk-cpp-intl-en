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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPSREQUEST_H_

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
                * ListConsoleGroups request structure.
                */
                class ListConsoleGroupsRequest : public AbstractModel
                {
                public:
                    ListConsoleGroupsRequest();
                    ~ListConsoleGroupsRequest() = default;
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
                     * 获取<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @return PageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @param _pageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
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
                     * 获取<p>Batch query by user group ID; the user group ID can be obtained through the ListConsoleGroups API.</p>
                     * @return GroupIds <p>Batch query by user group ID; the user group ID can be obtained through the ListConsoleGroups API.</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>Batch query by user group ID; the user group ID can be obtained through the ListConsoleGroups API.</p>
                     * @param _groupIds <p>Batch query by user group ID; the user group ID can be obtained through the ListConsoleGroups API.</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy matching by user group name</p>
                     * @return GroupKeyword <p>Fuzzy matching by user group name</p>
                     * 
                     */
                    std::string GetGroupKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching by user group name</p>
                     * @param _groupKeyword <p>Fuzzy matching by user group name</p>
                     * 
                     */
                    void SetGroupKeyword(const std::string& _groupKeyword);

                    /**
                     * 判断参数 GroupKeyword 是否已赋值
                     * @return GroupKeyword 是否已赋值
                     * 
                     */
                    bool GroupKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, sort by creation time in descending order.</p>
                     * @return OrderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, sort by creation time in descending order.</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, sort by creation time in descending order.</p>
                     * @param _orderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, sort by creation time in descending order.</p>
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
                     * <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Batch query by user group ID; the user group ID can be obtained through the ListConsoleGroups API.</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>Fuzzy matching by user group name</p>
                     */
                    std::string m_groupKeyword;
                    bool m_groupKeywordHasBeenSet;

                    /**
                     * <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}, {Name: 'UserName', Direction: 'Asc'}]. By default, sort by creation time in descending order.</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEGROUPSREQUEST_H_
