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

#include <tencentcloud/domain/v20180808/model/IntlDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

IntlDomainInfo::IntlDomainInfo() :
    m_autoRenewHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_dnsStatusHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_expireMessageHasBeenSet(false),
    m_isPremiumHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_contactInfoHasBeenSet(false),
    m_canRenewYearsHasBeenSet(false),
    m_registrarTypeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_supportDnssecHasBeenSet(false),
    m_whoisPrivacyHasBeenSet(false),
    m_modifyStatusHasBeenSet(false),
    m_dnsModifyStatusHasBeenSet(false)
{
}

CoreInternalOutcome IntlDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("CreationDate") && !value["CreationDate"].IsNull())
    {
        if (!value["CreationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.CreationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationDate = string(value["CreationDate"].GetString());
        m_creationDateHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DnsStatus") && !value["DnsStatus"].IsNull())
    {
        if (!value["DnsStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.DnsStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsStatus = value["DnsStatus"].GetInt64();
        m_dnsStatusHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.DomainStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainStatus.push_back((*itr).GetString());
        }
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpireMessage") && !value["ExpireMessage"].IsNull())
    {
        if (!value["ExpireMessage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.ExpireMessage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireMessage = value["ExpireMessage"].GetInt64();
        m_expireMessageHasBeenSet = true;
    }

    if (value.HasMember("IsPremium") && !value["IsPremium"].IsNull())
    {
        if (!value["IsPremium"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.IsPremium` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPremium = value["IsPremium"].GetBool();
        m_isPremiumHasBeenSet = true;
    }

    if (value.HasMember("Dns") && !value["Dns"].IsNull())
    {
        if (!value["Dns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.Dns` is not array type"));

        const rapidjson::Value &tmpValue = value["Dns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dns.push_back((*itr).GetString());
        }
        m_dnsHasBeenSet = true;
    }

    if (value.HasMember("ContactInfo") && !value["ContactInfo"].IsNull())
    {
        if (!value["ContactInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.ContactInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contactInfo.Deserialize(value["ContactInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contactInfoHasBeenSet = true;
    }

    if (value.HasMember("CanRenewYears") && !value["CanRenewYears"].IsNull())
    {
        if (!value["CanRenewYears"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.CanRenewYears` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canRenewYears = value["CanRenewYears"].GetInt64();
        m_canRenewYearsHasBeenSet = true;
    }

    if (value.HasMember("RegistrarType") && !value["RegistrarType"].IsNull())
    {
        if (!value["RegistrarType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.RegistrarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrarType = string(value["RegistrarType"].GetString());
        m_registrarTypeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("SupportDnssec") && !value["SupportDnssec"].IsNull())
    {
        if (!value["SupportDnssec"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.SupportDnssec` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDnssec = value["SupportDnssec"].GetBool();
        m_supportDnssecHasBeenSet = true;
    }

    if (value.HasMember("WhoisPrivacy") && !value["WhoisPrivacy"].IsNull())
    {
        if (!value["WhoisPrivacy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.WhoisPrivacy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_whoisPrivacy = value["WhoisPrivacy"].GetInt64();
        m_whoisPrivacyHasBeenSet = true;
    }

    if (value.HasMember("ModifyStatus") && !value["ModifyStatus"].IsNull())
    {
        if (!value["ModifyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.ModifyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyStatus = string(value["ModifyStatus"].GetString());
        m_modifyStatusHasBeenSet = true;
    }

    if (value.HasMember("DnsModifyStatus") && !value["DnsModifyStatus"].IsNull())
    {
        if (!value["DnsModifyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlDomainInfo.DnsModifyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsModifyStatus = string(value["DnsModifyStatus"].GetString());
        m_dnsModifyStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntlDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_creationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsStatus, allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainStatus.begin(); itr != m_domainStatus.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expireMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireMessage, allocator);
    }

    if (m_isPremiumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPremium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPremium, allocator);
    }

    if (m_dnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dns.begin(); itr != m_dns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contactInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_canRenewYearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRenewYears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRenewYears, allocator);
    }

    if (m_registrarTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrarType.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDnssecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDnssec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDnssec, allocator);
    }

    if (m_whoisPrivacyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhoisPrivacy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whoisPrivacy, allocator);
    }

    if (m_modifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsModifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsModifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsModifyStatus.c_str(), allocator).Move(), allocator);
    }

}


int64_t IntlDomainInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void IntlDomainInfo::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool IntlDomainInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string IntlDomainInfo::GetCreationDate() const
{
    return m_creationDate;
}

void IntlDomainInfo::SetCreationDate(const string& _creationDate)
{
    m_creationDate = _creationDate;
    m_creationDateHasBeenSet = true;
}

bool IntlDomainInfo::CreationDateHasBeenSet() const
{
    return m_creationDateHasBeenSet;
}

string IntlDomainInfo::GetDomainId() const
{
    return m_domainId;
}

void IntlDomainInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool IntlDomainInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

int64_t IntlDomainInfo::GetDnsStatus() const
{
    return m_dnsStatus;
}

void IntlDomainInfo::SetDnsStatus(const int64_t& _dnsStatus)
{
    m_dnsStatus = _dnsStatus;
    m_dnsStatusHasBeenSet = true;
}

bool IntlDomainInfo::DnsStatusHasBeenSet() const
{
    return m_dnsStatusHasBeenSet;
}

string IntlDomainInfo::GetDomainName() const
{
    return m_domainName;
}

void IntlDomainInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool IntlDomainInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

vector<string> IntlDomainInfo::GetDomainStatus() const
{
    return m_domainStatus;
}

void IntlDomainInfo::SetDomainStatus(const vector<string>& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool IntlDomainInfo::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

string IntlDomainInfo::GetStatus() const
{
    return m_status;
}

void IntlDomainInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IntlDomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IntlDomainInfo::GetExpirationDate() const
{
    return m_expirationDate;
}

void IntlDomainInfo::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool IntlDomainInfo::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

int64_t IntlDomainInfo::GetExpireMessage() const
{
    return m_expireMessage;
}

void IntlDomainInfo::SetExpireMessage(const int64_t& _expireMessage)
{
    m_expireMessage = _expireMessage;
    m_expireMessageHasBeenSet = true;
}

bool IntlDomainInfo::ExpireMessageHasBeenSet() const
{
    return m_expireMessageHasBeenSet;
}

bool IntlDomainInfo::GetIsPremium() const
{
    return m_isPremium;
}

void IntlDomainInfo::SetIsPremium(const bool& _isPremium)
{
    m_isPremium = _isPremium;
    m_isPremiumHasBeenSet = true;
}

bool IntlDomainInfo::IsPremiumHasBeenSet() const
{
    return m_isPremiumHasBeenSet;
}

vector<string> IntlDomainInfo::GetDns() const
{
    return m_dns;
}

void IntlDomainInfo::SetDns(const vector<string>& _dns)
{
    m_dns = _dns;
    m_dnsHasBeenSet = true;
}

bool IntlDomainInfo::DnsHasBeenSet() const
{
    return m_dnsHasBeenSet;
}

IntlContactInfo IntlDomainInfo::GetContactInfo() const
{
    return m_contactInfo;
}

void IntlDomainInfo::SetContactInfo(const IntlContactInfo& _contactInfo)
{
    m_contactInfo = _contactInfo;
    m_contactInfoHasBeenSet = true;
}

bool IntlDomainInfo::ContactInfoHasBeenSet() const
{
    return m_contactInfoHasBeenSet;
}

int64_t IntlDomainInfo::GetCanRenewYears() const
{
    return m_canRenewYears;
}

void IntlDomainInfo::SetCanRenewYears(const int64_t& _canRenewYears)
{
    m_canRenewYears = _canRenewYears;
    m_canRenewYearsHasBeenSet = true;
}

bool IntlDomainInfo::CanRenewYearsHasBeenSet() const
{
    return m_canRenewYearsHasBeenSet;
}

string IntlDomainInfo::GetRegistrarType() const
{
    return m_registrarType;
}

void IntlDomainInfo::SetRegistrarType(const string& _registrarType)
{
    m_registrarType = _registrarType;
    m_registrarTypeHasBeenSet = true;
}

bool IntlDomainInfo::RegistrarTypeHasBeenSet() const
{
    return m_registrarTypeHasBeenSet;
}

string IntlDomainInfo::GetUin() const
{
    return m_uin;
}

void IntlDomainInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool IntlDomainInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string IntlDomainInfo::GetTemplateId() const
{
    return m_templateId;
}

void IntlDomainInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool IntlDomainInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

bool IntlDomainInfo::GetSupportDnssec() const
{
    return m_supportDnssec;
}

void IntlDomainInfo::SetSupportDnssec(const bool& _supportDnssec)
{
    m_supportDnssec = _supportDnssec;
    m_supportDnssecHasBeenSet = true;
}

bool IntlDomainInfo::SupportDnssecHasBeenSet() const
{
    return m_supportDnssecHasBeenSet;
}

int64_t IntlDomainInfo::GetWhoisPrivacy() const
{
    return m_whoisPrivacy;
}

void IntlDomainInfo::SetWhoisPrivacy(const int64_t& _whoisPrivacy)
{
    m_whoisPrivacy = _whoisPrivacy;
    m_whoisPrivacyHasBeenSet = true;
}

bool IntlDomainInfo::WhoisPrivacyHasBeenSet() const
{
    return m_whoisPrivacyHasBeenSet;
}

string IntlDomainInfo::GetModifyStatus() const
{
    return m_modifyStatus;
}

void IntlDomainInfo::SetModifyStatus(const string& _modifyStatus)
{
    m_modifyStatus = _modifyStatus;
    m_modifyStatusHasBeenSet = true;
}

bool IntlDomainInfo::ModifyStatusHasBeenSet() const
{
    return m_modifyStatusHasBeenSet;
}

string IntlDomainInfo::GetDnsModifyStatus() const
{
    return m_dnsModifyStatus;
}

void IntlDomainInfo::SetDnsModifyStatus(const string& _dnsModifyStatus)
{
    m_dnsModifyStatus = _dnsModifyStatus;
    m_dnsModifyStatusHasBeenSet = true;
}

bool IntlDomainInfo::DnsModifyStatusHasBeenSet() const
{
    return m_dnsModifyStatusHasBeenSet;
}

