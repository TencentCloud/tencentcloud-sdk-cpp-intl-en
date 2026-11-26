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
                     * 获取<p>Zone ID of the acceleration domain name.</p>
                     * @return ZoneId <p>Zone ID of the acceleration domain name.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID of the acceleration domain name.</p>
                     * @param _zoneId <p>Zone ID of the acceleration domain name.</p>
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
                     * 获取<p>The offset of paginated query. Default value: 0.</p>
                     * @return Offset <p>The offset of paginated query. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>The offset of paginated query. Default value: 0.</p>
                     * @param _offset <p>The offset of paginated query. Default value: 0.</p>
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
                     * 获取<p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * @return Limit <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     * @param _limit <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
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
                     * 获取<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all domain information under the current zone-id is returned. The detailed filter criteria are as follows:</p><li>domain-name: Filter by acceleration domain name;</li><li>origin-type: Filter by origin server type;</li><li>origin: Filter by primary origin server address;</li><li>backup-origin: Filter by secondary origin server address;</li><li>domain-cname: Filter by CNAME;</li><li>share-cname: Filter by shared CNAME;</li>
                     * @return Filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all domain information under the current zone-id is returned. The detailed filter criteria are as follows:</p><li>domain-name: Filter by acceleration domain name;</li><li>origin-type: Filter by origin server type;</li><li>origin: Filter by primary origin server address;</li><li>backup-origin: Filter by secondary origin server address;</li><li>domain-cname: Filter by CNAME;</li><li>share-cname: Filter by shared CNAME;</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all domain information under the current zone-id is returned. The detailed filter criteria are as follows:</p><li>domain-name: Filter by acceleration domain name;</li><li>origin-type: Filter by origin server type;</li><li>origin: Filter by primary origin server address;</li><li>backup-origin: Filter by secondary origin server address;</li><li>domain-cname: Filter by CNAME;</li><li>share-cname: Filter by shared CNAME;</li>
                     * @param _filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all domain information under the current zone-id is returned. The detailed filter criteria are as follows:</p><li>domain-name: Filter by acceleration domain name;</li><li>origin-type: Filter by origin server type;</li><li>origin: Filter by primary origin server address;</li><li>backup-origin: Filter by secondary origin server address;</li><li>domain-cname: Filter by CNAME;</li><li>share-cname: Filter by shared CNAME;</li>
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
                     * 获取<p>Sort returned results by this field. Valid values:</p><li>created_on: acceleration domain name creation time;</li><li>domain-name: acceleration domain name.</li>If left empty, returned results are sorted by domain-name by default.
                     * @return Order <p>Sort returned results by this field. Valid values:</p><li>created_on: acceleration domain name creation time;</li><li>domain-name: acceleration domain name.</li>If left empty, returned results are sorted by domain-name by default.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sort returned results by this field. Valid values:</p><li>created_on: acceleration domain name creation time;</li><li>domain-name: acceleration domain name.</li>If left empty, returned results are sorted by domain-name by default.
                     * @param _order <p>Sort returned results by this field. Valid values:</p><li>created_on: acceleration domain name creation time;</li><li>domain-name: acceleration domain name.</li>If left empty, returned results are sorted by domain-name by default.
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
                     * 获取<p>Sorting order. If the field value is a number, sort by its size. If the field value is text, sort by ASCII code size. Valid values:</p><li>asc: ascending order;</li><li>desc: descending order.</li>Use default value asc if not specified.
                     * @return Direction <p>Sorting order. If the field value is a number, sort by its size. If the field value is text, sort by ASCII code size. Valid values:</p><li>asc: ascending order;</li><li>desc: descending order.</li>Use default value asc if not specified.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>Sorting order. If the field value is a number, sort by its size. If the field value is text, sort by ASCII code size. Valid values:</p><li>asc: ascending order;</li><li>desc: descending order.</li>Use default value asc if not specified.
                     * @param _direction <p>Sorting order. If the field value is a number, sort by its size. If the field value is text, sort by ASCII code size. Valid values:</p><li>asc: ascending order;</li><li>desc: descending order.</li>Use default value asc if not specified.
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
                     * 获取<p>Match mode. Valid values:</p><li>all: return acceleration domain names that match all query conditions;</li><li>any: return acceleration domain names that match any query condition.</li>If left empty, the default value is all.
                     * @return Match <p>Match mode. Valid values:</p><li>all: return acceleration domain names that match all query conditions;</li><li>any: return acceleration domain names that match any query condition.</li>If left empty, the default value is all.
                     * 
                     */
                    std::string GetMatch() const;

                    /**
                     * 设置<p>Match mode. Valid values:</p><li>all: return acceleration domain names that match all query conditions;</li><li>any: return acceleration domain names that match any query condition.</li>If left empty, the default value is all.
                     * @param _match <p>Match mode. Valid values:</p><li>all: return acceleration domain names that match all query conditions;</li><li>any: return acceleration domain names that match any query condition.</li>If left empty, the default value is all.
                     * 
                     */
                    void SetMatch(const std::string& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * <p>Zone ID of the acceleration domain name.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>The offset of paginated query. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Paginated query limit. Default value: 20, maximum value: 200.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all domain information under the current zone-id is returned. The detailed filter criteria are as follows:</p><li>domain-name: Filter by acceleration domain name;</li><li>origin-type: Filter by origin server type;</li><li>origin: Filter by primary origin server address;</li><li>backup-origin: Filter by secondary origin server address;</li><li>domain-cname: Filter by CNAME;</li><li>share-cname: Filter by shared CNAME;</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sort returned results by this field. Valid values:</p><li>created_on: acceleration domain name creation time;</li><li>domain-name: acceleration domain name.</li>If left empty, returned results are sorted by domain-name by default.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting order. If the field value is a number, sort by its size. If the field value is text, sort by ASCII code size. Valid values:</p><li>asc: ascending order;</li><li>desc: descending order.</li>Use default value asc if not specified.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>Match mode. Valid values:</p><li>all: return acceleration domain names that match all query conditions;</li><li>any: return acceleration domain names that match any query condition.</li>If left empty, the default value is all.
                     */
                    std::string m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEACCELERATIONDOMAINSREQUEST_H_
