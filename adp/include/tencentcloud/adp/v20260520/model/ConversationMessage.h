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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationContent.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Message information
                */
                class ConversationMessage : public AbstractModel
                {
                public:
                    ConversationMessage();
                    ~ConversationMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Session ID.</p>
                     * @return ConversationId <p>Session ID.</p>
                     * 
                     */
                    std::string GetConversationId() const;

                    /**
                     * 设置<p>Session ID.</p>
                     * @param _conversationId <p>Session ID.</p>
                     * 
                     */
                    void SetConversationId(const std::string& _conversationId);

                    /**
                     * 判断参数 ConversationId 是否已赋值
                     * @return ConversationId 是否已赋值
                     * 
                     */
                    bool ConversationIdHasBeenSet() const;

                    /**
                     * 获取<p>Message icon</p>
                     * @return Icon <p>Message icon</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>Message icon</p>
                     * @param _icon <p>Message icon</p>
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取<p>Message ID</p>
                     * @return MessageId <p>Message ID</p>
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置<p>Message ID</p>
                     * @param _messageId <p>Message ID</p>
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取<p>Message name</p>
                     * @return Name <p>Message name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Message name</p>
                     * @param _name <p>Message name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Record ID</p>
                     * @return RecordId <p>Record ID</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID</p>
                     * @param _recordId <p>Record ID</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Message role</p>
                     * @return Role <p>Message role</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>Message role</p>
                     * @param _role <p>Message role</p>
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
                     * 获取<p>Message status. pending: pending execution, processing: in processing, success: completed, failed: processing failure, stop: canceled</p>
                     * @return Status <p>Message status. pending: pending execution, processing: in processing, success: completed, failed: processing failure, stop: canceled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Message status. pending: pending execution, processing: in processing, success: completed, failed: processing failure, stop: canceled</p>
                     * @param _status <p>Message status. pending: pending execution, processing: in processing, success: completed, failed: processing failure, stop: canceled</p>
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
                     * 获取<p>Status description</p>
                     * @return StatusDesc <p>Status description</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description</p>
                     * @param _statusDesc <p>Status description</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>Message title</p>
                     * @return Title <p>Message title</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>Message title</p>
                     * @param _title <p>Message title</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>List of message contents</p>
                     * @return ContentList <p>List of message contents</p>
                     * 
                     */
                    std::vector<ConversationContent> GetContentList() const;

                    /**
                     * 设置<p>List of message contents</p>
                     * @param _contentList <p>List of message contents</p>
                     * 
                     */
                    void SetContentList(const std::vector<ConversationContent>& _contentList);

                    /**
                     * 判断参数 ContentList 是否已赋值
                     * @return ContentList 是否已赋值
                     * 
                     */
                    bool ContentListHasBeenSet() const;

                    /**
                     * 获取<p>Message content list</p>
                     * @return Contents <p>Message content list</p>
                     * 
                     */
                    std::vector<ConversationContent> GetContents() const;

                    /**
                     * 设置<p>Message content list</p>
                     * @param _contents <p>Message content list</p>
                     * 
                     */
                    void SetContents(const std::vector<ConversationContent>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>Type.</p>
                     * @return Type <p>Type.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Type.</p>
                     * @param _type <p>Type.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Session ID.</p>
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * <p>Message icon</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>Message ID</p>
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>Message name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Record ID</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>Message role</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Message status. pending: pending execution, processing: in processing, success: completed, failed: processing failure, stop: canceled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Message title</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>List of message contents</p>
                     */
                    std::vector<ConversationContent> m_contentList;
                    bool m_contentListHasBeenSet;

                    /**
                     * <p>Message content list</p>
                     */
                    std::vector<ConversationContent> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>Type.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_
