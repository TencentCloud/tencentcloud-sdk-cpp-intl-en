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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/ChunkDocument.h>
#include <tencentcloud/es/v20250101/model/ChunkConfig.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ChunkDocument request structure.
                */
                class ChunkDocumentRequest : public AbstractModel
                {
                public:
                    ChunkDocumentRequest();
                    ~ChunkDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Slice file info.
                     * @return Document Slice file info.
                     * 
                     */
                    ChunkDocument GetDocument() const;

                    /**
                     * 设置Slice file info.
                     * @param _document Slice file info.
                     * 
                     */
                    void SetDocument(const ChunkDocument& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取Model name, selectable model list: doc-chunk.
                     * @return ModelName Model name, selectable model list: doc-chunk.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name, selectable model list: doc-chunk.
                     * @param _modelName Model name, selectable model list: doc-chunk.
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
                     * 获取File slice configuration.
                     * @return Config File slice configuration.
                     * 
                     */
                    ChunkConfig GetConfig() const;

                    /**
                     * 设置File slice configuration.
                     * @param _config File slice configuration.
                     * 
                     */
                    void SetConfig(const ChunkConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Slice file info.
                     */
                    ChunkDocument m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * Model name, selectable model list: doc-chunk.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * File slice configuration.
                     */
                    ChunkConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTREQUEST_H_
