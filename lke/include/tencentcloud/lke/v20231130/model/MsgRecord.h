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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgRecordReference.h>
#include <tencentcloud/lke/v20231130/model/TokenStat.h>
#include <tencentcloud/lke/v20231130/model/TaskFlowInfo.h>
#include <tencentcloud/lke/v20231130/model/FileInfo.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentThought.h>
#include <tencentcloud/lke/v20231130/model/ExtraInfo.h>
#include <tencentcloud/lke/v20231130/model/WorkflowInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Message details.
                */
                class MsgRecord : public AbstractModel
                {
                public:
                    MsgRecord();
                    ~MsgRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content.
                     * @return Content Content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content.
                     * @param _content Content.
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
                     * 获取The Session ID corresponding to the current record.
                     * @return SessionId The Session ID corresponding to the current record.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The Session ID corresponding to the current record.
                     * @param _sessionId The Session ID corresponding to the current record.
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
                     * 获取Record ID.
                     * @return RecordId Record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID.
                     * @param _recordId Record ID.
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
                     * 获取Associated record ID.
                     * @return RelatedRecordId Associated record ID.
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置Associated record ID.
                     * @param _relatedRecordId Associated record ID.
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
                     * 获取Whether it is from oneself.
                     * @return IsFromSelf Whether it is from oneself.
                     * 
                     */
                    bool GetIsFromSelf() const;

                    /**
                     * 设置Whether it is from oneself.
                     * @param _isFromSelf Whether it is from oneself.
                     * 
                     */
                    void SetIsFromSelf(const bool& _isFromSelf);

                    /**
                     * 判断参数 IsFromSelf 是否已赋值
                     * @return IsFromSelf 是否已赋值
                     * 
                     */
                    bool IsFromSelfHasBeenSet() const;

                    /**
                     * 获取Sender name.
                     * @return FromName Sender name.
                     * 
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置Sender name.
                     * @param _fromName Sender name.
                     * 
                     */
                    void SetFromName(const std::string& _fromName);

                    /**
                     * 判断参数 FromName 是否已赋值
                     * @return FromName 是否已赋值
                     * 
                     */
                    bool FromNameHasBeenSet() const;

                    /**
                     * 获取Avatar of the sender.
                     * @return FromAvatar Avatar of the sender.
                     * 
                     */
                    std::string GetFromAvatar() const;

                    /**
                     * 设置Avatar of the sender.
                     * @param _fromAvatar Avatar of the sender.
                     * 
                     */
                    void SetFromAvatar(const std::string& _fromAvatar);

                    /**
                     * 判断参数 FromAvatar 是否已赋值
                     * @return FromAvatar 是否已赋值
                     * 
                     */
                    bool FromAvatarHasBeenSet() const;

                    /**
                     * 获取Timestamp.
                     * @return Timestamp Timestamp.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Timestamp.
                     * @param _timestamp Timestamp.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Whether it is read.
                     * @return HasRead Whether it is read.
                     * 
                     */
                    bool GetHasRead() const;

                    /**
                     * 设置Whether it is read.
                     * @param _hasRead Whether it is read.
                     * 
                     */
                    void SetHasRead(const bool& _hasRead);

                    /**
                     * 判断参数 HasRead 是否已赋值
                     * @return HasRead 是否已赋值
                     * 
                     */
                    bool HasReadHasBeenSet() const;

                    /**
                     * 获取Evaluation.
                     * @return Score Evaluation.
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置Evaluation.
                     * @param _score Evaluation.
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
                     * 获取Whether to rate.
                     * @return CanRating Whether to rate.
                     * 
                     */
                    bool GetCanRating() const;

                    /**
                     * 设置Whether to rate.
                     * @param _canRating Whether to rate.
                     * 
                     */
                    void SetCanRating(const bool& _canRating);

                    /**
                     * 判断参数 CanRating 是否已赋值
                     * @return CanRating 是否已赋值
                     * 
                     */
                    bool CanRatingHasBeenSet() const;

                    /**
                     * 获取Whether to display the feedback button.
                     * @return CanFeedback Whether to display the feedback button.
                     * 
                     */
                    bool GetCanFeedback() const;

                    /**
                     * 设置Whether to display the feedback button.
                     * @param _canFeedback Whether to display the feedback button.
                     * 
                     */
                    void SetCanFeedback(const bool& _canFeedback);

                    /**
                     * 判断参数 CanFeedback 是否已赋值
                     * @return CanFeedback 是否已赋值
                     * 
                     */
                    bool CanFeedbackHasBeenSet() const;

                    /**
                     * 获取Record type.
                     * @return Type Record type.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Record type.
                     * @param _type Record type.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Reference source.
                     * @return References Reference source.
                     * 
                     */
                    std::vector<MsgRecordReference> GetReferences() const;

                    /**
                     * 设置Reference source.
                     * @param _references Reference source.
                     * 
                     */
                    void SetReferences(const std::vector<MsgRecordReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Reason for evaluation.
                     * @return Reasons Reason for evaluation.
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置Reason for evaluation.
                     * @param _reasons Reason for evaluation.
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                    /**
                     * 获取Whether it is a large model.
                     * @return IsLlmGenerated Whether it is a large model.
                     * 
                     */
                    bool GetIsLlmGenerated() const;

                    /**
                     * 设置Whether it is a large model.
                     * @param _isLlmGenerated Whether it is a large model.
                     * 
                     */
                    void SetIsLlmGenerated(const bool& _isLlmGenerated);

                    /**
                     * 判断参数 IsLlmGenerated 是否已赋值
                     * @return IsLlmGenerated 是否已赋值
                     * 
                     */
                    bool IsLlmGeneratedHasBeenSet() const;

                    /**
                     * 获取Image URL, which can be public read.
                     * @return ImageUrls Image URL, which can be public read.
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置Image URL, which can be public read.
                     * @param _imageUrls Image URL, which can be public read.
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取Statistical information of the current token.
                     * @return TokenStat Statistical information of the current token.
                     * 
                     */
                    TokenStat GetTokenStat() const;

                    /**
                     * 设置Statistical information of the current token.
                     * @param _tokenStat Statistical information of the current token.
                     * 
                     */
                    void SetTokenStat(const TokenStat& _tokenStat);

                    /**
                     * 判断参数 TokenStat 是否已赋值
                     * @return TokenStat 是否已赋值
                     * 
                     */
                    bool TokenStatHasBeenSet() const;

                    /**
                     * 获取Response method.
1: Large model directly replies.
2: Conservative reply, reply to unknown questions.
3: Reply to rejected question.
4: Sensitive response.
5: Directly reply to Q&A pairs. Priority will be given to answering the adopted Q&A pairs.
6: Reply with welcome words.
7: Reply for concurrency limit exceeded.
8: Global intervention knowledge.
9: Reply during the task flow process. When task_flow.type = 0 in history, it is a response from the large model.
10: Reply with task flow answer.
11: Reply from the search engine.
12: Reply after knowledge polishing.
13: Reply with image understanding.
14: Reply based on real-time document.
                     * @return ReplyMethod Response method.
1: Large model directly replies.
2: Conservative reply, reply to unknown questions.
3: Reply to rejected question.
4: Sensitive response.
5: Directly reply to Q&A pairs. Priority will be given to answering the adopted Q&A pairs.
6: Reply with welcome words.
7: Reply for concurrency limit exceeded.
8: Global intervention knowledge.
9: Reply during the task flow process. When task_flow.type = 0 in history, it is a response from the large model.
10: Reply with task flow answer.
11: Reply from the search engine.
12: Reply after knowledge polishing.
13: Reply with image understanding.
14: Reply based on real-time document.
                     * 
                     */
                    uint64_t GetReplyMethod() const;

                    /**
                     * 设置Response method.
1: Large model directly replies.
2: Conservative reply, reply to unknown questions.
3: Reply to rejected question.
4: Sensitive response.
5: Directly reply to Q&A pairs. Priority will be given to answering the adopted Q&A pairs.
6: Reply with welcome words.
7: Reply for concurrency limit exceeded.
8: Global intervention knowledge.
9: Reply during the task flow process. When task_flow.type = 0 in history, it is a response from the large model.
10: Reply with task flow answer.
11: Reply from the search engine.
12: Reply after knowledge polishing.
13: Reply with image understanding.
14: Reply based on real-time document.
                     * @param _replyMethod Response method.
1: Large model directly replies.
2: Conservative reply, reply to unknown questions.
3: Reply to rejected question.
4: Sensitive response.
5: Directly reply to Q&A pairs. Priority will be given to answering the adopted Q&A pairs.
6: Reply with welcome words.
7: Reply for concurrency limit exceeded.
8: Global intervention knowledge.
9: Reply during the task flow process. When task_flow.type = 0 in history, it is a response from the large model.
10: Reply with task flow answer.
11: Reply from the search engine.
12: Reply after knowledge polishing.
13: Reply with image understanding.
14: Reply based on real-time document.
                     * 
                     */
                    void SetReplyMethod(const uint64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                    /**
                     * 获取Option tab, used for multi-round dialogue.
                     * @return OptionCards Option tab, used for multi-round dialogue.
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置Option tab, used for multi-round dialogue.
                     * @param _optionCards Option tab, used for multi-round dialogue.
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取Task information.
                     * @return TaskFlow Task information.
                     * 
                     */
                    TaskFlowInfo GetTaskFlow() const;

                    /**
                     * 设置Task information.
                     * @param _taskFlow Task information.
                     * 
                     */
                    void SetTaskFlow(const TaskFlowInfo& _taskFlow);

                    /**
                     * 判断参数 TaskFlow 是否已赋值
                     * @return TaskFlow 是否已赋值
                     * 
                     */
                    bool TaskFlowHasBeenSet() const;

                    /**
                     * 获取File information passed in by the user.
                     * @return FileInfos File information passed in by the user.
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置File information passed in by the user.
                     * @param _fileInfos File information passed in by the user.
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取Location information of reference source .
                     * @return QuoteInfos Location information of reference source .
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置Location information of reference source .
                     * @param _quoteInfos Location information of reference source .
                     * 
                     */
                    void SetQuoteInfos(const std::vector<QuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取Information on the thinking process of the agent.
                     * @return AgentThought Information on the thinking process of the agent.
                     * 
                     */
                    AgentThought GetAgentThought() const;

                    /**
                     * 设置Information on the thinking process of the agent.
                     * @param _agentThought Information on the thinking process of the agent.
                     * 
                     */
                    void SetAgentThought(const AgentThought& _agentThought);

                    /**
                     * 判断参数 AgentThought 是否已赋值
                     * @return AgentThought 是否已赋值
                     * 
                     */
                    bool AgentThoughtHasBeenSet() const;

                    /**
                     * 获取Expanded information.
                     * @return ExtraInfo Expanded information.
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置Expanded information.
                     * @param _extraInfo Expanded information.
                     * 
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Workflow information.
                     * @return WorkFlow Workflow information.
                     * 
                     */
                    WorkflowInfo GetWorkFlow() const;

                    /**
                     * 设置Workflow information.
                     * @param _workFlow Workflow information.
                     * 
                     */
                    void SetWorkFlow(const WorkflowInfo& _workFlow);

                    /**
                     * 判断参数 WorkFlow 是否已赋值
                     * @return WorkFlow 是否已赋值
                     * 
                     */
                    bool WorkFlowHasBeenSet() const;

                private:

                    /**
                     * Content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The Session ID corresponding to the current record.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Associated record ID.
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * Whether it is from oneself.
                     */
                    bool m_isFromSelf;
                    bool m_isFromSelfHasBeenSet;

                    /**
                     * Sender name.
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * Avatar of the sender.
                     */
                    std::string m_fromAvatar;
                    bool m_fromAvatarHasBeenSet;

                    /**
                     * Timestamp.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Whether it is read.
                     */
                    bool m_hasRead;
                    bool m_hasReadHasBeenSet;

                    /**
                     * Evaluation.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Whether to rate.
                     */
                    bool m_canRating;
                    bool m_canRatingHasBeenSet;

                    /**
                     * Whether to display the feedback button.
                     */
                    bool m_canFeedback;
                    bool m_canFeedbackHasBeenSet;

                    /**
                     * Record type.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Reference source.
                     */
                    std::vector<MsgRecordReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Reason for evaluation.
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * Whether it is a large model.
                     */
                    bool m_isLlmGenerated;
                    bool m_isLlmGeneratedHasBeenSet;

                    /**
                     * Image URL, which can be public read.
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * Statistical information of the current token.
                     */
                    TokenStat m_tokenStat;
                    bool m_tokenStatHasBeenSet;

                    /**
                     * Response method.
1: Large model directly replies.
2: Conservative reply, reply to unknown questions.
3: Reply to rejected question.
4: Sensitive response.
5: Directly reply to Q&A pairs. Priority will be given to answering the adopted Q&A pairs.
6: Reply with welcome words.
7: Reply for concurrency limit exceeded.
8: Global intervention knowledge.
9: Reply during the task flow process. When task_flow.type = 0 in history, it is a response from the large model.
10: Reply with task flow answer.
11: Reply from the search engine.
12: Reply after knowledge polishing.
13: Reply with image understanding.
14: Reply based on real-time document.
                     */
                    uint64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * Option tab, used for multi-round dialogue.
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * Task information.
                     */
                    TaskFlowInfo m_taskFlow;
                    bool m_taskFlowHasBeenSet;

                    /**
                     * File information passed in by the user.
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Location information of reference source .
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * Information on the thinking process of the agent.
                     */
                    AgentThought m_agentThought;
                    bool m_agentThoughtHasBeenSet;

                    /**
                     * Expanded information.
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Workflow information.
                     */
                    WorkflowInfo m_workFlow;
                    bool m_workFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORD_H_
