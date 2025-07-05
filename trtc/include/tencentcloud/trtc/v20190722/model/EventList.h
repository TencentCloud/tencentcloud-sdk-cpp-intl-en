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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/EventMessage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * A list of SDK or WebRTC events.
                */
                class EventList : public AbstractModel
                {
                public:
                    EventList();
                    ~EventList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The event information.
                     * @return Content The event information.
                     * 
                     */
                    std::vector<EventMessage> GetContent() const;

                    /**
                     * 设置The event information.
                     * @param _content The event information.
                     * 
                     */
                    void SetContent(const std::vector<EventMessage>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The user ID of the sender.
                     * @return PeerId The user ID of the sender.
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置The user ID of the sender.
                     * @param _peerId The user ID of the sender.
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                private:

                    /**
                     * The event information.
                     */
                    std::vector<EventMessage> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The user ID of the sender.
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_
