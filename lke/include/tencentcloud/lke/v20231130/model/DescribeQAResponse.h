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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Highlight.h>
#include <tencentcloud/lke/v20231130/model/AttrLabel.h>
#include <tencentcloud/lke/v20231130/model/SimilarQuestion.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeQA response structure.
                */
                class DescribeQAResponse : public AbstractModel
                {
                public:
                    DescribeQAResponse();
                    ~DescribeQAResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Q&A business ID.

                     * @return QaBizId Q&A business ID.

                     * 
                     */
                    std::string GetQaBizId() const;

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
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取Custom parameter.
                     * @return CustomParam Custom parameter.
                     * 
                     */
                    std::string GetCustomParam() const;

                    /**
                     * 判断参数 CustomParam 是否已赋值
                     * @return CustomParam 是否已赋值
                     * 
                     */
                    bool CustomParamHasBeenSet() const;

                    /**
                     * 获取Source:
1 - Q&A pairs generated from documents.
2 - Q&A pairs imported in batches.
3 - Q&A pairs input manually one by one.


                     * @return Source Source:
1 - Q&A pairs generated from documents.
2 - Q&A pairs imported in batches.
3 - Q&A pairs input manually one by one.


                     * 
                     */
                    uint64_t GetSource() const;

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
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status<br>1 - pending verification; 2 - not released; 3 - releasing; 4 - released; 5 - release failed; 6 - not approved; 7 - under review; 8 - review failed, 9 - review failed, pending manual review after appeal; 11 - review failed, manual review not passed after appeal; 12 - expired; 13 - excessive invalid; 14 - excessive invalid recovered; 19 - learning; 20 - learning failed.


                     * @return Status Status<br>1 - pending verification; 2 - not released; 3 - releasing; 4 - released; 5 - release failed; 6 - not approved; 7 - under review; 8 - review failed, 9 - review failed, pending manual review after appeal; 11 - review failed, manual review not passed after appeal; 12 - expired; 13 - excessive invalid; 14 - excessive invalid recovered; 19 - learning; 20 - learning failed.


                     * 
                     */
                    int64_t GetStatus() const;

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
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Category ID.

                     * @return CateBizId Category ID.

                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取Whether verification is allowed.

                     * @return IsAllowAccept Whether verification is allowed.

                     * 
                     */
                    bool GetIsAllowAccept() const;

                    /**
                     * 判断参数 IsAllowAccept 是否已赋值
                     * @return IsAllowAccept 是否已赋值
                     * 
                     */
                    bool IsAllowAcceptHasBeenSet() const;

                    /**
                     * 获取Whether deletion is allowed.

                     * @return IsAllowDelete Whether deletion is allowed.

                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取Whether editing is allowed.

                     * @return IsAllowEdit Whether editing is allowed.

                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取Document ID.

                     * @return DocBizId Document ID.

                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取Document name.

                     * @return FileName Document name.

                     * 
                     */
                    std::string GetFileName() const;

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
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Segment ID.

                     * @return SegmentBizId Segment ID.

                     * 
                     */
                    std::string GetSegmentBizId() const;

                    /**
                     * 判断参数 SegmentBizId 是否已赋值
                     * @return SegmentBizId 是否已赋值
                     * 
                     */
                    bool SegmentBizIdHasBeenSet() const;

                    /**
                     * 获取Segment content.
                     * @return PageContent Segment content.
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取Segment highlight content.
                     * @return Highlights Segment highlight content.
                     * 
                     */
                    std::vector<Highlight> GetHighlights() const;

                    /**
                     * 判断参数 Highlights 是否已赋值
                     * @return Highlights 是否已赋值
                     * 
                     */
                    bool HighlightsHasBeenSet() const;

                    /**
                     * 获取Segment content.

                     * @return OrgData Segment content.

                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取Applicable scope of label.
                     * @return AttrRange Applicable scope of label.
                     * 
                     */
                    int64_t GetAttrRange() const;

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取Label.
                     * @return AttrLabels Label.
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

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
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Similar question list information.
                     * @return SimilarQuestions Similar question list information.
                     * 
                     */
                    std::vector<SimilarQuestion> GetSimilarQuestions() const;

                    /**
                     * 判断参数 SimilarQuestions 是否已赋值
                     * @return SimilarQuestions 是否已赋值
                     * 
                     */
                    bool SimilarQuestionsHasBeenSet() const;

                    /**
                     * 获取Review status of Q&A text: 1 - review failed.
                     * @return QaAuditStatus Review status of Q&A text: 1 - review failed.
                     * 
                     */
                    uint64_t GetQaAuditStatus() const;

                    /**
                     * 判断参数 QaAuditStatus 是否已赋值
                     * @return QaAuditStatus 是否已赋值
                     * 
                     */
                    bool QaAuditStatusHasBeenSet() const;

                    /**
                     * 获取Review status of image in Q&A: 1-review failed.
                     * @return PicAuditStatus Review status of image in Q&A: 1-review failed.
                     * 
                     */
                    uint64_t GetPicAuditStatus() const;

                    /**
                     * 判断参数 PicAuditStatus 是否已赋值
                     * @return PicAuditStatus 是否已赋值
                     * 
                     */
                    bool PicAuditStatusHasBeenSet() const;

                    /**
                     * 获取Review status of video in Q&A: 1 - review failed.
                     * @return VideoAuditStatus Review status of video in Q&A: 1 - review failed.
                     * 
                     */
                    uint64_t GetVideoAuditStatus() const;

                    /**
                     * 判断参数 VideoAuditStatus 是否已赋值
                     * @return VideoAuditStatus 是否已赋值
                     * 
                     */
                    bool VideoAuditStatusHasBeenSet() const;

                    /**
                     * 获取Question description.
                     * @return QuestionDesc Question description.
                     * 
                     */
                    std::string GetQuestionDesc() const;

                    /**
                     * 判断参数 QuestionDesc 是否已赋值
                     * @return QuestionDesc 是否已赋值
                     * 
                     */
                    bool QuestionDescHasBeenSet() const;

                private:

                    /**
                     * Q&A business ID.

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
                     * Custom parameter.
                     */
                    std::string m_customParam;
                    bool m_customParamHasBeenSet;

                    /**
                     * Source:
1 - Q&A pairs generated from documents.
2 - Q&A pairs imported in batches.
3 - Q&A pairs input manually one by one.


                     */
                    uint64_t m_source;
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
                     * Status<br>1 - pending verification; 2 - not released; 3 - releasing; 4 - released; 5 - release failed; 6 - not approved; 7 - under review; 8 - review failed, 9 - review failed, pending manual review after appeal; 11 - review failed, manual review not passed after appeal; 12 - expired; 13 - excessive invalid; 14 - excessive invalid recovered; 19 - learning; 20 - learning failed.


                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.


                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Category ID.

                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * Whether verification is allowed.

                     */
                    bool m_isAllowAccept;
                    bool m_isAllowAcceptHasBeenSet;

                    /**
                     * Whether deletion is allowed.

                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * Whether editing is allowed.

                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * Document ID.

                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

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
                     * Segment ID.

                     */
                    std::string m_segmentBizId;
                    bool m_segmentBizIdHasBeenSet;

                    /**
                     * Segment content.
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * Segment highlight content.
                     */
                    std::vector<Highlight> m_highlights;
                    bool m_highlightsHasBeenSet;

                    /**
                     * Segment content.

                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * Applicable scope of label.
                     */
                    int64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * Label.
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

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
                     * Similar question list information.
                     */
                    std::vector<SimilarQuestion> m_similarQuestions;
                    bool m_similarQuestionsHasBeenSet;

                    /**
                     * Review status of Q&A text: 1 - review failed.
                     */
                    uint64_t m_qaAuditStatus;
                    bool m_qaAuditStatusHasBeenSet;

                    /**
                     * Review status of image in Q&A: 1-review failed.
                     */
                    uint64_t m_picAuditStatus;
                    bool m_picAuditStatusHasBeenSet;

                    /**
                     * Review status of video in Q&A: 1 - review failed.
                     */
                    uint64_t m_videoAuditStatus;
                    bool m_videoAuditStatusHasBeenSet;

                    /**
                     * Question description.
                     */
                    std::string m_questionDesc;
                    bool m_questionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_
