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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeWebhookPolicyList request structure.
                */
                class DescribeWebhookPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeWebhookPolicyListRequest();
                    ~DescribeWebhookPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Paging offset<br>Value range: [0, +∞)<br>Default value: 0</p>
                     * @return Offset <p>Paging offset<br>Value range: [0, +∞)<br>Default value: 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset<br>Value range: [0, +∞)<br>Default value: 0</p>
                     * @param _offset <p>Paging offset<br>Value range: [0, +∞)<br>Default value: 0</p>
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
                     * 获取<p>Number of results per page<br>Value range: [1, 200]<br>Default value: 20</p>
                     * @return Limit <p>Number of results per page<br>Value range: [1, 200]<br>Default value: 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page<br>Value range: [1, 200]<br>Default value: 20</p>
                     * @param _limit <p>Number of results per page<br>Value range: [1, 200]<br>Default value: 20</p>
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
                     * 获取<p>Filter criteria<br>Supported filter items:<br>Name: fuzzy search by policy name<br>Status: enable status, available values: ON / OFF<br>ReceiveFormat: accept format, available values: TEXT / JSON<br>Module: notification item module, available values: Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID: ID of the associated receiving robot</p>
                     * @return Filters <p>Filter criteria<br>Supported filter items:<br>Name: fuzzy search by policy name<br>Status: enable status, available values: ON / OFF<br>ReceiveFormat: accept format, available values: TEXT / JSON<br>Module: notification item module, available values: Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID: ID of the associated receiving robot</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria<br>Supported filter items:<br>Name: fuzzy search by policy name<br>Status: enable status, available values: ON / OFF<br>ReceiveFormat: accept format, available values: TEXT / JSON<br>Module: notification item module, available values: Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID: ID of the associated receiving robot</p>
                     * @param _filters <p>Filter criteria<br>Supported filter items:<br>Name: fuzzy search by policy name<br>Status: enable status, available values: ON / OFF<br>ReceiveFormat: accept format, available values: TEXT / JSON<br>Module: notification item module, available values: Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID: ID of the associated receiving robot</p>
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
                     * 获取<p>Sorting field<br>Enumeration values:<br>InsertTime: creation time<br>UpdateTime: update time<br>Default value: UpdateTime</p>
                     * @return Order <p>Sorting field<br>Enumeration values:<br>InsertTime: creation time<br>UpdateTime: update time<br>Default value: UpdateTime</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting field<br>Enumeration values:<br>InsertTime: creation time<br>UpdateTime: update time<br>Default value: UpdateTime</p>
                     * @param _order <p>Sorting field<br>Enumeration values:<br>InsertTime: creation time<br>UpdateTime: update time<br>Default value: UpdateTime</p>
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
                     * 获取<p>Sorting method<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc</p>
                     * @return By <p>Sorting method<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting method<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc</p>
                     * @param _by <p>Sorting method<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>Paging offset<br>Value range: [0, +∞)<br>Default value: 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of results per page<br>Value range: [1, 200]<br>Default value: 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria<br>Supported filter items:<br>Name: fuzzy search by policy name<br>Status: enable status, available values: ON / OFF<br>ReceiveFormat: accept format, available values: TEXT / JSON<br>Module: notification item module, available values: Vul / Alert / AkSk / Agent / LogAnalysis<br>ReceiverID: ID of the associated receiving robot</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting field<br>Enumeration values:<br>InsertTime: creation time<br>UpdateTime: update time<br>Default value: UpdateTime</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting method<br>Enumeration values:<br>asc: ascending<br>desc: descending<br>Default value: desc</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEWEBHOOKPOLICYLISTREQUEST_H_
