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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS forwarding rule (input)
                */
                class RuleInput : public AbstractModel
                {
                public:
                    RuleInput();
                    ~RuleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name of the forwarding rule. Length: 1-80.
                     * @return Domain Domain name of the forwarding rule. Length: 1-80.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule. Length: 1-80.
                     * @param Domain Domain name of the forwarding rule. Length: 1-80.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Forwarding rule path. Length: 1-200.
                     * @return Url Forwarding rule path. Length: 1-200.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding rule path. Length: 1-200.
                     * @param Url Forwarding rule path. Length: 1-200.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Session persistence time in seconds. Value range: 30-3,600. Setting it to 0 indicates that session persistence is disabled.
                     * @return SessionExpireTime Session persistence time in seconds. Value range: 30-3,600. Setting it to 0 indicates that session persistence is disabled.
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time in seconds. Value range: 30-3,600. Setting it to 0 indicates that session persistence is disabled.
                     * @param SessionExpireTime Session persistence time in seconds. Value range: 30-3,600. Setting it to 0 indicates that session persistence is disabled.
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取Health check information. For more information, please see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1)
                     * @return HealthCheck Health check information. For more information, please see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1)
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check information. For more information, please see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1)
                     * @param HealthCheck Health check information. For more information, please see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1)
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Certificate information
                     * @return Certificate Certificate information
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Certificate information
                     * @param Certificate Certificate information
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * @return Scheduler Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     * @param Scheduler Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol between the CLB instance and real server. Currently, HTTP/HTTPS/TRPC are supported.
                     * @return ForwardType Forwarding protocol between the CLB instance and real server. Currently, HTTP/HTTPS/TRPC are supported.
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置Forwarding protocol between the CLB instance and real server. Currently, HTTP/HTTPS/TRPC are supported.
                     * @param ForwardType Forwarding protocol between the CLB instance and real server. Currently, HTTP/HTTPS/TRPC are supported.
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     * @return DefaultServer Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     * @param DefaultServer Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     * @return Http2 Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     * @param Http2 Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Target real server type. NODE: binding a general node; TARGETGROUP: binding a target group.
                     * @return TargetType Target real server type. NODE: binding a general node; TARGETGROUP: binding a target group.
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target real server type. NODE: binding a general node; TARGETGROUP: binding a target group.
                     * @param TargetType Target real server type. NODE: binding a general node; TARGETGROUP: binding a target group.
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取TRPC callee server route, which is required when `ForwardType` is `TRPC`.
                     * @return TrpcCallee TRPC callee server route, which is required when `ForwardType` is `TRPC`.
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC callee server route, which is required when `ForwardType` is `TRPC`.
                     * @param TrpcCallee TRPC callee server route, which is required when `ForwardType` is `TRPC`.
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取TRPC calling service API, which is required when `ForwardType` is `TRPC`.
                     * @return TrpcFunc TRPC calling service API, which is required when `ForwardType` is `TRPC`.
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC calling service API, which is required when `ForwardType` is `TRPC`.
                     * @param TrpcFunc TRPC calling service API, which is required when `ForwardType` is `TRPC`.
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names
                     * @return Quic Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names
                     */
                    bool GetQuic() const;

                    /**
                     * 设置Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names
                     * @param Quic Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names
                     */
                    void SetQuic(const bool& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                private:

                    /**
                     * Domain name of the forwarding rule. Length: 1-80.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule path. Length: 1-200.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Session persistence time in seconds. Value range: 30-3,600. Setting it to 0 indicates that session persistence is disabled.
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Health check information. For more information, please see [Health Check](https://intl.cloud.tencent.com/document/product/214/6097?from_cn_redirect=1)
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Request forwarding method of the rule. Value range: WRR, LEAST_CONN, IP_HASH
They represent weighted round robin, least connections, and IP hash, respectively. Default value: WRR.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Forwarding protocol between the CLB instance and real server. Currently, HTTP/HTTPS/TRPC are supported.
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * Whether to set this domain name as the default domain name. Note: Only one default domain name can be set under one listener.
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * Whether to enable HTTP/2. Note: HTTP/2 can be enabled only for HTTPS domain names.
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Target real server type. NODE: binding a general node; TARGETGROUP: binding a target group.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TRPC callee server route, which is required when `ForwardType` is `TRPC`.
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC calling service API, which is required when `ForwardType` is `TRPC`.
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * Whether to enable QUIC. Note: QUIC can be enabled only for HTTPS domain names
                     */
                    bool m_quic;
                    bool m_quicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
