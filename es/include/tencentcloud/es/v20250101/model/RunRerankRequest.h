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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * RunRerank request structure.
                */
                class RunRerankRequest : public AbstractModel
                {
                public:
                    RunRerankRequest();
                    ~RunRerankRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Model name, selectable model list: bge-reranker-large, bge-reranker-v2-m3.
                     * @return ModelName Model name, selectable model list: bge-reranker-large, bge-reranker-v2-m3.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name, selectable model list: bge-reranker-large, bge-reranker-v2-m3.
                     * @param _modelName Model name, selectable model list: bge-reranker-large, bge-reranker-v2-m3.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Query text.
                     * @return Query Query text.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query text.
                     * @param _query Query text.
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
                     * 获取List of candidate docs to sort.
                     * @return Documents List of candidate docs to sort.
                     * 
                     */
                    std::vector<std::string> GetDocuments() const;

                    /**
                     * 设置List of candidate docs to sort.
                     * @param _documents List of candidate docs to sort.
                     * 
                     */
                    void SetDocuments(const std::vector<std::string>& _documents);

                    /**
                     * 判断参数 Documents 是否已赋值
                     * @return Documents 是否已赋值
                     * 
                     */
                    bool DocumentsHasBeenSet() const;

                    /**
                     * 获取Number of top documents returned in sorting order. If not specified, return all candidate docs. If the specified top_n value is larger than the number of input candidate docs, return all docs.
                     * @return TopN Number of top documents returned in sorting order. If not specified, return all candidate docs. If the specified top_n value is larger than the number of input candidate docs, return all docs.
                     * 
                     */
                    int64_t GetTopN() const;

                    /**
                     * 设置Number of top documents returned in sorting order. If not specified, return all candidate docs. If the specified top_n value is larger than the number of input candidate docs, return all docs.
                     * @param _topN Number of top documents returned in sorting order. If not specified, return all candidate docs. If the specified top_n value is larger than the number of input candidate docs, return all docs.
                     * 
                     */
                    void SetTopN(const int64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取Whether to return the original document for each sorting result inside the result list. Default value: False.
                     * @return ReturnDocuments Whether to return the original document for each sorting result inside the result list. Default value: False.
                     * 
                     */
                    bool GetReturnDocuments() const;

                    /**
                     * 设置Whether to return the original document for each sorting result inside the result list. Default value: False.
                     * @param _returnDocuments Whether to return the original document for each sorting result inside the result list. Default value: False.
                     * 
                     */
                    void SetReturnDocuments(const bool& _returnDocuments);

                    /**
                     * 判断参数 ReturnDocuments 是否已赋值
                     * @return ReturnDocuments 是否已赋值
                     * 
                     */
                    bool ReturnDocumentsHasBeenSet() const;

                private:

                    /**
                     * Model name, selectable model list: bge-reranker-large, bge-reranker-v2-m3.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Query text.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * List of candidate docs to sort.
                     */
                    std::vector<std::string> m_documents;
                    bool m_documentsHasBeenSet;

                    /**
                     * Number of top documents returned in sorting order. If not specified, return all candidate docs. If the specified top_n value is larger than the number of input candidate docs, return all docs.
                     */
                    int64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * Whether to return the original document for each sorting result inside the result list. Default value: False.
                     */
                    bool m_returnDocuments;
                    bool m_returnDocumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_RUNRERANKREQUEST_H_
