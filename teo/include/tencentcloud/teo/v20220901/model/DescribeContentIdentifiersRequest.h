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
                     * 获取The offset of paginated query. default value: 0.
                     * @return Offset The offset of paginated query. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. default value: 0.
                     * @param _offset The offset of paginated query. default value: 0.
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
                     * 获取Limit on paginated queries. default value: `20`. maximum value: `100`.
                     * @return Limit Limit on paginated queries. default value: `20`. maximum value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. default value: `20`. maximum value: `100`.
                     * @param _limit Limit on paginated queries. default value: `20`. maximum value: `100`.
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
                     * 获取Filter conditions. the upper limit for filters is 20, and the upper limit for filters.values is 20. if this parameter is not filled in, the content identifiers with permissions under the current appid are returned by default. detailed filtering conditions are as follows: <li>description: filter by content identifier description in batches; for example: test;</li><li>content-id: filter by content identifier id in batches; for example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by Tag key;</li><li>tag-value: filter by Tag value;</li><li>status: filter by content identifier status. valid values: active: active; deleted: deleted.</li>only description supports fuzzy query, other fields require precise query.
                     * @return Filters Filter conditions. the upper limit for filters is 20, and the upper limit for filters.values is 20. if this parameter is not filled in, the content identifiers with permissions under the current appid are returned by default. detailed filtering conditions are as follows: <li>description: filter by content identifier description in batches; for example: test;</li><li>content-id: filter by content identifier id in batches; for example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by Tag key;</li><li>tag-value: filter by Tag value;</li><li>status: filter by content identifier status. valid values: active: active; deleted: deleted.</li>only description supports fuzzy query, other fields require precise query.
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter conditions. the upper limit for filters is 20, and the upper limit for filters.values is 20. if this parameter is not filled in, the content identifiers with permissions under the current appid are returned by default. detailed filtering conditions are as follows: <li>description: filter by content identifier description in batches; for example: test;</li><li>content-id: filter by content identifier id in batches; for example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by Tag key;</li><li>tag-value: filter by Tag value;</li><li>status: filter by content identifier status. valid values: active: active; deleted: deleted.</li>only description supports fuzzy query, other fields require precise query.
                     * @param _filters Filter conditions. the upper limit for filters is 20, and the upper limit for filters.values is 20. if this parameter is not filled in, the content identifiers with permissions under the current appid are returned by default. detailed filtering conditions are as follows: <li>description: filter by content identifier description in batches; for example: test;</li><li>content-id: filter by content identifier id in batches; for example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by Tag key;</li><li>tag-value: filter by Tag value;</li><li>status: filter by content identifier status. valid values: active: active; deleted: deleted.</li>only description supports fuzzy query, other fields require precise query.
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
                     * The offset of paginated query. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. default value: `20`. maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions. the upper limit for filters is 20, and the upper limit for filters.values is 20. if this parameter is not filled in, the content identifiers with permissions under the current appid are returned by default. detailed filtering conditions are as follows: <li>description: filter by content identifier description in batches; for example: test;</li><li>content-id: filter by content identifier id in batches; for example: eocontent-2noz78a8ev6k;</li><li>tag-key: filter by Tag key;</li><li>tag-value: filter by Tag value;</li><li>status: filter by content identifier status. valid values: active: active; deleted: deleted.</li>only description supports fuzzy query, other fields require precise query.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSREQUEST_H_
