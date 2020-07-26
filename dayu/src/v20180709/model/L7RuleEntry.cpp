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

#include <tencentcloud/dayu/v20180709/model/L7RuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

L7RuleEntry::L7RuleEntry() :
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_keepTimeHasBeenSet(false),
    m_sourceListHasBeenSet(false),
    m_lbTypeHasBeenSet(false),
    m_keepEnableHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cCStatusHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false),
    m_cCLevelHasBeenSet(false),
    m_httpsToHttpEnableHasBeenSet(false)
{
}

CoreInternalOutcome L7RuleEntry::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepTime") && !value["KeepTime"].IsNull())
    {
        if (!value["KeepTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.KeepTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepTime = value["KeepTime"].GetUint64();
        m_keepTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceList") && !value["SourceList"].IsNull())
    {
        if (!value["SourceList"].IsArray())
            return CoreInternalOutcome(Error("response `L7RuleEntry.SourceList` is not array type"));

        const Value &tmpValue = value["SourceList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L4RuleSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceList.push_back(item);
        }
        m_sourceListHasBeenSet = true;
    }

    if (value.HasMember("LbType") && !value["LbType"].IsNull())
    {
        if (!value["LbType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.LbType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lbType = value["LbType"].GetUint64();
        m_lbTypeHasBeenSet = true;
    }

    if (value.HasMember("KeepEnable") && !value["KeepEnable"].IsNull())
    {
        if (!value["KeepEnable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.KeepEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepEnable = value["KeepEnable"].GetUint64();
        m_keepEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.CertType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetUint64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CCStatus") && !value["CCStatus"].IsNull())
    {
        if (!value["CCStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.CCStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCStatus = value["CCStatus"].GetUint64();
        m_cCStatusHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.CCEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetUint64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("CCThreshold") && !value["CCThreshold"].IsNull())
    {
        if (!value["CCThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.CCThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = value["CCThreshold"].GetUint64();
        m_cCThresholdHasBeenSet = true;
    }

    if (value.HasMember("CCLevel") && !value["CCLevel"].IsNull())
    {
        if (!value["CCLevel"].IsString())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.CCLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cCLevel = string(value["CCLevel"].GetString());
        m_cCLevelHasBeenSet = true;
    }

    if (value.HasMember("HttpsToHttpEnable") && !value["HttpsToHttpEnable"].IsNull())
    {
        if (!value["HttpsToHttpEnable"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `L7RuleEntry.HttpsToHttpEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsToHttpEnable = value["HttpsToHttpEnable"].GetUint64();
        m_httpsToHttpEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7RuleEntry::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_keepTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeepTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepTime, allocator);
    }

    if (m_sourceListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceList.begin(); itr != m_sourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lbTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lbType, allocator);
    }

    if (m_keepEnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeepEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepEnable, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cCStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CCStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCStatus, allocator);
    }

    if (m_cCEnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CCEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCEnable, allocator);
    }

    if (m_cCThresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CCThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCThreshold, allocator);
    }

    if (m_cCLevelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CCLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cCLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsToHttpEnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpsToHttpEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsToHttpEnable, allocator);
    }

}


string L7RuleEntry::GetProtocol() const
{
    return m_protocol;
}

void L7RuleEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L7RuleEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string L7RuleEntry::GetDomain() const
{
    return m_domain;
}

void L7RuleEntry::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool L7RuleEntry::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t L7RuleEntry::GetSourceType() const
{
    return m_sourceType;
}

void L7RuleEntry::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool L7RuleEntry::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t L7RuleEntry::GetKeepTime() const
{
    return m_keepTime;
}

void L7RuleEntry::SetKeepTime(const uint64_t& _keepTime)
{
    m_keepTime = _keepTime;
    m_keepTimeHasBeenSet = true;
}

bool L7RuleEntry::KeepTimeHasBeenSet() const
{
    return m_keepTimeHasBeenSet;
}

vector<L4RuleSource> L7RuleEntry::GetSourceList() const
{
    return m_sourceList;
}

void L7RuleEntry::SetSourceList(const vector<L4RuleSource>& _sourceList)
{
    m_sourceList = _sourceList;
    m_sourceListHasBeenSet = true;
}

bool L7RuleEntry::SourceListHasBeenSet() const
{
    return m_sourceListHasBeenSet;
}

uint64_t L7RuleEntry::GetLbType() const
{
    return m_lbType;
}

void L7RuleEntry::SetLbType(const uint64_t& _lbType)
{
    m_lbType = _lbType;
    m_lbTypeHasBeenSet = true;
}

bool L7RuleEntry::LbTypeHasBeenSet() const
{
    return m_lbTypeHasBeenSet;
}

uint64_t L7RuleEntry::GetKeepEnable() const
{
    return m_keepEnable;
}

void L7RuleEntry::SetKeepEnable(const uint64_t& _keepEnable)
{
    m_keepEnable = _keepEnable;
    m_keepEnableHasBeenSet = true;
}

bool L7RuleEntry::KeepEnableHasBeenSet() const
{
    return m_keepEnableHasBeenSet;
}

string L7RuleEntry::GetRuleId() const
{
    return m_ruleId;
}

void L7RuleEntry::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool L7RuleEntry::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t L7RuleEntry::GetCertType() const
{
    return m_certType;
}

void L7RuleEntry::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool L7RuleEntry::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string L7RuleEntry::GetSSLId() const
{
    return m_sSLId;
}

void L7RuleEntry::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool L7RuleEntry::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string L7RuleEntry::GetCert() const
{
    return m_cert;
}

void L7RuleEntry::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool L7RuleEntry::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string L7RuleEntry::GetPrivateKey() const
{
    return m_privateKey;
}

void L7RuleEntry::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool L7RuleEntry::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string L7RuleEntry::GetRuleName() const
{
    return m_ruleName;
}

void L7RuleEntry::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool L7RuleEntry::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t L7RuleEntry::GetStatus() const
{
    return m_status;
}

void L7RuleEntry::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7RuleEntry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t L7RuleEntry::GetCCStatus() const
{
    return m_cCStatus;
}

void L7RuleEntry::SetCCStatus(const uint64_t& _cCStatus)
{
    m_cCStatus = _cCStatus;
    m_cCStatusHasBeenSet = true;
}

bool L7RuleEntry::CCStatusHasBeenSet() const
{
    return m_cCStatusHasBeenSet;
}

uint64_t L7RuleEntry::GetCCEnable() const
{
    return m_cCEnable;
}

void L7RuleEntry::SetCCEnable(const uint64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool L7RuleEntry::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

uint64_t L7RuleEntry::GetCCThreshold() const
{
    return m_cCThreshold;
}

void L7RuleEntry::SetCCThreshold(const uint64_t& _cCThreshold)
{
    m_cCThreshold = _cCThreshold;
    m_cCThresholdHasBeenSet = true;
}

bool L7RuleEntry::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}

string L7RuleEntry::GetCCLevel() const
{
    return m_cCLevel;
}

void L7RuleEntry::SetCCLevel(const string& _cCLevel)
{
    m_cCLevel = _cCLevel;
    m_cCLevelHasBeenSet = true;
}

bool L7RuleEntry::CCLevelHasBeenSet() const
{
    return m_cCLevelHasBeenSet;
}

uint64_t L7RuleEntry::GetHttpsToHttpEnable() const
{
    return m_httpsToHttpEnable;
}

void L7RuleEntry::SetHttpsToHttpEnable(const uint64_t& _httpsToHttpEnable)
{
    m_httpsToHttpEnable = _httpsToHttpEnable;
    m_httpsToHttpEnableHasBeenSet = true;
}

bool L7RuleEntry::HttpsToHttpEnableHasBeenSet() const
{
    return m_httpsToHttpEnableHasBeenSet;
}

