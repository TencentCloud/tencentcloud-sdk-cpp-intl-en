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
                     * 获取Product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessCodes Product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessCodes() const;

                    /**
                     * 设置Product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessCodes Product name codeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Sub-product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductCodes Sub-product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductCodes() const;

                    /**
                     * 设置Sub-product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _productCodes Sub-product name codeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Component type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentCode Component type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component type codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentCode Component type codeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Availability zone ID: The availability zone ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIds Availability zone ID: The availability zone ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneIds() const;

                    /**
                     * 设置Availability zone ID: The availability zone ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIds Availability zone ID: The availability zone ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region ID: The region ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionIds Region ID: The region ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionIds() const;

                    /**
                     * 设置Region ID: The region ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionIds Region ID: The region ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project ID: The project ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectIds Project ID: The project ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectIds() const;

                    /**
                     * 设置Project ID: The project ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectIds Project ID: The project ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing mode prePay (indicates monthly subscription)/postPay (indicates pay-as-you-go billing)Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayModes Billing mode prePay (indicates monthly subscription)/postPay (indicates pay-as-you-go billing)Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayModes() const;

                    /**
                     * 设置Billing mode prePay (indicates monthly subscription)/postPay (indicates pay-as-you-go billing)Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payModes Billing mode prePay (indicates monthly subscription)/postPay (indicates pay-as-you-go billing)Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Transaction type. Query transaction type. (Use transaction type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionTypes Transaction type. Query transaction type. (Use transaction type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionTypes() const;

                    /**
                     * 设置Transaction type. Query transaction type. (Use transaction type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionTypes Transaction type. Query transaction type. (Use transaction type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cost allocation tag keyNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Cost allocation tag keyNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置Cost allocation tag keyNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Cost allocation tag keyNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Fee type. Query fee type. (Use fee type code input parameter.) The input parameter enumeration is as follows:cashPayAmount: cash incentivePayAmount: free credits voucherPayAmount: coupons tax:taxes costBeforeTax: price before taxNote: This field may return null, indicating that no valid values can be obtained.
                     * @return FeeType Fee type. Query fee type. (Use fee type code input parameter.) The input parameter enumeration is as follows:cashPayAmount: cash incentivePayAmount: free credits voucherPayAmount: coupons tax:taxes costBeforeTax: price before taxNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置Fee type. Query fee type. (Use fee type code input parameter.) The input parameter enumeration is as follows:cashPayAmount: cash incentivePayAmount: free credits voucherPayAmount: coupons tax:taxes costBeforeTax: price before taxNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _feeType Fee type. Query fee type. (Use fee type code input parameter.) The input parameter enumeration is as follows:cashPayAmount: cash incentivePayAmount: free credits voucherPayAmount: coupons tax:taxes costBeforeTax: price before taxNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User UIN for querying cost analysis dataNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerUins User UIN for querying cost analysis dataNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayerUins() const;

                    /**
                     * 设置User UIN for querying cost analysis dataNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerUins User UIN for querying cost analysis dataNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User UIN for using resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUins User UIN for using resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUins() const;

                    /**
                     * 设置User UIN for using resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUins User UIN for using resourcesNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Consumption type. Query consumption type. (Use consumption type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumptionTypes Consumption type. Query consumption type. (Use consumption type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumptionTypes() const;

                    /**
                     * 设置Consumption type. Query consumption type. (Use consumption type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumptionTypes Consumption type. Query consumption type. (Use consumption type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * Sub-product name codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * Component type codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Availability zone ID: The availability zone ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Region ID: The region ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * Project ID: The project ID to which the resource belongsNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Billing mode prePay (indicates monthly subscription)/postPay (indicates pay-as-you-go billing)Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * Transaction type. Query transaction type. (Use transaction type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * Cost allocation tag keyNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Fee type. Query fee type. (Use fee type code input parameter.) The input parameter enumeration is as follows:cashPayAmount: cash incentivePayAmount: free credits voucherPayAmount: coupons tax:taxes costBeforeTax: price before taxNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * User UIN for querying cost analysis dataNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * User UIN for using resourcesNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * Consumption type. Query consumption type. (Use consumption type code input parameter.)Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
