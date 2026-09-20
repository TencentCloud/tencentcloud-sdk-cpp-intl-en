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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCOUTPUT_H_

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
                * Timbre design task output.
                */
                class DesignVoiceAsyncOutput : public AbstractModel
                {
                public:
                    DesignVoiceAsyncOutput();
                    ~DesignVoiceAsyncOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Voice ID.</p>
                     * @return VoiceId <p>Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID.</p>
                     * @param _voiceId <p>Voice ID.</p>
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
                     * 获取<p>Audition audio.</p>
                     * @return TrialAudio <p>Audition audio.</p>
                     * 
                     */
                    std::string GetTrialAudio() const;

                    /**
                     * 设置<p>Audition audio.</p>
                     * @param _trialAudio <p>Audition audio.</p>
                     * 
                     */
                    void SetTrialAudio(const std::string& _trialAudio);

                    /**
                     * 判断参数 TrialAudio 是否已赋值
                     * @return TrialAudio 是否已赋值
                     * 
                     */
                    bool TrialAudioHasBeenSet() const;

                private:

                    /**
                     * <p>Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Audition audio.</p>
                     */
                    std::string m_trialAudio;
                    bool m_trialAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCOUTPUT_H_
