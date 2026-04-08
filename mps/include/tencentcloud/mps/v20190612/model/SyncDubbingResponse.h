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
                     * 获取Error code. 0 is returned if the request is successful.
                     * @return ErrorCode Error code. 0 is returned if the request is successful.
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
                     * 获取Error message. success is returned if the request is successful.
                     * @return Msg Error message. success is returned if the request is successful.
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
                     * 获取Synthetic audio in Base64 encoding and WAV format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioData Synthetic audio in Base64 encoding and WAV format.
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
                     * 获取
                     * @return AudioUrl 
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
                     * 获取Cloned voice type ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceId Cloned voice type ID.
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
                     * 获取
                     * @return ExtInfo 
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
                     * Error code. 0 is returned if the request is successful.
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message. success is returned if the request is successful.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Synthetic audio in Base64 encoding and WAV format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * Cloned voice type ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_
