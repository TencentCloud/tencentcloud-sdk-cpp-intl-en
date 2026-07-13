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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYBUDGETREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYBUDGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetWarn.h>
#include <tencentcloud/billing/v20180709/model/BudgetConditionsForm.h>
#include <tencentcloud/billing/v20180709/model/WaveThresholdForm.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyBudget request structure.
                */
                class ModifyBudgetRequest : public AbstractModel
                {
                public:
                    ModifyBudgetRequest();
                    ~ModifyBudgetRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Budget Name
                     * @return BudgetName Budget Name
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置Budget Name
                     * @param _budgetName Budget Name
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取DAY, MONTH, QUARTER, YEAR
                     * @return CycleType DAY, MONTH, QUARTER, YEAR
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置DAY, MONTH, QUARTER, YEAR
                     * @param _cycleType DAY, MONTH, QUARTER, YEAR
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Validity start time 2025-01-01
                     * @return PeriodBegin Validity start time 2025-01-01
                     * 
                     */
                    std::string GetPeriodBegin() const;

                    /**
                     * 设置Validity start time 2025-01-01
                     * @param _periodBegin Validity start time 2025-01-01
                     * 
                     */
                    void SetPeriodBegin(const std::string& _periodBegin);

                    /**
                     * 判断参数 PeriodBegin 是否已赋值
                     * @return PeriodBegin 是否已赋值
                     * 
                     */
                    bool PeriodBeginHasBeenSet() const;

                    /**
                     * 获取Validity End Time 2025-12-01
                     * @return PeriodEnd Validity End Time 2025-12-01
                     * 
                     */
                    std::string GetPeriodEnd() const;

                    /**
                     * 设置Validity End Time 2025-12-01
                     * @param _periodEnd Validity End Time 2025-12-01
                     * 
                     */
                    void SetPeriodEnd(const std::string& _periodEnd);

                    /**
                     * 判断参数 PeriodEnd 是否已赋值
                     * @return PeriodEnd 是否已赋值
                     * 
                     */
                    bool PeriodEndHasBeenSet() const;

                    /**
                     * 获取FIX fixed value, CYCLE different value
                     * @return PlanType FIX fixed value, CYCLE different value
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置FIX fixed value, CYCLE different value
                     * @param _planType FIX fixed value, CYCLE different value
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取Budget amount limit 
Set as a fixed value when the schedule type is fixed budget.
When the schedule type is CYCLE (budget planning), pass [{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}].
                     * @return BudgetQuota Budget amount limit 
Set as a fixed value when the schedule type is fixed budget.
When the schedule type is CYCLE (budget planning), pass [{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}].
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置Budget amount limit 
Set as a fixed value when the schedule type is fixed budget.
When the schedule type is CYCLE (budget planning), pass [{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}].
                     * @param _budgetQuota Budget amount limit 
Set as a fixed value when the schedule type is fixed budget.
When the schedule type is CYCLE (budget planning), pass [{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}].
                     * 
                     */
                    void SetBudgetQuota(const std::string& _budgetQuota);

                    /**
                     * 判断参数 BudgetQuota 是否已赋值
                     * @return BudgetQuota 是否已赋值
                     * 
                     */
                    bool BudgetQuotaHasBeenSet() const;

                    /**
                     * 获取BILL System bill, CONSUMPTION Consumption bill
                     * @return BillType BILL System bill, CONSUMPTION Consumption bill
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置BILL System bill, CONSUMPTION Consumption bill
                     * @param _billType BILL System bill, CONSUMPTION Consumption bill
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (pre-tax)
                     * @return FeeType COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (pre-tax)
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (pre-tax)
                     * @param _feeType COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (pre-tax)
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取threshold alert
                     * @return WarnJson threshold alert
                     * 
                     */
                    std::vector<BudgetWarn> GetWarnJson() const;

                    /**
                     * 设置threshold alert
                     * @param _warnJson threshold alert
                     * 
                     */
                    void SetWarnJson(const std::vector<BudgetWarn>& _warnJson);

                    /**
                     * 判断参数 WarnJson 是否已赋值
                     * @return WarnJson 是否已赋值
                     * 
                     */
                    bool WarnJsonHasBeenSet() const;

                    /**
                     * 获取Budget remark
                     * @return BudgetNote Budget remark
                     * 
                     */
                    std::string GetBudgetNote() const;

                    /**
                     * 设置Budget remark
                     * @param _budgetNote Budget remark
                     * 
                     */
                    void SetBudgetNote(const std::string& _budgetNote);

                    /**
                     * 判断参数 BudgetNote 是否已赋值
                     * @return BudgetNote 是否已赋值
                     * 
                     */
                    bool BudgetNoteHasBeenSet() const;

                    /**
                     * 获取Budget dimension range condition
                     * @return DimensionsRange Budget dimension range condition
                     * 
                     */
                    BudgetConditionsForm GetDimensionsRange() const;

                    /**
                     * 设置Budget dimension range condition
                     * @param _dimensionsRange Budget dimension range condition
                     * 
                     */
                    void SetDimensionsRange(const BudgetConditionsForm& _dimensionsRange);

                    /**
                     * 判断参数 DimensionsRange 是否已赋值
                     * @return DimensionsRange 是否已赋值
                     * 
                     */
                    bool DimensionsRangeHasBeenSet() const;

                    /**
                     * 获取fluctuation alert
                     * @return WaveThresholdJson fluctuation alert
                     * 
                     */
                    std::vector<WaveThresholdForm> GetWaveThresholdJson() const;

                    /**
                     * 设置fluctuation alert
                     * @param _waveThresholdJson fluctuation alert
                     * 
                     */
                    void SetWaveThresholdJson(const std::vector<WaveThresholdForm>& _waveThresholdJson);

                    /**
                     * 判断参数 WaveThresholdJson 是否已赋值
                     * @return WaveThresholdJson 是否已赋值
                     * 
                     */
                    bool WaveThresholdJsonHasBeenSet() const;

                private:

                    /**
                     * Budget project id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * Budget Name
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * DAY, MONTH, QUARTER, YEAR
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Validity start time 2025-01-01
                     */
                    std::string m_periodBegin;
                    bool m_periodBeginHasBeenSet;

                    /**
                     * Validity End Time 2025-12-01
                     */
                    std::string m_periodEnd;
                    bool m_periodEndHasBeenSet;

                    /**
                     * FIX fixed value, CYCLE different value
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Budget amount limit 
Set as a fixed value when the schedule type is fixed budget.
When the schedule type is CYCLE (budget planning), pass [{"dateDesc":"2025-07","quota":"1000"},{"dateDesc":"2025-08","quota":"2000"}].
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * BILL System bill, CONSUMPTION Consumption bill
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (pre-tax)
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * threshold alert
                     */
                    std::vector<BudgetWarn> m_warnJson;
                    bool m_warnJsonHasBeenSet;

                    /**
                     * Budget remark
                     */
                    std::string m_budgetNote;
                    bool m_budgetNoteHasBeenSet;

                    /**
                     * Budget dimension range condition
                     */
                    BudgetConditionsForm m_dimensionsRange;
                    bool m_dimensionsRangeHasBeenSet;

                    /**
                     * fluctuation alert
                     */
                    std::vector<WaveThresholdForm> m_waveThresholdJson;
                    bool m_waveThresholdJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYBUDGETREQUEST_H_
