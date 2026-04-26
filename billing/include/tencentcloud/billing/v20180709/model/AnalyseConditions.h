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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_

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
                * Cost analysis query conditions
                */
                class AnalyseConditions : public AbstractModel
                {
                public:
                    AnalyseConditions();
                    ~AnalyseConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name code
                     * @return BusinessCodes Product name code
                     * 
                     */
                    std::string GetBusinessCodes() const;

                    /**
                     * 设置Product name code
                     * @param _businessCodes Product name code
                     * 
                     */
                    void SetBusinessCodes(const std::string& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取Subproduct name code
                     * @return ProductCodes Subproduct name code
                     * 
                     */
                    std::string GetProductCodes() const;

                    /**
                     * 设置Subproduct name code
                     * @param _productCodes Subproduct name code
                     * 
                     */
                    void SetProductCodes(const std::string& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

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
                     * 获取Availability zone ID: The availability zone ID where the resource is located.
                     * @return ZoneIds Availability zone ID: The availability zone ID where the resource is located.
                     * 
                     */
                    std::string GetZoneIds() const;

                    /**
                     * 设置Availability zone ID: The availability zone ID where the resource is located.
                     * @param _zoneIds Availability zone ID: The availability zone ID where the resource is located.
                     * 
                     */
                    void SetZoneIds(const std::string& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Region ID: Resource region ID
                     * @return RegionIds Region ID: Resource region ID
                     * 
                     */
                    std::string GetRegionIds() const;

                    /**
                     * 设置Region ID: Resource region ID
                     * @param _regionIds Region ID: Resource region ID
                     * 
                     */
                    void SetRegionIds(const std::string& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取Project ID: Project ID of the resource
                     * @return ProjectIds Project ID: Project ID of the resource
                     * 
                     */
                    std::string GetProjectIds() const;

                    /**
                     * 设置Project ID: Project ID of the resource
                     * @param _projectIds Project ID: Project ID of the resource
                     * 
                     */
                    void SetProjectIds(const std::string& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Billing mode prePay (monthly subscription)/postPay (pay-as-you-go billing)
                     * @return PayModes Billing mode prePay (monthly subscription)/postPay (pay-as-you-go billing)
                     * 
                     */
                    std::string GetPayModes() const;

                    /**
                     * 设置Billing mode prePay (monthly subscription)/postPay (pay-as-you-go billing)
                     * @param _payModes Billing mode prePay (monthly subscription)/postPay (pay-as-you-go billing)
                     * 
                     */
                    void SetPayModes(const std::string& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取Transaction type. Query transaction type (please use transaction type code as input parameter).
                     * @return ActionTypes Transaction type. Query transaction type (please use transaction type code as input parameter).
                     * 
                     */
                    std::string GetActionTypes() const;

                    /**
                     * 设置Transaction type. Query transaction type (please use transaction type code as input parameter).
                     * @param _actionTypes Transaction type. Query transaction type (please use transaction type code as input parameter).
                     * 
                     */
                    void SetActionTypes(const std::string& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取Cost allocation tag key
                     * @return Tags Cost allocation tag key
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置Cost allocation tag key
                     * @param _tags Cost allocation tag key
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Fee type. Query fee type (please use fee type code input parameter). The input parameter enumeration is as follows:
cashPayAmount: Cash 
incentivePayAmount: Bonus 
voucherPayAmount: Coupon 
tax: tax. 
costBeforeTax: pre-tax price
                     * @return FeeType Fee type. Query fee type (please use fee type code input parameter). The input parameter enumeration is as follows:
cashPayAmount: Cash 
incentivePayAmount: Bonus 
voucherPayAmount: Coupon 
tax: tax. 
costBeforeTax: pre-tax price
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置Fee type. Query fee type (please use fee type code input parameter). The input parameter enumeration is as follows:
cashPayAmount: Cash 
incentivePayAmount: Bonus 
voucherPayAmount: Coupon 
tax: tax. 
costBeforeTax: pre-tax price
                     * @param _feeType Fee type. Query fee type (please use fee type code input parameter). The input parameter enumeration is as follows:
cashPayAmount: Cash 
incentivePayAmount: Bonus 
voucherPayAmount: Coupon 
tax: tax. 
costBeforeTax: pre-tax price
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
                     * 获取User UIN for querying cost analysis data
                     * @return PayerUins User UIN for querying cost analysis data
                     * 
                     */
                    std::string GetPayerUins() const;

                    /**
                     * 设置User UIN for querying cost analysis data
                     * @param _payerUins User UIN for querying cost analysis data
                     * 
                     */
                    void SetPayerUins(const std::string& _payerUins);

                    /**
                     * 判断参数 PayerUins 是否已赋值
                     * @return PayerUins 是否已赋值
                     * 
                     */
                    bool PayerUinsHasBeenSet() const;

                    /**
                     * 获取User UIN for using resources
                     * @return OwnerUins User UIN for using resources
                     * 
                     */
                    std::string GetOwnerUins() const;

                    /**
                     * 设置User UIN for using resources
                     * @param _ownerUins User UIN for using resources
                     * 
                     */
                    void SetOwnerUins(const std::string& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取Consumption type. Query consumption type (please use consumption type code input parameter).
                     * @return ConsumptionTypes Consumption type. Query consumption type (please use consumption type code input parameter).
                     * 
                     */
                    std::string GetConsumptionTypes() const;

                    /**
                     * 设置Consumption type. Query consumption type (please use consumption type code input parameter).
                     * @param _consumptionTypes Consumption type. Query consumption type (please use consumption type code input parameter).
                     * 
                     */
                    void SetConsumptionTypes(const std::string& _consumptionTypes);

                    /**
                     * 判断参数 ConsumptionTypes 是否已赋值
                     * @return ConsumptionTypes 是否已赋值
                     * 
                     */
                    bool ConsumptionTypesHasBeenSet() const;

                private:

                    /**
                     * Product name code
                     */
                    std::string m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * Subproduct name code
                     */
                    std::string m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * Component type code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Availability zone ID: The availability zone ID where the resource is located.
                     */
                    std::string m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Region ID: Resource region ID
                     */
                    std::string m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Project ID: Project ID of the resource
                     */
                    std::string m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Billing mode prePay (monthly subscription)/postPay (pay-as-you-go billing)
                     */
                    std::string m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * Transaction type. Query transaction type (please use transaction type code as input parameter).
                     */
                    std::string m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * Cost allocation tag key
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Fee type. Query fee type (please use fee type code input parameter). The input parameter enumeration is as follows:
cashPayAmount: Cash 
incentivePayAmount: Bonus 
voucherPayAmount: Coupon 
tax: tax. 
costBeforeTax: pre-tax price
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * User UIN for querying cost analysis data
                     */
                    std::string m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * User UIN for using resources
                     */
                    std::string m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * Consumption type. Query consumption type (please use consumption type code input parameter).
                     */
                    std::string m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
