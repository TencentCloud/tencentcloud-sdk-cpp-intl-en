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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetEmbedding request structure.
                */
                class GetEmbeddingRequest : public AbstractModel
                {
                public:
                    GetEmbeddingRequest();
                    ~GetEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Select the model for generating vectors
Note: Optional [adp-text-embedding-0.5b]


                     * @return Model Select the model for generating vectors
Note: Optional [adp-text-embedding-0.5b]


                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Select the model for generating vectors
Note: Optional [adp-text-embedding-0.5b]


                     * @param _model Select the model for generating vectors
Note: Optional [adp-text-embedding-0.5b]


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
                     * 获取Text that requires embedding. The maximum length of a single text is 500 characters. The maximum total number of entries is 7.
                     * @return Inputs Text that requires embedding. The maximum length of a single text is 500 characters. The maximum total number of entries is 7.
                     * 
                     */
                    std::vector<std::string> GetInputs() const;

                    /**
                     * 设置Text that requires embedding. The maximum length of a single text is 500 characters. The maximum total number of entries is 7.
                     * @param _inputs Text that requires embedding. The maximum length of a single text is 500 characters. The maximum total number of entries is 7.
                     * 
                     */
                    void SetInputs(const std::vector<std::string>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取The type of text vectorization. To achieve better retrieval performance, it is recommended to distinguish between query text and document text types. For symmetric tasks such as clustering and classification, there is no need for special specification simply use the system default value "document".
                     * @return TextType The type of text vectorization. To achieve better retrieval performance, it is recommended to distinguish between query text and document text types. For symmetric tasks such as clustering and classification, there is no need for special specification simply use the system default value "document".
                     * 
                     */
                    std::string GetTextType() const;

                    /**
                     * 设置The type of text vectorization. To achieve better retrieval performance, it is recommended to distinguish between query text and document text types. For symmetric tasks such as clustering and classification, there is no need for special specification simply use the system default value "document".
                     * @param _textType The type of text vectorization. To achieve better retrieval performance, it is recommended to distinguish between query text and document text types. For symmetric tasks such as clustering and classification, there is no need for special specification simply use the system default value "document".
                     * 
                     */
                    void SetTextType(const std::string& _textType);

                    /**
                     * 判断参数 TextType 是否已赋值
                     * @return TextType 是否已赋值
                     * 
                     */
                    bool TextTypeHasBeenSet() const;

                    /**
                     * 获取This field is not currently supported.
                     * @return Instruction This field is not currently supported.
                     * 
                     */
                    std::string GetInstruction() const;

                    /**
                     * 设置This field is not currently supported.
                     * @param _instruction This field is not currently supported.
                     * 
                     */
                    void SetInstruction(const std::string& _instruction);

                    /**
                     * 判断参数 Instruction 是否已赋值
                     * @return Instruction 是否已赋值
                     * 
                     */
                    bool InstructionHasBeenSet() const;

                private:

                    /**
                     * Select the model for generating vectors
Note: Optional [adp-text-embedding-0.5b]


                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Text that requires embedding. The maximum length of a single text is 500 characters. The maximum total number of entries is 7.
                     */
                    std::vector<std::string> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * The type of text vectorization. To achieve better retrieval performance, it is recommended to distinguish between query text and document text types. For symmetric tasks such as clustering and classification, there is no need for special specification simply use the system default value "document".
                     */
                    std::string m_textType;
                    bool m_textTypeHasBeenSet;

                    /**
                     * This field is not currently supported.
                     */
                    std::string m_instruction;
                    bool m_instructionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
