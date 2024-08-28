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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_

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
                * DescribeVulDefencePluginStatus request structure.
                */
                class DescribeVulDefencePluginStatusRequest : public AbstractModel
                {
                public:
                    DescribeVulDefencePluginStatusRequest();
                    ~DescribeVulDefencePluginStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>Keywords - String - required: no - host IP address or alias for filtering</li>
<li>Exception - String - required: no - plugin status: 0: normal; 1: abnormal; 2: no Java process injection</li>
                     * @return Filters Filter criteria
<li>Keywords - String - required: no - host IP address or alias for filtering</li>
<li>Exception - String - required: no - plugin status: 0: normal; 1: abnormal; 2: no Java process injection</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Keywords - String - required: no - host IP address or alias for filtering</li>
<li>Exception - String - required: no - plugin status: 0: normal; 1: abnormal; 2: no Java process injection</li>
                     * @param _filters Filter criteria
<li>Keywords - String - required: no - host IP address or alias for filtering</li>
<li>Exception - String - required: no - plugin status: 0: normal; 1: abnormal; 2: no Java process injection</li>
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
                     * 获取Data offset
                     * @return Offset Data offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset
                     * @param _offset Data offset
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
                     * 获取Data limit
                     * @return Limit Data limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Data limit
                     * @param _limit Data limit
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
                     * 获取Sorting method, case insensitive: ASC for ascending order; DESC for descending order
                     * @return Order Sorting method, case insensitive: ASC for ascending order; DESC for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method, case insensitive: ASC for ascending order; DESC for descending order
                     * @param _order Sorting method, case insensitive: ASC for ascending order; DESC for descending order
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
                     * 获取Sorting column (exact match). CreateTime: creation time; ModifyTime: update time.
                     * @return By Sorting column (exact match). CreateTime: creation time; ModifyTime: update time.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting column (exact match). CreateTime: creation time; ModifyTime: update time.
                     * @param _by Sorting column (exact match). CreateTime: creation time; ModifyTime: update time.
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
<li>Keywords - String - required: no - host IP address or alias for filtering</li>
<li>Exception - String - required: no - plugin status: 0: normal; 1: abnormal; 2: no Java process injection</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Data limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting method, case insensitive: ASC for ascending order; DESC for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting column (exact match). CreateTime: creation time; ModifyTime: update time.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_
