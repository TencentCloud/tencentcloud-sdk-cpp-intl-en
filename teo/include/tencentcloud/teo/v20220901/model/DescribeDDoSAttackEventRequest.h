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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_

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
                * DescribeDDoSAttackEvent request structure.
                */
                class DescribeDDoSAttackEventRequest : public AbstractModel
                {
                public:
                    DescribeDDoSAttackEventRequest();
                    ~DescribeDDoSAttackEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query period.
                     * @return StartTime Start time of the query period.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query period.
                     * @param _startTime Start time of the query period.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query period.
                     * @return EndTime End time of the query period.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query period.
                     * @param _endTime End time of the query period.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取List of DDoS policy IDs. All policies are selected if this field is not specified.
                     * @return PolicyIds List of DDoS policy IDs. All policies are selected if this field is not specified.
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置List of DDoS policy IDs. All policies are selected if this field is not specified.
                     * @param _policyIds List of DDoS policy IDs. All policies are selected if this field is not specified.
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取(Required) List of sites. No query results are returned if this field is not specified.
                     * @return ZoneIds (Required) List of sites. No query results are returned if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置(Required) List of sites. No query results are returned if this field is not specified.
                     * @param _zoneIds (Required) List of sites. No query results are returned if this field is not specified.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @return Limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @param _limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
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
                     * 获取The page offset. Default value: 0.
                     * @return Offset The page offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0.
                     * @param _offset The page offset. Default value: 0.
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
                     * 获取Whether to display the details.
                     * @return ShowDetail Whether to display the details.
                     * 
                     */
                    bool GetShowDetail() const;

                    /**
                     * 设置Whether to display the details.
                     * @param _showDetail Whether to display the details.
                     * 
                     */
                    void SetShowDetail(const bool& _showDetail);

                    /**
                     * 判断参数 ShowDetail 是否已赋值
                     * @return ShowDetail 是否已赋值
                     * 
                     */
                    bool ShowDetailHasBeenSet() const;

                    /**
                     * 获取Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @param _area Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The sorting field. Values: 
<li>`MaxBandWidth`: Peak bandwidth</li>
<li>`AttackStartTime` Start time of the attack</li>If this field is not specified, the default value `AttackStartTime` is used.
                     * @return OrderBy The sorting field. Values: 
<li>`MaxBandWidth`: Peak bandwidth</li>
<li>`AttackStartTime` Start time of the attack</li>If this field is not specified, the default value `AttackStartTime` is used.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置The sorting field. Values: 
<li>`MaxBandWidth`: Peak bandwidth</li>
<li>`AttackStartTime` Start time of the attack</li>If this field is not specified, the default value `AttackStartTime` is used.
                     * @param _orderBy The sorting field. Values: 
<li>`MaxBandWidth`: Peak bandwidth</li>
<li>`AttackStartTime` Start time of the attack</li>If this field is not specified, the default value `AttackStartTime` is used.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取The sorting method. Values: 
<Li>`asc`: Ascending</li>
<li>`desc`: Descending</li>If this field is not specified, the default value `desc` is used.
                     * @return OrderType The sorting method. Values: 
<Li>`asc`: Ascending</li>
<li>`desc`: Descending</li>If this field is not specified, the default value `desc` is used.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置The sorting method. Values: 
<Li>`asc`: Ascending</li>
<li>`desc`: Descending</li>If this field is not specified, the default value `desc` is used.
                     * @param _orderType The sorting method. Values: 
<Li>`asc`: Ascending</li>
<li>`desc`: Descending</li>If this field is not specified, the default value `desc` is used.
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * Start time of the query period.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of DDoS policy IDs. All policies are selected if this field is not specified.
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * (Required) List of sites. No query results are returned if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

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
                     * Whether to display the details.
                     */
                    bool m_showDetail;
                    bool m_showDetailHasBeenSet;

                    /**
                     * Geolocation scope. Values: 
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The sorting field. Values: 
<li>`MaxBandWidth`: Peak bandwidth</li>
<li>`AttackStartTime` Start time of the attack</li>If this field is not specified, the default value `AttackStartTime` is used.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * The sorting method. Values: 
<Li>`asc`: Ascending</li>
<li>`desc`: Descending</li>If this field is not specified, the default value `desc` is used.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_
