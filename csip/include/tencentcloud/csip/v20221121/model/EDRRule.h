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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentCmdLine.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessNetwork.h>
#include <tencentcloud/csip/v20221121/model/ConditionMatch.h>
#include <tencentcloud/csip/v20221121/model/EDRRuleTagItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR policy content.
                */
                class EDRRule : public AbstractModel
                {
                public:
                    EDRRule();
                    ~EDRRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Policy ID.</p>
                     * @return RuleID <p>Policy ID.</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _ruleID <p>Policy ID.</p>
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
                     * 获取<p>Policy type. 0: System policy; 1: Custom policy</p>
                     * @return RuleType <p>Policy type. 0: System policy; 1: Custom policy</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>Policy type. 0: System policy; 1: Custom policy</p>
                     * @param _ruleType <p>Policy type. 0: System policy; 1: Custom policy</p>
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
                     * 获取<p>Executed Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * @return Action <p>Executed Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>Executed Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * @param _action <p>Executed Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Alarm Level: 0-None, 1-High, 2-Medium, 3-Low, 4-Reminder</p>
                     * @return Level <p>Alarm Level: 0-None, 1-High, 2-Medium, 3-Low, 4-Reminder</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>Alarm Level: 0-None, 1-High, 2-Medium, 3-Low, 4-Reminder</p>
                     * @param _level <p>Alarm Level: 0-None, 1-High, 2-Medium, 3-Low, 4-Reminder</p>
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
                     * 获取<p>Detection mode / Detect Type: 0-Host Detection, 1-Network Detection</p>
                     * @return DetectType <p>Detection mode / Detect Type: 0-Host Detection, 1-Network Detection</p>
                     * 
                     */
                    int64_t GetDetectType() const;

                    /**
                     * 设置<p>Detection mode / Detect Type: 0-Host Detection, 1-Network Detection</p>
                     * @param _detectType <p>Detection mode / Detect Type: 0-Host Detection, 1-Network Detection</p>
                     * 
                     */
                    void SetDetectType(const int64_t& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

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
                     * 获取<p>Effective asset scope of host / Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship</p>
                     * @return CWPScope <p>Effective asset scope of host / Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>Effective asset scope of host / Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship</p>
                     * @param _cWPScope <p>Effective asset scope of host / Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship</p>
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
                     * 获取<p>Selected host at host runtime</p>
                     * @return QUUIDS <p>Selected host at host runtime</p>
                     * 
                     */
                    std::vector<std::string> GetQUUIDS() const;

                    /**
                     * 设置<p>Selected host at host runtime</p>
                     * @param _qUUIDS <p>Selected host at host runtime</p>
                     * 
                     */
                    void SetQUUIDS(const std::vector<std::string>& _qUUIDS);

                    /**
                     * 判断参数 QUUIDS 是否已赋值
                     * @return QUUIDS 是否已赋值
                     * 
                     */
                    bool QUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>Status: 0-Enabled, 1-Disabled</p>
                     * @return Status <p>Status: 0-Enabled, 1-Disabled</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status: 0-Enabled, 1-Disabled</p>
                     * @param _status <p>Status: 0-Enabled, 1-Disabled</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Modification time.</p>
                     * @return ModifyTime <p>Modification time.</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Modification time.</p>
                     * @param _modifyTime <p>Modification time.</p>
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
                     * 获取<p>Whether interception is supported / Support Block: 0-Not Supported, 1-Supported</p>
                     * @return SupportBlock <p>Whether interception is supported / Support Block: 0-Not Supported, 1-Supported</p>
                     * 
                     */
                    int64_t GetSupportBlock() const;

                    /**
                     * 设置<p>Whether interception is supported / Support Block: 0-Not Supported, 1-Supported</p>
                     * @param _supportBlock <p>Whether interception is supported / Support Block: 0-Not Supported, 1-Supported</p>
                     * 
                     */
                    void SetSupportBlock(const int64_t& _supportBlock);

                    /**
                     * 判断参数 SupportBlock 是否已赋值
                     * @return SupportBlock 是否已赋值
                     * 
                     */
                    bool SupportBlockHasBeenSet() const;

                    /**
                     * 获取<p>MD5 list. This field is filled when ContentType is md5.</p>
                     * @return Md5List <p>MD5 list. This field is filled when ContentType is md5.</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>MD5 list. This field is filled when ContentType is md5.</p>
                     * @param _md5List <p>MD5 list. This field is filled when ContentType is md5.</p>
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
                     * 获取<p>File name list, filled when ContentType=custom_file</p>
                     * @return FileName <p>File name list, filled when ContentType=custom_file</p>
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置<p>File name list, filled when ContentType=custom_file</p>
                     * @param _fileName <p>File name list, filled when ContentType=custom_file</p>
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
                     * 获取<p>File directory list, fill when ContentType=custom_file</p>
                     * @return FileDirectory <p>File directory list, fill when ContentType=custom_file</p>
                     * 
                     */
                    std::vector<std::string> GetFileDirectory() const;

                    /**
                     * 设置<p>File directory list, fill when ContentType=custom_file</p>
                     * @param _fileDirectory <p>File directory list, fill when ContentType=custom_file</p>
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
                     * 获取<p>Domain name list. Fill in when ContentType=dns</p>
                     * @return Domains <p>Domain name list. Fill in when ContentType=dns</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>Domain name list. Fill in when ContentType=dns</p>
                     * @param _domains <p>Domain name list. Fill in when ContentType=dns</p>
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
                     * 获取<p>Outbound IP list, populated when ContentType=ip_outbound</p>
                     * @return OutboundIP <p>Outbound IP list, populated when ContentType=ip_outbound</p>
                     * 
                     */
                    std::vector<std::string> GetOutboundIP() const;

                    /**
                     * 设置<p>Outbound IP list, populated when ContentType=ip_outbound</p>
                     * @param _outboundIP <p>Outbound IP list, populated when ContentType=ip_outbound</p>
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
                     * 获取<p>Inbound IP list, filled when ContentType=ip_inbound</p>
                     * @return InboundIP <p>Inbound IP list, filled when ContentType=ip_inbound</p>
                     * 
                     */
                    std::vector<std::string> GetInboundIP() const;

                    /**
                     * 设置<p>Inbound IP list, filled when ContentType=ip_inbound</p>
                     * @param _inboundIP <p>Inbound IP list, filled when ContentType=ip_inbound</p>
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
                     * 获取<p>Command line rule, filled when ContentType=cmdline</p>
                     * @return CmdLineRules <p>Command line rule, filled when ContentType=cmdline</p>
                     * 
                     */
                    RuleContentCmdLine GetCmdLineRules() const;

                    /**
                     * 设置<p>Command line rule, filled when ContentType=cmdline</p>
                     * @param _cmdLineRules <p>Command line rule, filled when ContentType=cmdline</p>
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
                     * 获取<p>Image ID list that takes effect / Image IDs (when TCSSScope=0)</p>
                     * @return ImageIDs <p>Image ID list that takes effect / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置<p>Image ID list that takes effect / Image IDs (when TCSSScope=0)</p>
                     * @param _imageIDs <p>Image ID list that takes effect / Image IDs (when TCSSScope=0)</p>
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
                     * 获取<p>Image name regular expression / Image Names Regex</p>
                     * @return ImageNamesRegex <p>Image name regular expression / Image Names Regex</p>
                     * 
                     */
                    std::string GetImageNamesRegex() const;

                    /**
                     * 设置<p>Image name regular expression / Image Names Regex</p>
                     * @param _imageNamesRegex <p>Image name regular expression / Image Names Regex</p>
                     * 
                     */
                    void SetImageNamesRegex(const std::string& _imageNamesRegex);

                    /**
                     * 判断参数 ImageNamesRegex 是否已赋值
                     * @return ImageNamesRegex 是否已赋值
                     * 
                     */
                    bool ImageNamesRegexHasBeenSet() const;

                    /**
                     * 获取<p>Confidence: 0-Low, 1-Medium, 2-High</p>
                     * @return Confidence <p>Confidence: 0-Low, 1-Medium, 2-High</p>
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置<p>Confidence: 0-Low, 1-Medium, 2-High</p>
                     * @param _confidence <p>Confidence: 0-Low, 1-Medium, 2-High</p>
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Excluded host list / Excluded Host QUUIDS</p>
                     * @return ExcludeQUUIDS <p>Excluded host list / Excluded Host QUUIDS</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQUUIDS() const;

                    /**
                     * 设置<p>Excluded host list / Excluded Host QUUIDS</p>
                     * @param _excludeQUUIDS <p>Excluded host list / Excluded Host QUUIDS</p>
                     * 
                     */
                    void SetExcludeQUUIDS(const std::vector<std::string>& _excludeQUUIDS);

                    /**
                     * 判断参数 ExcludeQUUIDS 是否已赋值
                     * @return ExcludeQUUIDS 是否已赋值
                     * 
                     */
                    bool ExcludeQUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>Excluded image id list / Excluded Image IDs</p>
                     * @return ExcludeImageIDs <p>Excluded image id list / Excluded Image IDs</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIDs() const;

                    /**
                     * 设置<p>Excluded image id list / Excluded Image IDs</p>
                     * @param _excludeImageIDs <p>Excluded image id list / Excluded Image IDs</p>
                     * 
                     */
                    void SetExcludeImageIDs(const std::vector<std::string>& _excludeImageIDs);

                    /**
                     * 判断参数 ExcludeImageIDs 是否已赋值
                     * @return ExcludeImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>Process network rules</p>
                     * @return ProcessNetworkRules <p>Process network rules</p>
                     * 
                     */
                    RuleContentProcessNetwork GetProcessNetworkRules() const;

                    /**
                     * 设置<p>Process network rules</p>
                     * @param _processNetworkRules <p>Process network rules</p>
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
                     * 获取<p>APPID corresponding to the policy.</p>
                     * @return AppID <p>APPID corresponding to the policy.</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>APPID corresponding to the policy.</p>
                     * @param _appID <p>APPID corresponding to the policy.</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Selected instance ID range</p>
                     * @return InstanceIDs <p>Selected instance ID range</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>Selected instance ID range</p>
                     * @param _instanceIDs <p>Selected instance ID range</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Excluded instance ID</p>
                     * @return ExcludeInstanceIDs <p>Excluded instance ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>Excluded instance ID</p>
                     * @param _excludeInstanceIDs <p>Excluded instance ID</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID list that takes effect (with a value when TCSSScope=0; empty returns [])</p>
                     * @return ClusterIDs <p>Cluster ID list that takes effect (with a value when TCSSScope=0; empty returns [])</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置<p>Cluster ID list that takes effect (with a value when TCSSScope=0; empty returns [])</p>
                     * @param _clusterIDs <p>Cluster ID list that takes effect (with a value when TCSSScope=0; empty returns [])</p>
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID list for exclusion (empty returns [])</p>
                     * @return ExcludeClusterIDs <p>Cluster ID list for exclusion (empty returns [])</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeClusterIDs() const;

                    /**
                     * 设置<p>Cluster ID list for exclusion (empty returns [])</p>
                     * @param _excludeClusterIDs <p>Cluster ID list for exclusion (empty returns [])</p>
                     * 
                     */
                    void SetExcludeClusterIDs(const std::vector<std::string>& _excludeClusterIDs);

                    /**
                     * 判断参数 ExcludeClusterIDs 是否已赋值
                     * @return ExcludeClusterIDs 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Container condition matching.</p>
                     * @return ConditionMatches <p>Container condition matching.</p>
                     * 
                     */
                    std::vector<ConditionMatch> GetConditionMatches() const;

                    /**
                     * 设置<p>Container condition matching.</p>
                     * @param _conditionMatches <p>Container condition matching.</p>
                     * 
                     */
                    void SetConditionMatches(const std::vector<ConditionMatch>& _conditionMatches);

                    /**
                     * 判断参数 ConditionMatches 是否已赋值
                     * @return ConditionMatches 是否已赋值
                     * 
                     */
                    bool ConditionMatchesHasBeenSet() const;

                    /**
                     * 获取<p>Security center tag</p>
                     * @return TagItems <p>Security center tag</p>
                     * 
                     */
                    std::vector<EDRRuleTagItem> GetTagItems() const;

                    /**
                     * 设置<p>Security center tag</p>
                     * @param _tagItems <p>Security center tag</p>
                     * 
                     */
                    void SetTagItems(const std::vector<EDRRuleTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                private:

                    /**
                     * <p>Policy ID.</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Policy type. 0: System policy; 1: Custom policy</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Content Type: md5-File MD5, cmdline-Command Line, dns-DNS, ip_inbound-Inbound IP, ip_outbound-Outbound IP, custom_file-Custom File, process_network-Process Network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>Executed Action: 0-Alert, 1-Allow, 2-Alert and Block</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Alarm Level: 0-None, 1-High, 2-Medium, 3-Low, 4-Reminder</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Detection Mode: 0-Precise, 1-Balanced, 2-Deep</p>
                     */
                    int64_t m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>Detection mode / Detect Type: 0-Host Detection, 1-Network Detection</p>
                     */
                    int64_t m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * <p>Attack phase</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>Effective asset scope of host / Effective Scope: 0-Specified Hosts, 1-All Hosts, 2-Professional, 3-Flagship, 4-Professional+Flagship</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>Selected host at host runtime</p>
                     */
                    std::vector<std::string> m_qUUIDS;
                    bool m_qUUIDSHasBeenSet;

                    /**
                     * <p>Status: 0-Enabled, 1-Disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Whether interception is supported / Support Block: 0-Not Supported, 1-Supported</p>
                     */
                    int64_t m_supportBlock;
                    bool m_supportBlockHasBeenSet;

                    /**
                     * <p>MD5 list. This field is filled when ContentType is md5.</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>File name list, filled when ContentType=custom_file</p>
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File directory list, fill when ContentType=custom_file</p>
                     */
                    std::vector<std::string> m_fileDirectory;
                    bool m_fileDirectoryHasBeenSet;

                    /**
                     * <p>Domain name list. Fill in when ContentType=dns</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>Outbound IP list, populated when ContentType=ip_outbound</p>
                     */
                    std::vector<std::string> m_outboundIP;
                    bool m_outboundIPHasBeenSet;

                    /**
                     * <p>Inbound IP list, filled when ContentType=ip_inbound</p>
                     */
                    std::vector<std::string> m_inboundIP;
                    bool m_inboundIPHasBeenSet;

                    /**
                     * <p>Command line rule, filled when ContentType=cmdline</p>
                     */
                    RuleContentCmdLine m_cmdLineRules;
                    bool m_cmdLineRulesHasBeenSet;

                    /**
                     * <p>Container Image Scope: 0-Specified Images, 1-All Images</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Image ID list that takes effect / Image IDs (when TCSSScope=0)</p>
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * <p>Image name regular expression / Image Names Regex</p>
                     */
                    std::string m_imageNamesRegex;
                    bool m_imageNamesRegexHasBeenSet;

                    /**
                     * <p>Confidence: 0-Low, 1-Medium, 2-High</p>
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Excluded host list / Excluded Host QUUIDS</p>
                     */
                    std::vector<std::string> m_excludeQUUIDS;
                    bool m_excludeQUUIDSHasBeenSet;

                    /**
                     * <p>Excluded image id list / Excluded Image IDs</p>
                     */
                    std::vector<std::string> m_excludeImageIDs;
                    bool m_excludeImageIDsHasBeenSet;

                    /**
                     * <p>Process network rules</p>
                     */
                    RuleContentProcessNetwork m_processNetworkRules;
                    bool m_processNetworkRulesHasBeenSet;

                    /**
                     * <p>APPID corresponding to the policy.</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Selected instance ID range</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Excluded instance ID</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                    /**
                     * <p>Cluster ID list that takes effect (with a value when TCSSScope=0; empty returns [])</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * <p>Cluster ID list for exclusion (empty returns [])</p>
                     */
                    std::vector<std::string> m_excludeClusterIDs;
                    bool m_excludeClusterIDsHasBeenSet;

                    /**
                     * <p>Container condition matching.</p>
                     */
                    std::vector<ConditionMatch> m_conditionMatches;
                    bool m_conditionMatchesHasBeenSet;

                    /**
                     * <p>Security center tag</p>
                     */
                    std::vector<EDRRuleTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_
