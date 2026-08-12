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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_

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
                * DescribeVulRiskRelateHost request structure.
                */
                class DescribeVulRiskRelateHostRequest : public AbstractModel
                {
                public:
                    DescribeVulRiskRelateHostRequest();
                    ~DescribeVulRiskRelateHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>p>KB patch internal ID (kb_info.id)</p>
                     * @return KBID <p>p>KB patch internal ID (kb_info.id)</p>
                     * 
                     */
                    uint64_t GetKBID() const;

                    /**
                     * 设置<p>p>KB patch internal ID (kb_info.id)</p>
                     * @param _kBID <p>p>KB patch internal ID (kb_info.id)</p>
                     * 
                     */
                    void SetKBID(const uint64_t& _kBID);

                    /**
                     * 判断参数 KBID 是否已赋值
                     * @return KBID 是否已赋值
                     * 
                     */
                    bool KBIDHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability ID (vul_vuls.id)</p>
                     * @return VulID <p>Vulnerability ID (vul_vuls.id)</p>
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置<p>Vulnerability ID (vul_vuls.id)</p>
                     * @param _vulID <p>Vulnerability ID (vul_vuls.id)</p>
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter conditions array. Multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>Keyword: Keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)<br>CloudTag: Cloud tag<br>Tag: Security center tag</p>
                     * @return Filters <p>Filter conditions array. Multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>Keyword: Keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)<br>CloudTag: Cloud tag<br>Tag: Security center tag</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions array. Multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>Keyword: Keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)<br>CloudTag: Cloud tag<br>Tag: Security center tag</p>
                     * @param _filters <p>Filter conditions array. Multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>Keyword: Keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)<br>CloudTag: Cloud tag<br>Tag: Security center tag</p>
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
                     * 获取<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @return Limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @param _limit <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
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
                     * 获取<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @return Offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     * @param _offset <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
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
                     * 获取<p>Sorting order<br>Enumeration value:<br>ASC: Ascending<br>DESC: Descending order<br>Default value: DESC</p>
                     * @return Order <p>Sorting order<br>Enumeration value:<br>ASC: Ascending<br>DESC: Descending order<br>Default value: DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order<br>Enumeration value:<br>ASC: Ascending<br>DESC: Descending order<br>Default value: DESC</p>
                     * @param _order <p>Sorting order<br>Enumeration value:<br>ASC: Ascending<br>DESC: Descending order<br>Default value: DESC</p>
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
                     * 获取<p>Sorting field<br>Enumeration value:<br>LatestScanTime: Latest scan time<br>VPRLevel: VPR rating<br>RiskStatus: Remediation status<br>Default value: LatestScanTime</p>
                     * @return By <p>Sorting field<br>Enumeration value:<br>LatestScanTime: Latest scan time<br>VPRLevel: VPR rating<br>RiskStatus: Remediation status<br>Default value: LatestScanTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field<br>Enumeration value:<br>LatestScanTime: Latest scan time<br>VPRLevel: VPR rating<br>RiskStatus: Remediation status<br>Default value: LatestScanTime</p>
                     * @param _by <p>Sorting field<br>Enumeration value:<br>LatestScanTime: Latest scan time<br>VPRLevel: VPR rating<br>RiskStatus: Remediation status<br>Default value: LatestScanTime</p>
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
                     * <p>p>KB patch internal ID (kb_info.id)</p>
                     */
                    uint64_t m_kBID;
                    bool m_kBIDHasBeenSet;

                    /**
                     * <p>Vulnerability ID (vul_vuls.id)</p>
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter conditions array. Multi-condition with each other is AND relationship<br>Supported Filter.Name:<br>Keyword: Keyword fuzzy search (fuzzy matching for host name/IP/InstanceID)<br>CloudTag: Cloud tag<br>Tag: Security center tag</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of results per page<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paging offset<br>Value ranges from 0 to +∞<br>Default value: 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order<br>Enumeration value:<br>ASC: Ascending<br>DESC: Descending order<br>Default value: DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field<br>Enumeration value:<br>LatestScanTime: Latest scan time<br>VPRLevel: VPR rating<br>RiskStatus: Remediation status<br>Default value: LatestScanTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKRELATEHOSTREQUEST_H_
