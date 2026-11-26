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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSREQUEST_H_

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
                * DescribeContentIdentifiers request structure.
                */
                class DescribeContentIdentifiersRequest : public AbstractModel
                {
                public:
                    DescribeContentIdentifiersRequest();
                    ~DescribeContentIdentifiersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取Number limit of paginated query. Default value: 20. Maximum value: 100.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum value: 100.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum value: 100.
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
                     * 获取Filter criteria. The maximum number of Filters is 20, and the maximum number of Filters.Values is 20. If this parameter is left empty, the content identifiers authorized under the current AppId are returned by default. The detailed filter criteria are as follows: <li>description: filter by content identifier description in batches. For example: test;</li><li>content-id: filter by content identifier ID in batches. For example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by tag key;</li> <li>tag-value: filter by tag value;</li><li>status: filter by content identifier status. Valid values: active: active; deleted: deleted.</li>Fuzzy query is supported only for description. Precise query is required for other fields.
                     * @return Filters Filter criteria. The maximum number of Filters is 20, and the maximum number of Filters.Values is 20. If this parameter is left empty, the content identifiers authorized under the current AppId are returned by default. The detailed filter criteria are as follows: <li>description: filter by content identifier description in batches. For example: test;</li><li>content-id: filter by content identifier ID in batches. For example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by tag key;</li> <li>tag-value: filter by tag value;</li><li>status: filter by content identifier status. Valid values: active: active; deleted: deleted.</li>Fuzzy query is supported only for description. Precise query is required for other fields.
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters is 20, and the maximum number of Filters.Values is 20. If this parameter is left empty, the content identifiers authorized under the current AppId are returned by default. The detailed filter criteria are as follows: <li>description: filter by content identifier description in batches. For example: test;</li><li>content-id: filter by content identifier ID in batches. For example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by tag key;</li> <li>tag-value: filter by tag value;</li><li>status: filter by content identifier status. Valid values: active: active; deleted: deleted.</li>Fuzzy query is supported only for description. Precise query is required for other fields.
                     * @param _filters Filter criteria. The maximum number of Filters is 20, and the maximum number of Filters.Values is 20. If this parameter is left empty, the content identifiers authorized under the current AppId are returned by default. The detailed filter criteria are as follows: <li>description: filter by content identifier description in batches. For example: test;</li><li>content-id: filter by content identifier ID in batches. For example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by tag key;</li> <li>tag-value: filter by tag value;</li><li>status: filter by content identifier status. Valid values: active: active; deleted: deleted.</li>Fuzzy query is supported only for description. Precise query is required for other fields.
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters is 20, and the maximum number of Filters.Values is 20. If this parameter is left empty, the content identifiers authorized under the current AppId are returned by default. The detailed filter criteria are as follows: <li>description: filter by content identifier description in batches. For example: test;</li><li>content-id: filter by content identifier ID in batches. For example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by tag key;</li> <li>tag-value: filter by tag value;</li><li>status: filter by content identifier status. Valid values: active: active; deleted: deleted.</li>Fuzzy query is supported only for description. Precise query is required for other fields.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSREQUEST_H_
