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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKPROCESSEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKPROCESSEVENTSREQUEST_H_

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
                * DescribeRiskProcessEvents request structure.
                */
                class DescribeRiskProcessEventsRequest : public AbstractModel
                {
                public:
                    DescribeRiskProcessEventsRequest();
                    ~DescribeRiskProcessEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering criteria
<li>HostId - String - required: no - host ID</li>
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>ProcessId - String - required: no - process ID</li>
<li>FilePath - String - required: no - process path</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - status for filtering: 0: pending; 1: scanning; 2: scanned; 3: exited; 4: trusted</li>
                     * @return Filters Filtering criteria
<li>HostId - String - required: no - host ID</li>
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>ProcessId - String - required: no - process ID</li>
<li>FilePath - String - required: no - process path</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - status for filtering: 0: pending; 1: scanning; 2: scanned; 3: exited; 4: trusted</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>HostId - String - required: no - host ID</li>
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>ProcessId - String - required: no - process ID</li>
<li>FilePath - String - required: no - process path</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - status for filtering: 0: pending; 1: scanning; 2: scanned; 3: exited; 4: trusted</li>
                     * @param _filters Filtering criteria
<li>HostId - String - required: no - host ID</li>
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>ProcessId - String - required: no - process ID</li>
<li>FilePath - String - required: no - process path</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - status for filtering: 0: pending; 1: scanning; 2: scanned; 3: exited; 4: trusted</li>
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
                     * 获取Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Sorting order: [ASC|DESC]
                     * @return Order Sorting order: [ASC|DESC]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order: [ASC|DESC]
                     * @param _order Sorting order: [ASC|DESC]
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
                     * 获取[StartTime: Process start time | DetectTime: Last detection time]
                     * @return By [StartTime: Process start time | DetectTime: Last detection time]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置[StartTime: Process start time | DetectTime: Last detection time]
                     * @param _by [StartTime: Process start time | DetectTime: Last detection time]
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
                     * Filtering criteria
<li>HostId - String - required: no - host ID</li>
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>ProcessId - String - required: no - process ID</li>
<li>FilePath - String - required: no - process path</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - status for filtering: 0: pending; 1: scanning; 2: scanned; 3: exited; 4: trusted</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order: [ASC|DESC]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * [StartTime: Process start time | DetectTime: Last detection time]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKPROCESSEVENTSREQUEST_H_
