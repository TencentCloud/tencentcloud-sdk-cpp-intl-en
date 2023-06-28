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
                     * 获取Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * @return BusinessCodeName Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     * @param _businessCodeName Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
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
                     * 获取Subproduct name:  The subcategory of a Tencent Cloud product purchased by the user, such as  CVM – Standard S1.
                     * @return ProductCodeName Subproduct name:  The subcategory of a Tencent Cloud product purchased by the user, such as  CVM – Standard S1.
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name:  The subcategory of a Tencent Cloud product purchased by the user, such as  CVM – Standard S1.
                     * @param _productCodeName Subproduct name:  The subcategory of a Tencent Cloud product purchased by the user, such as  CVM – Standard S1.
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
                     * 获取Billing mode,  which can be monthly subscription or pay-as-you-go.
                     * @return PayModeName Billing mode,  which can be monthly subscription or pay-as-you-go.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode,  which can be monthly subscription or pay-as-you-go.
                     * @param _payModeName Billing mode,  which can be monthly subscription or pay-as-you-go.
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
                     * 获取Project name:  The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @return ProjectName Project name:  The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name:  The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     * @param _projectName Project name:  The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
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
                     * 获取Region:  The region to which a resource belongs, such as South China (Guangzhou).
                     * @return RegionName Region:  The region to which a resource belongs, such as South China (Guangzhou).
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region:  The region to which a resource belongs, such as South China (Guangzhou).
                     * @param _regionName Region:  The region to which a resource belongs, such as South China (Guangzhou).
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
                     * 获取Availability zone:  The availability zone to which a resource belongs, such as Guangzhou Zone 3.
                     * @return ZoneName Availability zone:  The availability zone to which a resource belongs, such as Guangzhou Zone 3.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone:  The availability zone to which a resource belongs, such as Guangzhou Zone 3.
                     * @param _zoneName Availability zone:  The availability zone to which a resource belongs, such as Guangzhou Zone 3.
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
                     * 获取Instance ID:  The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.	
                     * @return ResourceId Instance ID:  The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.	
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Instance ID:  The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.	
                     * @param _resourceId Instance ID:  The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.	
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
                     * 获取Instance name:  The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * @return ResourceName Instance name:  The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Instance name:  The resource name set by the user in the console. If it is not set, it will be empty by default.
                     * @param _resourceName Instance name:  The resource name set by the user in the console. If it is not set, it will be empty by default.
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
                     * 获取Transaction type,  which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * @return ActionTypeName Transaction type,  which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Transaction type,  which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     * @param _actionTypeName Transaction type,  which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
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
                     * 获取Order ID:  The order number for a monthly subscription purchase
                     * @return OrderId Order ID:  The order number for a monthly subscription purchase
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID:  The order number for a monthly subscription purchase
                     * @param _orderId Order ID:  The order number for a monthly subscription purchase
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
                     * 获取Transaction time:  The time at which a payment was deducted
                     * @return PayTime Transaction time:  The time at which a payment was deducted
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Transaction time:  The time at which a payment was deducted
                     * @param _payTime Transaction time:  The time at which a payment was deducted
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
                     * 获取Usage start time:  The time at which product or service usage starts
                     * @return FeeBeginTime Usage start time:  The time at which product or service usage starts
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Usage start time:  The time at which product or service usage starts
                     * @param _feeBeginTime Usage start time:  The time at which product or service usage starts
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
                     * 获取Usage end time:  The time at which product or service usage ends
                     * @return FeeEndTime Usage end time:  The time at which product or service usage ends
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置Usage end time:  The time at which product or service usage ends
                     * @param _feeEndTime Usage end time:  The time at which product or service usage ends
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
                     * 获取Configuration description:  The billable item names and usage of a resource, which are displayed on the resource bill only.
                     * @return ConfigDesc Configuration description:  The billable item names and usage of a resource, which are displayed on the resource bill only.
                     * 
                     */
                    std::string GetConfigDesc() const;

                    /**
                     * 设置Configuration description:  The billable item names and usage of a resource, which are displayed on the resource bill only.
                     * @param _configDesc Configuration description:  The billable item names and usage of a resource, which are displayed on the resource bill only.
                     * 
                     */
                    void SetConfigDesc(const std::string& _configDesc);

                    /**
                     * 判断参数 ConfigDesc 是否已赋值
                     * @return ConfigDesc 是否已赋值
                     * 
                     */
                    bool ConfigDescHasBeenSet() const;

                    /**
                     * 获取Extended field 1:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @return ExtendField1 Extended field 1:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    std::string GetExtendField1() const;

                    /**
                     * 设置Extended field 1:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @param _extendField1 Extended field 1:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    void SetExtendField1(const std::string& _extendField1);

                    /**
                     * 判断参数 ExtendField1 是否已赋值
                     * @return ExtendField1 是否已赋值
                     * 
                     */
                    bool ExtendField1HasBeenSet() const;

                    /**
                     * 获取Extended field 2:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @return ExtendField2 Extended field 2:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    std::string GetExtendField2() const;

                    /**
                     * 设置Extended field 2:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @param _extendField2 Extended field 2:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    void SetExtendField2(const std::string& _extendField2);

                    /**
                     * 判断参数 ExtendField2 是否已赋值
                     * @return ExtendField2 是否已赋值
                     * 
                     */
                    bool ExtendField2HasBeenSet() const;

                    /**
                     * 获取Original cost:  The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @return TotalCost Original cost:  The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Original cost:  The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @param _totalCost Original cost:  The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
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
                     * 获取Discount multiplier:  The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @return Discount Discount multiplier:  The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置Discount multiplier:  The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     * @param _discount Discount multiplier:  The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
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
                     * 获取Offer type
                     * @return ReduceType Offer type
                     * 
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置Offer type
                     * @param _reduceType Offer type
                     * 
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     * 
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取Total amount after discount
                     * @return RealTotalCost Total amount after discount
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total amount after discount
                     * @param _realTotalCost Total amount after discount
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
                     * 获取Voucher payment:  The voucher deduction amount
                     * @return VoucherPayAmount Voucher payment:  The voucher deduction amount
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher payment:  The voucher deduction amount
                     * @param _voucherPayAmount Voucher payment:  The voucher deduction amount
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
                     * 获取Cash credit:  The amount paid from the user’s cash account
                     * @return CashPayAmount Cash credit:  The amount paid from the user’s cash account
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash credit:  The amount paid from the user’s cash account
                     * @param _cashPayAmount Cash credit:  The amount paid from the user’s cash account
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
                     * 获取Free credit:  The amount paid by the user’s free credit
                     * @return IncentivePayAmount Free credit:  The amount paid by the user’s free credit
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Free credit:  The amount paid by the user’s free credit
                     * @param _incentivePayAmount Free credit:  The amount paid by the user’s free credit
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
                     * 获取Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return TransferPayAmount Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _transferPayAmount Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Extended field 3:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @return ExtendField3 Extended field 3:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    std::string GetExtendField3() const;

                    /**
                     * 设置Extended field 3:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @param _extendField3 Extended field 3:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    void SetExtendField3(const std::string& _extendField3);

                    /**
                     * 判断参数 ExtendField3 是否已赋值
                     * @return ExtendField3 是否已赋值
                     * 
                     */
                    bool ExtendField3HasBeenSet() const;

                    /**
                     * 获取Extended field 4:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @return ExtendField4 Extended field 4:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    std::string GetExtendField4() const;

                    /**
                     * 设置Extended field 4:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @param _extendField4 Extended field 4:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    void SetExtendField4(const std::string& _extendField4);

                    /**
                     * 判断参数 ExtendField4 是否已赋值
                     * @return ExtendField4 是否已赋值
                     * 
                     */
                    bool ExtendField4HasBeenSet() const;

                    /**
                     * 获取Extended field 5:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @return ExtendField5 Extended field 5:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    std::string GetExtendField5() const;

                    /**
                     * 设置Extended field 5:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * @param _extendField5 Extended field 5:  Extended attribute information of a product, which is displayed on the resource bill only.
                     * 
                     */
                    void SetExtendField5(const std::string& _extendField5);

                    /**
                     * 判断参数 ExtendField5 是否已赋值
                     * @return ExtendField5 是否已赋值
                     * 
                     */
                    bool ExtendField5HasBeenSet() const;

                    /**
                     * 获取Tag information. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information. Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillTagInfo> GetTags() const;

                    /**
                     * 设置Tag information. Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information. Note:  This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payer account ID:  The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * @return PayerUin Payer account ID:  The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer account ID:  The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     * @param _payerUin Payer account ID:  The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
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
                     * 获取Owner account ID:  The account ID of the actual resource user
                     * @return OwnerUin Owner account ID:  The account ID of the actual resource user
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner account ID:  The account ID of the actual resource user
                     * @param _ownerUin Owner account ID:  The account ID of the actual resource user
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
                     * 获取Operator account ID:  The account or role ID of the operator who purchases or activates a resource.
                     * @return OperateUin Operator account ID:  The account or role ID of the operator who purchases or activates a resource.
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator account ID:  The account or role ID of the operator who purchases or activates a resource.
                     * @param _operateUin Operator account ID:  The account or role ID of the operator who purchases or activates a resource.
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
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Instance type:  The instance type of a product or service purchased, which can be resource package, RI, SP, or spot instance. Other instance types are not displayed by default.
                     * @return InstanceType Instance type:  The instance type of a product or service purchased, which can be resource package, RI, SP, or spot instance. Other instance types are not displayed by default.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type:  The instance type of a product or service purchased, which can be resource package, RI, SP, or spot instance. Other instance types are not displayed by default.
                     * @param _instanceType Instance type:  The instance type of a product or service purchased, which can be resource package, RI, SP, or spot instance. Other instance types are not displayed by default.
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
                     * 获取RI deduction (cost):  The amount deducted from the original cost by RI	
                     * @return OriginalCostWithRI RI deduction (cost):  The amount deducted from the original cost by RI	
                     * 
                     */
                    std::string GetOriginalCostWithRI() const;

                    /**
                     * 设置RI deduction (cost):  The amount deducted from the original cost by RI	
                     * @param _originalCostWithRI RI deduction (cost):  The amount deducted from the original cost by RI	
                     * 
                     */
                    void SetOriginalCostWithRI(const std::string& _originalCostWithRI);

                    /**
                     * 判断参数 OriginalCostWithRI 是否已赋值
                     * @return OriginalCostWithRI 是否已赋值
                     * 
                     */
                    bool OriginalCostWithRIHasBeenSet() const;

                    /**
                     * 获取Cost deduction by SP. This parameter has been deprecated.
                     * @return SPDeduction Cost deduction by SP. This parameter has been deprecated.
                     * @deprecated
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置Cost deduction by SP. This parameter has been deprecated.
                     * @param _sPDeduction Cost deduction by SP. This parameter has been deprecated.
                     * @deprecated
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * @deprecated
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取SP deduction (cost):  SP deduction (cost) = Cost deduction by SP / SP deduction rate	
                     * @return OriginalCostWithSP SP deduction (cost):  SP deduction (cost) = Cost deduction by SP / SP deduction rate	
                     * 
                     */
                    std::string GetOriginalCostWithSP() const;

                    /**
                     * 设置SP deduction (cost):  SP deduction (cost) = Cost deduction by SP / SP deduction rate	
                     * @param _originalCostWithSP SP deduction (cost):  SP deduction (cost) = Cost deduction by SP / SP deduction rate	
                     * 
                     */
                    void SetOriginalCostWithSP(const std::string& _originalCostWithSP);

                    /**
                     * 判断参数 OriginalCostWithSP 是否已赋值
                     * @return OriginalCostWithSP 是否已赋值
                     * 
                     */
                    bool OriginalCostWithSPHasBeenSet() const;

                private:

                    /**
                     * Product name:  The name of a Tencent Cloud product purchased by the user, such as  CVM.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct name:  The subcategory of a Tencent Cloud product purchased by the user, such as  CVM – Standard S1.
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode,  which can be monthly subscription or pay-as-you-go.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project name:  The project to which a resource belongs, which is user-designated. If a resource has not been assigned to a project, it will automatically belong to the default project.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region:  The region to which a resource belongs, such as South China (Guangzhou).
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Availability zone:  The availability zone to which a resource belongs, such as Guangzhou Zone 3.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Instance ID:  The object ID of a billed resource, such as a CVM instance ID. This object ID may vary due to various forms and contents of resources in different products.	
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Instance name:  The resource name set by the user in the console. If it is not set, it will be empty by default.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Transaction type,  which can be monthly subscription purchase, monthly subscription renewal, or pay-as-you-go deduction.
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * Order ID:  The order number for a monthly subscription purchase
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Transaction time:  The time at which a payment was deducted
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Usage start time:  The time at which product or service usage starts
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * Usage end time:  The time at which product or service usage ends
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Configuration description:  The billable item names and usage of a resource, which are displayed on the resource bill only.
                     */
                    std::string m_configDesc;
                    bool m_configDescHasBeenSet;

                    /**
                     * Extended field 1:  Extended attribute information of a product, which is displayed on the resource bill only.
                     */
                    std::string m_extendField1;
                    bool m_extendField1HasBeenSet;

                    /**
                     * Extended field 2:  Extended attribute information of a product, which is displayed on the resource bill only.
                     */
                    std::string m_extendField2;
                    bool m_extendField2HasBeenSet;

                    /**
                     * Original cost:  The original cost of a resource, which is "List price x Usage x Usage duration". If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Discount multiplier:  The discount multiplier applied to the cost of the resource. If a customer has applied for a fixed preferential price or contract price or is in a refund scenario, this parameter will not be displayed by default.
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Offer type
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * Total amount after discount
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Voucher payment:  The voucher deduction amount
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Cash credit:  The amount paid from the user’s cash account
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Free credit:  The amount paid by the user’s free credit
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Commission credit:  The amount paid by the user’s commission credit. Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Extended field 3:  Extended attribute information of a product, which is displayed on the resource bill only.
                     */
                    std::string m_extendField3;
                    bool m_extendField3HasBeenSet;

                    /**
                     * Extended field 4:  Extended attribute information of a product, which is displayed on the resource bill only.
                     */
                    std::string m_extendField4;
                    bool m_extendField4HasBeenSet;

                    /**
                     * Extended field 5:  Extended attribute information of a product, which is displayed on the resource bill only.
                     */
                    std::string m_extendField5;
                    bool m_extendField5HasBeenSet;

                    /**
                     * Tag information. Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Payer account ID:  The account ID of the payer, which is the unique identifier of a Tencent Cloud user.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Owner account ID:  The account ID of the actual resource user
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator account ID:  The account or role ID of the operator who purchases or activates a resource.
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
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Instance type:  The instance type of a product or service purchased, which can be resource package, RI, SP, or spot instance. Other instance types are not displayed by default.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * RI deduction (cost):  The amount deducted from the original cost by RI	
                     */
                    std::string m_originalCostWithRI;
                    bool m_originalCostWithRIHasBeenSet;

                    /**
                     * Cost deduction by SP. This parameter has been deprecated.
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * SP deduction (cost):  SP deduction (cost) = Cost deduction by SP / SP deduction rate	
                     */
                    std::string m_originalCostWithSP;
                    bool m_originalCostWithSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLRESOURCESUMMARY_H_
