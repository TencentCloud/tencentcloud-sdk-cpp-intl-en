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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_

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
                * AI‑generated comic input
                */
                class AiDramaInput : public AbstractModel
                {
                public:
                    AiDramaInput();
                    ~AiDramaInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI comic playbook.</p><p>Parameter format: None</p><p>Input parameter limitation: None</p>
                     * @return Script <p>AI comic playbook.</p><p>Parameter format: None</p><p>Input parameter limitation: None</p>
                     * 
                     */
                    std::string GetScript() const;

                    /**
                     * 设置<p>AI comic playbook.</p><p>Parameter format: None</p><p>Input parameter limitation: None</p>
                     * @param _script <p>AI comic playbook.</p><p>Parameter format: None</p><p>Input parameter limitation: None</p>
                     * 
                     */
                    void SetScript(const std::string& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                    /**
                     * 获取<p>AI comic style</p><p>Enumeration values: </p><ul><li>chinese_ink_wash: Chinese ink‑wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p><p>Enumeration values: </p><ul><li>realistic_live_action: realistic live action</li><li>chinese_ink_wash: Chinese ink-wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p>
                     * @return Style <p>AI comic style</p><p>Enumeration values: </p><ul><li>chinese_ink_wash: Chinese ink‑wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p><p>Enumeration values: </p><ul><li>realistic_live_action: realistic live action</li><li>chinese_ink_wash: Chinese ink-wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>AI comic style</p><p>Enumeration values: </p><ul><li>chinese_ink_wash: Chinese ink‑wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p><p>Enumeration values: </p><ul><li>realistic_live_action: realistic live action</li><li>chinese_ink_wash: Chinese ink-wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p>
                     * @param _style <p>AI comic style</p><p>Enumeration values: </p><ul><li>chinese_ink_wash: Chinese ink‑wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p><p>Enumeration values: </p><ul><li>realistic_live_action: realistic live action</li><li>chinese_ink_wash: Chinese ink-wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>Aspect ratio</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li></ul><p>Default value: 16:9</p>
                     * @return Ratio <p>Aspect ratio</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li></ul><p>Default value: 16:9</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>Aspect ratio</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li></ul><p>Default value: 16:9</p>
                     * @param _ratio <p>Aspect ratio</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li></ul><p>Default value: 16:9</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>Output video resolution</p><p>Enumeration values: </p><ul><li>720p: 720p</li><li>1080p: 1080p</li></ul><p>Default value: 720p</p>
                     * @return Resolution <p>Output video resolution</p><p>Enumeration values: </p><ul><li>720p: 720p</li><li>1080p: 1080p</li></ul><p>Default value: 720p</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Output video resolution</p><p>Enumeration values: </p><ul><li>720p: 720p</li><li>1080p: 1080p</li></ul><p>Default value: 720p</p>
                     * @param _resolution <p>Output video resolution</p><p>Enumeration values: </p><ul><li>720p: 720p</li><li>1080p: 1080p</li></ul><p>Default value: 720p</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>AI comic playbook.</p><p>Parameter format: None</p><p>Input parameter limitation: None</p>
                     */
                    std::string m_script;
                    bool m_scriptHasBeenSet;

                    /**
                     * <p>AI comic style</p><p>Enumeration values: </p><ul><li>chinese_ink_wash: Chinese ink‑wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p><p>Enumeration values: </p><ul><li>realistic_live_action: realistic live action</li><li>chinese_ink_wash: Chinese ink-wash</li><li>fantasy_cyberpunk: fantasy cyberpunk</li><li>japanese_anime_2d: Japanese anime 2D</li></ul><p>Default value: chinese_ink_wash</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>Aspect ratio</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li></ul><p>Default value: 16:9</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>Output video resolution</p><p>Enumeration values: </p><ul><li>720p: 720p</li><li>1080p: 1080p</li></ul><p>Default value: 720p</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDRAMAINPUT_H_
