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
                     * 获取Payment mode.
                     * @return PayMode Payment mode.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode.
                     * @param _payMode Payment mode.
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
                     * 获取Payment mode name.
                     * @return PayModeName Payment mode name.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Payment mode name.
                     * @param _payModeName Payment mode name.
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
                     * 获取Actual total consumption, up to 8 decimal places.
                     * @return OriginalCost Actual total consumption, up to 8 decimal places.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置Actual total consumption, up to 8 decimal places.
                     * @param _originalCost Actual total consumption, up to 8 decimal places.
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
                     * 获取Bill details in each payment mode.
                     * @return Detail Bill details in each payment mode.
                     * 
                     */
                    std::vector<ActionSummaryOverviewItem> GetDetail() const;

                    /**
                     * 设置Bill details in each payment mode.
                     * @param _detail Bill details in each payment mode.
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
                     * 获取Voucher payment amount, up to 8 decimal places.
                     * @return VoucherPayAmount Voucher payment amount, up to 8 decimal places.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher payment amount, up to 8 decimal places.
                     * @param _voucherPayAmount Voucher payment amount, up to 8 decimal places.
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
                     * 获取Total consumption, up to 8 decimal places.
                     * @return TotalCost Total consumption, up to 8 decimal places.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total consumption, up to 8 decimal places.
                     * @param _totalCost Total consumption, up to 8 decimal places.
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
                     * Payment mode.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Payment mode name.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Actual total consumption, up to 8 decimal places.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Bill details in each payment mode.
                     */
                    std::vector<ActionSummaryOverviewItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Voucher payment amount, up to 8 decimal places.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Total consumption, up to 8 decimal places.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_PAYMODESUMMARYOVERVIEWITEM_H_
