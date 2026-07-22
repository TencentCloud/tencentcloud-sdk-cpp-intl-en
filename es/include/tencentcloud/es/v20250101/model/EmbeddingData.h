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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_EMBEDDINGDATA_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_EMBEDDINGDATA_H_

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
                * Vector content
                */
                class EmbeddingData : public AbstractModel
                {
                public:
                    EmbeddingData();
                    ~EmbeddingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取embedding content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Embedding embedding content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<double> GetEmbedding() const;

                    /**
                     * 设置embedding content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _embedding embedding content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmbedding(const std::vector<double>& _embedding);

                    /**
                     * 判断参数 Embedding 是否已赋值
                     * @return Embedding 是否已赋值
                     * 
                     */
                    bool EmbeddingHasBeenSet() const;

                    /**
                     * 获取Index serial number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Index Index serial number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Index serial number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _index Index serial number
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

                private:

                    /**
                     * embedding content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_embedding;
                    bool m_embeddingHasBeenSet;

                    /**
                     * Index serial number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_EMBEDDINGDATA_H_
