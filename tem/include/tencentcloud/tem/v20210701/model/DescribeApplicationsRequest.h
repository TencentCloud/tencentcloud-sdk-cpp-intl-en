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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/QueryFilter.h>
#include <tencentcloud/tem/v20210701/model/SortType.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeApplications request structure.
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the environment
                     * @return EnvironmentId ID of the environment
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置ID of the environment
                     * @param _environmentId ID of the environment
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Source channel. Please keep the default value.
                     * @return SourceChannel Source channel. Please keep the default value.
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel. Please keep the default value.
                     * @param _sourceChannel Source channel. Please keep the default value.
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Keyword for searching.
                     * @return Keyword Keyword for searching.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword for searching.
                     * @param _keyword Keyword for searching.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Filters for query 
                     * @return Filters Filters for query 
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置Filters for query 
                     * @param _filters Filters for query 
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return SortInfo Sorting field
                     * 
                     */
                    SortType GetSortInfo() const;

                    /**
                     * 设置Sorting field
                     * @param _sortInfo Sorting field
                     * 
                     */
                    void SetSortInfo(const SortType& _sortInfo);

                    /**
                     * 判断参数 SortInfo 是否已赋值
                     * @return SortInfo 是否已赋值
                     * 
                     */
                    bool SortInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the environment
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Source channel. Please keep the default value.
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Keyword for searching.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Filters for query 
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    SortType m_sortInfo;
                    bool m_sortInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
