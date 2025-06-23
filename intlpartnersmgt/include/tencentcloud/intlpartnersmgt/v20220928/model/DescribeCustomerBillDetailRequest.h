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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILREQUEST_H_

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
                * DescribeCustomerBillDetail request structure.
                */
                class DescribeCustomerBillDetailRequest : public AbstractModel
                {
                public:
                    DescribeCustomerBillDetailRequest();
                    ~DescribeCustomerBillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-account UIN.
                     * @return CustomerUin Sub-account UIN.
                     * 
                     */
                    uint64_t GetCustomerUin() const;

                    /**
                     * 设置Sub-account UIN.
                     * @param _customerUin Sub-account UIN.
                     * 
                     */
                    void SetCustomerUin(const uint64_t& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取Inquiry month, in the format of YYYY-MM, such as 2023-01.
                     * @return Month Inquiry month, in the format of YYYY-MM, such as 2023-01.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Inquiry month, in the format of YYYY-MM, such as 2023-01.
                     * @param _month Inquiry month, in the format of YYYY-MM, such as 2023-01.
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
                     * 获取Page parameter: number of entries per page. Value range: [1, 200]
                     * @return PageSize Page parameter: number of entries per page. Value range: [1, 200]
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page parameter: number of entries per page. Value range: [1, 200]
                     * @param _pageSize Page parameter: number of entries per page. Value range: [1, 200]
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
                     * 获取Page parameter: current page number. The minimum value is 1.
                     * @return Page Page parameter: current page number. The minimum value is 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page parameter: current page number. The minimum value is 1.
                     * @param _page Page parameter: current page number. The minimum value is 1.
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
                     * 获取Billing mode. Valid values:
prePay (Monthly subscription)
postPay (Pay-As-You-Go resources)
                     * @return PayMode Billing mode. Valid values:
prePay (Monthly subscription)
postPay (Pay-As-You-Go resources)
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values:
prePay (Monthly subscription)
postPay (Pay-As-You-Go resources)
                     * @param _payMode Billing mode. Valid values:
prePay (Monthly subscription)
postPay (Pay-As-You-Go resources)
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
                     * 获取Transaction type. Valid values:
prepay_purchase (Purchase)
prepay_renew (Renewal)
prepay_modify (Upgrade/Downgrade)
prepay_return ( Monthly subscription refund)
postpay_deduct (Pay-as-you-go)
postpay_deduct_h (Hourly settlement)
postpay_deduct_d (Daily settlement)
postpay_deduct_m (Monthly settlement)
offline_deduct (Offline project deduction)
online_deduct (Offline product deduction)
recon_deduct (Adjustment - deduction)
recon_increase (Adjustment - compensation)
ripay_purchase (One-off RI Fee)
postpay_deduct_s (Spot)
ri_hour_pay (Hourly RI fee)
prePurchase (New monthly subscription)
preRenew (Monthly subscription renewal)
preUpgrade (Upgrade/Downgrade)
preDowngrade (Upgrade/Downgrade)
svp_hour_pay (Hourly Savings Plan fee)
recon_guarantee (Minimum spend deduction)
pre_purchase (New monthly subscription)
pre_renew (Monthly subscription renewal)
pre_upgrade (Upgrade/Downgrade)
pre_downgrade (Upgrade/Downgrade)
                     * @return ActionType Transaction type. Valid values:
prepay_purchase (Purchase)
prepay_renew (Renewal)
prepay_modify (Upgrade/Downgrade)
prepay_return ( Monthly subscription refund)
postpay_deduct (Pay-as-you-go)
postpay_deduct_h (Hourly settlement)
postpay_deduct_d (Daily settlement)
postpay_deduct_m (Monthly settlement)
offline_deduct (Offline project deduction)
online_deduct (Offline product deduction)
recon_deduct (Adjustment - deduction)
recon_increase (Adjustment - compensation)
ripay_purchase (One-off RI Fee)
postpay_deduct_s (Spot)
ri_hour_pay (Hourly RI fee)
prePurchase (New monthly subscription)
preRenew (Monthly subscription renewal)
preUpgrade (Upgrade/Downgrade)
preDowngrade (Upgrade/Downgrade)
svp_hour_pay (Hourly Savings Plan fee)
recon_guarantee (Minimum spend deduction)
pre_purchase (New monthly subscription)
pre_renew (Monthly subscription renewal)
pre_upgrade (Upgrade/Downgrade)
pre_downgrade (Upgrade/Downgrade)
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type. Valid values:
prepay_purchase (Purchase)
prepay_renew (Renewal)
prepay_modify (Upgrade/Downgrade)
prepay_return ( Monthly subscription refund)
postpay_deduct (Pay-as-you-go)
postpay_deduct_h (Hourly settlement)
postpay_deduct_d (Daily settlement)
postpay_deduct_m (Monthly settlement)
offline_deduct (Offline project deduction)
online_deduct (Offline product deduction)
recon_deduct (Adjustment - deduction)
recon_increase (Adjustment - compensation)
ripay_purchase (One-off RI Fee)
postpay_deduct_s (Spot)
ri_hour_pay (Hourly RI fee)
prePurchase (New monthly subscription)
preRenew (Monthly subscription renewal)
preUpgrade (Upgrade/Downgrade)
preDowngrade (Upgrade/Downgrade)
svp_hour_pay (Hourly Savings Plan fee)
recon_guarantee (Minimum spend deduction)
pre_purchase (New monthly subscription)
pre_renew (Monthly subscription renewal)
pre_upgrade (Upgrade/Downgrade)
pre_downgrade (Upgrade/Downgrade)
                     * @param _actionType Transaction type. Valid values:
prepay_purchase (Purchase)
prepay_renew (Renewal)
prepay_modify (Upgrade/Downgrade)
prepay_return ( Monthly subscription refund)
postpay_deduct (Pay-as-you-go)
postpay_deduct_h (Hourly settlement)
postpay_deduct_d (Daily settlement)
postpay_deduct_m (Monthly settlement)
offline_deduct (Offline project deduction)
online_deduct (Offline product deduction)
recon_deduct (Adjustment - deduction)
recon_increase (Adjustment - compensation)
ripay_purchase (One-off RI Fee)
postpay_deduct_s (Spot)
ri_hour_pay (Hourly RI fee)
prePurchase (New monthly subscription)
preRenew (Monthly subscription renewal)
preUpgrade (Upgrade/Downgrade)
preDowngrade (Upgrade/Downgrade)
svp_hour_pay (Hourly Savings Plan fee)
recon_guarantee (Minimum spend deduction)
pre_purchase (New monthly subscription)
pre_renew (Monthly subscription renewal)
pre_upgrade (Upgrade/Downgrade)
pre_downgrade (Upgrade/Downgrade)
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
                     * 获取Payment status
0: not distinguished
1: paid
2: unpaid
                     * @return IsConfirmed Payment status
0: not distinguished
1: paid
2: unpaid
                     * 
                     */
                    std::string GetIsConfirmed() const;

                    /**
                     * 设置Payment status
0: not distinguished
1: paid
2: unpaid
                     * @param _isConfirmed Payment status
0: not distinguished
1: paid
2: unpaid
                     * 
                     */
                    void SetIsConfirmed(const std::string& _isConfirmed);

                    /**
                     * 判断参数 IsConfirmed 是否已赋值
                     * @return IsConfirmed 是否已赋值
                     * 
                     */
                    bool IsConfirmedHasBeenSet() const;

                private:

                    /**
                     * Sub-account UIN.
                     */
                    uint64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Inquiry month, in the format of YYYY-MM, such as 2023-01.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Page parameter: number of entries per page. Value range: [1, 200]
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page parameter: current page number. The minimum value is 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Billing mode. Valid values:
prePay (Monthly subscription)
postPay (Pay-As-You-Go resources)
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Transaction type. Valid values:
prepay_purchase (Purchase)
prepay_renew (Renewal)
prepay_modify (Upgrade/Downgrade)
prepay_return ( Monthly subscription refund)
postpay_deduct (Pay-as-you-go)
postpay_deduct_h (Hourly settlement)
postpay_deduct_d (Daily settlement)
postpay_deduct_m (Monthly settlement)
offline_deduct (Offline project deduction)
online_deduct (Offline product deduction)
recon_deduct (Adjustment - deduction)
recon_increase (Adjustment - compensation)
ripay_purchase (One-off RI Fee)
postpay_deduct_s (Spot)
ri_hour_pay (Hourly RI fee)
prePurchase (New monthly subscription)
preRenew (Monthly subscription renewal)
preUpgrade (Upgrade/Downgrade)
preDowngrade (Upgrade/Downgrade)
svp_hour_pay (Hourly Savings Plan fee)
recon_guarantee (Minimum spend deduction)
pre_purchase (New monthly subscription)
pre_renew (Monthly subscription renewal)
pre_upgrade (Upgrade/Downgrade)
pre_downgrade (Upgrade/Downgrade)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Payment status
0: not distinguished
1: paid
2: unpaid
                     */
                    std::string m_isConfirmed;
                    bool m_isConfirmedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILREQUEST_H_
