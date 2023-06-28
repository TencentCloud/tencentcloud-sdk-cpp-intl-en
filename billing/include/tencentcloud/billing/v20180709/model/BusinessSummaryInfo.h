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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYINFO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYINFO_H_

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
                * Detailed summary of products
                */
                class BusinessSummaryInfo : public AbstractModel
                {
                public:
                    BusinessSummaryInfo();
                    ~BusinessSummaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product code
                     * @return BusinessCode Product code
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
                     * @param _businessCode Product code
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
                     * 获取Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * @return BusinessCodeName Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * @param _businessCodeName Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
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
                     * 获取Original cost in USD.  This parameter has become valid since Bill 3.0 took effect in May 2021, and before that `-` was returned for this parameter. If a customer has applied for a contract price different from the prices listed on the official website, `-` will also be returned for this parameter. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCost Original cost in USD.  This parameter has become valid since Bill 3.0 took effect in May 2021, and before that `-` was returned for this parameter. If a customer has applied for a contract price different from the prices listed on the official website, `-` will also be returned for this parameter. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Original cost in USD.  This parameter has become valid since Bill 3.0 took effect in May 2021, and before that `-` was returned for this parameter. If a customer has applied for a contract price different from the prices listed on the official website, `-` will also be returned for this parameter. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCost Original cost in USD.  This parameter has become valid since Bill 3.0 took effect in May 2021, and before that `-` was returned for this parameter. If a customer has applied for a contract price different from the prices listed on the official website, `-` will also be returned for this parameter. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Total amount after discount
                     * @return RealTotalCost Total amount after discount
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total amount after discount
                     * @param _realTotalCost Total amount after discount
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
                     * 获取Cash credit:  The amount paid from the user’s cash account
                     * @return CashPayAmount Cash credit:  The amount paid from the user’s cash account
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash credit:  The amount paid from the user’s cash account
                     * @param _cashPayAmount Cash credit:  The amount paid from the user’s cash account
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
                     * 获取Free credit:  The amount paid by the user’s free credit
                     * @return IncentivePayAmount Free credit:  The amount paid by the user’s free credit
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Free credit:  The amount paid by the user’s free credit
                     * @param _incentivePayAmount Free credit:  The amount paid by the user’s free credit
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
                     * 获取Voucher payment:  The voucher deduction amount
                     * @return VoucherPayAmount Voucher payment:  The voucher deduction amount
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher payment:  The voucher deduction amount
                     * @param _voucherPayAmount Voucher payment:  The voucher deduction amount
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
                     * 获取Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return TransferPayAmount Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _transferPayAmount Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                private:

                    /**
                     * Product code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Original cost in USD.  This parameter has become valid since Bill 3.0 took effect in May 2021, and before that `-` was returned for this parameter. If a customer has applied for a contract price different from the prices listed on the official website, `-` will also be returned for this parameter. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Total amount after discount
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cash credit:  The amount paid from the user’s cash account
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Free credit:  The amount paid by the user’s free credit
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Voucher payment:  The voucher deduction amount
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUSINESSSUMMARYINFO_H_
