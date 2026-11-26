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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeOriginProtection request structure.
                */
                class DescribeOriginProtectionRequest : public AbstractModel
                {
                public:
                    DescribeOriginProtectionRequest();
                    ~DescribeOriginProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID set to be queried. This parameter is required.
                     * @return ZoneIds Site ID set to be queried. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set to be queried. This parameter is required.
                     * @param _zoneIds Site ID set to be queried. This parameter is required.
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
                     * 获取Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>need-update<br>        Filter by <strong>whether the site needs to update the origin protection IP allowlist</strong>.<br>       Type: String<br>       Required: No<br>       Option:<br>       true: needs to be updated<br>       false: no update required<br></li>
<li>plan-support<br>   Filter by [<strong>whether the site package supports origin protection</strong>].<br>   Type: String<br>   Required: No<br>   Options:<br>   true: supported<br>   false: not supported<br></li>
                     * @return Filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>need-update<br>        Filter by <strong>whether the site needs to update the origin protection IP allowlist</strong>.<br>       Type: String<br>       Required: No<br>       Option:<br>       true: needs to be updated<br>       false: no update required<br></li>
<li>plan-support<br>   Filter by [<strong>whether the site package supports origin protection</strong>].<br>   Type: String<br>   Required: No<br>   Options:<br>   true: supported<br>   false: not supported<br></li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>need-update<br>        Filter by <strong>whether the site needs to update the origin protection IP allowlist</strong>.<br>       Type: String<br>       Required: No<br>       Option:<br>       true: needs to be updated<br>       false: no update required<br></li>
<li>plan-support<br>   Filter by [<strong>whether the site package supports origin protection</strong>].<br>   Type: String<br>   Required: No<br>   Options:<br>   true: supported<br>   false: not supported<br></li>
                     * @param _filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>need-update<br>        Filter by <strong>whether the site needs to update the origin protection IP allowlist</strong>.<br>       Type: String<br>       Required: No<br>       Option:<br>       true: needs to be updated<br>       false: no update required<br></li>
<li>plan-support<br>   Filter by [<strong>whether the site package supports origin protection</strong>].<br>   Type: String<br>   Required: No<br>   Options:<br>   true: supported<br>   false: not supported<br></li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Paginated query offset. Default value: 0.
                     * @return Offset Paginated query offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset. Default value: 0.
                     * @param _offset Paginated query offset. Default value: 0.
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
                     * 获取The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * @return Limit The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * @param _limit The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Site ID set to be queried. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>need-update<br>        Filter by <strong>whether the site needs to update the origin protection IP allowlist</strong>.<br>       Type: String<br>       Required: No<br>       Option:<br>       true: needs to be updated<br>       false: no update required<br></li>
<li>plan-support<br>   Filter by [<strong>whether the site package supports origin protection</strong>].<br>   Type: String<br>   Required: No<br>   Options:<br>   true: supported<br>   false: not supported<br></li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Paginated query offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit of paginated query. Default value: 20. Maximum value: 1,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINPROTECTIONREQUEST_H_
