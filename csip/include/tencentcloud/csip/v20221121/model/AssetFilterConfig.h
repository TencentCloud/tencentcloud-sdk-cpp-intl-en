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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTERCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetFilterOptions.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset filter configurator
                */
                class AssetFilterConfig : public AbstractModel
                {
                public:
                    AssetFilterConfig();
                    ~AssetFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Query attributes</p>
                     * @return Attr <p>Query attributes</p>
                     * 
                     */
                    std::string GetAttr() const;

                    /**
                     * 设置<p>Query attributes</p>
                     * @param _attr <p>Query attributes</p>
                     * 
                     */
                    void SetAttr(const std::string& _attr);

                    /**
                     * 判断参数 Attr 是否已赋值
                     * @return Attr 是否已赋值
                     * 
                     */
                    bool AttrHasBeenSet() const;

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
                     * 获取<p>Style</p>
                     * @return Style <p>Style</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>Style</p>
                     * @param _style <p>Style</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>Value.</p>
                     * @return Value <p>Value.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Value.</p>
                     * @param _value <p>Value.</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Show in English</p>
                     * @return LabelEn <p>Show in English</p>
                     * 
                     */
                    std::string GetLabelEn() const;

                    /**
                     * 设置<p>Show in English</p>
                     * @param _labelEn <p>Show in English</p>
                     * 
                     */
                    void SetLabelEn(const std::string& _labelEn);

                    /**
                     * 判断参数 LabelEn 是否已赋值
                     * @return LabelEn 是否已赋值
                     * 
                     */
                    bool LabelEnHasBeenSet() const;

                    /**
                     * 获取<p>Asset private field filter</p>
                     * @return Options <p>Asset private field filter</p>
                     * 
                     */
                    std::vector<AssetFilterOptions> GetOptions() const;

                    /**
                     * 设置<p>Asset private field filter</p>
                     * @param _options <p>Asset private field filter</p>
                     * 
                     */
                    void SetOptions(const std::vector<AssetFilterOptions>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>Query attributes</p>
                     */
                    std::string m_attr;
                    bool m_attrHasBeenSet;

                    /**
                     * <p>Show</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Style</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>Value.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Show in English</p>
                     */
                    std::string m_labelEn;
                    bool m_labelEnHasBeenSet;

                    /**
                     * <p>Asset private field filter</p>
                     */
                    std::vector<AssetFilterOptions> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTERCONFIG_H_
