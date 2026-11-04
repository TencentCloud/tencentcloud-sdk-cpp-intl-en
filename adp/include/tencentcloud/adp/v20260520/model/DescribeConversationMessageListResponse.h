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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationMessage.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordSummary.h>
#include <tencentcloud/adp/v20260520/model/ConversationResetInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeConversationMessageList response structure.
                */
                class DescribeConversationMessageListResponse : public AbstractModel
                {
                public:
                    DescribeConversationMessageListResponse();
                    ~DescribeConversationMessageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>First record ID</p>
                     * @return FirstRecordId <p>First record ID</p>
                     * 
                     */
                    std::string GetFirstRecordId() const;

                    /**
                     * 判断参数 FirstRecordId 是否已赋值
                     * @return FirstRecordId 是否已赋值
                     * 
                     */
                    bool FirstRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether there are more update message directions</p>
                     * @return HasMoreAfter <p>Whether there are more update message directions</p>
                     * 
                     */
                    bool GetHasMoreAfter() const;

                    /**
                     * 判断参数 HasMoreAfter 是否已赋值
                     * @return HasMoreAfter 是否已赋值
                     * 
                     */
                    bool HasMoreAfterHasBeenSet() const;

                    /**
                     * 获取<p>Earlier message orientation whether there is more</p>
                     * @return HasMoreBefore <p>Earlier message orientation whether there is more</p>
                     * 
                     */
                    bool GetHasMoreBefore() const;

                    /**
                     * 判断参数 HasMoreBefore 是否已赋值
                     * @return HasMoreBefore 是否已赋值
                     * 
                     */
                    bool HasMoreBeforeHasBeenSet() const;

                    /**
                     * 获取<p>Last record ID</p>
                     * @return LastRecordId <p>Last record ID</p>
                     * 
                     */
                    std::string GetLastRecordId() const;

                    /**
                     * 判断参数 LastRecordId 是否已赋值
                     * @return LastRecordId 是否已赋值
                     * 
                     */
                    bool LastRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Message list</p>
                     * @return MessageList <p>Message list</p>
                     * 
                     */
                    std::vector<ConversationMessage> GetMessageList() const;

                    /**
                     * 判断参数 MessageList 是否已赋值
                     * @return MessageList 是否已赋值
                     * 
                     */
                    bool MessageListHasBeenSet() const;

                    /**
                     * 获取<p>Message list</p>
                     * @return Messages <p>Message list</p>
                     * @deprecated
                     */
                    std::vector<ConversationMessage> GetMessages() const;

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * @deprecated
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>Statistics list of records in a single dialogue, associated with message_list via record_id / related_record_id</p>
                     * @return RecordSummaryList <p>Statistics list of records in a single dialogue, associated with message_list via record_id / related_record_id</p>
                     * 
                     */
                    std::vector<ConversationRecordSummary> GetRecordSummaryList() const;

                    /**
                     * 判断参数 RecordSummaryList 是否已赋值
                     * @return RecordSummaryList 是否已赋值
                     * 
                     */
                    bool RecordSummaryListHasBeenSet() const;

                    /**
                     * 获取<p>Last reset information</p>
                     * @return ResetInfo <p>Last reset information</p>
                     * 
                     */
                    ConversationResetInfo GetResetInfo() const;

                    /**
                     * 判断参数 ResetInfo 是否已赋值
                     * @return ResetInfo 是否已赋值
                     * 
                     */
                    bool ResetInfoHasBeenSet() const;

                private:

                    /**
                     * <p>First record ID</p>
                     */
                    std::string m_firstRecordId;
                    bool m_firstRecordIdHasBeenSet;

                    /**
                     * <p>Whether there are more update message directions</p>
                     */
                    bool m_hasMoreAfter;
                    bool m_hasMoreAfterHasBeenSet;

                    /**
                     * <p>Earlier message orientation whether there is more</p>
                     */
                    bool m_hasMoreBefore;
                    bool m_hasMoreBeforeHasBeenSet;

                    /**
                     * <p>Last record ID</p>
                     */
                    std::string m_lastRecordId;
                    bool m_lastRecordIdHasBeenSet;

                    /**
                     * <p>Message list</p>
                     */
                    std::vector<ConversationMessage> m_messageList;
                    bool m_messageListHasBeenSet;

                    /**
                     * <p>Message list</p>
                     */
                    std::vector<ConversationMessage> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>Statistics list of records in a single dialogue, associated with message_list via record_id / related_record_id</p>
                     */
                    std::vector<ConversationRecordSummary> m_recordSummaryList;
                    bool m_recordSummaryListHasBeenSet;

                    /**
                     * <p>Last reset information</p>
                     */
                    ConversationResetInfo m_resetInfo;
                    bool m_resetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_
