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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPPAYMENTOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPPAYMENTOVERVIEW_H_

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
                * Payment overview data
                */
                class MNPPaymentOverview : public AbstractModel
                {
                public:
                    MNPPaymentOverview();
                    ~MNPPaymentOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of mini programs involved in the order
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderMNPNum Number of mini programs involved in the order
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderMNPNum() const;

                    /**
                     * 设置Number of mini programs involved in the order
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderMNPNum Number of mini programs involved in the order
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderNum Total orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderNum() const;

                    /**
                     * 设置Total orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderNum Total orders

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total paid orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderPaidNum Total paid orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderPaidNum() const;

                    /**
                     * 设置Total paid orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderPaidNum Total paid orders

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total refunded orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderRefundNum Total refunded orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderRefundNum() const;

                    /**
                     * 设置Total refunded orders

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderRefundNum Total refunded orders

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total unpaid orders
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderUnpaidNum Total unpaid orders
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderUnpaidNum() const;

                    /**
                     * 设置Total unpaid orders
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderUnpaidNum Total unpaid orders
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total order users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderUserNum Total order users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOrderUserNum() const;

                    /**
                     * 设置Total order users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderUserNum Total order users
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total paying users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PaidUserNum Total paying users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPaidUserNum() const;

                    /**
                     * 设置Total paying users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paidUserNum Total paying users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPaidUserNum(const int64_t& _paidUserNum);

                    /**
                     * 判断参数 PaidUserNum 是否已赋值
                     * @return PaidUserNum 是否已赋值
                     * 
                     */
                    bool PaidUserNumHasBeenSet() const;

                    /**
                     * 获取Amount paid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PaidAmount Amount paid
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPaidAmount() const;

                    /**
                     * 设置Amount paid
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paidAmount Amount paid
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total amount refunded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RefundAmount Total amount refunded
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRefundAmount() const;

                    /**
                     * 设置Total amount refunded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _refundAmount Total amount refunded
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total order amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalAmount Total order amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalAmount() const;

                    /**
                     * 设置Total order amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalAmount Total order amount
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Unpaid amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnpaidAmount Unpaid amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnpaidAmount() const;

                    /**
                     * 设置Unpaid amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unpaidAmount Unpaid amount
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Data date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataTime Data date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Data date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataTime Data date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                private:

                    /**
                     * Number of mini programs involved in the order
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderMNPNum;
                    bool m_orderMNPNumHasBeenSet;

                    /**
                     * Total orders

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderNum;
                    bool m_orderNumHasBeenSet;

                    /**
                     * Total paid orders

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderPaidNum;
                    bool m_orderPaidNumHasBeenSet;

                    /**
                     * Total refunded orders

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderRefundNum;
                    bool m_orderRefundNumHasBeenSet;

                    /**
                     * Total unpaid orders
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderUnpaidNum;
                    bool m_orderUnpaidNumHasBeenSet;

                    /**
                     * Total order users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orderUserNum;
                    bool m_orderUserNumHasBeenSet;

                    /**
                     * Total paying users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_paidUserNum;
                    bool m_paidUserNumHasBeenSet;

                    /**
                     * Amount paid
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paidAmount;
                    bool m_paidAmountHasBeenSet;

                    /**
                     * Total amount refunded
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * Total order amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Unpaid amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unpaidAmount;
                    bool m_unpaidAmountHasBeenSet;

                    /**
                     * Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Data date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPPAYMENTOVERVIEW_H_
