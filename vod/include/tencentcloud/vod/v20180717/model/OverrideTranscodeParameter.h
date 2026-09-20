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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfigForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Custom video transcoding parameters.
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.</p>
                     * @return Container <p>Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.</p>
                     * @param _container <p>Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.</p>
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to remove video data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * @return RemoveVideo <p>Indicates whether to remove video data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>Indicates whether to remove video data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * @param _removeVideo <p>Indicates whether to remove video data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
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
                     * 获取<p>Indicates whether to remove audio data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * @return RemoveAudio <p>Indicates whether to remove audio data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>Indicates whether to remove audio data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     * @param _removeAudio <p>Indicates whether to remove audio data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
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
                     * 获取<p>Video stream configuration parameters.</p>
                     * @return VideoTemplate <p>Video stream configuration parameters.</p>
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置<p>Video stream configuration parameters.</p>
                     * @param _videoTemplate <p>Video stream configuration parameters.</p>
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Audio stream configuration parameters.</p>
                     * @return AudioTemplate <p>Audio stream configuration parameters.</p>
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置<p>Audio stream configuration parameters.</p>
                     * @param _audioTemplate <p>Audio stream configuration parameters.</p>
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取<p>TSC transcoding configuration parameters.</p>
                     * @return TEHDConfig <p>TSC transcoding configuration parameters.</p>
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置<p>TSC transcoding configuration parameters.</p>
                     * @param _tEHDConfig <p>TSC transcoding configuration parameters.</p>
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取<p>Standard extended fields for special usage.</p>
                     * @return StdExtInfo <p>Standard extended fields for special usage.</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>Standard extended fields for special usage.</p>
                     * @param _stdExtInfo <p>Standard extended fields for special usage.</p>
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
                     * <p>Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>Indicates whether to remove video data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>Indicates whether to remove audio data. Valid values:<br>&lt;li&gt;0: Data is reserved;&lt;\li&gt;<br>&lt;li&gt;1: Data is removed.&lt;\li&gt;</p>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>Video stream configuration parameters.</p>
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * <p>Audio stream configuration parameters.</p>
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * <p>TSC transcoding configuration parameters.</p>
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>Standard extended fields for special usage.</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
