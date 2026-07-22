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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTASYNCREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Document.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ParseDocumentAsync request structure.
                */
                class ParseDocumentAsyncRequest : public AbstractModel
                {
                public:
                    ParseDocumentAsyncRequest();
                    ~ParseDocumentAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File information.
                     * @return Document File information.
                     * 
                     */
                    Document GetDocument() const;

                    /**
                     * 设置File information.
                     * @param _document File information.
                     * 
                     */
                    void SetDocument(const Document& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取Model name, selectable model list: doc-llm.
                     * @return ModelName Model name, selectable model list: doc-llm.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name, selectable model list: doc-llm.
                     * @param _modelName Model name, selectable model list: doc-llm.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * File information.
                     */
                    Document m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * Model name, selectable model list: doc-llm.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTASYNCREQUEST_H_
