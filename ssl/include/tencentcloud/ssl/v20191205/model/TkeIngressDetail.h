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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TKEINGRESSDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TKEINGRESSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a TKE Ingress instance
                */
                class TkeIngressDetail : public AbstractModel
                {
                public:
                    TkeIngressDetail();
                    ~TkeIngressDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The Ingress name.
                     * @return IngressName The Ingress name.
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置The Ingress name.
                     * @param _ingressName The Ingress name.
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取The list of TLS domains.
                     * @return TlsDomains The list of TLS domains.
                     * 
                     */
                    std::vector<std::string> GetTlsDomains() const;

                    /**
                     * 设置The list of TLS domains.
                     * @param _tlsDomains The list of TLS domains.
                     * 
                     */
                    void SetTlsDomains(const std::vector<std::string>& _tlsDomains);

                    /**
                     * 判断参数 TlsDomains 是否已赋值
                     * @return TlsDomains 是否已赋值
                     * 
                     */
                    bool TlsDomainsHasBeenSet() const;

                    /**
                     * 获取The list of Ingress domains.
                     * @return Domains The list of Ingress domains.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The list of Ingress domains.
                     * @param _domains The list of Ingress domains.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * The Ingress name.
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * The list of TLS domains.
                     */
                    std::vector<std::string> m_tlsDomains;
                    bool m_tlsDomainsHasBeenSet;

                    /**
                     * The list of Ingress domains.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TKEINGRESSDETAIL_H_
