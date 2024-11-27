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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListUsers request structure.
                */
                class ListUsersRequest : public AbstractModel
                {
                public:
                    ListUsersRequest();
                    ~ListUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User status: Enabled, Disabled.
                     * @return UserStatus User status: Enabled, Disabled.
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置User status: Enabled, Disabled.
                     * @param _userStatus User status: Enabled, Disabled.
                     * 
                     */
                    void SetUserStatus(const std::string& _userStatus);

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                    /**
                     * 获取User type. Manual: manually created; Synchronized: externally imported.
                     * @return UserType User type. Manual: manually created; Synchronized: externally imported.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置User type. Manual: manually created; Synchronized: externally imported.
                     * @param _userType User type. Manual: manually created; Synchronized: externally imported.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Filter criterion, which currently only supports username, email address, userId, and description.
                     * @return Filter Filter criterion, which currently only supports username, email address, userId, and description.
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置Filter criterion, which currently only supports username, email address, userId, and description.
                     * @param _filter Filter criterion, which currently only supports username, email address, userId, and description.
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * @return MaxResults Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * @param _maxResults Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * @return NextToken Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * @param _nextToken Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Filtered user group. IsSelected=1 will be returned for the sub-user associated with this user group.
                     * @return FilterGroups Filtered user group. IsSelected=1 will be returned for the sub-user associated with this user group.
                     * 
                     */
                    std::vector<std::string> GetFilterGroups() const;

                    /**
                     * 设置Filtered user group. IsSelected=1 will be returned for the sub-user associated with this user group.
                     * @param _filterGroups Filtered user group. IsSelected=1 will be returned for the sub-user associated with this user group.
                     * 
                     */
                    void SetFilterGroups(const std::vector<std::string>& _filterGroups);

                    /**
                     * 判断参数 FilterGroups 是否已赋值
                     * @return FilterGroups 是否已赋值
                     * 
                     */
                    bool FilterGroupsHasBeenSet() const;

                    /**
                     * 获取Sorting field, which currently only supports CreateTime. The default is the CreateTime field.
                     * @return SortField Sorting field, which currently only supports CreateTime. The default is the CreateTime field.
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置Sorting field, which currently only supports CreateTime. The default is the CreateTime field.
                     * @param _sortField Sorting field, which currently only supports CreateTime. The default is the CreateTime field.
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取Sorting type. Desc: descending order; Asc: ascending order. It should be set along with SortField.
                     * @return SortType Sorting type. Desc: descending order; Asc: ascending order. It should be set along with SortField.
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting type. Desc: descending order; Asc: ascending order. It should be set along with SortField.
                     * @param _sortType Sorting type. Desc: descending order; Asc: ascending order. It should be set along with SortField.
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Do not use it together with NextToken, prioritizing using NextToken.
                     * @return Offset Pagination offset. Do not use it together with NextToken, prioritizing using NextToken.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Do not use it together with NextToken, prioritizing using NextToken.
                     * @param _offset Pagination offset. Do not use it together with NextToken, prioritizing using NextToken.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User status: Enabled, Disabled.
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * User type. Manual: manually created; Synchronized: externally imported.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Filter criterion, which currently only supports username, email address, userId, and description.
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Maximum number of data entries per page. Value range: 1-100. Default value: 10.
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Token for querying the next page of returned results. During use of the API for the first time, NextToken is not needed. When you call the API for the first time, if the total number of returned data entries exceeds the MaxResults limit, the data is truncated and only MaxResults data entries are returned. Meanwhile, the return parameter IsTruncated is true and a NextToken is returned. You can use the NextToken returned last time to continue calling the API with other request parameters unchanged, to query the truncated data. You can use this method for multiple queries until IsTruncated is false, indicating that all data has been queried.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Filtered user group. IsSelected=1 will be returned for the sub-user associated with this user group.
                     */
                    std::vector<std::string> m_filterGroups;
                    bool m_filterGroupsHasBeenSet;

                    /**
                     * Sorting field, which currently only supports CreateTime. The default is the CreateTime field.
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * Sorting type. Desc: descending order; Asc: ascending order. It should be set along with SortField.
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Pagination offset. Do not use it together with NextToken, prioritizing using NextToken.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTUSERSREQUEST_H_
