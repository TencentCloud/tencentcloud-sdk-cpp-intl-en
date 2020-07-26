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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Filter.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeLifecycleHooks request structure.
                */
                class DescribeLifecycleHooksRequest : public AbstractModel
                {
                public:
                    DescribeLifecycleHooksRequest();
                    ~DescribeLifecycleHooksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by one or more lifecycle hook IDs in the format of `ash-8azjzxcl`. The maximum quantity per request is 100. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     * @return LifecycleHookIds Queries by one or more lifecycle hook IDs in the format of `ash-8azjzxcl`. The maximum quantity per request is 100. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> GetLifecycleHookIds() const;

                    /**
                     * 设置Queries by one or more lifecycle hook IDs in the format of `ash-8azjzxcl`. The maximum quantity per request is 100. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     * @param LifecycleHookIds Queries by one or more lifecycle hook IDs in the format of `ash-8azjzxcl`. The maximum quantity per request is 100. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    void SetLifecycleHookIds(const std::vector<std::string>& _lifecycleHookIds);

                    /**
                     * 判断参数 LifecycleHookIds 是否已赋值
                     * @return LifecycleHookIds 是否已赋值
                     */
                    bool LifecycleHookIdsHasBeenSet() const;

                    /**
                     * 获取Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
The maximum number of `Filters` per request is 10. The upper limit for `Filter.Values` is 5. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     * @return Filters Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
The maximum number of `Filters` per request is 10. The upper limit for `Filter.Values` is 5. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
The maximum number of `Filters` per request is 10. The upper limit for `Filter.Values` is 5. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     * @param Filters Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
The maximum number of `Filters` per request is 10. The upper limit for `Filter.Values` is 5. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     * @param Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Queries by one or more lifecycle hook IDs in the format of `ash-8azjzxcl`. The maximum quantity per request is 100. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_lifecycleHookIds;
                    bool m_lifecycleHookIdsHasBeenSet;

                    /**
                     * Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
Filter.
<li> lifecycle-hook-id - String - Required: No - (Filter) Filter by lifecycle hook ID.</li>
<li> lifecycle-hook-name - String - Required: No - (Filter) Filter by lifecycle hook name.</li>
<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
The maximum number of `Filters` per request is 10. The upper limit for `Filter.Values` is 5. This parameter does not support specifying both `LifecycleHookIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://cloud.tencent.com/document/api/213/15688).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELIFECYCLEHOOKSREQUEST_H_
