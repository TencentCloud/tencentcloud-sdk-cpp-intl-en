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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Details of a Cost Allocation Bill by item
                */
                class AllocationSummaryByItem : public AbstractModel
                {
                public:
                    AllocationSummaryByItem();
                    ~AllocationSummaryByItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of a cost allocation unit
                     * @return TreeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置Unique identifier of a cost allocation unit
                     * @param _treeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取Name of a cost allocation unit
                     * @return TreeNodeUniqKeyName Name of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置Name of a cost allocation unit
                     * @param _treeNodeUniqKeyName Name of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKeyName(const std::string& _treeNodeUniqKeyName);

                    /**
                     * 判断参数 TreeNodeUniqKeyName 是否已赋值
                     * @return TreeNodeUniqKeyName 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyNameHasBeenSet() const;

                    /**
                     * 获取Date: Settlement date
                     * @return BillDate Date: Settlement date
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置Date: Settlement date
                     * @param _billDate Date: Settlement date
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * @return PayerUin Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * @param _payerUin Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
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
                     * 获取User UIN: Account ID of the actual resource user
                     * @return OwnerUin User UIN: Account ID of the actual resource user
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User UIN: Account ID of the actual resource user
                     * @param _ownerUin User UIN: Account ID of the actual resource user
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
                     * 获取Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * @return OperateUin Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * @param _operateUin Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
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
                     * 获取Billing mode code
                     * @return PayMode Billing mode code
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode code
                     * @param _payMode Billing mode code
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
                     * 获取Billing mode: Resource billing mode, which can be monthly subscription or pay-as-you-go.
                     * @return PayModeName Billing mode: Resource billing mode, which can be monthly subscription or pay-as-you-go.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode: Resource billing mode, which can be monthly subscription or pay-as-you-go.
                     * @param _payModeName Billing mode: Resource billing mode, which can be monthly subscription or pay-as-you-go.
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
                     * 获取Transaction type: Detailed transaction type
                     * @return ActionTypeName Transaction type: Detailed transaction type
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type: Detailed transaction type
                     * @param _actionTypeName Transaction type: Detailed transaction type
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
                     * 获取Product name: Various cloud products purchased by users
                     * @return BusinessCodeName Product name: Various cloud products purchased by users
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name: Various cloud products purchased by users
                     * @param _businessCodeName Product name: Various cloud products purchased by users
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
                     * 获取Subproduct name: Product subdivision type purchased by the user
                     * @return ProductCodeName Subproduct name: Product subdivision type purchased by the user
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name: Product subdivision type purchased by the user
                     * @param _productCodeName Subproduct name: Product subdivision type purchased by the user
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
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name: The region where the resource is located
                     * @return RegionName Region name: The region where the resource is located
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name: The region where the resource is located
                     * @param _regionName Region name: The region where the resource is located
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
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Availability zone: The availability zone where the resource is located.
                     * @return ZoneName Availability zone: The availability zone where the resource is located.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone: The availability zone where the resource is located.
                     * @param _zoneName Availability zone: The availability zone where the resource is located.
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
                     * 获取Instance type code
                     * @return InstanceType Instance type code
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type code
                     * @param _instanceType Instance type code
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
                     * 获取Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. It is displayed as "-" by default for regular instances.
                     * @return InstanceTypeName Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. It is displayed as "-" by default for regular instances.
                     * 
                     */
                    std::string GetInstanceTypeName() const;

                    /**
                     * 设置Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. It is displayed as "-" by default for regular instances.
                     * @param _instanceTypeName Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. It is displayed as "-" by default for regular instances.
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
                     * 获取Resource ID: Resources vary by product, and the content is not identical. For example, Cloud Virtual Machine (CVM) corresponds to the instance ID. If the product is split, it shows the split item ID, such as COS bucket ID and CDN domain name.
                     * @return ResourceId Resource ID: Resources vary by product, and the content is not identical. For example, Cloud Virtual Machine (CVM) corresponds to the instance ID. If the product is split, it shows the split item ID, such as COS bucket ID and CDN domain name.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID: Resources vary by product, and the content is not identical. For example, Cloud Virtual Machine (CVM) corresponds to the instance ID. If the product is split, it shows the split item ID, such as COS bucket ID and CDN domain name.
                     * @param _resourceId Resource ID: Resources vary by product, and the content is not identical. For example, Cloud Virtual Machine (CVM) corresponds to the instance ID. If the product is split, it shows the split item ID, such as COS bucket ID and CDN domain name.
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
                     * 获取Instance name: The name set by the user for the resource in the console, which is empty by default if not set. If the product is split, it shows the split resource alias.
                     * @return ResourceName Instance name: The name set by the user for the resource in the console, which is empty by default if not set. If the product is split, it shows the split resource alias.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Instance name: The name set by the user for the resource in the console, which is empty by default if not set. If the product is split, it shows the split resource alias.
                     * @param _resourceName Instance name: The name set by the user for the resource in the console, which is empty by default if not set. If the product is split, it shows the split resource alias.
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
                     * 获取Allocation tag: The resource-bound tag
                     * @return Tag Allocation tag: The resource-bound tag
                     * 
                     */
                    std::vector<BillTag> GetTag() const;

                    /**
                     * 设置Allocation tag: The resource-bound tag
                     * @param _tag Allocation tag: The resource-bound tag
                     * 
                     */
                    void SetTag(const std::vector<BillTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name: The Project to which a resource belongs, which is independently allocated by the user for the resource in the console. If a resource has not been allocated to an Project, it will be a default Project.
                     * @return ProjectName Project name: The Project to which a resource belongs, which is independently allocated by the user for the resource in the console. If a resource has not been allocated to an Project, it will be a default Project.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name: The Project to which a resource belongs, which is independently allocated by the user for the resource in the console. If a resource has not been allocated to an Project, it will be a default Project.
                     * @param _projectName Project name: The Project to which a resource belongs, which is independently allocated by the user for the resource in the console. If a resource has not been allocated to an Project, it will be a default Project.
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
                     * 获取Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     * @return AllocationType Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     * 
                     */
                    int64_t GetAllocationType() const;

                    /**
                     * 设置Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     * @param _allocationType Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     * 
                     */
                    void SetAllocationType(const int64_t& _allocationType);

                    /**
                     * 判断参数 AllocationType 是否已赋值
                     * @return AllocationType 是否已赋值
                     * 
                     */
                    bool AllocationTypeHasBeenSet() const;

                    /**
                     * 获取Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * @return TotalCost Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * @param _totalCost Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Reserved instance deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * @return RiTimeSpan Reserved instance deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * 
                     */
                    std::string GetRiTimeSpan() const;

                    /**
                     * 设置Reserved instance deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * @param _riTimeSpan Reserved instance deduction duration: The duration of use deducted by reserved instances for this product or service.
                     * 
                     */
                    void SetRiTimeSpan(const std::string& _riTimeSpan);

                    /**
                     * 判断参数 RiTimeSpan 是否已赋值
                     * @return RiTimeSpan 是否已赋值
                     * 
                     */
                    bool RiTimeSpanHasBeenSet() const;

                    /**
                     * 获取Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * @return RiCost Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    std::string GetRiCost() const;

                    /**
                     * 设置Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * @param _riCost Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    void SetRiCost(const std::string& _riCost);

                    /**
                     * 判断参数 RiCost 是否已赋值
                     * @return RiCost 是否已赋值
                     * 
                     */
                    bool RiCostHasBeenSet() const;

                    /**
                     * 获取Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * @return RealTotalCost Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * @param _realTotalCost Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
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
                     * 获取Cash account expenditure (CNY): The amount paid through the cash account
                     * @return CashPayAmount Cash account expenditure (CNY): The amount paid through the cash account
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash account expenditure (CNY): The amount paid through the cash account
                     * @param _cashPayAmount Cash account expenditure (CNY): The amount paid through the cash account
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
                     * 获取Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)
                     * @return VoucherPayAmount Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)
                     * @param _voucherPayAmount Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)
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
                     * 获取Gift account expenditure (CNY): The amount paid using free credits
                     * @return IncentivePayAmount Gift account expenditure (CNY): The amount paid using free credits
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Gift account expenditure (CNY): The amount paid using free credits
                     * @param _incentivePayAmount Gift account expenditure (CNY): The amount paid using free credits
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
                     * 获取Royalty account expenditure (CNY): The amount paid through the royalty account
                     * @return TransferPayAmount Royalty account expenditure (CNY): The amount paid through the royalty account
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty account expenditure (CNY): The amount paid through the royalty account
                     * @param _transferPayAmount Royalty account expenditure (CNY): The amount paid through the royalty account
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
                     * 获取Component name code
                     * @return ItemCode Component name code
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置Component name code
                     * @param _itemCode Component name code
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取Component name: The specific component of a product or service purchased by the user
                     * @return ItemCodeName Component name: The specific component of a product or service purchased by the user
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置Component name: The specific component of a product or service purchased by the user
                     * @param _itemCodeName Component name: The specific component of a product or service purchased by the user
                     * 
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     * 
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取Component type code
                     * @return ComponentCode Component type code
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component type code
                     * @param _componentCode Component type code
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取Component type: The major component category corresponding to the product or service purchased by the user
                     * @return ComponentCodeName Component type: The major component category corresponding to the product or service purchased by the user
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置Component type: The major component category corresponding to the product or service purchased by the user
                     * @param _componentCodeName Component type: The major component category corresponding to the product or service purchased by the user
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取Split item ID: The ID of the split item involved in the split product, such as COS bucket ID and CDN domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SplitItemId Split item ID: The ID of the split item involved in the split product, such as COS bucket ID and CDN domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetSplitItemId() const;

                    /**
                     * 设置Split item ID: The ID of the split item involved in the split product, such as COS bucket ID and CDN domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _splitItemId Split item ID: The ID of the split item involved in the split product, such as COS bucket ID and CDN domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetSplitItemId(const std::string& _splitItemId);

                    /**
                     * 判断参数 SplitItemId 是否已赋值
                     * @return SplitItemId 是否已赋值
                     * @deprecated
                     */
                    bool SplitItemIdHasBeenSet() const;

                    /**
                     * 获取Split item name: The split item involved in the split product
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SplitItemName Split item name: The split item involved in the split product
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetSplitItemName() const;

                    /**
                     * 设置Split item name: The split item involved in the split product
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _splitItemName Split item name: The split item involved in the split product
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetSplitItemName(const std::string& _splitItemName);

                    /**
                     * 判断参数 SplitItemName 是否已赋值
                     * @return SplitItemName 是否已赋值
                     * @deprecated
                     */
                    bool SplitItemNameHasBeenSet() const;

                    /**
                     * 获取Usage start time: Usage start time
                     * @return FeeBeginTime Usage start time: Usage start time
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Usage start time: Usage start time
                     * @param _feeBeginTime Usage start time: Usage start time
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
                     * 获取Usage end time: Product or service usage end time
                     * @return FeeEndTime Usage end time: Product or service usage end time
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置Usage end time: Product or service usage end time
                     * @param _feeEndTime Usage end time: Product or service usage end time
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
                     * 获取Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * @return SPCost Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * 
                     */
                    std::string GetSPCost() const;

                    /**
                     * 设置Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * @param _sPCost Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * 
                     */
                    void SetSPCost(const std::string& _sPCost);

                    /**
                     * 判断参数 SPCost 是否已赋值
                     * @return SPCost 是否已赋值
                     * 
                     */
                    bool SPCostHasBeenSet() const;

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
                     * 获取Component list price: The original unit price of the component on the portal (not displayed if the customer enjoys a fixed price/contract price)
                     * @return SinglePrice Component list price: The original unit price of the component on the portal (not displayed if the customer enjoys a fixed price/contract price)
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置Component list price: The original unit price of the component on the portal (not displayed if the customer enjoys a fixed price/contract price)
                     * @param _singlePrice Component list price: The original unit price of the component on the portal (not displayed if the customer enjoys a fixed price/contract price)
                     * 
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     * 
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * @return ContractPrice Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * 
                     */
                    std::string GetContractPrice() const;

                    /**
                     * 设置Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * @param _contractPrice Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     * 
                     */
                    void SetContractPrice(const std::string& _contractPrice);

                    /**
                     * 判断参数 ContractPrice 是否已赋值
                     * @return ContractPrice 是否已赋值
                     * 
                     */
                    bool ContractPriceHasBeenSet() const;

                    /**
                     * 获取Component Price Unit: Unit of component price, Unit Composition: CNY/usage unit/duration unit
                     * @return SinglePriceUnit Component Price Unit: Unit of component price, Unit Composition: CNY/usage unit/duration unit
                     * 
                     */
                    std::string GetSinglePriceUnit() const;

                    /**
                     * 设置Component Price Unit: Unit of component price, Unit Composition: CNY/usage unit/duration unit
                     * @param _singlePriceUnit Component Price Unit: Unit of component price, Unit Composition: CNY/usage unit/duration unit
                     * 
                     */
                    void SetSinglePriceUnit(const std::string& _singlePriceUnit);

                    /**
                     * 判断参数 SinglePriceUnit 是否已赋值
                     * @return SinglePriceUnit 是否已赋值
                     * 
                     */
                    bool SinglePriceUnitHasBeenSet() const;

                    /**
                     * 获取Component usage: The actual settlement usage of the component, Component Usage = Original Component Usage - Deducted Usage (including resource packages)
                     * @return UsedAmount Component usage: The actual settlement usage of the component, Component Usage = Original Component Usage - Deducted Usage (including resource packages)
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置Component usage: The actual settlement usage of the component, Component Usage = Original Component Usage - Deducted Usage (including resource packages)
                     * @param _usedAmount Component usage: The actual settlement usage of the component, Component Usage = Original Component Usage - Deducted Usage (including resource packages)
                     * 
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取Component usage unit: Unit of measurement corresponding to component usage.
                     * @return UsedAmountUnit Component usage unit: Unit of measurement corresponding to component usage.
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置Component usage unit: Unit of measurement corresponding to component usage.
                     * @param _usedAmountUnit Component usage unit: Unit of measurement corresponding to component usage.
                     * 
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     * 
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取Usage duration: The duration of resource usage, Component Usage = Original Component Usage Duration - Deducted Duration (including resource packages)
                     * @return TimeSpan Usage duration: The duration of resource usage, Component Usage = Original Component Usage Duration - Deducted Duration (including resource packages)
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置Usage duration: The duration of resource usage, Component Usage = Original Component Usage Duration - Deducted Duration (including resource packages)
                     * @param _timeSpan Usage duration: The duration of resource usage, Component Usage = Original Component Usage Duration - Deducted Duration (including resource packages)
                     * 
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Duration unit: Unit of resource usage duration.
                     * @return TimeUnit Duration unit: Unit of resource usage duration.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Duration unit: Unit of resource usage duration.
                     * @param _timeUnit Duration unit: Unit of resource usage duration.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

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
                     * 获取Original usage/duration: The original usage of the component before deduction by resource packages.
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * @return RealTotalMeasure Original usage/duration: The original usage of the component before deduction by resource packages.
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * 
                     */
                    std::string GetRealTotalMeasure() const;

                    /**
                     * 设置Original usage/duration: The original usage of the component before deduction by resource packages.
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * @param _realTotalMeasure Original usage/duration: The original usage of the component before deduction by resource packages.
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * 
                     */
                    void SetRealTotalMeasure(const std::string& _realTotalMeasure);

                    /**
                     * 判断参数 RealTotalMeasure 是否已赋值
                     * @return RealTotalMeasure 是否已赋值
                     * 
                     */
                    bool RealTotalMeasureHasBeenSet() const;

                    /**
                     * 获取Deduction of usage/duration (including resource packages): The amount of usage deducted by resource packages
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * @return DeductedMeasure Deduction of usage/duration (including resource packages): The amount of usage deducted by resource packages
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * 
                     */
                    std::string GetDeductedMeasure() const;

                    /**
                     * 设置Deduction of usage/duration (including resource packages): The amount of usage deducted by resource packages
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * @param _deductedMeasure Deduction of usage/duration (including resource packages): The amount of usage deducted by resource packages
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     * 
                     */
                    void SetDeductedMeasure(const std::string& _deductedMeasure);

                    /**
                     * 判断参数 DeductedMeasure 是否已赋值
                     * @return DeductedMeasure 是否已赋值
                     * 
                     */
                    bool DeductedMeasureHasBeenSet() const;

                    /**
                     * 获取Discount rate: The discount rate enjoyed by this resource (it is not shown by default if the customer enjoys a fixed/contract price, and it is also not shown by default in the refund scenario)
                     * @return Discount Discount rate: The discount rate enjoyed by this resource (it is not shown by default if the customer enjoys a fixed/contract price, and it is also not shown by default in the refund scenario)
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount rate: The discount rate enjoyed by this resource (it is not shown by default if the customer enjoys a fixed/contract price, and it is also not shown by default in the refund scenario)
                     * @param _discount Discount rate: The discount rate enjoyed by this resource (it is not shown by default if the customer enjoys a fixed/contract price, and it is also not shown by default in the refund scenario)
                     * 
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Original Price.
                     * @return BlendedDiscount Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Original Price.
                     * 
                     */
                    std::string GetBlendedDiscount() const;

                    /**
                     * 设置Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Original Price.
                     * @param _blendedDiscount Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Original Price.
                     * 
                     */
                    void SetBlendedDiscount(const std::string& _blendedDiscount);

                    /**
                     * 判断参数 BlendedDiscount 是否已赋值
                     * @return BlendedDiscount 是否已赋值
                     * 
                     */
                    bool BlendedDiscountHasBeenSet() const;

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
                     * 获取Calculation rule explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * @return Formula Calculation rule explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置Calculation rule explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     * @param _formula Calculation rule explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
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
                     * 获取Configuration description: Information on specification of resource configuration
                     * @return ComponentConfig Configuration description: Information on specification of resource configuration
                     * 
                     */
                    std::string GetComponentConfig() const;

                    /**
                     * 设置Configuration description: Information on specification of resource configuration
                     * @param _componentConfig Configuration description: Information on specification of resource configuration
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
                     * 获取SPDeduction
                     * @return SPDeduction SPDeduction
                     * 
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置SPDeduction
                     * @param _sPDeduction SPDeduction
                     * 
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * 
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * @return SPDeductionRate Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * 
                     */
                    std::string GetSPDeductionRate() const;

                    /**
                     * 设置Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * @param _sPDeductionRate Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     * 
                     */
                    void SetSPDeductionRate(const std::string& _sPDeductionRate);

                    /**
                     * 判断参数 SPDeductionRate 是否已赋值
                     * @return SPDeductionRate 是否已赋值
                     * 
                     */
                    bool SPDeductionRateHasBeenSet() const;

                    /**
                     * 获取Currency.
                     * @return Currency Currency.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency.
                     * @param _currency Currency.
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Tax
                     * @return Tax Tax
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax
                     * @param _tax Tax
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取tax rate
                     * @return TaxRate tax rate
                     * 
                     */
                    std::string GetTaxRate() const;

                    /**
                     * 设置tax rate
                     * @param _taxRate tax rate
                     * 
                     */
                    void SetTaxRate(const std::string& _taxRate);

                    /**
                     * 判断参数 TaxRate 是否已赋值
                     * @return TaxRate 是否已赋值
                     * 
                     */
                    bool TaxRateHasBeenSet() const;

                    /**
                     * 获取CostBeforeTax
                     * @return CostBeforeTax CostBeforeTax
                     * 
                     */
                    std::string GetCostBeforeTax() const;

                    /**
                     * 设置CostBeforeTax
                     * @param _costBeforeTax CostBeforeTax
                     * 
                     */
                    void SetCostBeforeTax(const std::string& _costBeforeTax);

                    /**
                     * 判断参数 CostBeforeTax 是否已赋值
                     * @return CostBeforeTax 是否已赋值
                     * 
                     */
                    bool CostBeforeTaxHasBeenSet() const;

                    /**
                     * 获取AmountBeforeTax
                     * @return AmountBeforeTax AmountBeforeTax
                     * 
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置AmountBeforeTax
                     * @param _amountBeforeTax AmountBeforeTax
                     * 
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     * 
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

                    /**
                     * 获取AssociatedOrder
                     * @return AssociatedOrder AssociatedOrder
                     * 
                     */
                    std::string GetAssociatedOrder() const;

                    /**
                     * 设置AssociatedOrder
                     * @param _associatedOrder AssociatedOrder
                     * 
                     */
                    void SetAssociatedOrder(const std::string& _associatedOrder);

                    /**
                     * 判断参数 AssociatedOrder 是否已赋值
                     * @return AssociatedOrder 是否已赋值
                     * 
                     */
                    bool AssociatedOrderHasBeenSet() const;

                    /**
                     * 获取Discount object of the current consumption item, such as official website discount, user discount and activity discount.
                     * @return DiscountObject Discount object of the current consumption item, such as official website discount, user discount and activity discount.
                     * 
                     */
                    std::string GetDiscountObject() const;

                    /**
                     * 设置Discount object of the current consumption item, such as official website discount, user discount and activity discount.
                     * @param _discountObject Discount object of the current consumption item, such as official website discount, user discount and activity discount.
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
                     * 获取Discount type of the current consumption item, such as discount and contract price.
                     * @return DiscountType Discount type of the current consumption item, such as discount and contract price.
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置Discount type of the current consumption item, such as discount and contract price.
                     * @param _discountType Discount type of the current consumption item, such as discount and contract price.
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
                     * 获取Supplementary description of the offer type, for example: business discount 20% off, the offer type is "discount" and the discount content is "0.8".
                     * @return DiscountContent Supplementary description of the offer type, for example: business discount 20% off, the offer type is "discount" and the discount content is "0.8".
                     * 
                     */
                    std::string GetDiscountContent() const;

                    /**
                     * 设置Supplementary description of the offer type, for example: business discount 20% off, the offer type is "discount" and the discount content is "0.8".
                     * @param _discountContent Supplementary description of the offer type, for example: business discount 20% off, the offer type is "discount" and the discount content is "0.8".
                     * 
                     */
                    void SetDiscountContent(const std::string& _discountContent);

                    /**
                     * 判断参数 DiscountContent 是否已赋值
                     * @return DiscountContent 是否已赋值
                     * 
                     */
                    bool DiscountContentHasBeenSet() const;

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

                private:

                    /**
                     * Unique identifier of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * Name of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                    /**
                     * Date: Settlement date
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * User UIN: Account ID of the actual resource user
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Billing mode code
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Billing mode: Resource billing mode, which can be monthly subscription or pay-as-you-go.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Transaction type code
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Transaction type: Detailed transaction type
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Product code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name: Various cloud products purchased by users
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Subproduct name: Product subdivision type purchased by the user
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name: The region where the resource is located
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * AZ ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Availability zone: The availability zone where the resource is located.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Instance type code
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance type: The type of an instance corresponding to the product service purchased, including resource packages, RI, SP, and spot instances. It is displayed as "-" by default for regular instances.
                     */
                    std::string m_instanceTypeName;
                    bool m_instanceTypeNameHasBeenSet;

                    /**
                     * Resource ID: Resources vary by product, and the content is not identical. For example, Cloud Virtual Machine (CVM) corresponds to the instance ID. If the product is split, it shows the split item ID, such as COS bucket ID and CDN domain name.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Instance name: The name set by the user for the resource in the console, which is empty by default if not set. If the product is split, it shows the split resource alias.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Allocation tag: The resource-bound tag
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name: The Project to which a resource belongs, which is independently allocated by the user for the resource in the console. If a resource has not been allocated to an Project, it will be a default Project.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     */
                    int64_t m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                    /**
                     * Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Reserved instance deduction duration: The duration of use deducted by reserved instances for this product or service.
                     */
                    std::string m_riTimeSpan;
                    bool m_riTimeSpanHasBeenSet;

                    /**
                     * Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     */
                    std::string m_riCost;
                    bool m_riCostHasBeenSet;

                    /**
                     * Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Cash account expenditure (CNY): The amount paid through the cash account
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Gift account expenditure (CNY): The amount paid using free credits
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Royalty account expenditure (CNY): The amount paid through the royalty account
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Component name code
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * Component name: The specific component of a product or service purchased by the user
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * Component type code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component type: The major component category corresponding to the product or service purchased by the user
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * Split item ID: The ID of the split item involved in the split product, such as COS bucket ID and CDN domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_splitItemId;
                    bool m_splitItemIdHasBeenSet;

                    /**
                     * Split item name: The split item involved in the split product
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_splitItemName;
                    bool m_splitItemNameHasBeenSet;

                    /**
                     * Usage start time: Usage start time
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * Usage end time: Product or service usage end time
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     */
                    std::string m_sPCost;
                    bool m_sPCostHasBeenSet;

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
                     * Component list price: The original unit price of the component on the portal (not displayed if the customer enjoys a fixed price/contract price)
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * Component unit price: Discounted unit price of the component. Component unit price = list price * discount.
                     */
                    std::string m_contractPrice;
                    bool m_contractPriceHasBeenSet;

                    /**
                     * Component Price Unit: Unit of component price, Unit Composition: CNY/usage unit/duration unit
                     */
                    std::string m_singlePriceUnit;
                    bool m_singlePriceUnitHasBeenSet;

                    /**
                     * Component usage: The actual settlement usage of the component, Component Usage = Original Component Usage - Deducted Usage (including resource packages)
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * Component usage unit: Unit of measurement corresponding to component usage.
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * Usage duration: The duration of resource usage, Component Usage = Original Component Usage Duration - Deducted Duration (including resource packages)
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit: Unit of resource usage duration.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Remark attribute (instance configuration): Additional remark information, such as reserved instance type and transaction type for reserved instances, regional information of both ends for CCN products.
                     */
                    std::string m_reserveDetail;
                    bool m_reserveDetailHasBeenSet;

                    /**
                     * Original usage/duration: The original usage of the component before deduction by resource packages.
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     */
                    std::string m_realTotalMeasure;
                    bool m_realTotalMeasureHasBeenSet;

                    /**
                     * Deduction of usage/duration (including resource packages): The amount of usage deducted by resource packages
(Currently only TRTC, TEM, Cloud Call Center, and CDZ products support this information display. Other products are being integrated.)
                     */
                    std::string m_deductedMeasure;
                    bool m_deductedMeasureHasBeenSet;

                    /**
                     * Discount rate: The discount rate enjoyed by this resource (it is not shown by default if the customer enjoys a fixed/contract price, and it is also not shown by default in the refund scenario)
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Mixed discount rate: The final discount rate after integrating various discount deductions. Mixed Discount Rate = Discounted total price/Original Price.
                     */
                    std::string m_blendedDiscount;
                    bool m_blendedDiscountHasBeenSet;

                    /**
                     * Price attribute: Other attributes of the component that affect discount pricing besides unit price and duration
                     */
                    std::vector<std::string> m_priceInfo;
                    bool m_priceInfoHasBeenSet;

                    /**
                     * Calculation rule explanation: A detailed explanation to calculations of billing settlement for special transaction types, such as refund and configuration changes.
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * Billing Rules: The detailed billing rules for each product shown in the portal explanation link
                     */
                    std::string m_formulaUrl;
                    bool m_formulaUrlHasBeenSet;

                    /**
                     * Configuration description: Information on specification of resource configuration
                     */
                    std::string m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                    /**
                     * SPDeduction
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * Savings plan deduction rate: The discount rate for this component within the available balance limit of the savings plan
                     */
                    std::string m_sPDeductionRate;
                    bool m_sPDeductionRateHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * tax rate
                     */
                    std::string m_taxRate;
                    bool m_taxRateHasBeenSet;

                    /**
                     * CostBeforeTax
                     */
                    std::string m_costBeforeTax;
                    bool m_costBeforeTaxHasBeenSet;

                    /**
                     * AmountBeforeTax
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * AssociatedOrder
                     */
                    std::string m_associatedOrder;
                    bool m_associatedOrderHasBeenSet;

                    /**
                     * Discount object of the current consumption item, such as official website discount, user discount and activity discount.
                     */
                    std::string m_discountObject;
                    bool m_discountObjectHasBeenSet;

                    /**
                     * Discount type of the current consumption item, such as discount and contract price.
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                    /**
                     * Supplementary description of the offer type, for example: business discount 20% off, the offer type is "discount" and the discount content is "0.8".
                     */
                    std::string m_discountContent;
                    bool m_discountContentHasBeenSet;

                    /**
                     * Billing month
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYITEM_H_
