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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Retrieval configuration.
                */
                class KnowledgeQaSearch : public AbstractModel
                {
                public:
                    KnowledgeQaSearch();
                    ~KnowledgeQaSearch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Knowledge source: doc (document), qa (question & answering), taskflow (business process), search (search enhancement).
                     * @return Type Knowledge source: doc (document), qa (question & answering), taskflow (business process), search (search enhancement).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Knowledge source: doc (document), qa (question & answering), taskflow (business process), search (search enhancement).
                     * @param _type Knowledge source: doc (document), qa (question & answering), taskflow (business process), search (search enhancement).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Q&A - reply flexibility, 1: directly reply if the answer has been accepted. 2: reply after the accepted answer has been polished.
                     * @return ReplyFlexibility Q&A - reply flexibility, 1: directly reply if the answer has been accepted. 2: reply after the accepted answer has been polished.
                     * 
                     */
                    uint64_t GetReplyFlexibility() const;

                    /**
                     * 设置Q&A - reply flexibility, 1: directly reply if the answer has been accepted. 2: reply after the accepted answer has been polished.
                     * @param _replyFlexibility Q&A - reply flexibility, 1: directly reply if the answer has been accepted. 2: reply after the accepted answer has been polished.
                     * 
                     */
                    void SetReplyFlexibility(const uint64_t& _replyFlexibility);

                    /**
                     * 判断参数 ReplyFlexibility 是否已赋值
                     * @return ReplyFlexibility 是否已赋值
                     * 
                     */
                    bool ReplyFlexibilityHasBeenSet() const;

                    /**
                     * 获取Search enhancement - search engine status.
                     * @return UseSearchEngine Search enhancement - search engine status.
                     * 
                     */
                    bool GetUseSearchEngine() const;

                    /**
                     * 设置Search enhancement - search engine status.
                     * @param _useSearchEngine Search enhancement - search engine status.
                     * 
                     */
                    void SetUseSearchEngine(const bool& _useSearchEngine);

                    /**
                     * 判断参数 UseSearchEngine 是否已赋值
                     * @return UseSearchEngine 是否已赋值
                     * 
                     */
                    bool UseSearchEngineHasBeenSet() const;

                    /**
                     * 获取Whether to display the search engine retrieval status.
                     * @return ShowSearchEngine Whether to display the search engine retrieval status.
                     * 
                     */
                    bool GetShowSearchEngine() const;

                    /**
                     * 设置Whether to display the search engine retrieval status.
                     * @param _showSearchEngine Whether to display the search engine retrieval status.
                     * 
                     */
                    void SetShowSearchEngine(const bool& _showSearchEngine);

                    /**
                     * 判断参数 ShowSearchEngine 是否已赋值
                     * @return ShowSearchEngine 是否已赋值
                     * 
                     */
                    bool ShowSearchEngineHasBeenSet() const;

                    /**
                     * 获取Knowledge source, whether to select.
                     * @return IsEnabled Knowledge source, whether to select.
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 设置Knowledge source, whether to select.
                     * @param _isEnabled Knowledge source, whether to select.
                     * 
                     */
                    void SetIsEnabled(const bool& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Maximum number of Q&A recalls, defaults to 2, limited to 5.
                     * @return QaTopN Maximum number of Q&A recalls, defaults to 2, limited to 5.
                     * 
                     */
                    uint64_t GetQaTopN() const;

                    /**
                     * 设置Maximum number of Q&A recalls, defaults to 2, limited to 5.
                     * @param _qaTopN Maximum number of Q&A recalls, defaults to 2, limited to 5.
                     * 
                     */
                    void SetQaTopN(const uint64_t& _qaTopN);

                    /**
                     * 判断参数 QaTopN 是否已赋值
                     * @return QaTopN 是否已赋值
                     * 
                     */
                    bool QaTopNHasBeenSet() const;

                    /**
                     * 获取Maximum number of documents recalls, defaults to 3, limited to 5.
                     * @return DocTopN Maximum number of documents recalls, defaults to 3, limited to 5.
                     * 
                     */
                    uint64_t GetDocTopN() const;

                    /**
                     * 设置Maximum number of documents recalls, defaults to 3, limited to 5.
                     * @param _docTopN Maximum number of documents recalls, defaults to 3, limited to 5.
                     * 
                     */
                    void SetDocTopN(const uint64_t& _docTopN);

                    /**
                     * 判断参数 DocTopN 是否已赋值
                     * @return DocTopN 是否已赋值
                     * 
                     */
                    bool DocTopNHasBeenSet() const;

                    /**
                     * 获取Retrieval confidence degree, valid for documents and Q&A. Value range: 0.01 - 0.99.
                     * @return Confidence Retrieval confidence degree, valid for documents and Q&A. Value range: 0.01 - 0.99.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Retrieval confidence degree, valid for documents and Q&A. Value range: 0.01 - 0.99.
                     * @param _confidence Retrieval confidence degree, valid for documents and Q&A. Value range: 0.01 - 0.99.
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
                     * 获取Resource status, 1: the resource is available; 2: the resource is exhausted.
                     * @return ResourceStatus Resource status, 1: the resource is available; 2: the resource is exhausted.
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置Resource status, 1: the resource is available; 2: the resource is exhausted.
                     * @param _resourceStatus Resource status, 1: the resource is available; 2: the resource is exhausted.
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * Knowledge source: doc (document), qa (question & answering), taskflow (business process), search (search enhancement).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Q&A - reply flexibility, 1: directly reply if the answer has been accepted. 2: reply after the accepted answer has been polished.
                     */
                    uint64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * Search enhancement - search engine status.
                     */
                    bool m_useSearchEngine;
                    bool m_useSearchEngineHasBeenSet;

                    /**
                     * Whether to display the search engine retrieval status.
                     */
                    bool m_showSearchEngine;
                    bool m_showSearchEngineHasBeenSet;

                    /**
                     * Knowledge source, whether to select.
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Maximum number of Q&A recalls, defaults to 2, limited to 5.
                     */
                    uint64_t m_qaTopN;
                    bool m_qaTopNHasBeenSet;

                    /**
                     * Maximum number of documents recalls, defaults to 3, limited to 5.
                     */
                    uint64_t m_docTopN;
                    bool m_docTopNHasBeenSet;

                    /**
                     * Retrieval confidence degree, valid for documents and Q&A. Value range: 0.01 - 0.99.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Resource status, 1: the resource is available; 2: the resource is exhausted.
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_
