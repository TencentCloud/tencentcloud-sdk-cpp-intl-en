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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRESTORATIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRESTORATIONCONFIG_H_

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
                * LLM repair
                */
                class AiRestorationConfig : public AbstractModel
                {
                public:
                    AiRestorationConfig();
                    ~AiRestorationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p>
                     * @return Switch <p>Capability configuration switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p>
                     * @param _switch <p>Capability configuration switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Strength type</p><p>Enumeration values:</p><ul><li>weak: Weak</li><li>normal: Medium</li><li>strong: Strong</li></ul><p>Default value: normal</p>
                     * @return Type <p>Strength type</p><p>Enumeration values:</p><ul><li>weak: Weak</li><li>normal: Medium</li><li>strong: Strong</li></ul><p>Default value: normal</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Strength type</p><p>Enumeration values:</p><ul><li>weak: Weak</li><li>normal: Medium</li><li>strong: Strong</li></ul><p>Default value: normal</p>
                     * @param _type <p>Strength type</p><p>Enumeration values:</p><ul><li>weak: Weak</li><li>normal: Medium</li><li>strong: Strong</li></ul><p>Default value: normal</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Strength type</p><p>Enumeration values:</p><ul><li>weak: Weak</li><li>normal: Medium</li><li>strong: Strong</li></ul><p>Default value: normal</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRESTORATIONCONFIG_H_
