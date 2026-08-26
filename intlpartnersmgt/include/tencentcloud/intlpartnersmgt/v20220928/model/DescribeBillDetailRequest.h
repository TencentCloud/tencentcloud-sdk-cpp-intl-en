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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDETAILREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeBillDetail request structure.
                */
                class DescribeBillDetailRequest : public AbstractModel
                {
                public:
                    DescribeBillDetailRequest();
                    ~DescribeBillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Query month, in the format of YYYY-MM, such as 2023-01</p>
                     * @return Month <p>Query month, in the format of YYYY-MM, such as 2023-01</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>Query month, in the format of YYYY-MM, such as 2023-01</p>
                     * @param _month <p>Query month, in the format of YYYY-MM, such as 2023-01</p>
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取<p>Page parameter: number of entries per page. Value range: [1, 200]</p>
                     * @return PageSize <p>Page parameter: number of entries per page. Value range: [1, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Page parameter: number of entries per page. Value range: [1, 200]</p>
                     * @param _pageSize <p>Page parameter: number of entries per page. Value range: [1, 200]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Page parameter: current page number. The minimum value is 1.</p>
                     * @return Page <p>Page parameter: current page number. The minimum value is 1.</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>Page parameter: current page number. The minimum value is 1.</p>
                     * @param _page <p>Page parameter: current page number. The minimum value is 1.</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>Billing mode</p><p>Enumeration values:</p><ul><li>prePay: yearly/monthly subscription</li><li>postPay: Pay-As-You-Go resources</li></ul>
                     * @return PayMode <p>Billing mode</p><p>Enumeration values:</p><ul><li>prePay: yearly/monthly subscription</li><li>postPay: Pay-As-You-Go resources</li></ul>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Billing mode</p><p>Enumeration values:</p><ul><li>prePay: yearly/monthly subscription</li><li>postPay: Pay-As-You-Go resources</li></ul>
                     * @param _payMode <p>Billing mode</p><p>Enumeration values:</p><ul><li>prePay: yearly/monthly subscription</li><li>postPay: Pay-As-You-Go resources</li></ul>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Transaction type</p><p>Enumeration values:</p><ul><li>prepay_purchase: Purchase</li><li>prepay_renew:  Renewal</li><li>prepay_modify: Upgrade/Downgrade</li><li>prepay_return: yearly/monthly subscription refund</li><li>postpay_deduct: Pay-as-you-go</li><li>postpay_deduct_h: Hourly settlement</li><li>postpay_deduct_d: Daily settlement</li><li>postpay_deduct_m: Monthly settlement</li><li>offline_deduct: Offline project deduction</li><li>online_deduct: Offline product deduction</li><li>recon_deduct: Adjustment - deduction</li><li>recon_increase: Adjustment - compensation</li><li>ripay_purchase: One-off RI Fee</li><li>postpay_deduct_s: Spot</li><li>ri_hour_pay: Hourly RI fee</li><li>prePurchase: New yearly/monthly subscription</li><li>preRenew: yearly/monthly subscription renewal</li><li>preUpgrade: Upgrade/Downgrade</li><li>preDowngrade: Upgrade/Downgrade</li><li>svp_hour_pay: Hourly Savings Plan fee</li><li>recon_guarantee: Minimum spend deduction</li><li>pre_purchase: New yearly/monthly subscription</li><li>pre_renew: yearly/monthly subscription renewal</li><li>pre_upgrade: Upgrade/Downgrade</li><li>pre_downgrade: Upgrade/Downgrade</li></ul>
                     * @return ActionType <p>Transaction type</p><p>Enumeration values:</p><ul><li>prepay_purchase: Purchase</li><li>prepay_renew:  Renewal</li><li>prepay_modify: Upgrade/Downgrade</li><li>prepay_return: yearly/monthly subscription refund</li><li>postpay_deduct: Pay-as-you-go</li><li>postpay_deduct_h: Hourly settlement</li><li>postpay_deduct_d: Daily settlement</li><li>postpay_deduct_m: Monthly settlement</li><li>offline_deduct: Offline project deduction</li><li>online_deduct: Offline product deduction</li><li>recon_deduct: Adjustment - deduction</li><li>recon_increase: Adjustment - compensation</li><li>ripay_purchase: One-off RI Fee</li><li>postpay_deduct_s: Spot</li><li>ri_hour_pay: Hourly RI fee</li><li>prePurchase: New yearly/monthly subscription</li><li>preRenew: yearly/monthly subscription renewal</li><li>preUpgrade: Upgrade/Downgrade</li><li>preDowngrade: Upgrade/Downgrade</li><li>svp_hour_pay: Hourly Savings Plan fee</li><li>recon_guarantee: Minimum spend deduction</li><li>pre_purchase: New yearly/monthly subscription</li><li>pre_renew: yearly/monthly subscription renewal</li><li>pre_upgrade: Upgrade/Downgrade</li><li>pre_downgrade: Upgrade/Downgrade</li></ul>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>Transaction type</p><p>Enumeration values:</p><ul><li>prepay_purchase: Purchase</li><li>prepay_renew:  Renewal</li><li>prepay_modify: Upgrade/Downgrade</li><li>prepay_return: yearly/monthly subscription refund</li><li>postpay_deduct: Pay-as-you-go</li><li>postpay_deduct_h: Hourly settlement</li><li>postpay_deduct_d: Daily settlement</li><li>postpay_deduct_m: Monthly settlement</li><li>offline_deduct: Offline project deduction</li><li>online_deduct: Offline product deduction</li><li>recon_deduct: Adjustment - deduction</li><li>recon_increase: Adjustment - compensation</li><li>ripay_purchase: One-off RI Fee</li><li>postpay_deduct_s: Spot</li><li>ri_hour_pay: Hourly RI fee</li><li>prePurchase: New yearly/monthly subscription</li><li>preRenew: yearly/monthly subscription renewal</li><li>preUpgrade: Upgrade/Downgrade</li><li>preDowngrade: Upgrade/Downgrade</li><li>svp_hour_pay: Hourly Savings Plan fee</li><li>recon_guarantee: Minimum spend deduction</li><li>pre_purchase: New yearly/monthly subscription</li><li>pre_renew: yearly/monthly subscription renewal</li><li>pre_upgrade: Upgrade/Downgrade</li><li>pre_downgrade: Upgrade/Downgrade</li></ul>
                     * @param _actionType <p>Transaction type</p><p>Enumeration values:</p><ul><li>prepay_purchase: Purchase</li><li>prepay_renew:  Renewal</li><li>prepay_modify: Upgrade/Downgrade</li><li>prepay_return: yearly/monthly subscription refund</li><li>postpay_deduct: Pay-as-you-go</li><li>postpay_deduct_h: Hourly settlement</li><li>postpay_deduct_d: Daily settlement</li><li>postpay_deduct_m: Monthly settlement</li><li>offline_deduct: Offline project deduction</li><li>online_deduct: Offline product deduction</li><li>recon_deduct: Adjustment - deduction</li><li>recon_increase: Adjustment - compensation</li><li>ripay_purchase: One-off RI Fee</li><li>postpay_deduct_s: Spot</li><li>ri_hour_pay: Hourly RI fee</li><li>prePurchase: New yearly/monthly subscription</li><li>preRenew: yearly/monthly subscription renewal</li><li>preUpgrade: Upgrade/Downgrade</li><li>preDowngrade: Upgrade/Downgrade</li><li>svp_hour_pay: Hourly Savings Plan fee</li><li>recon_guarantee: Minimum spend deduction</li><li>pre_purchase: New yearly/monthly subscription</li><li>pre_renew: yearly/monthly subscription renewal</li><li>pre_upgrade: Upgrade/Downgrade</li><li>pre_downgrade: Upgrade/Downgrade</li></ul>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Query month, in the format of YYYY-MM, such as 2023-01</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>Page parameter: number of entries per page. Value range: [1, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Page parameter: current page number. The minimum value is 1.</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>Billing mode</p><p>Enumeration values:</p><ul><li>prePay: yearly/monthly subscription</li><li>postPay: Pay-As-You-Go resources</li></ul>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Transaction type</p><p>Enumeration values:</p><ul><li>prepay_purchase: Purchase</li><li>prepay_renew:  Renewal</li><li>prepay_modify: Upgrade/Downgrade</li><li>prepay_return: yearly/monthly subscription refund</li><li>postpay_deduct: Pay-as-you-go</li><li>postpay_deduct_h: Hourly settlement</li><li>postpay_deduct_d: Daily settlement</li><li>postpay_deduct_m: Monthly settlement</li><li>offline_deduct: Offline project deduction</li><li>online_deduct: Offline product deduction</li><li>recon_deduct: Adjustment - deduction</li><li>recon_increase: Adjustment - compensation</li><li>ripay_purchase: One-off RI Fee</li><li>postpay_deduct_s: Spot</li><li>ri_hour_pay: Hourly RI fee</li><li>prePurchase: New yearly/monthly subscription</li><li>preRenew: yearly/monthly subscription renewal</li><li>preUpgrade: Upgrade/Downgrade</li><li>preDowngrade: Upgrade/Downgrade</li><li>svp_hour_pay: Hourly Savings Plan fee</li><li>recon_guarantee: Minimum spend deduction</li><li>pre_purchase: New yearly/monthly subscription</li><li>pre_renew: yearly/monthly subscription renewal</li><li>pre_upgrade: Upgrade/Downgrade</li><li>pre_downgrade: Upgrade/Downgrade</li></ul>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLDETAILREQUEST_H_
