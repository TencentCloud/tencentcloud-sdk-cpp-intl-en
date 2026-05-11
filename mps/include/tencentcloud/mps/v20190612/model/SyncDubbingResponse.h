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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SyncDubbing response structure.
                */
                class SyncDubbingResponse : public AbstractModel
                {
                public:
                    SyncDubbingResponse();
                    ~SyncDubbingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Error code. 0 is returned if the request is successful.</p>
                     * @return ErrorCode <p>Error code. 0 is returned if the request is successful.</p>
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error message. success is returned if the request is successful.</p>
                     * @return Msg <p>Error message. success is returned if the request is successful.</p>
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取<p>Synthetic audio in Base64 encoding and WAV format.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioData <p>Synthetic audio in Base64 encoding and WAV format.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>Synthetic audio URL. It is valid for 24 hours.</p>
                     * @return AudioUrl <p>Synthetic audio URL. It is valid for 24 hours.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Cloned voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceId <p>Cloned voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     * @return ExtInfo <p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Error code. 0 is returned if the request is successful.</p>
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>Error message. success is returned if the request is successful.</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * <p>Synthetic audio in Base64 encoding and WAV format.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>Synthetic audio URL. It is valid for 24 hours.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Cloned voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_
