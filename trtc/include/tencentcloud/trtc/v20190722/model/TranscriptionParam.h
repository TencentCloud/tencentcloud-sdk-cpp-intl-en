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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Parameters for the transcription service to join TRTC room.
                */
                class TranscriptionParam : public AbstractModel
                {
                public:
                    TranscriptionParam();
                    ~TranscriptionParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the transcription service in the TRTC room. Note that this userId cannot duplicate those already used by other TRTC or transcription services etc. You may use the room ID as part of the user identification.
                     * @return UserId [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the transcription service in the TRTC room. Note that this userId cannot duplicate those already used by other TRTC or transcription services etc. You may use the room ID as part of the user identification.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置[UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the transcription service in the TRTC room. Note that this userId cannot duplicate those already used by other TRTC or transcription services etc. You may use the room ID as part of the user identification.
                     * @param _userId [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the transcription service in the TRTC room. Note that this userId cannot duplicate those already used by other TRTC or transcription services etc. You may use the room ID as part of the user identification.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User signature for the transcription service to join a TRTC room. The signature verification corresponding to the current UserId serves as the login password. For specific details, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * @return UserSig User signature for the transcription service to join a TRTC room. The signature verification corresponding to the current UserId serves as the login password. For specific details, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置User signature for the transcription service to join a TRTC room. The signature verification corresponding to the current UserId serves as the login password. For specific details, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * @param _userSig User signature for the transcription service to join a TRTC room. The signature verification corresponding to the current UserId serves as the login password. For specific details, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取Allowlist of user IDs whose audio will be transcribed.
Specifies which anchor audio streams to transcribe when the service starts. If left empty or omitted, audio from all anchors will be transcribed. If one or more values are provided, only audio from the specified anchors will be transcribed.

> Note: If a user ID appears in both the `SubscribeList` and `UnSubscribeList`, the `UnSubscribeList` takes precedence.
                     * @return SubscribeList Allowlist of user IDs whose audio will be transcribed.
Specifies which anchor audio streams to transcribe when the service starts. If left empty or omitted, audio from all anchors will be transcribed. If one or more values are provided, only audio from the specified anchors will be transcribed.

> Note: If a user ID appears in both the `SubscribeList` and `UnSubscribeList`, the `UnSubscribeList` takes precedence.
                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetSubscribeList() const;

                    /**
                     * 设置Allowlist of user IDs whose audio will be transcribed.
Specifies which anchor audio streams to transcribe when the service starts. If left empty or omitted, audio from all anchors will be transcribed. If one or more values are provided, only audio from the specified anchors will be transcribed.

> Note: If a user ID appears in both the `SubscribeList` and `UnSubscribeList`, the `UnSubscribeList` takes precedence.
                     * @param _subscribeList Allowlist of user IDs whose audio will be transcribed.
Specifies which anchor audio streams to transcribe when the service starts. If left empty or omitted, audio from all anchors will be transcribed. If one or more values are provided, only audio from the specified anchors will be transcribed.

> Note: If a user ID appears in both the `SubscribeList` and `UnSubscribeList`, the `UnSubscribeList` takes precedence.
                     * 
                     */
                    void SetSubscribeList(const std::vector<TranscriptionUserInfoParams>& _subscribeList);

                    /**
                     * 判断参数 SubscribeList 是否已赋值
                     * @return SubscribeList 是否已赋值
                     * 
                     */
                    bool SubscribeListHasBeenSet() const;

                    /**
                     * 获取Blocklist of user IDs whose audio will be excluded from transcription. 
Leave empty or omit to disable the blocklist. Provide specific values to exclude the specified anchors' audio from transcription.

                     * @return UnSubscribeList Blocklist of user IDs whose audio will be excluded from transcription. 
Leave empty or omit to disable the blocklist. Provide specific values to exclude the specified anchors' audio from transcription.

                     * 
                     */
                    std::vector<TranscriptionUserInfoParams> GetUnSubscribeList() const;

                    /**
                     * 设置Blocklist of user IDs whose audio will be excluded from transcription. 
Leave empty or omit to disable the blocklist. Provide specific values to exclude the specified anchors' audio from transcription.

                     * @param _unSubscribeList Blocklist of user IDs whose audio will be excluded from transcription. 
Leave empty or omit to disable the blocklist. Provide specific values to exclude the specified anchors' audio from transcription.

                     * 
                     */
                    void SetUnSubscribeList(const std::vector<TranscriptionUserInfoParams>& _unSubscribeList);

                    /**
                     * 判断参数 UnSubscribeList 是否已赋值
                     * @return UnSubscribeList 是否已赋值
                     * 
                     */
                    bool UnSubscribeListHasBeenSet() const;

                    /**
                     * 获取Maximum idle duration before the transcription task is automatically stopped, in seconds.
If all anchors being transcribed continuously leave the TRTC room or switch to the audience role for longer than this value, the transcription task stops automatically.
- Default: 30
- Range: 5 - 86400 (24 hours)
                     * @return MaxIdleTime Maximum idle duration before the transcription task is automatically stopped, in seconds.
If all anchors being transcribed continuously leave the TRTC room or switch to the audience role for longer than this value, the transcription task stops automatically.
- Default: 30
- Range: 5 - 86400 (24 hours)
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置Maximum idle duration before the transcription task is automatically stopped, in seconds.
If all anchors being transcribed continuously leave the TRTC room or switch to the audience role for longer than this value, the transcription task stops automatically.
- Default: 30
- Range: 5 - 86400 (24 hours)
                     * @param _maxIdleTime Maximum idle duration before the transcription task is automatically stopped, in seconds.
If all anchors being transcribed continuously leave the TRTC room or switch to the audience role for longer than this value, the transcription task stops automatically.
- Default: 30
- Range: 5 - 86400 (24 hours)
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取Controls whether the custom data channel is enabled. Accepted values: 0 (disabled) or 1 (enabled). Defaults to 0 if omitted.
                     * @return SendCustomMode Controls whether the custom data channel is enabled. Accepted values: 0 (disabled) or 1 (enabled). Defaults to 0 if omitted.
                     * 
                     */
                    uint64_t GetSendCustomMode() const;

                    /**
                     * 设置Controls whether the custom data channel is enabled. Accepted values: 0 (disabled) or 1 (enabled). Defaults to 0 if omitted.
                     * @param _sendCustomMode Controls whether the custom data channel is enabled. Accepted values: 0 (disabled) or 1 (enabled). Defaults to 0 if omitted.
                     * 
                     */
                    void SetSendCustomMode(const uint64_t& _sendCustomMode);

                    /**
                     * 判断参数 SendCustomMode 是否已赋值
                     * @return SendCustomMode 是否已赋值
                     * 
                     */
                    bool SendCustomModeHasBeenSet() const;

                private:

                    /**
                     * [UserId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#userid) used by the transcription service in the TRTC room. Note that this userId cannot duplicate those already used by other TRTC or transcription services etc. You may use the room ID as part of the user identification.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User signature for the transcription service to join a TRTC room. The signature verification corresponding to the current UserId serves as the login password. For specific details, see TRTC solution for calculating [UserSig](https://www.tencentcloud.com/document/product/647/45910?from_cn_redirect=1#UserSig).
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * Allowlist of user IDs whose audio will be transcribed.
Specifies which anchor audio streams to transcribe when the service starts. If left empty or omitted, audio from all anchors will be transcribed. If one or more values are provided, only audio from the specified anchors will be transcribed.

> Note: If a user ID appears in both the `SubscribeList` and `UnSubscribeList`, the `UnSubscribeList` takes precedence.
                     */
                    std::vector<TranscriptionUserInfoParams> m_subscribeList;
                    bool m_subscribeListHasBeenSet;

                    /**
                     * Blocklist of user IDs whose audio will be excluded from transcription. 
Leave empty or omit to disable the blocklist. Provide specific values to exclude the specified anchors' audio from transcription.

                     */
                    std::vector<TranscriptionUserInfoParams> m_unSubscribeList;
                    bool m_unSubscribeListHasBeenSet;

                    /**
                     * Maximum idle duration before the transcription task is automatically stopped, in seconds.
If all anchors being transcribed continuously leave the TRTC room or switch to the audience role for longer than this value, the transcription task stops automatically.
- Default: 30
- Range: 5 - 86400 (24 hours)
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Controls whether the custom data channel is enabled. Accepted values: 0 (disabled) or 1 (enabled). Defaults to 0 if omitted.
                     */
                    uint64_t m_sendCustomMode;
                    bool m_sendCustomModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSCRIPTIONPARAM_H_
