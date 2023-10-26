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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_

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
                * Objects of reseller bill details
                */
                class DistributionBillDetail : public AbstractModel
                {
                public:
                    DistributionBillDetail();
                    ~DistributionBillDetail() = default;
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
                     * 获取Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM - Standard S1.
                     * @return ProductCodeName Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM - Standard S1.
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM - Standard S1.
                     * @param _productCodeName Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM - Standard S1.
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
                     * 获取Billing mode: The billing mode, which can be monthly subscription or pay-as-you-go.
                     * @return PayModeName Billing mode: The billing mode, which can be monthly subscription or pay-as-you-go.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode: The billing mode, which can be monthly subscription or pay-as-you-go.
                     * @param _payModeName Billing mode: The billing mode, which can be monthly subscription or pay-as-you-go.
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
                     * 获取Project Name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @return ProjectName Project Name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project Name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @param _projectName Project Name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
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
                     * 获取Region: The region of a resource, e.g. South China (Guangzhou).
                     * @return RegionName Region: The region of a resource, e.g. South China (Guangzhou).
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region: The region of a resource, e.g. South China (Guangzhou).
                     * @param _regionName Region: The region of a resource, e.g. South China (Guangzhou).
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
                     * 获取Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3.
                     * @return ZoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3.
                     * @param _zoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3.
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
                     * 获取Transaction type, which can be monthly subscription purchase, monthly subscription renewal, pay-as-you-go deduction, etc.
                     * @return ActionTypeName Transaction type, which can be monthly subscription purchase, monthly subscription renewal, pay-as-you-go deduction, etc.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type, which can be monthly subscription purchase, monthly subscription renewal, pay-as-you-go deduction, etc.
                     * @param _actionTypeName Transaction type, which can be monthly subscription purchase, monthly subscription renewal, pay-as-you-go deduction, etc.
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
                     * 获取Order ID: The ID of a monthly subscription order.
                     * @return OrderId Order ID: The ID of a monthly subscription order.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID: The ID of a monthly subscription order.
                     * @param _orderId Order ID: The ID of a monthly subscription order.
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
                     * 获取Transaction ID: The ID of a settlement bill.
                     * @return BillId Transaction ID: The ID of a settlement bill.
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置Transaction ID: The ID of a settlement bill.
                     * @param _billId Transaction ID: The ID of a settlement bill.
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
                     * 获取Deduction time: The settlement cost deduction time.
                     * @return PayTime Deduction time: The settlement cost deduction time.
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Deduction time: The settlement cost deduction time.
                     * @param _payTime Deduction time: The settlement cost deduction time.
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
                     * 获取Usage start time: The time at which product or service usage starts.
                     * @return FeeBeginTime Usage start time: The time at which product or service usage starts.
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Usage start time: The time at which product or service usage starts.
                     * @param _feeBeginTime Usage start time: The time at which product or service usage starts.
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
                     * 获取Usage end time: The time at which product or service usage ends.
                     * @return FeeEndTime Usage end time: The time at which product or service usage ends.
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置Usage end time: The time at which product or service usage ends.
                     * @param _feeEndTime Usage end time: The time at which product or service usage ends.
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
                     * 获取List of components.
                     * @return ComponentSet List of components.
                     * 
                     */
                    std::vector<BillDetailComponent> GetComponentSet() const;

                    /**
                     * 设置List of components.
                     * @param _componentSet List of components.
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
                     * 获取Owner account ID: The account ID of the actual resource user.
                     * @return OwnerUin Owner account ID: The account ID of the actual resource user.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner account ID: The account ID of the actual resource user.
                     * @param _ownerUin Owner account ID: The account ID of the actual resource user.
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
                     * 获取Operator account ID: The account or role ID of the operator who purchases or activates a resource.
                     * @return OperateUin Operator account ID: The account or role ID of the operator who purchases or activates a resource.
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator account ID: The account or role ID of the operator who purchases or activates a resource.
                     * @param _operateUin Operator account ID: The account or role ID of the operator who purchases or activates a resource.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置Tag information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Product code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessCode Product code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessCode Product code.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subproduct code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductCode Subproduct code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Subproduct code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productCode Subproduct code.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Transaction type code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType Transaction type code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType Transaction type code.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Price attribute: A set of attributes which will determine the price of a component, apart from unit price and usage duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PriceInfo Price attribute: A set of attributes which will determine the price of a component, apart from unit price and usage duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPriceInfo() const;

                    /**
                     * 设置Price attribute: A set of attributes which will determine the price of a component, apart from unit price and usage duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _priceInfo Price attribute: A set of attributes which will determine the price of a component, apart from unit price and usage duration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Associated transaction document ID: The ID of the document associated with a transaction, such as a write-off order, the original order showing a deduction error during first settlement, a restructured order, or the original purchase order corresponding to a refund order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedOrder Associated transaction document ID: The ID of the document associated with a transaction, such as a write-off order, the original order showing a deduction error during first settlement, a restructured order, or the original purchase order corresponding to a refund order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BillDetailAssociatedOrder GetAssociatedOrder() const;

                    /**
                     * 设置Associated transaction document ID: The ID of the document associated with a transaction, such as a write-off order, the original order showing a deduction error during first settlement, a restructured order, or the original purchase order corresponding to a refund order.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associatedOrder Associated transaction document ID: The ID of the document associated with a transaction, such as a write-off order, the original order showing a deduction error during first settlement, a restructured order, or the original purchase order corresponding to a refund order.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Calculation formula: The detailed calculation formula for a specific transaction type, such as refund or configuration change.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Formula Calculation formula: The detailed calculation formula for a specific transaction type, such as refund or configuration change.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置Calculation formula: The detailed calculation formula for a specific transaction type, such as refund or configuration change.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formula Calculation formula: The detailed calculation formula for a specific transaction type, such as refund or configuration change.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing rules: Official website links for detailed billing rules of each product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormulaUrl Billing rules: Official website links for detailed billing rules of each product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormulaUrl() const;

                    /**
                     * 设置Billing rules: Official website links for detailed billing rules of each product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formulaUrl Billing rules: Official website links for detailed billing rules of each product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormulaUrl(const std::string& _formulaUrl);

                    /**
                     * 判断参数 FormulaUrl 是否已赋值
                     * @return FormulaUrl 是否已赋值
                     * 
                     */
                    bool FormulaUrlHasBeenSet() const;

                private:

                    /**
                     * Product name: The name of a Tencent Cloud product purchased by the user, such as CVM.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct name: The subcategory of a Tencent Cloud product purchased by the user, such as CVM - Standard S1.
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode: The billing mode, which can be monthly subscription or pay-as-you-go.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project Name: The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region: The region of a resource, e.g. South China (Guangzhou).
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3.
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
                     * Transaction type, which can be monthly subscription purchase, monthly subscription renewal, pay-as-you-go deduction, etc.
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Order ID: The ID of a monthly subscription order.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Transaction ID: The ID of a settlement bill.
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * Deduction time: The settlement cost deduction time.
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Usage start time: The time at which product or service usage starts.
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * Usage end time: The time at which product or service usage ends.
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * List of components.
                     */
                    std::vector<BillDetailComponent> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * Owner account ID: The account ID of the actual resource user.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator account ID: The account or role ID of the operator who purchases or activates a resource.
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Tag information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Product code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Subproduct code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Transaction type code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Price attribute: A set of attributes which will determine the price of a component, apart from unit price and usage duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * Associated transaction document ID: The ID of the document associated with a transaction, such as a write-off order, the original order showing a deduction error during first settlement, a restructured order, or the original purchase order corresponding to a refund order.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BillDetailAssociatedOrder m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * Calculation formula: The detailed calculation formula for a specific transaction type, such as refund or configuration change.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * Billing rules: Official website links for detailed billing rules of each product.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DISTRIBUTIONBILLDETAIL_H_
