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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLDOMAININFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/IntlContactInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The domain information set.
                */
                class IntlDomainInfo : public AbstractModel
                {
                public:
                    IntlDomainInfo();
                    ~IntlDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The auto-renewal flag. Valid values: `0` (disabled by default), `1` (enabled), `2` (disabled).
                     * @return AutoRenew The auto-renewal flag. Valid values: `0` (disabled by default), `1` (enabled), `2` (disabled).
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置The auto-renewal flag. Valid values: `0` (disabled by default), `1` (enabled), `2` (disabled).
                     * @param _autoRenew The auto-renewal flag. Valid values: `0` (disabled by default), `1` (enabled), `2` (disabled).
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取The registration time.
                     * @return CreationDate The registration time.
                     * 
                     */
                    std::string GetCreationDate() const;

                    /**
                     * 设置The registration time.
                     * @param _creationDate The registration time.
                     * 
                     */
                    void SetCreationDate(const std::string& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                    /**
                     * 获取The domain ID.
                     * @return DomainId The domain ID.
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置The domain ID.
                     * @param _domainId The domain ID.
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取The DNS status. Valid values: `1` (DNSPod), `2` (others), `3` (unknown).
                     * @return DnsStatus The DNS status. Valid values: `1` (DNSPod), `2` (others), `3` (unknown).
                     * 
                     */
                    int64_t GetDnsStatus() const;

                    /**
                     * 设置The DNS status. Valid values: `1` (DNSPod), `2` (others), `3` (unknown).
                     * @param _dnsStatus The DNS status. Valid values: `1` (DNSPod), `2` (others), `3` (unknown).
                     * 
                     */
                    void SetDnsStatus(const int64_t& _dnsStatus);

                    /**
                     * 判断参数 DnsStatus 是否已赋值
                     * @return DnsStatus 是否已赋值
                     * 
                     */
                    bool DnsStatusHasBeenSet() const;

                    /**
                     * 获取The domains.
                     * @return DomainName The domains.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The domains.
                     * @param _domainName The domains.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取The domain status.
                     * @return DomainStatus The domain status.
                     * 
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置The domain status.
                     * @param _domainStatus The domain status.
                     * 
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取The purchase status of the domain. Valid values:
`ok`: Normal.
`RegisterPending`: Pending registration.
`RegisterDoing`: Registration in progress.
`RegisterFailed`: Registration failed.
`RenewPending`: Renewal grace period.
`RenewDoing`: Renewing.
`RedemptionPending`: Redemption period.
`AboutToExpire`: About to expire.
`TransferPending`: Pending transfer.
`TransferTransing`: Transfer in progress.
`TransferFailed`: Transfer failed.
                     * @return Status The purchase status of the domain. Valid values:
`ok`: Normal.
`RegisterPending`: Pending registration.
`RegisterDoing`: Registration in progress.
`RegisterFailed`: Registration failed.
`RenewPending`: Renewal grace period.
`RenewDoing`: Renewing.
`RedemptionPending`: Redemption period.
`AboutToExpire`: About to expire.
`TransferPending`: Pending transfer.
`TransferTransing`: Transfer in progress.
`TransferFailed`: Transfer failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The purchase status of the domain. Valid values:
`ok`: Normal.
`RegisterPending`: Pending registration.
`RegisterDoing`: Registration in progress.
`RegisterFailed`: Registration failed.
`RenewPending`: Renewal grace period.
`RenewDoing`: Renewing.
`RedemptionPending`: Redemption period.
`AboutToExpire`: About to expire.
`TransferPending`: Pending transfer.
`TransferTransing`: Transfer in progress.
`TransferFailed`: Transfer failed.
                     * @param _status The purchase status of the domain. Valid values:
`ok`: Normal.
`RegisterPending`: Pending registration.
`RegisterDoing`: Registration in progress.
`RegisterFailed`: Registration failed.
`RenewPending`: Renewal grace period.
`RenewDoing`: Renewing.
`RedemptionPending`: Redemption period.
`AboutToExpire`: About to expire.
`TransferPending`: Pending transfer.
`TransferTransing`: Transfer in progress.
`TransferFailed`: Transfer failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The expiration date.
                     * @return ExpirationDate The expiration date.
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置The expiration date.
                     * @param _expirationDate The expiration date.
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取The auto-renewal flag. Valid values: `1` (enabled), `2` (disabled), `3` (disabled by default).
                     * @return ExpireMessage The auto-renewal flag. Valid values: `1` (enabled), `2` (disabled), `3` (disabled by default).
                     * 
                     */
                    int64_t GetExpireMessage() const;

                    /**
                     * 设置The auto-renewal flag. Valid values: `1` (enabled), `2` (disabled), `3` (disabled by default).
                     * @param _expireMessage The auto-renewal flag. Valid values: `1` (enabled), `2` (disabled), `3` (disabled by default).
                     * 
                     */
                    void SetExpireMessage(const int64_t& _expireMessage);

                    /**
                     * 判断参数 ExpireMessage 是否已赋值
                     * @return ExpireMessage 是否已赋值
                     * 
                     */
                    bool ExpireMessageHasBeenSet() const;

                    /**
                     * 获取Whether the domain is a premium one.
                     * @return IsPremium Whether the domain is a premium one.
                     * 
                     */
                    bool GetIsPremium() const;

                    /**
                     * 设置Whether the domain is a premium one.
                     * @param _isPremium Whether the domain is a premium one.
                     * 
                     */
                    void SetIsPremium(const bool& _isPremium);

                    /**
                     * 判断参数 IsPremium 是否已赋值
                     * @return IsPremium 是否已赋值
                     * 
                     */
                    bool IsPremiumHasBeenSet() const;

                    /**
                     * 获取The DNS server of the domain.
                     * @return Dns The DNS server of the domain.
                     * 
                     */
                    std::vector<std::string> GetDns() const;

                    /**
                     * 设置The DNS server of the domain.
                     * @param _dns The DNS server of the domain.
                     * 
                     */
                    void SetDns(const std::vector<std::string>& _dns);

                    /**
                     * 判断参数 Dns 是否已赋值
                     * @return Dns 是否已赋值
                     * 
                     */
                    bool DnsHasBeenSet() const;

                    /**
                     * 获取The contact information.
                     * @return ContactInfo The contact information.
                     * 
                     */
                    IntlContactInfo GetContactInfo() const;

                    /**
                     * 设置The contact information.
                     * @param _contactInfo The contact information.
                     * 
                     */
                    void SetContactInfo(const IntlContactInfo& _contactInfo);

                    /**
                     * 判断参数 ContactInfo 是否已赋值
                     * @return ContactInfo 是否已赋值
                     * 
                     */
                    bool ContactInfoHasBeenSet() const;

                    /**
                     * 获取The number of years available for renewal. The value `0` indicates that the domain has reached its maximum validity period (10 years) and cannot be renewed.
                     * @return CanRenewYears The number of years available for renewal. The value `0` indicates that the domain has reached its maximum validity period (10 years) and cannot be renewed.
                     * 
                     */
                    int64_t GetCanRenewYears() const;

                    /**
                     * 设置The number of years available for renewal. The value `0` indicates that the domain has reached its maximum validity period (10 years) and cannot be renewed.
                     * @param _canRenewYears The number of years available for renewal. The value `0` indicates that the domain has reached its maximum validity period (10 years) and cannot be renewed.
                     * 
                     */
                    void SetCanRenewYears(const int64_t& _canRenewYears);

                    /**
                     * 判断参数 CanRenewYears 是否已赋值
                     * @return CanRenewYears 是否已赋值
                     * 
                     */
                    bool CanRenewYearsHasBeenSet() const;

                    /**
                     * 获取The registrar type. If the value is `epp`, the registration time on the page is followed by (UTC). Otherwise, it is followed by (UTC+8).
                     * @return RegistrarType The registrar type. If the value is `epp`, the registration time on the page is followed by (UTC). Otherwise, it is followed by (UTC+8).
                     * 
                     */
                    std::string GetRegistrarType() const;

                    /**
                     * 设置The registrar type. If the value is `epp`, the registration time on the page is followed by (UTC). Otherwise, it is followed by (UTC+8).
                     * @param _registrarType The registrar type. If the value is `epp`, the registration time on the page is followed by (UTC). Otherwise, it is followed by (UTC+8).
                     * 
                     */
                    void SetRegistrarType(const std::string& _registrarType);

                    /**
                     * 判断参数 RegistrarType 是否已赋值
                     * @return RegistrarType 是否已赋值
                     * 
                     */
                    bool RegistrarTypeHasBeenSet() const;

                    /**
                     * 获取The account to which the domain belongs.
                     * @return Uin The account to which the domain belongs.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置The account to which the domain belongs.
                     * @param _uin The account to which the domain belongs.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取The profile ID.
                     * @return TemplateId The profile ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The profile ID.
                     * @param _templateId The profile ID.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Whether DNSSEC is supported.
                     * @return SupportDnssec Whether DNSSEC is supported.
                     * 
                     */
                    bool GetSupportDnssec() const;

                    /**
                     * 设置Whether DNSSEC is supported.
                     * @param _supportDnssec Whether DNSSEC is supported.
                     * 
                     */
                    void SetSupportDnssec(const bool& _supportDnssec);

                    /**
                     * 判断参数 SupportDnssec 是否已赋值
                     * @return SupportDnssec 是否已赋值
                     * 
                     */
                    bool SupportDnssecHasBeenSet() const;

                    /**
                     * 获取WHOIS privacy service status. Valid values: `1` (enabled), `2` (disabled), `3` (enabling), `4` (disabling).
                     * @return WhoisPrivacy WHOIS privacy service status. Valid values: `1` (enabled), `2` (disabled), `3` (enabling), `4` (disabling).
                     * 
                     */
                    int64_t GetWhoisPrivacy() const;

                    /**
                     * 设置WHOIS privacy service status. Valid values: `1` (enabled), `2` (disabled), `3` (enabling), `4` (disabling).
                     * @param _whoisPrivacy WHOIS privacy service status. Valid values: `1` (enabled), `2` (disabled), `3` (enabling), `4` (disabling).
                     * 
                     */
                    void SetWhoisPrivacy(const int64_t& _whoisPrivacy);

                    /**
                     * 判断参数 WhoisPrivacy 是否已赋值
                     * @return WhoisPrivacy 是否已赋值
                     * 
                     */
                    bool WhoisPrivacyHasBeenSet() const;

                    /**
                     * 获取Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * @return ModifyStatus Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * 
                     */
                    std::string GetModifyStatus() const;

                    /**
                     * 设置Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * @param _modifyStatus Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * 
                     */
                    void SetModifyStatus(const std::string& _modifyStatus);

                    /**
                     * 判断参数 ModifyStatus 是否已赋值
                     * @return ModifyStatus 是否已赋值
                     * 
                     */
                    bool ModifyStatusHasBeenSet() const;

                    /**
                     * 获取Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * @return DnsModifyStatus Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * 
                     */
                    std::string GetDnsModifyStatus() const;

                    /**
                     * 设置Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * @param _dnsModifyStatus Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     * 
                     */
                    void SetDnsModifyStatus(const std::string& _dnsModifyStatus);

                    /**
                     * 判断参数 DnsModifyStatus 是否已赋值
                     * @return DnsModifyStatus 是否已赋值
                     * 
                     */
                    bool DnsModifyStatusHasBeenSet() const;

                private:

                    /**
                     * The auto-renewal flag. Valid values: `0` (disabled by default), `1` (enabled), `2` (disabled).
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * The registration time.
                     */
                    std::string m_creationDate;
                    bool m_creationDateHasBeenSet;

                    /**
                     * The domain ID.
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * The DNS status. Valid values: `1` (DNSPod), `2` (others), `3` (unknown).
                     */
                    int64_t m_dnsStatus;
                    bool m_dnsStatusHasBeenSet;

                    /**
                     * The domains.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * The domain status.
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * The purchase status of the domain. Valid values:
`ok`: Normal.
`RegisterPending`: Pending registration.
`RegisterDoing`: Registration in progress.
`RegisterFailed`: Registration failed.
`RenewPending`: Renewal grace period.
`RenewDoing`: Renewing.
`RedemptionPending`: Redemption period.
`AboutToExpire`: About to expire.
`TransferPending`: Pending transfer.
`TransferTransing`: Transfer in progress.
`TransferFailed`: Transfer failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The expiration date.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * The auto-renewal flag. Valid values: `1` (enabled), `2` (disabled), `3` (disabled by default).
                     */
                    int64_t m_expireMessage;
                    bool m_expireMessageHasBeenSet;

                    /**
                     * Whether the domain is a premium one.
                     */
                    bool m_isPremium;
                    bool m_isPremiumHasBeenSet;

                    /**
                     * The DNS server of the domain.
                     */
                    std::vector<std::string> m_dns;
                    bool m_dnsHasBeenSet;

                    /**
                     * The contact information.
                     */
                    IntlContactInfo m_contactInfo;
                    bool m_contactInfoHasBeenSet;

                    /**
                     * The number of years available for renewal. The value `0` indicates that the domain has reached its maximum validity period (10 years) and cannot be renewed.
                     */
                    int64_t m_canRenewYears;
                    bool m_canRenewYearsHasBeenSet;

                    /**
                     * The registrar type. If the value is `epp`, the registration time on the page is followed by (UTC). Otherwise, it is followed by (UTC+8).
                     */
                    std::string m_registrarType;
                    bool m_registrarTypeHasBeenSet;

                    /**
                     * The account to which the domain belongs.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * The profile ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Whether DNSSEC is supported.
                     */
                    bool m_supportDnssec;
                    bool m_supportDnssecHasBeenSet;

                    /**
                     * WHOIS privacy service status. Valid values: `1` (enabled), `2` (disabled), `3` (enabling), `4` (disabling).
                     */
                    int64_t m_whoisPrivacy;
                    bool m_whoisPrivacyHasBeenSet;

                    /**
                     * Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     */
                    std::string m_modifyStatus;
                    bool m_modifyStatusHasBeenSet;

                    /**
                     * Valid values: `NotModify` (not modified), `Modifying`, `Failed` (failed to modify)
                     */
                    std::string m_dnsModifyStatus;
                    bool m_dnsModifyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLDOMAININFO_H_
