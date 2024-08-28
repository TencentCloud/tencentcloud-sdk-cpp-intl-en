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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseList request structure.
                */
                class DescribeLicenseListRequest : public AbstractModel
                {
                public:
                    DescribeLicenseListRequest();
                    ~DescribeLicenseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Take the intersection when filtering with multiple conditions.
<li> LicenseStatus authorization status information: 0 - not used; 1 - partially used; 2 - used up; 3 - unavailable; 4 - available</li>
<li> BuyTime: time of purchase</li>
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>DeadlineStatus expiration status: NotExpired -not expired; expire - expired (including terminated); nearexpiry - about to expire</li>
<li>ResourceId resource ID</li>
<li>Keywords IP filtering</li>
<li>PayMode payment mode. 0: pay-as-you-go; 1: monthly subscription</li>
<li>OrderStatus order status. 1: normal; 2: isolated; 3: terminated</li>
<li>DealNames sub-order number, with a maximum length of 10, exceeding this will result in a failure.</li>
                     * @return Filters Take the intersection when filtering with multiple conditions.
<li> LicenseStatus authorization status information: 0 - not used; 1 - partially used; 2 - used up; 3 - unavailable; 4 - available</li>
<li> BuyTime: time of purchase</li>
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>DeadlineStatus expiration status: NotExpired -not expired; expire - expired (including terminated); nearexpiry - about to expire</li>
<li>ResourceId resource ID</li>
<li>Keywords IP filtering</li>
<li>PayMode payment mode. 0: pay-as-you-go; 1: monthly subscription</li>
<li>OrderStatus order status. 1: normal; 2: isolated; 3: terminated</li>
<li>DealNames sub-order number, with a maximum length of 10, exceeding this will result in a failure.</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Take the intersection when filtering with multiple conditions.
<li> LicenseStatus authorization status information: 0 - not used; 1 - partially used; 2 - used up; 3 - unavailable; 4 - available</li>
<li> BuyTime: time of purchase</li>
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>DeadlineStatus expiration status: NotExpired -not expired; expire - expired (including terminated); nearexpiry - about to expire</li>
<li>ResourceId resource ID</li>
<li>Keywords IP filtering</li>
<li>PayMode payment mode. 0: pay-as-you-go; 1: monthly subscription</li>
<li>OrderStatus order status. 1: normal; 2: isolated; 3: terminated</li>
<li>DealNames sub-order number, with a maximum length of 10, exceeding this will result in a failure.</li>
                     * @param _filters Take the intersection when filtering with multiple conditions.
<li> LicenseStatus authorization status information: 0 - not used; 1 - partially used; 2 - used up; 3 - unavailable; 4 - available</li>
<li> BuyTime: time of purchase</li>
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>DeadlineStatus expiration status: NotExpired -not expired; expire - expired (including terminated); nearexpiry - about to expire</li>
<li>ResourceId resource ID</li>
<li>Keywords IP filtering</li>
<li>PayMode payment mode. 0: pay-as-you-go; 1: monthly subscription</li>
<li>OrderStatus order status. 1: normal; 2: isolated; 3: terminated</li>
<li>DealNames sub-order number, with a maximum length of 10, exceeding this will result in a failure.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Limit number, 10 by default.
                     * @return Limit Limit number, 10 by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit number, 10 by default.
                     * @param _limit Limit number, 10 by default.
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * @return Tags Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * @param _tags Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Take the intersection when filtering with multiple conditions.
<li> LicenseStatus authorization status information: 0 - not used; 1 - partially used; 2 - used up; 3 - unavailable; 4 - available</li>
<li> BuyTime: time of purchase</li>
<li> LicenseType authorization type. 0: Pro Edition-pay-as-you-go; 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription</li>
<li>DeadlineStatus expiration status: NotExpired -not expired; expire - expired (including terminated); nearexpiry - about to expire</li>
<li>ResourceId resource ID</li>
<li>Keywords IP filtering</li>
<li>PayMode payment mode. 0: pay-as-you-go; 1: monthly subscription</li>
<li>OrderStatus order status. 1: normal; 2: isolated; 3: terminated</li>
<li>DealNames sub-order number, with a maximum length of 10, exceeding this will result in a failure.</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Limit number, 10 by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Tag filtering; filter by the platform's tag capabilities. In this case, you should pass in the tag key and tag value as an object.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSELISTREQUEST_H_
