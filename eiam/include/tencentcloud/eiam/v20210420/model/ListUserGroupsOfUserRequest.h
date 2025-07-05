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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserGroupInformationSearchCriteria.h>
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
                * ListUserGroupsOfUser request structure.
                */
                class ListUserGroupsOfUserRequest : public AbstractModel
                {
                public:
                    ListUserGroupsOfUserRequest();
                    ~ListUserGroupsOfUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID, which is globally unique.
                     * @return UserId User ID, which is globally unique.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which is globally unique.
                     * @param _userId User ID, which is globally unique.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Fuzzy search criterion. You can search by user group name (DisplayName). If this field is left empty, all of the user's user groups will be displayed by default.
                     * @return SearchCondition Fuzzy search criterion. You can search by user group name (DisplayName). If this field is left empty, all of the user's user groups will be displayed by default.
                     * 
                     */
                    UserGroupInformationSearchCriteria GetSearchCondition() const;

                    /**
                     * 设置Fuzzy search criterion. You can search by user group name (DisplayName). If this field is left empty, all of the user's user groups will be displayed by default.
                     * @param _searchCondition Fuzzy search criterion. You can search by user group name (DisplayName). If this field is left empty, all of the user's user groups will be displayed by default.
                     * 
                     */
                    void SetSearchCondition(const UserGroupInformationSearchCriteria& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取Set of sort criteria. Valid values: DisplayName: user group name; UserGroupId: user group ID; CreatedDate: creation time. If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * @return Sort Set of sort criteria. Valid values: DisplayName: user group name; UserGroupId: user group ID; CreatedDate: creation time. If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * 
                     */
                    SortCondition GetSort() const;

                    /**
                     * 设置Set of sort criteria. Valid values: DisplayName: user group name; UserGroupId: user group ID; CreatedDate: creation time. If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     * @param _sort Set of sort criteria. Valid values: DisplayName: user group name; UserGroupId: user group ID; CreatedDate: creation time. If this field is left empty, the results will be sorted in alphabetical order by user group name.
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
                     * 获取Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * @return Offset Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * @param _offset Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
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
                     * 获取Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * @return Limit Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     * @param _limit Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
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
                     * User ID, which is globally unique.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Fuzzy search criterion. You can search by user group name (DisplayName). If this field is left empty, all of the user's user groups will be displayed by default.
                     */
                    UserGroupInformationSearchCriteria m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * Set of sort criteria. Valid values: DisplayName: user group name; UserGroupId: user group ID; CreatedDate: creation time. If this field is left empty, the results will be sorted in alphabetical order by user group name.
                     */
                    SortCondition m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 user groups will be returned.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSOFUSERREQUEST_H_
