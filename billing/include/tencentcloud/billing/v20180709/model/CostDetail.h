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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/CostComponentSet.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Consumption details data type
                */
                class CostDetail : public AbstractModel
                {
                public:
                    CostDetail();
                    ~CostDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Payer UIN
                     * @return PayerUin Payer UIN
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN
                     * @param _payerUin Payer UIN
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
                     * 获取Subproduct name
                     * @return ProductCodeName Subproduct name
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Subproduct name
                     * @param _productCodeName Subproduct name
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
                     * 获取Billing mode name
                     * @return PayModeName Billing mode name
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode name
                     * @param _payModeName Billing mode name
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
                     * 获取Region Name
                     * @return RegionName Region Name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region Name
                     * @param _regionName Region Name
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
                     * 获取Zone name
                     * @return ZoneName Zone name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Zone name
                     * @param _zoneName Zone name
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
                     * 获取Type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionTypeName Type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置Type nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionTypeName Type nameNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Order ID
                     * @return OrderId Order ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID
                     * @param _orderId Order ID
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
                     * 获取Transaction ID
                     * @return BillId Transaction ID
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置Transaction ID
                     * @param _billId Transaction ID
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
                     * 获取Start time of fees
                     * @return FeeBeginTime Start time of fees
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置Start time of fees
                     * @param _feeBeginTime Start time of fees
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
                     * 获取End time of fees
                     * @return FeeEndTime End time of fees
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置End time of fees
                     * @param _feeEndTime End time of fees
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
                     * 获取Component details
                     * @return ComponentSet Component details
                     * 
                     */
                    std::vector<CostComponentSet> GetComponentSet() const;

                    /**
                     * 设置Component details
                     * @param _componentSet Component details
                     * 
                     */
                    void SetComponentSet(const std::vector<CostComponentSet>& _componentSet);

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取Subproduct name code
                     * @return ProductCode Subproduct name code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Subproduct name code
                     * @param _productCode Subproduct name code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                private:

                    /**
                     * Payer UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Subproduct name
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Billing mode name
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Region Name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Zone name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

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
                     * Type nameNote: This field may return null, indicating that no valid values can be obtained.
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
                     * Start time of fees
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * End time of fees
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * Component details
                     */
                    std::vector<CostComponentSet> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * Subproduct name code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_
