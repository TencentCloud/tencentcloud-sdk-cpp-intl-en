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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTYPEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTYPEREQUEST_H_

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
                * DescribeAttackType request structure.
                */
                class DescribeAttackTypeRequest : public AbstractModel
                {
                public:
                    DescribeAttackTypeRequest();
                    ~DescribeAttackTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>Source - String - Required - Allowlisted module, rasp: vulnerability defense, memshell_inject: memory shell injection</li>

                     * @return Filters Filter criteria
<li>Source - String - Required - Allowlisted module, rasp: vulnerability defense, memshell_inject: memory shell injection</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Source - String - Required - Allowlisted module, rasp: vulnerability defense, memshell_inject: memory shell injection</li>

                     * @param _filters Filter criteria
<li>Source - String - Required - Allowlisted module, rasp: vulnerability defense, memshell_inject: memory shell injection</li>

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
                     * 获取Number of entries to be returned. Default value: 10. Maximum value: 1000.
                     * @return Limit Number of entries to be returned. Default value: 10. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned. Default value: 10. Maximum value: 1000.
                     * @param _limit Number of entries to be returned. Default value: 10. Maximum value: 1000.
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
                     * 获取Sorting field. Currently available: Id. Default sorting order is by Id. Can be omitted.
                     * @return By Sorting field. Currently available: Id. Default sorting order is by Id. Can be omitted.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field. Currently available: Id. Default sorting order is by Id. Can be omitted.
                     * @param _by Sorting field. Currently available: Id. Default sorting order is by Id. Can be omitted.
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting method: DESC, ASC.
                     * @return Order Sorting method: DESC, ASC.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: DESC, ASC.
                     * @param _order Sorting method: DESC, ASC.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>Source - String - Required - Allowlisted module, rasp: vulnerability defense, memshell_inject: memory shell injection</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of entries to be returned. Default value: 10. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Currently available: Id. Default sorting order is by Id. Can be omitted.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting method: DESC, ASC.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTYPEREQUEST_H_
