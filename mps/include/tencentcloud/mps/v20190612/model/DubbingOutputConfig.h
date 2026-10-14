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
                * Output configuration of a dubbing task
                */
                class DubbingOutputConfig : public AbstractModel
                {
                public:
                    DubbingOutputConfig();
                    ~DubbingOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translated audio + translated subtitles</li><li>Custom: custom</li></ul><p>Default value: FinalVideoOnly</p><p>No translated audio + subtitles are returned when external subtitles are used</p>
                     * @return OutputMode <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translated audio + translated subtitles</li><li>Custom: custom</li></ul><p>Default value: FinalVideoOnly</p><p>No translated audio + subtitles are returned when external subtitles are used</p>
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置<p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translated audio + translated subtitles</li><li>Custom: custom</li></ul><p>Default value: FinalVideoOnly</p><p>No translated audio + subtitles are returned when external subtitles are used</p>
                     * @param _outputMode <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translated audio + translated subtitles</li><li>Custom: custom</li></ul><p>Default value: FinalVideoOnly</p><p>No translated audio + subtitles are returned when external subtitles are used</p>
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
                     * 获取<p>Switch for output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: turn on</li><li>OFF: turn off</li></ul><p>Default value: OFF</p>
                     * @return OutputSubtitle <p>Switch for output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: turn on</li><li>OFF: turn off</li></ul><p>Default value: OFF</p>
                     * 
                     */
                    std::string GetOutputSubtitle() const;

                    /**
                     * 设置<p>Switch for output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: turn on</li><li>OFF: turn off</li></ul><p>Default value: OFF</p>
                     * @param _outputSubtitle <p>Switch for output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: turn on</li><li>OFF: turn off</li></ul><p>Default value: OFF</p>
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
                     * 获取<p>Output translation dubbing audio switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * @return OutputDstAudio <p>Output translation dubbing audio switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * 
                     */
                    std::string GetOutputDstAudio() const;

                    /**
                     * 设置<p>Output translation dubbing audio switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     * @param _outputDstAudio <p>Output translation dubbing audio switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
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
                     * 获取<p>Suppression subtitle configuration message.</p>
                     * @return EmbedSubtitleConfig <p>Suppression subtitle configuration message.</p>
                     * 
                     */
                    DubbingEmbedSubtitleConfig GetEmbedSubtitleConfig() const;

                    /**
                     * 设置<p>Suppression subtitle configuration message.</p>
                     * @param _embedSubtitleConfig <p>Suppression subtitle configuration message.</p>
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
                     * <p>Output method</p><p>Enumeration values:</p><ul><li>FinalVideoOnly: default, final video only</li><li>AudioAndSubtitle: translated audio + translated subtitles</li><li>Custom: custom</li></ul><p>Default value: FinalVideoOnly</p><p>No translated audio + subtitles are returned when external subtitles are used</p>
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>Output video switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: ON</p><p>Only takes effect in Custom mode</p>
                     */
                    std::string m_outputFinalVideo;
                    bool m_outputFinalVideoHasBeenSet;

                    /**
                     * <p>Switch for output subtitle files (contains both original voice subtitles and target language subtitles)</p><p>Enumeration values:</p><ul><li>ON: turn on</li><li>OFF: turn off</li></ul><p>Default value: OFF</p>
                     */
                    std::string m_outputSubtitle;
                    bool m_outputSubtitleHasBeenSet;

                    /**
                     * <p>Output translation dubbing audio switch</p><p>Enumeration values: </p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul><p>Default value: OFF</p><p>Only takes effect in Custom mode</p>
                     */
                    std::string m_outputDstAudio;
                    bool m_outputDstAudioHasBeenSet;

                    /**
                     * <p>Suppression subtitle configuration message.</p>
                     */
                    DubbingEmbedSubtitleConfig m_embedSubtitleConfig;
                    bool m_embedSubtitleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGOUTPUTCONFIG_H_
