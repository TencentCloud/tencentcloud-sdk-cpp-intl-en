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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom group entry.
                */
                class CustomGroupItem : public AbstractModel
                {
                public:
                    CustomGroupItem();
                    ~CustomGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Entry content.</p>
                     * @return Content <p>Entry content.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Entry content.</p>
                     * @param _content <p>Entry content.</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Entry type.</p><p>Valid values:</p><ul><li>JA3: JA3 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>JA4: JA4 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>UA: UA value, available only when the GroupType of the group is UA</li><li>Referer: Referer value, available only when the GroupType of the group is Referer</li></ul>
                     * @return ItemType <p>Entry type.</p><p>Valid values:</p><ul><li>JA3: JA3 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>JA4: JA4 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>UA: UA value, available only when the GroupType of the group is UA</li><li>Referer: Referer value, available only when the GroupType of the group is Referer</li></ul>
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置<p>Entry type.</p><p>Valid values:</p><ul><li>JA3: JA3 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>JA4: JA4 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>UA: UA value, available only when the GroupType of the group is UA</li><li>Referer: Referer value, available only when the GroupType of the group is Referer</li></ul>
                     * @param _itemType <p>Entry type.</p><p>Valid values:</p><ul><li>JA3: JA3 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>JA4: JA4 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>UA: UA value, available only when the GroupType of the group is UA</li><li>Referer: Referer value, available only when the GroupType of the group is Referer</li></ul>
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Entry content.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Entry type.</p><p>Valid values:</p><ul><li>JA3: JA3 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>JA4: JA4 fingerprint, available only when the GroupType of the group is TLSFingerprint</li><li>UA: UA value, available only when the GroupType of the group is UA</li><li>Referer: Referer value, available only when the GroupType of the group is Referer</li></ul>
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPITEM_H_
