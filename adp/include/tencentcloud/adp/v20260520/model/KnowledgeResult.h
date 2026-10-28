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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SearchResultPayload.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestionExtra.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeSnippetProfile.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeSource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * A single retrieval result
                */
                class KnowledgeResult : public AbstractModel
                {
                public:
                    KnowledgeResult();
                    ~KnowledgeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Confidence degree</p>
                     * @return Confidence <p>Confidence degree</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence degree</p>
                     * @param _confidence <p>Confidence degree</p>
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
                     * 获取<p>Hit knowledge type: 1=QA, 2=document fragment, 3=database, 4=map<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>QA</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>Document fragment</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>Database</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>Map</td></tr></tbody></table></p>
                     * @return KnowledgeType <p>Hit knowledge type: 1=QA, 2=document fragment, 3=database, 4=map<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>QA</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>Document fragment</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>Database</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>Map</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置<p>Hit knowledge type: 1=QA, 2=document fragment, 3=database, 4=map<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>QA</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>Document fragment</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>Database</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>Map</td></tr></tbody></table></p>
                     * @param _knowledgeType <p>Hit knowledge type: 1=QA, 2=document fragment, 3=database, 4=map<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>QA</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>Document fragment</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>Database</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>Map</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKnowledgeType(const int64_t& _knowledgeType);

                    /**
                     * 判断参数 KnowledgeType 是否已赋值
                     * @return KnowledgeType 是否已赋值
                     * 
                     */
                    bool KnowledgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Recall type list</p>
                     * @return RecallTypeList <p>Recall type list</p>
                     * 
                     */
                    std::vector<int64_t> GetRecallTypeList() const;

                    /**
                     * 设置<p>Recall type list</p>
                     * @param _recallTypeList <p>Recall type list</p>
                     * 
                     */
                    void SetRecallTypeList(const std::vector<int64_t>& _recallTypeList);

                    /**
                     * 判断参数 RecallTypeList 是否已赋值
                     * @return RecallTypeList 是否已赋值
                     * 
                     */
                    bool RecallTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Result payload</p>
                     * @return ResultPayload <p>Result payload</p>
                     * 
                     */
                    SearchResultPayload GetResultPayload() const;

                    /**
                     * 设置<p>Result payload</p>
                     * @param _resultPayload <p>Result payload</p>
                     * 
                     */
                    void SetResultPayload(const SearchResultPayload& _resultPayload);

                    /**
                     * 判断参数 ResultPayload 是否已赋值
                     * @return ResultPayload 是否已赋值
                     * 
                     */
                    bool ResultPayloadHasBeenSet() const;

                    /**
                     * 获取<p>Result type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>Standard search result</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql result</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * @return ResultType <p>Result type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>Standard search result</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql result</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置<p>Result type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>Standard search result</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql result</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * @param _resultType <p>Result type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>Standard search result</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql result</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    void SetResultType(const int64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>Additional information for similar questions.</p>
                     * @return SimilarQuestionExtra <p>Additional information for similar questions.</p>
                     * 
                     */
                    SimilarQuestionExtra GetSimilarQuestionExtra() const;

                    /**
                     * 设置<p>Additional information for similar questions.</p>
                     * @param _similarQuestionExtra <p>Additional information for similar questions.</p>
                     * 
                     */
                    void SetSimilarQuestionExtra(const SimilarQuestionExtra& _similarQuestionExtra);

                    /**
                     * 判断参数 SimilarQuestionExtra 是否已赋值
                     * @return SimilarQuestionExtra 是否已赋值
                     * 
                     */
                    bool SimilarQuestionExtraHasBeenSet() const;

                    /**
                     * 获取<p>Basic information of knowledge fragment</p>
                     * @return SnippetProfile <p>Basic information of knowledge fragment</p>
                     * 
                     */
                    KnowledgeSnippetProfile GetSnippetProfile() const;

                    /**
                     * 设置<p>Basic information of knowledge fragment</p>
                     * @param _snippetProfile <p>Basic information of knowledge fragment</p>
                     * 
                     */
                    void SetSnippetProfile(const KnowledgeSnippetProfile& _snippetProfile);

                    /**
                     * 判断参数 SnippetProfile 是否已赋值
                     * @return SnippetProfile 是否已赋值
                     * 
                     */
                    bool SnippetProfileHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge source information</p>
                     * @return SourceInfo <p>Knowledge source information</p>
                     * 
                     */
                    KnowledgeSource GetSourceInfo() const;

                    /**
                     * 设置<p>Knowledge source information</p>
                     * @param _sourceInfo <p>Knowledge source information</p>
                     * 
                     */
                    void SetSourceInfo(const KnowledgeSource& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Confidence degree</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Hit knowledge type: 1=QA, 2=document fragment, 3=database, 4=map<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_QA</td><td>1</td><td>QA</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DOC</td><td>2</td><td>Document fragment</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_DB</td><td>3</td><td>Database</td></tr><tr><td>KNOWLEDGE_SOURCE_TYPE_GRAPH</td><td>4</td><td>Map</td></tr></tbody></table></p>
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * <p>Recall type list</p>
                     */
                    std::vector<int64_t> m_recallTypeList;
                    bool m_recallTypeListHasBeenSet;

                    /**
                     * <p>Result payload</p>
                     */
                    SearchResultPayload m_resultPayload;
                    bool m_resultPayloadHasBeenSet;

                    /**
                     * <p>Result type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_RESULT_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_RETRIEVAL</td><td>1</td><td>Standard search result</td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_TO_SQL</td><td>2</td><td>text2sql result</td></tr><tr><td>SEARCH_RESULT_TYPE_IMAGE_SEARCH_IMAGE</td><td>3</td><td></td></tr><tr><td>SEARCH_RESULT_TYPE_TEXT_SEARCH_IMAGE</td><td>4</td><td></td></tr></tbody></table></p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>Additional information for similar questions.</p>
                     */
                    SimilarQuestionExtra m_similarQuestionExtra;
                    bool m_similarQuestionExtraHasBeenSet;

                    /**
                     * <p>Basic information of knowledge fragment</p>
                     */
                    KnowledgeSnippetProfile m_snippetProfile;
                    bool m_snippetProfileHasBeenSet;

                    /**
                     * <p>Knowledge source information</p>
                     */
                    KnowledgeSource m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGERESULT_H_
