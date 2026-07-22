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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Output result
                */
                class RerankResult : public AbstractModel
                {
                public:
                    RerankResult();
                    ~RerankResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location index value of the corresponding doc in the array of candidate docs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Index Location index value of the corresponding doc in the array of candidate docs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Location index value of the corresponding doc in the array of candidate docs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _index Location index value of the corresponding doc in the array of candidate docs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Similarity score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelevanceScore Similarity score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRelevanceScore() const;

                    /**
                     * 设置Similarity score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relevanceScore Similarity score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelevanceScore(const double& _relevanceScore);

                    /**
                     * 判断参数 RelevanceScore 是否已赋值
                     * @return RelevanceScore 是否已赋值
                     * 
                     */
                    bool RelevanceScoreHasBeenSet() const;

                    /**
                     * 获取Document content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Document Document content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置Document content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _document Document content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                private:

                    /**
                     * Location index value of the corresponding doc in the array of candidate docs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Similarity score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_relevanceScore;
                    bool m_relevanceScoreHasBeenSet;

                    /**
                     * Document content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_
