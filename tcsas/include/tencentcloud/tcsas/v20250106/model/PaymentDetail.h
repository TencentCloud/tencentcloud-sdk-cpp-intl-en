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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTDETAIL_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program payment detailed data.
                */
                class PaymentDetail : public AbstractModel
                {
                public:
                    PaymentDetail();
                    ~PaymentDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date in YYYYMMDD format.
                     * @return DataTime Date in YYYYMMDD format.
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Date in YYYYMMDD format.
                     * @param _dataTime Date in YYYYMMDD format.
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取Mini program count with orders.
                     * @return OrderMNPNum Mini program count with orders.
                     * 
                     */
                    int64_t GetOrderMNPNum() const;

                    /**
                     * 设置Mini program count with orders.
                     * @param _orderMNPNum Mini program count with orders.
                     * 
                     */
                    void SetOrderMNPNum(const int64_t& _orderMNPNum);

                    /**
                     * 判断参数 OrderMNPNum 是否已赋值
                     * @return OrderMNPNum 是否已赋值
                     * 
                     */
                    bool OrderMNPNumHasBeenSet() const;

                    /**
                     * 获取Total orders.
                     * @return OrderNum Total orders.
                     * 
                     */
                    int64_t GetOrderNum() const;

                    /**
                     * 设置Total orders.
                     * @param _orderNum Total orders.
                     * 
                     */
                    void SetOrderNum(const int64_t& _orderNum);

                    /**
                     * 判断参数 OrderNum 是否已赋值
                     * @return OrderNum 是否已赋值
                     * 
                     */
                    bool OrderNumHasBeenSet() const;

                    /**
                     * 获取Paid orders.
                     * @return OrderPaidNum Paid orders.
                     * 
                     */
                    int64_t GetOrderPaidNum() const;

                    /**
                     * 设置Paid orders.
                     * @param _orderPaidNum Paid orders.
                     * 
                     */
                    void SetOrderPaidNum(const int64_t& _orderPaidNum);

                    /**
                     * 判断参数 OrderPaidNum 是否已赋值
                     * @return OrderPaidNum 是否已赋值
                     * 
                     */
                    bool OrderPaidNumHasBeenSet() const;

                    /**
                     * 获取Number of refund orders.
                     * @return OrderRefundNum Number of refund orders.
                     * 
                     */
                    int64_t GetOrderRefundNum() const;

                    /**
                     * 设置Number of refund orders.
                     * @param _orderRefundNum Number of refund orders.
                     * 
                     */
                    void SetOrderRefundNum(const int64_t& _orderRefundNum);

                    /**
                     * 判断参数 OrderRefundNum 是否已赋值
                     * @return OrderRefundNum 是否已赋值
                     * 
                     */
                    bool OrderRefundNumHasBeenSet() const;

                    /**
                     * 获取Total unpaid orders.
                     * @return OrderUnpaidNum Total unpaid orders.
                     * 
                     */
                    int64_t GetOrderUnpaidNum() const;

                    /**
                     * 设置Total unpaid orders.
                     * @param _orderUnpaidNum Total unpaid orders.
                     * 
                     */
                    void SetOrderUnpaidNum(const int64_t& _orderUnpaidNum);

                    /**
                     * 判断参数 OrderUnpaidNum 是否已赋值
                     * @return OrderUnpaidNum 是否已赋值
                     * 
                     */
                    bool OrderUnpaidNumHasBeenSet() const;

                    /**
                     * 获取Number of ordering users (by OpenID).
                     * @return OrderUserNum Number of ordering users (by OpenID).
                     * 
                     */
                    int64_t GetOrderUserNum() const;

                    /**
                     * 设置Number of ordering users (by OpenID).
                     * @param _orderUserNum Number of ordering users (by OpenID).
                     * 
                     */
                    void SetOrderUserNum(const int64_t& _orderUserNum);

                    /**
                     * 判断参数 OrderUserNum 是否已赋值
                     * @return OrderUserNum 是否已赋值
                     * 
                     */
                    bool OrderUserNumHasBeenSet() const;

                    /**
                     * 获取Amount paid.
                     * @return PaidAmount Amount paid.
                     * 
                     */
                    std::string GetPaidAmount() const;

                    /**
                     * 设置Amount paid.
                     * @param _paidAmount Amount paid.
                     * 
                     */
                    void SetPaidAmount(const std::string& _paidAmount);

                    /**
                     * 判断参数 PaidAmount 是否已赋值
                     * @return PaidAmount 是否已赋值
                     * 
                     */
                    bool PaidAmountHasBeenSet() const;

                    /**
                     * 获取Amount refunded.
                     * @return RefundAmount Amount refunded.
                     * 
                     */
                    std::string GetRefundAmount() const;

                    /**
                     * 设置Amount refunded.
                     * @param _refundAmount Amount refunded.
                     * 
                     */
                    void SetRefundAmount(const std::string& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取Total amount.
                     * @return TotalAmount Total amount.
                     * 
                     */
                    std::string GetTotalAmount() const;

                    /**
                     * 设置Total amount.
                     * @param _totalAmount Total amount.
                     * 
                     */
                    void SetTotalAmount(const std::string& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Unpaid amount.
                     * @return UnpaidAmount Unpaid amount.
                     * 
                     */
                    std::string GetUnpaidAmount() const;

                    /**
                     * 设置Unpaid amount.
                     * @param _unpaidAmount Unpaid amount.
                     * 
                     */
                    void SetUnpaidAmount(const std::string& _unpaidAmount);

                    /**
                     * 判断参数 UnpaidAmount 是否已赋值
                     * @return UnpaidAmount 是否已赋值
                     * 
                     */
                    bool UnpaidAmountHasBeenSet() const;

                    /**
                     * 获取Data update timestamp.
                     * @return UpdateTime Data update timestamp.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Data update timestamp.
                     * @param _updateTime Data update timestamp.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Date in YYYYMMDD format.
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * Mini program count with orders.
                     */
                    int64_t m_orderMNPNum;
                    bool m_orderMNPNumHasBeenSet;

                    /**
                     * Total orders.
                     */
                    int64_t m_orderNum;
                    bool m_orderNumHasBeenSet;

                    /**
                     * Paid orders.
                     */
                    int64_t m_orderPaidNum;
                    bool m_orderPaidNumHasBeenSet;

                    /**
                     * Number of refund orders.
                     */
                    int64_t m_orderRefundNum;
                    bool m_orderRefundNumHasBeenSet;

                    /**
                     * Total unpaid orders.
                     */
                    int64_t m_orderUnpaidNum;
                    bool m_orderUnpaidNumHasBeenSet;

                    /**
                     * Number of ordering users (by OpenID).
                     */
                    int64_t m_orderUserNum;
                    bool m_orderUserNumHasBeenSet;

                    /**
                     * Amount paid.
                     */
                    std::string m_paidAmount;
                    bool m_paidAmountHasBeenSet;

                    /**
                     * Amount refunded.
                     */
                    std::string m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * Total amount.
                     */
                    std::string m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Unpaid amount.
                     */
                    std::string m_unpaidAmount;
                    bool m_unpaidAmountHasBeenSet;

                    /**
                     * Data update timestamp.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTDETAIL_H_
