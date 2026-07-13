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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetWarn.h>
#include <tencentcloud/billing/v20180709/model/WaveThresholdForm.h>
#include <tencentcloud/billing/v20180709/model/BudgetSendInfoDto.h>
#include <tencentcloud/billing/v20180709/model/BudgetConditionsForm.h>
#include <tencentcloud/billing/v20180709/model/BudgetPlan.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Query returns complete budget information
                */
                class BudgetExtend : public AbstractModel
                {
                public:
                    BudgetExtend();
                    ~BudgetExtend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Budget limit
                     * @return BudgetQuota Budget limit
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置Budget limit
                     * @param _budgetQuota Budget limit
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
                     * 获取COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (before tax)
                     * @return FeeType COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (before tax)
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (before tax)
                     * @param _feeType COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (before tax)
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
                     * 获取Validity end time 2025-12-01
                     * @return PeriodEnd Validity end time 2025-12-01
                     * 
                     */
                    std::string GetPeriodEnd() const;

                    /**
                     * 设置Validity end time 2025-12-01
                     * @param _periodEnd Validity end time 2025-12-01
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
                     * 获取COST,USAGE,RI,SP
                     * @return Dimensions COST,USAGE,RI,SP
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置COST,USAGE,RI,SP
                     * @param _dimensions COST,USAGE,RI,SP
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

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
                     * 获取User UIN
                     * @return PayerUin User UIN
                     * 
                     */
                    uint64_t GetPayerUin() const;

                    /**
                     * 设置User UIN
                     * @param _payerUin User UIN
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
                     * 获取Custom sending object information
                     * @return SendDetail Custom sending object information
                     * 
                     */
                    std::string GetSendDetail() const;

                    /**
                     * 设置Custom sending object information
                     * @param _sendDetail Custom sending object information
                     * 
                     */
                    void SetSendDetail(const std::string& _sendDetail);

                    /**
                     * 判断参数 SendDetail 是否已赋值
                     * @return SendDetail 是否已赋值
                     * 
                     */
                    bool SendDetailHasBeenSet() const;

                    /**
                     * 获取Default uin sent
                     * @return DefaultMode Default uin sent
                     * 
                     */
                    int64_t GetDefaultMode() const;

                    /**
                     * 设置Default uin sent
                     * @param _defaultMode Default uin sent
                     * 
                     */
                    void SetDefaultMode(const int64_t& _defaultMode);

                    /**
                     * 判断参数 DefaultMode 是否已赋值
                     * @return DefaultMode 是否已赋值
                     * 
                     */
                    bool DefaultModeHasBeenSet() const;

                    /**
                     * 获取CUS custom budget, ZERO_COST zero-cost budget template, BY_MONTH monthly cost budget template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateType CUS custom budget, ZERO_COST zero-cost budget template, BY_MONTH monthly cost budget template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置CUS custom budget, ZERO_COST zero-cost budget template, BY_MONTH monthly cost budget template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateType CUS custom budget, ZERO_COST zero-cost budget template, BY_MONTH monthly cost budget template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取(1, "Not over budget")
(2, "Overspend")
                     * @return MoneyStatus (1, "Not over budget")
(2, "Overspend")
                     * 
                     */
                    int64_t GetMoneyStatus() const;

                    /**
                     * 设置(1, "Not over budget")
(2, "Overspend")
                     * @param _moneyStatus (1, "Not over budget")
(2, "Overspend")
                     * 
                     */
                    void SetMoneyStatus(const int64_t& _moneyStatus);

                    /**
                     * 判断参数 MoneyStatus 是否已赋值
                     * @return MoneyStatus 是否已赋值
                     * 
                     */
                    bool MoneyStatusHasBeenSet() const;

                    /**
                     * 获取Reminder count
                     * @return RemindTimes Reminder count
                     * 
                     */
                    int64_t GetRemindTimes() const;

                    /**
                     * 设置Reminder count
                     * @param _remindTimes Reminder count
                     * 
                     */
                    void SetRemindTimes(const int64_t& _remindTimes);

                    /**
                     * 判断参数 RemindTimes 是否已赋值
                     * @return RemindTimes 是否已赋值
                     * 
                     */
                    bool RemindTimesHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Update budget time
                     * @return UpdateTime Update budget time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update budget time
                     * @param _updateTime Update budget time
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
                     * 获取Associated Id of the budget
                     * @return BudgetId Associated Id of the budget
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置Associated Id of the budget
                     * @param _budgetId Associated Id of the budget
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
                     * 获取NO_FORECAST (Not set)
FORECAST_NO_DATA (Set up prediction but no data)
FORECAST_HAS_DATA (Set up prediction with predictive data)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasForecast NO_FORECAST (Not set)
FORECAST_NO_DATA (Set up prediction but no data)
FORECAST_HAS_DATA (Set up prediction with predictive data)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHasForecast() const;

                    /**
                     * 设置NO_FORECAST (Not set)
FORECAST_NO_DATA (Set up prediction but no data)
FORECAST_HAS_DATA (Set up prediction with predictive data)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasForecast NO_FORECAST (Not set)
FORECAST_NO_DATA (Set up prediction but no data)
FORECAST_HAS_DATA (Set up prediction with predictive data)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasForecast(const std::string& _hasForecast);

                    /**
                     * 判断参数 HasForecast 是否已赋值
                     * @return HasForecast 是否已赋值
                     * 
                     */
                    bool HasForecastHasBeenSet() const;

                    /**
                     * 获取predicted fee
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForecastCost predicted fee
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForecastCost() const;

                    /**
                     * 设置predicted fee
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forecastCost predicted fee
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForecastCost(const std::string& _forecastCost);

                    /**
                     * 判断参数 ForecastCost 是否已赋值
                     * @return ForecastCost 是否已赋值
                     * 
                     */
                    bool ForecastCostHasBeenSet() const;

                    /**
                     * 获取Projection progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForecastProgress Projection progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForecastProgress() const;

                    /**
                     * 设置Projection progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forecastProgress Projection progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForecastProgress(const std::string& _forecastProgress);

                    /**
                     * 判断参数 ForecastProgress 是否已赋值
                     * @return ForecastProgress 是否已赋值
                     * 
                     */
                    bool ForecastProgressHasBeenSet() const;

                    /**
                     * 获取actual fee
                     * @return RealCost actual fee
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置actual fee
                     * @param _realCost actual fee
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Custom send
                     * @return BudgetSendInfoForm Custom send
                     * 
                     */
                    std::vector<BudgetSendInfoDto> GetBudgetSendInfoForm() const;

                    /**
                     * 设置Custom send
                     * @param _budgetSendInfoForm Custom send
                     * 
                     */
                    void SetBudgetSendInfoForm(const std::vector<BudgetSendInfoDto>& _budgetSendInfoForm);

                    /**
                     * 判断参数 BudgetSendInfoForm 是否已赋值
                     * @return BudgetSendInfoForm 是否已赋值
                     * 
                     */
                    bool BudgetSendInfoFormHasBeenSet() const;

                    /**
                     * 获取current cycle
                     * @return CurDateDesc current cycle
                     * 
                     */
                    std::string GetCurDateDesc() const;

                    /**
                     * 设置current cycle
                     * @param _curDateDesc current cycle
                     * 
                     */
                    void SetCurDateDesc(const std::string& _curDateDesc);

                    /**
                     * 判断参数 CurDateDesc 是否已赋值
                     * @return CurDateDesc 是否已赋值
                     * 
                     */
                    bool CurDateDescHasBeenSet() const;

                    /**
                     * 获取EXPIRED
ACTIVE
UNACTIVATED Invalid
ACTIVATED To be effective
                     * @return BudgetStatus EXPIRED
ACTIVE
UNACTIVATED Invalid
ACTIVATED To be effective
                     * 
                     */
                    std::string GetBudgetStatus() const;

                    /**
                     * 设置EXPIRED
ACTIVE
UNACTIVATED Invalid
ACTIVATED To be effective
                     * @param _budgetStatus EXPIRED
ACTIVE
UNACTIVATED Invalid
ACTIVATED To be effective
                     * 
                     */
                    void SetBudgetStatus(const std::string& _budgetStatus);

                    /**
                     * 判断参数 BudgetStatus 是否已赋值
                     * @return BudgetStatus 是否已赋值
                     * 
                     */
                    bool BudgetStatusHasBeenSet() const;

                    /**
                     * 获取Budget dimension range condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DimensionsRange Budget dimension range condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BudgetConditionsForm GetDimensionsRange() const;

                    /**
                     * 设置Budget dimension range condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dimensionsRange Budget dimension range condition
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Budget progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BudgetProgress Budget progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBudgetProgress() const;

                    /**
                     * 设置Budget progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _budgetProgress Budget progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBudgetProgress(const std::string& _budgetProgress);

                    /**
                     * 判断参数 BudgetProgress 是否已赋值
                     * @return BudgetProgress 是否已赋值
                     * 
                     */
                    bool BudgetProgressHasBeenSet() const;

                    /**
                     * 获取Budget Type is set to budget planning and returns the budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BudgetQuotaJson Budget Type is set to budget planning and returns the budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BudgetPlan> GetBudgetQuotaJson() const;

                    /**
                     * 设置Budget Type is set to budget planning and returns the budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _budgetQuotaJson Budget Type is set to budget planning and returns the budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBudgetQuotaJson(const std::vector<BudgetPlan>& _budgetQuotaJson);

                    /**
                     * 判断参数 BudgetQuotaJson 是否已赋值
                     * @return BudgetQuotaJson 是否已赋值
                     * 
                     */
                    bool BudgetQuotaJsonHasBeenSet() const;

                private:

                    /**
                     * Budget Name
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * Budget limit
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * DAY, MONTH, QUARTER, YEAR
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * BILL System bill, CONSUMPTION Consumption bill
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * COST Original price, REAL_COST Actual fee, CASH Cash, INCENTIVE Free credit, VOUCHER Voucher, TRANSFER Allocated fees (royalty amount), TAX Tax, AMOUNT_BEFORE_TAX Cash payment (before tax)
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * Validity start time 2025-01-01
                     */
                    std::string m_periodBegin;
                    bool m_periodBeginHasBeenSet;

                    /**
                     * Validity end time 2025-12-01
                     */
                    std::string m_periodEnd;
                    bool m_periodEndHasBeenSet;

                    /**
                     * COST,USAGE,RI,SP
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * FIX fixed value, CYCLE different value
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * threshold alert
                     */
                    std::vector<BudgetWarn> m_warnJson;
                    bool m_warnJsonHasBeenSet;

                    /**
                     * User UIN
                     */
                    uint64_t m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * fluctuation alert
                     */
                    std::vector<WaveThresholdForm> m_waveThresholdJson;
                    bool m_waveThresholdJsonHasBeenSet;

                    /**
                     * Budget remark
                     */
                    std::string m_budgetNote;
                    bool m_budgetNoteHasBeenSet;

                    /**
                     * Custom sending object information
                     */
                    std::string m_sendDetail;
                    bool m_sendDetailHasBeenSet;

                    /**
                     * Default uin sent
                     */
                    int64_t m_defaultMode;
                    bool m_defaultModeHasBeenSet;

                    /**
                     * CUS custom budget, ZERO_COST zero-cost budget template, BY_MONTH monthly cost budget template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * (1, "Not over budget")
(2, "Overspend")
                     */
                    int64_t m_moneyStatus;
                    bool m_moneyStatusHasBeenSet;

                    /**
                     * Reminder count
                     */
                    int64_t m_remindTimes;
                    bool m_remindTimesHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update budget time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Associated Id of the budget
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * NO_FORECAST (Not set)
FORECAST_NO_DATA (Set up prediction but no data)
FORECAST_HAS_DATA (Set up prediction with predictive data)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hasForecast;
                    bool m_hasForecastHasBeenSet;

                    /**
                     * predicted fee
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forecastCost;
                    bool m_forecastCostHasBeenSet;

                    /**
                     * Projection progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forecastProgress;
                    bool m_forecastProgressHasBeenSet;

                    /**
                     * actual fee
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Custom send
                     */
                    std::vector<BudgetSendInfoDto> m_budgetSendInfoForm;
                    bool m_budgetSendInfoFormHasBeenSet;

                    /**
                     * current cycle
                     */
                    std::string m_curDateDesc;
                    bool m_curDateDescHasBeenSet;

                    /**
                     * EXPIRED
ACTIVE
UNACTIVATED Invalid
ACTIVATED To be effective
                     */
                    std::string m_budgetStatus;
                    bool m_budgetStatusHasBeenSet;

                    /**
                     * Budget dimension range condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BudgetConditionsForm m_dimensionsRange;
                    bool m_dimensionsRangeHasBeenSet;

                    /**
                     * Budget progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_budgetProgress;
                    bool m_budgetProgressHasBeenSet;

                    /**
                     * Budget Type is set to budget planning and returns the budget limit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BudgetPlan> m_budgetQuotaJson;
                    bool m_budgetQuotaJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETEXTEND_H_
