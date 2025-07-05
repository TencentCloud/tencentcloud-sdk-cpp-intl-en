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
                * Input parameters for audio streams in the adaptive bitrate streaming task.
                */
                class ComplexAdaptiveDynamicStreamingTaskAudioInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskAudioInput();
                    ~ComplexAdaptiveDynamicStreamingTaskAudioInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media ID of the input audio file. The first audio stream in the media will be fixed, while video streams and other audio streams (if any) will be ignored.
                     * @return FileId Media ID of the input audio file. The first audio stream in the media will be fixed, while video streams and other audio streams (if any) will be ignored.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media ID of the input audio file. The first audio stream in the media will be fixed, while video streams and other audio streams (if any) will be ignored.
                     * @param _fileId Media ID of the input audio file. The first audio stream in the media will be fixed, while video streams and other audio streams (if any) will be ignored.
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
                     * 获取Audio stream name in the output, supporting up to 16 characters.
                     * @return Name Audio stream name in the output, supporting up to 16 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio stream name in the output, supporting up to 16 characters.
                     * @param _name Audio stream name in the output, supporting up to 16 characters.
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
                     * 获取The language of the audio stream in the output, supporting up to 16 characters. It must comply with the RFC5646 specification.
                     * @return Language The language of the audio stream in the output, supporting up to 16 characters. It must comply with the RFC5646 specification.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置The language of the audio stream in the output, supporting up to 16 characters. It must comply with the RFC5646 specification.
                     * @param _language The language of the audio stream in the output, supporting up to 16 characters. It must comply with the RFC5646 specification.
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
                     * 获取Whether to set as the default audio for adaptive bitrate streaming.
<li>YES: Set as the default audio;</li>
<li>NO: Not set as the default audio (default value).</li>
                     * @return Default Whether to set as the default audio for adaptive bitrate streaming.
<li>YES: Set as the default audio;</li>
<li>NO: Not set as the default audio (default value).</li>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Whether to set as the default audio for adaptive bitrate streaming.
<li>YES: Set as the default audio;</li>
<li>NO: Not set as the default audio (default value).</li>
                     * @param _default Whether to set as the default audio for adaptive bitrate streaming.
<li>YES: Set as the default audio;</li>
<li>NO: Not set as the default audio (default value).</li>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * Media ID of the input audio file. The first audio stream in the media will be fixed, while video streams and other audio streams (if any) will be ignored.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Audio stream name in the output, supporting up to 16 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The language of the audio stream in the output, supporting up to 16 characters. It must comply with the RFC5646 specification.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Whether to set as the default audio for adaptive bitrate streaming.
<li>YES: Set as the default audio;</li>
<li>NO: Not set as the default audio (default value).</li>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKAUDIOINPUT_H_
