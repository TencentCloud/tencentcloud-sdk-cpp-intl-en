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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>
#include <tencentcloud/billing/v20180709/model/AllocationTreeNode.h>
#include <tencentcloud/billing/v20180709/model/AllocationRule.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Resource collection summary
                */
                class GatherResourceSummary : public AbstractModel
                {
                public:
                    GatherResourceSummary();
                    ~GatherResourceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Allocation rule ID hit by the resource
                     * @return RuleId Allocation rule ID hit by the resource
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Allocation rule ID hit by the resource
                     * @param _ruleId Allocation rule ID hit by the resource
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Allocation rule name hit by the resource
                     * @return RuleName Allocation rule name hit by the resource
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Allocation rule name hit by the resource
                     * @param _ruleName Allocation rule name hit by the resource
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

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
                     * 获取Information of the current allocation unit
                     * @return BelongTreeNodeUniqKey Information of the current allocation unit
                     * 
                     */
                    AllocationTreeNode GetBelongTreeNodeUniqKey() const;

                    /**
                     * 设置Information of the current allocation unit
                     * @param _belongTreeNodeUniqKey Information of the current allocation unit
                     * 
                     */
                    void SetBelongTreeNodeUniqKey(const AllocationTreeNode& _belongTreeNodeUniqKey);

                    /**
                     * 判断参数 BelongTreeNodeUniqKey 是否已赋值
                     * @return BelongTreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool BelongTreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取Information on allocation rules hit by the current resource
                     * @return BelongRule Information on allocation rules hit by the current resource
                     * 
                     */
                    AllocationRule GetBelongRule() const;

                    /**
                     * 设置Information on allocation rules hit by the current resource
                     * @param _belongRule Information on allocation rules hit by the current resource
                     * 
                     */
                    void SetBelongRule(const AllocationRule& _belongRule);

                    /**
                     * 判断参数 BelongRule 是否已赋值
                     * @return BelongRule 是否已赋值
                     * 
                     */
                    bool BelongRuleHasBeenSet() const;

                    /**
                     * 获取Information on other allocation units
                     * @return OtherTreeNodeUniqKeys Information on other allocation units
                     * 
                     */
                    std::vector<AllocationTreeNode> GetOtherTreeNodeUniqKeys() const;

                    /**
                     * 设置Information on other allocation units
                     * @param _otherTreeNodeUniqKeys Information on other allocation units
                     * 
                     */
                    void SetOtherTreeNodeUniqKeys(const std::vector<AllocationTreeNode>& _otherTreeNodeUniqKeys);

                    /**
                     * 判断参数 OtherTreeNodeUniqKeys 是否已赋值
                     * @return OtherTreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool OtherTreeNodeUniqKeysHasBeenSet() const;

                    /**
                     * 获取Information on other hit rules
                     * @return OtherRules Information on other hit rules
                     * 
                     */
                    std::vector<AllocationRule> GetOtherRules() const;

                    /**
                     * 设置Information on other hit rules
                     * @param _otherRules Information on other hit rules
                     * 
                     */
                    void SetOtherRules(const std::vector<AllocationRule>& _otherRules);

                    /**
                     * 判断参数 OtherRules 是否已赋值
                     * @return OtherRules 是否已赋值
                     * 
                     */
                    bool OtherRulesHasBeenSet() const;

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

                private:

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
                     * Allocation rule ID hit by the resource
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Allocation rule name hit by the resource
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

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
                     * Allocation tag: The resource-bound tag
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

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
                     * Cost collection type: The source types of fees, including allocated, collection and unallocated.
0 - Allocation
1 - Collection
-1 - Unallocated
                     */
                    int64_t m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                    /**
                     * Information of the current allocation unit
                     */
                    AllocationTreeNode m_belongTreeNodeUniqKey;
                    bool m_belongTreeNodeUniqKeyHasBeenSet;

                    /**
                     * Information on allocation rules hit by the current resource
                     */
                    AllocationRule m_belongRule;
                    bool m_belongRuleHasBeenSet;

                    /**
                     * Information on other allocation units
                     */
                    std::vector<AllocationTreeNode> m_otherTreeNodeUniqKeys;
                    bool m_otherTreeNodeUniqKeysHasBeenSet;

                    /**
                     * Information on other hit rules
                     */
                    std::vector<AllocationRule> m_otherRules;
                    bool m_otherRulesHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_GATHERRESOURCESUMMARY_H_
