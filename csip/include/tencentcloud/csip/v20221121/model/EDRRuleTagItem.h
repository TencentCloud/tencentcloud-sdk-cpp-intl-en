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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULETAGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULETAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Security center tag
                */
                class EDRRuleTagItem : public AbstractModel
                {
                public:
                    EDRRuleTagItem();
                    ~EDRRuleTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Security center tag ID</p>
                     * @return ID <p>Security center tag ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Security center tag ID</p>
                     * @param _iD <p>Security center tag ID</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Tag Key in Chinese</p>
                     * @return TagKey <p>Tag Key in Chinese</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Tag Key in Chinese</p>
                     * @param _tagKey <p>Tag Key in Chinese</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>Tag English key</p>
                     * @return TagKeyEn <p>Tag English key</p>
                     * 
                     */
                    std::string GetTagKeyEn() const;

                    /**
                     * 设置<p>Tag English key</p>
                     * @param _tagKeyEn <p>Tag English key</p>
                     * 
                     */
                    void SetTagKeyEn(const std::string& _tagKeyEn);

                    /**
                     * 判断参数 TagKeyEn 是否已赋值
                     * @return TagKeyEn 是否已赋值
                     * 
                     */
                    bool TagKeyEnHasBeenSet() const;

                    /**
                     * 获取<p>Tag Chinese value</p>
                     * @return TagValue <p>Tag Chinese value</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>Tag Chinese value</p>
                     * @param _tagValue <p>Tag Chinese value</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取<p>Tag value in English.</p>
                     * @return TagValueEn <p>Tag value in English.</p>
                     * 
                     */
                    std::string GetTagValueEn() const;

                    /**
                     * 设置<p>Tag value in English.</p>
                     * @param _tagValueEn <p>Tag value in English.</p>
                     * 
                     */
                    void SetTagValueEn(const std::string& _tagValueEn);

                    /**
                     * 判断参数 TagValueEn 是否已赋值
                     * @return TagValueEn 是否已赋值
                     * 
                     */
                    bool TagValueEnHasBeenSet() const;

                    /**
                     * 获取<p>Tag description</p>
                     * @return Description <p>Tag description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Tag description</p>
                     * @param _description <p>Tag description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Tag color</p>
                     * @return Color <p>Tag color</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>Tag color</p>
                     * @param _color <p>Tag color</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * <p>Security center tag ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Tag Key in Chinese</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Tag English key</p>
                     */
                    std::string m_tagKeyEn;
                    bool m_tagKeyEnHasBeenSet;

                    /**
                     * <p>Tag Chinese value</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>Tag value in English.</p>
                     */
                    std::string m_tagValueEn;
                    bool m_tagValueEnHasBeenSet;

                    /**
                     * <p>Tag description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Tag color</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULETAGITEM_H_
