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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL7RULEENTRY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL7RULEENTRY_H_

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
                * Layer-7 rule.
                */
                class NewL7RuleEntry : public AbstractModel
                {
                public:
                    NewL7RuleEntry();
                    ~NewL7RuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding protocol. Valid values: `http` and `https`.
                     * @return Protocol Forwarding protocol. Valid values: `http` and `https`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values: `http` and `https`.
                     * @param _protocol Forwarding protocol. Valid values: `http` and `https`.
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
                     * 获取Forwarding domain name.
                     * @return Domain Forwarding domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Forwarding domain name.
                     * @param _domain Forwarding domain name.
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
                     * 获取Forwarding method. Valid values: `1` (by domain name); `2` (by IP).
                     * @return SourceType Forwarding method. Valid values: `1` (by domain name); `2` (by IP).
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Forwarding method. Valid values: `1` (by domain name); `2` (by IP).
                     * @param _sourceType Forwarding method. Valid values: `1` (by domain name); `2` (by IP).
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
                     * 获取Session persistence duration, in seconds.
                     * @return KeepTime Session persistence duration, in seconds.
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置Session persistence duration, in seconds.
                     * @param _keepTime Session persistence duration, in seconds.
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
                     * 获取List of sources
                     * @return SourceList List of sources
                     * 
                     */
                    std::vector<L4RuleSource> GetSourceList() const;

                    /**
                     * 设置List of sources
                     * @param _sourceList List of sources
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
                     * 获取Load balancing method. Valid value: `1` (weighed polling).
                     * @return LbType Load balancing method. Valid value: `1` (weighed polling).
                     * 
                     */
                    uint64_t GetLbType() const;

                    /**
                     * 设置Load balancing method. Valid value: `1` (weighed polling).
                     * @param _lbType Load balancing method. Valid value: `1` (weighed polling).
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
                     * 获取Whether session persistence is enabled. Valid values: `0` (disabled) and `1` (enabled).
                     * @return KeepEnable Whether session persistence is enabled. Valid values: `0` (disabled) and `1` (enabled).
                     * 
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置Whether session persistence is enabled. Valid values: `0` (disabled) and `1` (enabled).
                     * @param _keepEnable Whether session persistence is enabled. Valid values: `0` (disabled) and `1` (enabled).
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
                     * 获取Rule ID. This field is not required for adding a rule, but is required for modifying or deleting a rule.
                     * @return RuleId Rule ID. This field is not required for adding a rule, but is required for modifying or deleting a rule.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID. This field is not required for adding a rule, but is required for modifying or deleting a rule.
                     * @param _ruleId Rule ID. This field is not required for adding a rule, but is required for modifying or deleting a rule.
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
                     * 获取Certificate source. When the forwarding protocol is HTTPS, this field must be set to `2` (Tencent Cloud managed certificate), and for HTTP protocol, it can be set to `0`.
                     * @return CertType Certificate source. When the forwarding protocol is HTTPS, this field must be set to `2` (Tencent Cloud managed certificate), and for HTTP protocol, it can be set to `0`.
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置Certificate source. When the forwarding protocol is HTTPS, this field must be set to `2` (Tencent Cloud managed certificate), and for HTTP protocol, it can be set to `0`.
                     * @param _certType Certificate source. When the forwarding protocol is HTTPS, this field must be set to `2` (Tencent Cloud managed certificate), and for HTTP protocol, it can be set to `0`.
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
                     * 获取When the certificate source is Tencent Cloud managed certificate, this field must be set to the ID of the managed certificate.
                     * @return SSLId When the certificate source is Tencent Cloud managed certificate, this field must be set to the ID of the managed certificate.
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置When the certificate source is Tencent Cloud managed certificate, this field must be set to the ID of the managed certificate.
                     * @param _sSLId When the certificate source is Tencent Cloud managed certificate, this field must be set to the ID of the managed certificate.
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
                     * 获取[Disused] When the certificate is an external certificate, the certificate content should be provided here. 
                     * @return Cert [Disused] When the certificate is an external certificate, the certificate content should be provided here. 
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置[Disused] When the certificate is an external certificate, the certificate content should be provided here. 
                     * @param _cert [Disused] When the certificate is an external certificate, the certificate content should be provided here. 
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
                     * 获取[Disused] When the certificate is an external certificate, the certificate key should be provided here. 
                     * @return PrivateKey [Disused] When the certificate is an external certificate, the certificate key should be provided here. 
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置[Disused] When the certificate is an external certificate, the certificate key should be provided here. 
                     * @param _privateKey [Disused] When the certificate is an external certificate, the certificate key should be provided here. 
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
                     * 获取Rule description.
                     * @return RuleName Rule description.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule description.
                     * @param _ruleName Rule description.
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
                     * 获取Rule status. Valid values: `0` (the rule was successfully configured), `1` (configuring the rule), `2` (rule configuration failed), `3` (deleting the rule), `5` (failed to delete rule), `6` (rule awaiting configuration), `7` (rule awaiting deletion), and `8` (rule awaiting certificate configuration).
                     * @return Status Rule status. Valid values: `0` (the rule was successfully configured), `1` (configuring the rule), `2` (rule configuration failed), `3` (deleting the rule), `5` (failed to delete rule), `6` (rule awaiting configuration), `7` (rule awaiting deletion), and `8` (rule awaiting certificate configuration).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status. Valid values: `0` (the rule was successfully configured), `1` (configuring the rule), `2` (rule configuration failed), `3` (deleting the rule), `5` (failed to delete rule), `6` (rule awaiting configuration), `7` (rule awaiting deletion), and `8` (rule awaiting certificate configuration).
                     * @param _status Rule status. Valid values: `0` (the rule was successfully configured), `1` (configuring the rule), `2` (rule configuration failed), `3` (deleting the rule), `5` (failed to delete rule), `6` (rule awaiting configuration), `7` (rule awaiting deletion), and `8` (rule awaiting certificate configuration).
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
                     * 获取CC protection status. Valid values: `0` (disabled) and `1` (enabled).
                     * @return CCStatus CC protection status. Valid values: `0` (disabled) and `1` (enabled).
                     * 
                     */
                    uint64_t GetCCStatus() const;

                    /**
                     * 设置CC protection status. Valid values: `0` (disabled) and `1` (enabled).
                     * @param _cCStatus CC protection status. Valid values: `0` (disabled) and `1` (enabled).
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
                     * 获取CC protection status based on HTTPS. Valid values: `0` (disabled) and `1` (enabled).
                     * @return CCEnable CC protection status based on HTTPS. Valid values: `0` (disabled) and `1` (enabled).
                     * 
                     */
                    uint64_t GetCCEnable() const;

                    /**
                     * 设置CC protection status based on HTTPS. Valid values: `0` (disabled) and `1` (enabled).
                     * @param _cCEnable CC protection status based on HTTPS. Valid values: `0` (disabled) and `1` (enabled).
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
                     * 获取CC protection threshold based on HTTPS.
                     * @return CCThreshold CC protection threshold based on HTTPS.
                     * 
                     */
                    uint64_t GetCCThreshold() const;

                    /**
                     * 设置CC protection threshold based on HTTPS.
                     * @param _cCThreshold CC protection threshold based on HTTPS.
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
                     * 获取CC protection level based on HTTPS.
                     * @return CCLevel CC protection level based on HTTPS.
                     * 
                     */
                    std::string GetCCLevel() const;

                    /**
                     * 设置CC protection level based on HTTPS.
                     * @param _cCLevel CC protection level based on HTTPS.
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
                     * 获取Region code.
                     * @return Region Region code.
                     * 
                     */
                    uint64_t GetRegion() const;

                    /**
                     * 设置Region code.
                     * @param _region Region code.
                     * 
                     */
                    void SetRegion(const uint64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID.
                     * @return Id Anti-DDoS instance ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID.
                     * @param _id Anti-DDoS instance ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance IP address.
                     * @return Ip Anti-DDoS instance IP address.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Anti-DDoS instance IP address.
                     * @param _ip Anti-DDoS instance IP address.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * Forwarding protocol. Valid values: `http` and `https`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Forwarding domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding method. Valid values: `1` (by domain name); `2` (by IP).
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Session persistence duration, in seconds.
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                    /**
                     * List of sources
                     */
                    std::vector<L4RuleSource> m_sourceList;
                    bool m_sourceListHasBeenSet;

                    /**
                     * Load balancing method. Valid value: `1` (weighed polling).
                     */
                    uint64_t m_lbType;
                    bool m_lbTypeHasBeenSet;

                    /**
                     * Whether session persistence is enabled. Valid values: `0` (disabled) and `1` (enabled).
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * Rule ID. This field is not required for adding a rule, but is required for modifying or deleting a rule.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Certificate source. When the forwarding protocol is HTTPS, this field must be set to `2` (Tencent Cloud managed certificate), and for HTTP protocol, it can be set to `0`.
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * When the certificate source is Tencent Cloud managed certificate, this field must be set to the ID of the managed certificate.
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * [Disused] When the certificate is an external certificate, the certificate content should be provided here. 
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * [Disused] When the certificate is an external certificate, the certificate key should be provided here. 
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Rule description.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule status. Valid values: `0` (the rule was successfully configured), `1` (configuring the rule), `2` (rule configuration failed), `3` (deleting the rule), `5` (failed to delete rule), `6` (rule awaiting configuration), `7` (rule awaiting deletion), and `8` (rule awaiting certificate configuration).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CC protection status. Valid values: `0` (disabled) and `1` (enabled).
                     */
                    uint64_t m_cCStatus;
                    bool m_cCStatusHasBeenSet;

                    /**
                     * CC protection status based on HTTPS. Valid values: `0` (disabled) and `1` (enabled).
                     */
                    uint64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * CC protection threshold based on HTTPS.
                     */
                    uint64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                    /**
                     * CC protection level based on HTTPS.
                     */
                    std::string m_cCLevel;
                    bool m_cCLevelHasBeenSet;

                    /**
                     * Region code.
                     */
                    uint64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Anti-DDoS instance ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Anti-DDoS instance IP address.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_NEWL7RULEENTRY_H_
