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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>
#include <tencentcloud/adp/v20260520/model/ToolExample.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ApiToolConfig
                */
                class ApiToolConfig : public AbstractModel
                {
                public:
                    ApiToolConfig();
                    ~ApiToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Request body parameters</p>
                     * @return Body <p>Request body parameters</p>
                     * 
                     */
                    std::vector<RequestParam> GetBody() const;

                    /**
                     * 设置<p>Request body parameters</p>
                     * @param _body <p>Request body parameters</p>
                     * 
                     */
                    void SetBody(const std::vector<RequestParam>& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取<p>Example</p>
                     * @return Example <p>Example</p>
                     * 
                     */
                    ToolExample GetExample() const;

                    /**
                     * 设置<p>Example</p>
                     * @param _example <p>Example</p>
                     * 
                     */
                    void SetExample(const ToolExample& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取<p>External call address of API plug-in</p>
                     * @return ExternalApiUrl <p>External call address of API plug-in</p>
                     * 
                     */
                    std::string GetExternalApiUrl() const;

                    /**
                     * 设置<p>External call address of API plug-in</p>
                     * @param _externalApiUrl <p>External call address of API plug-in</p>
                     * 
                     */
                    void SetExternalApiUrl(const std::string& _externalApiUrl);

                    /**
                     * 判断参数 ExternalApiUrl 是否已赋值
                     * @return ExternalApiUrl 是否已赋值
                     * 
                     */
                    bool ExternalApiUrlHasBeenSet() const;

                    /**
                     * 获取<p>Header</p>
                     * @return Header <p>Header</p>
                     * 
                     */
                    std::vector<RequestParam> GetHeader() const;

                    /**
                     * 设置<p>Header</p>
                     * @param _header <p>Header</p>
                     * 
                     */
                    void SetHeader(const std::vector<RequestParam>& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取<p>Request method</p>
                     * @return Method <p>Request method</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>Request method</p>
                     * @param _method <p>Request method</p>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Output</p>
                     * @return Outputs <p>Output</p>
                     * 
                     */
                    std::vector<ResponseParam> GetOutputs() const;

                    /**
                     * 设置<p>Output</p>
                     * @param _outputs <p>Output</p>
                     * 
                     */
                    void SetOutputs(const std::vector<ResponseParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取<p>Query parameter</p>
                     * @return Query <p>Query parameter</p>
                     * 
                     */
                    std::vector<RequestParam> GetQuery() const;

                    /**
                     * 设置<p>Query parameter</p>
                     * @param _query <p>Query parameter</p>
                     * 
                     */
                    void SetQuery(const std::vector<RequestParam>& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>STREAM_MODE_UNARY</td><td>0</td><td>Non-streaming</td></tr><tr><td>STREAM_MODE_STREAMING</td><td>1</td><td>Streaming</td></tr></tbody></table>
                     * @return StreamMode <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>STREAM_MODE_UNARY</td><td>0</td><td>Non-streaming</td></tr><tr><td>STREAM_MODE_STREAMING</td><td>1</td><td>Streaming</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetStreamMode() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>STREAM_MODE_UNARY</td><td>0</td><td>Non-streaming</td></tr><tr><td>STREAM_MODE_STREAMING</td><td>1</td><td>Streaming</td></tr></tbody></table>
                     * @param _streamMode <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>STREAM_MODE_UNARY</td><td>0</td><td>Non-streaming</td></tr><tr><td>STREAM_MODE_STREAMING</td><td>1</td><td>Streaming</td></tr></tbody></table>
                     * 
                     */
                    void SetStreamMode(const int64_t& _streamMode);

                    /**
                     * 判断参数 StreamMode 是否已赋值
                     * @return StreamMode 是否已赋值
                     * 
                     */
                    bool StreamModeHasBeenSet() const;

                    /**
                     * 获取<p>Address</p>
                     * @return Url <p>Address</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Address</p>
                     * @param _url <p>Address</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * <p>Request body parameters</p>
                     */
                    std::vector<RequestParam> m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * <p>Example</p>
                     */
                    ToolExample m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * <p>External call address of API plug-in</p>
                     */
                    std::string m_externalApiUrl;
                    bool m_externalApiUrlHasBeenSet;

                    /**
                     * <p>Header</p>
                     */
                    std::vector<RequestParam> m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * <p>Request method</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Output</p>
                     */
                    std::vector<ResponseParam> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>Query parameter</p>
                     */
                    std::vector<RequestParam> m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>STREAM_MODE_UNARY</td><td>0</td><td>Non-streaming</td></tr><tr><td>STREAM_MODE_STREAMING</td><td>1</td><td>Streaming</td></tr></tbody></table>
                     */
                    int64_t m_streamMode;
                    bool m_streamModeHasBeenSet;

                    /**
                     * <p>Address</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APITOOLCONFIG_H_
