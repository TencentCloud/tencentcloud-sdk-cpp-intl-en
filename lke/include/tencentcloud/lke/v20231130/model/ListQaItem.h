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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Q&A details data.
                */
                class ListQaItem : public AbstractModel
                {
                public:
                    ListQaItem();
                    ~ListQaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Q&A ID.
                     * @return QaBizId Q&A ID.
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置Q&A ID.
                     * @param _qaBizId Q&A ID.
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取Question.
                     * @return Question Question.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Question.
                     * @param _question Question.
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
                     * 获取Source.
                     * @return Source Source.
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置Source.
                     * @param _source Source.
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Source description.
                     * @return SourceDesc Source description.
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置Source description.
                     * @param _sourceDesc Source description.
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _statusDesc Status description.
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
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizId Document ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

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
                     * 获取Whether editing is allowed.
                     * @return IsAllowEdit Whether editing is allowed.
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置Whether editing is allowed.
                     * @param _isAllowEdit Whether editing is allowed.
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取Whether deletion is allowed.
                     * @return IsAllowDelete Whether deletion is allowed.
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置Whether deletion is allowed.
                     * @param _isAllowDelete Whether deletion is allowed.
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取Whether verification is allowed.
                     * @return IsAllowAccept Whether verification is allowed.
                     * 
                     */
                    bool GetIsAllowAccept() const;

                    /**
                     * 设置Whether verification is allowed.
                     * @param _isAllowAccept Whether verification is allowed.
                     * 
                     */
                    void SetIsAllowAccept(const bool& _isAllowAccept);

                    /**
                     * 判断参数 IsAllowAccept 是否已赋值
                     * @return IsAllowAccept 是否已赋值
                     * 
                     */
                    bool IsAllowAcceptHasBeenSet() const;

                    /**
                     * 获取Document name.
                     * @return FileName Document name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Document name.
                     * @param _fileName Document name.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Document type.
                     * @return FileType Document type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Document type.
                     * @param _fileType Document type.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Number of Q&A characters.
                     * @return QaCharSize Number of Q&A characters.
                     * 
                     */
                    std::string GetQaCharSize() const;

                    /**
                     * 设置Number of Q&A characters.
                     * @param _qaCharSize Number of Q&A characters.
                     * 
                     */
                    void SetQaCharSize(const std::string& _qaCharSize);

                    /**
                     * 判断参数 QaCharSize 是否已赋值
                     * @return QaCharSize 是否已赋值
                     * 
                     */
                    bool QaCharSizeHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置Effective start time, unix timestamp.
                     * @param _expireStart Effective start time, unix timestamp.
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @return ExpireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @param _expireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Applicable range of attribute label, 1: all, 2: by conditions.
                     * @return AttrRange Applicable range of attribute label, 1: all, 2: by conditions.
                     * 
                     */
                    int64_t GetAttrRange() const;

                    /**
                     * 设置Applicable range of attribute label, 1: all, 2: by conditions.
                     * @param _attrRange Applicable range of attribute label, 1: all, 2: by conditions.
                     * 
                     */
                    void SetAttrRange(const int64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Attribute label.
                     * @return AttrLabels Attribute label.
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 设置Attribute label.
                     * @param _attrLabels Attribute label.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabel>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Count of similar questions.
                     * @return SimilarQuestionNum Count of similar questions.
                     * 
                     */
                    uint64_t GetSimilarQuestionNum() const;

                    /**
                     * 设置Count of similar questions.
                     * @param _similarQuestionNum Count of similar questions.
                     * 
                     */
                    void SetSimilarQuestionNum(const uint64_t& _similarQuestionNum);

                    /**
                     * 判断参数 SimilarQuestionNum 是否已赋值
                     * @return SimilarQuestionNum 是否已赋值
                     * 
                     */
                    bool SimilarQuestionNumHasBeenSet() const;

                    /**
                     * 获取Return similar questions associated with the Q&A and perform linked search. Only one similar question will be displayed.
                     * @return SimilarQuestionTips Return similar questions associated with the Q&A and perform linked search. Only one similar question will be displayed.
                     * 
                     */
                    std::string GetSimilarQuestionTips() const;

                    /**
                     * 设置Return similar questions associated with the Q&A and perform linked search. Only one similar question will be displayed.
                     * @param _similarQuestionTips Return similar questions associated with the Q&A and perform linked search. Only one similar question will be displayed.
                     * 
                     */
                    void SetSimilarQuestionTips(const std::string& _similarQuestionTips);

                    /**
                     * 判断参数 SimilarQuestionTips 是否已赋值
                     * @return SimilarQuestionTips 是否已赋值
                     * 
                     */
                    bool SimilarQuestionTipsHasBeenSet() const;

                private:

                    /**
                     * Q&A ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Question.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Answer.
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * Source.
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Source description.
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether editing is allowed.
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * Whether deletion is allowed.
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * Whether verification is allowed.
                     */
                    bool m_isAllowAccept;
                    bool m_isAllowAcceptHasBeenSet;

                    /**
                     * Document name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Document type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Number of Q&A characters.
                     */
                    std::string m_qaCharSize;
                    bool m_qaCharSizeHasBeenSet;

                    /**
                     * Effective start time, unix timestamp.
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * Effective end time, unix timestamp. 0 indicates permanent validity.
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * Applicable range of attribute label, 1: all, 2: by conditions.
                     */
                    int64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Attribute label.
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * Count of similar questions.
                     */
                    uint64_t m_similarQuestionNum;
                    bool m_similarQuestionNumHasBeenSet;

                    /**
                     * Return similar questions associated with the Q&A and perform linked search. Only one similar question will be displayed.
                     */
                    std::string m_similarQuestionTips;
                    bool m_similarQuestionTipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_
