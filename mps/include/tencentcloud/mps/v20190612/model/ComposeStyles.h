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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeSubtitleStyle.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The style information of a video editing/compositing task.
                */
                class ComposeStyles : public AbstractModel
                {
                public:
                    ComposeStyles();
                    ~ComposeStyles() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The style ID, which identifies an element style.
Note: The style ID can be up to 32 characters long and can contain letters, digits, and special characters -_
                     * @return Id The style ID, which identifies an element style.
Note: The style ID can be up to 32 characters long and can contain letters, digits, and special characters -_
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The style ID, which identifies an element style.
Note: The style ID can be up to 32 characters long and can contain letters, digits, and special characters -_
                     * @param _id The style ID, which identifies an element style.
Note: The style ID can be up to 32 characters long and can contain letters, digits, and special characters -_
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
                     * 获取The type. Valid values:
<li>`Subtitle`: The subtitle style. </li>
                     * @return Type The type. Valid values:
<li>`Subtitle`: The subtitle style. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type. Valid values:
<li>`Subtitle`: The subtitle style. </li>
                     * @param _type The type. Valid values:
<li>`Subtitle`: The subtitle style. </li>
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
                     * 获取The subtitle style details. This parameter is valid if `Type` is `Subtitle`.
                     * @return Subtitle The subtitle style details. This parameter is valid if `Type` is `Subtitle`.
                     * 
                     */
                    ComposeSubtitleStyle GetSubtitle() const;

                    /**
                     * 设置The subtitle style details. This parameter is valid if `Type` is `Subtitle`.
                     * @param _subtitle The subtitle style details. This parameter is valid if `Type` is `Subtitle`.
                     * 
                     */
                    void SetSubtitle(const ComposeSubtitleStyle& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                private:

                    /**
                     * The style ID, which identifies an element style.
Note: The style ID can be up to 32 characters long and can contain letters, digits, and special characters -_
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The type. Valid values:
<li>`Subtitle`: The subtitle style. </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The subtitle style details. This parameter is valid if `Type` is `Subtitle`.
                     */
                    ComposeSubtitleStyle m_subtitle;
                    bool m_subtitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESTYLES_H_
