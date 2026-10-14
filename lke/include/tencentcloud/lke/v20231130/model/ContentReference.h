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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/DocReference.h>
#include <tencentcloud/lke/v20231130/model/QaReference.h>
#include <tencentcloud/lke/v20231130/model/WebSearchReference.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Session content reference information
                */
                class ContentReference : public AbstractModel
                {
                public:
                    ContentReference();
                    ~ContentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source index ID
                     * @return Index Source index ID
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Source index ID
                     * @param _index Source index ID
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
                     * 获取Reference source name
                     * @return Name Reference source name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Reference source name
                     * @param _name Reference source name
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
                     * 获取Reference source type
1: QA
2: Document fragment
4: Online retrieved content
                     * @return Type Reference source type
1: QA
2: Document fragment
4: Online retrieved content
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Reference source type
1: QA
2: Document fragment
4: Online retrieved content
                     * @param _type Reference source type
1: QA
2: Document fragment
4: Online retrieved content
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Document fragment reference
                     * @return DocRefer Document fragment reference
                     * 
                     */
                    DocReference GetDocRefer() const;

                    /**
                     * 设置Document fragment reference
                     * @param _docRefer Document fragment reference
                     * 
                     */
                    void SetDocRefer(const DocReference& _docRefer);

                    /**
                     * 判断参数 DocRefer 是否已赋值
                     * @return DocRefer 是否已赋值
                     * 
                     */
                    bool DocReferHasBeenSet() const;

                    /**
                     * 获取QA reference
                     * @return QaRefer QA reference
                     * 
                     */
                    QaReference GetQaRefer() const;

                    /**
                     * 设置QA reference
                     * @param _qaRefer QA reference
                     * 
                     */
                    void SetQaRefer(const QaReference& _qaRefer);

                    /**
                     * 判断参数 QaRefer 是否已赋值
                     * @return QaRefer 是否已赋值
                     * 
                     */
                    bool QaReferHasBeenSet() const;

                    /**
                     * 获取Reference information for online retrieval content
                     * @return WebSearchRefer Reference information for online retrieval content
                     * 
                     */
                    WebSearchReference GetWebSearchRefer() const;

                    /**
                     * 设置Reference information for online retrieval content
                     * @param _webSearchRefer Reference information for online retrieval content
                     * 
                     */
                    void SetWebSearchRefer(const WebSearchReference& _webSearchRefer);

                    /**
                     * 判断参数 WebSearchRefer 是否已赋值
                     * @return WebSearchRefer 是否已赋值
                     * 
                     */
                    bool WebSearchReferHasBeenSet() const;

                private:

                    /**
                     * Source index ID
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Reference source name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Reference source type
1: QA
2: Document fragment
4: Online retrieved content
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Document fragment reference
                     */
                    DocReference m_docRefer;
                    bool m_docReferHasBeenSet;

                    /**
                     * QA reference
                     */
                    QaReference m_qaRefer;
                    bool m_qaReferHasBeenSet;

                    /**
                     * Reference information for online retrieval content
                     */
                    WebSearchReference m_webSearchRefer;
                    bool m_webSearchReferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_
