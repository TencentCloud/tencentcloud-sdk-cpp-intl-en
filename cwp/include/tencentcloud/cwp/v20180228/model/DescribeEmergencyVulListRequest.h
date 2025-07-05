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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_

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
                * DescribeEmergencyVulList request structure.
                */
                class DescribeEmergencyVulListRequest : public AbstractModel
                {
                public:
                    DescribeEmergencyVulListRequest();
                    ~DescribeEmergencyVulListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of returns. The maximum value is 100.
                     * @return Limit Quantity of returns. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. The maximum value is 100.
                     * @param _limit Quantity of returns. The maximum value is 100.
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
<li>Status - String - required: Yes - vulnerability status filter: 0: not detected; 1: at risk; 2: no risk; 3: show progress while detecting</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - vulnerability name search</li>
<li>Uuids- String - required: no - host uuid</li>
<li>IsSupportDefense - int- required: no - whether to support defense: 0: no; 1: yes</li>
                     * @return Filters Filter criteria
<li>Status - String - required: Yes - vulnerability status filter: 0: not detected; 1: at risk; 2: no risk; 3: show progress while detecting</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - vulnerability name search</li>
<li>Uuids- String - required: no - host uuid</li>
<li>IsSupportDefense - int- required: no - whether to support defense: 0: no; 1: yes</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Status - String - required: Yes - vulnerability status filter: 0: not detected; 1: at risk; 2: no risk; 3: show progress while detecting</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - vulnerability name search</li>
<li>Uuids- String - required: no - host uuid</li>
<li>IsSupportDefense - int- required: no - whether to support defense: 0: no; 1: yes</li>
                     * @param _filters Filter criteria
<li>Status - String - required: Yes - vulnerability status filter: 0: not detected; 1: at risk; 2: no risk; 3: show progress while detecting</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - vulnerability name search</li>
<li>Uuids- String - required: no - host uuid</li>
<li>IsSupportDefense - int- required: no - whether to support defense: 0: no; 1: yes</li>
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
                     * 获取Sorting method: desc and asc
                     * @return Order Sorting method: desc and asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: desc and asc
                     * @param _order Sorting method: desc and asc
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
                     * 获取Sorting field PublishDate  LastScanTime HostCount
                     * @return By Sorting field PublishDate  LastScanTime HostCount
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field PublishDate  LastScanTime HostCount
                     * @param _by Sorting field PublishDate  LastScanTime HostCount
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
                     * 获取Whether hot spot vulnerabilities
                     * @return HotspotAttack Whether hot spot vulnerabilities
                     * 
                     */
                    bool GetHotspotAttack() const;

                    /**
                     * 设置Whether hot spot vulnerabilities
                     * @param _hotspotAttack Whether hot spot vulnerabilities
                     * 
                     */
                    void SetHotspotAttack(const bool& _hotspotAttack);

                    /**
                     * 判断参数 HotspotAttack 是否已赋值
                     * @return HotspotAttack 是否已赋值
                     * 
                     */
                    bool HotspotAttackHasBeenSet() const;

                private:

                    /**
                     * Quantity of returns. The maximum value is 100.
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
<li>Status - String - required: Yes - vulnerability status filter: 0: not detected; 1: at risk; 2: no risk; 3: show progress while detecting</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - vulnerability name search</li>
<li>Uuids- String - required: no - host uuid</li>
<li>IsSupportDefense - int- required: no - whether to support defense: 0: no; 1: yes</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: desc and asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field PublishDate  LastScanTime HostCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Whether hot spot vulnerabilities
                     */
                    bool m_hotspotAttack;
                    bool m_hotspotAttackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTREQUEST_H_
