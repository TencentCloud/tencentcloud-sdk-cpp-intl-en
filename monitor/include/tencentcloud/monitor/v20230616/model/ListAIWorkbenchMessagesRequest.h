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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchMessages request structure.
                */
                class ListAIWorkbenchMessagesRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchMessagesRequest();
                    ~ListAIWorkbenchMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Conversation ID</p>
                     * @return SessionId <p>Conversation ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Conversation ID</p>
                     * @param _sessionId <p>Conversation ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag for cursor pagination</p>
                     * @return Cursor <p>Tag for cursor pagination</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>Tag for cursor pagination</p>
                     * @param _cursor <p>Tag for cursor pagination</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>Window size</p>
                     * @return Limit <p>Window size</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Window size</p>
                     * @param _limit <p>Window size</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Pull sequence</p>
                     * @return Direction <p>Pull sequence</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>Pull sequence</p>
                     * @param _direction <p>Pull sequence</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>Conversation ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Tag for cursor pagination</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>Window size</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pull sequence</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHMESSAGESREQUEST_H_
