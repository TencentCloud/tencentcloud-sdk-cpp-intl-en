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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATROLLITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATROLLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Items of a general VAT invoice (roll)
                */
                class VatRollItem : public AbstractModel
                {
                public:
                    VatRollItem();
                    ~VatRollItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Item name
                     * @return Name Item name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Item name
                     * @param _name Item name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Quantity
                     * @return Quantity Quantity
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置Quantity
                     * @param _quantity Quantity
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取Unit price
                     * @return Price Unit price
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置Unit price
                     * @param _price Unit price
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Amount
                     * @return Total Amount
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Amount
                     * @param _total Amount
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Quantity
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * Unit price
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATROLLITEM_H_
