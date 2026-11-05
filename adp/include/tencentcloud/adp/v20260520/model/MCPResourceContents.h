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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_

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
                * MCP ResourceContents. The chat-manage side does not parse internal fields and only passes through the structure.
                */
                class MCPResourceContents : public AbstractModel
                {
                public:
                    MCPResourceContents();
                    ~MCPResourceContents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Binary content. Either this parameter or text must be specified.</p>
                     * @return Blob <p>Binary content. Either this parameter or text must be specified.</p>
                     * 
                     */
                    std::string GetBlob() const;

                    /**
                     * 设置<p>Binary content. Either this parameter or text must be specified.</p>
                     * @param _blob <p>Binary content. Either this parameter or text must be specified.</p>
                     * 
                     */
                    void SetBlob(const std::string& _blob);

                    /**
                     * 判断参数 Blob 是否已赋值
                     * @return Blob 是否已赋值
                     * 
                     */
                    bool BlobHasBeenSet() const;

                    /**
                     * 获取<p>JSON: Original _meta of a single resource</p>
                     * @return Meta <p>JSON: Original _meta of a single resource</p>
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置<p>JSON: Original _meta of a single resource</p>
                     * @param _meta <p>JSON: Original _meta of a single resource</p>
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取<p>MIME type. The HTML of the MCP App is text/html;profile=mcp-app</p>
                     * @return MimeType <p>MIME type. The HTML of the MCP App is text/html;profile=mcp-app</p>
                     * 
                     */
                    std::string GetMimeType() const;

                    /**
                     * 设置<p>MIME type. The HTML of the MCP App is text/html;profile=mcp-app</p>
                     * @param _mimeType <p>MIME type. The HTML of the MCP App is text/html;profile=mcp-app</p>
                     * 
                     */
                    void SetMimeType(const std::string& _mimeType);

                    /**
                     * 判断参数 MimeType 是否已赋值
                     * @return MimeType 是否已赋值
                     * 
                     */
                    bool MimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Text content. Either this field or blob is required.</p>
                     * @return Text <p>Text content. Either this field or blob is required.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text content. Either this field or blob is required.</p>
                     * @param _text <p>Text content. Either this field or blob is required.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Resource URI</p>
                     * @return Uri <p>Resource URI</p>
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>Resource URI</p>
                     * @param _uri <p>Resource URI</p>
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * <p>Binary content. Either this parameter or text must be specified.</p>
                     */
                    std::string m_blob;
                    bool m_blobHasBeenSet;

                    /**
                     * <p>JSON: Original _meta of a single resource</p>
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * <p>MIME type. The HTML of the MCP App is text/html;profile=mcp-app</p>
                     */
                    std::string m_mimeType;
                    bool m_mimeTypeHasBeenSet;

                    /**
                     * <p>Text content. Either this field or blob is required.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Resource URI</p>
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPRESOURCECONTENTS_H_
