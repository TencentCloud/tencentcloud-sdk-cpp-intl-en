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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateTranscodeTemplate request structure.
                */
                class CreateTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateTranscodeTemplateRequest();
                    ~CreateTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @return Container Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @param Container Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Transcoding template name. Length limit: 64 characters.
                     * @return Name Transcoding template name. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Transcoding template name. Length limit: 64 characters.
                     * @param Name Transcoding template name. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param Comment Template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @param RemoveVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @param RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * @return VideoTemplate Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * @param VideoTemplate Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * @return AudioTemplate Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * @param AudioTemplate Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取TESHD transcoding parameter.
                     * @return TEHDConfig TESHD transcoding parameter.
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter.
                     * @param TEHDConfig TESHD transcoding parameter.
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Transcoding template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * TESHD transcoding parameter.
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_
