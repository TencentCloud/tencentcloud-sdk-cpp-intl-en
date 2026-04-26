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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTrend.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Consumption details summarized by product
                */
                class ConsumptionBusinessSummaryDataItem : public AbstractModel
                {
                public:
                    ConsumptionBusinessSummaryDataItem();
                    ~ConsumptionBusinessSummaryDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name code
                     * @return BusinessCode Product name code
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product name code
                     * @param _businessCode Product name code
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return BusinessCodeName Product name
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name
                     * @param _businessCodeName Product name
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取Discounted total price
                     * @return RealTotalCost Discounted total price
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Discounted total price
                     * @param _realTotalCost Discounted total price
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
                     * 获取Cost trend
                     * @return Trend Cost trend
                     * 
                     */
                    ConsumptionSummaryTrend GetTrend() const;

                    /**
                     * 设置Cost trend
                     * @param _trend Cost trend
                     * 
                     */
                    void SetTrend(const ConsumptionSummaryTrend& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取Cash
                     * @return CashPayAmount Cash
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash
                     * @param _cashPayAmount Cash
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
                     * 获取Bonus
                     * @return IncentivePayAmount Bonus
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Bonus
                     * @param _incentivePayAmount Bonus
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
                     * 获取Voucher
                     * @return VoucherPayAmount Voucher
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher
                     * @param _voucherPayAmount Voucher
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
                     * 获取Royalty amount
                     * @return TransferPayAmount Royalty amount
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty amount
                     * @param _transferPayAmount Royalty amount
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
                     * 获取Cash payment (pre-tax)
                     * @return AmountBeforeTax Cash payment (pre-tax)
                     * 
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置Cash payment (pre-tax)
                     * @param _amountBeforeTax Cash payment (pre-tax)
                     * 
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     * 
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

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

                    /**
                     * 获取Region name (only shown in regional summary)
                     * @return RegionName Region name (only shown in regional summary)
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name (only shown in regional summary)
                     * @param _regionName Region name (only shown in regional summary)
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * Product name code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Discounted total price
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cost trend
                     */
                    ConsumptionSummaryTrend m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * Cash
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Bonus
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Voucher
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Royalty amount
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Cash payment (pre-tax)
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * Region name (only shown in regional summary)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONBUSINESSSUMMARYDATAITEM_H_
