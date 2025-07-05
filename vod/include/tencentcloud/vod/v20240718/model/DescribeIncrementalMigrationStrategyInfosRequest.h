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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/Filter.h>
#include <tencentcloud/vod/v20240718/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * DescribeIncrementalMigrationStrategyInfos request structure.
                */
                class DescribeIncrementalMigrationStrategyInfosRequest : public AbstractModel
                {
                public:
                    DescribeIncrementalMigrationStrategyInfosRequest();
                    ~DescribeIncrementalMigrationStrategyInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @return SubAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @param _subAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria. The maximum number of Filters.Values is `20`. If this parameter is not input, all stategy information under the current SubAppId will be returned. The detailed filter criteria are as follows:
<li>BucketId: Filter by the ID of bucket;</li>
<li>StrategyId: Filter by the ID of strategy.</li>
                     * @return Filters Filter criteria. The maximum number of Filters.Values is `20`. If this parameter is not input, all stategy information under the current SubAppId will be returned. The detailed filter criteria are as follows:
<li>BucketId: Filter by the ID of bucket;</li>
<li>StrategyId: Filter by the ID of strategy.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters.Values is `20`. If this parameter is not input, all stategy information under the current SubAppId will be returned. The detailed filter criteria are as follows:
<li>BucketId: Filter by the ID of bucket;</li>
<li>StrategyId: Filter by the ID of strategy.</li>
                     * @param _filters Filter criteria. The maximum number of Filters.Values is `20`. If this parameter is not input, all stategy information under the current SubAppId will be returned. The detailed filter criteria are as follows:
<li>BucketId: Filter by the ID of bucket;</li>
<li>StrategyId: Filter by the ID of strategy.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sort the returned results according to this field. 
SortBy.Field Values include: 
<li>UpdateTime: (Default) Update time of the strategy.</li>SortBy.Order Values include: 
<li>Desc: (Default) The order is descend.</li> 

                     * @return SortBy Sort the returned results according to this field. 
SortBy.Field Values include: 
<li>UpdateTime: (Default) Update time of the strategy.</li>SortBy.Order Values include: 
<li>Desc: (Default) The order is descend.</li> 

                     * 
                     */
                    SortBy GetSortBy() const;

                    /**
                     * 设置Sort the returned results according to this field. 
SortBy.Field Values include: 
<li>UpdateTime: (Default) Update time of the strategy.</li>SortBy.Order Values include: 
<li>Desc: (Default) The order is descend.</li> 

                     * @param _sortBy Sort the returned results according to this field. 
SortBy.Field Values include: 
<li>UpdateTime: (Default) Update time of the strategy.</li>SortBy.Order Values include: 
<li>Desc: (Default) The order is descend.</li> 

                     * 
                     */
                    void SetSortBy(const SortBy& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Offset for paginated queries. Default value: `0`.
                     * @return Offset Offset for paginated queries. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: `0`.
                     * @param _offset Offset for paginated queries. Default value: `0`.
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
                     * 获取Limit on paginated queries. Default value: `20`. Maximum value: `100`.
                     * @return Limit Limit on paginated queries. Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: `20`. Maximum value: `100`.
                     * @param _limit Limit on paginated queries. Default value: `20`. Maximum value: `100`.
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
                     * <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters.Values is `20`. If this parameter is not input, all stategy information under the current SubAppId will be returned. The detailed filter criteria are as follows:
<li>BucketId: Filter by the ID of bucket;</li>
<li>StrategyId: Filter by the ID of strategy.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort the returned results according to this field. 
SortBy.Field Values include: 
<li>UpdateTime: (Default) Update time of the strategy.</li>SortBy.Order Values include: 
<li>Desc: (Default) The order is descend.</li> 

                     */
                    SortBy m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSREQUEST_H_
