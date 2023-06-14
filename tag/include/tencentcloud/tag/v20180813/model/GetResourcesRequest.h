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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetResources request structure.
                */
                class GetResourcesRequest : public AbstractModel
                {
                public:
                    GetResourcesRequest();
                    ~GetResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource.
For example, ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}.
If this parameter is passed in, the list of all matching resources will be returned, and the specified `MaxResults` will become invalid.
Value range of N: 0–9
                     * @return ResourceList Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource.
For example, ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}.
If this parameter is passed in, the list of all matching resources will be returned, and the specified `MaxResults` will become invalid.
Value range of N: 0–9
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource.
For example, ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}.
If this parameter is passed in, the list of all matching resources will be returned, and the specified `MaxResults` will become invalid.
Value range of N: 0–9
                     * @param _resourceList Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource.
For example, ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}.
If this parameter is passed in, the list of all matching resources will be returned, and the specified `MaxResults` will become invalid.
Value range of N: 0–9
                     * 
                     */
                    void SetResourceList(const std::vector<std::string>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取Tag key and value.
If multiple tags are specified, resources bound to all such tags will be queried.
Value range of N: 0–5
There can be up to 10 `TagValues` in each `TagFilters`.
                     * @return TagFilters Tag key and value.
If multiple tags are specified, resources bound to all such tags will be queried.
Value range of N: 0–5
There can be up to 10 `TagValues` in each `TagFilters`.
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag key and value.
If multiple tags are specified, resources bound to all such tags will be queried.
Value range of N: 0–5
There can be up to 10 `TagValues` in each `TagFilters`.
                     * @param _tagFilters Tag key and value.
If multiple tags are specified, resources bound to all such tags will be queried.
Value range of N: 0–5
There can be up to 10 `TagValues` in each `TagFilters`.
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * @return PaginationToken The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * @param _paginationToken The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     * 
                     */
                    void SetPaginationToken(const std::string& _paginationToken);

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取Number of data entries to return per page (up to 200).
Default value: 50.
                     * @return MaxResults Number of data entries to return per page (up to 200).
Default value: 50.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Number of data entries to return per page (up to 200).
Default value: 50.
                     * @param _maxResults Number of data entries to return per page (up to 200).
Default value: 50.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource.
For example, ResourceList.1 = qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}.
If this parameter is passed in, the list of all matching resources will be returned, and the specified `MaxResults` will become invalid.
Value range of N: 0–9
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * Tag key and value.
If multiple tags are specified, resources bound to all such tags will be queried.
Value range of N: 0–5
There can be up to 10 `TagValues` in each `TagFilters`.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * The token value of the next page obtained from the response of the previous page.
Leave it empty for the first request.
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * Number of data entries to return per page (up to 200).
Default value: 50.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESREQUEST_H_
