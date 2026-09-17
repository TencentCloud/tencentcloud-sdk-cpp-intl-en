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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGatewayFlowMonitorDetail request structure.
                */
                class DescribeNatGatewayFlowMonitorDetailRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewayFlowMonitorDetailRequest();
                    ~DescribeNatGatewayFlowMonitorDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Point in time. It indicates the moment to query. When the aggregation granularity is 60 or 300, the system queries the aggregation cycle starting from the latest whole minute. When the aggregation granularity is 3600, the system queries the aggregation cycle starting from the latest hour. When the aggregation granularity is 86400, the system queries the aggregation cycle starting from the latest whole day. Example: `2019-03-24T10:51:23+08:00`.
                     * @return TimePoint Point in time. It indicates the moment to query. When the aggregation granularity is 60 or 300, the system queries the aggregation cycle starting from the latest whole minute. When the aggregation granularity is 3600, the system queries the aggregation cycle starting from the latest hour. When the aggregation granularity is 86400, the system queries the aggregation cycle starting from the latest whole day. Example: `2019-03-24T10:51:23+08:00`.
                     * 
                     */
                    std::string GetTimePoint() const;

                    /**
                     * 设置Point in time. It indicates the moment to query. When the aggregation granularity is 60 or 300, the system queries the aggregation cycle starting from the latest whole minute. When the aggregation granularity is 3600, the system queries the aggregation cycle starting from the latest hour. When the aggregation granularity is 86400, the system queries the aggregation cycle starting from the latest whole day. Example: `2019-03-24T10:51:23+08:00`.
                     * @param _timePoint Point in time. It indicates the moment to query. When the aggregation granularity is 60 or 300, the system queries the aggregation cycle starting from the latest whole minute. When the aggregation granularity is 3600, the system queries the aggregation cycle starting from the latest hour. When the aggregation granularity is 86400, the system queries the aggregation cycle starting from the latest whole day. Example: `2019-03-24T10:51:23+08:00`.
                     * 
                     */
                    void SetTimePoint(const std::string& _timePoint);

                    /**
                     * 判断参数 TimePoint 是否已赋值
                     * @return TimePoint 是否已赋值
                     * 
                     */
                    bool TimePointHasBeenSet() const;

                    /**
                     * 获取NAT gateway ID, for example: `nat-ig8xpno8`.
                     * @return NatGatewayId NAT gateway ID, for example: `nat-ig8xpno8`.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT gateway ID, for example: `nat-ig8xpno8`.
                     * @param _natGatewayId NAT gateway ID, for example: `nat-ig8xpno8`.
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取Displays top-ranked data. Default value: 10, indicating that the top 10 ranked data is displayed by default. Maximum value: 100.
                     * @return TopN Displays top-ranked data. Default value: 10, indicating that the top 10 ranked data is displayed by default. Maximum value: 100.
                     * 
                     */
                    int64_t GetTopN() const;

                    /**
                     * 设置Displays top-ranked data. Default value: 10, indicating that the top 10 ranked data is displayed by default. Maximum value: 100.
                     * @param _topN Displays top-ranked data. Default value: 10, indicating that the top 10 ranked data is displayed by default. Maximum value: 100.
                     * 
                     */
                    void SetTopN(const int64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values: `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`. Standard NAT gateways additionally support `ConcurrentConnectionCount` and `NewConnectionRate`. Default value: `OutTraffic`.
                     * @return OrderField Sorting field. Valid values: `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`. Standard NAT gateways additionally support `ConcurrentConnectionCount` and `NewConnectionRate`. Default value: `OutTraffic`.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values: `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`. Standard NAT gateways additionally support `ConcurrentConnectionCount` and `NewConnectionRate`. Default value: `OutTraffic`.
                     * @param _orderField Sorting field. Valid values: `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`. Standard NAT gateways additionally support `ConcurrentConnectionCount` and `NewConnectionRate`. Default value: `OutTraffic`.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Aggregation time granularity. Valid values: 60, 300, 3600, and 86400, corresponding to aggregation queries by 1 minute, 5 minutes, 1 hour, and 1 day.
                     * @return AggregationTimeRange Aggregation time granularity. Valid values: 60, 300, 3600, and 86400, corresponding to aggregation queries by 1 minute, 5 minutes, 1 hour, and 1 day.
                     * 
                     */
                    int64_t GetAggregationTimeRange() const;

                    /**
                     * 设置Aggregation time granularity. Valid values: 60, 300, 3600, and 86400, corresponding to aggregation queries by 1 minute, 5 minutes, 1 hour, and 1 day.
                     * @param _aggregationTimeRange Aggregation time granularity. Valid values: 60, 300, 3600, and 86400, corresponding to aggregation queries by 1 minute, 5 minutes, 1 hour, and 1 day.
                     * 
                     */
                    void SetAggregationTimeRange(const int64_t& _aggregationTimeRange);

                    /**
                     * 判断参数 AggregationTimeRange 是否已赋值
                     * @return AggregationTimeRange 是否已赋值
                     * 
                     */
                    bool AggregationTimeRangeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to query all metrics. Default value: True, which indicates that all metrics are queried.
                     * @return AllMetricMode Specifies whether to query all metrics. Default value: True, which indicates that all metrics are queried.
                     * 
                     */
                    bool GetAllMetricMode() const;

                    /**
                     * 设置Specifies whether to query all metrics. Default value: True, which indicates that all metrics are queried.
                     * @param _allMetricMode Specifies whether to query all metrics. Default value: True, which indicates that all metrics are queried.
                     * 
                     */
                    void SetAllMetricMode(const bool& _allMetricMode);

                    /**
                     * 判断参数 AllMetricMode 是否已赋值
                     * @return AllMetricMode 是否已赋值
                     * 
                     */
                    bool AllMetricModeHasBeenSet() const;

                private:

                    /**
                     * Point in time. It indicates the moment to query. When the aggregation granularity is 60 or 300, the system queries the aggregation cycle starting from the latest whole minute. When the aggregation granularity is 3600, the system queries the aggregation cycle starting from the latest hour. When the aggregation granularity is 86400, the system queries the aggregation cycle starting from the latest whole day. Example: `2019-03-24T10:51:23+08:00`.
                     */
                    std::string m_timePoint;
                    bool m_timePointHasBeenSet;

                    /**
                     * NAT gateway ID, for example: `nat-ig8xpno8`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Displays top-ranked data. Default value: 10, indicating that the top 10 ranked data is displayed by default. Maximum value: 100.
                     */
                    int64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * Sorting field. Valid values: `InPkg`, `OutPkg`, `InTraffic`, and `OutTraffic`. Standard NAT gateways additionally support `ConcurrentConnectionCount` and `NewConnectionRate`. Default value: `OutTraffic`.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Aggregation time granularity. Valid values: 60, 300, 3600, and 86400, corresponding to aggregation queries by 1 minute, 5 minutes, 1 hour, and 1 day.
                     */
                    int64_t m_aggregationTimeRange;
                    bool m_aggregationTimeRangeHasBeenSet;

                    /**
                     * Specifies whether to query all metrics. Default value: True, which indicates that all metrics are queried.
                     */
                    bool m_allMetricMode;
                    bool m_allMetricModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILREQUEST_H_
