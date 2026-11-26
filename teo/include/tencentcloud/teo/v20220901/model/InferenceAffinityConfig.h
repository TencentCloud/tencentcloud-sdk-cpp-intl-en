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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SessionIdAffinityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Affinity configurations for the inference service
                */
                class InferenceAffinityConfig : public AbstractModel
                {
                public:
                    InferenceAffinityConfig();
                    ~InferenceAffinityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Master switch for inference service affinity.</p><p>Enumeration values:</p><ul><li>On: Enable inference service affinity;</li><li>Off: Disable inference service affinity.</li></ul>
                     * @return Switch <p>Master switch for inference service affinity.</p><p>Enumeration values:</p><ul><li>On: Enable inference service affinity;</li><li>Off: Disable inference service affinity.</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Master switch for inference service affinity.</p><p>Enumeration values:</p><ul><li>On: Enable inference service affinity;</li><li>Off: Disable inference service affinity.</li></ul>
                     * @param _switch <p>Master switch for inference service affinity.</p><p>Enumeration values:</p><ul><li>On: Enable inference service affinity;</li><li>Off: Disable inference service affinity.</li></ul>
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
                     * 获取<p>Affinity approach for inference service.</p><p>Enumeration values:</p><ul><li>SessionId: Affinity based on session ID.</li></ul><p>Default value: SessionId.</p>
                     * @return AffinityMode <p>Affinity approach for inference service.</p><p>Enumeration values:</p><ul><li>SessionId: Affinity based on session ID.</li></ul><p>Default value: SessionId.</p>
                     * 
                     */
                    std::string GetAffinityMode() const;

                    /**
                     * 设置<p>Affinity approach for inference service.</p><p>Enumeration values:</p><ul><li>SessionId: Affinity based on session ID.</li></ul><p>Default value: SessionId.</p>
                     * @param _affinityMode <p>Affinity approach for inference service.</p><p>Enumeration values:</p><ul><li>SessionId: Affinity based on session ID.</li></ul><p>Default value: SessionId.</p>
                     * 
                     */
                    void SetAffinityMode(const std::string& _affinityMode);

                    /**
                     * 判断参数 AffinityMode 是否已赋值
                     * @return AffinityMode 是否已赋值
                     * 
                     */
                    bool AffinityModeHasBeenSet() const;

                    /**
                     * 获取<p>Inference service affinity configuration. Required when AffinityMode is SessionId.</p>
                     * @return SessionIdAffinityConfig <p>Inference service affinity configuration. Required when AffinityMode is SessionId.</p>
                     * 
                     */
                    SessionIdAffinityConfig GetSessionIdAffinityConfig() const;

                    /**
                     * 设置<p>Inference service affinity configuration. Required when AffinityMode is SessionId.</p>
                     * @param _sessionIdAffinityConfig <p>Inference service affinity configuration. Required when AffinityMode is SessionId.</p>
                     * 
                     */
                    void SetSessionIdAffinityConfig(const SessionIdAffinityConfig& _sessionIdAffinityConfig);

                    /**
                     * 判断参数 SessionIdAffinityConfig 是否已赋值
                     * @return SessionIdAffinityConfig 是否已赋值
                     * 
                     */
                    bool SessionIdAffinityConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Master switch for inference service affinity.</p><p>Enumeration values:</p><ul><li>On: Enable inference service affinity;</li><li>Off: Disable inference service affinity.</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Affinity approach for inference service.</p><p>Enumeration values:</p><ul><li>SessionId: Affinity based on session ID.</li></ul><p>Default value: SessionId.</p>
                     */
                    std::string m_affinityMode;
                    bool m_affinityModeHasBeenSet;

                    /**
                     * <p>Inference service affinity configuration. Required when AffinityMode is SessionId.</p>
                     */
                    SessionIdAffinityConfig m_sessionIdAffinityConfig;
                    bool m_sessionIdAffinityConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAFFINITYCONFIG_H_
