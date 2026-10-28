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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DBRetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/DocRetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/RetrievalOption.h>
#include <tencentcloud/adp/v20260520/model/QARetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/RerankConfig.h>
#include <tencentcloud/adp/v20260520/model/SearchFilterConfig.h>
#include <tencentcloud/adp/v20260520/model/ModelDetailInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Search configuration of each knowledge base
                */
                class KBRetrievalConfig : public AbstractModel
                {
                public:
                    KBRetrievalConfig();
                    ~KBRetrievalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database search configuration</p>
                     * @return DbRetrievalConfig <p>Database search configuration</p>
                     * 
                     */
                    DBRetrievalConfig GetDbRetrievalConfig() const;

                    /**
                     * 设置<p>Database search configuration</p>
                     * @param _dbRetrievalConfig <p>Database search configuration</p>
                     * 
                     */
                    void SetDbRetrievalConfig(const DBRetrievalConfig& _dbRetrievalConfig);

                    /**
                     * 判断参数 DbRetrievalConfig 是否已赋值
                     * @return DbRetrievalConfig 是否已赋值
                     * 
                     */
                    bool DbRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>Document retrieval configuration.</p>
                     * @return DocRetrievalConfig <p>Document retrieval configuration.</p>
                     * 
                     */
                    DocRetrievalConfig GetDocRetrievalConfig() const;

                    /**
                     * 设置<p>Document retrieval configuration.</p>
                     * @param _docRetrievalConfig <p>Document retrieval configuration.</p>
                     * 
                     */
                    void SetDocRetrievalConfig(const DocRetrievalConfig& _docRetrievalConfig);

                    /**
                     * 判断参数 DocRetrievalConfig 是否已赋值
                     * @return DocRetrievalConfig 是否已赋值
                     * 
                     */
                    bool DocRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Retrieval optional configuration</p>
                     * @return OptionConfig <p>Retrieval optional configuration</p>
                     * 
                     */
                    RetrievalOption GetOptionConfig() const;

                    /**
                     * 设置<p>Retrieval optional configuration</p>
                     * @param _optionConfig <p>Retrieval optional configuration</p>
                     * 
                     */
                    void SetOptionConfig(const RetrievalOption& _optionConfig);

                    /**
                     * 判断参数 OptionConfig 是否已赋值
                     * @return OptionConfig 是否已赋值
                     * 
                     */
                    bool OptionConfigHasBeenSet() const;

                    /**
                     * 获取<p>QA search configuration</p>
                     * @return QaRetrievalConfig <p>QA search configuration</p>
                     * 
                     */
                    QARetrievalConfig GetQaRetrievalConfig() const;

                    /**
                     * 设置<p>QA search configuration</p>
                     * @param _qaRetrievalConfig <p>QA search configuration</p>
                     * 
                     */
                    void SetQaRetrievalConfig(const QARetrievalConfig& _qaRetrievalConfig);

                    /**
                     * 判断参数 QaRetrievalConfig 是否已赋值
                     * @return QaRetrievalConfig 是否已赋值
                     * 
                     */
                    bool QaRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>ReRank configuration</p>
                     * @return RerankConfig <p>ReRank configuration</p>
                     * 
                     */
                    RerankConfig GetRerankConfig() const;

                    /**
                     * 设置<p>ReRank configuration</p>
                     * @param _rerankConfig <p>ReRank configuration</p>
                     * 
                     */
                    void SetRerankConfig(const RerankConfig& _rerankConfig);

                    /**
                     * 判断参数 RerankConfig 是否已赋值
                     * @return RerankConfig 是否已赋值
                     * 
                     */
                    bool RerankConfigHasBeenSet() const;

                    /**
                     * 获取<p>Search filter configuration</p>
                     * @return SearchFilterConfig <p>Search filter configuration</p>
                     * 
                     */
                    SearchFilterConfig GetSearchFilterConfig() const;

                    /**
                     * 设置<p>Search filter configuration</p>
                     * @param _searchFilterConfig <p>Search filter configuration</p>
                     * 
                     */
                    void SetSearchFilterConfig(const SearchFilterConfig& _searchFilterConfig);

                    /**
                     * 判断参数 SearchFilterConfig 是否已赋值
                     * @return SearchFilterConfig 是否已赋值
                     * 
                     */
                    bool SearchFilterConfigHasBeenSet() const;

                    /**
                     * 获取<p>Retrieval strategy: 1=hybrid, 2=semantic, 3=keyword, 4=none<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>Hybrid retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>Semantic retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>Keyword retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>No semantic/vector retrieval</td></tr></tbody></table></p>
                     * @return StrategyType <p>Retrieval strategy: 1=hybrid, 2=semantic, 3=keyword, 4=none<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>Hybrid retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>Semantic retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>Keyword retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>No semantic/vector retrieval</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>Retrieval strategy: 1=hybrid, 2=semantic, 3=keyword, 4=none<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>Hybrid retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>Semantic retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>Keyword retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>No semantic/vector retrieval</td></tr></tbody></table></p>
                     * @param _strategyType <p>Retrieval strategy: 1=hybrid, 2=semantic, 3=keyword, 4=none<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>Hybrid retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>Semantic retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>Keyword retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>No semantic/vector retrieval</td></tr></tbody></table></p>
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Text2SQL model</p>
                     * @return TextToSqlModel <p>Text2SQL model</p>
                     * 
                     */
                    ModelDetailInfo GetTextToSqlModel() const;

                    /**
                     * 设置<p>Text2SQL model</p>
                     * @param _textToSqlModel <p>Text2SQL model</p>
                     * 
                     */
                    void SetTextToSqlModel(const ModelDetailInfo& _textToSqlModel);

                    /**
                     * 判断参数 TextToSqlModel 是否已赋值
                     * @return TextToSqlModel 是否已赋值
                     * 
                     */
                    bool TextToSqlModelHasBeenSet() const;

                private:

                    /**
                     * <p>Database search configuration</p>
                     */
                    DBRetrievalConfig m_dbRetrievalConfig;
                    bool m_dbRetrievalConfigHasBeenSet;

                    /**
                     * <p>Document retrieval configuration.</p>
                     */
                    DocRetrievalConfig m_docRetrievalConfig;
                    bool m_docRetrievalConfigHasBeenSet;

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Retrieval optional configuration</p>
                     */
                    RetrievalOption m_optionConfig;
                    bool m_optionConfigHasBeenSet;

                    /**
                     * <p>QA search configuration</p>
                     */
                    QARetrievalConfig m_qaRetrievalConfig;
                    bool m_qaRetrievalConfigHasBeenSet;

                    /**
                     * <p>ReRank configuration</p>
                     */
                    RerankConfig m_rerankConfig;
                    bool m_rerankConfigHasBeenSet;

                    /**
                     * <p>Search filter configuration</p>
                     */
                    SearchFilterConfig m_searchFilterConfig;
                    bool m_searchFilterConfigHasBeenSet;

                    /**
                     * <p>Retrieval strategy: 1=hybrid, 2=semantic, 3=keyword, 4=none<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>Hybrid retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>Semantic retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>Keyword retrieval</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>No semantic/vector retrieval</td></tr></tbody></table></p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Text2SQL model</p>
                     */
                    ModelDetailInfo m_textToSqlModel;
                    bool m_textToSqlModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_
