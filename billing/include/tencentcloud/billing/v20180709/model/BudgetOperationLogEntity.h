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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetInfoDiffEntity.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Budget modification record info
                */
                class BudgetOperationLogEntity : public AbstractModel
                {
                public:
                    BudgetOperationLogEntity();
                    ~BudgetOperationLogEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Payer Uin
                     * @return PayerUin Payer Uin
                     * 
                     */
                    uint64_t GetPayerUin() const;

                    /**
                     * 设置Payer Uin
                     * @param _payerUin Payer Uin
                     * 
                     */
                    void SetPayerUin(const uint64_t& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取User Uin

                     * @return OwnerUin User Uin

                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置User Uin

                     * @param _ownerUin User Uin

                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Operation user Uin
                     * @return OperateUin Operation user Uin
                     * 
                     */
                    uint64_t GetOperateUin() const;

                    /**
                     * 设置Operation user Uin
                     * @param _operateUin Operation user Uin
                     * 
                     */
                    void SetOperateUin(const uint64_t& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取Date
                     * @return BillDay Date
                     * 
                     */
                    uint64_t GetBillDay() const;

                    /**
                     * 设置Date
                     * @param _billDay Date
                     * 
                     */
                    void SetBillDay(const uint64_t& _billDay);

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

                    /**
                     * 获取month
                     * @return BillMonth month
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置month
                     * @param _billMonth month
                     * 
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     * 
                     */
                    bool BillMonthHasBeenSet() const;

                    /**
                     * 获取Modify type: ADD (add new), UPDATE (update), DELETE (delete)
                     * @return Action Modify type: ADD (add new), UPDATE (update), DELETE (delete)
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Modify type: ADD (add new), UPDATE (update), DELETE (delete)
                     * @param _action Modify type: ADD (add new), UPDATE (update), DELETE (delete)
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取modification information
                     * @return DiffValue modification information
                     * 
                     */
                    std::vector<BudgetInfoDiffEntity> GetDiffValue() const;

                    /**
                     * 设置modification information
                     * @param _diffValue modification information
                     * 
                     */
                    void SetDiffValue(const std::vector<BudgetInfoDiffEntity>& _diffValue);

                    /**
                     * 判断参数 DiffValue 是否已赋值
                     * @return DiffValue 是否已赋值
                     * 
                     */
                    bool DiffValueHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return UpdateTime Modification time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time.
                     * @param _updateTime Modification time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Modify channel: CONSOLE/API
                     * @return OperationChannel Modify channel: CONSOLE/API
                     * 
                     */
                    std::string GetOperationChannel() const;

                    /**
                     * 设置Modify channel: CONSOLE/API
                     * @param _operationChannel Modify channel: CONSOLE/API
                     * 
                     */
                    void SetOperationChannel(const std::string& _operationChannel);

                    /**
                     * 判断参数 OperationChannel 是否已赋值
                     * @return OperationChannel 是否已赋值
                     * 
                     */
                    bool OperationChannelHasBeenSet() const;

                    /**
                     * 获取Budget project id
                     * @return BudgetId Budget project id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置Budget project id
                     * @param _budgetId Budget project id
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                private:

                    /**
                     * Payer Uin
                     */
                    uint64_t m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * User Uin

                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operation user Uin
                     */
                    uint64_t m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Date
                     */
                    uint64_t m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * month
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * Modify type: ADD (add new), UPDATE (update), DELETE (delete)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * modification information
                     */
                    std::vector<BudgetInfoDiffEntity> m_diffValue;
                    bool m_diffValueHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Modify channel: CONSOLE/API
                     */
                    std::string m_operationChannel;
                    bool m_operationChannelHasBeenSet;

                    /**
                     * Budget project id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETOPERATIONLOGENTITY_H_
