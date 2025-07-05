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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDefenceEvent request structure.
                */
                class DescribeVulDefenceEventRequest : public AbstractModel
                {
                public:
                    DescribeVulDefenceEventRequest();
                    ~DescribeVulDefenceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter
<li>Status- String - Required: No - Plugin status. Valid values: `EVENT_UNDEAL` (pending); `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignored); `EVENT_DEFENDED` (defended).</li>
<li>ContainerStatus- String - Required: No - Container status. Valid values: `CREATED` (created); `RUNNING` (running); `PAUSED` (suspended); 	`STOPPED` (stopped); `RESTARTING` (restarting); `REMOVING` (removing); `DESTROYED` (terminated).</li>
<li>ContainerNetStatus- String - Required: No - Container network status. Valid values: `NORMAL` (not isolated); `ISOLATED` (isolated); `ISOLATE_FAILED` (isolation failed); `RESTORE_FAILED` (recovery failed); `RESTORING` (recovering); `ISOLATING` (isolating).</li>
<li>EventType - String - Required: No - Intrusion status. Valid values: `EVENT_DEFENDED` (defended successfully); `EVENT_ATTACK` (attack attempt).</li>
<li>TimeRange- String - Required: No - Time range. The first value indicates the start time, and the second the end time.</li>
<li>VulName- string - Required: No - Vulnerability name</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>SourceIP- string - Required: No - Attacker IP</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ImageName- string - Required: No - Image name</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>HostName- string - Required: No - Server name</li>
<li>HostIP- string - Required: No - Private IP</li>
                     * @return Filters Filter
<li>Status- String - Required: No - Plugin status. Valid values: `EVENT_UNDEAL` (pending); `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignored); `EVENT_DEFENDED` (defended).</li>
<li>ContainerStatus- String - Required: No - Container status. Valid values: `CREATED` (created); `RUNNING` (running); `PAUSED` (suspended); 	`STOPPED` (stopped); `RESTARTING` (restarting); `REMOVING` (removing); `DESTROYED` (terminated).</li>
<li>ContainerNetStatus- String - Required: No - Container network status. Valid values: `NORMAL` (not isolated); `ISOLATED` (isolated); `ISOLATE_FAILED` (isolation failed); `RESTORE_FAILED` (recovery failed); `RESTORING` (recovering); `ISOLATING` (isolating).</li>
<li>EventType - String - Required: No - Intrusion status. Valid values: `EVENT_DEFENDED` (defended successfully); `EVENT_ATTACK` (attack attempt).</li>
<li>TimeRange- String - Required: No - Time range. The first value indicates the start time, and the second the end time.</li>
<li>VulName- string - Required: No - Vulnerability name</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>SourceIP- string - Required: No - Attacker IP</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ImageName- string - Required: No - Image name</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>HostName- string - Required: No - Server name</li>
<li>HostIP- string - Required: No - Private IP</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter
<li>Status- String - Required: No - Plugin status. Valid values: `EVENT_UNDEAL` (pending); `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignored); `EVENT_DEFENDED` (defended).</li>
<li>ContainerStatus- String - Required: No - Container status. Valid values: `CREATED` (created); `RUNNING` (running); `PAUSED` (suspended); 	`STOPPED` (stopped); `RESTARTING` (restarting); `REMOVING` (removing); `DESTROYED` (terminated).</li>
<li>ContainerNetStatus- String - Required: No - Container network status. Valid values: `NORMAL` (not isolated); `ISOLATED` (isolated); `ISOLATE_FAILED` (isolation failed); `RESTORE_FAILED` (recovery failed); `RESTORING` (recovering); `ISOLATING` (isolating).</li>
<li>EventType - String - Required: No - Intrusion status. Valid values: `EVENT_DEFENDED` (defended successfully); `EVENT_ATTACK` (attack attempt).</li>
<li>TimeRange- String - Required: No - Time range. The first value indicates the start time, and the second the end time.</li>
<li>VulName- string - Required: No - Vulnerability name</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>SourceIP- string - Required: No - Attacker IP</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ImageName- string - Required: No - Image name</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>HostName- string - Required: No - Server name</li>
<li>HostIP- string - Required: No - Private IP</li>
                     * @param _filters Filter
<li>Status- String - Required: No - Plugin status. Valid values: `EVENT_UNDEAL` (pending); `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignored); `EVENT_DEFENDED` (defended).</li>
<li>ContainerStatus- String - Required: No - Container status. Valid values: `CREATED` (created); `RUNNING` (running); `PAUSED` (suspended); 	`STOPPED` (stopped); `RESTARTING` (restarting); `REMOVING` (removing); `DESTROYED` (terminated).</li>
<li>ContainerNetStatus- String - Required: No - Container network status. Valid values: `NORMAL` (not isolated); `ISOLATED` (isolated); `ISOLATE_FAILED` (isolation failed); `RESTORE_FAILED` (recovery failed); `RESTORING` (recovering); `ISOLATING` (isolating).</li>
<li>EventType - String - Required: No - Intrusion status. Valid values: `EVENT_DEFENDED` (defended successfully); `EVENT_ATTACK` (attack attempt).</li>
<li>TimeRange- String - Required: No - Time range. The first value indicates the start time, and the second the end time.</li>
<li>VulName- string - Required: No - Vulnerability name</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>SourceIP- string - Required: No - Attacker IP</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ImageName- string - Required: No - Image name</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>HostName- string - Required: No - Server name</li>
<li>HostIP- string - Required: No - Private IP</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Sorting order. Valid values: `asc`, `desc`.
                     * @return Order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`.
                     * @param _order Sorting order. Valid values: `asc`, `desc`.
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
                     * 获取Sorting field: `EventCount` (number of events).
                     * @return By Sorting field: `EventCount` (number of events).
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: `EventCount` (number of events).
                     * @param _by Sorting field: `EventCount` (number of events).
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
                     * Filter
<li>Status- String - Required: No - Plugin status. Valid values: `EVENT_UNDEAL` (pending); `EVENT_DEALED` (processed); `EVENT_IGNORE` (ignored); `EVENT_DEFENDED` (defended).</li>
<li>ContainerStatus- String - Required: No - Container status. Valid values: `CREATED` (created); `RUNNING` (running); `PAUSED` (suspended); 	`STOPPED` (stopped); `RESTARTING` (restarting); `REMOVING` (removing); `DESTROYED` (terminated).</li>
<li>ContainerNetStatus- String - Required: No - Container network status. Valid values: `NORMAL` (not isolated); `ISOLATED` (isolated); `ISOLATE_FAILED` (isolation failed); `RESTORE_FAILED` (recovery failed); `RESTORING` (recovering); `ISOLATING` (isolating).</li>
<li>EventType - String - Required: No - Intrusion status. Valid values: `EVENT_DEFENDED` (defended successfully); `EVENT_ATTACK` (attack attempt).</li>
<li>TimeRange- String - Required: No - Time range. The first value indicates the start time, and the second the end time.</li>
<li>VulName- string - Required: No - Vulnerability name</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>SourceIP- string - Required: No - Attacker IP</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ImageName- string - Required: No - Image name</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>HostName- string - Required: No - Server name</li>
<li>HostIP- string - Required: No - Private IP</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc`, `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: `EventCount` (number of events).
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTREQUEST_H_
