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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ApplicableProducts.h>
#include <tencentcloud/billing/v20180709/model/ExcludedProducts.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Voucher information.
                */
                class VoucherInfos : public AbstractModel
                {
                public:
                    VoucherInfos();
                    ~VoucherInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The owner of the voucher.
                     * @return OwnerUin The owner of the voucher.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置The owner of the voucher.
                     * @param _ownerUin The owner of the voucher.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取The status of the voucher: `unUsed`, `used`, `delivered`, `cancel`, `overdue`
                     * @return Status The status of the voucher: `unUsed`, `used`, `delivered`, `cancel`, `overdue`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The status of the voucher: `unUsed`, `used`, `delivered`, `cancel`, `overdue`
                     * @param _status The status of the voucher: `unUsed`, `used`, `delivered`, `cancel`, `overdue`
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The value of the voucher. The value of this parameter is the voucher value (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @return NominalValue The value of the voucher. The value of this parameter is the voucher value (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    int64_t GetNominalValue() const;

                    /**
                     * 设置The value of the voucher. The value of this parameter is the voucher value (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @param _nominalValue The value of the voucher. The value of this parameter is the voucher value (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    void SetNominalValue(const int64_t& _nominalValue);

                    /**
                     * 判断参数 NominalValue 是否已赋值
                     * @return NominalValue 是否已赋值
                     * 
                     */
                    bool NominalValueHasBeenSet() const;

                    /**
                     * 获取The balance left. The value of this parameter is the balance left (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @return Balance The balance left. The value of this parameter is the balance left (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    int64_t GetBalance() const;

                    /**
                     * 设置The balance left. The value of this parameter is the balance left (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @param _balance The balance left. The value of this parameter is the balance left (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    void SetBalance(const int64_t& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取The voucher ID.
                     * @return VoucherId The voucher ID.
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置The voucher ID.
                     * @param _voucherId The voucher ID.
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取`postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all.
                     * @return PayMode `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置`postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all.
                     * @param _payMode `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all.
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
                     * 获取If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * @return PayScene If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * @param _payScene If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取The start time of the validity period.
                     * @return BeginTime The start time of the validity period.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of the validity period.
                     * @param _beginTime The start time of the validity period.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the validity period.
                     * @return EndTime The end time of the validity period.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the validity period.
                     * @param _endTime The end time of the validity period.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The products that are applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ApplicableProducts The products that are applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ApplicableProducts GetApplicableProducts() const;

                    /**
                     * 设置The products that are applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _applicableProducts The products that are applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetApplicableProducts(const ApplicableProducts& _applicableProducts);

                    /**
                     * 判断参数 ApplicableProducts 是否已赋值
                     * @return ApplicableProducts 是否已赋值
                     * 
                     */
                    bool ApplicableProductsHasBeenSet() const;

                    /**
                     * 获取The products that are not applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ExcludedProducts The products that are not applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<ExcludedProducts> GetExcludedProducts() const;

                    /**
                     * 设置The products that are not applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _excludedProducts The products that are not applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetExcludedProducts(const std::vector<ExcludedProducts>& _excludedProducts);

                    /**
                     * 判断参数 ExcludedProducts 是否已赋值
                     * @return ExcludedProducts 是否已赋值
                     * 
                     */
                    bool ExcludedProductsHasBeenSet() const;

                private:

                    /**
                     * The owner of the voucher.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * The status of the voucher: `unUsed`, `used`, `delivered`, `cancel`, `overdue`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The value of the voucher. The value of this parameter is the voucher value (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     */
                    int64_t m_nominalValue;
                    bool m_nominalValueHasBeenSet;

                    /**
                     * The balance left. The value of this parameter is the balance left (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * The voucher ID.
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * If `PayMode` is `postPay`, this parameter may be `spotpay` (spot instance) or `settle account` (regular pay-as-you-go). If `PayMode` is `prePay`, this parameter may be `purchase`, `renew`, or `modify` (downgrade/upgrade). If `PayMode` is `riPay`, this parameter may be `oneOffFee` (prepayment of reserved instance) or `hourlyFee` (hourly billing of reserved instance). `*` means to query vouchers that support all billing scenarios.
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * The start time of the validity period.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of the validity period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The products that are applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ApplicableProducts m_applicableProducts;
                    bool m_applicableProductsHasBeenSet;

                    /**
                     * The products that are not applicable.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<ExcludedProducts> m_excludedProducts;
                    bool m_excludedProductsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_VOUCHERINFOS_H_
