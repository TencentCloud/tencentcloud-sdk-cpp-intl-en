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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCOUTPUT_H_

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
                * Speech synthesis task output.
                */
                class TextToSpeechAsyncOutput : public AbstractModel
                {
                public:
                    TextToSpeechAsyncOutput();
                    ~TextToSpeechAsyncOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>URL of the synthetic audio result</p>
                     * @return AudioUrl <p>URL of the synthetic audio result</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>URL of the synthetic audio result</p>
                     * @param _audioUrl <p>URL of the synthetic audio result</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Used voice ID.</p>
                     * @return VoiceId <p>Used voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Used voice ID.</p>
                     * @param _voiceId <p>Used voice ID.</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended information.</p>
                     * @return ExtInfo <p>Extended information.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Extended information.</p>
                     * @param _extInfo <p>Extended information.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>FileId of the synthetic audio result</p>
                     * @return FileId <p>FileId of the synthetic audio result</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>FileId of the synthetic audio result</p>
                     * @param _fileId <p>FileId of the synthetic audio result</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>URL of the synthetic audio result</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Used voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Extended information.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>FileId of the synthetic audio result</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCOUTPUT_H_
