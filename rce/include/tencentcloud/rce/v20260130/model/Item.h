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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the item
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique ID of the item</p>
                     * @return ItemId <p>The unique ID of the item</p>
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置<p>The unique ID of the item</p>
                     * @param _itemId <p>The unique ID of the item</p>
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取<p>The name of the item</p>
                     * @return ItemName <p>The name of the item</p>
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置<p>The name of the item</p>
                     * @param _itemName <p>The name of the item</p>
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
                     * 获取<p>The category of the item</p>
                     * @return Category <p>The category of the item</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>The category of the item</p>
                     * @param _category <p>The category of the item</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>The price of the item</p>
                     * @return Price <p>The price of the item</p>
                     * 
                     */
                    Amount GetPrice() const;

                    /**
                     * 设置<p>The price of the item</p>
                     * @param _price <p>The price of the item</p>
                     * 
                     */
                    void SetPrice(const Amount& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>If the item has a UPC (Universal Product Code), please provide it here.</p>
                     * @return UPC <p>If the item has a UPC (Universal Product Code), please provide it here.</p>
                     * 
                     */
                    std::string GetUPC() const;

                    /**
                     * 设置<p>If the item has a UPC (Universal Product Code), please provide it here.</p>
                     * @param _uPC <p>If the item has a UPC (Universal Product Code), please provide it here.</p>
                     * 
                     */
                    void SetUPC(const std::string& _uPC);

                    /**
                     * 判断参数 UPC 是否已赋值
                     * @return UPC 是否已赋值
                     * 
                     */
                    bool UPCHasBeenSet() const;

                    /**
                     * 获取<p>If the item has an EAN (European Article Number), please provide it here.</p>
                     * @return EAN <p>If the item has an EAN (European Article Number), please provide it here.</p>
                     * 
                     */
                    std::string GetEAN() const;

                    /**
                     * 设置<p>If the item has an EAN (European Article Number), please provide it here.</p>
                     * @param _eAN <p>If the item has an EAN (European Article Number), please provide it here.</p>
                     * 
                     */
                    void SetEAN(const std::string& _eAN);

                    /**
                     * 判断参数 EAN 是否已赋值
                     * @return EAN 是否已赋值
                     * 
                     */
                    bool EANHasBeenSet() const;

                    /**
                     * 获取<p>If the item has an SKU (Stock Keeping Unit), please provide it here.</p>
                     * @return SKU <p>If the item has an SKU (Stock Keeping Unit), please provide it here.</p>
                     * 
                     */
                    std::string GetSKU() const;

                    /**
                     * 设置<p>If the item has an SKU (Stock Keeping Unit), please provide it here.</p>
                     * @param _sKU <p>If the item has an SKU (Stock Keeping Unit), please provide it here.</p>
                     * 
                     */
                    void SetSKU(const std::string& _sKU);

                    /**
                     * 判断参数 SKU 是否已赋值
                     * @return SKU 是否已赋值
                     * 
                     */
                    bool SKUHasBeenSet() const;

                    /**
                     * 获取<p>If the item has an ISBN (International Standard Book Number), please provide it here.</p>
                     * @return ISBN <p>If the item has an ISBN (International Standard Book Number), please provide it here.</p>
                     * 
                     */
                    std::string GetISBN() const;

                    /**
                     * 设置<p>If the item has an ISBN (International Standard Book Number), please provide it here.</p>
                     * @param _iSBN <p>If the item has an ISBN (International Standard Book Number), please provide it here.</p>
                     * 
                     */
                    void SetISBN(const std::string& _iSBN);

                    /**
                     * 判断参数 ISBN 是否已赋值
                     * @return ISBN 是否已赋值
                     * 
                     */
                    bool ISBNHasBeenSet() const;

                    /**
                     * 获取<p>The brand of the item</p>
                     * @return Brand <p>The brand of the item</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>The brand of the item</p>
                     * @param _brand <p>The brand of the item</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>The quantity of the item</p>
                     * @return Quantity <p>The quantity of the item</p>
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置<p>The quantity of the item</p>
                     * @param _quantity <p>The quantity of the item</p>
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取<p>The manufacture of the item</p>
                     * @return Manufacturer <p>The manufacture of the item</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>The manufacture of the item</p>
                     * @param _manufacturer <p>The manufacture of the item</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>The tags of the item in your system</p>
                     * @return Tags <p>The tags of the item in your system</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>The tags of the item in your system</p>
                     * @param _tags <p>The tags of the item in your system</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>The unique ID of the item</p>
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * <p>The name of the item</p>
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * <p>The category of the item</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>The price of the item</p>
                     */
                    Amount m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>If the item has a UPC (Universal Product Code), please provide it here.</p>
                     */
                    std::string m_uPC;
                    bool m_uPCHasBeenSet;

                    /**
                     * <p>If the item has an EAN (European Article Number), please provide it here.</p>
                     */
                    std::string m_eAN;
                    bool m_eANHasBeenSet;

                    /**
                     * <p>If the item has an SKU (Stock Keeping Unit), please provide it here.</p>
                     */
                    std::string m_sKU;
                    bool m_sKUHasBeenSet;

                    /**
                     * <p>If the item has an ISBN (International Standard Book Number), please provide it here.</p>
                     */
                    std::string m_iSBN;
                    bool m_iSBNHasBeenSet;

                    /**
                     * <p>The brand of the item</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>The quantity of the item</p>
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * <p>The manufacture of the item</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>The tags of the item in your system</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_
