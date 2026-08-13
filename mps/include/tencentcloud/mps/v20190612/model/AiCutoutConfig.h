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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PatternConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent image masking configuration.
                */
                class AiCutoutConfig : public AbstractModel
                {
                public:
                    AiCutoutConfig();
                    ~AiCutoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @return Switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @param _switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
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
                     * 获取<p>Target type: "foreground" (default) / "pattern"</p>
                     * @return Type <p>Target type: "foreground" (default) / "pattern"</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Target type: "foreground" (default) / "pattern"</p>
                     * @param _type <p>Target type: "foreground" (default) / "pattern"</p>
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
                     * 获取<p>Pattern matting configuration. This parameter is valid only when Type is pattern.</p>
                     * @return PatternConfig <p>Pattern matting configuration. This parameter is valid only when Type is pattern.</p>
                     * 
                     */
                    PatternConfig GetPatternConfig() const;

                    /**
                     * 设置<p>Pattern matting configuration. This parameter is valid only when Type is pattern.</p>
                     * @param _patternConfig <p>Pattern matting configuration. This parameter is valid only when Type is pattern.</p>
                     * 
                     */
                    void SetPatternConfig(const PatternConfig& _patternConfig);

                    /**
                     * 判断参数 PatternConfig 是否已赋值
                     * @return PatternConfig 是否已赋值
                     * 
                     */
                    bool PatternConfigHasBeenSet() const;

                    /**
                     * 获取<p>Cutout model selection, optional.</p><p>Enumeration value:</p><ul><li>auto: Automatically choose appropriate model</li><li>WAND-cutout-1.0-lite: Standard version, fastest speed</li><li>WAND-cutout-2.0-lite: Enhanced, fastest speed</li><li>WAND-cutout-2.0-flash: Enhanced, quality-speed balance</li></ul>
                     * @return Model <p>Cutout model selection, optional.</p><p>Enumeration value:</p><ul><li>auto: Automatically choose appropriate model</li><li>WAND-cutout-1.0-lite: Standard version, fastest speed</li><li>WAND-cutout-2.0-lite: Enhanced, fastest speed</li><li>WAND-cutout-2.0-flash: Enhanced, quality-speed balance</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Cutout model selection, optional.</p><p>Enumeration value:</p><ul><li>auto: Automatically choose appropriate model</li><li>WAND-cutout-1.0-lite: Standard version, fastest speed</li><li>WAND-cutout-2.0-lite: Enhanced, fastest speed</li><li>WAND-cutout-2.0-flash: Enhanced, quality-speed balance</li></ul>
                     * @param _model <p>Cutout model selection, optional.</p><p>Enumeration value:</p><ul><li>auto: Automatically choose appropriate model</li><li>WAND-cutout-1.0-lite: Standard version, fastest speed</li><li>WAND-cutout-2.0-lite: Enhanced, fastest speed</li><li>WAND-cutout-2.0-flash: Enhanced, quality-speed balance</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Target type: "foreground" (default) / "pattern"</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Pattern matting configuration. This parameter is valid only when Type is pattern.</p>
                     */
                    PatternConfig m_patternConfig;
                    bool m_patternConfigHasBeenSet;

                    /**
                     * <p>Cutout model selection, optional.</p><p>Enumeration value:</p><ul><li>auto: Automatically choose appropriate model</li><li>WAND-cutout-1.0-lite: Standard version, fastest speed</li><li>WAND-cutout-2.0-lite: Enhanced, fastest speed</li><li>WAND-cutout-2.0-flash: Enhanced, quality-speed balance</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICUTOUTCONFIG_H_
