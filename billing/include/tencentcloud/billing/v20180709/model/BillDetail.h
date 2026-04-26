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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillDetailComponent.h>
#include <tencentcloud/billing/v20180709/model/BillTagInfo.h>
#include <tencentcloud/billing/v20180709/model/BillDetailAssociatedOrder.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Bill details
                */
                class BillDetail : public AbstractModel
                {
                public:
                    BillDetail();
                    ~BillDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
                     * @return BusinessCodeName Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
                     * @param _businessCodeName Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
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
                     * 获取Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM Standard S1.
                     * @return ProductCodeName Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM Standard S1.
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM Standard S1.
                     * @param _productCodeName Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM Standard S1.
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
                     * 获取Billing mode, which can be monthly subscription or pay-as-you-go.
                     * @return PayModeName Billing mode, which can be monthly subscription or pay-as-you-go.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode, which can be monthly subscription or pay-as-you-go.
                     * @param _payModeName Billing mode, which can be monthly subscription or pay-as-you-go.
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
                     * 获取Project name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @return ProjectName Project name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @param _projectName Project name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
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
                     * 获取Region: The region to which a resource belongs, such as South China (Guangzhou).
                     * @return RegionName Region: The region to which a resource belongs, such as South China (Guangzhou).
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region: The region to which a resource belongs, such as South China (Guangzhou).
                     * @param _regionName Region: The region to which a resource belongs, such as South China (Guangzhou).
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
                     * 获取Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     * @return ZoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     * @param _zoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
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
                     * 获取Instance ID: The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.
                     * @return ResourceId Instance ID: The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Instance ID: The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.
                     * @param _resourceId Instance ID: The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.
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
                     * 获取Instance name: The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * @return ResourceName Instance name: The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Instance name: The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * @param _resourceName Instance name: The resource name set by the user in the console. If it is not set, it will be empty by default.
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
                     * 获取Transaction type, which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * @return ActionTypeName Transaction type, which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type, which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * @param _actionTypeName Transaction type, which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
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
                     * 获取Order ID: The sub-order number corresponding to the monthly subscription mode. In the postpaid billing model, the bill amount does not exist as an order concept, and this parameter can be ignored.

                     * @return OrderId Order ID: The sub-order number corresponding to the monthly subscription mode. In the postpaid billing model, the bill amount does not exist as an order concept, and this parameter can be ignored.

                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID: The sub-order number corresponding to the monthly subscription mode. In the postpaid billing model, the bill amount does not exist as an order concept, and this parameter can be ignored.

                     * @param _orderId Order ID: The sub-order number corresponding to the monthly subscription mode. In the postpaid billing model, the bill amount does not exist as an order concept, and this parameter can be ignored.

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
                     * 获取Transaction ID: The bill number for a deducted payment
                     * @return BillId Transaction ID: The bill number for a deducted payment
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置Transaction ID: The bill number for a deducted payment
                     * @param _billId Transaction ID: The bill number for a deducted payment
                     * 
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取Transaction time: The time at which a payment was deducted
                     * @return PayTime Transaction time: The time at which a payment was deducted
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Transaction time: The time at which a payment was deducted
                     * @param _payTime Transaction time: The time at which a payment was deducted
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
                     * 获取Usage start time: The time at which product or service usage starts
                     * @return FeeBeginTime Usage start time: The time at which product or service usage starts
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Usage start time: The time at which product or service usage starts
                     * @param _feeBeginTime Usage start time: The time at which product or service usage starts
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
                     * 获取Usage end time: The time at which product or service usage ends
                     * @return FeeEndTime Usage end time: The time at which product or service usage ends
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置Usage end time: The time at which product or service usage ends
                     * @param _feeEndTime Usage end time: The time at which product or service usage ends
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
                     * 获取Component list
                     * @return ComponentSet Component list
                     * 
                     */
                    std::vector<BillDetailComponent> GetComponentSet() const;

                    /**
                     * 设置Component list
                     * @param _componentSet Component list
                     * 
                     */
                    void SetComponentSet(const std::vector<BillDetailComponent>& _componentSet);

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取Payer account ID: The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * @return PayerUin Payer account ID: The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer account ID: The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * @param _payerUin Payer account ID: The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
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
                     * 获取Owner account ID: The account ID of the actual resource user
                     * @return OwnerUin Owner account ID: The account ID of the actual resource user
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner account ID: The account ID of the actual resource user
                     * @param _ownerUin Owner account ID: The account ID of the actual resource user
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
                     * 获取Operator account ID: The account or role ID of the operator who purchases or activates a resource
                     * @return OperateUin Operator account ID: The account or role ID of the operator who purchases or activates a resource
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator account ID: The account or role ID of the operator who purchases or activates a resource
                     * @param _operateUin Operator account ID: The account or role ID of the operator who purchases or activates a resource
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
                     * 获取Tag information.
                     * @return Tags Tag information.
                     * 
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置Tag information.
                     * @param _tags Tag information.
                     * 
                     */
                    void SetTags(const std::vector<BillTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * 获取Subproduct code
                     * @return ProductCode Subproduct code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Subproduct code
                     * @param _productCode Subproduct code
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
                     * 获取Transaction type code
                     * @return ActionType Transaction type code
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type code
                     * @param _actionType Transaction type code
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     * @return PriceInfo Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     * 
                     */
                    std::vector<std::string> GetPriceInfo() const;

                    /**
                     * 设置Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     * @param _priceInfo Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     * 
                     */
                    void SetPriceInfo(const std::vector<std::string>& _priceInfo);

                    /**
                     * 判断参数 PriceInfo 是否已赋值
                     * @return PriceInfo 是否已赋值
                     * 
                     */
                    bool PriceInfoHasBeenSet() const;

                    /**
                     * 获取Associated transaction document ID: Document ID associated with this transaction, such as a write-off order, the original order, a resettlement order, or the original purchase order number recorded in a refund order.
                     * @return AssociatedOrder Associated transaction document ID: Document ID associated with this transaction, such as a write-off order, the original order, a resettlement order, or the original purchase order number recorded in a refund order.
                     * 
                     */
                    BillDetailAssociatedOrder GetAssociatedOrder() const;

                    /**
                     * 设置Associated transaction document ID: Document ID associated with this transaction, such as a write-off order, the original order, a resettlement order, or the original purchase order number recorded in a refund order.
                     * @param _associatedOrder Associated transaction document ID: Document ID associated with this transaction, such as a write-off order, the original order, a resettlement order, or the original purchase order number recorded in a refund order.
                     * 
                     */
                    void SetAssociatedOrder(const BillDetailAssociatedOrder& _associatedOrder);

                    /**
                     * 判断参数 AssociatedOrder 是否已赋值
                     * @return AssociatedOrder 是否已赋值
                     * 
                     */
                    bool AssociatedOrderHasBeenSet() const;

                    /**
                     * 获取Calculation explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * @return Formula Calculation explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置Calculation explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * @param _formula Calculation explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * 
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     * @return FormulaUrl Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     * 
                     */
                    std::string GetFormulaUrl() const;

                    /**
                     * 设置Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     * @param _formulaUrl Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     * 
                     */
                    void SetFormulaUrl(const std::string& _formulaUrl);

                    /**
                     * 判断参数 FormulaUrl 是否已赋值
                     * @return FormulaUrl 是否已赋值
                     * 
                     */
                    bool FormulaUrlHasBeenSet() const;

                    /**
                     * 获取Billing day
                     * @return BillDay Billing day
                     * 
                     */
                    std::string GetBillDay() const;

                    /**
                     * 设置Billing day
                     * @param _billDay Billing day
                     * 
                     */
                    void SetBillDay(const std::string& _billDay);

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

                    /**
                     * 获取Billing month
                     * @return BillMonth Billing month
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置Billing month
                     * @param _billMonth Billing month
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
                     * 获取Billing record ID
                     * @return Id Billing record ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Billing record ID
                     * @param _id Billing record ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Domestic and international codes
                     * @return RegionType Domestic and international codes
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置Domestic and international codes
                     * @param _regionType Domestic and international codes
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
                     * 获取Domestic and international: Resource region type (domestic, international)
                     * @return RegionTypeName Domestic and international: Resource region type (domestic, international)
                     * 
                     */
                    std::string GetRegionTypeName() const;

                    /**
                     * 设置Domestic and international: Resource region type (domestic, international)
                     * @param _regionTypeName Domestic and international: Resource region type (domestic, international)
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
                     * 获取Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     * @return ReserveDetail Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     * 
                     */
                    std::string GetReserveDetail() const;

                    /**
                     * 设置Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     * @param _reserveDetail Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     * 
                     */
                    void SetReserveDetail(const std::string& _reserveDetail);

                    /**
                     * 判断参数 ReserveDetail 是否已赋值
                     * @return ReserveDetail 是否已赋值
                     * 
                     */
                    bool ReserveDetailHasBeenSet() const;

                    /**
                     * 获取discount object
                     * @return DiscountObject discount object
                     * 
                     */
                    std::string GetDiscountObject() const;

                    /**
                     * 设置discount object
                     * @param _discountObject discount object
                     * 
                     */
                    void SetDiscountObject(const std::string& _discountObject);

                    /**
                     * 判断参数 DiscountObject 是否已赋值
                     * @return DiscountObject 是否已赋值
                     * 
                     */
                    bool DiscountObjectHasBeenSet() const;

                    /**
                     * 获取Offer type
                     * @return DiscountType Offer type
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置Offer type
                     * @param _discountType Offer type
                     * 
                     */
                    void SetDiscountType(const std::string& _discountType);

                    /**
                     * 判断参数 DiscountType 是否已赋值
                     * @return DiscountType 是否已赋值
                     * 
                     */
                    bool DiscountTypeHasBeenSet() const;

                    /**
                     * 获取discount content
                     * @return DiscountContent discount content
                     * 
                     */
                    std::string GetDiscountContent() const;

                    /**
                     * 设置discount content
                     * @param _discountContent discount content
                     * 
                     */
                    void SetDiscountContent(const std::string& _discountContent);

                    /**
                     * 判断参数 DiscountContent 是否已赋值
                     * @return DiscountContent 是否已赋值
                     * 
                     */
                    bool DiscountContentHasBeenSet() const;

                private:

                    /**
                     * Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM Standard S1.
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode, which can be monthly subscription or pay-as-you-go.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region: The region to which a resource belongs, such as South China (Guangzhou).
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Instance ID: The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Instance name: The resource name set by the user in the console. If it is not set, it will be empty by default.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Transaction type, which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Order ID: The sub-order number corresponding to the monthly subscription mode. In the postpaid billing model, the bill amount does not exist as an order concept, and this parameter can be ignored.

                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Transaction ID: The bill number for a deducted payment
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * Transaction time: The time at which a payment was deducted
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Usage start time: The time at which product or service usage starts
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * Usage end time: The time at which product or service usage ends
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Component list
                     */
                    std::vector<BillDetailComponent> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * Payer account ID: The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Owner account ID: The account ID of the actual resource user
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator account ID: The account or role ID of the operator who purchases or activates a resource
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Tag information.
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

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
                     * Transaction type code
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * Associated transaction document ID: Document ID associated with this transaction, such as a write-off order, the original order, a resettlement order, or the original purchase order number recorded in a refund order.
                     */
                    BillDetailAssociatedOrder m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * Calculation explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                    /**
                     * Billing day
                     */
                    std::string m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * Billing month
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * Billing record ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domestic and international codes
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Domestic and international: Resource region type (domestic, international)
                     */
                    std::string m_regionTypeName;
                    bool m_regionTypeNameHasBeenSet;

                    /**
                     * Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     */
                    std::string m_reserveDetail;
                    bool m_reserveDetailHasBeenSet;

                    /**
                     * discount object
                     */
                    std::string m_discountObject;
                    bool m_discountObjectHasBeenSet;

                    /**
                     * Offer type
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                    /**
                     * discount content
                     */
                    std::string m_discountContent;
                    bool m_discountContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_
