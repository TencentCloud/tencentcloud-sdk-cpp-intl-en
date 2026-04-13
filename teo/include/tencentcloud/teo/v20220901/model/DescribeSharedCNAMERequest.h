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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_

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
                * DescribeSharedCNAME request structure.
                */
                class DescribeSharedCNAMERequest : public AbstractModel
                {
                public:
                    DescribeSharedCNAMERequest();
                    ~DescribeSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared CNAME associated site ID.
                     * @return ZoneId Shared CNAME associated site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Shared CNAME associated site ID.
                     * @param _zoneId Shared CNAME associated site ID.
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
                     * 获取Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>shared-cname<br>   Filter by [<strong>shared CNAME</strong>].<br>   Type: String<br>   Required: No</li>
<li>type<br>   Filter by [<strong>shared CNAME type</strong>].<br>   type: String<br>   Required: No</li>
<li>Description<br>   Filter by [<strong>description</strong>].<br>   Type: String<br>   Required: No</li>
                     * @return Filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>shared-cname<br>   Filter by [<strong>shared CNAME</strong>].<br>   Type: String<br>   Required: No</li>
<li>type<br>   Filter by [<strong>shared CNAME type</strong>].<br>   type: String<br>   Required: No</li>
<li>Description<br>   Filter by [<strong>description</strong>].<br>   Type: String<br>   Required: No</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>shared-cname<br>   Filter by [<strong>shared CNAME</strong>].<br>   Type: String<br>   Required: No</li>
<li>type<br>   Filter by [<strong>shared CNAME type</strong>].<br>   type: String<br>   Required: No</li>
<li>Description<br>   Filter by [<strong>description</strong>].<br>   Type: String<br>   Required: No</li>
                     * @param _filters Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>shared-cname<br>   Filter by [<strong>shared CNAME</strong>].<br>   Type: String<br>   Required: No</li>
<li>type<br>   Filter by [<strong>shared CNAME type</strong>].<br>   type: String<br>   Required: No</li>
<li>Description<br>   Filter by [<strong>description</strong>].<br>   Type: String<br>   Required: No</li>
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
                     * 获取List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: Sort in descending order.</li>The default value is `asc`.
                     * @return Direction List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: Sort in descending order.</li>The default value is `asc`.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: Sort in descending order.</li>The default value is `asc`.
                     * @param _direction List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: Sort in descending order.</li>The default value is `asc`.
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
                     * 获取Match mode. Valid values:
<li>all: Returns the shared CNAME that matches all query conditions.</li>
<li>any: Returns the shared CNAME that matches any query condition.</li> Default value is all.
                     * @return Match Match mode. Valid values:
<li>all: Returns the shared CNAME that matches all query conditions.</li>
<li>any: Returns the shared CNAME that matches any query condition.</li> Default value is all.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置Match mode. Valid values:
<li>all: Returns the shared CNAME that matches all query conditions.</li>
<li>any: Returns the shared CNAME that matches any query condition.</li> Default value is all.
                     * @param _match Match mode. Valid values:
<li>all: Returns the shared CNAME that matches all query conditions.</li>
<li>any: Returns the shared CNAME that matches any query condition.</li> Default value is all.
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
                     * 获取Sorting basis. Valid values:
<li>create-time: Creation time;</li>
<li>shared-cname: Shared CNAME.</li> Default sorting order is based on the shared-cname attribute.
                     * @return Order Sorting basis. Valid values:
<li>create-time: Creation time;</li>
<li>shared-cname: Shared CNAME.</li> Default sorting order is based on the shared-cname attribute.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting basis. Valid values:
<li>create-time: Creation time;</li>
<li>shared-cname: Shared CNAME.</li> Default sorting order is based on the shared-cname attribute.
                     * @param _order Sorting basis. Valid values:
<li>create-time: Creation time;</li>
<li>shared-cname: Shared CNAME.</li> Default sorting order is based on the shared-cname attribute.
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
                     * 获取Offset of paginated query. Default value: 0.
                     * @return Offset Offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.
                     * @param _offset Offset of paginated query. Default value: 0.
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
                     * 获取Number limit of paginated query. Default value: 20. Upper limit: 200.
                     * @return Limit Number limit of paginated query. Default value: 20. Upper limit: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Upper limit: 200.
                     * @param _limit Number limit of paginated query. Default value: 20. Upper limit: 200.
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
                     * Shared CNAME associated site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter criteria. The maximum value of Filters.Values is 20. The detailed filter criteria are as follows:
<li>shared-cname<br>   Filter by [<strong>shared CNAME</strong>].<br>   Type: String<br>   Required: No</li>
<li>type<br>   Filter by [<strong>shared CNAME type</strong>].<br>   type: String<br>   Required: No</li>
<li>Description<br>   Filter by [<strong>description</strong>].<br>   Type: String<br>   Required: No</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * List sort method. Valid values:
<li>asc: ascending order;</li>
<li>desc: Sort in descending order.</li>The default value is `asc`.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Match mode. Valid values:
<li>all: Returns the shared CNAME that matches all query conditions.</li>
<li>any: Returns the shared CNAME that matches any query condition.</li> Default value is all.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                    /**
                     * Sorting basis. Valid values:
<li>create-time: Creation time;</li>
<li>shared-cname: Shared CNAME.</li> Default sorting order is based on the shared-cname attribute.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Upper limit: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESHAREDCNAMEREQUEST_H_
