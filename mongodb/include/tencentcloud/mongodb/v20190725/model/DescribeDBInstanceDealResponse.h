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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDeal response structure.
                */
                class DescribeDBInstanceDealResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceDealResponse();
                    ~DescribeDBInstanceDealResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order status.
- 1: unpaid.
- 2: paid.
- 3: delivering.
- 4: delivered successfully.
- 5: delivery failed.
- 6: refund.
- 7: order closed.
- 8: closed due to unpaid timeout.
                     * @return Status Order status.
- 1: unpaid.
- 2: paid.
- 3: delivering.
- 4: delivered successfully.
- 5: delivery failed.
- 6: refund.
- 7: order closed.
- 8: closed due to unpaid timeout.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Original price of the order, in USD.
                     * @return OriginalPrice Original price of the order, in USD.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Discount price of the order, in USD.
                     * @return DiscountPrice Discount price of the order, in USD.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取Order operation behavior.
- purchase: newly purchased.
- renew: renewed.
- upgrade: configuration upgraded.
- downgrade: configuration downgraded.
- refund: return and refund.
                     * @return Action Order operation behavior.
- purchase: newly purchased.
- renew: renewed.
- upgrade: configuration upgraded.
- downgrade: configuration downgraded.
- refund: return and refund.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Instance ID of the current order.
                     * @return InstanceId Instance ID of the current order.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Order status.
- 1: unpaid.
- 2: paid.
- 3: delivering.
- 4: delivered successfully.
- 5: delivery failed.
- 6: refund.
- 7: order closed.
- 8: closed due to unpaid timeout.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Original price of the order, in USD.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount price of the order, in USD.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Order operation behavior.
- purchase: newly purchased.
- renew: renewed.
- upgrade: configuration upgraded.
- downgrade: configuration downgraded.
- refund: return and refund.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Instance ID of the current order.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALRESPONSE_H_
