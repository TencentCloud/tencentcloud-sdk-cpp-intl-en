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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONREFERENCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Reference source information
                */
                class ConversationReference : public AbstractModel
                {
                public:
                    ConversationReference();
                    ~ConversationReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Reference index</p>
                     * @return Index <p>Reference index</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>Reference index</p>
                     * @param _index <p>Reference index</p>
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
                     * 获取<p>Reference name</p>
                     * @return Name <p>Reference name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Reference name</p>
                     * @param _name <p>Reference name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>REFERENCE source TYPE. Enumeration values: 0-APP_REFERENCE_TYPE_UNSPECIFIED (not specified), 1-APP_REFERENCE_TYPE_QA (QA), 2-APP_REFERENCE_TYPE_SEGMENT (fragment), 3-APP_REFERENCE_TYPE_DOC (document), 4-APP_REFERENCE_TYPE_WEB_SEARCH (WEB SEARCH), 5-APP_REFERENCE_TYPE_GRAPH_RAG (GraphRAG)</p>
                     * @return Type <p>REFERENCE source TYPE. Enumeration values: 0-APP_REFERENCE_TYPE_UNSPECIFIED (not specified), 1-APP_REFERENCE_TYPE_QA (QA), 2-APP_REFERENCE_TYPE_SEGMENT (fragment), 3-APP_REFERENCE_TYPE_DOC (document), 4-APP_REFERENCE_TYPE_WEB_SEARCH (WEB SEARCH), 5-APP_REFERENCE_TYPE_GRAPH_RAG (GraphRAG)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>REFERENCE source TYPE. Enumeration values: 0-APP_REFERENCE_TYPE_UNSPECIFIED (not specified), 1-APP_REFERENCE_TYPE_QA (QA), 2-APP_REFERENCE_TYPE_SEGMENT (fragment), 3-APP_REFERENCE_TYPE_DOC (document), 4-APP_REFERENCE_TYPE_WEB_SEARCH (WEB SEARCH), 5-APP_REFERENCE_TYPE_GRAPH_RAG (GraphRAG)</p>
                     * @param _type <p>REFERENCE source TYPE. Enumeration values: 0-APP_REFERENCE_TYPE_UNSPECIFIED (not specified), 1-APP_REFERENCE_TYPE_QA (QA), 2-APP_REFERENCE_TYPE_SEGMENT (fragment), 3-APP_REFERENCE_TYPE_DOC (document), 4-APP_REFERENCE_TYPE_WEB_SEARCH (WEB SEARCH), 5-APP_REFERENCE_TYPE_GRAPH_RAG (GraphRAG)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Reference index</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Reference name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>REFERENCE source TYPE. Enumeration values: 0-APP_REFERENCE_TYPE_UNSPECIFIED (not specified), 1-APP_REFERENCE_TYPE_QA (QA), 2-APP_REFERENCE_TYPE_SEGMENT (fragment), 3-APP_REFERENCE_TYPE_DOC (document), 4-APP_REFERENCE_TYPE_WEB_SEARCH (WEB SEARCH), 5-APP_REFERENCE_TYPE_GRAPH_RAG (GraphRAG)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONREFERENCE_H_
