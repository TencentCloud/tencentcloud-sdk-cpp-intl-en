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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_

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
                * Details about cost distribution over different tags.
                */
                class TagSummaryOverviewItem : public AbstractModel
                {
                public:
                    TagSummaryOverviewItem();
                    ~TagSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag value
                     * @return TagValue Tag value
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value
                     * @param _tagValue Tag value
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取Percentage of the fee, with 2 decimal places.
                     * @return RealTotalCostRatio Percentage of the fee, with 2 decimal places.
                     * 
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置Percentage of the fee, with 2 decimal places.
                     * @param _realTotalCostRatio Percentage of the fee, with 2 decimal places.
                     * 
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     * 
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取discounted total price
                     * @return RealTotalCost discounted total price
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置discounted total price
                     * @param _realTotalCost discounted total price
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
                     * 获取Cash account expenditure: The amount paid through the cash account
                     * @return CashPayAmount Cash account expenditure: The amount paid through the cash account
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash account expenditure: The amount paid through the cash account
                     * @param _cashPayAmount Cash account expenditure: The amount paid through the cash account
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
                     * 获取Gift account expenditure: The amount paid using free credits
                     * @return IncentivePayAmount Gift account expenditure: The amount paid using free credits
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Gift account expenditure: The amount paid using free credits
                     * @param _incentivePayAmount Gift account expenditure: The amount paid using free credits
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
                     * 获取Coupon expenditure: The amount paid using various vouchers (such as vouchers and cash vouchers)
                     * @return VoucherPayAmount Coupon expenditure: The amount paid using various vouchers (such as vouchers and cash vouchers)
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Coupon expenditure: The amount paid using various vouchers (such as vouchers and cash vouchers)
                     * @param _voucherPayAmount Coupon expenditure: The amount paid using various vouchers (such as vouchers and cash vouchers)
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
                     * 获取Royalty account expenditure: The amount paid through the royalty account
                     * @return TransferPayAmount Royalty account expenditure: The amount paid through the royalty account
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty account expenditure: The amount paid through the royalty account
                     * @param _transferPayAmount Royalty account expenditure: The amount paid through the royalty account
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
                     * 获取Original price in CNY. The TotalCost field comes into effect after bill 3.0 (May 2021) and returns "-" before bill 3.0. In the current situation of contract price, the TotalCost field returns "-" if a price difference exists with the official website price.
                     * @return TotalCost Original price in CNY. The TotalCost field comes into effect after bill 3.0 (May 2021) and returns "-" before bill 3.0. In the current situation of contract price, the TotalCost field returns "-" if a price difference exists with the official website price.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Original price in CNY. The TotalCost field comes into effect after bill 3.0 (May 2021) and returns "-" before bill 3.0. In the current situation of contract price, the TotalCost field returns "-" if a price difference exists with the official website price.
                     * @param _totalCost Original price in CNY. The TotalCost field comes into effect after bill 3.0 (May 2021) and returns "-" before bill 3.0. In the current situation of contract price, the TotalCost field returns "-" if a price difference exists with the official website price.
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Tag value
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Percentage of the fee, with 2 decimal places.
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * discounted total price
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cash account expenditure: The amount paid through the cash account
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Gift account expenditure: The amount paid using free credits
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Coupon expenditure: The amount paid using various vouchers (such as vouchers and cash vouchers)
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Royalty account expenditure: The amount paid through the royalty account
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Original price in CNY. The TotalCost field comes into effect after bill 3.0 (May 2021) and returns "-" before bill 3.0. In the current situation of contract price, the TotalCost field returns "-" if a price difference exists with the official website price.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
