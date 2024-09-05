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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateOutput.h>
#include <tencentcloud/clb/v20180317/model/RewriteTarget.h>
#include <tencentcloud/clb/v20180317/model/BasicTargetGroupInfo.h>
#include <tencentcloud/clb/v20180317/model/OAuth.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS listener forwarding rule (output)
                */
                class RuleOutput : public AbstractModel
                {
                public:
                    RuleOutput();
                    ~RuleOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding rule ID
                     * @return LocationId Forwarding rule ID
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID
                     * @param _locationId Forwarding rule ID
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Domain name of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Forwarding rule path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Forwarding rule path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding rule path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Forwarding rule path.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Session persistence time
                     * @return SessionExpireTime Session persistence time
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置Session persistence time
                     * @param _sessionExpireTime Session persistence time
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取Health check information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthCheck Health check information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthCheck Health check information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Certificate information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Certificate Certificate information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CertificateOutput GetCertificate() const;

                    /**
                     * 设置Certificate information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificate Certificate information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificate(const CertificateOutput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Request forwarding method in the rules.WRR, LEAST_CONN, and IP_HASH respectively indicate weighted round robin, least connections, and IP hash.
                     * @return Scheduler Request forwarding method in the rules.WRR, LEAST_CONN, and IP_HASH respectively indicate weighted round robin, least connections, and IP hash.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Request forwarding method in the rules.WRR, LEAST_CONN, and IP_HASH respectively indicate weighted round robin, least connections, and IP hash.
                     * @param _scheduler Request forwarding method in the rules.WRR, LEAST_CONN, and IP_HASH respectively indicate weighted round robin, least connections, and IP hash.
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取ID of the listener to which the forwarding rule belongs
                     * @return ListenerId ID of the listener to which the forwarding rule belongs
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置ID of the listener to which the forwarding rule belongs
                     * @param _listenerId ID of the listener to which the forwarding rule belongs
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Redirect target information of a forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RewriteTarget Redirect target information of a forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RewriteTarget GetRewriteTarget() const;

                    /**
                     * 设置Redirect target information of a forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rewriteTarget Redirect target information of a forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRewriteTarget(const RewriteTarget& _rewriteTarget);

                    /**
                     * 判断参数 RewriteTarget 是否已赋值
                     * @return RewriteTarget 是否已赋值
                     * 
                     */
                    bool RewriteTargetHasBeenSet() const;

                    /**
                     * 获取Whether to enable gzip
                     * @return HttpGzip Whether to enable gzip
                     * 
                     */
                    bool GetHttpGzip() const;

                    /**
                     * 设置Whether to enable gzip
                     * @param _httpGzip Whether to enable gzip
                     * 
                     */
                    void SetHttpGzip(const bool& _httpGzip);

                    /**
                     * 判断参数 HttpGzip 是否已赋值
                     * @return HttpGzip 是否已赋值
                     * 
                     */
                    bool HttpGzipHasBeenSet() const;

                    /**
                     * 获取Whether the forwarding rule is automatically created
                     * @return BeAutoCreated Whether the forwarding rule is automatically created
                     * 
                     */
                    bool GetBeAutoCreated() const;

                    /**
                     * 设置Whether the forwarding rule is automatically created
                     * @param _beAutoCreated Whether the forwarding rule is automatically created
                     * 
                     */
                    void SetBeAutoCreated(const bool& _beAutoCreated);

                    /**
                     * 判断参数 BeAutoCreated 是否已赋值
                     * @return BeAutoCreated 是否已赋值
                     * 
                     */
                    bool BeAutoCreatedHasBeenSet() const;

                    /**
                     * 获取Whether to use as the default domain name
                     * @return DefaultServer Whether to use as the default domain name
                     * 
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置Whether to use as the default domain name
                     * @param _defaultServer Whether to use as the default domain name
                     * 
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     * 
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取Whether to enable Http2
                     * @return Http2 Whether to enable Http2
                     * 
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置Whether to enable Http2
                     * @param _http2 Whether to enable Http2
                     * 
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Forwarding protocol between CLB and real server
                     * @return ForwardType Forwarding protocol between CLB and real server
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置Forwarding protocol between CLB and real server
                     * @param _forwardType Forwarding protocol between CLB and real server
                     * 
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     * 
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取Forwarding rule creation time
                     * @return CreateTime Forwarding rule creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Forwarding rule creation time
                     * @param _createTime Forwarding rule creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Real server type. NODE indicates binding to a general node, and TARGETGROUP indicates binding to a target group.
                     * @return TargetType Real server type. NODE indicates binding to a general node, and TARGETGROUP indicates binding to a target group.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Real server type. NODE indicates binding to a general node, and TARGETGROUP indicates binding to a target group.
                     * @param _targetType Real server type. NODE indicates binding to a general node, and TARGETGROUP indicates binding to a target group.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Basic information of a bound target group. This field will be returned if a target group is bound to a rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetGroup Basic information of a bound target group. This field will be returned if a target group is bound to a rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BasicTargetGroupInfo GetTargetGroup() const;

                    /**
                     * 设置Basic information of a bound target group. This field will be returned if a target group is bound to a rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetGroup Basic information of a bound target group. This field will be returned if a target group is bound to a rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetGroup(const BasicTargetGroupInfo& _targetGroup);

                    /**
                     * 判断参数 TargetGroup 是否已赋值
                     * @return TargetGroup 是否已赋值
                     * 
                     */
                    bool TargetGroupHasBeenSet() const;

                    /**
                     * 获取WAF instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WafDomainId WAF instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWafDomainId() const;

                    /**
                     * 设置WAF instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wafDomainId WAF instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWafDomainId(const std::string& _wafDomainId);

                    /**
                     * 判断参数 WafDomainId 是否已赋值
                     * @return WafDomainId 是否已赋值
                     * 
                     */
                    bool WafDomainIdHasBeenSet() const;

                    /**
                     * 获取TRPC callee server route, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrpcCallee TRPC callee server route, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC callee server route, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trpcCallee TRPC callee server route, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     * 
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取TRPC calling service API, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrpcFunc TRPC calling service API, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC calling service API, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trpcFunc TRPC calling service API, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     * 
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取QUIC status. QUIC_ACTIVE indicates enabled, and QUIC_INACTIVE indicates disabled. Note: QUIC can be enabled only for HTTPS domain names.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QuicStatus QUIC status. QUIC_ACTIVE indicates enabled, and QUIC_INACTIVE indicates disabled. Note: QUIC can be enabled only for HTTPS domain names.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuicStatus() const;

                    /**
                     * 设置QUIC status. QUIC_ACTIVE indicates enabled, and QUIC_INACTIVE indicates disabled. Note: QUIC can be enabled only for HTTPS domain names.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quicStatus QUIC status. QUIC_ACTIVE indicates enabled, and QUIC_INACTIVE indicates disabled. Note: QUIC can be enabled only for HTTPS domain names.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuicStatus(const std::string& _quicStatus);

                    /**
                     * 判断参数 QuicStatus 是否已赋值
                     * @return QuicStatus 是否已赋值
                     * 
                     */
                    bool QuicStatusHasBeenSet() const;

                    /**
                     * 获取List of domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Domains List of domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _domains List of domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取List of bound target groups
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetGroupList List of bound target groups
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BasicTargetGroupInfo> GetTargetGroupList() const;

                    /**
                     * 设置List of bound target groups
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetGroupList List of bound target groups
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetGroupList(const std::vector<BasicTargetGroupInfo>& _targetGroupList);

                    /**
                     * 判断参数 TargetGroupList 是否已赋值
                     * @return TargetGroupList 是否已赋值
                     * 
                     */
                    bool TargetGroupListHasBeenSet() const;

                    /**
                     * 获取OAuth configuration status information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OAuth OAuth configuration status information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OAuth GetOAuth() const;

                    /**
                     * 设置OAuth configuration status information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _oAuth OAuth configuration status information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOAuth(const OAuth& _oAuth);

                    /**
                     * 判断参数 OAuth 是否已赋值
                     * @return OAuth 是否已赋值
                     * 
                     */
                    bool OAuthHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Session persistence time
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * Health check information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Certificate information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateOutput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Request forwarding method in the rules.WRR, LEAST_CONN, and IP_HASH respectively indicate weighted round robin, least connections, and IP hash.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * ID of the listener to which the forwarding rule belongs
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Redirect target information of a forwarding rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RewriteTarget m_rewriteTarget;
                    bool m_rewriteTargetHasBeenSet;

                    /**
                     * Whether to enable gzip
                     */
                    bool m_httpGzip;
                    bool m_httpGzipHasBeenSet;

                    /**
                     * Whether the forwarding rule is automatically created
                     */
                    bool m_beAutoCreated;
                    bool m_beAutoCreatedHasBeenSet;

                    /**
                     * Whether to use as the default domain name
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * Whether to enable Http2
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Forwarding protocol between CLB and real server
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * Forwarding rule creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Real server type. NODE indicates binding to a general node, and TARGETGROUP indicates binding to a target group.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Basic information of a bound target group. This field will be returned if a target group is bound to a rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BasicTargetGroupInfo m_targetGroup;
                    bool m_targetGroupHasBeenSet;

                    /**
                     * WAF instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wafDomainId;
                    bool m_wafDomainIdHasBeenSet;

                    /**
                     * TRPC callee server route, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC calling service API, which is valid when `ForwardType` is `TRPC`. This is now only for internal usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * QUIC status. QUIC_ACTIVE indicates enabled, and QUIC_INACTIVE indicates disabled. Note: QUIC can be enabled only for HTTPS domain names.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quicStatus;
                    bool m_quicStatusHasBeenSet;

                    /**
                     * List of domain names associated with the forwarding rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * List of bound target groups
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BasicTargetGroupInfo> m_targetGroupList;
                    bool m_targetGroupListHasBeenSet;

                    /**
                     * OAuth configuration status information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OAuth m_oAuth;
                    bool m_oAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_
