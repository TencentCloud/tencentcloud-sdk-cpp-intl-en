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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FinalRerankConfig.h>
#include <tencentcloud/adp/v20260520/model/KBRetrievalConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Retrieve advanced configuration
                */
                class SearchAdvancedConfig : public AbstractModel
                {
                public:
                    SearchAdvancedConfig();
                    ~SearchAdvancedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Final ReRank Configuration</p>
                     * @return FinalRerankConfig <p>Final ReRank Configuration</p>
                     * 
                     */
                    FinalRerankConfig GetFinalRerankConfig() const;

                    /**
                     * 设置<p>Final ReRank Configuration</p>
                     * @param _finalRerankConfig <p>Final ReRank Configuration</p>
                     * 
                     */
                    void SetFinalRerankConfig(const FinalRerankConfig& _finalRerankConfig);

                    /**
                     * 判断参数 FinalRerankConfig 是否已赋值
                     * @return FinalRerankConfig 是否已赋值
                     * 
                     */
                    bool FinalRerankConfigHasBeenSet() const;

                    /**
                     * 获取<p>Search configuration of each knowledge base</p>
                     * @return KbRetrievalList <p>Search configuration of each knowledge base</p>
                     * 
                     */
                    std::vector<KBRetrievalConfig> GetKbRetrievalList() const;

                    /**
                     * 设置<p>Search configuration of each knowledge base</p>
                     * @param _kbRetrievalList <p>Search configuration of each knowledge base</p>
                     * 
                     */
                    void SetKbRetrievalList(const std::vector<KBRetrievalConfig>& _kbRetrievalList);

                    /**
                     * 判断参数 KbRetrievalList 是否已赋值
                     * @return KbRetrievalList 是否已赋值
                     * 
                     */
                    bool KbRetrievalListHasBeenSet() const;

                    /**
                     * 获取<p>Retrieve knowledge type: 1=document and QA, 2=rejected question<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>Document and QA</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>Rejected question</td></tr></tbody></table></p>
                     * @return KnowledgeType <p>Retrieve knowledge type: 1=document and QA, 2=rejected question<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>Document and QA</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>Rejected question</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置<p>Retrieve knowledge type: 1=document and QA, 2=rejected question<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>Document and QA</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>Rejected question</td></tr></tbody></table></p>
                     * @param _knowledgeType <p>Retrieve knowledge type: 1=document and QA, 2=rejected question<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>Document and QA</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>Rejected question</td></tr></tbody></table></p>
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
                     * 获取<p>Number of final returned results</p>
                     * @return RecallCount <p>Number of final returned results</p>
                     * 
                     */
                    uint64_t GetRecallCount() const;

                    /**
                     * 设置<p>Number of final returned results</p>
                     * @param _recallCount <p>Number of final returned results</p>
                     * 
                     */
                    void SetRecallCount(const uint64_t& _recallCount);

                    /**
                     * 判断参数 RecallCount 是否已赋值
                     * @return RecallCount 是否已赋值
                     * 
                     */
                    bool RecallCountHasBeenSet() const;

                private:

                    /**
                     * <p>Final ReRank Configuration</p>
                     */
                    FinalRerankConfig m_finalRerankConfig;
                    bool m_finalRerankConfigHasBeenSet;

                    /**
                     * <p>Search configuration of each knowledge base</p>
                     */
                    std::vector<KBRetrievalConfig> m_kbRetrievalList;
                    bool m_kbRetrievalListHasBeenSet;

                    /**
                     * <p>Retrieve knowledge type: 1=document and QA, 2=rejected question<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>Document and QA</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>Rejected question</td></tr></tbody></table></p>
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * <p>Number of final returned results</p>
                     */
                    uint64_t m_recallCount;
                    bool m_recallCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_
