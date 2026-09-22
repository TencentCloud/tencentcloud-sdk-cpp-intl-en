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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfig.h>
#include <tencentcloud/vod/v20180717/model/EnhanceConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Adaptive transcoding stream parameter template
                */
                class AdaptiveStreamTemplate : public AbstractModel
                {
                public:
                    AdaptiveStreamTemplate();
                    ~AdaptiveStreamTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video parameter information.</p>
                     * @return Video <p>Video parameter information.</p>
                     * 
                     */
                    VideoTemplateInfo GetVideo() const;

                    /**
                     * 设置<p>Video parameter information.</p>
                     * @param _video <p>Video parameter information.</p>
                     * 
                     */
                    void SetVideo(const VideoTemplateInfo& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取<p>Audio parameter information.</p>
                     * @return Audio <p>Audio parameter information.</p>
                     * 
                     */
                    AudioTemplateInfo GetAudio() const;

                    /**
                     * 设置<p>Audio parameter information.</p>
                     * @param _audio <p>Audio parameter information.</p>
                     * 
                     */
                    void SetAudio(const AudioTemplateInfo& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to remove the audio stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * @return RemoveAudio <p>Indicates whether to remove the audio stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>Indicates whether to remove the audio stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * @param _removeAudio <p>Indicates whether to remove the audio stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * 
                     */
                    void SetRemoveAudio(const uint64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to remove the video stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * @return RemoveVideo <p>Indicates whether to remove the video stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>Indicates whether to remove the video stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * @param _removeVideo <p>Indicates whether to remove the video stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     * 
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取<p>Top Speed Codec transcoding parameters.</p>
                     * @return TEHDConfig <p>Top Speed Codec transcoding parameters.</p>
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置<p>Top Speed Codec transcoding parameters.</p>
                     * @param _tEHDConfig <p>Top Speed Codec transcoding parameters.</p>
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取<p>Audio/video enhancement configurations.</p>
                     * @return EnhanceConfig <p>Audio/video enhancement configurations.</p>
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>Audio/video enhancement configurations.</p>
                     * @param _enhanceConfig <p>Audio/video enhancement configurations.</p>
                     * 
                     */
                    void SetEnhanceConfig(const EnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameter.</p>
                     * @return StdExtInfo <p>Extended parameter.</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>Extended parameter.</p>
                     * @param _stdExtInfo <p>Extended parameter.</p>
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Video parameter information.</p>
                     */
                    VideoTemplateInfo m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * <p>Audio parameter information.</p>
                     */
                    AudioTemplateInfo m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * <p>Indicates whether to remove the audio stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>Indicates whether to remove the video stream. Value range:</p><li>0: No.</li><li>1: Yes.</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>Top Speed Codec transcoding parameters.</p>
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>Audio/video enhancement configurations.</p>
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>Extended parameter.</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_
