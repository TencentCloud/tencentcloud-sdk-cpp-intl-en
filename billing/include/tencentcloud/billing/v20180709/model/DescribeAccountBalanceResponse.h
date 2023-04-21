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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAccountBalance response structure.
                */
                class DescribeAccountBalanceResponse : public AbstractModel
                {
                public:
                    DescribeAccountBalanceResponse();
                    ~DescribeAccountBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Available account balance in cents, which takes the same calculation rules as `RealBalance`, `CreditBalance`, and `RealCreditBalance`.
                     * @return Balance Available account balance in cents, which takes the same calculation rules as `RealBalance`, `CreditBalance`, and `RealCreditBalance`.
                     */
                    int64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取The UIN to query.
                     * @return Uin The UIN to query.
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Available account balance in cents, which takes the same calculation rules as `Balance`, `CreditBalance`, and `RealCreditBalance`.
                     * @return RealBalance Available account balance in cents, which takes the same calculation rules as `Balance`, `CreditBalance`, and `RealCreditBalance`.
                     */
                    double GetRealBalance() const;

                    /**
                     * 判断参数 RealBalance 是否已赋值
                     * @return RealBalance 是否已赋值
                     */
                    bool RealBalanceHasBeenSet() const;

                    /**
                     * 获取Cash account balance in cents. Currently, this field is not applied.
                     * @return CashAccountBalance Cash account balance in cents. Currently, this field is not applied.
                     */
                    double GetCashAccountBalance() const;

                    /**
                     * 判断参数 CashAccountBalance 是否已赋值
                     * @return CashAccountBalance 是否已赋值
                     */
                    bool CashAccountBalanceHasBeenSet() const;

                    /**
                     * 获取Income account balance in cents. Currently, this field is not applied.
                     * @return IncomeIntoAccountBalance Income account balance in cents. Currently, this field is not applied.
                     */
                    double GetIncomeIntoAccountBalance() const;

                    /**
                     * 判断参数 IncomeIntoAccountBalance 是否已赋值
                     * @return IncomeIntoAccountBalance 是否已赋值
                     */
                    bool IncomeIntoAccountBalanceHasBeenSet() const;

                    /**
                     * 获取Present account balance in cents. Currently, this field is not applied.
                     * @return PresentAccountBalance Present account balance in cents. Currently, this field is not applied.
                     */
                    double GetPresentAccountBalance() const;

                    /**
                     * 判断参数 PresentAccountBalance 是否已赋值
                     * @return PresentAccountBalance 是否已赋值
                     */
                    bool PresentAccountBalanceHasBeenSet() const;

                    /**
                     * 获取Frozen amount in cents.
                     * @return FreezeAmount Frozen amount in cents.
                     */
                    double GetFreezeAmount() const;

                    /**
                     * 判断参数 FreezeAmount 是否已赋值
                     * @return FreezeAmount 是否已赋值
                     */
                    bool FreezeAmountHasBeenSet() const;

                    /**
                     * 获取Overdue amount in cents, which is when the available credit balance is negative.
                     * @return OweAmount Overdue amount in cents, which is when the available credit balance is negative.
                     */
                    double GetOweAmount() const;

                    /**
                     * 判断参数 OweAmount 是否已赋值
                     * @return OweAmount 是否已赋值
                     */
                    bool OweAmountHasBeenSet() const;

                    /**
                     * 获取Whether overdue payments are allowed. Currently, this field is not applied.
                     * @return IsAllowArrears Whether overdue payments are allowed. Currently, this field is not applied.
                     */
                    bool GetIsAllowArrears() const;

                    /**
                     * 判断参数 IsAllowArrears 是否已赋值
                     * @return IsAllowArrears 是否已赋值
                     */
                    bool IsAllowArrearsHasBeenSet() const;

                    /**
                     * 获取Whether you have a credit limit. Currently, this field is not applied.
                     * @return IsCreditLimited Whether you have a credit limit. Currently, this field is not applied.
                     */
                    bool GetIsCreditLimited() const;

                    /**
                     * 判断参数 IsCreditLimited 是否已赋值
                     * @return IsCreditLimited 是否已赋值
                     */
                    bool IsCreditLimitedHasBeenSet() const;

                    /**
                     * 获取Credit limit in cents. Credit limit－available credit balance = consumption amount
                     * @return CreditAmount Credit limit in cents. Credit limit－available credit balance = consumption amount
                     */
                    double GetCreditAmount() const;

                    /**
                     * 判断参数 CreditAmount 是否已赋值
                     * @return CreditAmount 是否已赋值
                     */
                    bool CreditAmountHasBeenSet() const;

                    /**
                     * 获取Available credit balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `RealCreditBalance`.
                     * @return CreditBalance Available credit balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `RealCreditBalance`.
                     */
                    double GetCreditBalance() const;

                    /**
                     * 判断参数 CreditBalance 是否已赋值
                     * @return CreditBalance 是否已赋值
                     */
                    bool CreditBalanceHasBeenSet() const;

                    /**
                     * 获取Available account balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `CreditBalance`.
                     * @return RealCreditBalance Available account balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `CreditBalance`.
                     */
                    double GetRealCreditBalance() const;

                    /**
                     * 判断参数 RealCreditBalance 是否已赋值
                     * @return RealCreditBalance 是否已赋值
                     */
                    bool RealCreditBalanceHasBeenSet() const;

                private:

                    /**
                     * Available account balance in cents, which takes the same calculation rules as `RealBalance`, `CreditBalance`, and `RealCreditBalance`.
                     */
                    int64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * The UIN to query.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Available account balance in cents, which takes the same calculation rules as `Balance`, `CreditBalance`, and `RealCreditBalance`.
                     */
                    double m_realBalance;
                    bool m_realBalanceHasBeenSet;

                    /**
                     * Cash account balance in cents. Currently, this field is not applied.
                     */
                    double m_cashAccountBalance;
                    bool m_cashAccountBalanceHasBeenSet;

                    /**
                     * Income account balance in cents. Currently, this field is not applied.
                     */
                    double m_incomeIntoAccountBalance;
                    bool m_incomeIntoAccountBalanceHasBeenSet;

                    /**
                     * Present account balance in cents. Currently, this field is not applied.
                     */
                    double m_presentAccountBalance;
                    bool m_presentAccountBalanceHasBeenSet;

                    /**
                     * Frozen amount in cents.
                     */
                    double m_freezeAmount;
                    bool m_freezeAmountHasBeenSet;

                    /**
                     * Overdue amount in cents, which is when the available credit balance is negative.
                     */
                    double m_oweAmount;
                    bool m_oweAmountHasBeenSet;

                    /**
                     * Whether overdue payments are allowed. Currently, this field is not applied.
                     */
                    bool m_isAllowArrears;
                    bool m_isAllowArrearsHasBeenSet;

                    /**
                     * Whether you have a credit limit. Currently, this field is not applied.
                     */
                    bool m_isCreditLimited;
                    bool m_isCreditLimitedHasBeenSet;

                    /**
                     * Credit limit in cents. Credit limit－available credit balance = consumption amount
                     */
                    double m_creditAmount;
                    bool m_creditAmountHasBeenSet;

                    /**
                     * Available credit balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `RealCreditBalance`.
                     */
                    double m_creditBalance;
                    bool m_creditBalanceHasBeenSet;

                    /**
                     * Available account balance in cents, which takes the same calculation rules as `Balance`, `RealBalance`, and `CreditBalance`.
                     */
                    double m_realCreditBalance;
                    bool m_realCreditBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTBALANCERESPONSE_H_
