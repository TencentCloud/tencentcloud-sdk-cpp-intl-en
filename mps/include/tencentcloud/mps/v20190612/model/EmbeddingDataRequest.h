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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EmbeddingData.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * EmbeddingData request structure.
                */
                class EmbeddingDataRequest : public AbstractModel
                {
                public:
                    EmbeddingDataRequest();
                    ~EmbeddingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Embedding model; currently only supports text_embedding_v1</p><p>Enumeration values: </p><ul><li>text_embedding_v1: The text embedding model. Prompt can be filled.</li></ul>
                     * @return Model <p>Embedding model; currently only supports text_embedding_v1</p><p>Enumeration values: </p><ul><li>text_embedding_v1: The text embedding model. Prompt can be filled.</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Embedding model; currently only supports text_embedding_v1</p><p>Enumeration values: </p><ul><li>text_embedding_v1: The text embedding model. Prompt can be filled.</li></ul>
                     * @param _model <p>Embedding model; currently only supports text_embedding_v1</p><p>Enumeration values: </p><ul><li>text_embedding_v1: The text embedding model. Prompt can be filled.</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Embedding input</p>
                     * @return Files <p>Embedding input</p>
                     * 
                     */
                    std::vector<EmbeddingData> GetFiles() const;

                    /**
                     * 设置<p>Embedding input</p>
                     * @param _files <p>Embedding input</p>
                     * 
                     */
                    void SetFiles(const std::vector<EmbeddingData>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for embedding input</p>
                     * @return Prompt <p>Prompt for embedding input</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for embedding input</p>
                     * @param _prompt <p>Prompt for embedding input</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * <p>Embedding model; currently only supports text_embedding_v1</p><p>Enumeration values: </p><ul><li>text_embedding_v1: The text embedding model. Prompt can be filled.</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Embedding input</p>
                     */
                    std::vector<EmbeddingData> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * <p>Prompt for embedding input</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_
