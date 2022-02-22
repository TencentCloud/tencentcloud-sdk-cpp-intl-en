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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCrossTargets request structure.
                */
                class DescribeCrossTargetsRequest : public AbstractModel
                {
                public:
                    DescribeCrossTargetsRequest();
                    ~DescribeCrossTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of real server lists returned. Default value: 20; maximum value: 100.
                     * @return Limit Number of real server lists returned. Default value: 20; maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of real server lists returned. Default value: 20; maximum value: 100.
                     * @param Limit Number of real server lists returned. Default value: 20; maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Starting offset of the real server list returned. Default value: 0.
                     * @return Offset Starting offset of the real server list returned. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the real server list returned. Default value: 0.
                     * @param Offset Starting offset of the real server list returned. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter conditions to query CVMs and ENIs
<li> `vpc-id` - String - Required: No - (Filter condition) Filter by VPC ID, such as "vpc-12345678".</li>
<li> `ip` - String - Required: No - (Filter condition) Filter by real server IP, such as "192.168.0.1".</li>
<li> `listener-id` - String - Required: No - (Filter condition) Filter by listener ID, such as "lbl-12345678".</li>
<li> `location-id` - String - Required: No - (Filter condition) Filter by forwarding rule ID of the layer-7 listener, such as "loc-12345678".</li>
                     * @return Filters Filter conditions to query CVMs and ENIs
<li> `vpc-id` - String - Required: No - (Filter condition) Filter by VPC ID, such as "vpc-12345678".</li>
<li> `ip` - String - Required: No - (Filter condition) Filter by real server IP, such as "192.168.0.1".</li>
<li> `listener-id` - String - Required: No - (Filter condition) Filter by listener ID, such as "lbl-12345678".</li>
<li> `location-id` - String - Required: No - (Filter condition) Filter by forwarding rule ID of the layer-7 listener, such as "loc-12345678".</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions to query CVMs and ENIs
<li> `vpc-id` - String - Required: No - (Filter condition) Filter by VPC ID, such as "vpc-12345678".</li>
<li> `ip` - String - Required: No - (Filter condition) Filter by real server IP, such as "192.168.0.1".</li>
<li> `listener-id` - String - Required: No - (Filter condition) Filter by listener ID, such as "lbl-12345678".</li>
<li> `location-id` - String - Required: No - (Filter condition) Filter by forwarding rule ID of the layer-7 listener, such as "loc-12345678".</li>
                     * @param Filters Filter conditions to query CVMs and ENIs
<li> `vpc-id` - String - Required: No - (Filter condition) Filter by VPC ID, such as "vpc-12345678".</li>
<li> `ip` - String - Required: No - (Filter condition) Filter by real server IP, such as "192.168.0.1".</li>
<li> `listener-id` - String - Required: No - (Filter condition) Filter by listener ID, such as "lbl-12345678".</li>
<li> `location-id` - String - Required: No - (Filter condition) Filter by forwarding rule ID of the layer-7 listener, such as "loc-12345678".</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Number of real server lists returned. Default value: 20; maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset of the real server list returned. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter conditions to query CVMs and ENIs
<li> `vpc-id` - String - Required: No - (Filter condition) Filter by VPC ID, such as "vpc-12345678".</li>
<li> `ip` - String - Required: No - (Filter condition) Filter by real server IP, such as "192.168.0.1".</li>
<li> `listener-id` - String - Required: No - (Filter condition) Filter by listener ID, such as "lbl-12345678".</li>
<li> `location-id` - String - Required: No - (Filter condition) Filter by forwarding rule ID of the layer-7 listener, such as "loc-12345678".</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECROSSTARGETSREQUEST_H_
