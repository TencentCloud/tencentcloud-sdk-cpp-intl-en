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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCPQBillingMapping request structure.
                */
                class DescribeCPQBillingMappingRequest : public AbstractModel
                {
                public:
                    DescribeCPQBillingMappingRequest();
                    ~DescribeCPQBillingMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of entries returned at a time. The maximum value is `100`.	
                     * @return Limit The number of entries returned at a time. The maximum value is `100`.	
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置The number of entries returned at a time. The maximum value is `100`.	
                     * @param _limit The number of entries returned at a time. The maximum value is `100`.	
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Quoted subproduct name
                     * @return SpuName Quoted subproduct name
                     * 
                     */
                    std::string GetSpuName() const;

                    /**
                     * 设置Quoted subproduct name
                     * @param _spuName Quoted subproduct name
                     * 
                     */
                    void SetSpuName(const std::string& _spuName);

                    /**
                     * 判断参数 SpuName 是否已赋值
                     * @return SpuName 是否已赋值
                     * 
                     */
                    bool SpuNameHasBeenSet() const;

                    /**
                     * 获取Quoted product name
                     * @return CategoryName Quoted product name
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置Quoted product name
                     * @param _categoryName Quoted product name
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return BusinessName Product name
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置Product name
                     * @param _businessName Product name
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取Subproduct name
                     * @return ProductName Subproduct name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Subproduct name
                     * @param _productName Subproduct name
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
                     * 获取Component type name
                     * @return ComponentName Component type name
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component type name
                     * @param _componentName Component type name
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
                     * 获取Component name
                     * @return ItemName Component name
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Component name
                     * @param _itemName Component name
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

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
                     * 获取Component code
                     * @return ItemCode Component code
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置Component code
                     * @param _itemCode Component code
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                private:

                    /**
                     * Offset
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of entries returned at a time. The maximum value is `100`.	
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Quoted subproduct name
                     */
                    std::string m_spuName;
                    bool m_spuNameHasBeenSet;

                    /**
                     * Quoted product name
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * Subproduct name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Component type name
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component name
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

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
                     * Component type code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component code
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECPQBILLINGMAPPINGREQUEST_H_
