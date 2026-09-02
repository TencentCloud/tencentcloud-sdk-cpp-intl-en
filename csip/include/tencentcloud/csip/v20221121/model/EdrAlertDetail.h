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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CSIPTag.h>
#include <tencentcloud/csip/v20221121/model/IPIntelInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR alert details (including content JSON and asset/intelligence enrichment fields)
                */
                class EdrAlertDetail : public AbstractModel
                {
                public:
                    EdrAlertDetail();
                    ~EdrAlertDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Primary key ID</p>
                     * @return Id <p>Primary key ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Primary key ID</p>
                     * @param _id <p>Primary key ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Tenant ID</p>
                     * @return AppId <p>Tenant ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Tenant ID</p>
                     * @param _appId <p>Tenant ID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Alarm unique ID</p>
                     * @return AlertId <p>Alarm unique ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>Alarm unique ID</p>
                     * @param _alertId <p>Alarm unique ID</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>Major category of alarm (English enumeration: VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE)</p>
                     * @return AlertCategory <p>Major category of alarm (English enumeration: VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE)</p>
                     * 
                     */
                    std::string GetAlertCategory() const;

                    /**
                     * 设置<p>Major category of alarm (English enumeration: VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE)</p>
                     * @param _alertCategory <p>Major category of alarm (English enumeration: VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE)</p>
                     * 
                     */
                    void SetAlertCategory(const std::string& _alertCategory);

                    /**
                     * 判断参数 AlertCategory 是否已赋值
                     * @return AlertCategory 是否已赋值
                     * 
                     */
                    bool AlertCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Alarm sub-type (enum: MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK)</p>
                     * @return AlertSubType <p>Alarm sub-type (enum: MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK)</p>
                     * 
                     */
                    std::string GetAlertSubType() const;

                    /**
                     * 设置<p>Alarm sub-type (enum: MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK)</p>
                     * @param _alertSubType <p>Alarm sub-type (enum: MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK)</p>
                     * 
                     */
                    void SetAlertSubType(const std::string& _alertSubType);

                    /**
                     * 判断参数 AlertSubType 是否已赋值
                     * @return AlertSubType 是否已赋值
                     * 
                     */
                    bool AlertSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Associated rule ID</p>
                     * @return RuleId <p>Associated rule ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Associated rule ID</p>
                     * @param _ruleId <p>Associated rule ID</p>
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
                     * 获取<p>Rule type: 0 - system rule; 1 - user-customized</p>
                     * @return RuleType <p>Rule type: 0 - system rule; 1 - user-customized</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>Rule type: 0 - system rule; 1 - user-customized</p>
                     * @param _ruleType <p>Rule type: 0 - system rule; 1 - user-customized</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Alarm level (English enumeration: CRITICAL/HIGH/MEDIUM/LOW/INFO)</p>
                     * @return Level <p>Alarm level (English enumeration: CRITICAL/HIGH/MEDIUM/LOW/INFO)</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Alarm level (English enumeration: CRITICAL/HIGH/MEDIUM/LOW/INFO)</p>
                     * @param _level <p>Alarm level (English enumeration: CRITICAL/HIGH/MEDIUM/LOW/INFO)</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Processing status (English enumeration: PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED)</p>
                     * @return Status <p>Processing status (English enumeration: PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Processing status (English enumeration: PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED)</p>
                     * @param _status <p>Processing status (English enumeration: PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED)</p>
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
                     * 获取<p>ATT&amp;CK attack stages</p>
                     * @return AttackStage <p>ATT&amp;CK attack stages</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>ATT&amp;CK attack stages</p>
                     * @param _attackStage <p>ATT&amp;CK attack stages</p>
                     * 
                     */
                    void SetAttackStage(const std::string& _attackStage);

                    /**
                     * 判断参数 AttackStage 是否已赋值
                     * @return AttackStage 是否已赋值
                     * 
                     */
                    bool AttackStageHasBeenSet() const;

                    /**
                     * 获取<p>Detection Mode (Enum: PRECISE/BALANCED/DEEP)</p>
                     * @return DetectMode <p>Detection Mode (Enum: PRECISE/BALANCED/DEEP)</p>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置<p>Detection Mode (Enum: PRECISE/BALANCED/DEEP)</p>
                     * @param _detectMode <p>Detection Mode (Enum: PRECISE/BALANCED/DEEP)</p>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Host UUID</p>
                     * @return Quuid <p>Host UUID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host UUID</p>
                     * @param _quuid <p>Host UUID</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>Number of aggregations</p>
                     * @return EventCount <p>Number of aggregations</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>Number of aggregations</p>
                     * @param _eventCount <p>Number of aggregations</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a paid edition</p>
                     * @return IsProVersion <p>Whether it is a paid edition</p>
                     * 
                     */
                    int64_t GetIsProVersion() const;

                    /**
                     * 设置<p>Whether it is a paid edition</p>
                     * @param _isProVersion <p>Whether it is a paid edition</p>
                     * 
                     */
                    void SetIsProVersion(const int64_t& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取<p>Alarm source (English enumeration: HOST/CONTAINER/K8S/CSIP)</p>
                     * @return AlertSource <p>Alarm source (English enumeration: HOST/CONTAINER/K8S/CSIP)</p>
                     * 
                     */
                    std::string GetAlertSource() const;

                    /**
                     * 设置<p>Alarm source (English enumeration: HOST/CONTAINER/K8S/CSIP)</p>
                     * @param _alertSource <p>Alarm source (English enumeration: HOST/CONTAINER/K8S/CSIP)</p>
                     * 
                     */
                    void SetAlertSource(const std::string& _alertSource);

                    /**
                     * 判断参数 AlertSource 是否已赋值
                     * @return AlertSource 是否已赋值
                     * 
                     */
                    bool AlertSourceHasBeenSet() const;

                    /**
                     * 获取<p>Container image ID (reserved field, always an empty string).</p>
                     * @return ImageId <p>Container image ID (reserved field, always an empty string).</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Container image ID (reserved field, always an empty string).</p>
                     * @param _imageId <p>Container image ID (reserved field, always an empty string).</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Container ID (reserved field, always an empty string)</p>
                     * @return ContainerId <p>Container ID (reserved field, always an empty string)</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container ID (reserved field, always an empty string)</p>
                     * @param _containerId <p>Container ID (reserved field, always an empty string)</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID (reserved field, always an empty string)</p>
                     * @return ClusterId <p>Cluster ID (reserved field, always an empty string)</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID (reserved field, always an empty string)</p>
                     * @param _clusterId <p>Cluster ID (reserved field, always an empty string)</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>First discovery time</p>
                     * @return FirstDetectTime <p>First discovery time</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>First discovery time</p>
                     * @param _firstDetectTime <p>First discovery time</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Most recent discovery time</p>
                     * @return LatestDetectTime <p>Most recent discovery time</p>
                     * 
                     */
                    std::string GetLatestDetectTime() const;

                    /**
                     * 设置<p>Most recent discovery time</p>
                     * @param _latestDetectTime <p>Most recent discovery time</p>
                     * 
                     */
                    void SetLatestDetectTime(const std::string& _latestDetectTime);

                    /**
                     * 判断参数 LatestDetectTime 是否已赋值
                     * @return LatestDetectTime 是否已赋值
                     * 
                     */
                    bool LatestDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Rule name (rule enrichment)</p>
                     * @return RuleName <p>Rule name (rule enrichment)</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name (rule enrichment)</p>
                     * @param _ruleName <p>Rule name (rule enrichment)</p>
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
                     * 获取<p>Content type: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * @return ContentType <p>Content type: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>Content type: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * @param _contentType <p>Content type: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance name (asset enrichment)</p>
                     * @return InstanceName <p>Instance name (asset enrichment)</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name (asset enrichment)</p>
                     * @param _instanceName <p>Instance name (asset enrichment)</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address (asset enrichment)</p>
                     * @return PublicIp <p>Public IP address (asset enrichment)</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address (asset enrichment)</p>
                     * @param _publicIp <p>Public IP address (asset enrichment)</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address (asset enrichment)</p>
                     * @return PrivateIp <p>Private IP address (asset enrichment)</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IP address (asset enrichment)</p>
                     * @param _privateIp <p>Private IP address (asset enrichment)</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>Alert details json string (parsed by the frontend via JSON.parse; empty value is &quot;{}&quot;)</p>
                     * @return Content <p>Alert details json string (parsed by the frontend via JSON.parse; empty value is &quot;{}&quot;)</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Alert details json string (parsed by the frontend via JSON.parse; empty value is &quot;{}&quot;)</p>
                     * @param _content <p>Alert details json string (parsed by the frontend via JSON.parse; empty value is &quot;{}&quot;)</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Alarm name (Chinese and English name of the sub-type)</p>
                     * @return AlertName <p>Alarm name (Chinese and English name of the sub-type)</p>
                     * 
                     */
                    std::string GetAlertName() const;

                    /**
                     * 设置<p>Alarm name (Chinese and English name of the sub-type)</p>
                     * @param _alertName <p>Alarm name (Chinese and English name of the sub-type)</p>
                     * 
                     */
                    void SetAlertName(const std::string& _alertName);

                    /**
                     * 判断参数 AlertName 是否已赋值
                     * @return AlertName 是否已赋值
                     * 
                     */
                    bool AlertNameHasBeenSet() const;

                    /**
                     * 获取<p>Security center tag</p>
                     * @return CSIPTags <p>Security center tag</p>
                     * 
                     */
                    std::vector<CSIPTag> GetCSIPTags() const;

                    /**
                     * 设置<p>Security center tag</p>
                     * @param _cSIPTags <p>Security center tag</p>
                     * 
                     */
                    void SetCSIPTags(const std::vector<CSIPTag>& _cSIPTags);

                    /**
                     * 判断参数 CSIPTags 是否已赋值
                     * @return CSIPTags 是否已赋值
                     * 
                     */
                    bool CSIPTagsHasBeenSet() const;

                    /**
                     * 获取<p>Severity description (unified field, merged from original independent fields of sub-types)</p>
                     * @return HarmDesc <p>Severity description (unified field, merged from original independent fields of sub-types)</p>
                     * 
                     */
                    std::string GetHarmDesc() const;

                    /**
                     * 设置<p>Severity description (unified field, merged from original independent fields of sub-types)</p>
                     * @param _harmDesc <p>Severity description (unified field, merged from original independent fields of sub-types)</p>
                     * 
                     */
                    void SetHarmDesc(const std::string& _harmDesc);

                    /**
                     * 判断参数 HarmDesc 是否已赋值
                     * @return HarmDesc 是否已赋值
                     * 
                     */
                    bool HarmDescHasBeenSet() const;

                    /**
                     * 获取<p>Repair advice (unified field)</p>
                     * @return SuggestScheme <p>Repair advice (unified field)</p>
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置<p>Repair advice (unified field)</p>
                     * @param _suggestScheme <p>Repair advice (unified field)</p>
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取<p>Data source: vuldb/vdc/intel/default</p>
                     * @return HarmDescSource <p>Data source: vuldb/vdc/intel/default</p>
                     * 
                     */
                    std::string GetHarmDescSource() const;

                    /**
                     * 设置<p>Data source: vuldb/vdc/intel/default</p>
                     * @param _harmDescSource <p>Data source: vuldb/vdc/intel/default</p>
                     * 
                     */
                    void SetHarmDescSource(const std::string& _harmDescSource);

                    /**
                     * 判断参数 HarmDescSource 是否已赋值
                     * @return HarmDescSource 是否已赋值
                     * 
                     */
                    bool HarmDescSourceHasBeenSet() const;

                    /**
                     * 获取<p>Unified threat intelligence tag (routes to different intelligence sources by sub-type)</p>
                     * @return ThreatTags <p>Unified threat intelligence tag (routes to different intelligence sources by sub-type)</p>
                     * 
                     */
                    std::vector<std::string> GetThreatTags() const;

                    /**
                     * 设置<p>Unified threat intelligence tag (routes to different intelligence sources by sub-type)</p>
                     * @param _threatTags <p>Unified threat intelligence tag (routes to different intelligence sources by sub-type)</p>
                     * 
                     */
                    void SetThreatTags(const std::vector<std::string>& _threatTags);

                    /**
                     * 判断参数 ThreatTags 是否已赋值
                     * @return ThreatTags 是否已赋值
                     * 
                     */
                    bool ThreatTagsHasBeenSet() const;

                    /**
                     * 获取<p>Base64-decoded command (unique to high-risk command sub-type)</p>
                     * @return BashCmdDecoded <p>Base64-decoded command (unique to high-risk command sub-type)</p>
                     * 
                     */
                    std::string GetBashCmdDecoded() const;

                    /**
                     * 设置<p>Base64-decoded command (unique to high-risk command sub-type)</p>
                     * @param _bashCmdDecoded <p>Base64-decoded command (unique to high-risk command sub-type)</p>
                     * 
                     */
                    void SetBashCmdDecoded(const std::string& _bashCmdDecoded);

                    /**
                     * 判断参数 BashCmdDecoded 是否已赋值
                     * @return BashCmdDecoded 是否已赋值
                     * 
                     */
                    bool BashCmdDecodedHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability name (unique to network attack sub-type)</p>
                     * @return NetVulName <p>Vulnerability name (unique to network attack sub-type)</p>
                     * 
                     */
                    std::string GetNetVulName() const;

                    /**
                     * 设置<p>Vulnerability name (unique to network attack sub-type)</p>
                     * @param _netVulName <p>Vulnerability name (unique to network attack sub-type)</p>
                     * 
                     */
                    void SetNetVulName(const std::string& _netVulName);

                    /**
                     * 判断参数 NetVulName 是否已赋值
                     * @return NetVulName 是否已赋值
                     * 
                     */
                    bool NetVulNameHasBeenSet() const;

                    /**
                     * 获取<p>CVE ID (unique to network attack sub-type)</p>
                     * @return NetCVEId <p>CVE ID (unique to network attack sub-type)</p>
                     * 
                     */
                    std::string GetNetCVEId() const;

                    /**
                     * 设置<p>CVE ID (unique to network attack sub-type)</p>
                     * @param _netCVEId <p>CVE ID (unique to network attack sub-type)</p>
                     * 
                     */
                    void SetNetCVEId(const std::string& _netCVEId);

                    /**
                     * 判断参数 NetCVEId 是否已赋值
                     * @return NetCVEId 是否已赋值
                     * 
                     */
                    bool NetCVEIdHasBeenSet() const;

                    /**
                     * 获取<p>Exception behavior (unique to network attack sub-type)</p>
                     * @return NetAbnormalAction <p>Exception behavior (unique to network attack sub-type)</p>
                     * 
                     */
                    std::string GetNetAbnormalAction() const;

                    /**
                     * 设置<p>Exception behavior (unique to network attack sub-type)</p>
                     * @param _netAbnormalAction <p>Exception behavior (unique to network attack sub-type)</p>
                     * 
                     */
                    void SetNetAbnormalAction(const std::string& _netAbnormalAction);

                    /**
                     * 判断参数 NetAbnormalAction 是否已赋值
                     * @return NetAbnormalAction 是否已赋值
                     * 
                     */
                    bool NetAbnormalActionHasBeenSet() const;

                    /**
                     * 获取<p>IP intelligence information (do not return if empty)</p>
                     * @return IPIntel <p>IP intelligence information (do not return if empty)</p>
                     * 
                     */
                    IPIntelInfo GetIPIntel() const;

                    /**
                     * 设置<p>IP intelligence information (do not return if empty)</p>
                     * @param _iPIntel <p>IP intelligence information (do not return if empty)</p>
                     * 
                     */
                    void SetIPIntel(const IPIntelInfo& _iPIntel);

                    /**
                     * 判断参数 IPIntel 是否已赋值
                     * @return IPIntel 是否已赋值
                     * 
                     */
                    bool IPIntelHasBeenSet() const;

                    /**
                     * 获取<p>Multi-act attack rule type categorization: sequence/threshold/command</p>
                     * @return MultiBehaviorDetectionMode <p>Multi-act attack rule type categorization: sequence/threshold/command</p>
                     * 
                     */
                    std::string GetMultiBehaviorDetectionMode() const;

                    /**
                     * 设置<p>Multi-act attack rule type categorization: sequence/threshold/command</p>
                     * @param _multiBehaviorDetectionMode <p>Multi-act attack rule type categorization: sequence/threshold/command</p>
                     * 
                     */
                    void SetMultiBehaviorDetectionMode(const std::string& _multiBehaviorDetectionMode);

                    /**
                     * 判断参数 MultiBehaviorDetectionMode 是否已赋值
                     * @return MultiBehaviorDetectionMode 是否已赋值
                     * 
                     */
                    bool MultiBehaviorDetectionModeHasBeenSet() const;

                    /**
                     * 获取<p>Alarm source description (derived by sub-type, describing which engine/rule detects it)</p>
                     * @return SourceDesc <p>Alarm source description (derived by sub-type, describing which engine/rule detects it)</p>
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置<p>Alarm source description (derived by sub-type, describing which engine/rule detects it)</p>
                     * @param _sourceDesc <p>Alarm source description (derived by sub-type, describing which engine/rule detects it)</p>
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取<p>Time parameter format to process: 2026-05-26 19:45:48</p>
                     * @return ModifyTime <p>Time parameter format to process: 2026-05-26 19:45:48</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Time parameter format to process: 2026-05-26 19:45:48</p>
                     * @param _modifyTime <p>Time parameter format to process: 2026-05-26 19:45:48</p>
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
                     * 获取<p>Source of intelligence enrichment result (flag indicating whether external intelligence is hit successfully this time). Parameter Value: "VDC" / "IPAnalysis" / "BreakingTI" / empty string</p>
                     * @return IntelSource <p>Source of intelligence enrichment result (flag indicating whether external intelligence is hit successfully this time). Parameter Value: "VDC" / "IPAnalysis" / "BreakingTI" / empty string</p>
                     * 
                     */
                    std::string GetIntelSource() const;

                    /**
                     * 设置<p>Source of intelligence enrichment result (flag indicating whether external intelligence is hit successfully this time). Parameter Value: "VDC" / "IPAnalysis" / "BreakingTI" / empty string</p>
                     * @param _intelSource <p>Source of intelligence enrichment result (flag indicating whether external intelligence is hit successfully this time). Parameter Value: "VDC" / "IPAnalysis" / "BreakingTI" / empty string</p>
                     * 
                     */
                    void SetIntelSource(const std::string& _intelSource);

                    /**
                     * 判断参数 IntelSource 是否已赋值
                     * @return IntelSource 是否已赋值
                     * 
                     */
                    bool IntelSourceHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive analysis: Chinese and English are translated. Chinese: Malicious/Safe/Unknown; English: Malicious/Safe/Unknown</p>
                     * @return Verdict <p>Comprehensive analysis: Chinese and English are translated. Chinese: Malicious/Safe/Unknown; English: Malicious/Safe/Unknown</p>
                     * 
                     */
                    std::string GetVerdict() const;

                    /**
                     * 设置<p>Comprehensive analysis: Chinese and English are translated. Chinese: Malicious/Safe/Unknown; English: Malicious/Safe/Unknown</p>
                     * @param _verdict <p>Comprehensive analysis: Chinese and English are translated. Chinese: Malicious/Safe/Unknown; English: Malicious/Safe/Unknown</p>
                     * 
                     */
                    void SetVerdict(const std::string& _verdict);

                    /**
                     * 判断参数 Verdict 是否已赋值
                     * @return Verdict 是否已赋值
                     * 
                     */
                    bool VerdictHasBeenSet() const;

                    /**
                     * 获取<p>Analysis basis</p>
                     * @return VerdictBasis <p>Analysis basis</p>
                     * 
                     */
                    std::string GetVerdictBasis() const;

                    /**
                     * 设置<p>Analysis basis</p>
                     * @param _verdictBasis <p>Analysis basis</p>
                     * 
                     */
                    void SetVerdictBasis(const std::string& _verdictBasis);

                    /**
                     * 判断参数 VerdictBasis 是否已赋值
                     * @return VerdictBasis 是否已赋值
                     * 
                     */
                    bool VerdictBasisHasBeenSet() const;

                    /**
                     * 获取<p>Virus name</p>
                     * @return VirusName <p>Virus name</p>
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置<p>Virus name</p>
                     * @param _virusName <p>Virus name</p>
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取<p>Virus family</p>
                     * @return VirusFamily <p>Virus family</p>
                     * 
                     */
                    std::string GetVirusFamily() const;

                    /**
                     * 设置<p>Virus family</p>
                     * @param _virusFamily <p>Virus family</p>
                     * 
                     */
                    void SetVirusFamily(const std::string& _virusFamily);

                    /**
                     * 判断参数 VirusFamily 是否已赋值
                     * @return VirusFamily 是否已赋值
                     * 
                     */
                    bool VirusFamilyHasBeenSet() const;

                    /**
                     * 获取<p>NetResponsePayload response packet (base64 encoded string)</p>
                     * @return NetResponsePayload <p>NetResponsePayload response packet (base64 encoded string)</p>
                     * 
                     */
                    std::string GetNetResponsePayload() const;

                    /**
                     * 设置<p>NetResponsePayload response packet (base64 encoded string)</p>
                     * @param _netResponsePayload <p>NetResponsePayload response packet (base64 encoded string)</p>
                     * 
                     */
                    void SetNetResponsePayload(const std::string& _netResponsePayload);

                    /**
                     * 判断参数 NetResponsePayload 是否已赋值
                     * @return NetResponsePayload 是否已赋值
                     * 
                     */
                    bool NetResponsePayloadHasBeenSet() const;

                    /**
                     * 获取<p>Service process information (JSON string after base64 encoding)</p>
                     * @return NetSvcPs <p>Service process information (JSON string after base64 encoding)</p>
                     * 
                     */
                    std::string GetNetSvcPs() const;

                    /**
                     * 设置<p>Service process information (JSON string after base64 encoding)</p>
                     * @param _netSvcPs <p>Service process information (JSON string after base64 encoding)</p>
                     * 
                     */
                    void SetNetSvcPs(const std::string& _netSvcPs);

                    /**
                     * 判断参数 NetSvcPs 是否已赋值
                     * @return NetSvcPs 是否已赋值
                     * 
                     */
                    bool NetSvcPsHasBeenSet() const;

                    /**
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name</p>
                     * @param _containerName <p>Container name</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Container image name</p>
                     * @return ImageName <p>Container image name</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>Container image name</p>
                     * @param _imageName <p>Container image name</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Container running status (raw enumeration: RUNNING/PAUSED/STOPPED...; frontend performs mapping itself)</p><p>Enumeration values:</p><ul><li>RUNNING: running</li><li>PAUSED: suspended</li><li>STOPPED: stopped</li><li>CREATED: created</li><li>DESTROYED: terminated</li><li>RESTARTING: restarting</li><li>REMOVING: migrating</li><li>DEAD: DEAD</li><li>UNKNOWN: unknown</li></ul>
                     * @return RunStatus <p>Container running status (raw enumeration: RUNNING/PAUSED/STOPPED...; frontend performs mapping itself)</p><p>Enumeration values:</p><ul><li>RUNNING: running</li><li>PAUSED: suspended</li><li>STOPPED: stopped</li><li>CREATED: created</li><li>DESTROYED: terminated</li><li>RESTARTING: restarting</li><li>REMOVING: migrating</li><li>DEAD: DEAD</li><li>UNKNOWN: unknown</li></ul>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>Container running status (raw enumeration: RUNNING/PAUSED/STOPPED...; frontend performs mapping itself)</p><p>Enumeration values:</p><ul><li>RUNNING: running</li><li>PAUSED: suspended</li><li>STOPPED: stopped</li><li>CREATED: created</li><li>DESTROYED: terminated</li><li>RESTARTING: restarting</li><li>REMOVING: migrating</li><li>DEAD: DEAD</li><li>UNKNOWN: unknown</li></ul>
                     * @param _runStatus <p>Container running status (raw enumeration: RUNNING/PAUSED/STOPPED...; frontend performs mapping itself)</p><p>Enumeration values:</p><ul><li>RUNNING: running</li><li>PAUSED: suspended</li><li>STOPPED: stopped</li><li>CREATED: created</li><li>DESTROYED: terminated</li><li>RESTARTING: restarting</li><li>REMOVING: migrating</li><li>DEAD: DEAD</li><li>UNKNOWN: unknown</li></ul>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>POD Name</p>
                     * @return PodName <p>POD Name</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>POD Name</p>
                     * @param _podName <p>POD Name</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>POD IP</p>
                     * @return PodIp <p>POD IP</p>
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置<p>POD IP</p>
                     * @param _podIp <p>POD IP</p>
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Namespace.</p>
                     * @param _namespace <p>Namespace.</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>POD workload type</p>
                     * @return PodWorkloadType <p>POD workload type</p>
                     * 
                     */
                    std::string GetPodWorkloadType() const;

                    /**
                     * 设置<p>POD workload type</p>
                     * @param _podWorkloadType <p>POD workload type</p>
                     * 
                     */
                    void SetPodWorkloadType(const std::string& _podWorkloadType);

                    /**
                     * 判断参数 PodWorkloadType 是否已赋值
                     * @return PodWorkloadType 是否已赋值
                     * 
                     */
                    bool PodWorkloadTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ca cert md5</p>
                     * @return ClusterCaMD5 <p>Cluster ca cert md5</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster ca cert md5</p>
                     * @param _clusterCaMD5 <p>Cluster ca cert md5</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>POD Unique id</p>
                     * @return PodUniqueId <p>POD Unique id</p>
                     * 
                     */
                    std::string GetPodUniqueId() const;

                    /**
                     * 设置<p>POD Unique id</p>
                     * @param _podUniqueId <p>POD Unique id</p>
                     * 
                     */
                    void SetPodUniqueId(const std::string& _podUniqueId);

                    /**
                     * 判断参数 PodUniqueId 是否已赋值
                     * @return PodUniqueId 是否已赋值
                     * 
                     */
                    bool PodUniqueIdHasBeenSet() const;

                private:

                    /**
                     * <p>Primary key ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Tenant ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Alarm unique ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>Major category of alarm (English enumeration: VIRUS_TROJAN/ABNORMAL_LOGIN/HOST_BEHAVIOR/NETWORK_BEHAVIOR/LINK_ENGINE)</p>
                     */
                    std::string m_alertCategory;
                    bool m_alertCategoryHasBeenSet;

                    /**
                     * <p>Alarm sub-type (enum: MALWARE_FILE/MALWARE_PROCESS/RISK_LOGIN/BRUTE_FORCE/DNS/BASH/PRIV_ESCALATION/REVERSE_SHELL/NET_ATTACK/VUL_DEFENCE/MEMORY_SHELL_INJECT/MEMORY_SHELL_SCAN/MULTI_BEHAVIOR_ATTACK)</p>
                     */
                    std::string m_alertSubType;
                    bool m_alertSubTypeHasBeenSet;

                    /**
                     * <p>Associated rule ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Rule type: 0 - system rule; 1 - user-customized</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Alarm level (English enumeration: CRITICAL/HIGH/MEDIUM/LOW/INFO)</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Processing status (English enumeration: PENDING/PROCESSED/WHITELISTED/ISOLATED/CLEANED/IGNORED/ISOLATING/RESTORING/BLOCKED/DELETED)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ATT&amp;CK attack stages</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>Detection Mode (Enum: PRECISE/BALANCED/DEEP)</p>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Host UUID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Number of aggregations</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>Whether it is a paid edition</p>
                     */
                    int64_t m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>Alarm source (English enumeration: HOST/CONTAINER/K8S/CSIP)</p>
                     */
                    std::string m_alertSource;
                    bool m_alertSourceHasBeenSet;

                    /**
                     * <p>Container image ID (reserved field, always an empty string).</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Container ID (reserved field, always an empty string)</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Cluster ID (reserved field, always an empty string)</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>First discovery time</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>Most recent discovery time</p>
                     */
                    std::string m_latestDetectTime;
                    bool m_latestDetectTimeHasBeenSet;

                    /**
                     * <p>Rule name (rule enrichment)</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Content type: md5/cmdline/dns/ip_inbound/ip_outbound/custom_file/process_network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>Instance name (asset enrichment)</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Public IP address (asset enrichment)</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private IP address (asset enrichment)</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Alert details json string (parsed by the frontend via JSON.parse; empty value is &quot;{}&quot;)</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Alarm name (Chinese and English name of the sub-type)</p>
                     */
                    std::string m_alertName;
                    bool m_alertNameHasBeenSet;

                    /**
                     * <p>Security center tag</p>
                     */
                    std::vector<CSIPTag> m_cSIPTags;
                    bool m_cSIPTagsHasBeenSet;

                    /**
                     * <p>Severity description (unified field, merged from original independent fields of sub-types)</p>
                     */
                    std::string m_harmDesc;
                    bool m_harmDescHasBeenSet;

                    /**
                     * <p>Repair advice (unified field)</p>
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * <p>Data source: vuldb/vdc/intel/default</p>
                     */
                    std::string m_harmDescSource;
                    bool m_harmDescSourceHasBeenSet;

                    /**
                     * <p>Unified threat intelligence tag (routes to different intelligence sources by sub-type)</p>
                     */
                    std::vector<std::string> m_threatTags;
                    bool m_threatTagsHasBeenSet;

                    /**
                     * <p>Base64-decoded command (unique to high-risk command sub-type)</p>
                     */
                    std::string m_bashCmdDecoded;
                    bool m_bashCmdDecodedHasBeenSet;

                    /**
                     * <p>Vulnerability name (unique to network attack sub-type)</p>
                     */
                    std::string m_netVulName;
                    bool m_netVulNameHasBeenSet;

                    /**
                     * <p>CVE ID (unique to network attack sub-type)</p>
                     */
                    std::string m_netCVEId;
                    bool m_netCVEIdHasBeenSet;

                    /**
                     * <p>Exception behavior (unique to network attack sub-type)</p>
                     */
                    std::string m_netAbnormalAction;
                    bool m_netAbnormalActionHasBeenSet;

                    /**
                     * <p>IP intelligence information (do not return if empty)</p>
                     */
                    IPIntelInfo m_iPIntel;
                    bool m_iPIntelHasBeenSet;

                    /**
                     * <p>Multi-act attack rule type categorization: sequence/threshold/command</p>
                     */
                    std::string m_multiBehaviorDetectionMode;
                    bool m_multiBehaviorDetectionModeHasBeenSet;

                    /**
                     * <p>Alarm source description (derived by sub-type, describing which engine/rule detects it)</p>
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * <p>Time parameter format to process: 2026-05-26 19:45:48</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Source of intelligence enrichment result (flag indicating whether external intelligence is hit successfully this time). Parameter Value: "VDC" / "IPAnalysis" / "BreakingTI" / empty string</p>
                     */
                    std::string m_intelSource;
                    bool m_intelSourceHasBeenSet;

                    /**
                     * <p>Comprehensive analysis: Chinese and English are translated. Chinese: Malicious/Safe/Unknown; English: Malicious/Safe/Unknown</p>
                     */
                    std::string m_verdict;
                    bool m_verdictHasBeenSet;

                    /**
                     * <p>Analysis basis</p>
                     */
                    std::string m_verdictBasis;
                    bool m_verdictBasisHasBeenSet;

                    /**
                     * <p>Virus name</p>
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * <p>Virus family</p>
                     */
                    std::string m_virusFamily;
                    bool m_virusFamilyHasBeenSet;

                    /**
                     * <p>NetResponsePayload response packet (base64 encoded string)</p>
                     */
                    std::string m_netResponsePayload;
                    bool m_netResponsePayloadHasBeenSet;

                    /**
                     * <p>Service process information (JSON string after base64 encoding)</p>
                     */
                    std::string m_netSvcPs;
                    bool m_netSvcPsHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Container image name</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Container running status (raw enumeration: RUNNING/PAUSED/STOPPED...; frontend performs mapping itself)</p><p>Enumeration values:</p><ul><li>RUNNING: running</li><li>PAUSED: suspended</li><li>STOPPED: stopped</li><li>CREATED: created</li><li>DESTROYED: terminated</li><li>RESTARTING: restarting</li><li>REMOVING: migrating</li><li>DEAD: DEAD</li><li>UNKNOWN: unknown</li></ul>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>POD Name</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>POD IP</p>
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>POD workload type</p>
                     */
                    std::string m_podWorkloadType;
                    bool m_podWorkloadTypeHasBeenSet;

                    /**
                     * <p>Cluster ca cert md5</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>POD Unique id</p>
                     */
                    std::string m_podUniqueId;
                    bool m_podUniqueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTDETAIL_H_
