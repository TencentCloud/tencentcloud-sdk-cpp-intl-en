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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeModelList request structure.
                */
                class DescribeModelListRequest : public AbstractModel
                {
                public:
                    DescribeModelListRequest();
                    ~DescribeModelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Model scenario. 0-case-insensitive, 1-standard generation, 2-standard thinking, 3-Agent thinking, 4-multimodal understanding, 5-multimodal QA, 6-rewrite, 7-long-term memory, 8-natural language to SQL, 9-AI optimization, 10-real-time file parsing, 11-file parsing, 12-GraphRAG, 13-OpenClaw, 14-multimodal Embedding, 15-Rerank, 16-text Embedding, 17-Widget, 18-Claw mode, 19-workflow code generation, 20-workflow large model node, 21-dedicated vectorization for workflow node, 22-workflow parameter extraction, 23-workflow large model knowledge q&a, 24-workflow tag extraction, 25-workflow intent recognition, 26-workflow tab, 27-workflow logical judgment, 28-documentation generation QA, 29-knowledge base Schema</p><p>Enumeration values:</p><ul><li>0: case-insensitive</li><li>1: standard generation</li><li>2: standard thinking</li><li>3: Agent thinking</li><li>4: multimodal understanding</li><li>5: multimodal QA</li><li>6: rewrite</li><li>7: long-term memory</li><li>8: natural language to SQL</li><li>9: AI optimization</li><li>10: real-time file parsing</li><li>11: file parsing</li><li>12: GraphRAG</li><li>13: OpenClaw</li><li>14: multimodal Embedding</li><li>15: Rerank</li><li>16: text Embedding</li><li>17: Widget</li><li>18: Claw mode</li><li>19: workflow code generation</li><li>20: workflow large model node</li><li>21: dedicated vectorization for workflow node</li><li>22: workflow parameter extraction</li><li>23: workflow large model knowledge q&a</li><li>24: workflow tag extraction</li><li>25: workflow intent recognition</li><li>26: workflow tab</li><li>27: workflow logical judgment</li><li>28: documentation generation QA</li><li>29: knowledge base Schema</li></ul>
                     * @return ModelScene <p>Model scenario. 0-case-insensitive, 1-standard generation, 2-standard thinking, 3-Agent thinking, 4-multimodal understanding, 5-multimodal QA, 6-rewrite, 7-long-term memory, 8-natural language to SQL, 9-AI optimization, 10-real-time file parsing, 11-file parsing, 12-GraphRAG, 13-OpenClaw, 14-multimodal Embedding, 15-Rerank, 16-text Embedding, 17-Widget, 18-Claw mode, 19-workflow code generation, 20-workflow large model node, 21-dedicated vectorization for workflow node, 22-workflow parameter extraction, 23-workflow large model knowledge q&a, 24-workflow tag extraction, 25-workflow intent recognition, 26-workflow tab, 27-workflow logical judgment, 28-documentation generation QA, 29-knowledge base Schema</p><p>Enumeration values:</p><ul><li>0: case-insensitive</li><li>1: standard generation</li><li>2: standard thinking</li><li>3: Agent thinking</li><li>4: multimodal understanding</li><li>5: multimodal QA</li><li>6: rewrite</li><li>7: long-term memory</li><li>8: natural language to SQL</li><li>9: AI optimization</li><li>10: real-time file parsing</li><li>11: file parsing</li><li>12: GraphRAG</li><li>13: OpenClaw</li><li>14: multimodal Embedding</li><li>15: Rerank</li><li>16: text Embedding</li><li>17: Widget</li><li>18: Claw mode</li><li>19: workflow code generation</li><li>20: workflow large model node</li><li>21: dedicated vectorization for workflow node</li><li>22: workflow parameter extraction</li><li>23: workflow large model knowledge q&a</li><li>24: workflow tag extraction</li><li>25: workflow intent recognition</li><li>26: workflow tab</li><li>27: workflow logical judgment</li><li>28: documentation generation QA</li><li>29: knowledge base Schema</li></ul>
                     * 
                     */
                    int64_t GetModelScene() const;

                    /**
                     * 设置<p>Model scenario. 0-case-insensitive, 1-standard generation, 2-standard thinking, 3-Agent thinking, 4-multimodal understanding, 5-multimodal QA, 6-rewrite, 7-long-term memory, 8-natural language to SQL, 9-AI optimization, 10-real-time file parsing, 11-file parsing, 12-GraphRAG, 13-OpenClaw, 14-multimodal Embedding, 15-Rerank, 16-text Embedding, 17-Widget, 18-Claw mode, 19-workflow code generation, 20-workflow large model node, 21-dedicated vectorization for workflow node, 22-workflow parameter extraction, 23-workflow large model knowledge q&a, 24-workflow tag extraction, 25-workflow intent recognition, 26-workflow tab, 27-workflow logical judgment, 28-documentation generation QA, 29-knowledge base Schema</p><p>Enumeration values:</p><ul><li>0: case-insensitive</li><li>1: standard generation</li><li>2: standard thinking</li><li>3: Agent thinking</li><li>4: multimodal understanding</li><li>5: multimodal QA</li><li>6: rewrite</li><li>7: long-term memory</li><li>8: natural language to SQL</li><li>9: AI optimization</li><li>10: real-time file parsing</li><li>11: file parsing</li><li>12: GraphRAG</li><li>13: OpenClaw</li><li>14: multimodal Embedding</li><li>15: Rerank</li><li>16: text Embedding</li><li>17: Widget</li><li>18: Claw mode</li><li>19: workflow code generation</li><li>20: workflow large model node</li><li>21: dedicated vectorization for workflow node</li><li>22: workflow parameter extraction</li><li>23: workflow large model knowledge q&a</li><li>24: workflow tag extraction</li><li>25: workflow intent recognition</li><li>26: workflow tab</li><li>27: workflow logical judgment</li><li>28: documentation generation QA</li><li>29: knowledge base Schema</li></ul>
                     * @param _modelScene <p>Model scenario. 0-case-insensitive, 1-standard generation, 2-standard thinking, 3-Agent thinking, 4-multimodal understanding, 5-multimodal QA, 6-rewrite, 7-long-term memory, 8-natural language to SQL, 9-AI optimization, 10-real-time file parsing, 11-file parsing, 12-GraphRAG, 13-OpenClaw, 14-multimodal Embedding, 15-Rerank, 16-text Embedding, 17-Widget, 18-Claw mode, 19-workflow code generation, 20-workflow large model node, 21-dedicated vectorization for workflow node, 22-workflow parameter extraction, 23-workflow large model knowledge q&a, 24-workflow tag extraction, 25-workflow intent recognition, 26-workflow tab, 27-workflow logical judgment, 28-documentation generation QA, 29-knowledge base Schema</p><p>Enumeration values:</p><ul><li>0: case-insensitive</li><li>1: standard generation</li><li>2: standard thinking</li><li>3: Agent thinking</li><li>4: multimodal understanding</li><li>5: multimodal QA</li><li>6: rewrite</li><li>7: long-term memory</li><li>8: natural language to SQL</li><li>9: AI optimization</li><li>10: real-time file parsing</li><li>11: file parsing</li><li>12: GraphRAG</li><li>13: OpenClaw</li><li>14: multimodal Embedding</li><li>15: Rerank</li><li>16: text Embedding</li><li>17: Widget</li><li>18: Claw mode</li><li>19: workflow code generation</li><li>20: workflow large model node</li><li>21: dedicated vectorization for workflow node</li><li>22: workflow parameter extraction</li><li>23: workflow large model knowledge q&a</li><li>24: workflow tag extraction</li><li>25: workflow intent recognition</li><li>26: workflow tab</li><li>27: workflow logical judgment</li><li>28: documentation generation QA</li><li>29: knowledge base Schema</li></ul>
                     * 
                     */
                    void SetModelScene(const int64_t& _modelScene);

                    /**
                     * 判断参数 ModelScene 是否已赋值
                     * @return ModelScene 是否已赋值
                     * 
                     */
                    bool ModelSceneHasBeenSet() const;

                    /**
                     * 获取<p>Filter conditions (multiple Filters are combined with AND, and multiple Values within the same Filter are combined with OR)<br>DeveloperName: model author name<br>ProviderName: model provider name<br>ProviderType: model provider type</p>
                     * @return FilterList <p>Filter conditions (multiple Filters are combined with AND, and multiple Values within the same Filter are combined with OR)<br>DeveloperName: model author name<br>ProviderName: model provider name<br>ProviderType: model provider type</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Filter conditions (multiple Filters are combined with AND, and multiple Values within the same Filter are combined with OR)<br>DeveloperName: model author name<br>ProviderName: model provider name<br>ProviderType: model provider type</p>
                     * @param _filterList <p>Filter conditions (multiple Filters are combined with AND, and multiple Values within the same Filter are combined with OR)<br>DeveloperName: model author name<br>ProviderName: model provider name<br>ProviderType: model provider type</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Starts from 0</p>
                     * @return PageNumber <p>Page number. Starts from 0</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Starts from 0</p>
                     * @param _pageNumber <p>Page number. Starts from 0</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page. Default: 20. Maximum: 100</p>
                     * @return PageSize <p>Number of items per page. Default: 20. Maximum: 100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Number of items per page. Default: 20. Maximum: 100</p>
                     * @param _pageSize <p>Number of items per page. Default: 20. Maximum: 100</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy search by keyword</p>
                     * @return Query <p>Fuzzy search by keyword</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Fuzzy search by keyword</p>
                     * @param _query <p>Fuzzy search by keyword</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>Space ID</p>
                     * @return SpaceId <p>Space ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID</p>
                     * @param _spaceId <p>Space ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Model scenario. 0-case-insensitive, 1-standard generation, 2-standard thinking, 3-Agent thinking, 4-multimodal understanding, 5-multimodal QA, 6-rewrite, 7-long-term memory, 8-natural language to SQL, 9-AI optimization, 10-real-time file parsing, 11-file parsing, 12-GraphRAG, 13-OpenClaw, 14-multimodal Embedding, 15-Rerank, 16-text Embedding, 17-Widget, 18-Claw mode, 19-workflow code generation, 20-workflow large model node, 21-dedicated vectorization for workflow node, 22-workflow parameter extraction, 23-workflow large model knowledge q&a, 24-workflow tag extraction, 25-workflow intent recognition, 26-workflow tab, 27-workflow logical judgment, 28-documentation generation QA, 29-knowledge base Schema</p><p>Enumeration values:</p><ul><li>0: case-insensitive</li><li>1: standard generation</li><li>2: standard thinking</li><li>3: Agent thinking</li><li>4: multimodal understanding</li><li>5: multimodal QA</li><li>6: rewrite</li><li>7: long-term memory</li><li>8: natural language to SQL</li><li>9: AI optimization</li><li>10: real-time file parsing</li><li>11: file parsing</li><li>12: GraphRAG</li><li>13: OpenClaw</li><li>14: multimodal Embedding</li><li>15: Rerank</li><li>16: text Embedding</li><li>17: Widget</li><li>18: Claw mode</li><li>19: workflow code generation</li><li>20: workflow large model node</li><li>21: dedicated vectorization for workflow node</li><li>22: workflow parameter extraction</li><li>23: workflow large model knowledge q&a</li><li>24: workflow tag extraction</li><li>25: workflow intent recognition</li><li>26: workflow tab</li><li>27: workflow logical judgment</li><li>28: documentation generation QA</li><li>29: knowledge base Schema</li></ul>
                     */
                    int64_t m_modelScene;
                    bool m_modelSceneHasBeenSet;

                    /**
                     * <p>Filter conditions (multiple Filters are combined with AND, and multiple Values within the same Filter are combined with OR)<br>DeveloperName: model author name<br>ProviderName: model provider name<br>ProviderType: model provider type</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Page number. Starts from 0</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Number of items per page. Default: 20. Maximum: 100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Fuzzy search by keyword</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Space ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMODELLISTREQUEST_H_
