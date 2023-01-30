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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATERISKDNSEVENTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATERISKDNSEVENTEXPORTJOBREQUEST_H_

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
                * CreateRiskDnsEventExportJob request structure.
                */
                class CreateRiskDnsEventExportJobRequest : public AbstractModel
                {
                public:
                    CreateRiskDnsEventExportJobRequest();
                    ~CreateRiskDnsEventExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters.
<li>`EventStatus` - String - Optional - Event status. Values: `EVENT_UNDEAL` (Pending); `EVENT_DEALED` (Handled); `EVENT_IGNORE` (Ignored); `EVENT_ADD_WHITE` (Added to the allowlist)</li>
<li>`ContainerStatus` - String - Optional - Container running status. `CREATED`, `RUNNING`, `PAUSED`, `STOPPED`, `RESTARTING`: `REMOVING`, `DESTROYED (Terminated)</li>
<li>`ContainerNetStatus` - String - Optional - Container network status. Values: `NORMAL`, `ISOLATED`, `ISOLATE_FAILED` (Isolation failed`; `RESTORE_FAILED` (Failed to restore from isolation), `RESTORING` (Restoring); `ISOLATING`</li>
<li>`EventType` - String - Optional - Event type. Values: `DOMAIN` (Malicious domain); `IP` (Malicious IP)</li>
<li>`TimeRange` - String - Optional - Time range, where the first value represents the start time and the second value represents the end time</li>
<li>`RiskDns` - String - Optional - Malicious domain. </li>
<li>`RiskIP`- String - Optional - Malicious IP. </li>
<li>`ContainerName` - String - Optional - Container name. </li>
<li>`ContainerID` - String - Optional - Container ID. </li>
<li>`ImageName` - String - Optional - Image name. </li>
<li>`ImageID` - String - Optional - Image ID. </li>
<li>`HostName` - String - Optional - Server name. </li>
<li>`HostIP` - String - Optional - Private IP. </li>
<li>`PublicIP` - String - Optional - Public IP. </li>
                     * @return Filters Filters.
<li>`EventStatus` - String - Optional - Event status. Values: `EVENT_UNDEAL` (Pending); `EVENT_DEALED` (Handled); `EVENT_IGNORE` (Ignored); `EVENT_ADD_WHITE` (Added to the allowlist)</li>
<li>`ContainerStatus` - String - Optional - Container running status. `CREATED`, `RUNNING`, `PAUSED`, `STOPPED`, `RESTARTING`: `REMOVING`, `DESTROYED (Terminated)</li>
<li>`ContainerNetStatus` - String - Optional - Container network status. Values: `NORMAL`, `ISOLATED`, `ISOLATE_FAILED` (Isolation failed`; `RESTORE_FAILED` (Failed to restore from isolation), `RESTORING` (Restoring); `ISOLATING`</li>
<li>`EventType` - String - Optional - Event type. Values: `DOMAIN` (Malicious domain); `IP` (Malicious IP)</li>
<li>`TimeRange` - String - Optional - Time range, where the first value represents the start time and the second value represents the end time</li>
<li>`RiskDns` - String - Optional - Malicious domain. </li>
<li>`RiskIP`- String - Optional - Malicious IP. </li>
<li>`ContainerName` - String - Optional - Container name. </li>
<li>`ContainerID` - String - Optional - Container ID. </li>
<li>`ImageName` - String - Optional - Image name. </li>
<li>`ImageID` - String - Optional - Image ID. </li>
<li>`HostName` - String - Optional - Server name. </li>
<li>`HostIP` - String - Optional - Private IP. </li>
<li>`PublicIP` - String - Optional - Public IP. </li>
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filters.
<li>`EventStatus` - String - Optional - Event status. Values: `EVENT_UNDEAL` (Pending); `EVENT_DEALED` (Handled); `EVENT_IGNORE` (Ignored); `EVENT_ADD_WHITE` (Added to the allowlist)</li>
<li>`ContainerStatus` - String - Optional - Container running status. `CREATED`, `RUNNING`, `PAUSED`, `STOPPED`, `RESTARTING`: `REMOVING`, `DESTROYED (Terminated)</li>
<li>`ContainerNetStatus` - String - Optional - Container network status. Values: `NORMAL`, `ISOLATED`, `ISOLATE_FAILED` (Isolation failed`; `RESTORE_FAILED` (Failed to restore from isolation), `RESTORING` (Restoring); `ISOLATING`</li>
<li>`EventType` - String - Optional - Event type. Values: `DOMAIN` (Malicious domain); `IP` (Malicious IP)</li>
<li>`TimeRange` - String - Optional - Time range, where the first value represents the start time and the second value represents the end time</li>
<li>`RiskDns` - String - Optional - Malicious domain. </li>
<li>`RiskIP`- String - Optional - Malicious IP. </li>
<li>`ContainerName` - String - Optional - Container name. </li>
<li>`ContainerID` - String - Optional - Container ID. </li>
<li>`ImageName` - String - Optional - Image name. </li>
<li>`ImageID` - String - Optional - Image ID. </li>
<li>`HostName` - String - Optional - Server name. </li>
<li>`HostIP` - String - Optional - Private IP. </li>
<li>`PublicIP` - String - Optional - Public IP. </li>
                     * @param Filters Filters.
<li>`EventStatus` - String - Optional - Event status. Values: `EVENT_UNDEAL` (Pending); `EVENT_DEALED` (Handled); `EVENT_IGNORE` (Ignored); `EVENT_ADD_WHITE` (Added to the allowlist)</li>
<li>`ContainerStatus` - String - Optional - Container running status. `CREATED`, `RUNNING`, `PAUSED`, `STOPPED`, `RESTARTING`: `REMOVING`, `DESTROYED (Terminated)</li>
<li>`ContainerNetStatus` - String - Optional - Container network status. Values: `NORMAL`, `ISOLATED`, `ISOLATE_FAILED` (Isolation failed`; `RESTORE_FAILED` (Failed to restore from isolation), `RESTORING` (Restoring); `ISOLATING`</li>
<li>`EventType` - String - Optional - Event type. Values: `DOMAIN` (Malicious domain); `IP` (Malicious IP)</li>
<li>`TimeRange` - String - Optional - Time range, where the first value represents the start time and the second value represents the end time</li>
<li>`RiskDns` - String - Optional - Malicious domain. </li>
<li>`RiskIP`- String - Optional - Malicious IP. </li>
<li>`ContainerName` - String - Optional - Container name. </li>
<li>`ContainerID` - String - Optional - Container ID. </li>
<li>`ImageName` - String - Optional - Image name. </li>
<li>`ImageID` - String - Optional - Image ID. </li>
<li>`HostName` - String - Optional - Server name. </li>
<li>`HostIP` - String - Optional - Private IP. </li>
<li>`PublicIP` - String - Optional - Public IP. </li>
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The number of results displayed per page. The maximum value is 100,000.
                     * @return Limit The number of results displayed per page. The maximum value is 100,000.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results displayed per page. The maximum value is 100,000.
                     * @param Limit The number of results displayed per page. The maximum value is 100,000.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param Offset Offset. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort order: `asc`, `desc`
                     * @return Order Sort order: `asc`, `desc`
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order: `asc`, `desc`
                     * @param Order Sort order: `asc`, `desc`
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field: Number of events: EventCount
                     * @return By Sorting field: Number of events: EventCount
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: Number of events: EventCount
                     * @param By Sorting field: Number of events: EventCount
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filters.
<li>`EventStatus` - String - Optional - Event status. Values: `EVENT_UNDEAL` (Pending); `EVENT_DEALED` (Handled); `EVENT_IGNORE` (Ignored); `EVENT_ADD_WHITE` (Added to the allowlist)</li>
<li>`ContainerStatus` - String - Optional - Container running status. `CREATED`, `RUNNING`, `PAUSED`, `STOPPED`, `RESTARTING`: `REMOVING`, `DESTROYED (Terminated)</li>
<li>`ContainerNetStatus` - String - Optional - Container network status. Values: `NORMAL`, `ISOLATED`, `ISOLATE_FAILED` (Isolation failed`; `RESTORE_FAILED` (Failed to restore from isolation), `RESTORING` (Restoring); `ISOLATING`</li>
<li>`EventType` - String - Optional - Event type. Values: `DOMAIN` (Malicious domain); `IP` (Malicious IP)</li>
<li>`TimeRange` - String - Optional - Time range, where the first value represents the start time and the second value represents the end time</li>
<li>`RiskDns` - String - Optional - Malicious domain. </li>
<li>`RiskIP`- String - Optional - Malicious IP. </li>
<li>`ContainerName` - String - Optional - Container name. </li>
<li>`ContainerID` - String - Optional - Container ID. </li>
<li>`ImageName` - String - Optional - Image name. </li>
<li>`ImageID` - String - Optional - Image ID. </li>
<li>`HostName` - String - Optional - Server name. </li>
<li>`HostIP` - String - Optional - Private IP. </li>
<li>`PublicIP` - String - Optional - Public IP. </li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The number of results displayed per page. The maximum value is 100,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort order: `asc`, `desc`
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: Number of events: EventCount
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATERISKDNSEVENTEXPORTJOBREQUEST_H_
