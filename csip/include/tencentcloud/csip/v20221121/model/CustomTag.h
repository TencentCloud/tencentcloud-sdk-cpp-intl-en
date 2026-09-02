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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMTAG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMTAG_H_

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
                * CSC tag
                */
                class CustomTag : public AbstractModel
                {
                public:
                    CustomTag();
                    ~CustomTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag ID</p>
                     * @return TagID <p>Tag ID</p>
                     * 
                     */
                    uint64_t GetTagID() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _tagID <p>Tag ID</p>
                     * 
                     */
                    void SetTagID(const uint64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                    /**
                     * 获取<p>Tag key</p>
                     * @return TagKey <p>Tag key</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Tag key</p>
                     * @param _tagKey <p>Tag key</p>
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
                     * 获取<p>Tag value.</p>
                     * @return TagValue <p>Tag value.</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>Tag value.</p>
                     * @param _tagValue <p>Tag value.</p>
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
                     * 获取<p>Tag color</p>
                     * @return TagColor <p>Tag color</p>
                     * 
                     */
                    std::string GetTagColor() const;

                    /**
                     * 设置<p>Tag color</p>
                     * @param _tagColor <p>Tag color</p>
                     * 
                     */
                    void SetTagColor(const std::string& _tagColor);

                    /**
                     * 判断参数 TagColor 是否已赋值
                     * @return TagColor 是否已赋值
                     * 
                     */
                    bool TagColorHasBeenSet() const;

                private:

                    /**
                     * <p>Tag ID</p>
                     */
                    uint64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                    /**
                     * <p>Tag key</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Tag value.</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>Tag color</p>
                     */
                    std::string m_tagColor;
                    bool m_tagColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMTAG_H_
