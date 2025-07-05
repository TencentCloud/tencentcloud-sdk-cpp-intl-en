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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeExtension response structure.
                */
                class DescribeExtensionResponse : public AbstractModel
                {
                public:
                    DescribeExtensionResponse();
                    ~DescribeExtensionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Extension.
                     * @return ExtensionId Extension.
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取Domain name.
                     * @return ExtensionDomain Domain name.
                     * 
                     */
                    std::string GetExtensionDomain() const;

                    /**
                     * 判断参数 ExtensionDomain 是否已赋值
                     * @return ExtensionDomain 是否已赋值
                     * 
                     */
                    bool ExtensionDomainHasBeenSet() const;

                    /**
                     * 获取Registered password.
                     * @return Password Registered password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Proxy server address.
                     * @return OutboundProxy Proxy server address.
                     * 
                     */
                    std::string GetOutboundProxy() const;

                    /**
                     * 判断参数 OutboundProxy 是否已赋值
                     * @return OutboundProxy 是否已赋值
                     * 
                     */
                    bool OutboundProxyHasBeenSet() const;

                    /**
                     * 获取Transfer protocol.
                     * @return Transport Transfer protocol.
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 判断参数 Transport 是否已赋值
                     * @return Transport 是否已赋值
                     * 
                     */
                    bool TransportHasBeenSet() const;

                private:

                    /**
                     * Extension.
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_extensionDomain;
                    bool m_extensionDomainHasBeenSet;

                    /**
                     * Registered password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Proxy server address.
                     */
                    std::string m_outboundProxy;
                    bool m_outboundProxyHasBeenSet;

                    /**
                     * Transfer protocol.
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_
