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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatAcRule request structure.
                */
                class DescribeNatAcRuleRequest : public AbstractModel
                {
                public:
                    DescribeNatAcRuleRequest();
                    ~DescribeNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Page offset.
                     * @return Offset Page offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page offset.
                     * @param _offset Page offset.
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
                     * 获取Index to be queried. This parameter is optional, and is used only in specific cases.
                     * @return Index Index to be queried. This parameter is optional, and is used only in specific cases.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Index to be queried. This parameter is optional, and is used only in specific cases.
                     * @param _index Index to be queried. This parameter is optional, and is used only in specific cases.
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Filter condition combination.
                     * @return Filters Filter condition combination.
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置Filter condition combination.
                     * @param _filters Filter condition combination.
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Start time for search. This parameter is optional.
                     * @return StartTime Start time for search. This parameter is optional.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for search. This parameter is optional.
                     * @param _startTime Start time for search. This parameter is optional.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for search. This parameter is optional.
                     * @return EndTime End time for search. This parameter is optional.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for search. This parameter is optional.
                     * @param _endTime End time for search. This parameter is optional.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Valid values: desc: descending; asc: ascending. The returned results are sorted by the value of By. If this parameter is specified, By is also required.
                     * @return Order Valid values: desc: descending; asc: ascending. The returned results are sorted by the value of By. If this parameter is specified, By is also required.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Valid values: desc: descending; asc: ascending. The returned results are sorted by the value of By. If this parameter is specified, By is also required.
                     * @param _order Valid values: desc: descending; asc: ascending. The returned results are sorted by the value of By. If this parameter is specified, By is also required.
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
                     * 获取Field by which the returned results are sorted.
                     * @return By Field by which the returned results are sorted.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Field by which the returned results are sorted.
                     * @param _by Field by which the returned results are sorted.
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
                     * Number of entries per page.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Index to be queried. This parameter is optional, and is used only in specific cases.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Filter condition combination.
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Start time for search. This parameter is optional.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for search. This parameter is optional.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Valid values: desc: descending; asc: ascending. The returned results are sorted by the value of By. If this parameter is specified, By is also required.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Field by which the returned results are sorted.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULEREQUEST_H_
