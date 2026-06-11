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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_

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
                * DescribeOrgMemberAccountBalanceData
                */
                class DescribeOrgMemberAccountBalanceData : public AbstractModel
                {
                public:
                    DescribeOrgMemberAccountBalanceData();
                    ~DescribeOrgMemberAccountBalanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Member account Uin</p>
                     * @return MemberUin <p>Member account Uin</p>
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置<p>Member account Uin</p>
                     * @param _memberUin <p>Member account Uin</p>
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取<p>Member name</p>
                     * @return MemberName <p>Member name</p>
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置<p>Member name</p>
                     * @param _memberName <p>Member name</p>
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a credit account</p>
                     * @return IsCreditAccount <p>Whether it is a credit account</p>
                     * 
                     */
                    bool GetIsCreditAccount() const;

                    /**
                     * 设置<p>Whether it is a credit account</p>
                     * @param _isCreditAccount <p>Whether it is a credit account</p>
                     * 
                     */
                    void SetIsCreditAccount(const bool& _isCreditAccount);

                    /**
                     * 判断参数 IsCreditAccount 是否已赋值
                     * @return IsCreditAccount 是否已赋值
                     * 
                     */
                    bool IsCreditAccountHasBeenSet() const;

                    /**
                     * 获取<p>Current actual available balance</p><p>Unit: cent</p>
                     * @return RealBalance <p>Current actual available balance</p><p>Unit: cent</p>
                     * 
                     */
                    double GetRealBalance() const;

                    /**
                     * 设置<p>Current actual available balance</p><p>Unit: cent</p>
                     * @param _realBalance <p>Current actual available balance</p><p>Unit: cent</p>
                     * 
                     */
                    void SetRealBalance(const double& _realBalance);

                    /**
                     * 判断参数 RealBalance 是否已赋值
                     * @return RealBalance 是否已赋值
                     * 
                     */
                    bool RealBalanceHasBeenSet() const;

                    /**
                     * 获取<p>Cash account balance</p><p>Unit: cent</p>
                     * @return CashAccountBalance <p>Cash account balance</p><p>Unit: cent</p>
                     * 
                     */
                    double GetCashAccountBalance() const;

                    /**
                     * 设置<p>Cash account balance</p><p>Unit: cent</p>
                     * @param _cashAccountBalance <p>Cash account balance</p><p>Unit: cent</p>
                     * 
                     */
                    void SetCashAccountBalance(const double& _cashAccountBalance);

                    /**
                     * 判断参数 CashAccountBalance 是否已赋值
                     * @return CashAccountBalance 是否已赋值
                     * 
                     */
                    bool CashAccountBalanceHasBeenSet() const;

                    /**
                     * 获取<p>Credit limit</p><p>Unit: cent</p><p>Credit limit = Basic credit limit + Temporary credit limit</p>
                     * @return CreditAmount <p>Credit limit</p><p>Unit: cent</p><p>Credit limit = Basic credit limit + Temporary credit limit</p>
                     * 
                     */
                    double GetCreditAmount() const;

                    /**
                     * 设置<p>Credit limit</p><p>Unit: cent</p><p>Credit limit = Basic credit limit + Temporary credit limit</p>
                     * @param _creditAmount <p>Credit limit</p><p>Unit: cent</p><p>Credit limit = Basic credit limit + Temporary credit limit</p>
                     * 
                     */
                    void SetCreditAmount(const double& _creditAmount);

                    /**
                     * 判断参数 CreditAmount 是否已赋值
                     * @return CreditAmount 是否已赋值
                     * 
                     */
                    bool CreditAmountHasBeenSet() const;

                    /**
                     * 获取<p>Temporary credit limit</p><p>Unit: cent</p>
                     * @return TempCredit <p>Temporary credit limit</p><p>Unit: cent</p>
                     * 
                     */
                    double GetTempCredit() const;

                    /**
                     * 设置<p>Temporary credit limit</p><p>Unit: cent</p>
                     * @param _tempCredit <p>Temporary credit limit</p><p>Unit: cent</p>
                     * 
                     */
                    void SetTempCredit(const double& _tempCredit);

                    /**
                     * 判断参数 TempCredit 是否已赋值
                     * @return TempCredit 是否已赋值
                     * 
                     */
                    bool TempCreditHasBeenSet() const;

                    /**
                     * 获取<p>Basic credit limit</p><p>Unit: cent</p>
                     * @return BasicCreditAmount <p>Basic credit limit</p><p>Unit: cent</p>
                     * 
                     */
                    double GetBasicCreditAmount() const;

                    /**
                     * 设置<p>Basic credit limit</p><p>Unit: cent</p>
                     * @param _basicCreditAmount <p>Basic credit limit</p><p>Unit: cent</p>
                     * 
                     */
                    void SetBasicCreditAmount(const double& _basicCreditAmount);

                    /**
                     * 判断参数 BasicCreditAmount 是否已赋值
                     * @return BasicCreditAmount 是否已赋值
                     * 
                     */
                    bool BasicCreditAmountHasBeenSet() const;

                    /**
                     * 获取<p>Overdue payments</p><p>Unit: cent</p>
                     * @return OweAmount <p>Overdue payments</p><p>Unit: cent</p>
                     * 
                     */
                    double GetOweAmount() const;

                    /**
                     * 设置<p>Overdue payments</p><p>Unit: cent</p>
                     * @param _oweAmount <p>Overdue payments</p><p>Unit: cent</p>
                     * 
                     */
                    void SetOweAmount(const double& _oweAmount);

                    /**
                     * 判断参数 OweAmount 是否已赋值
                     * @return OweAmount 是否已赋值
                     * 
                     */
                    bool OweAmountHasBeenSet() const;

                private:

                    /**
                     * <p>Member account Uin</p>
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * <p>Member name</p>
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * <p>Whether it is a credit account</p>
                     */
                    bool m_isCreditAccount;
                    bool m_isCreditAccountHasBeenSet;

                    /**
                     * <p>Current actual available balance</p><p>Unit: cent</p>
                     */
                    double m_realBalance;
                    bool m_realBalanceHasBeenSet;

                    /**
                     * <p>Cash account balance</p><p>Unit: cent</p>
                     */
                    double m_cashAccountBalance;
                    bool m_cashAccountBalanceHasBeenSet;

                    /**
                     * <p>Credit limit</p><p>Unit: cent</p><p>Credit limit = Basic credit limit + Temporary credit limit</p>
                     */
                    double m_creditAmount;
                    bool m_creditAmountHasBeenSet;

                    /**
                     * <p>Temporary credit limit</p><p>Unit: cent</p>
                     */
                    double m_tempCredit;
                    bool m_tempCreditHasBeenSet;

                    /**
                     * <p>Basic credit limit</p><p>Unit: cent</p>
                     */
                    double m_basicCreditAmount;
                    bool m_basicCreditAmountHasBeenSet;

                    /**
                     * <p>Overdue payments</p><p>Unit: cent</p>
                     */
                    double m_oweAmount;
                    bool m_oweAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEDATA_H_
