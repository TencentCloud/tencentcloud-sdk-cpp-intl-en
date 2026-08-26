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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKeyList request structure.
                */
                class DescribeTokenPlanApiKeyListRequest : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeyListRequest();
                    ~DescribeTokenPlanApiKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @return TeamId Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @param _teamId Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Offset of paginated query. Default value: 0.
                     * @return Offset Offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.
                     * @param _offset Offset of paginated query. Default value: 0.
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
                     * 获取Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Paginate the list of query filter criteria. Supported filter fields: ApiKeyId (API Key ID), Name (API Key name), Status (whether the API Key is available), StopReason (reason for disabling the API Key), UseStatus (API Key user-side switch).
                     * @return Filters Paginate the list of query filter criteria. Supported filter fields: ApiKeyId (API Key ID), Name (API Key name), Status (whether the API Key is available), StopReason (reason for disabling the API Key), UseStatus (API Key user-side switch).
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置Paginate the list of query filter criteria. Supported filter fields: ApiKeyId (API Key ID), Name (API Key name), Status (whether the API Key is available), StopReason (reason for disabling the API Key), UseStatus (API Key user-side switch).
                     * @param _filters Paginate the list of query filter criteria. Supported filter fields: ApiKeyId (API Key ID), Name (API Key name), Status (whether the API Key is available), StopReason (reason for disabling the API Key), UseStatus (API Key user-side switch).
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Paginate the list of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * @return Sorts Paginate the list of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置Paginate the list of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * @param _sorts Paginate the list of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * Package ID. You can obtain it through the DescribeTokenPlanList API.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned by paging query. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paginate the list of query filter criteria. Supported filter fields: ApiKeyId (API Key ID), Name (API Key name), Status (whether the API Key is available), StopReason (reason for disabling the API Key), UseStatus (API Key user-side switch).
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Paginate the list of sorting criteria. Supported sorting fields: CreatedAt (creation time) and UpdatedAt (update time). By default, results are sorted by CreatedAt in descending order.
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_
