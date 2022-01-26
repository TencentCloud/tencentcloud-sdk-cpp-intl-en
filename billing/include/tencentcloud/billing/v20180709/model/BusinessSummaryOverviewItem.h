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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_

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
                * Summarize product details by product
                */
                class BusinessSummaryOverviewItem : public AbstractModel
                {
                public:
                    BusinessSummaryOverviewItem();
                    ~BusinessSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product code
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return BusinessCode Product code
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param BusinessCode Product code
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     * @return BusinessCodeName Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     * @param BusinessCodeName Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取Actual cost
                     * @return RealTotalCost Actual cost
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Actual cost
                     * @param RealTotalCost Actual cost
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Cost ratio, to two decimal points
                     * @return RealTotalCostRatio Cost ratio, to two decimal points
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置Cost ratio, to two decimal points
                     * @param RealTotalCostRatio Cost ratio, to two decimal points
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取Cash amount
                     * @return CashPayAmount Cash amount
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash amount
                     * @param CashPayAmount Cash amount
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Trial credit amount
                     * @return IncentivePayAmount Trial credit amount
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Trial credit amount
                     * @param IncentivePayAmount Trial credit amount
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Voucher amount
                     * @return VoucherPayAmount Voucher amount
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher amount
                     * @param VoucherPayAmount Voucher amount
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Billing month, e.g. `2019-08`
                     * @return BillMonth Billing month, e.g. `2019-08`
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置Billing month, e.g. `2019-08`
                     * @param BillMonth Billing month, e.g. `2019-08`
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     */
                    bool BillMonthHasBeenSet() const;

                    /**
                     * 获取The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
                     * @return TotalCost The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
                     * @param TotalCost The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Product code
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Actual cost
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cost ratio, to two decimal points
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * Cash amount
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Trial credit amount
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Voucher amount
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Billing month, e.g. `2019-08`
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * The original cost in USD. This parameter has become valid since v3.0 bills took effect in May 2021, and before that `-` was returned for this parameter. If a customer uses a contract price different from the published price, `-` will also be returned for this parameter.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYOVERVIEWITEM_H_
