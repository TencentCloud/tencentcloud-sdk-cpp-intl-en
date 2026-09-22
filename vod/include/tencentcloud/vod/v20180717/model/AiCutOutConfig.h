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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AICUTOUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AICUTOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PatternConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent image masking configuration.
                */
                class AiCutOutConfig : public AbstractModel
                {
                public:
                    AiCutOutConfig();
                    ~AiCutOutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch. Available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @return Switch <p>Capability configuration switch. Available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch. Available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @param _switch <p>Capability configuration switch. Available values: ON: Enable; OFF: Disable. Default value: ON.</p>
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
                     * 获取<p>Matting target type: "foreground" / "pattern"</p>
                     * @return Type <p>Matting target type: "foreground" / "pattern"</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Matting target type: "foreground" / "pattern"</p>
                     * @param _type <p>Matting target type: "foreground" / "pattern"</p>
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
                     * 获取<p>Pattern cutout configuration. This parameter is valid only when Type is pattern.</p>
                     * @return PatternConfig <p>Pattern cutout configuration. This parameter is valid only when Type is pattern.</p>
                     * 
                     */
                    PatternConfig GetPatternConfig() const;

                    /**
                     * 设置<p>Pattern cutout configuration. This parameter is valid only when Type is pattern.</p>
                     * @param _patternConfig <p>Pattern cutout configuration. This parameter is valid only when Type is pattern.</p>
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
                     * 获取<p>Matting model selection. This parameter is optional.</p><p>Enumeration values:</p><ul><li>auto: automatically choose an appropriate model</li><li>WAND-cutout-1.0-lite: standard version, fastest speed</li><li>WAND-cutout-2.0-lite: enhanced version, faster speed</li><li>WAND-cutout-2.0-flash: enhanced version, quality-speed balance</li><li>WAND-cutout-3.0-lite: enhanced version, faster speed</li><li>WAND-cutout-3.0-flash: enhanced version, quality-speed balance</li></ul>
                     * @return Model <p>Matting model selection. This parameter is optional.</p><p>Enumeration values:</p><ul><li>auto: automatically choose an appropriate model</li><li>WAND-cutout-1.0-lite: standard version, fastest speed</li><li>WAND-cutout-2.0-lite: enhanced version, faster speed</li><li>WAND-cutout-2.0-flash: enhanced version, quality-speed balance</li><li>WAND-cutout-3.0-lite: enhanced version, faster speed</li><li>WAND-cutout-3.0-flash: enhanced version, quality-speed balance</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Matting model selection. This parameter is optional.</p><p>Enumeration values:</p><ul><li>auto: automatically choose an appropriate model</li><li>WAND-cutout-1.0-lite: standard version, fastest speed</li><li>WAND-cutout-2.0-lite: enhanced version, faster speed</li><li>WAND-cutout-2.0-flash: enhanced version, quality-speed balance</li><li>WAND-cutout-3.0-lite: enhanced version, faster speed</li><li>WAND-cutout-3.0-flash: enhanced version, quality-speed balance</li></ul>
                     * @param _model <p>Matting model selection. This parameter is optional.</p><p>Enumeration values:</p><ul><li>auto: automatically choose an appropriate model</li><li>WAND-cutout-1.0-lite: standard version, fastest speed</li><li>WAND-cutout-2.0-lite: enhanced version, faster speed</li><li>WAND-cutout-2.0-flash: enhanced version, quality-speed balance</li><li>WAND-cutout-3.0-lite: enhanced version, faster speed</li><li>WAND-cutout-3.0-flash: enhanced version, quality-speed balance</li></ul>
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
                     * <p>Capability configuration switch. Available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Matting target type: "foreground" / "pattern"</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Pattern cutout configuration. This parameter is valid only when Type is pattern.</p>
                     */
                    PatternConfig m_patternConfig;
                    bool m_patternConfigHasBeenSet;

                    /**
                     * <p>Matting model selection. This parameter is optional.</p><p>Enumeration values:</p><ul><li>auto: automatically choose an appropriate model</li><li>WAND-cutout-1.0-lite: standard version, fastest speed</li><li>WAND-cutout-2.0-lite: enhanced version, faster speed</li><li>WAND-cutout-2.0-flash: enhanced version, quality-speed balance</li><li>WAND-cutout-3.0-lite: enhanced version, faster speed</li><li>WAND-cutout-3.0-flash: enhanced version, quality-speed balance</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AICUTOUTCONFIG_H_
