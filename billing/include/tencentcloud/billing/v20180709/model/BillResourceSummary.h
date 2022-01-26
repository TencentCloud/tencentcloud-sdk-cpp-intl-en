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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTagInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Information about resources charged in the bill
                */
                class BillResourceSummary : public AbstractModel
                {
                public:
                    BillResourceSummary();
                    ~BillResourceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     * @return BusinessCodeName Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     * @param BusinessCodeName Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取Subproduct name, which is the subcategory of a Tencent Cloud product, such as CVM-Standard S1. If no subproduct name can be obtained, `-` is returned.
                     * @return ProductCodeName Subproduct name, which is the subcategory of a Tencent Cloud product, such as CVM-Standard S1. If no subproduct name can be obtained, `-` is returned.
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name, which is the subcategory of a Tencent Cloud product, such as CVM-Standard S1. If no subproduct name can be obtained, `-` is returned.
                     * @param ProductCodeName Subproduct name, which is the subcategory of a Tencent Cloud product, such as CVM-Standard S1. If no subproduct name can be obtained, `-` is returned.
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取Billing mode
                     * @return PayModeName Billing mode
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode
                     * @param PayModeName Billing mode
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     */
                    bool PayModeNameHasBeenSet() const;

                    /**
                     * 获取Project
                     * @return ProjectName Project
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project
                     * @param ProjectName Project
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return RegionName Region
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region
                     * @param RegionName Region
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return ZoneName Availability zone
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone
                     * @param ZoneName Availability zone
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return ResourceId Instance ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Instance ID
                     * @param ResourceId Instance ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource instance namDeduction timee
                     * @return ResourceName Resource instance namDeduction timee
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource instance namDeduction timee
                     * @param ResourceName Resource instance namDeduction timee
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Transaction type
                     * @return ActionTypeName Transaction type
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type
                     * @param ActionTypeName Transaction type
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     */
                    bool ActionTypeNameHasBeenSet() const;

                    /**
                     * 获取Order ID
                     * @return OrderId Order ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID
                     * @param OrderId Order ID
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Payment time
                     * @return PayTime Payment time
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Payment time
                     * @param PayTime Payment time
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取Service start time
                     * @return FeeBeginTime Service start time
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Service start time
                     * @param FeeBeginTime Service start time
                     */
                    void SetFeeBeginTime(const std::string& _feeBeginTime);

                    /**
                     * 判断参数 FeeBeginTime 是否已赋值
                     * @return FeeBeginTime 是否已赋值
                     */
                    bool FeeBeginTimeHasBeenSet() const;

                    /**
                     * 获取Service end time
                     * @return FeeEndTime Service end time
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置Service end time
                     * @param FeeEndTime Service end time
                     */
                    void SetFeeEndTime(const std::string& _feeEndTime);

                    /**
                     * 判断参数 FeeEndTime 是否已赋值
                     * @return FeeEndTime 是否已赋值
                     */
                    bool FeeEndTimeHasBeenSet() const;

                    /**
                     * 获取Configuration description
                     * @return ConfigDesc Configuration description
                     */
                    std::string GetConfigDesc() const;

                    /**
                     * 设置Configuration description
                     * @param ConfigDesc Configuration description
                     */
                    void SetConfigDesc(const std::string& _configDesc);

                    /**
                     * 判断参数 ConfigDesc 是否已赋值
                     * @return ConfigDesc 是否已赋值
                     */
                    bool ConfigDescHasBeenSet() const;

                    /**
                     * 获取Extension field 1
                     * @return ExtendField1 Extension field 1
                     */
                    std::string GetExtendField1() const;

                    /**
                     * 设置Extension field 1
                     * @param ExtendField1 Extension field 1
                     */
                    void SetExtendField1(const std::string& _extendField1);

                    /**
                     * 判断参数 ExtendField1 是否已赋值
                     * @return ExtendField1 是否已赋值
                     */
                    bool ExtendField1HasBeenSet() const;

                    /**
                     * 获取Extension field 2
                     * @return ExtendField2 Extension field 2
                     */
                    std::string GetExtendField2() const;

                    /**
                     * 设置Extension field 2
                     * @param ExtendField2 Extension field 2
                     */
                    void SetExtendField2(const std::string& _extendField2);

                    /**
                     * 判断参数 ExtendField2 是否已赋值
                     * @return ExtendField2 是否已赋值
                     */
                    bool ExtendField2HasBeenSet() const;

                    /**
                     * 获取Cost, in USD
                     * @return TotalCost Cost, in USD
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Cost, in USD
                     * @param TotalCost Cost, in USD
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Discount
If different discounts or contract prices are applied, `-` will be returned for this parameter.
                     * @return Discount Discount
If different discounts or contract prices are applied, `-` will be returned for this parameter.
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount
If different discounts or contract prices are applied, `-` will be returned for this parameter.
                     * @param Discount Discount
If different discounts or contract prices are applied, `-` will be returned for this parameter.
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Offer type
                     * @return ReduceType Offer type
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置Offer type
                     * @param ReduceType Offer type
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取Total cost after discount, in USD
                     * @return RealTotalCost Total cost after discount, in USD
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total cost after discount, in USD
                     * @param RealTotalCost Total cost after discount, in USD
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Amount paid in voucher, in USD
                     * @return VoucherPayAmount Amount paid in voucher, in USD
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Amount paid in voucher, in USD
                     * @param VoucherPayAmount Amount paid in voucher, in USD
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Amount paid in cash, in USD
                     * @return CashPayAmount Amount paid in cash, in USD
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Amount paid in cash, in USD
                     * @param CashPayAmount Amount paid in cash, in USD
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Amount paid in trial credit, in USD
                     * @return IncentivePayAmount Amount paid in trial credit, in USD
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Amount paid in trial credit, in USD
                     * @param IncentivePayAmount Amount paid in trial credit, in USD
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Extension field 3
                     * @return ExtendField3 Extension field 3
                     */
                    std::string GetExtendField3() const;

                    /**
                     * 设置Extension field 3
                     * @param ExtendField3 Extension field 3
                     */
                    void SetExtendField3(const std::string& _extendField3);

                    /**
                     * 判断参数 ExtendField3 是否已赋值
                     * @return ExtendField3 是否已赋值
                     */
                    bool ExtendField3HasBeenSet() const;

                    /**
                     * 获取Extension field 4
                     * @return ExtendField4 Extension field 4
                     */
                    std::string GetExtendField4() const;

                    /**
                     * 设置Extension field 4
                     * @param ExtendField4 Extension field 4
                     */
                    void SetExtendField4(const std::string& _extendField4);

                    /**
                     * 判断参数 ExtendField4 是否已赋值
                     * @return ExtendField4 是否已赋值
                     */
                    bool ExtendField4HasBeenSet() const;

                    /**
                     * 获取Extension field 5
                     * @return ExtendField5 Extension field 5
                     */
                    std::string GetExtendField5() const;

                    /**
                     * 设置Extension field 5
                     * @param ExtendField5 Extension field 5
                     */
                    void SetExtendField5(const std::string& _extendField5);

                    /**
                     * 判断参数 ExtendField5 是否已赋值
                     * @return ExtendField5 是否已赋值
                     */
                    bool ExtendField5HasBeenSet() const;

                    /**
                     * 获取Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<BillTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Payer UIN
                     * @return PayerUin Payer UIN
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN
                     * @param PayerUin Payer UIN
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取Resource owner UIN; '-' is returned if no value is obtained
                     * @return OwnerUin Resource owner UIN; '-' is returned if no value is obtained
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Resource owner UIN; '-' is returned if no value is obtained
                     * @param OwnerUin Resource owner UIN; '-' is returned if no value is obtained
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Operator UIN; '-' is returned if no value is obtained
                     * @return OperateUin Operator UIN; '-' is returned if no value is obtained
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator UIN; '-' is returned if no value is obtained
                     * @param OperateUin Operator UIN; '-' is returned if no value is obtained
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取Product code
                     * @return BusinessCode Product code
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
                     * @param BusinessCode Product code
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Subproduct code
                     * @return ProductCode Subproduct code
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Subproduct code
                     * @param ProductCode Subproduct code
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RegionId 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置
                     * @param RegionId 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct name, which is the subcategory of a Tencent Cloud product, such as CVM-Standard S1. If no subproduct name can be obtained, `-` is returned.
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource instance namDeduction timee
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Transaction type
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Order ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Payment time
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Service start time
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * Service end time
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Configuration description
                     */
                    std::string m_configDesc;
                    bool m_configDescHasBeenSet;

                    /**
                     * Extension field 1
                     */
                    std::string m_extendField1;
                    bool m_extendField1HasBeenSet;

                    /**
                     * Extension field 2
                     */
                    std::string m_extendField2;
                    bool m_extendField2HasBeenSet;

                    /**
                     * Cost, in USD
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Discount
If different discounts or contract prices are applied, `-` will be returned for this parameter.
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Offer type
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * Total cost after discount, in USD
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Amount paid in voucher, in USD
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Amount paid in cash, in USD
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Amount paid in trial credit, in USD
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Extension field 3
                     */
                    std::string m_extendField3;
                    bool m_extendField3HasBeenSet;

                    /**
                     * Extension field 4
                     */
                    std::string m_extendField4;
                    bool m_extendField4HasBeenSet;

                    /**
                     * Extension field 5
                     */
                    std::string m_extendField5;
                    bool m_extendField5HasBeenSet;

                    /**
                     * Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Payer UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Resource owner UIN; '-' is returned if no value is obtained
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator UIN; '-' is returned if no value is obtained
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Product code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
