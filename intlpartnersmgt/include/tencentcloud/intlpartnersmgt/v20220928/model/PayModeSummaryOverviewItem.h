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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ActionSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Payment mode details in the customer bill data totaled by payment mode
                */
                class PayModeSummaryOverviewItem : public AbstractModel
                {
                public:
                    PayModeSummaryOverviewItem();
                    ~PayModeSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing mode name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayModeName Billing mode name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payModeName Billing mode name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     * 
                     */
                    bool PayModeNameHasBeenSet() const;

                    /**
                     * 获取The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originalCost The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Bill details in each payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Detail Bill details in each payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ActionSummaryOverviewItem> GetDetail() const;

                    /**
                     * 设置Bill details in each payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detail Bill details in each payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetail(const std::vector<ActionSummaryOverviewItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoucherPayAmount The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voucherPayAmount The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCost Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCost Total consumption amount accurate down to eight decimal places
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

                private:

                    /**
                     * Billing mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Billing mode name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Bill details in each payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ActionSummaryOverviewItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_
