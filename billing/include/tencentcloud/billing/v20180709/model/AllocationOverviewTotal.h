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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWTOTAL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWTOTAL_H_

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
                * Total amount of a cost allocation bill
                */
                class AllocationOverviewTotal : public AbstractModel
                {
                public:
                    AllocationOverviewTotal();
                    ~AllocationOverviewTotal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total fees: Total Fees (Cash) + Total Fees (Royalty Amount) + Total Fees (Free Credit) + Total Fees (Voucher)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealTotalCost Total fees: Total Fees (Cash) + Total Fees (Royalty Amount) + Total Fees (Free Credit) + Total Fees (Voucher)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total fees: Total Fees (Cash) + Total Fees (Royalty Amount) + Total Fees (Free Credit) + Total Fees (Voucher)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realTotalCost Total fees: Total Fees (Cash) + Total Fees (Royalty Amount) + Total Fees (Free Credit) + Total Fees (Voucher)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Cash: Total fees of cash
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CashPayAmount Cash: Total fees of cash
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash: Total fees of cash
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cashPayAmount Cash: Total fees of cash
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Free credit: Total fees of free credit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncentivePayAmount Free credit: Total fees of free credit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Free credit: Total fees of free credit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _incentivePayAmount Free credit: Total fees of free credit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Voucher: Total fees of voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoucherPayAmount Voucher: Total fees of voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher: Total fees of voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voucherPayAmount Voucher: Total fees of voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Royalty amount: Total fees of royalty amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferPayAmount Royalty amount: Total fees of royalty amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty amount: Total fees of royalty amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferPayAmount Royalty amount: Total fees of royalty amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Pre-tax price after discount
                     * @return CostBeforeTax Pre-tax price after discount
                     * 
                     */
                    std::string GetCostBeforeTax() const;

                    /**
                     * 设置Pre-tax price after discount
                     * @param _costBeforeTax Pre-tax price after discount
                     * 
                     */
                    void SetCostBeforeTax(const std::string& _costBeforeTax);

                    /**
                     * 判断参数 CostBeforeTax 是否已赋值
                     * @return CostBeforeTax 是否已赋值
                     * 
                     */
                    bool CostBeforeTaxHasBeenSet() const;

                    /**
                     * 获取Tax
                     * @return Tax Tax
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax
                     * @param _tax Tax
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                private:

                    /**
                     * Total fees: Total Fees (Cash) + Total Fees (Royalty Amount) + Total Fees (Free Credit) + Total Fees (Voucher)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cash: Total fees of cash
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Free credit: Total fees of free credit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Voucher: Total fees of voucher
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Royalty amount: Total fees of royalty amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Pre-tax price after discount
                     */
                    std::string m_costBeforeTax;
                    bool m_costBeforeTaxHasBeenSet;

                    /**
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWTOTAL_H_
