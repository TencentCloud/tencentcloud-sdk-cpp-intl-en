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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBMANAGEDRULESLOGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBMANAGEDRULESLOGREQUEST_H_

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
                * DescribeWebManagedRulesLog request structure.
                */
                class DescribeWebManagedRulesLogRequest : public AbstractModel
                {
                public:
                    DescribeWebManagedRulesLogRequest();
                    ~DescribeWebManagedRulesLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param _startTime The start time.
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
                     * 获取The end time.
                     * @return EndTime The end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param _endTime The end time.
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
                     * 获取List of sites to be queried. All sites will be selected if this field is not specified.
                     * @return ZoneIds List of sites to be queried. All sites will be selected if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of sites to be queried. All sites will be selected if this field is not specified.
                     * @param _zoneIds List of sites to be queried. All sites will be selected if this field is not specified.
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
                     * 获取List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @return Domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @param _domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @return Limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     * @param _limit Limit on paginated queries. Default value: 20. Maximum value: 1000.
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
                     * 获取The page offset. Default value: 0.
                     * @return Offset The page offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0.
                     * @param _offset The page offset. Default value: 0.
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
                     * 获取Filters for the query. Values:
<li>`attackType`: Attack type</li>
<li>`riskLevel`: Risk level</li>
<li>`action`: Action</li>
<li>`ruleId`: Rule ID</li>
<li>`sipCountryCode`: Country code of the attacker IP</li>
<li>`attackIp`: Attacker IP</li>
<li>`realClientIp`: Real client IP</li>
<li>`oriDomain`: Attacked subdomain name</li>
<li>`eventId`: Event ID</li>
<li>`ua`: User agent</li>
<li>`requestMethod`: Request method</li>
<li>`uri`: Uniform resource identifier</li>
                     * @return QueryCondition Filters for the query. Values:
<li>`attackType`: Attack type</li>
<li>`riskLevel`: Risk level</li>
<li>`action`: Action</li>
<li>`ruleId`: Rule ID</li>
<li>`sipCountryCode`: Country code of the attacker IP</li>
<li>`attackIp`: Attacker IP</li>
<li>`realClientIp`: Real client IP</li>
<li>`oriDomain`: Attacked subdomain name</li>
<li>`eventId`: Event ID</li>
<li>`ua`: User agent</li>
<li>`requestMethod`: Request method</li>
<li>`uri`: Uniform resource identifier</li>
                     * 
                     */
                    std::vector<QueryCondition> GetQueryCondition() const;

                    /**
                     * 设置Filters for the query. Values:
<li>`attackType`: Attack type</li>
<li>`riskLevel`: Risk level</li>
<li>`action`: Action</li>
<li>`ruleId`: Rule ID</li>
<li>`sipCountryCode`: Country code of the attacker IP</li>
<li>`attackIp`: Attacker IP</li>
<li>`realClientIp`: Real client IP</li>
<li>`oriDomain`: Attacked subdomain name</li>
<li>`eventId`: Event ID</li>
<li>`ua`: User agent</li>
<li>`requestMethod`: Request method</li>
<li>`uri`: Uniform resource identifier</li>
                     * @param _queryCondition Filters for the query. Values:
<li>`attackType`: Attack type</li>
<li>`riskLevel`: Risk level</li>
<li>`action`: Action</li>
<li>`ruleId`: Rule ID</li>
<li>`sipCountryCode`: Country code of the attacker IP</li>
<li>`attackIp`: Attacker IP</li>
<li>`realClientIp`: Real client IP</li>
<li>`oriDomain`: Attacked subdomain name</li>
<li>`eventId`: Event ID</li>
<li>`ua`: User agent</li>
<li>`requestMethod`: Request method</li>
<li>`uri`: Uniform resource identifier</li>
                     * 
                     */
                    void SetQueryCondition(const std::vector<QueryCondition>& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     * 
                     */
                    bool QueryConditionHasBeenSet() const;

                    /**
                     * 获取Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @return Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @param _area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filters for the query. Values:
<li>`attackType`: Attack type</li>
<li>`riskLevel`: Risk level</li>
<li>`action`: Action</li>
<li>`ruleId`: Rule ID</li>
<li>`sipCountryCode`: Country code of the attacker IP</li>
<li>`attackIp`: Attacker IP</li>
<li>`realClientIp`: Real client IP</li>
<li>`oriDomain`: Attacked subdomain name</li>
<li>`eventId`: Event ID</li>
<li>`ua`: User agent</li>
<li>`requestMethod`: Request method</li>
<li>`uri`: Uniform resource identifier</li>
                     */
                    std::vector<QueryCondition> m_queryCondition;
                    bool m_queryConditionHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBMANAGEDRULESLOGREQUEST_H_
