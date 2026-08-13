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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_

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
                * Image understanding task.
                */
                class UnderstandImageConfig : public AbstractModel
                {
                public:
                    UnderstandImageConfig();
                    ~UnderstandImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image understanding model</p><p>Enumeration value:</p><ul><li>WAND-understand-1.0-lite: Lightweight understanding model</li><li>WAND-understand-1.0-flash: Quality-speed balanced understanding model</li><li>WAND-understand-1.0-pro: High-quality understanding model</li></ul>
                     * @return Model <p>Image understanding model</p><p>Enumeration value:</p><ul><li>WAND-understand-1.0-lite: Lightweight understanding model</li><li>WAND-understand-1.0-flash: Quality-speed balanced understanding model</li><li>WAND-understand-1.0-pro: High-quality understanding model</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Image understanding model</p><p>Enumeration value:</p><ul><li>WAND-understand-1.0-lite: Lightweight understanding model</li><li>WAND-understand-1.0-flash: Quality-speed balanced understanding model</li><li>WAND-understand-1.0-pro: High-quality understanding model</li></ul>
                     * @param _model <p>Image understanding model</p><p>Enumeration value:</p><ul><li>WAND-understand-1.0-lite: Lightweight understanding model</li><li>WAND-understand-1.0-flash: Quality-speed balanced understanding model</li><li>WAND-understand-1.0-pro: High-quality understanding model</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Image understanding directive</p>
                     * @return Prompt <p>Image understanding directive</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Image understanding directive</p>
                     * @param _prompt <p>Image understanding directive</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * <p>Image understanding model</p><p>Enumeration value:</p><ul><li>WAND-understand-1.0-lite: Lightweight understanding model</li><li>WAND-understand-1.0-flash: Quality-speed balanced understanding model</li><li>WAND-understand-1.0-pro: High-quality understanding model</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Image understanding directive</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UNDERSTANDIMAGECONFIG_H_
