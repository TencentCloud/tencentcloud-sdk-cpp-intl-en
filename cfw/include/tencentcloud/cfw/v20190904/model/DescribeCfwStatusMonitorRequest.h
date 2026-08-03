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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwStatusMonitorFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwStatusMonitor request structure.
                */
                class DescribeCfwStatusMonitorRequest : public AbstractModel
                {
                public:
                    DescribeCfwStatusMonitorRequest();
                    ~DescribeCfwStatusMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation type. describe_scene means discovery of scenarios and secondary dropdown options; fetch_scene means acquisition of scenario-based snapshots. Required.
                     * @return Op Operation type. describe_scene means discovery of scenarios and secondary dropdown options; fetch_scene means acquisition of scenario-based snapshots. Required.
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置Operation type. describe_scene means discovery of scenarios and secondary dropdown options; fetch_scene means acquisition of scenario-based snapshots. Required.
                     * @param _op Operation type. describe_scene means discovery of scenarios and secondary dropdown options; fetch_scene means acquisition of scenario-based snapshots. Required.
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取Firewall scenario type. Supports internet_edge (Internet edge firewall), nat_cluster (NAT border firewall - cluster), nat_ha (NAT border firewall - primary/secondary), vpc_cluster (VPC boundary firewall - cluster), vpc_ha (VPC boundary firewall - primary/secondary). Required.
                     * @return FirewallType Firewall scenario type. Supports internet_edge (Internet edge firewall), nat_cluster (NAT border firewall - cluster), nat_ha (NAT border firewall - primary/secondary), vpc_cluster (VPC boundary firewall - cluster), vpc_ha (VPC boundary firewall - primary/secondary). Required.
                     * 
                     */
                    std::string GetFirewallType() const;

                    /**
                     * 设置Firewall scenario type. Supports internet_edge (Internet edge firewall), nat_cluster (NAT border firewall - cluster), nat_ha (NAT border firewall - primary/secondary), vpc_cluster (VPC boundary firewall - cluster), vpc_ha (VPC boundary firewall - primary/secondary). Required.
                     * @param _firewallType Firewall scenario type. Supports internet_edge (Internet edge firewall), nat_cluster (NAT border firewall - cluster), nat_ha (NAT border firewall - primary/secondary), vpc_cluster (VPC boundary firewall - cluster), vpc_ha (VPC boundary firewall - primary/secondary). Required.
                     * 
                     */
                    void SetFirewallType(const std::string& _firewallType);

                    /**
                     * 判断参数 FirewallType 是否已赋值
                     * @return FirewallType 是否已赋值
                     * 
                     */
                    bool FirewallTypeHasBeenSet() const;

                    /**
                     * 获取Secondary dropdown option ID. fetch_scene is imported as needed, and the value comes from selection.available_options[].ID returned by describe_scene. internet_edge is the region, NAT is the instance ID, and VPC bandwidth scenario is the firewall group ID. The connections aggregation scenario for VPC_cluster ignores this parameter.
                     * @return SelectionId Secondary dropdown option ID. fetch_scene is imported as needed, and the value comes from selection.available_options[].ID returned by describe_scene. internet_edge is the region, NAT is the instance ID, and VPC bandwidth scenario is the firewall group ID. The connections aggregation scenario for VPC_cluster ignores this parameter.
                     * 
                     */
                    std::string GetSelectionId() const;

                    /**
                     * 设置Secondary dropdown option ID. fetch_scene is imported as needed, and the value comes from selection.available_options[].ID returned by describe_scene. internet_edge is the region, NAT is the instance ID, and VPC bandwidth scenario is the firewall group ID. The connections aggregation scenario for VPC_cluster ignores this parameter.
                     * @param _selectionId Secondary dropdown option ID. fetch_scene is imported as needed, and the value comes from selection.available_options[].ID returned by describe_scene. internet_edge is the region, NAT is the instance ID, and VPC bandwidth scenario is the firewall group ID. The connections aggregation scenario for VPC_cluster ignores this parameter.
                     * 
                     */
                    void SetSelectionId(const std::string& _selectionId);

                    /**
                     * 判断参数 SelectionId 是否已赋值
                     * @return SelectionId 是否已赋值
                     * 
                     */
                    bool SelectionIdHasBeenSet() const;

                    /**
                     * 获取Secondary dropdown display name. Can be used as an alternative to SelectionId for matching by name. The value comes from selection.available_options[].name returned by describe_scene.
                     * @return SelectionName Secondary dropdown display name. Can be used as an alternative to SelectionId for matching by name. The value comes from selection.available_options[].name returned by describe_scene.
                     * 
                     */
                    std::string GetSelectionName() const;

                    /**
                     * 设置Secondary dropdown display name. Can be used as an alternative to SelectionId for matching by name. The value comes from selection.available_options[].name returned by describe_scene.
                     * @param _selectionName Secondary dropdown display name. Can be used as an alternative to SelectionId for matching by name. The value comes from selection.available_options[].name returned by describe_scene.
                     * 
                     */
                    void SetSelectionName(const std::string& _selectionName);

                    /**
                     * 判断参数 SelectionName 是否已赋值
                     * @return SelectionName 是否已赋值
                     * 
                     */
                    bool SelectionNameHasBeenSet() const;

                    /**
                     * 获取Engine instance ID. Mainly used in vpc ha scenarios where a firewall group corresponds to multiple instances. Preferentially use the selection.available_options[].instance_ID returned by describe_scene. If only instance_ids are available, select a string value from the array.
                     * @return SelectionInstanceId Engine instance ID. Mainly used in vpc ha scenarios where a firewall group corresponds to multiple instances. Preferentially use the selection.available_options[].instance_ID returned by describe_scene. If only instance_ids are available, select a string value from the array.
                     * 
                     */
                    std::string GetSelectionInstanceId() const;

                    /**
                     * 设置Engine instance ID. Mainly used in vpc ha scenarios where a firewall group corresponds to multiple instances. Preferentially use the selection.available_options[].instance_ID returned by describe_scene. If only instance_ids are available, select a string value from the array.
                     * @param _selectionInstanceId Engine instance ID. Mainly used in vpc ha scenarios where a firewall group corresponds to multiple instances. Preferentially use the selection.available_options[].instance_ID returned by describe_scene. If only instance_ids are available, select a string value from the array.
                     * 
                     */
                    void SetSelectionInstanceId(const std::string& _selectionInstanceId);

                    /**
                     * 判断参数 SelectionInstanceId 是否已赋值
                     * @return SelectionInstanceId 是否已赋值
                     * 
                     */
                    bool SelectionInstanceIdHasBeenSet() const;

                    /**
                     * 获取Metrics tab. fetch_scene can be passed; used when not passed, this scenario default value. Support bandwidth, connections.
                     * @return Metric Metrics tab. fetch_scene can be passed; used when not passed, this scenario default value. Support bandwidth, connections.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metrics tab. fetch_scene can be passed; used when not passed, this scenario default value. Support bandwidth, connections.
                     * @param _metric Metrics tab. fetch_scene can be passed; used when not passed, this scenario default value. Support bandwidth, connections.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Perspective under the metric. fetch_scene is optional; the default value for this scenario is used when not provided. Supports ip, subnet, session, switch, and vpc. The actual usable composite is subject to the return from describe_scene.
                     * @return Perspective Perspective under the metric. fetch_scene is optional; the default value for this scenario is used when not provided. Supports ip, subnet, session, switch, and vpc. The actual usable composite is subject to the return from describe_scene.
                     * 
                     */
                    std::string GetPerspective() const;

                    /**
                     * 设置Perspective under the metric. fetch_scene is optional; the default value for this scenario is used when not provided. Supports ip, subnet, session, switch, and vpc. The actual usable composite is subject to the return from describe_scene.
                     * @param _perspective Perspective under the metric. fetch_scene is optional; the default value for this scenario is used when not provided. Supports ip, subnet, session, switch, and vpc. The actual usable composite is subject to the return from describe_scene.
                     * 
                     */
                    void SetPerspective(const std::string& _perspective);

                    /**
                     * 判断参数 Perspective 是否已赋值
                     * @return Perspective 是否已赋值
                     * 
                     */
                    bool PerspectiveHasBeenSet() const;

                    /**
                     * 获取NAT primary/secondary number of connections IP perspective range. External means external IP, asset means Asset IP. Only nat_ha + connections + ip is used. Other group input will return InvalidParameter.
                     * @return IpScope NAT primary/secondary number of connections IP perspective range. External means external IP, asset means Asset IP. Only nat_ha + connections + ip is used. Other group input will return InvalidParameter.
                     * 
                     */
                    std::string GetIpScope() const;

                    /**
                     * 设置NAT primary/secondary number of connections IP perspective range. External means external IP, asset means Asset IP. Only nat_ha + connections + ip is used. Other group input will return InvalidParameter.
                     * @param _ipScope NAT primary/secondary number of connections IP perspective range. External means external IP, asset means Asset IP. Only nat_ha + connections + ip is used. Other group input will return InvalidParameter.
                     * 
                     */
                    void SetIpScope(const std::string& _ipScope);

                    /**
                     * 判断参数 IpScope 是否已赋值
                     * @return IpScope 是否已赋值
                     * 
                     */
                    bool IpScopeHasBeenSet() const;

                    /**
                     * 获取Preset time range. Default 24h; used by fetch_scene. Supports 5m, 15m, 30m, 1h, 6h, 24h, 3d, 7d, 30d, today, yesterday, day before yesterday, this week, last week, this month.
                     * @return TimePreset Preset time range. Default 24h; used by fetch_scene. Supports 5m, 15m, 30m, 1h, 6h, 24h, 3d, 7d, 30d, today, yesterday, day before yesterday, this week, last week, this month.
                     * 
                     */
                    std::string GetTimePreset() const;

                    /**
                     * 设置Preset time range. Default 24h; used by fetch_scene. Supports 5m, 15m, 30m, 1h, 6h, 24h, 3d, 7d, 30d, today, yesterday, day before yesterday, this week, last week, this month.
                     * @param _timePreset Preset time range. Default 24h; used by fetch_scene. Supports 5m, 15m, 30m, 1h, 6h, 24h, 3d, 7d, 30d, today, yesterday, day before yesterday, this week, last week, this month.
                     * 
                     */
                    void SetTimePreset(const std::string& _timePreset);

                    /**
                     * 判断参数 TimePreset 是否已赋值
                     * @return TimePreset 是否已赋值
                     * 
                     */
                    bool TimePresetHasBeenSet() const;

                    /**
                     * 获取Custom start time. Format YYYY-MM-DD HH:MM:SS; must be specified together with EndTime, maximum span 30 days.
                     * @return StartTime Custom start time. Format YYYY-MM-DD HH:MM:SS; must be specified together with EndTime, maximum span 30 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Custom start time. Format YYYY-MM-DD HH:MM:SS; must be specified together with EndTime, maximum span 30 days.
                     * @param _startTime Custom start time. Format YYYY-MM-DD HH:MM:SS; must be specified together with EndTime, maximum span 30 days.
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
                     * 获取Custom end time. Format YYYY-MM-DD HH:MM:SS; must be consistent with StartTime at the same time, maximum span 30 days.
                     * @return EndTime Custom end time. Format YYYY-MM-DD HH:MM:SS; must be consistent with StartTime at the same time, maximum span 30 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Custom end time. Format YYYY-MM-DD HH:MM:SS; must be consistent with StartTime at the same time, maximum span 30 days.
                     * @param _endTime Custom end time. Format YYYY-MM-DD HH:MM:SS; must be consistent with StartTime at the same time, maximum span 30 days.
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
                     * 获取Page number, starting from 1. Default is 1; used for the fetch_scene list viewing angle.
                     * @return Page Page number, starting from 1. Default is 1; used for the fetch_scene list viewing angle.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number, starting from 1. Default is 1; used for the fetch_scene list viewing angle.
                     * @param _page Page number, starting from 1. Default is 1; used for the fetch_scene list viewing angle.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Entries per page. Default 10, value 1 to 100; used for the viewing angle of the fetch_scene list.
                     * @return Limit Entries per page. Default 10, value 1 to 100; used for the viewing angle of the fetch_scene list.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Entries per page. Default 10, value 1 to 100; used for the viewing angle of the fetch_scene list.
                     * @param _limit Entries per page. Default 10, value 1 to 100; used for the viewing angle of the fetch_scene list.
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
                     * 获取Whether to only get overview data. When true, fetch_scene only requests overview, skips table/detail, and is suitable for viewing scenario snapshot summary.
                     * @return OverviewOnly Whether to only get overview data. When true, fetch_scene only requests overview, skips table/detail, and is suitable for viewing scenario snapshot summary.
                     * 
                     */
                    bool GetOverviewOnly() const;

                    /**
                     * 设置Whether to only get overview data. When true, fetch_scene only requests overview, skips table/detail, and is suitable for viewing scenario snapshot summary.
                     * @param _overviewOnly Whether to only get overview data. When true, fetch_scene only requests overview, skips table/detail, and is suitable for viewing scenario snapshot summary.
                     * 
                     */
                    void SetOverviewOnly(const bool& _overviewOnly);

                    /**
                     * 判断参数 OverviewOnly 是否已赋值
                     * @return OverviewOnly 是否已赋值
                     * 
                     */
                    bool OverviewOnlyHasBeenSet() const;

                    /**
                     * 获取Original offset coverage. Option, overwrites the calculation result of Page after input; value 0 to 10000.
                     * @return Offset Original offset coverage. Option, overwrites the calculation result of Page after input; value 0 to 10000.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Original offset coverage. Option, overwrites the calculation result of Page after input; value 0 to 10000.
                     * @param _offset Original offset coverage. Option, overwrites the calculation result of Page after input; value 0 to 10000.
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
                     * 获取Sorting field. Option. InputMax and OutputMax are supported for the Internet boundary IP and NAT IP/subnet perspective. SwitchName is supported for the VPC switch perspective. FlowMax is supported for the VPC IP/VPC perspective. Do not pass other groups.
                     * @return SortBy Sorting field. Option. InputMax and OutputMax are supported for the Internet boundary IP and NAT IP/subnet perspective. SwitchName is supported for the VPC switch perspective. FlowMax is supported for the VPC IP/VPC perspective. Do not pass other groups.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting field. Option. InputMax and OutputMax are supported for the Internet boundary IP and NAT IP/subnet perspective. SwitchName is supported for the VPC switch perspective. FlowMax is supported for the VPC IP/VPC perspective. Do not pass other groups.
                     * @param _sortBy Sorting field. Option. InputMax and OutputMax are supported for the Internet boundary IP and NAT IP/subnet perspective. SwitchName is supported for the VPC switch perspective. FlowMax is supported for the VPC IP/VPC perspective. Do not pass other groups.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Default desc; supports asc, desc.
                     * @return SortOrder Sorting order. Default desc; supports asc, desc.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order. Default desc; supports asc, desc.
                     * @param _sortOrder Sorting order. Default desc; supports asc, desc.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Filter condition list. Reserved.
                     * @return Filters Filter condition list. Reserved.
                     * 
                     */
                    std::vector<CfwStatusMonitorFilter> GetFilters() const;

                    /**
                     * 设置Filter condition list. Reserved.
                     * @param _filters Filter condition list. Reserved.
                     * 
                     */
                    void SetFilters(const std::vector<CfwStatusMonitorFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Operation type. describe_scene means discovery of scenarios and secondary dropdown options; fetch_scene means acquisition of scenario-based snapshots. Required.
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Firewall scenario type. Supports internet_edge (Internet edge firewall), nat_cluster (NAT border firewall - cluster), nat_ha (NAT border firewall - primary/secondary), vpc_cluster (VPC boundary firewall - cluster), vpc_ha (VPC boundary firewall - primary/secondary). Required.
                     */
                    std::string m_firewallType;
                    bool m_firewallTypeHasBeenSet;

                    /**
                     * Secondary dropdown option ID. fetch_scene is imported as needed, and the value comes from selection.available_options[].ID returned by describe_scene. internet_edge is the region, NAT is the instance ID, and VPC bandwidth scenario is the firewall group ID. The connections aggregation scenario for VPC_cluster ignores this parameter.
                     */
                    std::string m_selectionId;
                    bool m_selectionIdHasBeenSet;

                    /**
                     * Secondary dropdown display name. Can be used as an alternative to SelectionId for matching by name. The value comes from selection.available_options[].name returned by describe_scene.
                     */
                    std::string m_selectionName;
                    bool m_selectionNameHasBeenSet;

                    /**
                     * Engine instance ID. Mainly used in vpc ha scenarios where a firewall group corresponds to multiple instances. Preferentially use the selection.available_options[].instance_ID returned by describe_scene. If only instance_ids are available, select a string value from the array.
                     */
                    std::string m_selectionInstanceId;
                    bool m_selectionInstanceIdHasBeenSet;

                    /**
                     * Metrics tab. fetch_scene can be passed; used when not passed, this scenario default value. Support bandwidth, connections.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Perspective under the metric. fetch_scene is optional; the default value for this scenario is used when not provided. Supports ip, subnet, session, switch, and vpc. The actual usable composite is subject to the return from describe_scene.
                     */
                    std::string m_perspective;
                    bool m_perspectiveHasBeenSet;

                    /**
                     * NAT primary/secondary number of connections IP perspective range. External means external IP, asset means Asset IP. Only nat_ha + connections + ip is used. Other group input will return InvalidParameter.
                     */
                    std::string m_ipScope;
                    bool m_ipScopeHasBeenSet;

                    /**
                     * Preset time range. Default 24h; used by fetch_scene. Supports 5m, 15m, 30m, 1h, 6h, 24h, 3d, 7d, 30d, today, yesterday, day before yesterday, this week, last week, this month.
                     */
                    std::string m_timePreset;
                    bool m_timePresetHasBeenSet;

                    /**
                     * Custom start time. Format YYYY-MM-DD HH:MM:SS; must be specified together with EndTime, maximum span 30 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Custom end time. Format YYYY-MM-DD HH:MM:SS; must be consistent with StartTime at the same time, maximum span 30 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Page number, starting from 1. Default is 1; used for the fetch_scene list viewing angle.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Entries per page. Default 10, value 1 to 100; used for the viewing angle of the fetch_scene list.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether to only get overview data. When true, fetch_scene only requests overview, skips table/detail, and is suitable for viewing scenario snapshot summary.
                     */
                    bool m_overviewOnly;
                    bool m_overviewOnlyHasBeenSet;

                    /**
                     * Original offset coverage. Option, overwrites the calculation result of Page after input; value 0 to 10000.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field. Option. InputMax and OutputMax are supported for the Internet boundary IP and NAT IP/subnet perspective. SwitchName is supported for the VPC switch perspective. FlowMax is supported for the VPC IP/VPC perspective. Do not pass other groups.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting order. Default desc; supports asc, desc.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Filter condition list. Reserved.
                     */
                    std::vector<CfwStatusMonitorFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORREQUEST_H_
