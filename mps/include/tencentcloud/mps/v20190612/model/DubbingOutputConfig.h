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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DubbingEmbedSubtitleConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing task output configuration
                */
                class DubbingOutputConfig : public AbstractModel
                {
                public:
                    DubbingOutputConfig();
                    ~DubbingOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translation audio + translation subtitle</li><li>Custom: customization</li></ul><p>Default value: FinalVideoOnly</p><p>No translation audio and subtitle are returned when using external subtitles</p>
                     * @return OutputMode <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translation audio + translation subtitle</li><li>Custom: customization</li></ul><p>Default value: FinalVideoOnly</p><p>No translation audio and subtitle are returned when using external subtitles</p>
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置<p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translation audio + translation subtitle</li><li>Custom: customization</li></ul><p>Default value: FinalVideoOnly</p><p>No translation audio and subtitle are returned when using external subtitles</p>
                     * @param _outputMode <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translation audio + translation subtitle</li><li>Custom: customization</li></ul><p>Default value: FinalVideoOnly</p><p>No translation audio and subtitle are returned when using external subtitles</p>
                     * 
                     */
                    void SetOutputMode(const std::string& _outputMode);

                    /**
                     * 判断参数 OutputMode 是否已赋值
                     * @return OutputMode 是否已赋值
                     * 
                     */
                    bool OutputModeHasBeenSet() const;

                    /**
                     * 获取<p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     * @return OutputFinalVideo <p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     * 
                     */
                    std::string GetOutputFinalVideo() const;

                    /**
                     * 设置<p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     * @param _outputFinalVideo <p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     * 
                     */
                    void SetOutputFinalVideo(const std::string& _outputFinalVideo);

                    /**
                     * 判断参数 OutputFinalVideo 是否已赋值
                     * @return OutputFinalVideo 是否已赋值
                     * 
                     */
                    bool OutputFinalVideoHasBeenSet() const;

                    /**
                     * 获取<p>Switch to output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: enable</li><li>OFF: disable</li></ul><p>Default value: OFF</p>
                     * @return OutputSubtitle <p>Switch to output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: enable</li><li>OFF: disable</li></ul><p>Default value: OFF</p>
                     * 
                     */
                    std::string GetOutputSubtitle() const;

                    /**
                     * 设置<p>Switch to output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: enable</li><li>OFF: disable</li></ul><p>Default value: OFF</p>
                     * @param _outputSubtitle <p>Switch to output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: enable</li><li>OFF: disable</li></ul><p>Default value: OFF</p>
                     * 
                     */
                    void SetOutputSubtitle(const std::string& _outputSubtitle);

                    /**
                     * 判断参数 OutputSubtitle 是否已赋值
                     * @return OutputSubtitle 是否已赋值
                     * 
                     */
                    bool OutputSubtitleHasBeenSet() const;

                    /**
                     * 获取<p>Audio switch for output translation dubbing</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * @return OutputDstAudio <p>Audio switch for output translation dubbing</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * 
                     */
                    std::string GetOutputDstAudio() const;

                    /**
                     * 设置<p>Audio switch for output translation dubbing</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * @param _outputDstAudio <p>Audio switch for output translation dubbing</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * 
                     */
                    void SetOutputDstAudio(const std::string& _outputDstAudio);

                    /**
                     * 判断参数 OutputDstAudio 是否已赋值
                     * @return OutputDstAudio 是否已赋值
                     * 
                     */
                    bool OutputDstAudioHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle suppression configuration message.</p>
                     * @return EmbedSubtitleConfig <p>Subtitle suppression configuration message.</p>
                     * 
                     */
                    DubbingEmbedSubtitleConfig GetEmbedSubtitleConfig() const;

                    /**
                     * 设置<p>Subtitle suppression configuration message.</p>
                     * @param _embedSubtitleConfig <p>Subtitle suppression configuration message.</p>
                     * 
                     */
                    void SetEmbedSubtitleConfig(const DubbingEmbedSubtitleConfig& _embedSubtitleConfig);

                    /**
                     * 判断参数 EmbedSubtitleConfig 是否已赋值
                     * @return EmbedSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EmbedSubtitleConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translation audio + translation subtitle</li><li>Custom: customization</li></ul><p>Default value: FinalVideoOnly</p><p>No translation audio and subtitle are returned when using external subtitles</p>
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     */
                    std::string m_outputFinalVideo;
                    bool m_outputFinalVideoHasBeenSet;

                    /**
                     * <p>Switch to output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: enable</li><li>OFF: disable</li></ul><p>Default value: OFF</p>
                     */
                    std::string m_outputSubtitle;
                    bool m_outputSubtitleHasBeenSet;

                    /**
                     * <p>Audio switch for output translation dubbing</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     */
                    std::string m_outputDstAudio;
                    bool m_outputDstAudioHasBeenSet;

                    /**
                     * <p>Subtitle suppression configuration message.</p>
                     */
                    DubbingEmbedSubtitleConfig m_embedSubtitleConfig;
                    bool m_embedSubtitleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_
