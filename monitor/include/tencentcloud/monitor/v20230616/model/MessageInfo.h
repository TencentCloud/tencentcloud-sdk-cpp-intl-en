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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ContentBlockInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Message entity
                */
                class MessageInfo : public AbstractModel
                {
                public:
                    MessageInfo();
                    ~MessageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Entity id</p>
                     * @return EntryId <p>Entity id</p>
                     * 
                     */
                    std::string GetEntryId() const;

                    /**
                     * 设置<p>Entity id</p>
                     * @param _entryId <p>Entity id</p>
                     * 
                     */
                    void SetEntryId(const std::string& _entryId);

                    /**
                     * 判断参数 EntryId 是否已赋值
                     * @return EntryId 是否已赋值
                     * 
                     */
                    bool EntryIdHasBeenSet() const;

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
                     * 获取<p>Role: user / assistant</p>
                     * @return Role <p>Role: user / assistant</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>Role: user / assistant</p>
                     * @param _role <p>Role: user / assistant</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>Message content</p>
                     * @return Content <p>Message content</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Message content</p>
                     * @param _content <p>Message content</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return Status <p>Status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _status <p>Status.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Block content.</p>
                     * @return ContentBlocks <p>Block content.</p>
                     * 
                     */
                    std::vector<ContentBlockInfo> GetContentBlocks() const;

                    /**
                     * 设置<p>Block content.</p>
                     * @param _contentBlocks <p>Block content.</p>
                     * 
                     */
                    void SetContentBlocks(const std::vector<ContentBlockInfo>& _contentBlocks);

                    /**
                     * 判断参数 ContentBlocks 是否已赋值
                     * @return ContentBlocks 是否已赋值
                     * 
                     */
                    bool ContentBlocksHasBeenSet() const;

                private:

                    /**
                     * <p>Entity id</p>
                     */
                    std::string m_entryId;
                    bool m_entryIdHasBeenSet;

                    /**
                     * <p>Conversation ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Role: user / assistant</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Message content</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Block content.</p>
                     */
                    std::vector<ContentBlockInfo> m_contentBlocks;
                    bool m_contentBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_
