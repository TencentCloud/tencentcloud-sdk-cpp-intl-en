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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeUpstreams request structure.
                */
                class DescribeUpstreamsRequest : public AbstractModel
                {
                public:
                    DescribeUpstreamsRequest();
                    ~DescribeUpstreamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page
                     * @return Limit Number of entries per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page
                     * @param _limit Number of entries per page
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The starting position of paging
                     * @return Offset The starting position of paging
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The starting position of paging
                     * @param _offset The starting position of paging
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
                     * 获取Filters. Valid values: `UpstreamId` and `UpstreamName`
                     * @return Filters Filters. Valid values: `UpstreamId` and `UpstreamName`
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters. Valid values: `UpstreamId` and `UpstreamName`
                     * @param _filters Filters. Valid values: `UpstreamId` and `UpstreamName`
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Number of entries per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The starting position of paging
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filters. Valid values: `UpstreamId` and `UpstreamName`
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMSREQUEST_H_
