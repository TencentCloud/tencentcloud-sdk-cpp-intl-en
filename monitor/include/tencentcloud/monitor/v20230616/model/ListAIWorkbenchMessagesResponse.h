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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/MessageInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchMessages response structure.
                */
                class ListAIWorkbenchMessagesResponse : public AbstractModel
                {
                public:
                    ListAIWorkbenchMessagesResponse();
                    ~ListAIWorkbenchMessagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Message list.</p>
                     * @return Messages <p>Message list.</p>
                     * 
                     */
                    std::vector<MessageInfo> GetMessages() const;

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>Next cursor</p>
                     * @return NextCursor <p>Next cursor</p>
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取<p>Is there a follow-up?</p>
                     * @return HasMore <p>Is there a follow-up?</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                private:

                    /**
                     * <p>Message list.</p>
                     */
                    std::vector<MessageInfo> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>Next cursor</p>
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * <p>Is there a follow-up?</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESRESPONSE_H_
