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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Information of the document associated with bill details
                */
                class BillDetailAssociatedOrder : public AbstractModel
                {
                public:
                    BillDetailAssociatedOrder();
                    ~BillDetailAssociatedOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Newly purchased order
                     * @return PrepayPurchase Newly purchased order
                     * 
                     */
                    std::string GetPrepayPurchase() const;

                    /**
                     * 设置Newly purchased order
                     * @param _prepayPurchase Newly purchased order
                     * 
                     */
                    void SetPrepayPurchase(const std::string& _prepayPurchase);

                    /**
                     * 判断参数 PrepayPurchase 是否已赋值
                     * @return PrepayPurchase 是否已赋值
                     * 
                     */
                    bool PrepayPurchaseHasBeenSet() const;

                    /**
                     * 获取Renewal order
                     * @return PrepayRenew Renewal order
                     * 
                     */
                    std::string GetPrepayRenew() const;

                    /**
                     * 设置Renewal order
                     * @param _prepayRenew Renewal order
                     * 
                     */
                    void SetPrepayRenew(const std::string& _prepayRenew);

                    /**
                     * 判断参数 PrepayRenew 是否已赋值
                     * @return PrepayRenew 是否已赋值
                     * 
                     */
                    bool PrepayRenewHasBeenSet() const;

                    /**
                     * 获取Configuration upgrade order
                     * @return PrepayModifyUp Configuration upgrade order
                     * 
                     */
                    std::string GetPrepayModifyUp() const;

                    /**
                     * 设置Configuration upgrade order
                     * @param _prepayModifyUp Configuration upgrade order
                     * 
                     */
                    void SetPrepayModifyUp(const std::string& _prepayModifyUp);

                    /**
                     * 判断参数 PrepayModifyUp 是否已赋值
                     * @return PrepayModifyUp 是否已赋值
                     * 
                     */
                    bool PrepayModifyUpHasBeenSet() const;

                    /**
                     * 获取Write-off order
                     * @return ReverseOrder Write-off order
                     * 
                     */
                    std::string GetReverseOrder() const;

                    /**
                     * 设置Write-off order
                     * @param _reverseOrder Write-off order
                     * 
                     */
                    void SetReverseOrder(const std::string& _reverseOrder);

                    /**
                     * 判断参数 ReverseOrder 是否已赋值
                     * @return ReverseOrder 是否已赋值
                     * 
                     */
                    bool ReverseOrderHasBeenSet() const;

                    /**
                     * 获取Order after discount adjustment
                     * @return NewOrder Order after discount adjustment
                     * 
                     */
                    std::string GetNewOrder() const;

                    /**
                     * 设置Order after discount adjustment
                     * @param _newOrder Order after discount adjustment
                     * 
                     */
                    void SetNewOrder(const std::string& _newOrder);

                    /**
                     * 判断参数 NewOrder 是否已赋值
                     * @return NewOrder 是否已赋值
                     * 
                     */
                    bool NewOrderHasBeenSet() const;

                    /**
                     * 获取Order before discount adjustment
                     * @return Original Order before discount adjustment
                     * 
                     */
                    std::string GetOriginal() const;

                    /**
                     * 设置Order before discount adjustment
                     * @param _original Order before discount adjustment
                     * 
                     */
                    void SetOriginal(const std::string& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * Newly purchased order
                     */
                    std::string m_prepayPurchase;
                    bool m_prepayPurchaseHasBeenSet;

                    /**
                     * Renewal order
                     */
                    std::string m_prepayRenew;
                    bool m_prepayRenewHasBeenSet;

                    /**
                     * Configuration upgrade order
                     */
                    std::string m_prepayModifyUp;
                    bool m_prepayModifyUpHasBeenSet;

                    /**
                     * Write-off order
                     */
                    std::string m_reverseOrder;
                    bool m_reverseOrderHasBeenSet;

                    /**
                     * Order after discount adjustment
                     */
                    std::string m_newOrder;
                    bool m_newOrderHasBeenSet;

                    /**
                     * Order before discount adjustment
                     */
                    std::string m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILASSOCIATEDORDER_H_
