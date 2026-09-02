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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentCmdLine.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessNetwork.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTarget.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ClusterIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ImageIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ConditionMatch.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEDRRule request structure.
                */
                class ModifyEDRRuleRequest : public AbstractModel
                {
                public:
                    ModifyEDRRuleRequest();
                    ~ModifyEDRRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy type / Rule Type: 0-System policy/System Rule, 1-Custom policy/Custom Rule</p>
                     * @return RuleType <p>Policy type / Rule Type: 0-System policy/System Rule, 1-Custom policy/Custom Rule</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>Policy type / Rule Type: 0-System policy/System Rule, 1-Custom policy/Custom Rule</p>
                     * @param _ruleType <p>Policy type / Rule Type: 0-System policy/System Rule, 1-Custom policy/Custom Rule</p>
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
                     * 获取<p>Execution action / Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * @return AlertAction <p>Execution action / Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * 
                     */
                    int64_t GetAlertAction() const;

                    /**
                     * 设置<p>Execution action / Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * @param _alertAction <p>Execution action / Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * 
                     */
                    void SetAlertAction(const int64_t& _alertAction);

                    /**
                     * 判断参数 AlertAction 是否已赋值
                     * @return AlertAction 是否已赋值
                     * 
                     */
                    bool AlertActionHasBeenSet() const;

                    /**
                     * 获取<p>Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // Host QUUIDS (when Scope=0)</p>
                     * @return CWPScope <p>Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // Host QUUIDS (when Scope=0)</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // Host QUUIDS (when Scope=0)</p>
                     * @param _cWPScope <p>Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // Host QUUIDS (when Scope=0)</p>
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取<p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     * @return TCSSScope <p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置<p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     * @param _tCSSScope <p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>Switch / Status: 0-Enabled, 1-Disabled</p>
                     * @return Status <p>Switch / Status: 0-Enabled, 1-Disabled</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Switch / Status: 0-Enabled, 1-Disabled</p>
                     * @param _status <p>Switch / Status: 0-Enabled, 1-Disabled</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
                     * @return ContentType <p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
                     * @param _contentType <p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
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
                     * 获取<p>Alarm Level: 1-High risk, 2-Medium risk, 3-Low risk, 4-Notification</p>
                     * @return Level <p>Alarm Level: 1-High risk, 2-Medium risk, 3-Low risk, 4-Notification</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>Alarm Level: 1-High risk, 2-Medium risk, 3-Low risk, 4-Notification</p>
                     * @param _level <p>Alarm Level: 1-High risk, 2-Medium risk, 3-Low risk, 4-Notification</p>
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     * @return DetectMode <p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     * 
                     */
                    int64_t GetDetectMode() const;

                    /**
                     * 设置<p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     * @param _detectMode <p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     * 
                     */
                    void SetDetectMode(const int64_t& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>Attack phase</p>
                     * @return AttackStage <p>Attack phase</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>Attack phase</p>
                     * @param _attackStage <p>Attack phase</p>
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
                     * 获取<p>Policy.</p>
                     * @return RuleID <p>Policy.</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>Policy.</p>
                     * @param _ruleID <p>Policy.</p>
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Policy description</p>
                     * @return Description <p>Policy description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description</p>
                     * @param _description <p>Policy description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Handle Old Events: 0-No, 1-Yes</p>
                     * @return DealOldEvents <p>Handle Old Events: 0-No, 1-Yes</p>
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置<p>Handle Old Events: 0-No, 1-Yes</p>
                     * @param _dealOldEvents <p>Handle Old Events: 0-No, 1-Yes</p>
                     * 
                     */
                    void SetDealOldEvents(const int64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取<p>List of MD5 values passed in when ContentType=md5</p>
                     * @return Md5List <p>List of MD5 values passed in when ContentType=md5</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>List of MD5 values passed in when ContentType=md5</p>
                     * @param _md5List <p>List of MD5 values passed in when ContentType=md5</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>List of file names passed in when ContentType=custom_file (Base64 code)</p>
                     * @return FileName <p>List of file names passed in when ContentType=custom_file (Base64 code)</p>
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置<p>List of file names passed in when ContentType=custom_file (Base64 code)</p>
                     * @param _fileName <p>List of file names passed in when ContentType=custom_file (Base64 code)</p>
                     * 
                     */
                    void SetFileName(const std::vector<std::string>& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>Directory list of files passed in when ContentType=custom_file (Base64-encoded)</p>
                     * @return FileDirectory <p>Directory list of files passed in when ContentType=custom_file (Base64-encoded)</p>
                     * 
                     */
                    std::vector<std::string> GetFileDirectory() const;

                    /**
                     * 设置<p>Directory list of files passed in when ContentType=custom_file (Base64-encoded)</p>
                     * @param _fileDirectory <p>Directory list of files passed in when ContentType=custom_file (Base64-encoded)</p>
                     * 
                     */
                    void SetFileDirectory(const std::vector<std::string>& _fileDirectory);

                    /**
                     * 判断参数 FileDirectory 是否已赋值
                     * @return FileDirectory 是否已赋值
                     * 
                     */
                    bool FileDirectoryHasBeenSet() const;

                    /**
                     * 获取<p>Command line rule passed in when ContentType=cmdline. The Exe/Cmdline fields of Process/PProcess/AProcess need to be Base64 encoded</p>
                     * @return CmdLineRules <p>Command line rule passed in when ContentType=cmdline. The Exe/Cmdline fields of Process/PProcess/AProcess need to be Base64 encoded</p>
                     * 
                     */
                    RuleContentCmdLine GetCmdLineRules() const;

                    /**
                     * 设置<p>Command line rule passed in when ContentType=cmdline. The Exe/Cmdline fields of Process/PProcess/AProcess need to be Base64 encoded</p>
                     * @param _cmdLineRules <p>Command line rule passed in when ContentType=cmdline. The Exe/Cmdline fields of Process/PProcess/AProcess need to be Base64 encoded</p>
                     * 
                     */
                    void SetCmdLineRules(const RuleContentCmdLine& _cmdLineRules);

                    /**
                     * 判断参数 CmdLineRules 是否已赋值
                     * @return CmdLineRules 是否已赋值
                     * 
                     */
                    bool CmdLineRulesHasBeenSet() const;

                    /**
                     * 获取<p>List of domain names passed in when ContentType=dns (Base64-encoded)</p>
                     * @return Domains <p>List of domain names passed in when ContentType=dns (Base64-encoded)</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>List of domain names passed in when ContentType=dns (Base64-encoded)</p>
                     * @param _domains <p>List of domain names passed in when ContentType=dns (Base64-encoded)</p>
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
                     * 获取<p>Outbound IP list passed in when ContentType=ip_outbound (Base64-encoded)</p>
                     * @return OutboundIP <p>Outbound IP list passed in when ContentType=ip_outbound (Base64-encoded)</p>
                     * 
                     */
                    std::vector<std::string> GetOutboundIP() const;

                    /**
                     * 设置<p>Outbound IP list passed in when ContentType=ip_outbound (Base64-encoded)</p>
                     * @param _outboundIP <p>Outbound IP list passed in when ContentType=ip_outbound (Base64-encoded)</p>
                     * 
                     */
                    void SetOutboundIP(const std::vector<std::string>& _outboundIP);

                    /**
                     * 判断参数 OutboundIP 是否已赋值
                     * @return OutboundIP 是否已赋值
                     * 
                     */
                    bool OutboundIPHasBeenSet() const;

                    /**
                     * 获取<p>Inbound IP list passed in when ContentType=ip_inbound (Base64-encoded)</p>
                     * @return InboundIP <p>Inbound IP list passed in when ContentType=ip_inbound (Base64-encoded)</p>
                     * 
                     */
                    std::vector<std::string> GetInboundIP() const;

                    /**
                     * 设置<p>Inbound IP list passed in when ContentType=ip_inbound (Base64-encoded)</p>
                     * @param _inboundIP <p>Inbound IP list passed in when ContentType=ip_inbound (Base64-encoded)</p>
                     * 
                     */
                    void SetInboundIP(const std::vector<std::string>& _inboundIP);

                    /**
                     * 判断参数 InboundIP 是否已赋值
                     * @return InboundIP 是否已赋值
                     * 
                     */
                    bool InboundIPHasBeenSet() const;

                    /**
                     * 获取<p>Image ID list / Image IDs (when TCSSScope=0)</p>
                     * @return ImageIDs <p>Image ID list / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置<p>Image ID list / Image IDs (when TCSSScope=0)</p>
                     * @param _imageIDs <p>Image ID list / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>Process network rule passed in when ContentType=process_network</p>
                     * @return ProcessNetworkRules <p>Process network rule passed in when ContentType=process_network</p>
                     * 
                     */
                    RuleContentProcessNetwork GetProcessNetworkRules() const;

                    /**
                     * 设置<p>Process network rule passed in when ContentType=process_network</p>
                     * @param _processNetworkRules <p>Process network rule passed in when ContentType=process_network</p>
                     * 
                     */
                    void SetProcessNetworkRules(const RuleContentProcessNetwork& _processNetworkRules);

                    /**
                     * 判断参数 ProcessNetworkRules 是否已赋值
                     * @return ProcessNetworkRules 是否已赋值
                     * 
                     */
                    bool ProcessNetworkRulesHasBeenSet() const;

                    /**
                     * 获取<p>APPID of the selected accounts</p>
                     * @return TargetAppIDs <p>APPID of the selected accounts</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>APPID of the selected accounts</p>
                     * @param _targetAppIDs <p>APPID of the selected accounts</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>Allowlisted target machine information of the alarm</p>
                     * @return Target <p>Allowlisted target machine information of the alarm</p>
                     * 
                     */
                    EdrAlertTarget GetTarget() const;

                    /**
                     * 设置<p>Allowlisted target machine information of the alarm</p>
                     * @param _target <p>Allowlisted target machine information of the alarm</p>
                     * 
                     */
                    void SetTarget(const EdrAlertTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID and APPID corresponding to the custom asset</p>
                     * @return InstanceIDsWithAppId <p>Instance ID and APPID corresponding to the custom asset</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Instance ID and APPID corresponding to the custom asset</p>
                     * @param _instanceIDsWithAppId <p>Instance ID and APPID corresponding to the custom asset</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Select all instance IDs and APPIDs excluded from assets</p>
                     * @return ExcludeInstanceIDsWithAppId <p>Select all instance IDs and APPIDs excluded from assets</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Select all instance IDs and APPIDs excluded from assets</p>
                     * @param _excludeInstanceIDsWithAppId <p>Select all instance IDs and APPIDs excluded from assets</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Security center tag ID list (host asset scope "Select by tag", only applicable to hosts); capacity limit 100 (truncate if exceeded). Tag source API: DescribeAssetTagTree</p>
                     * @return TagIDs <p>Security center tag ID list (host asset scope "Select by tag", only applicable to hosts); capacity limit 100 (truncate if exceeded). Tag source API: DescribeAssetTagTree</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>Security center tag ID list (host asset scope "Select by tag", only applicable to hosts); capacity limit 100 (truncate if exceeded). Tag source API: DescribeAssetTagTree</p>
                     * @param _tagIDs <p>Security center tag ID list (host asset scope "Select by tag", only applicable to hosts); capacity limit 100 (truncate if exceeded). Tag source API: DescribeAssetTagTree</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>Specify the cluster list to take effect (each item includes AppId + ClusterID, used when TCSSScope=0). The input parameter set has a capacity limit of 3000 (truncated to retain the first 3000 items if exceeded)</p>
                     * @return ClusterIDsWithAppId <p>Specify the cluster list to take effect (each item includes AppId + ClusterID, used when TCSSScope=0). The input parameter set has a capacity limit of 3000 (truncated to retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Specify the cluster list to take effect (each item includes AppId + ClusterID, used when TCSSScope=0). The input parameter set has a capacity limit of 3000 (truncated to retain the first 3000 items if exceeded)</p>
                     * @param _clusterIDsWithAppId <p>Specify the cluster list to take effect (each item includes AppId + ClusterID, used when TCSSScope=0). The input parameter set has a capacity limit of 3000 (truncated to retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    void SetClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _clusterIDsWithAppId);

                    /**
                     * 判断参数 ClusterIDsWithAppId 是否已赋值
                     * @return ClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster exclusion list (each item contains AppId + ClusterID); input parameter set capacity limit: 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * @return ExcludeClusterIDsWithAppId <p>Cluster exclusion list (each item contains AppId + ClusterID); input parameter set capacity limit: 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetExcludeClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Cluster exclusion list (each item contains AppId + ClusterID); input parameter set capacity limit: 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * @param _excludeClusterIDsWithAppId <p>Cluster exclusion list (each item contains AppId + ClusterID); input parameter set capacity limit: 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    void SetExcludeClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _excludeClusterIDsWithAppId);

                    /**
                     * 判断参数 ExcludeClusterIDsWithAppId 是否已赋值
                     * @return ExcludeClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Directly select images (each item contains AppId + ImageID, and filter further on the basis of the cluster). In multi-account scenarios, each account only stores its own images. The input parameter set capacity limit is 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * @return ImageIDsWithAppId <p>Directly select images (each item contains AppId + ImageID, and filter further on the basis of the cluster). In multi-account scenarios, each account only stores its own images. The input parameter set capacity limit is 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    std::vector<ImageIDWithAppIdItem> GetImageIDsWithAppId() const;

                    /**
                     * 设置<p>Directly select images (each item contains AppId + ImageID, and filter further on the basis of the cluster). In multi-account scenarios, each account only stores its own images. The input parameter set capacity limit is 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * @param _imageIDsWithAppId <p>Directly select images (each item contains AppId + ImageID, and filter further on the basis of the cluster). In multi-account scenarios, each account only stores its own images. The input parameter set capacity limit is 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     * 
                     */
                    void SetImageIDsWithAppId(const std::vector<ImageIDWithAppIdItem>& _imageIDsWithAppId);

                    /**
                     * 判断参数 ImageIDsWithAppId 是否已赋值
                     * @return ImageIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ImageIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Container condition matching</p>
                     * @return ConditionMatches <p>Container condition matching</p>
                     * 
                     */
                    std::vector<ConditionMatch> GetConditionMatches() const;

                    /**
                     * 设置<p>Container condition matching</p>
                     * @param _conditionMatches <p>Container condition matching</p>
                     * 
                     */
                    void SetConditionMatches(const std::vector<ConditionMatch>& _conditionMatches);

                    /**
                     * 判断参数 ConditionMatches 是否已赋值
                     * @return ConditionMatches 是否已赋值
                     * 
                     */
                    bool ConditionMatchesHasBeenSet() const;

                private:

                    /**
                     * <p>Policy type / Rule Type: 0-System policy/System Rule, 1-Custom policy/Custom Rule</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Execution action / Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     */
                    int64_t m_alertAction;
                    bool m_alertActionHasBeenSet;

                    /**
                     * <p>Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // Host QUUIDS (when Scope=0)</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Switch / Status: 0-Enabled, 1-Disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>Alarm Level: 1-High risk, 2-Medium risk, 3-Low risk, 4-Notification</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     */
                    int64_t m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>Attack phase</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>Policy.</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Policy description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Handle Old Events: 0-No, 1-Yes</p>
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * <p>List of MD5 values passed in when ContentType=md5</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>List of file names passed in when ContentType=custom_file (Base64 code)</p>
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Directory list of files passed in when ContentType=custom_file (Base64-encoded)</p>
                     */
                    std::vector<std::string> m_fileDirectory;
                    bool m_fileDirectoryHasBeenSet;

                    /**
                     * <p>Command line rule passed in when ContentType=cmdline. The Exe/Cmdline fields of Process/PProcess/AProcess need to be Base64 encoded</p>
                     */
                    RuleContentCmdLine m_cmdLineRules;
                    bool m_cmdLineRulesHasBeenSet;

                    /**
                     * <p>List of domain names passed in when ContentType=dns (Base64-encoded)</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>Outbound IP list passed in when ContentType=ip_outbound (Base64-encoded)</p>
                     */
                    std::vector<std::string> m_outboundIP;
                    bool m_outboundIPHasBeenSet;

                    /**
                     * <p>Inbound IP list passed in when ContentType=ip_inbound (Base64-encoded)</p>
                     */
                    std::vector<std::string> m_inboundIP;
                    bool m_inboundIPHasBeenSet;

                    /**
                     * <p>Image ID list / Image IDs (when TCSSScope=0)</p>
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * <p>Process network rule passed in when ContentType=process_network</p>
                     */
                    RuleContentProcessNetwork m_processNetworkRules;
                    bool m_processNetworkRulesHasBeenSet;

                    /**
                     * <p>APPID of the selected accounts</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>Allowlisted target machine information of the alarm</p>
                     */
                    EdrAlertTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Instance ID and APPID corresponding to the custom asset</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Select all instance IDs and APPIDs excluded from assets</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Security center tag ID list (host asset scope "Select by tag", only applicable to hosts); capacity limit 100 (truncate if exceeded). Tag source API: DescribeAssetTagTree</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>Specify the cluster list to take effect (each item includes AppId + ClusterID, used when TCSSScope=0). The input parameter set has a capacity limit of 3000 (truncated to retain the first 3000 items if exceeded)</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_clusterIDsWithAppId;
                    bool m_clusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Cluster exclusion list (each item contains AppId + ClusterID); input parameter set capacity limit: 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_excludeClusterIDsWithAppId;
                    bool m_excludeClusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Directly select images (each item contains AppId + ImageID, and filter further on the basis of the cluster). In multi-account scenarios, each account only stores its own images. The input parameter set capacity limit is 3000 (truncate and retain the first 3000 items if exceeded)</p>
                     */
                    std::vector<ImageIDWithAppIdItem> m_imageIDsWithAppId;
                    bool m_imageIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Container condition matching</p>
                     */
                    std::vector<ConditionMatch> m_conditionMatches;
                    bool m_conditionMatchesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_
