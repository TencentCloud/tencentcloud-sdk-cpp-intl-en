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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Highlight.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Reference source details.
                */
                class ReferDetail : public AbstractModel
                {
                public:
                    ReferDetail();
                    ~ReferDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reference ID.
                     * @return ReferBizId Reference ID.
                     * 
                     */
                    std::string GetReferBizId() const;

                    /**
                     * 设置Reference ID.
                     * @param _referBizId Reference ID.
                     * 
                     */
                    void SetReferBizId(const std::string& _referBizId);

                    /**
                     * 判断参数 ReferBizId 是否已赋值
                     * @return ReferBizId 是否已赋值
                     * 
                     */
                    bool ReferBizIdHasBeenSet() const;

                    /**
                     * 获取Document type (1: Q&A; 2: document paragraph).
                     * @return DocType Document type (1: Q&A; 2: document paragraph).
                     * 
                     */
                    uint64_t GetDocType() const;

                    /**
                     * 设置Document type (1: Q&A; 2: document paragraph).
                     * @param _docType Document type (1: Q&A; 2: document paragraph).
                     * 
                     */
                    void SetDocType(const uint64_t& _docType);

                    /**
                     * 判断参数 DocType 是否已赋值
                     * @return DocType 是否已赋值
                     * 
                     */
                    bool DocTypeHasBeenSet() const;

                    /**
                     * 获取Document name.
                     * @return DocName Document name.
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置Document name.
                     * @param _docName Document name.
                     * 
                     */
                    void SetDocName(const std::string& _docName);

                    /**
                     * 判断参数 DocName 是否已赋值
                     * @return DocName 是否已赋值
                     * 
                     */
                    bool DocNameHasBeenSet() const;

                    /**
                     * 获取Fragment content.
                     * @return PageContent Fragment content.
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 设置Fragment content.
                     * @param _pageContent Fragment content.
                     * 
                     */
                    void SetPageContent(const std::string& _pageContent);

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

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
                     * 获取Confidence.
                     * @return Confidence Confidence.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence.
                     * @param _confidence Confidence.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Mark.
                     * @return Mark Mark.
                     * 
                     */
                    uint64_t GetMark() const;

                    /**
                     * 设置Mark.
                     * @param _mark Mark.
                     * 
                     */
                    void SetMark(const uint64_t& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取Fragment highlight content.
                     * @return Highlights Fragment highlight content.
                     * 
                     */
                    std::vector<Highlight> GetHighlights() const;

                    /**
                     * 设置Fragment highlight content.
                     * @param _highlights Fragment highlight content.
                     * 
                     */
                    void SetHighlights(const std::vector<Highlight>& _highlights);

                    /**
                     * 判断参数 Highlights 是否已赋值
                     * @return Highlights 是否已赋值
                     * 
                     */
                    bool HighlightsHasBeenSet() const;

                    /**
                     * 获取Original content.
                     * @return OrgData Original content.
                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 设置Original content.
                     * @param _orgData Original content.
                     * 
                     */
                    void SetOrgData(const std::string& _orgData);

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取Page number information.
                     * @return PageInfos Page number information.
                     * 
                     */
                    std::vector<uint64_t> GetPageInfos() const;

                    /**
                     * 设置Page number information.
                     * @param _pageInfos Page number information.
                     * 
                     */
                    void SetPageInfos(const std::vector<uint64_t>& _pageInfos);

                    /**
                     * 判断参数 PageInfos 是否已赋值
                     * @return PageInfos 是否已赋值
                     * 
                     */
                    bool PageInfosHasBeenSet() const;

                    /**
                     * 获取Sheet information.
                     * @return SheetInfos Sheet information.
                     * 
                     */
                    std::vector<std::string> GetSheetInfos() const;

                    /**
                     * 设置Sheet information.
                     * @param _sheetInfos Sheet information.
                     * 
                     */
                    void SetSheetInfos(const std::vector<std::string>& _sheetInfos);

                    /**
                     * 判断参数 SheetInfos 是否已赋值
                     * @return SheetInfos 是否已赋值
                     * 
                     */
                    bool SheetInfosHasBeenSet() const;

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

                private:

                    /**
                     * Reference ID.
                     */
                    std::string m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * Document type (1: Q&A; 2: document paragraph).
                     */
                    uint64_t m_docType;
                    bool m_docTypeHasBeenSet;

                    /**
                     * Document name.
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * Fragment content.
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

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
                     * Confidence.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Mark.
                     */
                    uint64_t m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Fragment highlight content.
                     */
                    std::vector<Highlight> m_highlights;
                    bool m_highlightsHasBeenSet;

                    /**
                     * Original content.
                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * Page number information.
                     */
                    std::vector<uint64_t> m_pageInfos;
                    bool m_pageInfosHasBeenSet;

                    /**
                     * Sheet information.
                     */
                    std::vector<std::string> m_sheetInfos;
                    bool m_sheetInfosHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_REFERDETAIL_H_
