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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRuleValue.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress rule configuration
                */
                class IngressRule : public AbstractModel
                {
                public:
                    IngressRule();
                    ~IngressRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ingress rule value
                     * @return Http ingress rule value
                     * 
                     */
                    IngressRuleValue GetHttp() const;

                    /**
                     * 设置ingress rule value
                     * @param _http ingress rule value
                     * 
                     */
                    void SetHttp(const IngressRuleValue& _http);

                    /**
                     * 判断参数 Http 是否已赋值
                     * @return Http 是否已赋值
                     * 
                     */
                    bool HttpHasBeenSet() const;

                    /**
                     * 获取Host address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Host Host address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _host Host address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Protocol. Options include HTTP and HTTPS. The default option is HTTP.
                     * @return Protocol Protocol. Options include HTTP and HTTPS. The default option is HTTP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Options include HTTP and HTTPS. The default option is HTTP.
                     * @param _protocol Protocol. Options include HTTP and HTTPS. The default option is HTTP.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * ingress rule value
                     */
                    IngressRuleValue m_http;
                    bool m_httpHasBeenSet;

                    /**
                     * Host address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Protocol. Options include HTTP and HTTPS. The default option is HTTP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_
