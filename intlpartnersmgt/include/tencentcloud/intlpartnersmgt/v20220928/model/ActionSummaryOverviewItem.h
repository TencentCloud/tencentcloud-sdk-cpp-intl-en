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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ACTIONSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ACTIONSUMMARYOVERVIEWITEM_H_

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
                * Transaction type details in the customer bill data totaled by payment mode
                */
                class ActionSummaryOverviewItem : public AbstractModel
                {
                public:
                    ActionSummaryOverviewItem();
                    ~ActionSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transaction type code.
                     * @return ActionType Transaction type code.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type code.
                     * @param _actionType Transaction type code.
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
                     * 获取Transaction type name.
                     * @return ActionTypeName Transaction type name.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type name.
                     * @param _actionTypeName Transaction type name.
                     * 
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

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
                     * Transaction type code.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Transaction type name.
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Actual total consumption, up to 8 decimal places.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

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

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ACTIONSUMMARYOVERVIEWITEM_H_
