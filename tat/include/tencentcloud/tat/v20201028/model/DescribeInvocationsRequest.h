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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvocations request structure.
                */
                class DescribeInvocationsRequest : public AbstractModel
                {
                public:
                    DescribeInvocationsRequest();
                    ~DescribeInvocationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of execution activity IDs. Up to 100 IDs are allowed for each request. `InvocationIds` and `Filters` cannot be specified at the same time.
                     * @return InvocationIds List of execution activity IDs. Up to 100 IDs are allowed for each request. `InvocationIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetInvocationIds() const;

                    /**
                     * 设置List of execution activity IDs. Up to 100 IDs are allowed for each request. `InvocationIds` and `Filters` cannot be specified at the same time.
                     * @param _invocationIds List of execution activity IDs. Up to 100 IDs are allowed for each request. `InvocationIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetInvocationIds(const std::vector<std::string>& _invocationIds);

                    /**
                     * 判断参数 InvocationIds 是否已赋值
                     * @return InvocationIds 是否已赋值
                     * 
                     */
                    bool InvocationIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions.<br>.

<li> invocation-id - String - required: no - (filter condition) filter by execution activity id.</li>.
<li>command-id - String - required: no - (filter condition) filter by command id.</li>. 
<li> command-created-by - String - required: no - (filter criteria) filter by executed command type. valid values: TAT or USER. TAT represents public command, USER represents USER created command.</li>.
<li> instance-kind - String - required: no - (filtering conditions) filter by running instance type. valid values: CVM or LIGHTHOUSE. CVM represents cloud virtual machine, LIGHTHOUSE represents tencent cloud LIGHTHOUSE.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationIds` and `Filters` parameters cannot be specified at the same time.
                     * @return Filters Filter conditions.<br>.

<li> invocation-id - String - required: no - (filter condition) filter by execution activity id.</li>.
<li>command-id - String - required: no - (filter condition) filter by command id.</li>. 
<li> command-created-by - String - required: no - (filter criteria) filter by executed command type. valid values: TAT or USER. TAT represents public command, USER represents USER created command.</li>.
<li> instance-kind - String - required: no - (filtering conditions) filter by running instance type. valid values: CVM or LIGHTHOUSE. CVM represents cloud virtual machine, LIGHTHOUSE represents tencent cloud LIGHTHOUSE.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions.<br>.

<li> invocation-id - String - required: no - (filter condition) filter by execution activity id.</li>.
<li>command-id - String - required: no - (filter condition) filter by command id.</li>. 
<li> command-created-by - String - required: no - (filter criteria) filter by executed command type. valid values: TAT or USER. TAT represents public command, USER represents USER created command.</li>.
<li> instance-kind - String - required: no - (filtering conditions) filter by running instance type. valid values: CVM or LIGHTHOUSE. CVM represents cloud virtual machine, LIGHTHOUSE represents tencent cloud LIGHTHOUSE.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationIds` and `Filters` parameters cannot be specified at the same time.
                     * @param _filters Filter conditions.<br>.

<li> invocation-id - String - required: no - (filter condition) filter by execution activity id.</li>.
<li>command-id - String - required: no - (filter condition) filter by command id.</li>. 
<li> command-created-by - String - required: no - (filter criteria) filter by executed command type. valid values: TAT or USER. TAT represents public command, USER represents USER created command.</li>.
<li> instance-kind - String - required: no - (filtering conditions) filter by running instance type. valid values: CVM or LIGHTHOUSE. CVM represents cloud virtual machine, LIGHTHOUSE represents tencent cloud LIGHTHOUSE.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationIds` and `Filters` parameters cannot be specified at the same time.
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
                     * 获取Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * List of execution activity IDs. Up to 100 IDs are allowed for each request. `InvocationIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_invocationIds;
                    bool m_invocationIdsHasBeenSet;

                    /**
                     * Filter conditions.<br>.

<li> invocation-id - String - required: no - (filter condition) filter by execution activity id.</li>.
<li>command-id - String - required: no - (filter condition) filter by command id.</li>. 
<li> command-created-by - String - required: no - (filter criteria) filter by executed command type. valid values: TAT or USER. TAT represents public command, USER represents USER created command.</li>.
<li> instance-kind - String - required: no - (filtering conditions) filter by running instance type. valid values: CVM or LIGHTHOUSE. CVM represents cloud virtual machine, LIGHTHOUSE represents tencent cloud LIGHTHOUSE.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationIds` and `Filters` parameters cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
