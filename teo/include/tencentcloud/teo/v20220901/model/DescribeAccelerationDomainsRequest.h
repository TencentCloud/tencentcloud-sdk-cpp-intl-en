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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAccelerationDomains request structure.
                */
                class DescribeAccelerationDomainsRequest : public AbstractModel
                {
                public:
                    DescribeAccelerationDomainsRequest();
                    ~DescribeAccelerationDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID of the accelerated domain name. If it’s not specified, all accelerated domain names under the site are returned.
                     * @return ZoneId Site ID of the accelerated domain name. If it’s not specified, all accelerated domain names under the site are returned.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID of the accelerated domain name. If it’s not specified, all accelerated domain names under the site are returned.
                     * @param _zoneId Site ID of the accelerated domain name. If it’s not specified, all accelerated domain names under the site are returned.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Filters. Each filter can have up to 20 entries. See below for details: 
<li>`domain-name`:<br>   <strong>Accelerated domain name</strong><br>   Type: String<br>Required: No 
<li>`origin-type`:<br>   <strong>Type of the origin</strong><br>   Type: String<br>   Required: No 
<li>`origin`:<br>   <strong>Primary origin</strong><br>   Type: String<br>   Required: No 
<li>`backup-origin`:<br>   <strong>Secondary origin</strong><br>   Type: String<br>   Required: No 
<li>`domain-cname`:<br>   <strong>Accelerated CNAME</strong><br>   Type: String<br>   Required: No 
<li>`share-cname`:<br>   <strong> Shared CNAME</strong><br>   Type: String<br>   Required: No
                     * @return Filters Filters. Each filter can have up to 20 entries. See below for details: 
<li>`domain-name`:<br>   <strong>Accelerated domain name</strong><br>   Type: String<br>Required: No 
<li>`origin-type`:<br>   <strong>Type of the origin</strong><br>   Type: String<br>   Required: No 
<li>`origin`:<br>   <strong>Primary origin</strong><br>   Type: String<br>   Required: No 
<li>`backup-origin`:<br>   <strong>Secondary origin</strong><br>   Type: String<br>   Required: No 
<li>`domain-cname`:<br>   <strong>Accelerated CNAME</strong><br>   Type: String<br>   Required: No 
<li>`share-cname`:<br>   <strong> Shared CNAME</strong><br>   Type: String<br>   Required: No
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filters. Each filter can have up to 20 entries. See below for details: 
<li>`domain-name`:<br>   <strong>Accelerated domain name</strong><br>   Type: String<br>Required: No 
<li>`origin-type`:<br>   <strong>Type of the origin</strong><br>   Type: String<br>   Required: No 
<li>`origin`:<br>   <strong>Primary origin</strong><br>   Type: String<br>   Required: No 
<li>`backup-origin`:<br>   <strong>Secondary origin</strong><br>   Type: String<br>   Required: No 
<li>`domain-cname`:<br>   <strong>Accelerated CNAME</strong><br>   Type: String<br>   Required: No 
<li>`share-cname`:<br>   <strong> Shared CNAME</strong><br>   Type: String<br>   Required: No
                     * @param _filters Filters. Each filter can have up to 20 entries. See below for details: 
<li>`domain-name`:<br>   <strong>Accelerated domain name</strong><br>   Type: String<br>Required: No 
<li>`origin-type`:<br>   <strong>Type of the origin</strong><br>   Type: String<br>   Required: No 
<li>`origin`:<br>   <strong>Primary origin</strong><br>   Type: String<br>   Required: No 
<li>`backup-origin`:<br>   <strong>Secondary origin</strong><br>   Type: String<br>   Required: No 
<li>`domain-cname`:<br>   <strong>Accelerated CNAME</strong><br>   Type: String<br>   Required: No 
<li>`share-cname`:<br>   <strong> Shared CNAME</strong><br>   Type: String<br>   Required: No
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The sorting order. Values:
<li>`asc`: Ascending order.</li>
<li>`desc`: Descending order.</li>Default value: `asc`.
                     * @return Direction The sorting order. Values:
<li>`asc`: Ascending order.</li>
<li>`desc`: Descending order.</li>Default value: `asc`.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置The sorting order. Values:
<li>`asc`: Ascending order.</li>
<li>`desc`: Descending order.</li>Default value: `asc`.
                     * @param _direction The sorting order. Values:
<li>`asc`: Ascending order.</li>
<li>`desc`: Descending order.</li>Default value: `asc`.
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取The match mode. Values:
<li>`all`: Return all matches.</li>
<li>`any`: Return any match.</li>Default value: `all`.
                     * @return Match The match mode. Values:
<li>`all`: Return all matches.</li>
<li>`any`: Return any match.</li>Default value: `all`.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置The match mode. Values:
<li>`all`: Return all matches.</li>
<li>`any`: Return any match.</li>Default value: `all`.
                     * @param _match The match mode. Values:
<li>`all`: Return all matches.</li>
<li>`any`: Return any match.</li>Default value: `all`.
                     * 
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20. Maximum value: 200.
                     * @return Limit Limit on paginated queries. Default value: 20. Maximum value: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20. Maximum value: 200.
                     * @param _limit Limit on paginated queries. Default value: 20. Maximum value: 200.
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
                     * 获取Offset for paginated queries. Default value: 0.
                     * @return Offset Offset for paginated queries. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0.
                     * @param _offset Offset for paginated queries. Default value: 0.
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
                     * 获取The sorting criteria. Values:
<li>`created_on`: Creation time of the accelerated domain name.</li>
<li>`domain-name`: Acceleration domain name.</li>
</li>Default value: `domain-name`.
                     * @return Order The sorting criteria. Values:
<li>`created_on`: Creation time of the accelerated domain name.</li>
<li>`domain-name`: Acceleration domain name.</li>
</li>Default value: `domain-name`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置The sorting criteria. Values:
<li>`created_on`: Creation time of the accelerated domain name.</li>
<li>`domain-name`: Acceleration domain name.</li>
</li>Default value: `domain-name`.
                     * @param _order The sorting criteria. Values:
<li>`created_on`: Creation time of the accelerated domain name.</li>
<li>`domain-name`: Acceleration domain name.</li>
</li>Default value: `domain-name`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Site ID of the accelerated domain name. If it’s not specified, all accelerated domain names under the site are returned.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filters. Each filter can have up to 20 entries. See below for details: 
<li>`domain-name`:<br>   <strong>Accelerated domain name</strong><br>   Type: String<br>Required: No 
<li>`origin-type`:<br>   <strong>Type of the origin</strong><br>   Type: String<br>   Required: No 
<li>`origin`:<br>   <strong>Primary origin</strong><br>   Type: String<br>   Required: No 
<li>`backup-origin`:<br>   <strong>Secondary origin</strong><br>   Type: String<br>   Required: No 
<li>`domain-cname`:<br>   <strong>Accelerated CNAME</strong><br>   Type: String<br>   Required: No 
<li>`share-cname`:<br>   <strong> Shared CNAME</strong><br>   Type: String<br>   Required: No
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The sorting order. Values:
<li>`asc`: Ascending order.</li>
<li>`desc`: Descending order.</li>Default value: `asc`.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * The match mode. Values:
<li>`all`: Return all matches.</li>
<li>`any`: Return any match.</li>Default value: `all`.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 20. Maximum value: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The sorting criteria. Values:
<li>`created_on`: Creation time of the accelerated domain name.</li>
<li>`domain-name`: Acceleration domain name.</li>
</li>Default value: `domain-name`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_
