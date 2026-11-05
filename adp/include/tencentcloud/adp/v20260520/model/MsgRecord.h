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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordResult.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordSource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecord
                */
                class MsgRecord : public AbstractModel
                {
                public:
                    MsgRecord();
                    ~MsgRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Answer.
                     * @return Answer Answer.
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置Answer.
                     * @param _answer Answer.
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Category ID
                     * @return CategoryId Category ID
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置Category ID
                     * @param _categoryId Category ID
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Intent.
                     * @return Intent Intent.
                     * 
                     */
                    std::string GetIntent() const;

                    /**
                     * 设置Intent.
                     * @param _intent Intent.
                     * 
                     */
                    void SetIntent(const std::string& _intent);

                    /**
                     * 判断参数 Intent 是否已赋值
                     * @return Intent 是否已赋值
                     * 
                     */
                    bool IntentHasBeenSet() const;

                    /**
                     * 获取Intent category
                     * @return IntentCategory Intent category
                     * 
                     */
                    std::string GetIntentCategory() const;

                    /**
                     * 设置Intent category
                     * @param _intentCategory Intent category
                     * 
                     */
                    void SetIntentCategory(const std::string& _intentCategory);

                    /**
                     * 判断参数 IntentCategory 是否已赋值
                     * @return IntentCategory 是否已赋值
                     * 
                     */
                    bool IntentCategoryHasBeenSet() const;

                    /**
                     * 获取Whether it is intelligent categorization
                     * @return IsSmart Whether it is intelligent categorization
                     * 
                     */
                    bool GetIsSmart() const;

                    /**
                     * 设置Whether it is intelligent categorization
                     * @param _isSmart Whether it is intelligent categorization
                     * 
                     */
                    void SetIsSmart(const bool& _isSmart);

                    /**
                     * 判断参数 IsSmart 是否已赋值
                     * @return IsSmart 是否已赋值
                     * 
                     */
                    bool IsSmartHasBeenSet() const;

                    /**
                     * 获取Issue
                     * @return Question Issue
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Issue
                     * @param _question Issue
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取Record ID
                     * @return RecordId Record ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID
                     * @param _recordId Record ID
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
                     * 获取method. Enumerates ReplyMethod: 0=not specified, 1=direct reply by large model, 2=conservative reply, 3=refuse to answer, 4=sensitive reply, 5=Q&A pair prioritized reply, 6=welcome message, 7=concurrency limit exceeded, 8=global intervention knowledge, 9=task flow process reply, 10=task flow answer, 11=search engine, 12=knowledge polish, 13=image understanding, 14=real-time document, 15=clarification confirmation, 16=workflow reply, 17=workflow completion, 18=Intelligent Agent reply, 19=multiple intents, 20=interruption, 21=Intelligent Agent plan preview, 22=Intelligent Agent plan result, 23=Intelligent Agent structured output.
                     * @return ReplyMethod method. Enumerates ReplyMethod: 0=not specified, 1=direct reply by large model, 2=conservative reply, 3=refuse to answer, 4=sensitive reply, 5=Q&A pair prioritized reply, 6=welcome message, 7=concurrency limit exceeded, 8=global intervention knowledge, 9=task flow process reply, 10=task flow answer, 11=search engine, 12=knowledge polish, 13=image understanding, 14=real-time document, 15=clarification confirmation, 16=workflow reply, 17=workflow completion, 18=Intelligent Agent reply, 19=multiple intents, 20=interruption, 21=Intelligent Agent plan preview, 22=Intelligent Agent plan result, 23=Intelligent Agent structured output.
                     * 
                     */
                    int64_t GetReplyMethod() const;

                    /**
                     * 设置method. Enumerates ReplyMethod: 0=not specified, 1=direct reply by large model, 2=conservative reply, 3=refuse to answer, 4=sensitive reply, 5=Q&A pair prioritized reply, 6=welcome message, 7=concurrency limit exceeded, 8=global intervention knowledge, 9=task flow process reply, 10=task flow answer, 11=search engine, 12=knowledge polish, 13=image understanding, 14=real-time document, 15=clarification confirmation, 16=workflow reply, 17=workflow completion, 18=Intelligent Agent reply, 19=multiple intents, 20=interruption, 21=Intelligent Agent plan preview, 22=Intelligent Agent plan result, 23=Intelligent Agent structured output.
                     * @param _replyMethod method. Enumerates ReplyMethod: 0=not specified, 1=direct reply by large model, 2=conservative reply, 3=refuse to answer, 4=sensitive reply, 5=Q&A pair prioritized reply, 6=welcome message, 7=concurrency limit exceeded, 8=global intervention knowledge, 9=task flow process reply, 10=task flow answer, 11=search engine, 12=knowledge polish, 13=image understanding, 14=real-time document, 15=clarification confirmation, 16=workflow reply, 17=workflow completion, 18=Intelligent Agent reply, 19=multiple intents, 20=interruption, 21=Intelligent Agent plan preview, 22=Intelligent Agent plan result, 23=Intelligent Agent structured output.
                     * 
                     */
                    void SetReplyMethod(const int64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                    /**
                     * 获取Returned result
                     * @return Result Returned result
                     * 
                     */
                    MsgRecordResult GetResult() const;

                    /**
                     * 设置Returned result
                     * @param _result Returned result
                     * 
                     */
                    void SetResult(const MsgRecordResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Score
                     * @return Score Score
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置Score
                     * @param _score Score
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Session ID
                     * @return SessionId Session ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID
                     * @param _sessionId Session ID
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
                     * 获取Source.
                     * @return Source Source.
                     * 
                     */
                    MsgRecordSource GetSource() const;

                    /**
                     * 设置Source.
                     * @param _source Source.
                     * 
                     */
                    void SetSource(const MsgRecordSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取trace_id
                     * @return TraceId trace_id
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置trace_id
                     * @param _traceId trace_id
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * Answer.
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Category ID
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Intent.
                     */
                    std::string m_intent;
                    bool m_intentHasBeenSet;

                    /**
                     * Intent category
                     */
                    std::string m_intentCategory;
                    bool m_intentCategoryHasBeenSet;

                    /**
                     * Whether it is intelligent categorization
                     */
                    bool m_isSmart;
                    bool m_isSmartHasBeenSet;

                    /**
                     * Issue
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Record ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * method. Enumerates ReplyMethod: 0=not specified, 1=direct reply by large model, 2=conservative reply, 3=refuse to answer, 4=sensitive reply, 5=Q&A pair prioritized reply, 6=welcome message, 7=concurrency limit exceeded, 8=global intervention knowledge, 9=task flow process reply, 10=task flow answer, 11=search engine, 12=knowledge polish, 13=image understanding, 14=real-time document, 15=clarification confirmation, 16=workflow reply, 17=workflow completion, 18=Intelligent Agent reply, 19=multiple intents, 20=interruption, 21=Intelligent Agent plan preview, 22=Intelligent Agent plan result, 23=Intelligent Agent structured output.
                     */
                    int64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * Returned result
                     */
                    MsgRecordResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Score
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Session ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source.
                     */
                    MsgRecordSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * trace_id
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORD_H_
