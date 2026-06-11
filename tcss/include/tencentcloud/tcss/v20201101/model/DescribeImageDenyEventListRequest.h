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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTLISTREQUEST_H_

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
                * DescribeImageDenyEventList request structure.
                */
                class DescribeImageDenyEventListRequest : public AbstractModel
                {
                public:
                    DescribeImageDenyEventListRequest();
                    ~DescribeImageDenyEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>EventType - String - Required: No - Event type. EVENT_RISK: Risk event type. EVENT_PRIVILEGE: Privilege.</li>
<li>DealBehavior - String - required: no - execution action, BEHAVIOR_ALERT: alert, BEHAVIOR_HOLDUP_SUCCESSED: block.</li>
<li>RuleName - string - required: no - rule name.</li>
<li>NodeName- string - required: no - node name.</li>
<li>NodeIP - string - required: no - private and public IP.</li>
<li>PublicIP - string - required: no - public IP address.</li>
<li>ImageName- string - required: no - image name.</li>
<li>ImageID - string - required: no - image ID.</li>
<li>TimeRange - String - required: no - time range, the first value represents the start time, second value represents end time</li>
                     * @return Filters Filter criteria
<li>EventType - String - Required: No - Event type. EVENT_RISK: Risk event type. EVENT_PRIVILEGE: Privilege.</li>
<li>DealBehavior - String - required: no - execution action, BEHAVIOR_ALERT: alert, BEHAVIOR_HOLDUP_SUCCESSED: block.</li>
<li>RuleName - string - required: no - rule name.</li>
<li>NodeName- string - required: no - node name.</li>
<li>NodeIP - string - required: no - private and public IP.</li>
<li>PublicIP - string - required: no - public IP address.</li>
<li>ImageName- string - required: no - image name.</li>
<li>ImageID - string - required: no - image ID.</li>
<li>TimeRange - String - required: no - time range, the first value represents the start time, second value represents end time</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>EventType - String - Required: No - Event type. EVENT_RISK: Risk event type. EVENT_PRIVILEGE: Privilege.</li>
<li>DealBehavior - String - required: no - execution action, BEHAVIOR_ALERT: alert, BEHAVIOR_HOLDUP_SUCCESSED: block.</li>
<li>RuleName - string - required: no - rule name.</li>
<li>NodeName- string - required: no - node name.</li>
<li>NodeIP - string - required: no - private and public IP.</li>
<li>PublicIP - string - required: no - public IP address.</li>
<li>ImageName- string - required: no - image name.</li>
<li>ImageID - string - required: no - image ID.</li>
<li>TimeRange - String - required: no - time range, the first value represents the start time, second value represents end time</li>
                     * @param _filters Filter criteria
<li>EventType - String - Required: No - Event type. EVENT_RISK: Risk event type. EVENT_PRIVILEGE: Privilege.</li>
<li>DealBehavior - String - required: no - execution action, BEHAVIOR_ALERT: alert, BEHAVIOR_HOLDUP_SUCCESSED: block.</li>
<li>RuleName - string - required: no - rule name.</li>
<li>NodeName- string - required: no - node name.</li>
<li>NodeIP - string - required: no - private and public IP.</li>
<li>PublicIP - string - required: no - public IP address.</li>
<li>ImageName- string - required: no - image name.</li>
<li>ImageID - string - required: no - image ID.</li>
<li>TimeRange - String - required: no - time range, the first value represents the start time, second value represents end time</li>
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
                     * 获取Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of entries to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Sort Mode: DESC, ACS
                     * @return Order Sort Mode: DESC, ACS
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort Mode: DESC, ACS
                     * @param _order Sort Mode: DESC, ACS
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
                     * 获取Sort field. EventCount: Alarm quantity; LatestFoundTime: Most recent generation time
                     * @return By Sort field. EventCount: Alarm quantity; LatestFoundTime: Most recent generation time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort field. EventCount: Alarm quantity; LatestFoundTime: Most recent generation time
                     * @param _by Sort field. EventCount: Alarm quantity; LatestFoundTime: Most recent generation time
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
<li>EventType - String - Required: No - Event type. EVENT_RISK: Risk event type. EVENT_PRIVILEGE: Privilege.</li>
<li>DealBehavior - String - required: no - execution action, BEHAVIOR_ALERT: alert, BEHAVIOR_HOLDUP_SUCCESSED: block.</li>
<li>RuleName - string - required: no - rule name.</li>
<li>NodeName- string - required: no - node name.</li>
<li>NodeIP - string - required: no - private and public IP.</li>
<li>PublicIP - string - required: no - public IP address.</li>
<li>ImageName- string - required: no - image name.</li>
<li>ImageID - string - required: no - image ID.</li>
<li>TimeRange - String - required: no - time range, the first value represents the start time, second value represents end time</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of entries to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort Mode: DESC, ACS
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort field. EventCount: Alarm quantity; LatestFoundTime: Most recent generation time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTLISTREQUEST_H_
