/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVESTREAMTEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVESTREAMTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Adaptive bitrate streaming parameter template
                */
                class AdaptiveStreamTemplate : public AbstractModel
                {
                public:
                    AdaptiveStreamTemplate();
                    ~AdaptiveStreamTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio parameter information.
                     * @return Audio Audio parameter information.
                     * 
                     */
                    AudioTemplateInfo GetAudio() const;

                    /**
                     * 设置Audio parameter information.
                     * @param _audio Audio parameter information.
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
                     * 获取Video parameter information.
                     * @return Video Video parameter information.
                     * 
                     */
                    VideoTemplateInfo GetVideo() const;

                    /**
                     * 设置Video parameter information.
                     * @param _video Video parameter information.
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
                     * 获取Whether to remove audio stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @return RemoveAudio Whether to remove audio stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @param _removeAudio Whether to remove audio stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
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
                     * 获取Whether to remove video stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @return RemoveVideo Whether to remove video stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * @param _removeVideo Whether to remove video stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     * 
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                private:

                    /**
                     * Audio parameter information.
                     */
                    AudioTemplateInfo m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * Video parameter information.
                     */
                    VideoTemplateInfo m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Whether to remove audio stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Whether to remove video stream. Valid values:
<li>0: no,</li>
<li>1: yes.</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVESTREAMTEMPLATE_H_
