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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetFilterConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset dynamic table header
                */
                class AssetHeaderItem : public AbstractModel
                {
                public:
                    AssetHeaderItem();
                    ~AssetHeaderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Type.</p>
                     * @return ItemType <p>Type.</p>
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置<p>Type.</p>
                     * @param _itemType <p>Type.</p>
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取<p>Show</p>
                     * @return Label <p>Show</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>Show</p>
                     * @param _label <p>Show</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>Support copying</p>
                     * @return Copy <p>Support copying</p>
                     * 
                     */
                    uint64_t GetCopy() const;

                    /**
                     * 设置<p>Support copying</p>
                     * @param _copy <p>Support copying</p>
                     * 
                     */
                    void SetCopy(const uint64_t& _copy);

                    /**
                     * 判断参数 Copy 是否已赋值
                     * @return Copy 是否已赋值
                     * 
                     */
                    bool CopyHasBeenSet() const;

                    /**
                     * 获取<p>Value corresponding to the field key</p>
                     * @return Values <p>Value corresponding to the field key</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>Value corresponding to the field key</p>
                     * @param _values <p>Value corresponding to the field key</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>Redirect URL</p>
                     * @return LinkURL <p>Redirect URL</p>
                     * 
                     */
                    std::string GetLinkURL() const;

                    /**
                     * 设置<p>Redirect URL</p>
                     * @param _linkURL <p>Redirect URL</p>
                     * 
                     */
                    void SetLinkURL(const std::string& _linkURL);

                    /**
                     * 判断参数 LinkURL 是否已赋值
                     * @return LinkURL 是否已赋值
                     * 
                     */
                    bool LinkURLHasBeenSet() const;

                    /**
                     * 获取<p>Filter</p>
                     * @return Filters <p>Filter</p>
                     * 
                     */
                    std::vector<AssetFilterConfig> GetFilters() const;

                    /**
                     * 设置<p>Filter</p>
                     * @param _filters <p>Filter</p>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilterConfig>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Support sorting</p>
                     * @return Sort <p>Support sorting</p>
                     * 
                     */
                    uint64_t GetSort() const;

                    /**
                     * 设置<p>Support sorting</p>
                     * @param _sort <p>Support sorting</p>
                     * 
                     */
                    void SetSort(const uint64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Field display style</p>
                     * @return ValueStyle <p>Field display style</p>
                     * 
                     */
                    std::string GetValueStyle() const;

                    /**
                     * 设置<p>Field display style</p>
                     * @param _valueStyle <p>Field display style</p>
                     * 
                     */
                    void SetValueStyle(const std::string& _valueStyle);

                    /**
                     * 判断参数 ValueStyle 是否已赋值
                     * @return ValueStyle 是否已赋值
                     * 
                     */
                    bool ValueStyleHasBeenSet() const;

                private:

                    /**
                     * <p>Type.</p>
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * <p>Show</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Support copying</p>
                     */
                    uint64_t m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * <p>Value corresponding to the field key</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>Redirect URL</p>
                     */
                    std::string m_linkURL;
                    bool m_linkURLHasBeenSet;

                    /**
                     * <p>Filter</p>
                     */
                    std::vector<AssetFilterConfig> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Support sorting</p>
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Field display style</p>
                     */
                    std::string m_valueStyle;
                    bool m_valueStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_
