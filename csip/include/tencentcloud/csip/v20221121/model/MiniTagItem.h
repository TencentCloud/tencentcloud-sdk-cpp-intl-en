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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_

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
                * Brief asset tag element for CSIP internal use.
                */
                class MiniTagItem : public AbstractModel
                {
                public:
                    MiniTagItem();
                    ~MiniTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag display color.
                     * @return Color Tag display color.
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置Tag display color.
                     * @param _color Tag display color.
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取Tag description.
                     * @return Description Tag description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Tag description.
                     * @param _description Tag description.
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
                     * 获取Tag ID.
                     * @return ID Tag ID.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Tag ID.
                     * @param _iD Tag ID.
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
                     * 获取Tag key (Chinese).
                     * @return TagKey Tag key (Chinese).
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key (Chinese).
                     * @param _tagKey Tag key (Chinese).
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
                     * 获取Tag value (Chinese).
                     * @return TagValue Tag value (Chinese).
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value (Chinese).
                     * @param _tagValue Tag value (Chinese).
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
                     * 获取Tag key (English).
                     * @return TagKeyEn Tag key (English).
                     * 
                     */
                    std::string GetTagKeyEn() const;

                    /**
                     * 设置Tag key (English).
                     * @param _tagKeyEn Tag key (English).
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
                     * 获取Tag value (English).
                     * @return TagValueEn Tag value (English).
                     * 
                     */
                    std::string GetTagValueEn() const;

                    /**
                     * 设置Tag value (English).
                     * @param _tagValueEn Tag value (English).
                     * 
                     */
                    void SetTagValueEn(const std::string& _tagValueEn);

                    /**
                     * 判断参数 TagValueEn 是否已赋值
                     * @return TagValueEn 是否已赋值
                     * 
                     */
                    bool TagValueEnHasBeenSet() const;

                private:

                    /**
                     * Tag display color.
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * Tag description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Tag ID.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Tag key (Chinese).
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value (Chinese).
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Tag key (English).
                     */
                    std::string m_tagKeyEn;
                    bool m_tagKeyEnHasBeenSet;

                    /**
                     * Tag value (English).
                     */
                    std::string m_tagValueEn;
                    bool m_tagValueEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_
