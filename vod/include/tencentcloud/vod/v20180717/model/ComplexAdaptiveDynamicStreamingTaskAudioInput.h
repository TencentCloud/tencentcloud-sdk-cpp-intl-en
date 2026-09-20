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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input parameter of the multilingual audio stream for an adaptive bitrate streaming task.
                */
                class ComplexAdaptiveDynamicStreamingTaskAudioInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskAudioInput();
                    ~ComplexAdaptiveDynamicStreamingTaskAudioInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Media ID of the audio source. The first audio stream in the media source file is always used, while video streams and other audio streams, if any, will be ignored.</p>
                     * @return FileId <p>Media ID of the audio source. The first audio stream in the media source file is always used, while video streams and other audio streams, if any, will be ignored.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media ID of the audio source. The first audio stream in the media source file is always used, while video streams and other audio streams, if any, will be ignored.</p>
                     * @param _fileId <p>Media ID of the audio source. The first audio stream in the media source file is always used, while video streams and other audio streams, if any, will be ignored.</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>Audio stream name in the output adaptive bitrate stream. Length limit: 16 characters.</p>
                     * @return Name <p>Audio stream name in the output adaptive bitrate stream. Length limit: 16 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Audio stream name in the output adaptive bitrate stream. Length limit: 16 characters.</p>
                     * @param _name <p>Audio stream name in the output adaptive bitrate stream. Length limit: 16 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Language of the audio stream in the output adaptive bitrate stream. Length limit: 16 characters. It must comply with RFC5646.</p>
                     * @return Language <p>Language of the audio stream in the output adaptive bitrate stream. Length limit: 16 characters. It must comply with RFC5646.</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Language of the audio stream in the output adaptive bitrate stream. Length limit: 16 characters. It must comply with RFC5646.</p>
                     * @param _language <p>Language of the audio stream in the output adaptive bitrate stream. Length limit: 16 characters. It must comply with RFC5646.</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>Whether to set as the default audio for adaptive bitrate. Value:</p><li>YES: set as default audio;</li><li>NO: not set as default audio (default value).</li>
                     * @return Default <p>Whether to set as the default audio for adaptive bitrate. Value:</p><li>YES: set as default audio;</li><li>NO: not set as default audio (default value).</li>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>Whether to set as the default audio for adaptive bitrate. Value:</p><li>YES: set as default audio;</li><li>NO: not set as default audio (default value).</li>
                     * @param _default <p>Whether to set as the default audio for adaptive bitrate. Value:</p><li>YES: set as default audio;</li><li>NO: not set as default audio (default value).</li>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>Audio track serial number, indicating which audio track in the audio source to select, counting from 0. The default value is 0, indicating the frontmost audio track is selected.</p>
                     * @return AudioTrackIdx <p>Audio track serial number, indicating which audio track in the audio source to select, counting from 0. The default value is 0, indicating the frontmost audio track is selected.</p>
                     * 
                     */
                    uint64_t GetAudioTrackIdx() const;

                    /**
                     * 设置<p>Audio track serial number, indicating which audio track in the audio source to select, counting from 0. The default value is 0, indicating the frontmost audio track is selected.</p>
                     * @param _audioTrackIdx <p>Audio track serial number, indicating which audio track in the audio source to select, counting from 0. The default value is 0, indicating the frontmost audio track is selected.</p>
                     * 
                     */
                    void SetAudioTrackIdx(const uint64_t& _audioTrackIdx);

                    /**
                     * 判断参数 AudioTrackIdx 是否已赋值
                     * @return AudioTrackIdx 是否已赋值
                     * 
                     */
                    bool AudioTrackIdxHasBeenSet() const;

                private:

                    /**
                     * <p>Media ID of the audio source. The first audio stream in the media source file is always used, while video streams and other audio streams, if any, will be ignored.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Audio stream name in the output adaptive bitrate stream. Length limit: 16 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Language of the audio stream in the output adaptive bitrate stream. Length limit: 16 characters. It must comply with RFC5646.</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Whether to set as the default audio for adaptive bitrate. Value:</p><li>YES: set as default audio;</li><li>NO: not set as default audio (default value).</li>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>Audio track serial number, indicating which audio track in the audio source to select, counting from 0. The default value is 0, indicating the frontmost audio track is selected.</p>
                     */
                    uint64_t m_audioTrackIdx;
                    bool m_audioTrackIdxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_
