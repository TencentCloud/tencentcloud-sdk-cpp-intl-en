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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONRULESREQUEST_H_

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
                * DescribeFunctionRules request structure.
                */
                class DescribeFunctionRulesRequest : public AbstractModel
                {
                public:
                    DescribeFunctionRulesRequest();
                    ~DescribeFunctionRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>rule-id: Exact match by [rule ID].</li>
<li>function-id: Exact match by [function ID].</li>
<li>remark: Fuzzy match by [rule description].</li>
                     * @return Filters Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>rule-id: Exact match by [rule ID].</li>
<li>function-id: Exact match by [function ID].</li>
<li>remark: Fuzzy match by [rule description].</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>rule-id: Exact match by [rule ID].</li>
<li>function-id: Exact match by [function ID].</li>
<li>remark: Fuzzy match by [rule description].</li>
                     * @param _filters Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>rule-id: Exact match by [rule ID].</li>
<li>function-id: Exact match by [function ID].</li>
<li>remark: Fuzzy match by [rule description].</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>rule-id: Exact match by [rule ID].</li>
<li>function-id: Exact match by [function ID].</li>
<li>remark: Fuzzy match by [rule description].</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONRULESREQUEST_H_
