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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_RESOURCESPUSET_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_RESOURCESPUSET_H_

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
                * Quotation for 4-tier product details
                */
                class ResourceSpuSet : public AbstractModel
                {
                public:
                    ResourceSpuSet();
                    ~ResourceSpuSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quoted subproduct (Chinese)
                     * @return SpuNameZh Quoted subproduct (Chinese)
                     * 
                     */
                    std::string GetSpuNameZh() const;

                    /**
                     * 设置Quoted subproduct (Chinese)
                     * @param _spuNameZh Quoted subproduct (Chinese)
                     * 
                     */
                    void SetSpuNameZh(const std::string& _spuNameZh);

                    /**
                     * 判断参数 SpuNameZh 是否已赋值
                     * @return SpuNameZh 是否已赋值
                     * 
                     */
                    bool SpuNameZhHasBeenSet() const;

                    /**
                     * 获取Quoted subproduct (English)
                     * @return SpuNameEn Quoted subproduct (English)
                     * 
                     */
                    std::string GetSpuNameEn() const;

                    /**
                     * 设置Quoted subproduct (English)
                     * @param _spuNameEn Quoted subproduct (English)
                     * 
                     */
                    void SetSpuNameEn(const std::string& _spuNameEn);

                    /**
                     * 判断参数 SpuNameEn 是否已赋值
                     * @return SpuNameEn 是否已赋值
                     * 
                     */
                    bool SpuNameEnHasBeenSet() const;

                    /**
                     * 获取Quoted product (Chinese)
                     * @return CategoryNameZh Quoted product (Chinese)
                     * 
                     */
                    std::string GetCategoryNameZh() const;

                    /**
                     * 设置Quoted product (Chinese)
                     * @param _categoryNameZh Quoted product (Chinese)
                     * 
                     */
                    void SetCategoryNameZh(const std::string& _categoryNameZh);

                    /**
                     * 判断参数 CategoryNameZh 是否已赋值
                     * @return CategoryNameZh 是否已赋值
                     * 
                     */
                    bool CategoryNameZhHasBeenSet() const;

                    /**
                     * 获取Quoted product (English)
                     * @return CategoryNameEn Quoted product (English)
                     * 
                     */
                    std::string GetCategoryNameEn() const;

                    /**
                     * 设置Quoted product (English)
                     * @param _categoryNameEn Quoted product (English)
                     * 
                     */
                    void SetCategoryNameEn(const std::string& _categoryNameEn);

                    /**
                     * 判断参数 CategoryNameEn 是否已赋值
                     * @return CategoryNameEn 是否已赋值
                     * 
                     */
                    bool CategoryNameEnHasBeenSet() const;

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
                     * 获取Product name (Chinese)
                     * @return BusinessNameZh Product name (Chinese)
                     * 
                     */
                    std::string GetBusinessNameZh() const;

                    /**
                     * 设置Product name (Chinese)
                     * @param _businessNameZh Product name (Chinese)
                     * 
                     */
                    void SetBusinessNameZh(const std::string& _businessNameZh);

                    /**
                     * 判断参数 BusinessNameZh 是否已赋值
                     * @return BusinessNameZh 是否已赋值
                     * 
                     */
                    bool BusinessNameZhHasBeenSet() const;

                    /**
                     * 获取Product name (English)
                     * @return BusinessNameEn Product name (English)
                     * 
                     */
                    std::string GetBusinessNameEn() const;

                    /**
                     * 设置Product name (English)
                     * @param _businessNameEn Product name (English)
                     * 
                     */
                    void SetBusinessNameEn(const std::string& _businessNameEn);

                    /**
                     * 判断参数 BusinessNameEn 是否已赋值
                     * @return BusinessNameEn 是否已赋值
                     * 
                     */
                    bool BusinessNameEnHasBeenSet() const;

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
                     * 获取Subproduct name (Chinese)
                     * @return ProductNameZh Subproduct name (Chinese)
                     * 
                     */
                    std::string GetProductNameZh() const;

                    /**
                     * 设置Subproduct name (Chinese)
                     * @param _productNameZh Subproduct name (Chinese)
                     * 
                     */
                    void SetProductNameZh(const std::string& _productNameZh);

                    /**
                     * 判断参数 ProductNameZh 是否已赋值
                     * @return ProductNameZh 是否已赋值
                     * 
                     */
                    bool ProductNameZhHasBeenSet() const;

                    /**
                     * 获取Subproduct name (English)
                     * @return ProductNameEn Subproduct name (English)
                     * 
                     */
                    std::string GetProductNameEn() const;

                    /**
                     * 设置Subproduct name (English)
                     * @param _productNameEn Subproduct name (English)
                     * 
                     */
                    void SetProductNameEn(const std::string& _productNameEn);

                    /**
                     * 判断参数 ProductNameEn 是否已赋值
                     * @return ProductNameEn 是否已赋值
                     * 
                     */
                    bool ProductNameEnHasBeenSet() const;

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
                     * 获取Component type name (Chinese)
                     * @return ComponentNameZh Component type name (Chinese)
                     * 
                     */
                    std::string GetComponentNameZh() const;

                    /**
                     * 设置Component type name (Chinese)
                     * @param _componentNameZh Component type name (Chinese)
                     * 
                     */
                    void SetComponentNameZh(const std::string& _componentNameZh);

                    /**
                     * 判断参数 ComponentNameZh 是否已赋值
                     * @return ComponentNameZh 是否已赋值
                     * 
                     */
                    bool ComponentNameZhHasBeenSet() const;

                    /**
                     * 获取Component type name (English)
                     * @return ComponentNameEn Component type name (English)
                     * 
                     */
                    std::string GetComponentNameEn() const;

                    /**
                     * 设置Component type name (English)
                     * @param _componentNameEn Component type name (English)
                     * 
                     */
                    void SetComponentNameEn(const std::string& _componentNameEn);

                    /**
                     * 判断参数 ComponentNameEn 是否已赋值
                     * @return ComponentNameEn 是否已赋值
                     * 
                     */
                    bool ComponentNameEnHasBeenSet() const;

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

                    /**
                     * 获取Component name (Chinese)
                     * @return ItemNameZh Component name (Chinese)
                     * 
                     */
                    std::string GetItemNameZh() const;

                    /**
                     * 设置Component name (Chinese)
                     * @param _itemNameZh Component name (Chinese)
                     * 
                     */
                    void SetItemNameZh(const std::string& _itemNameZh);

                    /**
                     * 判断参数 ItemNameZh 是否已赋值
                     * @return ItemNameZh 是否已赋值
                     * 
                     */
                    bool ItemNameZhHasBeenSet() const;

                    /**
                     * 获取Component name (English)
                     * @return ItemNameEn Component name (English)
                     * 
                     */
                    std::string GetItemNameEn() const;

                    /**
                     * 设置Component name (English)
                     * @param _itemNameEn Component name (English)
                     * 
                     */
                    void SetItemNameEn(const std::string& _itemNameEn);

                    /**
                     * 判断参数 ItemNameEn 是否已赋值
                     * @return ItemNameEn 是否已赋值
                     * 
                     */
                    bool ItemNameEnHasBeenSet() const;

                private:

                    /**
                     * Quoted subproduct (Chinese)
                     */
                    std::string m_spuNameZh;
                    bool m_spuNameZhHasBeenSet;

                    /**
                     * Quoted subproduct (English)
                     */
                    std::string m_spuNameEn;
                    bool m_spuNameEnHasBeenSet;

                    /**
                     * Quoted product (Chinese)
                     */
                    std::string m_categoryNameZh;
                    bool m_categoryNameZhHasBeenSet;

                    /**
                     * Quoted product (English)
                     */
                    std::string m_categoryNameEn;
                    bool m_categoryNameEnHasBeenSet;

                    /**
                     * Product code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name (Chinese)
                     */
                    std::string m_businessNameZh;
                    bool m_businessNameZhHasBeenSet;

                    /**
                     * Product name (English)
                     */
                    std::string m_businessNameEn;
                    bool m_businessNameEnHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Subproduct name (Chinese)
                     */
                    std::string m_productNameZh;
                    bool m_productNameZhHasBeenSet;

                    /**
                     * Subproduct name (English)
                     */
                    std::string m_productNameEn;
                    bool m_productNameEnHasBeenSet;

                    /**
                     * Component type code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component type name (Chinese)
                     */
                    std::string m_componentNameZh;
                    bool m_componentNameZhHasBeenSet;

                    /**
                     * Component type name (English)
                     */
                    std::string m_componentNameEn;
                    bool m_componentNameEnHasBeenSet;

                    /**
                     * Component code
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * Component name (Chinese)
                     */
                    std::string m_itemNameZh;
                    bool m_itemNameZhHasBeenSet;

                    /**
                     * Component name (English)
                     */
                    std::string m_itemNameEn;
                    bool m_itemNameEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_RESOURCESPUSET_H_
