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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostName.h>
#include <tencentcloud/teo/v20220901/model/URLPath.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectQueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Access URL redirect configuration parameters.
                */
                class AccessURLRedirectParameters : public AbstractModel
                {
                public:
                    AccessURLRedirectParameters();
                    ~AccessURLRedirectParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code. valid values: 301, 302, 303, 307, 308.
                     * @return StatusCode Status code. valid values: 301, 302, 303, 307, 308.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Status code. valid values: 301, 302, 303, 307, 308.
                     * @param _statusCode Status code. valid values: 301, 302, 303, 307, 308.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Target request protocol. valid values:.
<Li>Http: target request protocol http;</li>.
<Li>Https: target request protocol https;</li>.
<Li>Follow: follow the request.</li>.
                     * @return Protocol Target request protocol. valid values:.
<Li>Http: target request protocol http;</li>.
<Li>Https: target request protocol https;</li>.
<Li>Follow: follow the request.</li>.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Target request protocol. valid values:.
<Li>Http: target request protocol http;</li>.
<Li>Https: target request protocol https;</li>.
<Li>Follow: follow the request.</li>.
                     * @param _protocol Target request protocol. valid values:.
<Li>Http: target request protocol http;</li>.
<Li>Https: target request protocol https;</li>.
<Li>Follow: follow the request.</li>.
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
                     * 获取Target hostname.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HostName Target hostname.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HostName GetHostName() const;

                    /**
                     * 设置Target hostname.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hostName Target hostname.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHostName(const HostName& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Target path.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return URLPath Target path.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    URLPath GetURLPath() const;

                    /**
                     * 设置Target path.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _uRLPath Target path.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetURLPath(const URLPath& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

                    /**
                     * 获取Carry query parameters.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return QueryString Carry query parameters.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    AccessURLRedirectQueryString GetQueryString() const;

                    /**
                     * 设置Carry query parameters.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _queryString Carry query parameters.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetQueryString(const AccessURLRedirectQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * Status code. valid values: 301, 302, 303, 307, 308.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Target request protocol. valid values:.
<Li>Http: target request protocol http;</li>.
<Li>Https: target request protocol https;</li>.
<Li>Follow: follow the request.</li>.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Target hostname.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HostName m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Target path.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    URLPath m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * Carry query parameters.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    AccessURLRedirectQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
