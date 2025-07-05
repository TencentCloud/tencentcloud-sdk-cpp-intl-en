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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeCustomErrorPages request structure.
                */
                class DescribeCustomErrorPagesRequest : public AbstractModel
                {
                public:
                    DescribeCustomErrorPagesRequest();
                    ~DescribeCustomErrorPagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Filter criteria. The maximum number of Filters.Values is 20. The detailed Name values of filter criteria are as follows:
<li>page-id: Filter by page ID;</li>
<li>name: Filter by page name;</li>
<li>description: Filter by page description;</li>
<li>content-type: Filter by page type.</li>
                     * @return Filters Filter criteria. The maximum number of Filters.Values is 20. The detailed Name values of filter criteria are as follows:
<li>page-id: Filter by page ID;</li>
<li>name: Filter by page name;</li>
<li>description: Filter by page description;</li>
<li>content-type: Filter by page type.</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters.Values is 20. The detailed Name values of filter criteria are as follows:
<li>page-id: Filter by page ID;</li>
<li>name: Filter by page name;</li>
<li>description: Filter by page description;</li>
<li>content-type: Filter by page type.</li>
                     * @param _filters Filter criteria. The maximum number of Filters.Values is 20. The detailed Name values of filter criteria are as follows:
<li>page-id: Filter by page ID;</li>
<li>name: Filter by page name;</li>
<li>description: Filter by page description;</li>
<li>content-type: Filter by page type.</li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取The limit of paginated query. Default value: 20. Maximum value: 1,000.  
                     * @return Limit The limit of paginated query. Default value: 20. Maximum value: 1,000.  
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The limit of paginated query. Default value: 20. Maximum value: 1,000.  
                     * @param _limit The limit of paginated query. Default value: 20. Maximum value: 1,000.  
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters.Values is 20. The detailed Name values of filter criteria are as follows:
<li>page-id: Filter by page ID;</li>
<li>name: Filter by page name;</li>
<li>description: Filter by page description;</li>
<li>content-type: Filter by page type.</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit of paginated query. Default value: 20. Maximum value: 1,000.  
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESREQUEST_H_
