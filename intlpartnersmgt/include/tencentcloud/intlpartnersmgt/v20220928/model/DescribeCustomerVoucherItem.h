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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Voucher data.
                */
                class DescribeCustomerVoucherItem : public AbstractModel
                {
                public:
                    DescribeCustomerVoucherItem();
                    ~DescribeCustomerVoucherItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voucher ID.
                     * @return VoucherId Voucher ID.
                     * 
                     */
                    int64_t GetVoucherId() const;

                    /**
                     * 设置Voucher ID.
                     * @param _voucherId Voucher ID.
                     * 
                     */
                    void SetVoucherId(const int64_t& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取Sub-account UIN
                     * @return CustomerUin Sub-account UIN
                     * 
                     */
                    int64_t GetCustomerUin() const;

                    /**
                     * 设置Sub-account UIN
                     * @param _customerUin Sub-account UIN
                     * 
                     */
                    void SetCustomerUin(const int64_t& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取Voucher status: Issued/Used/Expired/Invalidated.
                     * @return VoucherStatus Voucher status: Issued/Used/Expired/Invalidated.
                     * 
                     */
                    std::string GetVoucherStatus() const;

                    /**
                     * 设置Voucher status: Issued/Used/Expired/Invalidated.
                     * @param _voucherStatus Voucher status: Issued/Used/Expired/Invalidated.
                     * 
                     */
                    void SetVoucherStatus(const std::string& _voucherStatus);

                    /**
                     * 判断参数 VoucherStatus 是否已赋值
                     * @return VoucherStatus 是否已赋值
                     * 
                     */
                    bool VoucherStatusHasBeenSet() const;

                    /**
                     * 获取Remaining amount.
                     * @return RemainingAmount Remaining amount.
                     * 
                     */
                    double GetRemainingAmount() const;

                    /**
                     * 设置Remaining amount.
                     * @param _remainingAmount Remaining amount.
                     * 
                     */
                    void SetRemainingAmount(const double& _remainingAmount);

                    /**
                     * 判断参数 RemainingAmount 是否已赋值
                     * @return RemainingAmount 是否已赋值
                     * 
                     */
                    bool RemainingAmountHasBeenSet() const;

                    /**
                     * 获取Denomination.
                     * @return TotalAmount Denomination.
                     * 
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置Denomination.
                     * @param _totalAmount Denomination.
                     * 
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Purpose: ProductTrial/CustomerOffer.
                     * @return Usage Purpose: ProductTrial/CustomerOffer.
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置Purpose: ProductTrial/CustomerOffer.
                     * @param _usage Purpose: ProductTrial/CustomerOffer.
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Payment mode. valid values: AllPayment, Prepaid, and Postpaid.
                     * @return PaymentMode Payment mode. valid values: AllPayment, Prepaid, and Postpaid.
                     * 
                     */
                    std::string GetPaymentMode() const;

                    /**
                     * 设置Payment mode. valid values: AllPayment, Prepaid, and Postpaid.
                     * @param _paymentMode Payment mode. valid values: AllPayment, Prepaid, and Postpaid.
                     * 
                     */
                    void SetPaymentMode(const std::string& _paymentMode);

                    /**
                     * 判断参数 PaymentMode 是否已赋值
                     * @return PaymentMode 是否已赋值
                     * 
                     */
                    bool PaymentModeHasBeenSet() const;

                    /**
                     * 获取Applicable product: AllProducts/SpecifyProducts/SpecifyProductsBlacklist.
                     * @return ProductScope Applicable product: AllProducts/SpecifyProducts/SpecifyProductsBlacklist.
                     * 
                     */
                    std::string GetProductScope() const;

                    /**
                     * 设置Applicable product: AllProducts/SpecifyProducts/SpecifyProductsBlacklist.
                     * @param _productScope Applicable product: AllProducts/SpecifyProducts/SpecifyProductsBlacklist.
                     * 
                     */
                    void SetProductScope(const std::string& _productScope);

                    /**
                     * 判断参数 ProductScope 是否已赋值
                     * @return ProductScope 是否已赋值
                     * 
                     */
                    bool ProductScopeHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return EffectiveTime Start time.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Start time.
                     * @param _effectiveTime Start time.
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return ExpireTime End time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置End time.
                     * @param _expireTime End time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Application notes
                     * @return ApplyReason Application notes
                     * 
                     */
                    std::string GetApplyReason() const;

                    /**
                     * 设置Application notes
                     * @param _applyReason Application notes
                     * 
                     */
                    void SetApplyReason(const std::string& _applyReason);

                    /**
                     * 判断参数 ApplyReason 是否已赋值
                     * @return ApplyReason 是否已赋值
                     * 
                     */
                    bool ApplyReasonHasBeenSet() const;

                private:

                    /**
                     * Voucher ID.
                     */
                    int64_t m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Sub-account UIN
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Voucher status: Issued/Used/Expired/Invalidated.
                     */
                    std::string m_voucherStatus;
                    bool m_voucherStatusHasBeenSet;

                    /**
                     * Remaining amount.
                     */
                    double m_remainingAmount;
                    bool m_remainingAmountHasBeenSet;

                    /**
                     * Denomination.
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Purpose: ProductTrial/CustomerOffer.
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Payment mode. valid values: AllPayment, Prepaid, and Postpaid.
                     */
                    std::string m_paymentMode;
                    bool m_paymentModeHasBeenSet;

                    /**
                     * Applicable product: AllProducts/SpecifyProducts/SpecifyProductsBlacklist.
                     */
                    std::string m_productScope;
                    bool m_productScopeHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Application notes
                     */
                    std::string m_applyReason;
                    bool m_applyReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERITEM_H_
