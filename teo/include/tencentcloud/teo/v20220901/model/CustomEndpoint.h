/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The configuration information of real-time log delivery to a custom HTTP(S) interface
                */
                class CustomEndpoint : public AbstractModel
                {
                public:
                    CustomEndpoint();
                    ~CustomEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address of the custom HTTP API for real-time log shipping. Currently, only HTTP and HTTPS protocols are supported.
                     * @return Url Address of the custom HTTP API for real-time log shipping. Currently, only HTTP and HTTPS protocols are supported.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Address of the custom HTTP API for real-time log shipping. Currently, only HTTP and HTTPS protocols are supported.
                     * @param _url Address of the custom HTTP API for real-time log shipping. Currently, only HTTP and HTTPS protocols are supported.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Custom SecretId used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * @return AccessId Custom SecretId used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置Custom SecretId used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * @param _accessId Custom SecretId used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取Custom SecretKey used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * @return AccessKey Custom SecretKey used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Custom SecretKey used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * @param _accessKey Custom SecretKey used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Type of data compression. Valid values:<li>gzip: gzip compression.</li>If this parameter is not input, compression is disabled.
                     * @return CompressType Type of data compression. Valid values:<li>gzip: gzip compression.</li>If this parameter is not input, compression is disabled.
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置Type of data compression. Valid values:<li>gzip: gzip compression.</li>If this parameter is not input, compression is disabled.
                     * @param _compressType Type of data compression. Valid values:<li>gzip: gzip compression.</li>If this parameter is not input, compression is disabled.
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                    /**
                     * 获取Type of the application layer protocol used in POST requests for log shipping. Valid values: 
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol.</li>If this parameter is not input, the protocol type is parsed from the URL field.	
                     * @return Protocol Type of the application layer protocol used in POST requests for log shipping. Valid values: 
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol.</li>If this parameter is not input, the protocol type is parsed from the URL field.	
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Type of the application layer protocol used in POST requests for log shipping. Valid values: 
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol.</li>If this parameter is not input, the protocol type is parsed from the URL field.	
                     * @param _protocol Type of the application layer protocol used in POST requests for log shipping. Valid values: 
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol.</li>If this parameter is not input, the protocol type is parsed from the URL field.	
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Custom request header carried in log shipping. For a header carried by default in EdgeOne log pushing, such as Content-Type, the header value you input will overwrite the default value. The header value references a single variable ${batchSize} to obtain the number of log entries included in each POST request.
                     * @return Headers Custom request header carried in log shipping. For a header carried by default in EdgeOne log pushing, such as Content-Type, the header value you input will overwrite the default value. The header value references a single variable ${batchSize} to obtain the number of log entries included in each POST request.
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置Custom request header carried in log shipping. For a header carried by default in EdgeOne log pushing, such as Content-Type, the header value you input will overwrite the default value. The header value references a single variable ${batchSize} to obtain the number of log entries included in each POST request.
                     * @param _headers Custom request header carried in log shipping. For a header carried by default in EdgeOne log pushing, such as Content-Type, the header value you input will overwrite the default value. The header value references a single variable ${batchSize} to obtain the number of log entries included in each POST request.
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * Address of the custom HTTP API for real-time log shipping. Currently, only HTTP and HTTPS protocols are supported.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Custom SecretId used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * Custom SecretKey used for generating an encrypted signature. This parameter is required if the origin server needs authentication.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Type of data compression. Valid values:<li>gzip: gzip compression.</li>If this parameter is not input, compression is disabled.
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                    /**
                     * Type of the application layer protocol used in POST requests for log shipping. Valid values: 
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol.</li>If this parameter is not input, the protocol type is parsed from the URL field.	
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Custom request header carried in log shipping. For a header carried by default in EdgeOne log pushing, such as Content-Type, the header value you input will overwrite the default value. The header value references a single variable ${batchSize} to obtain the number of log entries included in each POST request.
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_
