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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMVARIABLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Custom description variable.
                */
                class CustomVariable : public AbstractModel
                {
                public:
                    CustomVariable();
                    ~CustomVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User-defined variable type.</p><p>Parameter format: PascalCase format.</p><p>This cannot be UserPrompt. The default platform template is not adapted for custom content. Submit a ticket if needed.</p>
                     * @return Type <p>User-defined variable type.</p><p>Parameter format: PascalCase format.</p><p>This cannot be UserPrompt. The default platform template is not adapted for custom content. Submit a ticket if needed.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>User-defined variable type.</p><p>Parameter format: PascalCase format.</p><p>This cannot be UserPrompt. The default platform template is not adapted for custom content. Submit a ticket if needed.</p>
                     * @param _type <p>User-defined variable type.</p><p>Parameter format: PascalCase format.</p><p>This cannot be UserPrompt. The default platform template is not adapted for custom content. Submit a ticket if needed.</p>
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
                     * 获取<p>Custom variable description.</p>
                     * @return Description <p>Custom variable description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Custom variable description.</p>
                     * @param _description <p>Custom variable description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>User-defined variable type.</p><p>Parameter format: PascalCase format.</p><p>This cannot be UserPrompt. The default platform template is not adapted for custom content. Submit a ticket if needed.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Custom variable description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMVARIABLE_H_
