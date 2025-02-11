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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTADATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTADATA_H_

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
                * Sub-customer credit balance data
                */
                class QueryCustomerBillingQuotaData : public AbstractModel
                {
                public:
                    QueryCustomerBillingQuotaData();
                    ~QueryCustomerBillingQuotaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total credit limit (unit: cny), accurate down to two decimal places.
                     * @return TotalCredit Total credit limit (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    double GetTotalCredit() const;

                    /**
                     * 设置Total credit limit (unit: cny), accurate down to two decimal places.
                     * @param _totalCredit Total credit limit (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    void SetTotalCredit(const double& _totalCredit);

                    /**
                     * 判断参数 TotalCredit 是否已赋值
                     * @return TotalCredit 是否已赋值
                     * 
                     */
                    bool TotalCreditHasBeenSet() const;

                    /**
                     * 获取Remaining credit limit (unit: cny), accurate down to two decimal places.
                     * @return RemainingCredit Remaining credit limit (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 设置Remaining credit limit (unit: cny), accurate down to two decimal places.
                     * @param _remainingCredit Remaining credit limit (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    void SetRemainingCredit(const double& _remainingCredit);

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取Remaining total voucher amount (unit: cny), accurate down to two decimal places.
                     * @return RemainingVoucher Remaining total voucher amount (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    double GetRemainingVoucher() const;

                    /**
                     * 设置Remaining total voucher amount (unit: cny), accurate down to two decimal places.
                     * @param _remainingVoucher Remaining total voucher amount (unit: cny), accurate down to two decimal places.
                     * 
                     */
                    void SetRemainingVoucher(const double& _remainingVoucher);

                    /**
                     * 判断参数 RemainingVoucher 是否已赋值
                     * @return RemainingVoucher 是否已赋值
                     * 
                     */
                    bool RemainingVoucherHasBeenSet() const;

                    /**
                     * 获取Forced status
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Force Forced status
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetForce() const;

                    /**
                     * 设置Forced status
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _force Forced status
.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForce(const int64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取Prepaid frozen amount.
                     * @return PrepayFrozen Prepaid frozen amount.
                     * 
                     */
                    double GetPrepayFrozen() const;

                    /**
                     * 设置Prepaid frozen amount.
                     * @param _prepayFrozen Prepaid frozen amount.
                     * 
                     */
                    void SetPrepayFrozen(const double& _prepayFrozen);

                    /**
                     * 判断参数 PrepayFrozen 是否已赋值
                     * @return PrepayFrozen 是否已赋值
                     * 
                     */
                    bool PrepayFrozenHasBeenSet() const;

                    /**
                     * 获取Postpaid frozen amount.
                     * @return PostpayFrozen Postpaid frozen amount.
                     * 
                     */
                    double GetPostpayFrozen() const;

                    /**
                     * 设置Postpaid frozen amount.
                     * @param _postpayFrozen Postpaid frozen amount.
                     * 
                     */
                    void SetPostpayFrozen(const double& _postpayFrozen);

                    /**
                     * 判断参数 PostpayFrozen 是否已赋值
                     * @return PostpayFrozen 是否已赋值
                     * 
                     */
                    bool PostpayFrozenHasBeenSet() const;

                private:

                    /**
                     * Total credit limit (unit: cny), accurate down to two decimal places.
                     */
                    double m_totalCredit;
                    bool m_totalCreditHasBeenSet;

                    /**
                     * Remaining credit limit (unit: cny), accurate down to two decimal places.
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * Remaining total voucher amount (unit: cny), accurate down to two decimal places.
                     */
                    double m_remainingVoucher;
                    bool m_remainingVoucherHasBeenSet;

                    /**
                     * Forced status
.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * Prepaid frozen amount.
                     */
                    double m_prepayFrozen;
                    bool m_prepayFrozenHasBeenSet;

                    /**
                     * Postpaid frozen amount.
                     */
                    double m_postpayFrozen;
                    bool m_postpayFrozenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTADATA_H_
