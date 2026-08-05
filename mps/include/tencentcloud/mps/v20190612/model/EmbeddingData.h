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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Embedding API input:
Type   Data type; currently only supports textData  Data content; currently only supports text strings
                */
                class EmbeddingData : public AbstractModel
                {
                public:
                    EmbeddingData();
                    ~EmbeddingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Data type</p><p>Enumeration values:</p><ul><li>text: Text</li></ul>
                     * @return Type <p>Data type</p><p>Enumeration values:</p><ul><li>text: Text</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Data type</p><p>Enumeration values:</p><ul><li>text: Text</li></ul>
                     * @param _type <p>Data type</p><p>Enumeration values:</p><ul><li>text: Text</li></ul>
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
                     * 获取<p>Data content. When Type is text, it is a text string.</p>
                     * @return Data <p>Data content. When Type is text, it is a text string.</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>Data content. When Type is text, it is a text string.</p>
                     * @param _data <p>Data content. When Type is text, it is a text string.</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Data type</p><p>Enumeration values:</p><ul><li>text: Text</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Data content. When Type is text, it is a text string.</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATA_H_
