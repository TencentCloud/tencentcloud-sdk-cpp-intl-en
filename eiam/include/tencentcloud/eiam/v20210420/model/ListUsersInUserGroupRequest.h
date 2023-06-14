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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserSearchCriteria.h>
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
                * ListUsersInUserGroup request structure.
                */
                class ListUsersInUserGroupRequest : public AbstractModel
                {
                public:
                    ListUsersInUserGroupRequest();
                    ~ListUsersInUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID, which is globally unique.
                     * @return UserGroupId User group ID, which is globally unique.
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID, which is globally unique.
                     * @param _userGroupId User group ID, which is globally unique.
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取User attribute search criterion. The supported search criteria include username, mobile number, email address, user locking status, user freezing status, creation time, and last modification time, which can also be combined. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, brackets separated by a comma ([Min,Max]) indicate query within a closed interval, braces separated by a comma ({Min,Max}) indicate query within an open interval, and a bracket and a brace can be used together (for example, {Min,Max] indicates that the minimum value is excluded and the maximum value is included in the query). Range query supports using an asterisk (for example, {20,*] indicates an interval including all data greater than 20) and querying by time period. The supported attributes include creation time (CreationTime) and last modification time (LastUpdateTime) in ISO 8601 format, such as `2021-01-13T09:44:07.182+0000`.
                     * @return SearchCondition User attribute search criterion. The supported search criteria include username, mobile number, email address, user locking status, user freezing status, creation time, and last modification time, which can also be combined. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, brackets separated by a comma ([Min,Max]) indicate query within a closed interval, braces separated by a comma ({Min,Max}) indicate query within an open interval, and a bracket and a brace can be used together (for example, {Min,Max] indicates that the minimum value is excluded and the maximum value is included in the query). Range query supports using an asterisk (for example, {20,*] indicates an interval including all data greater than 20) and querying by time period. The supported attributes include creation time (CreationTime) and last modification time (LastUpdateTime) in ISO 8601 format, such as `2021-01-13T09:44:07.182+0000`.
                     * 
                     */
                    UserSearchCriteria GetSearchCondition() const;

                    /**
                     * 设置User attribute search criterion. The supported search criteria include username, mobile number, email address, user locking status, user freezing status, creation time, and last modification time, which can also be combined. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, brackets separated by a comma ([Min,Max]) indicate query within a closed interval, braces separated by a comma ({Min,Max}) indicate query within an open interval, and a bracket and a brace can be used together (for example, {Min,Max] indicates that the minimum value is excluded and the maximum value is included in the query). Range query supports using an asterisk (for example, {20,*] indicates an interval including all data greater than 20) and querying by time period. The supported attributes include creation time (CreationTime) and last modification time (LastUpdateTime) in ISO 8601 format, such as `2021-01-13T09:44:07.182+0000`.
                     * @param _searchCondition User attribute search criterion. The supported search criteria include username, mobile number, email address, user locking status, user freezing status, creation time, and last modification time, which can also be combined. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, brackets separated by a comma ([Min,Max]) indicate query within a closed interval, braces separated by a comma ({Min,Max}) indicate query within an open interval, and a bracket and a brace can be used together (for example, {Min,Max] indicates that the minimum value is excluded and the maximum value is included in the query). Range query supports using an asterisk (for example, {20,*] indicates an interval including all data greater than 20) and querying by time period. The supported attributes include creation time (CreationTime) and last modification time (LastUpdateTime) in ISO 8601 format, such as `2021-01-13T09:44:07.182+0000`.
                     * 
                     */
                    void SetSearchCondition(const UserSearchCriteria& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取Set of sort criteria. The supported attributes for sorting include username (UserName), nickname (DisplayName), mobile number (Phone), email address (Email), user status (Status), creation time (CreatedDate), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by nickname (DisplayName).
                     * @return Sort Set of sort criteria. The supported attributes for sorting include username (UserName), nickname (DisplayName), mobile number (Phone), email address (Email), user status (Status), creation time (CreatedDate), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by nickname (DisplayName).
                     * 
                     */
                    SortCondition GetSort() const;

                    /**
                     * 设置Set of sort criteria. The supported attributes for sorting include username (UserName), nickname (DisplayName), mobile number (Phone), email address (Email), user status (Status), creation time (CreatedDate), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by nickname (DisplayName).
                     * @param _sort Set of sort criteria. The supported attributes for sorting include username (UserName), nickname (DisplayName), mobile number (Phone), email address (Email), user status (Status), creation time (CreatedDate), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by nickname (DisplayName).
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
                     * 获取Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * @return Offset Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * @param _offset Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
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
                     * 获取Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * @return Limit Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     * @param _limit Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
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
                     * User group ID, which is globally unique.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * User attribute search criterion. The supported search criteria include username, mobile number, email address, user locking status, user freezing status, creation time, and last modification time, which can also be combined. In addition, multiple query methods such as full match, partial match, and range match are supported. Specifically, double quotation marks ("") indicate full match, an asterisk (*) at the end of the field indicates partial match, brackets separated by a comma ([Min,Max]) indicate query within a closed interval, braces separated by a comma ({Min,Max}) indicate query within an open interval, and a bracket and a brace can be used together (for example, {Min,Max] indicates that the minimum value is excluded and the maximum value is included in the query). Range query supports using an asterisk (for example, {20,*] indicates an interval including all data greater than 20) and querying by time period. The supported attributes include creation time (CreationTime) and last modification time (LastUpdateTime) in ISO 8601 format, such as `2021-01-13T09:44:07.182+0000`.
                     */
                    UserSearchCriteria m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * Set of sort criteria. The supported attributes for sorting include username (UserName), nickname (DisplayName), mobile number (Phone), email address (Email), user status (Status), creation time (CreatedDate), and last modification time (LastModifiedDate). If this field is left empty, the results will be sorted in alphabetical order by nickname (DisplayName).
                     */
                    SortCondition m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results read per page. Default value: 50. Maximum value: 100. The `Offset` and `Limit` fields need to be used together; otherwise, the query results will not be paginated, and up to 50 users will be returned.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERSINUSERGROUPREQUEST_H_
