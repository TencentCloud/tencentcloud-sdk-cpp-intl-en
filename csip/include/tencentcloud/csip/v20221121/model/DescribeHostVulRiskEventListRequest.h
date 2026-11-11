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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULRISKEVENTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULRISKEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeHostVulRiskEventList request structure.
                */
                class DescribeHostVulRiskEventListRequest : public AbstractModel
                {
                public:
                    DescribeHostVulRiskEventListRequest();
                    ~DescribeHostVulRiskEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pagination offset.<br>Value range: [0, +∞).<br>Default value: 0.</p>
                     * @return Offset <p>Pagination offset.<br>Value range: [0, +∞).<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset.<br>Value range: [0, +∞).<br>Default value: 0.</p>
                     * @param _offset <p>Pagination offset.<br>Value range: [0, +∞).<br>Default value: 0.</p>
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
                     * 获取<p>Number of returned items per page.<br>Value range: [1, 100].<br>Default value: 10.</p>
                     * @return Limit <p>Number of returned items per page.<br>Value range: [1, 100].<br>Default value: 10.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned items per page.<br>Value range: [1, 100].<br>Default value: 10.</p>
                     * @param _limit <p>Number of returned items per page.<br>Value range: [1, 100].<br>Default value: 10.</p>
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
                     * 获取<p>Filter.Name supported by Filter criteria: VulName - fuzzy matching, search by vulnerability Name. Category - exact matching, Filter by vulnerability Category: LINUX-LINUX software vulnerability, WINDOWS-WINDOWS system patch vulnerability, WEB_CMS-WEB-CMS vulnerability, APPLICATION-APPLICATION vulnerability, EMERGENCY-URGENT vulnerability. RiskStatus - exact matching, Filter by risk status: PENDING-PENDING, HANDLED-processed, FIXED-FIXED, SCANNING-rechecking, IGNORED-IGNORED, NOT_REQUIRED-no action is REQUIRED, DELETED-DELETED, FIXING-in remediation, NEED_REBOOT-FIXED PENDING restart, FIX_FAILED-FIX failure. Level - exact matching, Filter by vulnerability severity Level: UNKNOWN-unavailable, LOW-LOW risk, MEDIUM-MEDIUM risk, HIGH-HIGH risk, CRITICAL-CRITICAL. CVSSLevel - exact matching, compatible field, equivalent to Level. VPRLevel - exact matching, Filter by VPR repair priority: DEFERRABLE-DEFERRABLE repair, PLANNED-PLANNED repair, SOON-repair as SOON as possible, URGENT-URGENT repair. - exact matching, Filter by vulnerability ID. InstanceID - exact matching, Filter by CVM instance ID. InstanceID - exact matching, compatible field, equivalent to InstanceID. UUID - exact matching, Filter by host security UUID. LatestScanTimeStart - range matching, latest scan time start, format: YYYY-MM-DD HH:MM:ss. LatestScanTimeEnd - range matching, latest scan time end, format: YYYY-MM-DD HH:MM:ss</p>
                     * @return Filters <p>Filter.Name supported by Filter criteria: VulName - fuzzy matching, search by vulnerability Name. Category - exact matching, Filter by vulnerability Category: LINUX-LINUX software vulnerability, WINDOWS-WINDOWS system patch vulnerability, WEB_CMS-WEB-CMS vulnerability, APPLICATION-APPLICATION vulnerability, EMERGENCY-URGENT vulnerability. RiskStatus - exact matching, Filter by risk status: PENDING-PENDING, HANDLED-processed, FIXED-FIXED, SCANNING-rechecking, IGNORED-IGNORED, NOT_REQUIRED-no action is REQUIRED, DELETED-DELETED, FIXING-in remediation, NEED_REBOOT-FIXED PENDING restart, FIX_FAILED-FIX failure. Level - exact matching, Filter by vulnerability severity Level: UNKNOWN-unavailable, LOW-LOW risk, MEDIUM-MEDIUM risk, HIGH-HIGH risk, CRITICAL-CRITICAL. CVSSLevel - exact matching, compatible field, equivalent to Level. VPRLevel - exact matching, Filter by VPR repair priority: DEFERRABLE-DEFERRABLE repair, PLANNED-PLANNED repair, SOON-repair as SOON as possible, URGENT-URGENT repair. - exact matching, Filter by vulnerability ID. InstanceID - exact matching, Filter by CVM instance ID. InstanceID - exact matching, compatible field, equivalent to InstanceID. UUID - exact matching, Filter by host security UUID. LatestScanTimeStart - range matching, latest scan time start, format: YYYY-MM-DD HH:MM:ss. LatestScanTimeEnd - range matching, latest scan time end, format: YYYY-MM-DD HH:MM:ss</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter.Name supported by Filter criteria: VulName - fuzzy matching, search by vulnerability Name. Category - exact matching, Filter by vulnerability Category: LINUX-LINUX software vulnerability, WINDOWS-WINDOWS system patch vulnerability, WEB_CMS-WEB-CMS vulnerability, APPLICATION-APPLICATION vulnerability, EMERGENCY-URGENT vulnerability. RiskStatus - exact matching, Filter by risk status: PENDING-PENDING, HANDLED-processed, FIXED-FIXED, SCANNING-rechecking, IGNORED-IGNORED, NOT_REQUIRED-no action is REQUIRED, DELETED-DELETED, FIXING-in remediation, NEED_REBOOT-FIXED PENDING restart, FIX_FAILED-FIX failure. Level - exact matching, Filter by vulnerability severity Level: UNKNOWN-unavailable, LOW-LOW risk, MEDIUM-MEDIUM risk, HIGH-HIGH risk, CRITICAL-CRITICAL. CVSSLevel - exact matching, compatible field, equivalent to Level. VPRLevel - exact matching, Filter by VPR repair priority: DEFERRABLE-DEFERRABLE repair, PLANNED-PLANNED repair, SOON-repair as SOON as possible, URGENT-URGENT repair. - exact matching, Filter by vulnerability ID. InstanceID - exact matching, Filter by CVM instance ID. InstanceID - exact matching, compatible field, equivalent to InstanceID. UUID - exact matching, Filter by host security UUID. LatestScanTimeStart - range matching, latest scan time start, format: YYYY-MM-DD HH:MM:ss. LatestScanTimeEnd - range matching, latest scan time end, format: YYYY-MM-DD HH:MM:ss</p>
                     * @param _filters <p>Filter.Name supported by Filter criteria: VulName - fuzzy matching, search by vulnerability Name. Category - exact matching, Filter by vulnerability Category: LINUX-LINUX software vulnerability, WINDOWS-WINDOWS system patch vulnerability, WEB_CMS-WEB-CMS vulnerability, APPLICATION-APPLICATION vulnerability, EMERGENCY-URGENT vulnerability. RiskStatus - exact matching, Filter by risk status: PENDING-PENDING, HANDLED-processed, FIXED-FIXED, SCANNING-rechecking, IGNORED-IGNORED, NOT_REQUIRED-no action is REQUIRED, DELETED-DELETED, FIXING-in remediation, NEED_REBOOT-FIXED PENDING restart, FIX_FAILED-FIX failure. Level - exact matching, Filter by vulnerability severity Level: UNKNOWN-unavailable, LOW-LOW risk, MEDIUM-MEDIUM risk, HIGH-HIGH risk, CRITICAL-CRITICAL. CVSSLevel - exact matching, compatible field, equivalent to Level. VPRLevel - exact matching, Filter by VPR repair priority: DEFERRABLE-DEFERRABLE repair, PLANNED-PLANNED repair, SOON-repair as SOON as possible, URGENT-URGENT repair. - exact matching, Filter by vulnerability ID. InstanceID - exact matching, Filter by CVM instance ID. InstanceID - exact matching, compatible field, equivalent to InstanceID. UUID - exact matching, Filter by host security UUID. LatestScanTimeStart - range matching, latest scan time start, format: YYYY-MM-DD HH:MM:ss. LatestScanTimeEnd - range matching, latest scan time end, format: YYYY-MM-DD HH:MM:ss</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Sorting order.<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc.</p>
                     * @return Order <p>Sorting order.<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order.<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc.</p>
                     * @param _order <p>Sorting order.<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc.</p>
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
                     * 获取<p>Sorting field<br>Enumeration values:<br>LatestScanTime: sort by latest scan time<br>Level: sort by threat level<br>VPRLevel: sort by VPR rating<br>RiskStatus: sort by risk status<br>VulID: sort by vulnerability ID<br>InstanceID: sort by instance ID<br>Default value: LatestScanTime</p>
                     * @return By <p>Sorting field<br>Enumeration values:<br>LatestScanTime: sort by latest scan time<br>Level: sort by threat level<br>VPRLevel: sort by VPR rating<br>RiskStatus: sort by risk status<br>VulID: sort by vulnerability ID<br>InstanceID: sort by instance ID<br>Default value: LatestScanTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field<br>Enumeration values:<br>LatestScanTime: sort by latest scan time<br>Level: sort by threat level<br>VPRLevel: sort by VPR rating<br>RiskStatus: sort by risk status<br>VulID: sort by vulnerability ID<br>InstanceID: sort by instance ID<br>Default value: LatestScanTime</p>
                     * @param _by <p>Sorting field<br>Enumeration values:<br>LatestScanTime: sort by latest scan time<br>Level: sort by threat level<br>VPRLevel: sort by VPR rating<br>RiskStatus: sort by risk status<br>VulID: sort by vulnerability ID<br>InstanceID: sort by instance ID<br>Default value: LatestScanTime</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Pagination offset.<br>Value range: [0, +∞).<br>Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned items per page.<br>Value range: [1, 100].<br>Default value: 10.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter.Name supported by Filter criteria: VulName - fuzzy matching, search by vulnerability Name. Category - exact matching, Filter by vulnerability Category: LINUX-LINUX software vulnerability, WINDOWS-WINDOWS system patch vulnerability, WEB_CMS-WEB-CMS vulnerability, APPLICATION-APPLICATION vulnerability, EMERGENCY-URGENT vulnerability. RiskStatus - exact matching, Filter by risk status: PENDING-PENDING, HANDLED-processed, FIXED-FIXED, SCANNING-rechecking, IGNORED-IGNORED, NOT_REQUIRED-no action is REQUIRED, DELETED-DELETED, FIXING-in remediation, NEED_REBOOT-FIXED PENDING restart, FIX_FAILED-FIX failure. Level - exact matching, Filter by vulnerability severity Level: UNKNOWN-unavailable, LOW-LOW risk, MEDIUM-MEDIUM risk, HIGH-HIGH risk, CRITICAL-CRITICAL. CVSSLevel - exact matching, compatible field, equivalent to Level. VPRLevel - exact matching, Filter by VPR repair priority: DEFERRABLE-DEFERRABLE repair, PLANNED-PLANNED repair, SOON-repair as SOON as possible, URGENT-URGENT repair. - exact matching, Filter by vulnerability ID. InstanceID - exact matching, Filter by CVM instance ID. InstanceID - exact matching, compatible field, equivalent to InstanceID. UUID - exact matching, Filter by host security UUID. LatestScanTimeStart - range matching, latest scan time start, format: YYYY-MM-DD HH:MM:ss. LatestScanTimeEnd - range matching, latest scan time end, format: YYYY-MM-DD HH:MM:ss</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting order.<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field<br>Enumeration values:<br>LatestScanTime: sort by latest scan time<br>Level: sort by threat level<br>VPRLevel: sort by VPR rating<br>RiskStatus: sort by risk status<br>VulID: sort by vulnerability ID<br>InstanceID: sort by instance ID<br>Default value: LatestScanTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULRISKEVENTLISTREQUEST_H_
