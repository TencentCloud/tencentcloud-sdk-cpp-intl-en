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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSBLOCKLISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSBLOCKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDDoSBlockList request structure.
                */
                class DescribeDDoSBlockListRequest : public AbstractModel
                {
                public:
                    DescribeDDoSBlockListRequest();
                    ~DescribeDDoSBlockListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the attack event.
                     * @return StartTime The start time of the attack event.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of the attack event.
                     * @param StartTime The start time of the attack event.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The list of attack events.
                     * @return EventIds The list of attack events.
                     */
                    std::vector<std::string> GetEventIds() const;

                    /**
                     * 设置The list of attack events.
                     * @param EventIds The list of attack events.
                     */
                    void SetEventIds(const std::vector<std::string>& _eventIds);

                    /**
                     * 判断参数 EventIds 是否已赋值
                     * @return EventIds 是否已赋值
                     */
                    bool EventIdsHasBeenSet() const;

                    /**
                     * 获取Specifies sites by ID. All sites will be selected if this field is not specified.
                     * @return ZoneIds Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Specifies sites by ID. All sites will be selected if this field is not specified.
                     * @param ZoneIds Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取The list of policy IDs to be specified. All policies will be selected if this field is not specified.
                     * @return PolicyIds The list of policy IDs to be specified. All policies will be selected if this field is not specified.
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置The list of policy IDs to be specified. All policies will be selected if this field is not specified.
                     * @param PolicyIds The list of policy IDs to be specified. All policies will be selected if this field is not specified.
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @return Limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @param Limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page offset. Default value: 0.
                     * @return Offset The page offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0.
                     * @param Offset The page offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @return Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @param Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time of the attack event.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The list of attack events.
                     */
                    std::vector<std::string> m_eventIds;
                    bool m_eventIdsHasBeenSet;

                    /**
                     * Specifies sites by ID. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * The list of policy IDs to be specified. All policies will be selected if this field is not specified.
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSBLOCKLISTREQUEST_H_
