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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Specifications for custom transcoding
                */
                class RawTranscodeParameter : public AbstractModel
                {
                public:
                    RawTranscodeParameter();
                    ~RawTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Container 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置
                     * @param Container 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取
                     * @return RemoveVideo 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置
                     * @param RemoveVideo 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取
                     * @return RemoveAudio 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置
                     * @param RemoveAudio 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoTemplate 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置
                     * @param VideoTemplate 
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取
                     * @return AudioTemplate 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置
                     * @param AudioTemplate 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取
                     * @return TEHDConfig 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置
                     * @param TEHDConfig 
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * 
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
