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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/QASegmentHighlight.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestion.h>
#include <tencentcloud/adp/v20260520/model/QASummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
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
                     * 获取<p>Fragment highlight information.</p>
                     * @return HighlightList <p>Fragment highlight information.</p>
                     * 
                     */
                    std::vector<QASegmentHighlight> GetHighlightList() const;

                    /**
                     * 判断参数 HighlightList 是否已赋值
                     * @return HighlightList 是否已赋值
                     * 
                     */
                    bool HighlightListHasBeenSet() const;

                    /**
                     * 获取<p>Fragment content</p>
                     * @return PageContent <p>Fragment content</p>
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
                     * 获取<p>Problem description</p>
                     * @return QuestionDescription <p>Problem description</p>
                     * 
                     */
                    std::string GetQuestionDescription() const;

                    /**
                     * 判断参数 QuestionDescription 是否已赋值
                     * @return QuestionDescription 是否已赋值
                     * 
                     */
                    bool QuestionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Similar question list</p>
                     * @return SimilarQuestionList <p>Similar question list</p>
                     * 
                     */
                    std::vector<SimilarQuestion> GetSimilarQuestionList() const;

                    /**
                     * 判断参数 SimilarQuestionList 是否已赋值
                     * @return SimilarQuestionList 是否已赋值
                     * 
                     */
                    bool SimilarQuestionListHasBeenSet() const;

                    /**
                     * 获取<p>Basic information.</p>
                     * @return Summary <p>Basic information.</p>
                     * 
                     */
                    QASummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * <p>Fragment highlight information.</p>
                     */
                    std::vector<QASegmentHighlight> m_highlightList;
                    bool m_highlightListHasBeenSet;

                    /**
                     * <p>Fragment content</p>
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * <p>Problem description</p>
                     */
                    std::string m_questionDescription;
                    bool m_questionDescriptionHasBeenSet;

                    /**
                     * <p>Similar question list</p>
                     */
                    std::vector<SimilarQuestion> m_similarQuestionList;
                    bool m_similarQuestionListHasBeenSet;

                    /**
                     * <p>Basic information.</p>
                     */
                    QASummary m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQARESPONSE_H_
