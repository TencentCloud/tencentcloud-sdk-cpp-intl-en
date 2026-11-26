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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackData request structure.
                */
                class DescribeDDoSAttackDataRequest : public AbstractModel
                {
                public:
                    DescribeDDoSAttackDataRequest();
                    ~DescribeDDoSAttackDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Start time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * @return StartTime <p>Start time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * @param _startTime <p>Start time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
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
                     * 获取<p>End time. The time is in Coordinated Universal Time (UTC), following the ISO 8601 standard date and time format. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * @return EndTime <p>End time. The time is in Coordinated Universal Time (UTC), following the ISO 8601 standard date and time format. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time. The time is in Coordinated Universal Time (UTC), following the ISO 8601 standard date and time format. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * @param _endTime <p>End time. The time is in Coordinated Universal Time (UTC), following the ISO 8601 standard date and time format. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
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
                     * 获取<p>List of statistical metrics. Fill in at least 1, and duplication is not allowed.</p><p>Enumeration values:</p><ul><li>ddos_attackMaxBandwidth: Peak attack bandwidth, in bps;</li><li>ddos_attackMaxPackageRate: Peak attack packet rate, in pps;</li><li>ddos_attackBandwidth: Attack bandwidth curve, in bps;</li><li>ddos_attackPackageRate: Attack packet rate curve, in pps.</li></ul>
                     * @return MetricNames <p>List of statistical metrics. Fill in at least 1, and duplication is not allowed.</p><p>Enumeration values:</p><ul><li>ddos_attackMaxBandwidth: Peak attack bandwidth, in bps;</li><li>ddos_attackMaxPackageRate: Peak attack packet rate, in pps;</li><li>ddos_attackBandwidth: Attack bandwidth curve, in bps;</li><li>ddos_attackPackageRate: Attack packet rate curve, in pps.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>List of statistical metrics. Fill in at least 1, and duplication is not allowed.</p><p>Enumeration values:</p><ul><li>ddos_attackMaxBandwidth: Peak attack bandwidth, in bps;</li><li>ddos_attackMaxPackageRate: Peak attack packet rate, in pps;</li><li>ddos_attackBandwidth: Attack bandwidth curve, in bps;</li><li>ddos_attackPackageRate: Attack packet rate curve, in pps.</li></ul>
                     * @param _metricNames <p>List of statistical metrics. Fill in at least 1, and duplication is not allowed.</p><p>Enumeration values:</p><ul><li>ddos_attackMaxBandwidth: Peak attack bandwidth, in bps;</li><li>ddos_attackMaxPackageRate: Peak attack packet rate, in pps;</li><li>ddos_attackBandwidth: Attack bandwidth curve, in bps;</li><li>ddos_attackPackageRate: Attack packet rate curve, in pps.</li></ul>
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取<p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use <code>*</code> instead. To query account-level data, you must have permission for all site resources of this interface.</p>
                     * @return ZoneIds <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use <code>*</code> instead. To query account-level data, you must have permission for all site resources of this interface.</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use <code>*</code> instead. To query account-level data, you must have permission for all site resources of this interface.</p>
                     * @param _zoneIds <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use <code>*</code> instead. To query account-level data, you must have permission for all site resources of this interface.</p>
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
                     * 获取<p>List of DDoS policy group IDs. If not specified, all policy IDs are selected by default.</p>
                     * @return PolicyIds <p>List of DDoS policy group IDs. If not specified, all policy IDs are selected by default.</p>
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置<p>List of DDoS policy group IDs. If not specified, all policy IDs are selected by default.</p>
                     * @param _policyIds <p>List of DDoS policy group IDs. If not specified, all policy IDs are selected by default.</p>
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
                     * 获取<p>Query time granularity. If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.</p><p>Enumeration values:</p><ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>
                     * @return Interval <p>Query time granularity. If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.</p><p>Enumeration values:</p><ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>Query time granularity. If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.</p><p>Enumeration values:</p><ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>
                     * @param _interval <p>Query time granularity. If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.</p><p>Enumeration values:</p><ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Data ownership region.</p><p>Enumeration values:</p><ul><li>overseas: global data (excluding the Chinese mainland);</li><li>mainland: data in the Chinese mainland;</li><li>global: global data.</li></ul><p>Default value: global</p>
                     * @return Area <p>Data ownership region.</p><p>Enumeration values:</p><ul><li>overseas: global data (excluding the Chinese mainland);</li><li>mainland: data in the Chinese mainland;</li><li>global: global data.</li></ul><p>Default value: global</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data ownership region.</p><p>Enumeration values:</p><ul><li>overseas: global data (excluding the Chinese mainland);</li><li>mainland: data in the Chinese mainland;</li><li>global: global data.</li></ul><p>Default value: global</p>
                     * @param _area <p>Data ownership region.</p><p>Enumeration values:</p><ul><li>overseas: global data (excluding the Chinese mainland);</li><li>mainland: data in the Chinese mainland;</li><li>global: global data.</li></ul><p>Default value: global</p>
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
                     * 获取<p>Filter conditions. The maximum number of QueryCondition.Value collections is 20. The detailed filter conditions for QueryCondition.Key values are as follows:</p><li>ddos-attack-dip: filter by DDoS attack destination IP. QueryCondition.Operator only supports equals.</li>
                     * @return Filters <p>Filter conditions. The maximum number of QueryCondition.Value collections is 20. The detailed filter conditions for QueryCondition.Key values are as follows:</p><li>ddos-attack-dip: filter by DDoS attack destination IP. QueryCondition.Operator only supports equals.</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions. The maximum number of QueryCondition.Value collections is 20. The detailed filter conditions for QueryCondition.Key values are as follows:</p><li>ddos-attack-dip: filter by DDoS attack destination IP. QueryCondition.Operator only supports equals.</li>
                     * @param _filters <p>Filter conditions. The maximum number of QueryCondition.Value collections is 20. The detailed filter conditions for QueryCondition.Key values are as follows:</p><li>ddos-attack-dip: filter by DDoS attack destination IP. QueryCondition.Operator only supports equals.</li>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Start time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time. The time is in Coordinated Universal Time (UTC), following the ISO 8601 standard date and time format. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>List of statistical metrics. Fill in at least 1, and duplication is not allowed.</p><p>Enumeration values:</p><ul><li>ddos_attackMaxBandwidth: Peak attack bandwidth, in bps;</li><li>ddos_attackMaxPackageRate: Peak attack packet rate, in pps;</li><li>ddos_attackBandwidth: Attack bandwidth curve, in bps;</li><li>ddos_attackPackageRate: Attack packet rate curve, in pps.</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the announcement: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. You can import up to 100 site IDs. To query all site data under the Tencent Cloud root account, use <code>*</code> instead. To query account-level data, you must have permission for all site resources of this interface.</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>List of DDoS policy group IDs. If not specified, all policy IDs are selected by default.</p>
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * <p>Query time granularity. If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.</p><p>Enumeration values:</p><ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Data ownership region.</p><p>Enumeration values:</p><ul><li>overseas: global data (excluding the Chinese mainland);</li><li>mainland: data in the Chinese mainland;</li><li>global: global data.</li></ul><p>Default value: global</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Filter conditions. The maximum number of QueryCondition.Value collections is 20. The detailed filter conditions for QueryCondition.Key values are as follows:</p><li>ddos-attack-dip: filter by DDoS attack destination IP. QueryCondition.Operator only supports equals.</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDDOSATTACKDATAREQUEST_H_
