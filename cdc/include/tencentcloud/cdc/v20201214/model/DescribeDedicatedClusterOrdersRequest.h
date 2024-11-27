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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterOrders request structure.
                */
                class DescribeDedicatedClusterOrdersRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterOrdersRequest();
                    ~DescribeDedicatedClusterOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter by CDC id.
                     * @return DedicatedClusterIds Filter by CDC id.
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterIds() const;

                    /**
                     * 设置Filter by CDC id.
                     * @param _dedicatedClusterIds Filter by CDC id.
                     * 
                     */
                    void SetDedicatedClusterIds(const std::vector<std::string>& _dedicatedClusterIds);

                    /**
                     * 判断参数 DedicatedClusterIds 是否已赋值
                     * @return DedicatedClusterIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdsHasBeenSet() const;

                    /**
                     * 获取Filter by CDC order id.
                     * @return DedicatedClusterOrderIds Filter by CDC order id.
                     * 
                     */
                    std::string GetDedicatedClusterOrderIds() const;

                    /**
                     * 设置Filter by CDC order id.
                     * @param _dedicatedClusterOrderIds Filter by CDC order id.
                     * 
                     */
                    void SetDedicatedClusterOrderIds(const std::string& _dedicatedClusterOrderIds);

                    /**
                     * 判断参数 DedicatedClusterOrderIds 是否已赋值
                     * @return DedicatedClusterOrderIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdsHasBeenSet() const;

                    /**
                     * 获取Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取The order status is the filter condition: PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED OFFLINE
                     * @return Status The order status is the filter condition: PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED OFFLINE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The order status is the filter condition: PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED OFFLINE
                     * @param _status The order status is the filter condition: PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED OFFLINE
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The order type is the filter condition: CREATE EXTEND
                     * @return ActionType The order type is the filter condition: CREATE EXTEND
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置The order type is the filter condition: CREATE EXTEND
                     * @param _actionType The order type is the filter condition: CREATE EXTEND
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return OrderTypes 
                     * 
                     */
                    std::vector<std::string> GetOrderTypes() const;

                    /**
                     * 设置
                     * @param _orderTypes 
                     * 
                     */
                    void SetOrderTypes(const std::vector<std::string>& _orderTypes);

                    /**
                     * 判断参数 OrderTypes 是否已赋值
                     * @return OrderTypes 是否已赋值
                     * 
                     */
                    bool OrderTypesHasBeenSet() const;

                private:

                    /**
                     * Filter by CDC id.
                     */
                    std::vector<std::string> m_dedicatedClusterIds;
                    bool m_dedicatedClusterIdsHasBeenSet;

                    /**
                     * Filter by CDC order id.
                     */
                    std::string m_dedicatedClusterOrderIds;
                    bool m_dedicatedClusterOrderIdsHasBeenSet;

                    /**
                     * Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The order status is the filter condition: PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED OFFLINE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The order type is the filter condition: CREATE EXTEND
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_orderTypes;
                    bool m_orderTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_
