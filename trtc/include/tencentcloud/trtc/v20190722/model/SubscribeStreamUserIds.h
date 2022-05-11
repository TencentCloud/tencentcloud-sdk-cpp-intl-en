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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_

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
                * The allowlist/blocklist for stream subscription. You cannot set both an allowlist and blocklist for audio or video subscription. Up to 25 streams can be subscribed to at the same time. In the mixed-stream recording mode, up to 24 videos can be displayed.
                */
                class SubscribeStreamUserIds : public AbstractModel
                {
                public:
                    SubscribeStreamUserIds();
                    ~SubscribeStreamUserIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The allowlist for audio subscription. For example, `["1", "2", "3"]` means to subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     * @return SubscribeAudioUserIds The allowlist for audio subscription. For example, `["1", "2", "3"]` means to subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> GetSubscribeAudioUserIds() const;

                    /**
                     * 设置The allowlist for audio subscription. For example, `["1", "2", "3"]` means to subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     * @param SubscribeAudioUserIds The allowlist for audio subscription. For example, `["1", "2", "3"]` means to subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    void SetSubscribeAudioUserIds(const std::vector<std::string>& _subscribeAudioUserIds);

                    /**
                     * 判断参数 SubscribeAudioUserIds 是否已赋值
                     * @return SubscribeAudioUserIds 是否已赋值
                     */
                    bool SubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取The blocklist for audio subscription. For example, `["1", "2", "3"]` means to not subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     * @return UnSubscribeAudioUserIds The blocklist for audio subscription. For example, `["1", "2", "3"]` means to not subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> GetUnSubscribeAudioUserIds() const;

                    /**
                     * 设置The blocklist for audio subscription. For example, `["1", "2", "3"]` means to not subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     * @param UnSubscribeAudioUserIds The blocklist for audio subscription. For example, `["1", "2", "3"]` means to not subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    void SetUnSubscribeAudioUserIds(const std::vector<std::string>& _unSubscribeAudioUserIds);

                    /**
                     * 判断参数 UnSubscribeAudioUserIds 是否已赋值
                     * @return UnSubscribeAudioUserIds 是否已赋值
                     */
                    bool UnSubscribeAudioUserIdsHasBeenSet() const;

                    /**
                     * 获取The allowlist for video subscription. For example, `["1", "2", "3"]` means to subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     * @return SubscribeVideoUserIds The allowlist for video subscription. For example, `["1", "2", "3"]` means to subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> GetSubscribeVideoUserIds() const;

                    /**
                     * 设置The allowlist for video subscription. For example, `["1", "2", "3"]` means to subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     * @param SubscribeVideoUserIds The allowlist for video subscription. For example, `["1", "2", "3"]` means to subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    void SetSubscribeVideoUserIds(const std::vector<std::string>& _subscribeVideoUserIds);

                    /**
                     * 判断参数 SubscribeVideoUserIds 是否已赋值
                     * @return SubscribeVideoUserIds 是否已赋值
                     */
                    bool SubscribeVideoUserIdsHasBeenSet() const;

                    /**
                     * 获取The blocklist for video subscription. For example, `["1", "2", "3"]` means to not subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     * @return UnSubscribeVideoUserIds The blocklist for video subscription. For example, `["1", "2", "3"]` means to not subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> GetUnSubscribeVideoUserIds() const;

                    /**
                     * 设置The blocklist for video subscription. For example, `["1", "2", "3"]` means to not subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     * @param UnSubscribeVideoUserIds The blocklist for video subscription. For example, `["1", "2", "3"]` means to not subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    void SetUnSubscribeVideoUserIds(const std::vector<std::string>& _unSubscribeVideoUserIds);

                    /**
                     * 判断参数 UnSubscribeVideoUserIds 是否已赋值
                     * @return UnSubscribeVideoUserIds 是否已赋值
                     */
                    bool UnSubscribeVideoUserIdsHasBeenSet() const;

                private:

                    /**
                     * The allowlist for audio subscription. For example, `["1", "2", "3"]` means to subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> m_subscribeAudioUserIds;
                    bool m_subscribeAudioUserIdsHasBeenSet;

                    /**
                     * The blocklist for audio subscription. For example, `["1", "2", "3"]` means to not subscribe to the audios of users 1, 2, and 3. If this parameter is left empty, the audios of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> m_unSubscribeAudioUserIds;
                    bool m_unSubscribeAudioUserIdsHasBeenSet;

                    /**
                     * The allowlist for video subscription. For example, `["1", "2", "3"]` means to subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> m_subscribeVideoUserIds;
                    bool m_subscribeVideoUserIdsHasBeenSet;

                    /**
                     * The blocklist for video subscription. For example, `["1", "2", "3"]` means to not subscribe to the videos of users 1, 2, and 3. If this parameter is left empty, the videos of all anchors (max 32) in the room will be received.
                     */
                    std::vector<std::string> m_unSubscribeVideoUserIds;
                    bool m_unSubscribeVideoUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SUBSCRIBESTREAMUSERIDS_H_
