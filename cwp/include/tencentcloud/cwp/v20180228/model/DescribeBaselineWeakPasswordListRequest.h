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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEWEAKPASSWORDLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEWEAKPASSWORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineWeakPasswordList request structure.
                */
                class DescribeBaselineWeakPasswordListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineWeakPasswordListRequest();
                    ~DescribeBaselineWeakPasswordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>WeakPassword - string - required: no - weak password</li>
                     * @return Filters <li>WeakPassword - string - required: no - weak password</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>WeakPassword - string - required: no - weak password</li>
                     * @param _filters <li>WeakPassword - string - required: no - weak password</li>
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
                     * 获取Limit Entries, 10 by default, up to 100
                     * @return Limit Limit Entries, 10 by default, up to 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit Entries, 10 by default, up to 100
                     * @param _limit Limit Entries, 10 by default, up to 100
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
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
                     * 获取Sorting order [ASC: ascending|DESC: descending]
                     * @return Order Sorting order [ASC: ascending|DESC: descending]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order [ASC: ascending|DESC: descending]
                     * @param _order Sorting order [ASC: ascending|DESC: descending]
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
                     * 获取Sorting column [CreateTime|ModifyTime]
                     * @return By Sorting column [CreateTime|ModifyTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting column [CreateTime|ModifyTime]
                     * @param _by Sorting column [CreateTime|ModifyTime]
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
                     * <li>WeakPassword - string - required: no - weak password</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Limit Entries, 10 by default, up to 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order [ASC: ascending|DESC: descending]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting column [CreateTime|ModifyTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEWEAKPASSWORDLISTREQUEST_H_
