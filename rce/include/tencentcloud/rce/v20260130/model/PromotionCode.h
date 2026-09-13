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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTIONCODE_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTIONCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/Item.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the promotion code
                */
                class PromotionCode : public AbstractModel
                {
                public:
                    PromotionCode();
                    ~PromotionCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the promotion code</p>
                     * @return Id <p>The ID of the promotion code</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>The ID of the promotion code</p>
                     * @param _id <p>The ID of the promotion code</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>The type of the promotion code, for example: qrcode, barcode, miniprogram code</p>
                     * @return Type <p>The type of the promotion code, for example: qrcode, barcode, miniprogram code</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>The type of the promotion code, for example: qrcode, barcode, miniprogram code</p>
                     * @param _type <p>The type of the promotion code, for example: qrcode, barcode, miniprogram code</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>The url or hyperlink to the image</p>
                     * @return ImageLink <p>The url or hyperlink to the image</p>
                     * 
                     */
                    std::string GetImageLink() const;

                    /**
                     * 设置<p>The url or hyperlink to the image</p>
                     * @param _imageLink <p>The url or hyperlink to the image</p>
                     * 
                     */
                    void SetImageLink(const std::string& _imageLink);

                    /**
                     * 判断参数 ImageLink 是否已赋值
                     * @return ImageLink 是否已赋值
                     * 
                     */
                    bool ImageLinkHasBeenSet() const;

                    /**
                     * 获取<p>The address where the promotion code worked</p>
                     * @return Address <p>The address where the promotion code worked</p>
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置<p>The address where the promotion code worked</p>
                     * @param _address <p>The address where the promotion code worked</p>
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>The item(s) associated with the promotion code</p>
                     * @return Items <p>The item(s) associated with the promotion code</p>
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置<p>The item(s) associated with the promotion code</p>
                     * @param _items <p>The item(s) associated with the promotion code</p>
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>The ID of the promotion code</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>The type of the promotion code, for example: qrcode, barcode, miniprogram code</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>The url or hyperlink to the image</p>
                     */
                    std::string m_imageLink;
                    bool m_imageLinkHasBeenSet;

                    /**
                     * <p>The address where the promotion code worked</p>
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>The item(s) associated with the promotion code</p>
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTIONCODE_H_
