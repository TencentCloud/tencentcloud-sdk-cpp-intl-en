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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_

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
                * Consumption details summarized by resource
                */
                class ConsumptionResourceSummaryDataItem : public AbstractModel
                {
                public:
                    ConsumptionResourceSummaryDataItem();
                    ~ConsumptionResourceSummaryDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource name
                     * @return ResourceName Resource name
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
                     * @param _resourceName Resource name
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Discounted total price
                     * @return RealTotalCost Discounted total price
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Discounted total price
                     * @param _realTotalCost Discounted total price
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
                     * 获取Cash expenditure
                     * @return CashPayAmount Cash expenditure
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash expenditure
                     * @param _cashPayAmount Cash expenditure
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param _regionName Region name
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
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
                     * 获取Payment mode name
                     * @return PayModeName Payment mode name
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Payment mode name
                     * @param _payModeName Payment mode name
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
                     * 获取Product name code
                     * @return BusinessCode Product name code
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product name code
                     * @param _businessCode Product name code
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
                     * 获取Product name
                     * @return BusinessCodeName Product name
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name
                     * @param _businessCodeName Product name
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
                     * 获取Consumption type
                     * @return ConsumptionTypeName Consumption type
                     * 
                     */
                    std::string GetConsumptionTypeName() const;

                    /**
                     * 设置Consumption type
                     * @param _consumptionTypeName Consumption type
                     * 
                     */
                    void SetConsumptionTypeName(const std::string& _consumptionTypeName);

                    /**
                     * 判断参数 ConsumptionTypeName 是否已赋值
                     * @return ConsumptionTypeName 是否已赋值
                     * 
                     */
                    bool ConsumptionTypeNameHasBeenSet() const;

                    /**
                     * 获取Pre-discount priceNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RealCost Pre-discount priceNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置Pre-discount priceNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _realCost Pre-discount priceNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * @return FeeBeginTime Start time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Start time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _feeBeginTime Start time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFeeBeginTime(const std::string& _feeBeginTime);

                    /**
                     * 判断参数 FeeBeginTime 是否已赋值
                     * @return FeeBeginTime 是否已赋值
                     * 
                     */
                    bool FeeBeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * @return FeeEndTime End time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置End time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _feeEndTime End time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFeeEndTime(const std::string& _feeEndTime);

                    /**
                     * 判断参数 FeeEndTime 是否已赋值
                     * @return FeeEndTime 是否已赋值
                     * 
                     */
                    bool FeeEndTimeHasBeenSet() const;

                    /**
                     * 获取Days
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DayDiff Days
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDayDiff() const;

                    /**
                     * 设置Days
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dayDiff Days
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDayDiff(const std::string& _dayDiff);

                    /**
                     * 判断参数 DayDiff 是否已赋值
                     * @return DayDiff 是否已赋值
                     * 
                     */
                    bool DayDiffHasBeenSet() const;

                    /**
                     * 获取Daily consumptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @return DailyTotalCost Daily consumptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDailyTotalCost() const;

                    /**
                     * 设置Daily consumptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _dailyTotalCost Daily consumptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDailyTotalCost(const std::string& _dailyTotalCost);

                    /**
                     * 判断参数 DailyTotalCost 是否已赋值
                     * @return DailyTotalCost 是否已赋值
                     * 
                     */
                    bool DailyTotalCostHasBeenSet() const;

                    /**
                     * 获取Order numberNote: This field may return null, indicating that no valid values can be obtained.
                     * @return OrderId Order numberNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order numberNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _orderId Order numberNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取VoucherNote: This field may return null, indicating that no valid values can be obtained.
                     * @return VoucherPayAmount VoucherNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置VoucherNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _voucherPayAmount VoucherNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Bonus
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncentivePayAmount Bonus
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Bonus
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _incentivePayAmount Bonus
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Share revenueNote: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferPayAmount Share revenueNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Share revenueNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferPayAmount Share revenueNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Payer UIN: the account ID of the payer, which is the unique identifier of a Tencent Cloud userNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerUin Payer UIN: the account ID of the payer, which is the unique identifier of a Tencent Cloud userNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN: the account ID of the payer, which is the unique identifier of a Tencent Cloud userNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerUin Payer UIN: the account ID of the payer, which is the unique identifier of a Tencent Cloud userNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取User UIN: the account ID of the actual resource userNote: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin User UIN: the account ID of the actual resource userNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User UIN: the account ID of the actual resource userNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin User UIN: the account ID of the actual resource userNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Operator UIN: the account ID or role ID of the operator who places orders for prepaid resources or activates postpaid resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * @return OperateUin Operator UIN: the account ID or role ID of the operator who places orders for prepaid resources or activates postpaid resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator UIN: the account ID or role ID of the operator who places orders for prepaid resources or activates postpaid resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _operateUin Operator UIN: the account ID or role ID of the operator who places orders for prepaid resources or activates postpaid resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取Subproduct codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductCode Subproduct codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Subproduct codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _productCode Subproduct codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Subproduct name: the subcategory of a product purchased by the user, such as CVM – Standard S1Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductCodeName Subproduct name: the subcategory of a product purchased by the user, such as CVM – Standard S1Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name: the subcategory of a product purchased by the user, such as CVM – Standard S1Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productCodeName Subproduct name: the subcategory of a product purchased by the user, such as CVM – Standard S1Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取Region typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionType Region typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置Region typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionType Region typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取Region type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionTypeName Region type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置Region type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionTypeName Region type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionTypeName(const std::string& _regionTypeName);

                    /**
                     * 判断参数 RegionTypeName 是否已赋值
                     * @return RegionTypeName 是否已赋值
                     * 
                     */
                    bool RegionTypeNameHasBeenSet() const;

                    /**
                     * 获取Extended field 1Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extend1 Extended field 1Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtend1() const;

                    /**
                     * 设置Extended field 1Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extend1 Extended field 1Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtend1(const std::string& _extend1);

                    /**
                     * 判断参数 Extend1 是否已赋值
                     * @return Extend1 是否已赋值
                     * 
                     */
                    bool Extend1HasBeenSet() const;

                    /**
                     * 获取Extended field 2Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extend2 Extended field 2Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtend2() const;

                    /**
                     * 设置Extended field 2Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extend2 Extended field 2Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtend2(const std::string& _extend2);

                    /**
                     * 判断参数 Extend2 是否已赋值
                     * @return Extend2 是否已赋值
                     * 
                     */
                    bool Extend2HasBeenSet() const;

                    /**
                     * 获取Extended field 3Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extend3 Extended field 3Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtend3() const;

                    /**
                     * 设置Extended field 3Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extend3 Extended field 3Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtend3(const std::string& _extend3);

                    /**
                     * 判断参数 Extend3 是否已赋值
                     * @return Extend3 是否已赋值
                     * 
                     */
                    bool Extend3HasBeenSet() const;

                    /**
                     * 获取Extended field 4Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extend4 Extended field 4Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtend4() const;

                    /**
                     * 设置Extended field 4Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extend4 Extended field 4Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtend4(const std::string& _extend4);

                    /**
                     * 判断参数 Extend4 是否已赋值
                     * @return Extend4 是否已赋值
                     * 
                     */
                    bool Extend4HasBeenSet() const;

                    /**
                     * 获取Extended field 5Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extend5 Extended field 5Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtend5() const;

                    /**
                     * 设置Extended field 5Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extend5 Extended field 5Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtend5(const std::string& _extend5);

                    /**
                     * 判断参数 Extend5 是否已赋值
                     * @return Extend5 是否已赋值
                     * 
                     */
                    bool Extend5HasBeenSet() const;

                    /**
                     * 获取Instance typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Instance typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Instance typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceTypeName Instance type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置Instance type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceTypeName Instance type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceTypeName(const std::string& _instanceTypeName);

                    /**
                     * 判断参数 InstanceTypeName 是否已赋值
                     * @return InstanceTypeName 是否已赋值
                     * 
                     */
                    bool InstanceTypeNameHasBeenSet() const;

                    /**
                     * 获取Deduction time: the time at which a payment is deductedNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayTime Deduction time: the time at which a payment is deductedNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Deduction time: the time at which a payment is deductedNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payTime Deduction time: the time at which a payment is deductedNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Configuration descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentConfig Configuration descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置Configuration descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentConfig Configuration descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponentConfig(const std::string& _componentConfig);

                    /**
                     * 判断参数 ComponentConfig 是否已赋值
                     * @return ComponentConfig 是否已赋值
                     * 
                     */
                    bool ComponentConfigHasBeenSet() const;

                    /**
                     * 获取Tag information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置Tag information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource name
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Discounted total price
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cash expenditure
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Payment mode
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Payment mode name
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Product name code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Consumption type
                     */
                    std::string m_consumptionTypeName;
                    bool m_consumptionTypeNameHasBeenSet;

                    /**
                     * Pre-discount priceNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Start time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * End time of feesNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Days
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dayDiff;
                    bool m_dayDiffHasBeenSet;

                    /**
                     * Daily consumptionNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dailyTotalCost;
                    bool m_dailyTotalCostHasBeenSet;

                    /**
                     * Order numberNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * VoucherNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Bonus
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Share revenueNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Payer UIN: the account ID of the payer, which is the unique identifier of a Tencent Cloud userNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * User UIN: the account ID of the actual resource userNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator UIN: the account ID or role ID of the operator who places orders for prepaid resources or activates postpaid resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Subproduct codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Subproduct name: the subcategory of a product purchased by the user, such as CVM – Standard S1Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Region typeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Region type nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * Extended field 1Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extend1;
                    bool m_extend1HasBeenSet;

                    /**
                     * Extended field 2Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extend2;
                    bool m_extend2HasBeenSet;

                    /**
                     * Extended field 3Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extend3;
                    bool m_extend3HasBeenSet;

                    /**
                     * Extended field 4Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extend4;
                    bool m_extend4HasBeenSet;

                    /**
                     * Extended field 5Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extend5;
                    bool m_extend5HasBeenSet;

                    /**
                     * Instance typeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance type nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * Deduction time: the time at which a payment is deductedNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Configuration descriptionNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * Tag information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYDATAITEM_H_
