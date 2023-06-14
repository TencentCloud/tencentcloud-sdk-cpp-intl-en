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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserGroupInfoSearchCriteria.h>
#include <tencentcloud/eiam/v20210420/model/SortCondition.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroups request structure.
                */
                class ListUserGroupsRequest : public AbstractModel
                {
                public:
                    ListUserGroupsRequest();
                    ~ListUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Search criterion. You can combine multiple search criteria and search in multiple data ranges. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, and an empty field indicates to query the full table by default.
                     * @return SearchCondition Search criterion. You can combine multiple search criteria and search in multiple data ranges. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, and an empty field indicates to query the full table by default.
                     * 
                     */
                    UserGroupInfoSearchCriteria GetSearchCondition() const;

                    /**
                     * 设置Search criterion. You can combine multiple search criteria and search in multiple data ranges. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, and an empty field indicates to query the full table by default.
                     * @param _searchCondition Search criterion. You can combine multiple search criteria and search in multiple data ranges. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, and an empty field indicates to query the full table by default.
                     * 
                     */
                    void SetSearchCondition(const UserGroupInfoSearchCriteria& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取Set of sort criteria. The supported attributes for sorting include user group name (DisplayName), user group ID (UserGroupId), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * @return Sort Set of sort criteria. The supported attributes for sorting include user group name (DisplayName), user group ID (UserGroupId), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * 
                     */
                    SortCondition GetSort() const;

                    /**
                     * 设置Set of sort criteria. The supported attributes for sorting include user group name (DisplayName), user group ID (UserGroupId), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * @param _sort Set of sort criteria. The supported attributes for sorting include user group name (DisplayName), user group ID (UserGroupId), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * 
                     */
                    void SetSort(const SortCondition& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Pagination offset. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * @return Offset Pagination offset. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * @param _offset Pagination offset. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results read per page. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * @return Limit Number of results read per page. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results read per page. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * @param _limit Number of results read per page. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Search criterion. You can combine multiple search criteria and search in multiple data ranges. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, and an empty field indicates to query the full table by default.
                     */
                    UserGroupInfoSearchCriteria m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * Set of sort criteria. The supported attributes for sorting include user group name (DisplayName), user group ID (UserGroupId), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     */
                    SortCondition m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Pagination offset. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results read per page. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_
