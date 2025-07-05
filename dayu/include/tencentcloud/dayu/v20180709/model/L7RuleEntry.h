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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleSource.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Layer-7 rule
                */
                class L7RuleEntry : public AbstractModel
                {
                public:
                    L7RuleEntry();
                    ~L7RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding protocol. Valid values: [http, https]
                     * @return Protocol Forwarding protocol. Valid values: [http, https]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values: [http, https]
                     * @param _protocol Forwarding protocol. Valid values: [http, https]
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
                     * 获取Forwarding domain name
                     * @return Domain Forwarding domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Forwarding domain name
                     * @param _domain Forwarding domain name
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
                     * 获取Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * @return SourceType Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * @param _sourceType Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence duration in seconds
                     * @return KeepTime Session persistence duration in seconds
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置Session persistence duration in seconds
                     * @param _keepTime Session persistence duration in seconds
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                    /**
                     * 获取Forward list
                     * @return SourceList Forward list
                     * 
                     */
                    std::vector<L4RuleSource> GetSourceList() const;

                    /**
                     * 设置Forward list
                     * @param _sourceList Forward list
                     * 
                     */
                    void SetSourceList(const std::vector<L4RuleSource>& _sourceList);

                    /**
                     * 判断参数 SourceList 是否已赋值
                     * @return SourceList 是否已赋值
                     * 
                     */
                    bool SourceListHasBeenSet() const;

                    /**
                     * 获取Load balancing method. Valid value: [1 (weighted round robin)]
                     * @return LbType Load balancing method. Valid value: [1 (weighted round robin)]
                     * 
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置Load balancing method. Valid value: [1 (weighted round robin)]
                     * @param _lbType Load balancing method. Valid value: [1 (weighted round robin)]
                     * 
                     */
                    void SetLbType(const uint64_t& _lbType);

                    /**
                     * 判断参数 LbType 是否已赋值
                     * @return LbType 是否已赋值
                     * 
                     */
                    bool LbTypeHasBeenSet() const;

                    /**
                     * 获取Session persistence status. Valid values: [0 (disabled), 1 (enabled)]
                     * @return KeepEnable Session persistence status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置Session persistence status. Valid values: [0 (disabled), 1 (enabled)]
                     * @param _keepEnable Session persistence status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    void SetKeepEnable(const uint64_t& _keepEnable);

                    /**
                     * 判断参数 KeepEnable 是否已赋值
                     * @return KeepEnable 是否已赋值
                     * 
                     */
                    bool KeepEnableHasBeenSet() const;

                    /**
                     * 获取Rule ID, which is optional when adding a new rule but required when modifying or deleting a rule;
                     * @return RuleId Rule ID, which is optional when adding a new rule but required when modifying or deleting a rule;
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID, which is optional when adding a new rule but required when modifying or deleting a rule;
                     * @param _ruleId Rule ID, which is optional when adding a new rule but required when modifying or deleting a rule;
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Certificate source, which is required if the forwarding protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]. If the forwarding protocol is HTTP, 0 can be entered for this field
                     * @return CertType Certificate source, which is required if the forwarding protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]. If the forwarding protocol is HTTP, 0 can be entered for this field
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置Certificate source, which is required if the forwarding protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]. If the forwarding protocol is HTTP, 0 can be entered for this field
                     * @param _certType Certificate source, which is required if the forwarding protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]. If the forwarding protocol is HTTP, 0 can be entered for this field
                     * 
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID
                     * @return SSLId If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID
                     * @param _sSLId If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID
                     * 
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     * 
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取If the certificate is an external certificate, this field must be entered with the certificate content. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * @return Cert If the certificate is an external certificate, this field must be entered with the certificate content. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置If the certificate is an external certificate, this field must be entered with the certificate content. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * @param _cert If the certificate is an external certificate, this field must be entered with the certificate content. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取If the certificate is an external certificate, this field must be entered with the certificate key. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * @return PrivateKey If the certificate is an external certificate, this field must be entered with the certificate key. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置If the certificate is an external certificate, this field must be entered with the certificate key. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * @param _privateKey If the certificate is an external certificate, this field must be entered with the certificate key. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleName Rule description
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule description
                     * @param _ruleName Rule description
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule status. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * @return Status Rule status. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * @param _status Rule status. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * @return CCStatus CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    uint64_t GetCCStatus() const;

                    /**
                     * 设置CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * @param _cCStatus CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    void SetCCStatus(const uint64_t& _cCStatus);

                    /**
                     * 判断参数 CCStatus 是否已赋值
                     * @return CCStatus 是否已赋值
                     * 
                     */
                    bool CCStatusHasBeenSet() const;

                    /**
                     * 获取HTTPS CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * @return CCEnable HTTPS CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置HTTPS CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * @param _cCEnable HTTPS CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     * 
                     */
                    void SetCCEnable(const uint64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     * 
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取HTTPS CC protection threshold
                     * @return CCThreshold HTTPS CC protection threshold
                     * 
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置HTTPS CC protection threshold
                     * @param _cCThreshold HTTPS CC protection threshold
                     * 
                     */
                    void SetCCThreshold(const uint64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     * 
                     */
                    bool CCThresholdHasBeenSet() const;

                    /**
                     * 获取HTTPS CC protection level
                     * @return CCLevel HTTPS CC protection level
                     * 
                     */
                    std::string GetCCLevel() const;

                    /**
                     * 设置HTTPS CC protection level
                     * @param _cCLevel HTTPS CC protection level
                     * 
                     */
                    void SetCCLevel(const std::string& _cCLevel);

                    /**
                     * 判断参数 CCLevel 是否已赋值
                     * @return CCLevel 是否已赋值
                     * 
                     */
                    bool CCLevelHasBeenSet() const;

                    /**
                     * 获取Whether to enable **Forward HTTPS requests via HTTP**. Valid values: `0` (disabled) and `1` (enabled). The default value is disabled.
                     * @return HttpsToHttpEnable Whether to enable **Forward HTTPS requests via HTTP**. Valid values: `0` (disabled) and `1` (enabled). The default value is disabled.
                     * 
                     */
                    uint64_t GetHttpsToHttpEnable() const;

                    /**
                     * 设置Whether to enable **Forward HTTPS requests via HTTP**. Valid values: `0` (disabled) and `1` (enabled). The default value is disabled.
                     * @param _httpsToHttpEnable Whether to enable **Forward HTTPS requests via HTTP**. Valid values: `0` (disabled) and `1` (enabled). The default value is disabled.
                     * 
                     */
                    void SetHttpsToHttpEnable(const uint64_t& _httpsToHttpEnable);

                    /**
                     * 判断参数 HttpsToHttpEnable 是否已赋值
                     * @return HttpsToHttpEnable 是否已赋值
                     * 
                     */
                    bool HttpsToHttpEnableHasBeenSet() const;

                    /**
                     * 获取Access port number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VirtualPort Access port number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVirtualPort() const;

                    /**
                     * 设置Access port number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _virtualPort Access port number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirtualPort(const uint64_t& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     * 
                     */
                    bool VirtualPortHasBeenSet() const;

                private:

                    /**
                     * Forwarding protocol. Valid values: [http, https]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding method. Valid values: [1 (forwarding via domain name), 2 (forwarding via IP)]
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Session persistence duration in seconds
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * Forward list
                     */
                    std::vector<L4RuleSource> m_sourceList;
                    bool m_sourceListHasBeenSet;

                    /**
                     * Load balancing method. Valid value: [1 (weighted round robin)]
                     */
                    uint64_t m_lbType;
                    bool m_lbTypeHasBeenSet;

                    /**
                     * Session persistence status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * Rule ID, which is optional when adding a new rule but required when modifying or deleting a rule;
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Certificate source, which is required if the forwarding protocol is HTTPS. Valid value: [2 (Tencent Cloud-hosted certificate)]. If the forwarding protocol is HTTP, 0 can be entered for this field
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * If the certificate is a Tencent Cloud-hosted certificate, this field must be entered with the hosted certificate ID
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * If the certificate is an external certificate, this field must be entered with the certificate content. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * If the certificate is an external certificate, this field must be entered with the certificate key. (As external certificates are no longer supported, this field has been disused and does not need to be entered)
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule status. Valid values: [0 (successfully configured rule), 1 (rule configuration taking effect), 2 (rule configuration failed), 3 (rule deletion taking effect), 5 (rule deletion failed), 6 (rule waiting for configuration), 7 (rule waiting for deletion), 8 (rule waiting for certificate configuration)]
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    uint64_t m_cCStatus;
                    bool m_cCStatusHasBeenSet;

                    /**
                     * HTTPS CC protection status. Valid values: [0 (disabled), 1 (enabled)]
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * HTTPS CC protection threshold
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * HTTPS CC protection level
                     */
                    std::string m_cCLevel;
                    bool m_cCLevelHasBeenSet;

                    /**
                     * Whether to enable **Forward HTTPS requests via HTTP**. Valid values: `0` (disabled) and `1` (enabled). The default value is disabled.
                     */
                    uint64_t m_httpsToHttpEnable;
                    bool m_httpsToHttpEnableHasBeenSet;

                    /**
                     * Access port number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L7RULEENTRY_H_
