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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_

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
                * DescribeVulList request structure.
                */
                class DescribeVulListRequest : public AbstractModel
                {
                public:
                    DescribeVulListRequest();
                    ~DescribeVulListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returns, with the maximum value being 100.
                     * @return Limit Number of returns, with the maximum value being 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns, with the maximum value being 100.
                     * @param _limit Number of returns, with the maximum value being 100.
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
                     * 获取Offset, which defaults to 0
                     * @return Offset Offset, which defaults to 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0
                     * @param _offset Offset, which defaults to 0
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
                     * 获取Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>VulName- string -</li>
<li>VulCategory- string - required: no - vulnerability category: 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability</li>
<li>IsSupportDefense - int - required: no - support for defense: 0: not supported; 1: supported</li>
<li>Labels - string - required: no - tag for search</li>
<li>IsSupportAutoFix - string - required: no - whether automatic fixing is supported: 0: not supported; 1: supported</li>
<li>CvssScore - string - required: no - lower limit of CVSS score</li>
<li>AttackLevel - string - required: no - lower limit of attack level</li>


                     * @return Filters Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>VulName- string -</li>
<li>VulCategory- string - required: no - vulnerability category: 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability</li>
<li>IsSupportDefense - int - required: no - support for defense: 0: not supported; 1: supported</li>
<li>Labels - string - required: no - tag for search</li>
<li>IsSupportAutoFix - string - required: no - whether automatic fixing is supported: 0: not supported; 1: supported</li>
<li>CvssScore - string - required: no - lower limit of CVSS score</li>
<li>AttackLevel - string - required: no - lower limit of attack level</li>


                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>VulName- string -</li>
<li>VulCategory- string - required: no - vulnerability category: 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability</li>
<li>IsSupportDefense - int - required: no - support for defense: 0: not supported; 1: supported</li>
<li>Labels - string - required: no - tag for search</li>
<li>IsSupportAutoFix - string - required: no - whether automatic fixing is supported: 0: not supported; 1: supported</li>
<li>CvssScore - string - required: no - lower limit of CVSS score</li>
<li>AttackLevel - string - required: no - lower limit of attack level</li>


                     * @param _filters Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>VulName- string -</li>
<li>VulCategory- string - required: no - vulnerability category: 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability</li>
<li>IsSupportDefense - int - required: no - support for defense: 0: not supported; 1: supported</li>
<li>Labels - string - required: no - tag for search</li>
<li>IsSupportAutoFix - string - required: no - whether automatic fixing is supported: 0: not supported; 1: supported</li>
<li>CvssScore - string - required: no - lower limit of CVSS score</li>
<li>AttackLevel - string - required: no - lower limit of attack level</li>


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
                     * 获取Sorting field: Level, LastTime, and HostCount
                     * @return By Sorting field: Level, LastTime, and HostCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: Level, LastTime, and HostCount
                     * @param _by Sorting field: Level, LastTime, and HostCount
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
                     * 获取Sorting order: desc and asc. Default value: asc.
                     * @return Order Sorting order: desc and asc. Default value: asc.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order: desc and asc. Default value: asc.
                     * @param _order Sorting order: desc and asc. Default value: asc.
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
                     * Number of returns, with the maximum value being 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which defaults to 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
<li>Status - String - required: no - processing status: 0: pending; 1: allowlisted; 2: deleted; 3: ignored</li>
<li>ModifyTime - String - required: no - last occurrence time</li>
<li>Uuid- String - required: no - query by host UUID</li>
<li>VulName- string -</li>
<li>VulCategory- string - required: no - vulnerability category: 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability</li>
<li>IsSupportDefense - int - required: no - support for defense: 0: not supported; 1: supported</li>
<li>Labels - string - required: no - tag for search</li>
<li>IsSupportAutoFix - string - required: no - whether automatic fixing is supported: 0: not supported; 1: supported</li>
<li>CvssScore - string - required: no - lower limit of CVSS score</li>
<li>AttackLevel - string - required: no - lower limit of attack level</li>


                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field: Level, LastTime, and HostCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order: desc and asc. Default value: asc.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTREQUEST_H_
