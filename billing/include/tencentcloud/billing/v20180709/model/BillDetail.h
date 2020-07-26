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
                     * 获取Sub-product name: sub-categories of Tencent Cloud services, such as CVM-Standard S1
                     * @return ProductCodeName Sub-product name: sub-categories of Tencent Cloud services, such as CVM-Standard S1
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Sub-product name: sub-categories of Tencent Cloud services, such as CVM-Standard S1
                     * @param ProductCodeName Sub-product name: sub-categories of Tencent Cloud services, such as CVM-Standard S1
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
                     * 获取Project: project of a resource
                     * @return ProjectName Project: project of a resource
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project: project of a resource
                     * @param ProjectName Project: project of a resource
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Region: region of a resource, e.g. South China (Guangzhou)
                     * @return RegionName Region: region of a resource, e.g. South China (Guangzhou)
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region: region of a resource, e.g. South China (Guangzhou)
                     * @param RegionName Region: region of a resource, e.g. South China (Guangzhou)
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     * @return ZoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     * @param ZoneName Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
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
                     * 获取Instance name
                     * @return ResourceName Instance name
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Instance name
                     * @param ResourceName Instance name
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
                     * 获取Transaction ID
                     * @return BillId Transaction ID
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置Transaction ID
                     * @param BillId Transaction ID
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     */
                    bool BillIdHasBeenSet() const;

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
                     * 获取Component list
                     * @return ComponentSet Component list
                     */
                    std::vector<BillDetailComponent> GetComponentSet() const;

                    /**
                     * 设置Component list
                     * @param ComponentSet Component list
                     */
                    void SetComponentSet(const std::vector<BillDetailComponent>& _componentSet);

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取Payer’s UIN
                     * @return PayerUin Payer’s UIN
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer’s UIN
                     * @param PayerUin Payer’s UIN
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取User’s UIN
                     * @return OwnerUin User’s UIN
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User’s UIN
                     * @param OwnerUin User’s UIN
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Operator's UIN
                     * @return OperateUin Operator's UIN
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator's UIN
                     * @param OperateUin Operator's UIN
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     */
                    bool OperateUinHasBeenSet() const;

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
                     * 获取
                     * @return BusinessCode 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置
                     * @param BusinessCode 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProductCode 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置
                     * @param ProductCode 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ActionType 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置
                     * @param ActionType 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * Product name: major categories of Tencent Cloud services, e.g. CVM and TencentDB for MySQL
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Sub-product name: sub-categories of Tencent Cloud services, such as CVM-Standard S1
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project: project of a resource
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region: region of a resource, e.g. South China (Guangzhou)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Availability zone: availability zone of a resource, e.g. Guangzhou Zone 3
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Instance name
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
                     * Transaction ID
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

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
                     * Component list
                     */
                    std::vector<BillDetailComponent> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * Payer’s UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * User’s UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Operator's UIN
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAIL_H_
