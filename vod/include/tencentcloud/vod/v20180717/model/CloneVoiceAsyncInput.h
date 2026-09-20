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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCINPUT_H_

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
                * Input of the timbre clone task.
                */
                class CloneVoiceAsyncInput : public AbstractModel
                {
                public:
                    CloneVoiceAsyncInput();
                    ~CloneVoiceAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @return AudioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @param _audioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
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
                     * 获取<p>Input audio fileId</p>
                     * @return AudioFileId <p>Input audio fileId</p>
                     * 
                     */
                    std::string GetAudioFileId() const;

                    /**
                     * 设置<p>Input audio fileId</p>
                     * @param _audioFileId <p>Input audio fileId</p>
                     * 
                     */
                    void SetAudioFileId(const std::string& _audioFileId);

                    /**
                     * 判断参数 AudioFileId 是否已赋值
                     * @return AudioFileId 是否已赋值
                     * 
                     */
                    bool AudioFileIdHasBeenSet() const;

                    /**
                     * 获取<p>Audio language</p>
                     * @return LanguageBoost <p>Audio language</p>
                     * 
                     */
                    std::string GetLanguageBoost() const;

                    /**
                     * 设置<p>Audio language</p>
                     * @param _languageBoost <p>Audio language</p>
                     * 
                     */
                    void SetLanguageBoost(const std::string& _languageBoost);

                    /**
                     * 判断参数 LanguageBoost 是否已赋值
                     * @return LanguageBoost 是否已赋值
                     * 
                     */
                    bool LanguageBoostHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Input audio fileId</p>
                     */
                    std::string m_audioFileId;
                    bool m_audioFileIdHasBeenSet;

                    /**
                     * <p>Audio language</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCINPUT_H_
