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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_POLICYPRODUCTLIST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_POLICYPRODUCTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Policy product list entity response parameters structure.
                */
                class PolicyProductList : public AbstractModel
                {
                public:
                    PolicyProductList();
                    ~PolicyProductList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dealer policy code.
                     * @return PolicyCode Dealer policy code.
                     * 
                     */
                    std::string GetPolicyCode() const;

                    /**
                     * 设置Dealer policy code.
                     * @param _policyCode Dealer policy code.
                     * 
                     */
                    void SetPolicyCode(const std::string& _policyCode);

                    /**
                     * 判断参数 PolicyCode 是否已赋值
                     * @return PolicyCode 是否已赋值
                     * 
                     */
                    bool PolicyCodeHasBeenSet() const;

                    /**
                     * 获取Product level 1 code. If the return value is *, any item at this level is included in the policy product range.
                     * @return ProductCode Product level 1 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product level 1 code. If the return value is *, any item at this level is included in the policy product range.
                     * @param _productCode Product level 1 code. If the return value is *, any item at this level is included in the policy product range.
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
                     * 获取Product level 1 name. If the return value is *, any item at this level is included in the policy product range.
                     * @return ProductName Product level 1 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product level 1 name. If the return value is *, any item at this level is included in the policy product range.
                     * @param _productName Product level 1 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Product level 2 code. If the return value is *, any item at this level is included in the policy product range.
                     * @return SubProductCode Product level 2 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Product level 2 code. If the return value is *, any item at this level is included in the policy product range.
                     * @param _subProductCode Product level 2 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取Product level 2 name. If the return value is *, any item at this level is included in the policy product range.
                     * @return SubProductName Product level 2 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置Product level 2 name. If the return value is *, any item at this level is included in the policy product range.
                     * @param _subProductName Product level 2 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取Product level 3 code. If the return value is *, any item at this level is included in the policy product range.
                     * @return ComponentTypeCode Product level 3 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetComponentTypeCode() const;

                    /**
                     * 设置Product level 3 code. If the return value is *, any item at this level is included in the policy product range.
                     * @param _componentTypeCode Product level 3 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    void SetComponentTypeCode(const std::string& _componentTypeCode);

                    /**
                     * 判断参数 ComponentTypeCode 是否已赋值
                     * @return ComponentTypeCode 是否已赋值
                     * 
                     */
                    bool ComponentTypeCodeHasBeenSet() const;

                    /**
                     * 获取Product level 3 name. If the return value is *, any item at this level is included in the policy product range.
                     * @return ComponentTypeName Product level 3 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetComponentTypeName() const;

                    /**
                     * 设置Product level 3 name. If the return value is *, any item at this level is included in the policy product range.
                     * @param _componentTypeName Product level 3 name. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    void SetComponentTypeName(const std::string& _componentTypeName);

                    /**
                     * 判断参数 ComponentTypeName 是否已赋值
                     * @return ComponentTypeName 是否已赋值
                     * 
                     */
                    bool ComponentTypeNameHasBeenSet() const;

                    /**
                     * 获取Product level 4 code. If the return value is *, any item at this level is included in the policy product range.
                     * @return ComponentCode Product level 4 code. If the return value is *, any item at this level is included in the policy product range.
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Product level 4 code. If the return value is *, any item at this level is included in the policy product range.
                     * @param _componentCode Product level 4 code. If the return value is *, any item at this level is included in the policy product range.
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
                     * 获取Product fourth-level name. If the return value is *, any item under this level is included in the policy product scope.
                     * @return ComponentName Product fourth-level name. If the return value is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Product fourth-level name. If the return value is *, any item under this level is included in the policy product scope.
                     * @param _componentName Product fourth-level name. If the return value is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Policy effective time.
                     * @return StartDate Policy effective time.
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Policy effective time.
                     * @param _startDate Policy effective time.
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取Policy expiration time.
                     * @return EndDate Policy expiration time.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置Policy expiration time.
                     * @param _endDate Policy expiration time.
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * Dealer policy code.
                     */
                    std::string m_policyCode;
                    bool m_policyCodeHasBeenSet;

                    /**
                     * Product level 1 code. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Product level 1 name. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Product level 2 code. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * Product level 2 name. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Product level 3 code. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_componentTypeCode;
                    bool m_componentTypeCodeHasBeenSet;

                    /**
                     * Product level 3 name. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_componentTypeName;
                    bool m_componentTypeNameHasBeenSet;

                    /**
                     * Product level 4 code. If the return value is *, any item at this level is included in the policy product range.
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Product fourth-level name. If the return value is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Policy effective time.
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * Policy expiration time.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_POLICYPRODUCTLIST_H_
