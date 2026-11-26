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
                     * 获取Start time. Time range: 30 days.
                     * @return StartTime Start time. Time range: 30 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. Time range: 30 days.
                     * @param _startTime Start time. Time range: 30 days.
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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
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
                     * 获取Collection of ddos policy groups. If left blank, all policies are selected by default.
                     * @return PolicyIds Collection of ddos policy groups. If left blank, all policies are selected by default.
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Collection of ddos policy groups. If left blank, all policies are selected by default.
                     * @param _policyIds Collection of ddos policy groups. If left blank, all policies are selected by default.
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
                     * 获取Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * @return ZoneIds Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     * @param _zoneIds Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
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
                     * 获取Number limit of paginated query. Default value: 20. Maximum number of query entries: 1000.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum number of query entries: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum number of query entries: 1000.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum number of query entries: 1000.
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
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Parameter to show attack details. If set to `false`, only the number of attacks is returned. If set to `true`, attack details are returned.
                     * @return ShowDetail Parameter to show attack details. If set to `false`, only the number of attacks is returned. If set to `true`, attack details are returned.
                     * 
                     */
                    bool GetShowDetail() const;

                    /**
                     * 设置Parameter to show attack details. If set to `false`, only the number of attacks is returned. If set to `true`, attack details are returned.
                     * @param _showDetail Parameter to show attack details. If set to `false`, only the number of attacks is returned. If set to `true`, attack details are returned.
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
                     * 获取Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data;</li>If this parameter is not input, the default value `global` is used.
                     * @return Area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data;</li>If this parameter is not input, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data;</li>If this parameter is not input, the default value `global` is used.
                     * @param _area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data;</li>If this parameter is not input, the default value `global` is used.
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
                     * 获取Sorting field. Valid values:
<li>MaxBandWidth: bandwidth peak;</li>
<li>AttackStartTime: attack start time.</li>If not specified, the default value is AttackStartTime.
                     * @return OrderBy Sorting field. Valid values:
<li>MaxBandWidth: bandwidth peak;</li>
<li>AttackStartTime: attack start time.</li>If not specified, the default value is AttackStartTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values:
<li>MaxBandWidth: bandwidth peak;</li>
<li>AttackStartTime: attack start time.</li>If not specified, the default value is AttackStartTime.
                     * @param _orderBy Sorting field. Valid values:
<li>MaxBandWidth: bandwidth peak;</li>
<li>AttackStartTime: attack start time.</li>If not specified, the default value is AttackStartTime.
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
                     * 获取Sorting method. Valid values:
<li>asc: in ascending order;</li>
<li>desc: in descending order.</li> If not specified, the default value is desc.
                     * @return OrderType Sorting method. Valid values:
<li>asc: in ascending order;</li>
<li>desc: in descending order.</li> If not specified, the default value is desc.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting method. Valid values:
<li>asc: in ascending order;</li>
<li>desc: in descending order.</li> If not specified, the default value is desc.
                     * @param _orderType Sorting method. Valid values:
<li>asc: in ascending order;</li>
<li>desc: in descending order.</li> If not specified, the default value is desc.
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
                     * Start time. Time range: 30 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Collection of ddos policy groups. If left blank, all policies are selected by default.
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1). You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use `*` instead. To query account-level data, you need permission for all site resources of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum number of query entries: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Parameter to show attack details. If set to `false`, only the number of attacks is returned. If set to `true`, attack details are returned.
                     */
                    bool m_showDetail;
                    bool m_showDetailHasBeenSet;

                    /**
                     * Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data;</li>If this parameter is not input, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Sorting field. Valid values:
<li>MaxBandWidth: bandwidth peak;</li>
<li>AttackStartTime: attack start time.</li>If not specified, the default value is AttackStartTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method. Valid values:
<li>asc: in ascending order;</li>
<li>desc: in descending order.</li> If not specified, the default value is desc.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKEVENTREQUEST_H_
