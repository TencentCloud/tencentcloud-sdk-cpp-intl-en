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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESREQUEST_H_

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
                * DescribeL7AccRules request structure.
                */
                class DescribeL7AccRulesRequest : public AbstractModel
                {
                public:
                    DescribeL7AccRulesRequest();
                    ~DescribeL7AccRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone id.
                     * @return ZoneId Zone id.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
                     * @param _zoneId Zone id.
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
                     * 获取Filter conditions. the upper limit for filters.values is 20. if this parameter is not filled in, the rules under the site are returned in order by default. detailed filtering conditions are as follows:.
<Li>Rule-Id: filter by rule id.</li>.
                     * @return Filters Filter conditions. the upper limit for filters.values is 20. if this parameter is not filled in, the rules under the site are returned in order by default. detailed filtering conditions are as follows:.
<Li>Rule-Id: filter by rule id.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. the upper limit for filters.values is 20. if this parameter is not filled in, the rules under the site are returned in order by default. detailed filtering conditions are as follows:.
<Li>Rule-Id: filter by rule id.</li>.
                     * @param _filters Filter conditions. the upper limit for filters.values is 20. if this parameter is not filled in, the rules under the site are returned in order by default. detailed filtering conditions are as follows:.
<Li>Rule-Id: filter by rule id.</li>.
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
                     * 获取Number limit of paginated query. default value: 20. maximum value: 1000.
                     * @return Limit Number limit of paginated query. default value: 20. maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. default value: 20. maximum value: 1000.
                     * @param _limit Number limit of paginated query. default value: 20. maximum value: 1000.
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
                     * 获取Offset of paginated query. default value: 0.
                     * @return Offset Offset of paginated query. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. default value: 0.
                     * @param _offset Offset of paginated query. default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter conditions. the upper limit for filters.values is 20. if this parameter is not filled in, the rules under the site are returned in order by default. detailed filtering conditions are as follows:.
<Li>Rule-Id: filter by rule id.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number limit of paginated query. default value: 20. maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset of paginated query. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESREQUEST_H_
