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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFileTamperEvents request structure.
                */
                class DescribeFileTamperEventsRequest : public AbstractModel
                {
                public:
                    DescribeFileTamperEventsRequest();
                    ~DescribeFileTamperEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>RuleCategory - string - required: no - rule category. 0: system rule; 1: custom rule</li>
<li>FileAction - string - required: no - threat behavior: read - read file; write - write file</li>
                     * @return Filters Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>RuleCategory - string - required: no - rule category. 0: system rule; 1: custom rule</li>
<li>FileAction - string - required: no - threat behavior: read - read file; write - write file</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>RuleCategory - string - required: no - rule category. 0: system rule; 1: custom rule</li>
<li>FileAction - string - required: no - threat behavior: read - read file; write - write file</li>
                     * @param _filters Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>RuleCategory - string - required: no - rule category. 0: system rule; 1: custom rule</li>
<li>FileAction - string - required: no - threat behavior: read - read file; write - write file</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @return Limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @param _limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
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
                     * 获取Sorting method: ASC, DESC
                     * @return Order Sorting method: ASC, DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: ASC, DESC
                     * @param _order Sorting method: ASC, DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field: CreateTime; ModifyTime
                     * @return By Sorting field: CreateTime; ModifyTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: CreateTime; ModifyTime
                     * @param _by Sorting field: CreateTime; ModifyTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>RuleCategory - string - required: no - rule category. 0: system rule; 1: custom rule</li>
<li>FileAction - string - required: no - threat behavior: read - read file; write - write file</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting method: ASC, DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: CreateTime; ModifyTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPEREVENTSREQUEST_H_
