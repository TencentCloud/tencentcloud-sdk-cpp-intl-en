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
                * List of SDK or WebRTC events.
                */
                class EventList : public AbstractModel
                {
                public:
                    EventList();
                    ~EventList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data content
                     * @return Content Data content
                     */
                    std::vector<EventMessage> GetContent() const;

                    /**
                     * 设置Data content
                     * @param Content Data content
                     */
                    void SetContent(const std::vector<EventMessage>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Sender `userId`
                     * @return PeerId Sender `userId`
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置Sender `userId`
                     * @param PeerId Sender `userId`
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     */
                    bool PeerIdHasBeenSet() const;

                private:

                    /**
                     * Data content
                     */
                    std::vector<EventMessage> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Sender `userId`
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTLIST_H_
