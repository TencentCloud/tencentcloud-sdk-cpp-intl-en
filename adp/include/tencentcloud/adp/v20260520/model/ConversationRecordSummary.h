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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordTimeUsage.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordTokenUsage.h>
#include <tencentcloud/adp/v20260520/model/ConversationRecordErrorInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Statistical information of a single dialogue history
                */
                class ConversationRecordSummary : public AbstractModel
                {
                public:
                    ConversationRecordSummary();
                    ~ConversationRecordSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Reply record ID, corresponding to the record_id of the reply message in messages</p>
                     * @return RecordId <p>Reply record ID, corresponding to the record_id of the reply message in messages</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Reply record ID, corresponding to the record_id of the reply message in messages</p>
                     * @param _recordId <p>Reply record ID, corresponding to the record_id of the reply message in messages</p>
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
                     * 获取<p>ID of the user's question record, corresponding to the record_id of the user message in messages</p>
                     * @return RelatedRecordId <p>ID of the user's question record, corresponding to the record_id of the user message in messages</p>
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>ID of the user's question record, corresponding to the record_id of the user message in messages</p>
                     * @param _relatedRecordId <p>ID of the user's question record, corresponding to the record_id of the user message in messages</p>
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Duration info of a single dialogue</p>
                     * @return TimeUsage <p>Duration info of a single dialogue</p>
                     * 
                     */
                    ConversationRecordTimeUsage GetTimeUsage() const;

                    /**
                     * 设置<p>Duration info of a single dialogue</p>
                     * @param _timeUsage <p>Duration info of a single dialogue</p>
                     * 
                     */
                    void SetTimeUsage(const ConversationRecordTimeUsage& _timeUsage);

                    /**
                     * 判断参数 TimeUsage 是否已赋值
                     * @return TimeUsage 是否已赋值
                     * 
                     */
                    bool TimeUsageHasBeenSet() const;

                    /**
                     * 获取<p>token consumption information of a single dialogue</p>
                     * @return TokenUsage <p>token consumption information of a single dialogue</p>
                     * 
                     */
                    ConversationRecordTokenUsage GetTokenUsage() const;

                    /**
                     * 设置<p>token consumption information of a single dialogue</p>
                     * @param _tokenUsage <p>token consumption information of a single dialogue</p>
                     * 
                     */
                    void SetTokenUsage(const ConversationRecordTokenUsage& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                    /**
                     * 获取<p>Description of a single dialogue failure; empty if successful</p>
                     * @return ErrorInfo <p>Description of a single dialogue failure; empty if successful</p>
                     * 
                     */
                    ConversationRecordErrorInfo GetErrorInfo() const;

                    /**
                     * 设置<p>Description of a single dialogue failure; empty if successful</p>
                     * @param _errorInfo <p>Description of a single dialogue failure; empty if successful</p>
                     * 
                     */
                    void SetErrorInfo(const ConversationRecordErrorInfo& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>Status of a single employee assistant dialogue.</p><p>Enumeration values: </p><ul><li>pending: Pending, </li><li>processing: Processing, </li><li>success: Success, </li><li>failed: Failure, </li><li>stop: Stopped.</li></ul>
                     * @return Status <p>Status of a single employee assistant dialogue.</p><p>Enumeration values: </p><ul><li>pending: Pending, </li><li>processing: Processing, </li><li>success: Success, </li><li>failed: Failure, </li><li>stop: Stopped.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status of a single employee assistant dialogue.</p><p>Enumeration values: </p><ul><li>pending: Pending, </li><li>processing: Processing, </li><li>success: Success, </li><li>failed: Failure, </li><li>stop: Stopped.</li></ul>
                     * @param _status <p>Status of a single employee assistant dialogue.</p><p>Enumeration values: </p><ul><li>pending: Pending, </li><li>processing: Processing, </li><li>success: Success, </li><li>failed: Failure, </li><li>stop: Stopped.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Reply record ID, corresponding to the record_id of the reply message in messages</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>ID of the user's question record, corresponding to the record_id of the user message in messages</p>
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>Duration info of a single dialogue</p>
                     */
                    ConversationRecordTimeUsage m_timeUsage;
                    bool m_timeUsageHasBeenSet;

                    /**
                     * <p>token consumption information of a single dialogue</p>
                     */
                    ConversationRecordTokenUsage m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                    /**
                     * <p>Description of a single dialogue failure; empty if successful</p>
                     */
                    ConversationRecordErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>Status of a single employee assistant dialogue.</p><p>Enumeration values: </p><ul><li>pending: Pending, </li><li>processing: Processing, </li><li>success: Success, </li><li>failed: Failure, </li><li>stop: Stopped.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDSUMMARY_H_
