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
                * 
                */
                class PolicyProductList : public AbstractModel
                {
                public:
                    PolicyProductList();
                    ~PolicyProductList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy code.
                     * @return PolicyCode Policy code.
                     * 
                     */
                    std::string GetPolicyCode() const;

                    /**
                     * 设置Policy code.
                     * @param _policyCode Policy code.
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
                     * 获取Product code, if the return is *, any item under this level is included in the policy product scope.
                     * @return ProductCode Product code, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product code, if the return is *, any item under this level is included in the policy product scope.
                     * @param _productCode Product code, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Product name, if the return is *, any item under this level is included in the policy product scope.
                     * @return ProductName Product name, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name, if the return is *, any item under this level is included in the policy product scope.
                     * @param _productName Product name, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取SubProduct code, if the return is *, any item under this level is included in the policy product scope.
                     * @return SubProductCode SubProduct code, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置SubProduct code, if the return is *, any item under this level is included in the policy product scope.
                     * @param _subProductCode SubProduct code, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取SubProduct name, if the return is *, any item under this level is included in the policy product scope.
                     * @return SubProductName SubProduct name, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置SubProduct name, if the return is *, any item under this level is included in the policy product scope.
                     * @param _subProductName SubProduct name, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Component type code, if the return is *, any item under this level is included in the policy product scope.
                     * @return ComponentTypeCode Component type code, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetComponentTypeCode() const;

                    /**
                     * 设置Component type code, if the return is *, any item under this level is included in the policy product scope.
                     * @param _componentTypeCode Component type code, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Component type name, if the return is *, any item under this level is included in the policy product scope.
                     * @return ComponentTypeName Component type name, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetComponentTypeName() const;

                    /**
                     * 设置Component type name, if the return is *, any item under this level is included in the policy product scope.
                     * @param _componentTypeName Component type name, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Component code, if the return is *, any item under this level is included in the policy product scope.
                     * @return ComponentCode Component code, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component code, if the return is *, any item under this level is included in the policy product scope.
                     * @param _componentCode Component code, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Component name, if the return is *, any item under this level is included in the policy product scope.
                     * @return ComponentName Component name, if the return is *, any item under this level is included in the policy product scope.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name, if the return is *, any item under this level is included in the policy product scope.
                     * @param _componentName Component name, if the return is *, any item under this level is included in the policy product scope.
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
                     * 获取Policy effective date.
                     * @return StartDate Policy effective date.
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Policy effective date.
                     * @param _startDate Policy effective date.
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
                     * 获取Policy expiration date.
                     * @return EndDate Policy expiration date.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置Policy expiration date.
                     * @param _endDate Policy expiration date.
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
                     * Policy code.
                     */
                    std::string m_policyCode;
                    bool m_policyCodeHasBeenSet;

                    /**
                     * Product code, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Product name, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * SubProduct code, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * SubProduct name, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Component type code, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_componentTypeCode;
                    bool m_componentTypeCodeHasBeenSet;

                    /**
                     * Component type name, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_componentTypeName;
                    bool m_componentTypeNameHasBeenSet;

                    /**
                     * Component code, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component name, if the return is *, any item under this level is included in the policy product scope.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Policy effective date.
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * Policy expiration date.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_POLICYPRODUCTLIST_H_
