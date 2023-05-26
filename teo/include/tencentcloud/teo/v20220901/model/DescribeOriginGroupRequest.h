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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_

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
                * DescribeOriginGroup request structure.
                */
                class DescribeOriginGroupRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupRequest();
                    ~DescribeOriginGroupRequest() = default;
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
                     * 获取Filters. Each filter can have up to 20 entries. See below for details:
<li>`zone-id`<br>   Filter by the specified <strong>site ID</strong>, such as zone-20hzkd4rdmy0<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-id`:<br>   Filter by the specified <strong>origin group ID</strong>, such as origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-name`:<br>   Filter by the specified <strong>origin group name</strong><br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one origin group name allowed in a query)</li>
                     * @return Filters Filters. Each filter can have up to 20 entries. See below for details:
<li>`zone-id`<br>   Filter by the specified <strong>site ID</strong>, such as zone-20hzkd4rdmy0<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-id`:<br>   Filter by the specified <strong>origin group ID</strong>, such as origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-name`:<br>   Filter by the specified <strong>origin group name</strong><br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one origin group name allowed in a query)</li>
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filters. Each filter can have up to 20 entries. See below for details:
<li>`zone-id`<br>   Filter by the specified <strong>site ID</strong>, such as zone-20hzkd4rdmy0<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-id`:<br>   Filter by the specified <strong>origin group ID</strong>, such as origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-name`:<br>   Filter by the specified <strong>origin group name</strong><br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one origin group name allowed in a query)</li>
                     * @param Filters Filters. Each filter can have up to 20 entries. See below for details:
<li>`zone-id`<br>   Filter by the specified <strong>site ID</strong>, such as zone-20hzkd4rdmy0<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-id`:<br>   Filter by the specified <strong>origin group ID</strong>, such as origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-name`:<br>   Filter by the specified <strong>origin group name</strong><br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one origin group name allowed in a query)</li>
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
                     * Filters. Each filter can have up to 20 entries. See below for details:
<li>`zone-id`<br>   Filter by the specified <strong>site ID</strong>, such as zone-20hzkd4rdmy0<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-id`:<br>   Filter by the specified <strong>origin group ID</strong>, such as origin-2ccgtb24-7dc5-46s2-9r3e-95825d53dwe3a<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported</li><li>`origin-group-name`:<br>   Filter by the specified <strong>origin group name</strong><br>   Type: String<br>   Required: No<br>   Fuzzy query: Supported (only one origin group name allowed in a query)</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
