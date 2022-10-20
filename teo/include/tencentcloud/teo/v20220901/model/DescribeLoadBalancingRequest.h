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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_

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
                * DescribeLoadBalancing request structure.
                */
                class DescribeLoadBalancingRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancingRequest();
                    ~DescribeLoadBalancingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset for paginated queries. Default value: 0.
                     * @return Offset Offset for paginated queries. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0.
                     * @param Offset Offset for paginated queries. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Value range: 1-1000. Default value: 10.
                     * @return Limit Limit on paginated queries. Value range: 1-1000. Default value: 10.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Value range: 1-1000. Default value: 10.
                     * @param Limit Limit on paginated queries. Value range: 1-1000. Default value: 10.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-1a8df68z<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`load-balancing-id`<br>   Filter by <strong>load balancer ID</strong>, such as lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`host`:<br>   Filter by <strong>load balancing hostname</strong>, such as lb.tencent.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one hostname allowed in a query)
                     * @return Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-1a8df68z<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`load-balancing-id`<br>   Filter by <strong>load balancer ID</strong>, such as lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`host`:<br>   Filter by <strong>load balancing hostname</strong>, such as lb.tencent.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one hostname allowed in a query)
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-1a8df68z<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`load-balancing-id`<br>   Filter by <strong>load balancer ID</strong>, such as lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`host`:<br>   Filter by <strong>load balancing hostname</strong>, such as lb.tencent.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one hostname allowed in a query)
                     * @param Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-1a8df68z<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`load-balancing-id`<br>   Filter by <strong>load balancer ID</strong>, such as lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`host`:<br>   Filter by <strong>load balancing hostname</strong>, such as lb.tencent.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one hostname allowed in a query)
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Offset for paginated queries. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. Value range: 1-1000. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-1a8df68z<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`load-balancing-id`<br>   Filter by <strong>load balancer ID</strong>, such as lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported
<li>`host`:<br>   Filter by <strong>load balancing hostname</strong>, such as lb.tencent.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one hostname allowed in a query)
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_
