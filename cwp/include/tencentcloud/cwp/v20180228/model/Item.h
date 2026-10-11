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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Item
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Id
                     * @return ItemId Id
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置Id
                     * @param _itemId Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return ItemName Name
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Name
                     * @param _itemName Name
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
                     * 获取Custom threshold.
                     * @return CustomItemValues Custom threshold.
                     * 
                     */
                    std::vector<uint64_t> GetCustomItemValues() const;

                    /**
                     * 设置Custom threshold.
                     * @param _customItemValues Custom threshold.
                     * 
                     */
                    void SetCustomItemValues(const std::vector<uint64_t>& _customItemValues);

                    /**
                     * 判断参数 CustomItemValues 是否已赋值
                     * @return CustomItemValues 是否已赋值
                     * 
                     */
                    bool CustomItemValuesHasBeenSet() const;

                    /**
                     * 获取Category of a detection item.
                     * @return CategoryId Category of a detection item.
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置Category of a detection item.
                     * @param _categoryId Category of a detection item.
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * Custom threshold.
                     */
                    std::vector<uint64_t> m_customItemValues;
                    bool m_customItemValuesHasBeenSet;

                    /**
                     * Category of a detection item.
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_
