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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBEMODERATIONUSERIDS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBEMODERATIONUSERIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Specifies the subscription stream allowlist or blocklist. The audio allowlist and blocklist cannot be set simultaneously, and this also applies to video. Additionally, up to 25 concurrently subscribed media streams are supported, and up to 24 video screens are supported in mixed stream scenarios. It is also supported to use the ".*$" wildcard for prefix matching of UserId in the blocklist and allowlist. Note that if there are user IDs in the room that match the wildcard rule, specific users are subscribed, causing the prefix rule to become ineffective.
                */
                class SubscribeModerationUserIds : public AbstractModel
                {
                public:
                    SubscribeModerationUserIds();
                    ~SubscribeModerationUserIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription audio stream allowlist. It specifies which UserIds' audio streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the audio streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to audio streams with UserId prefixes starting with 1. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeAudioUserIds Subscription audio stream allowlist. It specifies which UserIds' audio streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the audio streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to audio streams with UserId prefixes starting with 1. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubscribeAudioUserIds() const;

                    /**
                     * 设置Subscription audio stream allowlist. It specifies which UserIds' audio streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the audio streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to audio streams with UserId prefixes starting with 1. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subscribeAudioUserIds Subscription audio stream allowlist. It specifies which UserIds' audio streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the audio streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to audio streams with UserId prefixes starting with 1. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscribeAudioUserIds(const std::vector<std::string>& _subscribeAudioUserIds);

                    /**
                     * 判断参数 SubscribeAudioUserIds 是否已赋值
                     * @return SubscribeAudioUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取Subscription audio stream blocklist. It specifies which UserIds' audio streams not to subscribe to, for example, ["1", "2", "3"] indicates that the audio streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that audio streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnSubscribeAudioUserIds Subscription audio stream blocklist. It specifies which UserIds' audio streams not to subscribe to, for example, ["1", "2", "3"] indicates that the audio streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that audio streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUnSubscribeAudioUserIds() const;

                    /**
                     * 设置Subscription audio stream blocklist. It specifies which UserIds' audio streams not to subscribe to, for example, ["1", "2", "3"] indicates that the audio streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that audio streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unSubscribeAudioUserIds Subscription audio stream blocklist. It specifies which UserIds' audio streams not to subscribe to, for example, ["1", "2", "3"] indicates that the audio streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that audio streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnSubscribeAudioUserIds(const std::vector<std::string>& _unSubscribeAudioUserIds);

                    /**
                     * 判断参数 UnSubscribeAudioUserIds 是否已赋值
                     * @return UnSubscribeAudioUserIds 是否已赋值
                     * 
                     */
                    bool UnSubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取Subscription video stream allowlist. It specifies which UserIds' video streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the video streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to video streams with UserId prefixes starting with 1. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubscribeVideoUserIds Subscription video stream allowlist. It specifies which UserIds' video streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the video streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to video streams with UserId prefixes starting with 1. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubscribeVideoUserIds() const;

                    /**
                     * 设置Subscription video stream allowlist. It specifies which UserIds' video streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the video streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to video streams with UserId prefixes starting with 1. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subscribeVideoUserIds Subscription video stream allowlist. It specifies which UserIds' video streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the video streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to video streams with UserId prefixes starting with 1. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscribeVideoUserIds(const std::vector<std::string>& _subscribeVideoUserIds);

                    /**
                     * 判断参数 SubscribeVideoUserIds 是否已赋值
                     * @return SubscribeVideoUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeVideoUserIdsHasBeenSet() const;

                    /**
                     * 获取Subscription video stream blocklist. It specifies which UserIds' video streams not to subscribe to, for example, ["1", "2", "3"] indicates that the video streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that video streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnSubscribeVideoUserIds Subscription video stream blocklist. It specifies which UserIds' video streams not to subscribe to, for example, ["1", "2", "3"] indicates that the video streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that video streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUnSubscribeVideoUserIds() const;

                    /**
                     * 设置Subscription video stream blocklist. It specifies which UserIds' video streams not to subscribe to, for example, ["1", "2", "3"] indicates that the video streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that video streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unSubscribeVideoUserIds Subscription video stream blocklist. It specifies which UserIds' video streams not to subscribe to, for example, ["1", "2", "3"] indicates that the video streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that video streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnSubscribeVideoUserIds(const std::vector<std::string>& _unSubscribeVideoUserIds);

                    /**
                     * 判断参数 UnSubscribeVideoUserIds 是否已赋值
                     * @return UnSubscribeVideoUserIds 是否已赋值
                     * 
                     */
                    bool UnSubscribeVideoUserIdsHasBeenSet() const;

                private:

                    /**
                     * Subscription audio stream allowlist. It specifies which UserIds' audio streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the audio streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to audio streams with UserId prefixes starting with 1. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subscribeAudioUserIds;
                    bool m_subscribeAudioUserIdsHasBeenSet;

                    /**
                     * Subscription audio stream blocklist. It specifies which UserIds' audio streams not to subscribe to, for example, ["1", "2", "3"] indicates that the audio streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that audio streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all audio streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_unSubscribeAudioUserIds;
                    bool m_unSubscribeAudioUserIdsHasBeenSet;

                    /**
                     * Subscription video stream allowlist. It specifies which UserIds' video streams to subscribe to, for example, ["1", "2", "3"] indicates subscriptions to the video streams of UserId 1, 2, and 3; ["1.*$"] indicates subscription to video streams with UserId prefixes starting with 1. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subscribeVideoUserIds;
                    bool m_subscribeVideoUserIdsHasBeenSet;

                    /**
                     * Subscription video stream blocklist. It specifies which UserIds' video streams not to subscribe to, for example, ["1", "2", "3"] indicates that the video streams of UserId 1, 2, and 3 are not subscribed to; ["1.*$"] indicates that video streams with UserId prefixes starting with 1 are not subscribed to. If this parameter is left unspecified, all video streams in the room are subscribed to by default. The number of users in the subscription list should not exceed 32.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_unSubscribeVideoUserIds;
                    bool m_unSubscribeVideoUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBEMODERATIONUSERIDS_H_
