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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RelatedEvent.h>
#include <tencentcloud/csip/v20221121/model/KeyValue.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Alarm Dropdown Fields
                */
                class AlertExtraInfo : public AbstractModel
                {
                public:
                    AlertExtraInfo();
                    ~AlertExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Related attack events
                     * @return RelateEvent Related attack events
                     * 
                     */
                    RelatedEvent GetRelateEvent() const;

                    /**
                     * 设置Related attack events
                     * @param _relateEvent Related attack events
                     * 
                     */
                    void SetRelateEvent(const RelatedEvent& _relateEvent);

                    /**
                     * 判断参数 RelateEvent 是否已赋值
                     * @return RelateEvent 是否已赋值
                     * 
                     */
                    bool RelateEventHasBeenSet() const;

                    /**
                     * 获取Leaked content
                     * @return LeakContent Leaked content
                     * 
                     */
                    std::string GetLeakContent() const;

                    /**
                     * 设置Leaked content
                     * @param _leakContent Leaked content
                     * 
                     */
                    void SetLeakContent(const std::string& _leakContent);

                    /**
                     * 判断参数 LeakContent 是否已赋值
                     * @return LeakContent 是否已赋值
                     * 
                     */
                    bool LeakContentHasBeenSet() const;

                    /**
                     * 获取Leak APIs
                     * @return LeakAPI Leak APIs
                     * 
                     */
                    std::string GetLeakAPI() const;

                    /**
                     * 设置Leak APIs
                     * @param _leakAPI Leak APIs
                     * 
                     */
                    void SetLeakAPI(const std::string& _leakAPI);

                    /**
                     * 判断参数 LeakAPI 是否已赋值
                     * @return LeakAPI 是否已赋值
                     * 
                     */
                    bool LeakAPIHasBeenSet() const;

                    /**
                     * 获取secretID
                     * @return SecretID secretID
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 设置secretID
                     * @param _secretID secretID
                     * 
                     */
                    void SetSecretID(const std::string& _secretID);

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                    /**
                     * 获取Matched rule
                     * @return Rule Matched rule
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Matched rule
                     * @param _rule Matched rule
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleDesc Rule description
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置Rule description
                     * @param _ruleDesc Rule description
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取Protocol port
                     * @return ProtocolPort Protocol port
                     * 
                     */
                    std::string GetProtocolPort() const;

                    /**
                     * 设置Protocol port
                     * @param _protocolPort Protocol port
                     * 
                     */
                    void SetProtocolPort(const std::string& _protocolPort);

                    /**
                     * 判断参数 ProtocolPort 是否已赋值
                     * @return ProtocolPort 是否已赋值
                     * 
                     */
                    bool ProtocolPortHasBeenSet() const;

                    /**
                     * 获取Attack content
                     * @return AttackContent Attack content
                     * 
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置Attack content
                     * @param _attackContent Attack content
                     * 
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     * 
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取Attack IP profiling.
                     * @return AttackIPProfile Attack IP profiling.
                     * 
                     */
                    std::string GetAttackIPProfile() const;

                    /**
                     * 设置Attack IP profiling.
                     * @param _attackIPProfile Attack IP profiling.
                     * 
                     */
                    void SetAttackIPProfile(const std::string& _attackIPProfile);

                    /**
                     * 判断参数 AttackIPProfile 是否已赋值
                     * @return AttackIPProfile 是否已赋值
                     * 
                     */
                    bool AttackIPProfileHasBeenSet() const;

                    /**
                     * 获取Attack IP tag
                     * @return AttackIPTags Attack IP tag
                     * 
                     */
                    std::string GetAttackIPTags() const;

                    /**
                     * 设置Attack IP tag
                     * @param _attackIPTags Attack IP tag
                     * 
                     */
                    void SetAttackIPTags(const std::string& _attackIPTags);

                    /**
                     * 判断参数 AttackIPTags 是否已赋值
                     * @return AttackIPTags 是否已赋值
                     * 
                     */
                    bool AttackIPTagsHasBeenSet() const;

                    /**
                     * 获取Request method
                     * @return RequestMethod Request method
                     * 
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置Request method
                     * @param _requestMethod Request method
                     * 
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取HTTP log
                     * @return HttpLog HTTP log
                     * 
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置HTTP log
                     * @param _httpLog HTTP log
                     * 
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     * 
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取Attacked domain name
                     * @return AttackDomain Attacked domain name
                     * 
                     */
                    std::string GetAttackDomain() const;

                    /**
                     * 设置Attacked domain name
                     * @param _attackDomain Attacked domain name
                     * 
                     */
                    void SetAttackDomain(const std::string& _attackDomain);

                    /**
                     * 判断参数 AttackDomain 是否已赋值
                     * @return AttackDomain 是否已赋值
                     * 
                     */
                    bool AttackDomainHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param _filePath File path
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取user_agent
                     * @return UserAgent user_agent
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置user_agent
                     * @param _userAgent user_agent
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Request headers
                     * @return RequestHeaders Request headers
                     * 
                     */
                    std::string GetRequestHeaders() const;

                    /**
                     * 设置Request headers
                     * @param _requestHeaders Request headers
                     * 
                     */
                    void SetRequestHeaders(const std::string& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     * 
                     */
                    bool RequestHeadersHasBeenSet() const;

                    /**
                     * 获取Login username
                     * @return LoginUserName Login username
                     * 
                     */
                    std::string GetLoginUserName() const;

                    /**
                     * 设置Login username
                     * @param _loginUserName Login username
                     * 
                     */
                    void SetLoginUserName(const std::string& _loginUserName);

                    /**
                     * 判断参数 LoginUserName 是否已赋值
                     * @return LoginUserName 是否已赋值
                     * 
                     */
                    bool LoginUserNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulnerabilityName Vulnerability name
                     * 
                     */
                    std::string GetVulnerabilityName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulnerabilityName Vulnerability name
                     * 
                     */
                    void SetVulnerabilityName(const std::string& _vulnerabilityName);

                    /**
                     * 判断参数 VulnerabilityName 是否已赋值
                     * @return VulnerabilityName 是否已赋值
                     * 
                     */
                    bool VulnerabilityNameHasBeenSet() const;

                    /**
                     * 获取Public vulnerability and exposure
                     * @return CVE Public vulnerability and exposure
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置Public vulnerability and exposure
                     * @param _cVE Public vulnerability and exposure
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取Service process
                     * @return ServiceProcess Service process
                     * 
                     */
                    std::string GetServiceProcess() const;

                    /**
                     * 设置Service process
                     * @param _serviceProcess Service process
                     * 
                     */
                    void SetServiceProcess(const std::string& _serviceProcess);

                    /**
                     * 判断参数 ServiceProcess 是否已赋值
                     * @return ServiceProcess 是否已赋值
                     * 
                     */
                    bool ServiceProcessHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size
                     * @return FileSize File size
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置File size
                     * @param _fileSize File size
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取File MD5
                     * @return FileMD5 File MD5
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 设置File MD5
                     * @param _fileMD5 File MD5
                     * 
                     */
                    void SetFileMD5(const std::string& _fileMD5);

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     * 
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取Last access time of the file
                     * @return FileLastAccessTime Last access time of the file
                     * 
                     */
                    std::string GetFileLastAccessTime() const;

                    /**
                     * 设置Last access time of the file
                     * @param _fileLastAccessTime Last access time of the file
                     * 
                     */
                    void SetFileLastAccessTime(const std::string& _fileLastAccessTime);

                    /**
                     * 判断参数 FileLastAccessTime 是否已赋值
                     * @return FileLastAccessTime 是否已赋值
                     * 
                     */
                    bool FileLastAccessTimeHasBeenSet() const;

                    /**
                     * 获取File modification time
                     * @return FileModifyTime File modification time
                     * 
                     */
                    std::string GetFileModifyTime() const;

                    /**
                     * 设置File modification time
                     * @param _fileModifyTime File modification time
                     * 
                     */
                    void SetFileModifyTime(const std::string& _fileModifyTime);

                    /**
                     * 判断参数 FileModifyTime 是否已赋值
                     * @return FileModifyTime 是否已赋值
                     * 
                     */
                    bool FileModifyTimeHasBeenSet() const;

                    /**
                     * 获取Last access Time
                     * @return RecentAccessTime Last access Time
                     * 
                     */
                    std::string GetRecentAccessTime() const;

                    /**
                     * 设置Last access Time
                     * @param _recentAccessTime Last access Time
                     * 
                     */
                    void SetRecentAccessTime(const std::string& _recentAccessTime);

                    /**
                     * 判断参数 RecentAccessTime 是否已赋值
                     * @return RecentAccessTime 是否已赋值
                     * 
                     */
                    bool RecentAccessTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time
                     * @return RecentModifyTime Last modification time
                     * 
                     */
                    std::string GetRecentModifyTime() const;

                    /**
                     * 设置Last modification time
                     * @param _recentModifyTime Last modification time
                     * 
                     */
                    void SetRecentModifyTime(const std::string& _recentModifyTime);

                    /**
                     * 判断参数 RecentModifyTime 是否已赋值
                     * @return RecentModifyTime 是否已赋值
                     * 
                     */
                    bool RecentModifyTimeHasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
                     * @param _virusName Virus name
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
                     * 获取Virus file tag
                     * @return VirusFileTags Virus file tag
                     * 
                     */
                    std::string GetVirusFileTags() const;

                    /**
                     * 设置Virus file tag
                     * @param _virusFileTags Virus file tag
                     * 
                     */
                    void SetVirusFileTags(const std::string& _virusFileTags);

                    /**
                     * 判断参数 VirusFileTags 是否已赋值
                     * @return VirusFileTags 是否已赋值
                     * 
                     */
                    bool VirusFileTagsHasBeenSet() const;

                    /**
                     * 获取Behavioral characteristics
                     * @return BehavioralCharacteristics Behavioral characteristics
                     * 
                     */
                    std::string GetBehavioralCharacteristics() const;

                    /**
                     * 设置Behavioral characteristics
                     * @param _behavioralCharacteristics Behavioral characteristics
                     * 
                     */
                    void SetBehavioralCharacteristics(const std::string& _behavioralCharacteristics);

                    /**
                     * 判断参数 BehavioralCharacteristics 是否已赋值
                     * @return BehavioralCharacteristics 是否已赋值
                     * 
                     */
                    bool BehavioralCharacteristicsHasBeenSet() const;

                    /**
                     * 获取Process name (PID)
                     * @return ProcessNamePID Process name (PID)
                     * 
                     */
                    std::string GetProcessNamePID() const;

                    /**
                     * 设置Process name (PID)
                     * @param _processNamePID Process name (PID)
                     * 
                     */
                    void SetProcessNamePID(const std::string& _processNamePID);

                    /**
                     * 判断参数 ProcessNamePID 是否已赋值
                     * @return ProcessNamePID 是否已赋值
                     * 
                     */
                    bool ProcessNamePIDHasBeenSet() const;

                    /**
                     * 获取Process path
                     * @return ProcessPath Process path
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
                     * @param _processPath Process path
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Process command line
                     * @return ProcessCommandLine Process command line
                     * 
                     */
                    std::string GetProcessCommandLine() const;

                    /**
                     * 设置Process command line
                     * @param _processCommandLine Process command line
                     * 
                     */
                    void SetProcessCommandLine(const std::string& _processCommandLine);

                    /**
                     * 判断参数 ProcessCommandLine 是否已赋值
                     * @return ProcessCommandLine 是否已赋值
                     * 
                     */
                    bool ProcessCommandLineHasBeenSet() const;

                    /**
                     * 获取Process permission
                     * @return ProcessPermissions Process permission
                     * 
                     */
                    std::string GetProcessPermissions() const;

                    /**
                     * 设置Process permission
                     * @param _processPermissions Process permission
                     * 
                     */
                    void SetProcessPermissions(const std::string& _processPermissions);

                    /**
                     * 判断参数 ProcessPermissions 是否已赋值
                     * @return ProcessPermissions 是否已赋值
                     * 
                     */
                    bool ProcessPermissionsHasBeenSet() const;

                    /**
                     * 获取Execute commands
                     * @return ExecutedCommand Execute commands
                     * 
                     */
                    std::string GetExecutedCommand() const;

                    /**
                     * 设置Execute commands
                     * @param _executedCommand Execute commands
                     * 
                     */
                    void SetExecutedCommand(const std::string& _executedCommand);

                    /**
                     * 判断参数 ExecutedCommand 是否已赋值
                     * @return ExecutedCommand 是否已赋值
                     * 
                     */
                    bool ExecutedCommandHasBeenSet() const;

                    /**
                     * 获取Affected file name
                     * @return AffectedFileName Affected file name
                     * 
                     */
                    std::string GetAffectedFileName() const;

                    /**
                     * 设置Affected file name
                     * @param _affectedFileName Affected file name
                     * 
                     */
                    void SetAffectedFileName(const std::string& _affectedFileName);

                    /**
                     * 判断参数 AffectedFileName 是否已赋值
                     * @return AffectedFileName 是否已赋值
                     * 
                     */
                    bool AffectedFileNameHasBeenSet() const;

                    /**
                     * 获取Bait path
                     * @return DecoyPath Bait path
                     * 
                     */
                    std::string GetDecoyPath() const;

                    /**
                     * 设置Bait path
                     * @param _decoyPath Bait path
                     * 
                     */
                    void SetDecoyPath(const std::string& _decoyPath);

                    /**
                     * 判断参数 DecoyPath 是否已赋值
                     * @return DecoyPath 是否已赋值
                     * 
                     */
                    bool DecoyPathHasBeenSet() const;

                    /**
                     * 获取Malicious process file size
                     * @return MaliciousProcessFileSize Malicious process file size
                     * 
                     */
                    std::string GetMaliciousProcessFileSize() const;

                    /**
                     * 设置Malicious process file size
                     * @param _maliciousProcessFileSize Malicious process file size
                     * 
                     */
                    void SetMaliciousProcessFileSize(const std::string& _maliciousProcessFileSize);

                    /**
                     * 判断参数 MaliciousProcessFileSize 是否已赋值
                     * @return MaliciousProcessFileSize 是否已赋值
                     * 
                     */
                    bool MaliciousProcessFileSizeHasBeenSet() const;

                    /**
                     * 获取MD5 of the malicious process file
                     * @return MaliciousProcessFileMD5 MD5 of the malicious process file
                     * 
                     */
                    std::string GetMaliciousProcessFileMD5() const;

                    /**
                     * 设置MD5 of the malicious process file
                     * @param _maliciousProcessFileMD5 MD5 of the malicious process file
                     * 
                     */
                    void SetMaliciousProcessFileMD5(const std::string& _maliciousProcessFileMD5);

                    /**
                     * 判断参数 MaliciousProcessFileMD5 是否已赋值
                     * @return MaliciousProcessFileMD5 是否已赋值
                     * 
                     */
                    bool MaliciousProcessFileMD5HasBeenSet() const;

                    /**
                     * 获取Malicious process name (PID)
                     * @return MaliciousProcessNamePID Malicious process name (PID)
                     * 
                     */
                    std::string GetMaliciousProcessNamePID() const;

                    /**
                     * 设置Malicious process name (PID)
                     * @param _maliciousProcessNamePID Malicious process name (PID)
                     * 
                     */
                    void SetMaliciousProcessNamePID(const std::string& _maliciousProcessNamePID);

                    /**
                     * 判断参数 MaliciousProcessNamePID 是否已赋值
                     * @return MaliciousProcessNamePID 是否已赋值
                     * 
                     */
                    bool MaliciousProcessNamePIDHasBeenSet() const;

                    /**
                     * 获取Malicious process path
                     * @return MaliciousProcessPath Malicious process path
                     * 
                     */
                    std::string GetMaliciousProcessPath() const;

                    /**
                     * 设置Malicious process path
                     * @param _maliciousProcessPath Malicious process path
                     * 
                     */
                    void SetMaliciousProcessPath(const std::string& _maliciousProcessPath);

                    /**
                     * 判断参数 MaliciousProcessPath 是否已赋值
                     * @return MaliciousProcessPath 是否已赋值
                     * 
                     */
                    bool MaliciousProcessPathHasBeenSet() const;

                    /**
                     * 获取Malicious process startup time
                     * @return MaliciousProcessStartTime Malicious process startup time
                     * 
                     */
                    std::string GetMaliciousProcessStartTime() const;

                    /**
                     * 设置Malicious process startup time
                     * @param _maliciousProcessStartTime Malicious process startup time
                     * 
                     */
                    void SetMaliciousProcessStartTime(const std::string& _maliciousProcessStartTime);

                    /**
                     * 判断参数 MaliciousProcessStartTime 是否已赋值
                     * @return MaliciousProcessStartTime 是否已赋值
                     * 
                     */
                    bool MaliciousProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取Command
                     * @return CommandContent Command
                     * 
                     */
                    std::string GetCommandContent() const;

                    /**
                     * 设置Command
                     * @param _commandContent Command
                     * 
                     */
                    void SetCommandContent(const std::string& _commandContent);

                    /**
                     * 判断参数 CommandContent 是否已赋值
                     * @return CommandContent 是否已赋值
                     * 
                     */
                    bool CommandContentHasBeenSet() const;

                    /**
                     * 获取Startup user
                     * @return StartupUser Startup user
                     * 
                     */
                    std::string GetStartupUser() const;

                    /**
                     * 设置Startup user
                     * @param _startupUser Startup user
                     * 
                     */
                    void SetStartupUser(const std::string& _startupUser);

                    /**
                     * 判断参数 StartupUser 是否已赋值
                     * @return StartupUser 是否已赋值
                     * 
                     */
                    bool StartupUserHasBeenSet() const;

                    /**
                     * 获取User group
                     * @return UserGroup User group
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置User group
                     * @param _userGroup User group
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取Added permission
                     * @return NewPermissions Added permission
                     * 
                     */
                    std::string GetNewPermissions() const;

                    /**
                     * 设置Added permission
                     * @param _newPermissions Added permission
                     * 
                     */
                    void SetNewPermissions(const std::string& _newPermissions);

                    /**
                     * 判断参数 NewPermissions 是否已赋值
                     * @return NewPermissions 是否已赋值
                     * 
                     */
                    bool NewPermissionsHasBeenSet() const;

                    /**
                     * 获取Parent process
                     * @return ParentProcess Parent process
                     * 
                     */
                    std::string GetParentProcess() const;

                    /**
                     * 设置Parent process
                     * @param _parentProcess Parent process
                     * 
                     */
                    void SetParentProcess(const std::string& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取Class name
                     * @return ClassName Class name
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Class name
                     * @param _className Class name
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Class loader to which it belongs
                     * @return ClassLoader Class loader to which it belongs
                     * 
                     */
                    std::string GetClassLoader() const;

                    /**
                     * 设置Class loader to which it belongs
                     * @param _classLoader Class loader to which it belongs
                     * 
                     */
                    void SetClassLoader(const std::string& _classLoader);

                    /**
                     * 判断参数 ClassLoader 是否已赋值
                     * @return ClassLoader 是否已赋值
                     * 
                     */
                    bool ClassLoaderHasBeenSet() const;

                    /**
                     * 获取Individual file size
                     * @return ClassFileSize Individual file size
                     * 
                     */
                    std::string GetClassFileSize() const;

                    /**
                     * 设置Individual file size
                     * @param _classFileSize Individual file size
                     * 
                     */
                    void SetClassFileSize(const std::string& _classFileSize);

                    /**
                     * 判断参数 ClassFileSize 是否已赋值
                     * @return ClassFileSize 是否已赋值
                     * 
                     */
                    bool ClassFileSizeHasBeenSet() const;

                    /**
                     * 获取Class file MD5
                     * @return ClassFileMD5 Class file MD5
                     * 
                     */
                    std::string GetClassFileMD5() const;

                    /**
                     * 设置Class file MD5
                     * @param _classFileMD5 Class file MD5
                     * 
                     */
                    void SetClassFileMD5(const std::string& _classFileMD5);

                    /**
                     * 判断参数 ClassFileMD5 是否已赋值
                     * @return ClassFileMD5 是否已赋值
                     * 
                     */
                    bool ClassFileMD5HasBeenSet() const;

                    /**
                     * 获取Parent class name
                     * @return ParentClassName Parent class name
                     * 
                     */
                    std::string GetParentClassName() const;

                    /**
                     * 设置Parent class name
                     * @param _parentClassName Parent class name
                     * 
                     */
                    void SetParentClassName(const std::string& _parentClassName);

                    /**
                     * 判断参数 ParentClassName 是否已赋值
                     * @return ParentClassName 是否已赋值
                     * 
                     */
                    bool ParentClassNameHasBeenSet() const;

                    /**
                     * 获取Inherit interfaces
                     * @return InheritedInterface Inherit interfaces
                     * 
                     */
                    std::string GetInheritedInterface() const;

                    /**
                     * 设置Inherit interfaces
                     * @param _inheritedInterface Inherit interfaces
                     * 
                     */
                    void SetInheritedInterface(const std::string& _inheritedInterface);

                    /**
                     * 判断参数 InheritedInterface 是否已赋值
                     * @return InheritedInterface 是否已赋值
                     * 
                     */
                    bool InheritedInterfaceHasBeenSet() const;

                    /**
                     * 获取Annotation
                     * @return Comment Annotation
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Annotation
                     * @param _comment Annotation
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Payload content
                     * @return PayloadContent Payload content
                     * 
                     */
                    std::string GetPayloadContent() const;

                    /**
                     * 设置Payload content
                     * @param _payloadContent Payload content
                     * 
                     */
                    void SetPayloadContent(const std::string& _payloadContent);

                    /**
                     * 判断参数 PayloadContent 是否已赋值
                     * @return PayloadContent 是否已赋值
                     * 
                     */
                    bool PayloadContentHasBeenSet() const;

                    /**
                     * 获取Callback address profile
                     * @return CallbackAddressPortrait Callback address profile
                     * 
                     */
                    std::string GetCallbackAddressPortrait() const;

                    /**
                     * 设置Callback address profile
                     * @param _callbackAddressPortrait Callback address profile
                     * 
                     */
                    void SetCallbackAddressPortrait(const std::string& _callbackAddressPortrait);

                    /**
                     * 判断参数 CallbackAddressPortrait 是否已赋值
                     * @return CallbackAddressPortrait 是否已赋值
                     * 
                     */
                    bool CallbackAddressPortraitHasBeenSet() const;

                    /**
                     * 获取Callback address tag
                     * @return CallbackAddressTag Callback address tag
                     * 
                     */
                    std::string GetCallbackAddressTag() const;

                    /**
                     * 设置Callback address tag
                     * @param _callbackAddressTag Callback address tag
                     * 
                     */
                    void SetCallbackAddressTag(const std::string& _callbackAddressTag);

                    /**
                     * 判断参数 CallbackAddressTag 是否已赋值
                     * @return CallbackAddressTag 是否已赋值
                     * 
                     */
                    bool CallbackAddressTagHasBeenSet() const;

                    /**
                     * 获取Process MD5
                     * @return ProcessMD5 Process MD5
                     * 
                     */
                    std::string GetProcessMD5() const;

                    /**
                     * 设置Process MD5
                     * @param _processMD5 Process MD5
                     * 
                     */
                    void SetProcessMD5(const std::string& _processMD5);

                    /**
                     * 判断参数 ProcessMD5 是否已赋值
                     * @return ProcessMD5 是否已赋值
                     * 
                     */
                    bool ProcessMD5HasBeenSet() const;

                    /**
                     * 获取File permission
                     * @return FilePermission File permission
                     * 
                     */
                    std::string GetFilePermission() const;

                    /**
                     * 设置File permission
                     * @param _filePermission File permission
                     * 
                     */
                    void SetFilePermission(const std::string& _filePermission);

                    /**
                     * 判断参数 FilePermission 是否已赋值
                     * @return FilePermission 是否已赋值
                     * 
                     */
                    bool FilePermissionHasBeenSet() const;

                    /**
                     * 获取Information fields that come from log analysis
                     * @return FromLogAnalysisData Information fields that come from log analysis
                     * 
                     */
                    std::vector<KeyValue> GetFromLogAnalysisData() const;

                    /**
                     * 设置Information fields that come from log analysis
                     * @param _fromLogAnalysisData Information fields that come from log analysis
                     * 
                     */
                    void SetFromLogAnalysisData(const std::vector<KeyValue>& _fromLogAnalysisData);

                    /**
                     * 判断参数 FromLogAnalysisData 是否已赋值
                     * @return FromLogAnalysisData 是否已赋值
                     * 
                     */
                    bool FromLogAnalysisDataHasBeenSet() const;

                    /**
                     * 获取Cache hit probe
                     * @return HitProbe Cache hit probe
                     * 
                     */
                    std::string GetHitProbe() const;

                    /**
                     * 设置Cache hit probe
                     * @param _hitProbe Cache hit probe
                     * 
                     */
                    void SetHitProbe(const std::string& _hitProbe);

                    /**
                     * 判断参数 HitProbe 是否已赋值
                     * @return HitProbe 是否已赋值
                     * 
                     */
                    bool HitProbeHasBeenSet() const;

                    /**
                     * 获取Hit a honeypot

                     * @return HitHoneyPot Hit a honeypot

                     * 
                     */
                    std::string GetHitHoneyPot() const;

                    /**
                     * 设置Hit a honeypot

                     * @param _hitHoneyPot Hit a honeypot

                     * 
                     */
                    void SetHitHoneyPot(const std::string& _hitHoneyPot);

                    /**
                     * 判断参数 HitHoneyPot 是否已赋值
                     * @return HitHoneyPot 是否已赋值
                     * 
                     */
                    bool HitHoneyPotHasBeenSet() const;

                    /**
                     * 获取Command list
                     * @return CommandList Command list
                     * 
                     */
                    std::string GetCommandList() const;

                    /**
                     * 设置Command list
                     * @param _commandList Command list
                     * 
                     */
                    void SetCommandList(const std::string& _commandList);

                    /**
                     * 判断参数 CommandList 是否已赋值
                     * @return CommandList 是否已赋值
                     * 
                     */
                    bool CommandListHasBeenSet() const;

                    /**
                     * 获取Description of the attack event

                     * @return AttackEventDesc Description of the attack event

                     * 
                     */
                    std::string GetAttackEventDesc() const;

                    /**
                     * 设置Description of the attack event

                     * @param _attackEventDesc Description of the attack event

                     * 
                     */
                    void SetAttackEventDesc(const std::string& _attackEventDesc);

                    /**
                     * 判断参数 AttackEventDesc 是否已赋值
                     * @return AttackEventDesc 是否已赋值
                     * 
                     */
                    bool AttackEventDescHasBeenSet() const;

                    /**
                     * 获取Process information.
                     * @return ProcessInfo Process information.
                     * 
                     */
                    std::string GetProcessInfo() const;

                    /**
                     * 设置Process information.
                     * @param _processInfo Process information.
                     * 
                     */
                    void SetProcessInfo(const std::string& _processInfo);

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     * 
                     */
                    bool ProcessInfoHasBeenSet() const;

                    /**
                     * 获取Use username and password
                     * @return UserNameAndPwd Use username and password
                     * 
                     */
                    std::string GetUserNameAndPwd() const;

                    /**
                     * 设置Use username and password
                     * @param _userNameAndPwd Use username and password
                     * 
                     */
                    void SetUserNameAndPwd(const std::string& _userNameAndPwd);

                    /**
                     * 判断参数 UserNameAndPwd 是否已赋值
                     * @return UserNameAndPwd 是否已赋值
                     * 
                     */
                    bool UserNameAndPwdHasBeenSet() const;

                    /**
                     * 获取Host protection policy ID
                     * @return StrategyID Host protection policy ID
                     * 
                     */
                    std::string GetStrategyID() const;

                    /**
                     * 设置Host protection policy ID
                     * @param _strategyID Host protection policy ID
                     * 
                     */
                    void SetStrategyID(const std::string& _strategyID);

                    /**
                     * 判断参数 StrategyID 是否已赋值
                     * @return StrategyID 是否已赋值
                     * 
                     */
                    bool StrategyIDHasBeenSet() const;

                    /**
                     * 获取Host protection policy name
                     * @return StrategyName Host protection policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Host protection policy name
                     * @param _strategyName Host protection policy name
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Host protection hit policy, which is a combination of the policy ID and policy name.
                     * @return HitStrategy Host protection hit policy, which is a combination of the policy ID and policy name.
                     * 
                     */
                    std::string GetHitStrategy() const;

                    /**
                     * 设置Host protection hit policy, which is a combination of the policy ID and policy name.
                     * @param _hitStrategy Host protection hit policy, which is a combination of the policy ID and policy name.
                     * 
                     */
                    void SetHitStrategy(const std::string& _hitStrategy);

                    /**
                     * 判断参数 HitStrategy 是否已赋值
                     * @return HitStrategy 是否已赋值
                     * 
                     */
                    bool HitStrategyHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取PID
                     * @return PID PID
                     * 
                     */
                    std::string GetPID() const;

                    /**
                     * 设置PID
                     * @param _pID PID
                     * 
                     */
                    void SetPID(const std::string& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取Pod name of the container
                     * @return PodName Pod name of the container
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name of the container
                     * @param _podName Pod name of the container
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
                     * 获取Pod ID of the container
                     * @return PodID Pod ID of the container
                     * 
                     */
                    std::string GetPodID() const;

                    /**
                     * 设置Pod ID of the container
                     * @param _podID Pod ID of the container
                     * 
                     */
                    void SetPodID(const std::string& _podID);

                    /**
                     * 判断参数 PodID 是否已赋值
                     * @return PodID 是否已赋值
                     * 
                     */
                    bool PodIDHasBeenSet() const;

                    /**
                     * 获取Http response
                     * @return Response Http response
                     * 
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置Http response
                     * @param _response Http response
                     * 
                     */
                    void SetResponse(const std::string& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                    /**
                     * 获取System call
                     * @return SystemCall System call
                     * 
                     */
                    std::string GetSystemCall() const;

                    /**
                     * 设置System call
                     * @param _systemCall System call
                     * 
                     */
                    void SetSystemCall(const std::string& _systemCall);

                    /**
                     * 判断参数 SystemCall 是否已赋值
                     * @return SystemCall 是否已赋值
                     * 
                     */
                    bool SystemCallHasBeenSet() const;

                    /**
                     * 获取Operation type.
                     * @return Verb Operation type.
                     * 
                     */
                    std::string GetVerb() const;

                    /**
                     * 设置Operation type.
                     * @param _verb Operation type.
                     * 
                     */
                    void SetVerb(const std::string& _verb);

                    /**
                     * 判断参数 Verb 是否已赋值
                     * @return Verb 是否已赋值
                     * 
                     */
                    bool VerbHasBeenSet() const;

                    /**
                     * 获取Log ID.
                     * @return LogID Log ID.
                     * 
                     */
                    std::string GetLogID() const;

                    /**
                     * 设置Log ID.
                     * @param _logID Log ID.
                     * 
                     */
                    void SetLogID(const std::string& _logID);

                    /**
                     * 判断参数 LogID 是否已赋值
                     * @return LogID 是否已赋值
                     * 
                     */
                    bool LogIDHasBeenSet() const;

                    /**
                     * 获取Change content
                     * @return Different Change content
                     * 
                     */
                    std::string GetDifferent() const;

                    /**
                     * 设置Change content
                     * @param _different Change content
                     * 
                     */
                    void SetDifferent(const std::string& _different);

                    /**
                     * 判断参数 Different 是否已赋值
                     * @return Different 是否已赋值
                     * 
                     */
                    bool DifferentHasBeenSet() const;

                    /**
                     * 获取Event type
                     * @return EventType Event type
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type
                     * @param _eventType Event type
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return Description Event description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event description
                     * @param _description Event description
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
                     * 获取Target address (container reverse shell)
                     * @return TargetAddress Target address (container reverse shell)
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置Target address (container reverse shell)
                     * @param _targetAddress Target address (container reverse shell)
                     * 
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     * 
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取Malicious request domain name (malicious outbound connection of a container)
                     * @return MaliciousRequestDomain Malicious request domain name (malicious outbound connection of a container)
                     * 
                     */
                    std::string GetMaliciousRequestDomain() const;

                    /**
                     * 设置Malicious request domain name (malicious outbound connection of a container)
                     * @param _maliciousRequestDomain Malicious request domain name (malicious outbound connection of a container)
                     * 
                     */
                    void SetMaliciousRequestDomain(const std::string& _maliciousRequestDomain);

                    /**
                     * 判断参数 MaliciousRequestDomain 是否已赋值
                     * @return MaliciousRequestDomain 是否已赋值
                     * 
                     */
                    bool MaliciousRequestDomainHasBeenSet() const;

                    /**
                     * 获取Rule type (exceptional request of the K8s API in the container)
                     * @return RuleType Rule type (exceptional request of the K8s API in the container)
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type (exceptional request of the K8s API in the container)
                     * @param _ruleType Rule type (exceptional request of the K8s API in the container)
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Requested resource (exceptional request for K8s API of a container)
                     * @return RequestURI Requested resource (exceptional request for K8s API of a container)
                     * 
                     */
                    std::string GetRequestURI() const;

                    /**
                     * 设置Requested resource (exceptional request for K8s API of a container)
                     * @param _requestURI Requested resource (exceptional request for K8s API of a container)
                     * 
                     */
                    void SetRequestURI(const std::string& _requestURI);

                    /**
                     * 判断参数 RequestURI 是否已赋值
                     * @return RequestURI 是否已赋值
                     * 
                     */
                    bool RequestURIHasBeenSet() const;

                    /**
                     * 获取Request initiating user (container K8s API abnormal request)
                     * @return RequestUser Request initiating user (container K8s API abnormal request)
                     * 
                     */
                    std::string GetRequestUser() const;

                    /**
                     * 设置Request initiating user (container K8s API abnormal request)
                     * @param _requestUser Request initiating user (container K8s API abnormal request)
                     * 
                     */
                    void SetRequestUser(const std::string& _requestUser);

                    /**
                     * 判断参数 RequestUser 是否已赋值
                     * @return RequestUser 是否已赋值
                     * 
                     */
                    bool RequestUserHasBeenSet() const;

                    /**
                     * 获取Request object (exceptional K8s API request in a container)
                     * @return RequestObject Request object (exceptional K8s API request in a container)
                     * 
                     */
                    std::string GetRequestObject() const;

                    /**
                     * 设置Request object (exceptional K8s API request in a container)
                     * @param _requestObject Request object (exceptional K8s API request in a container)
                     * 
                     */
                    void SetRequestObject(const std::string& _requestObject);

                    /**
                     * 判断参数 RequestObject 是否已赋值
                     * @return RequestObject 是否已赋值
                     * 
                     */
                    bool RequestObjectHasBeenSet() const;

                    /**
                     * 获取object (for exceptional requests from the K8s API in a container)
                     * @return ResponseObject object (for exceptional requests from the K8s API in a container)
                     * 
                     */
                    std::string GetResponseObject() const;

                    /**
                     * 设置object (for exceptional requests from the K8s API in a container)
                     * @param _responseObject object (for exceptional requests from the K8s API in a container)
                     * 
                     */
                    void SetResponseObject(const std::string& _responseObject);

                    /**
                     * 判断参数 ResponseObject 是否已赋值
                     * @return ResponseObject 是否已赋值
                     * 
                     */
                    bool ResponseObjectHasBeenSet() const;

                    /**
                     * 获取File type (container file tampering)
                     * @return FileType File type (container file tampering)
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type (container file tampering)
                     * @param _fileType File type (container file tampering)
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Tag feature (container malicious outbound connection)
                     * @return TIType Tag feature (container malicious outbound connection)
                     * 
                     */
                    std::string GetTIType() const;

                    /**
                     * 设置Tag feature (container malicious outbound connection)
                     * @param _tIType Tag feature (container malicious outbound connection)
                     * 
                     */
                    void SetTIType(const std::string& _tIType);

                    /**
                     * 判断参数 TIType 是否已赋值
                     * @return TIType 是否已赋值
                     * 
                     */
                    bool TITypeHasBeenSet() const;

                    /**
                     * 获取Source IP address (exceptional request to the K8s API of a container)
                     * @return SourceIP Source IP address (exceptional request to the K8s API of a container)
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Source IP address (exceptional request to the K8s API of a container)
                     * @param _sourceIP Source IP address (exceptional request to the K8s API of a container)
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                private:

                    /**
                     * Related attack events
                     */
                    RelatedEvent m_relateEvent;
                    bool m_relateEventHasBeenSet;

                    /**
                     * Leaked content
                     */
                    std::string m_leakContent;
                    bool m_leakContentHasBeenSet;

                    /**
                     * Leak APIs
                     */
                    std::string m_leakAPI;
                    bool m_leakAPIHasBeenSet;

                    /**
                     * secretID
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                    /**
                     * Matched rule
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * Protocol port
                     */
                    std::string m_protocolPort;
                    bool m_protocolPortHasBeenSet;

                    /**
                     * Attack content
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * Attack IP profiling.
                     */
                    std::string m_attackIPProfile;
                    bool m_attackIPProfileHasBeenSet;

                    /**
                     * Attack IP tag
                     */
                    std::string m_attackIPTags;
                    bool m_attackIPTagsHasBeenSet;

                    /**
                     * Request method
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * HTTP log
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * Attacked domain name
                     */
                    std::string m_attackDomain;
                    bool m_attackDomainHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * user_agent
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Request headers
                     */
                    std::string m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                    /**
                     * Login username
                     */
                    std::string m_loginUserName;
                    bool m_loginUserNameHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulnerabilityName;
                    bool m_vulnerabilityNameHasBeenSet;

                    /**
                     * Public vulnerability and exposure
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * Service process
                     */
                    std::string m_serviceProcess;
                    bool m_serviceProcessHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File MD5
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * Last access time of the file
                     */
                    std::string m_fileLastAccessTime;
                    bool m_fileLastAccessTimeHasBeenSet;

                    /**
                     * File modification time
                     */
                    std::string m_fileModifyTime;
                    bool m_fileModifyTimeHasBeenSet;

                    /**
                     * Last access Time
                     */
                    std::string m_recentAccessTime;
                    bool m_recentAccessTimeHasBeenSet;

                    /**
                     * Last modification time
                     */
                    std::string m_recentModifyTime;
                    bool m_recentModifyTimeHasBeenSet;

                    /**
                     * Virus name
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Virus file tag
                     */
                    std::string m_virusFileTags;
                    bool m_virusFileTagsHasBeenSet;

                    /**
                     * Behavioral characteristics
                     */
                    std::string m_behavioralCharacteristics;
                    bool m_behavioralCharacteristicsHasBeenSet;

                    /**
                     * Process name (PID)
                     */
                    std::string m_processNamePID;
                    bool m_processNamePIDHasBeenSet;

                    /**
                     * Process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Process command line
                     */
                    std::string m_processCommandLine;
                    bool m_processCommandLineHasBeenSet;

                    /**
                     * Process permission
                     */
                    std::string m_processPermissions;
                    bool m_processPermissionsHasBeenSet;

                    /**
                     * Execute commands
                     */
                    std::string m_executedCommand;
                    bool m_executedCommandHasBeenSet;

                    /**
                     * Affected file name
                     */
                    std::string m_affectedFileName;
                    bool m_affectedFileNameHasBeenSet;

                    /**
                     * Bait path
                     */
                    std::string m_decoyPath;
                    bool m_decoyPathHasBeenSet;

                    /**
                     * Malicious process file size
                     */
                    std::string m_maliciousProcessFileSize;
                    bool m_maliciousProcessFileSizeHasBeenSet;

                    /**
                     * MD5 of the malicious process file
                     */
                    std::string m_maliciousProcessFileMD5;
                    bool m_maliciousProcessFileMD5HasBeenSet;

                    /**
                     * Malicious process name (PID)
                     */
                    std::string m_maliciousProcessNamePID;
                    bool m_maliciousProcessNamePIDHasBeenSet;

                    /**
                     * Malicious process path
                     */
                    std::string m_maliciousProcessPath;
                    bool m_maliciousProcessPathHasBeenSet;

                    /**
                     * Malicious process startup time
                     */
                    std::string m_maliciousProcessStartTime;
                    bool m_maliciousProcessStartTimeHasBeenSet;

                    /**
                     * Command
                     */
                    std::string m_commandContent;
                    bool m_commandContentHasBeenSet;

                    /**
                     * Startup user
                     */
                    std::string m_startupUser;
                    bool m_startupUserHasBeenSet;

                    /**
                     * User group
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * Added permission
                     */
                    std::string m_newPermissions;
                    bool m_newPermissionsHasBeenSet;

                    /**
                     * Parent process
                     */
                    std::string m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * Class name
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Class loader to which it belongs
                     */
                    std::string m_classLoader;
                    bool m_classLoaderHasBeenSet;

                    /**
                     * Individual file size
                     */
                    std::string m_classFileSize;
                    bool m_classFileSizeHasBeenSet;

                    /**
                     * Class file MD5
                     */
                    std::string m_classFileMD5;
                    bool m_classFileMD5HasBeenSet;

                    /**
                     * Parent class name
                     */
                    std::string m_parentClassName;
                    bool m_parentClassNameHasBeenSet;

                    /**
                     * Inherit interfaces
                     */
                    std::string m_inheritedInterface;
                    bool m_inheritedInterfaceHasBeenSet;

                    /**
                     * Annotation
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Payload content
                     */
                    std::string m_payloadContent;
                    bool m_payloadContentHasBeenSet;

                    /**
                     * Callback address profile
                     */
                    std::string m_callbackAddressPortrait;
                    bool m_callbackAddressPortraitHasBeenSet;

                    /**
                     * Callback address tag
                     */
                    std::string m_callbackAddressTag;
                    bool m_callbackAddressTagHasBeenSet;

                    /**
                     * Process MD5
                     */
                    std::string m_processMD5;
                    bool m_processMD5HasBeenSet;

                    /**
                     * File permission
                     */
                    std::string m_filePermission;
                    bool m_filePermissionHasBeenSet;

                    /**
                     * Information fields that come from log analysis
                     */
                    std::vector<KeyValue> m_fromLogAnalysisData;
                    bool m_fromLogAnalysisDataHasBeenSet;

                    /**
                     * Cache hit probe
                     */
                    std::string m_hitProbe;
                    bool m_hitProbeHasBeenSet;

                    /**
                     * Hit a honeypot

                     */
                    std::string m_hitHoneyPot;
                    bool m_hitHoneyPotHasBeenSet;

                    /**
                     * Command list
                     */
                    std::string m_commandList;
                    bool m_commandListHasBeenSet;

                    /**
                     * Description of the attack event

                     */
                    std::string m_attackEventDesc;
                    bool m_attackEventDescHasBeenSet;

                    /**
                     * Process information.
                     */
                    std::string m_processInfo;
                    bool m_processInfoHasBeenSet;

                    /**
                     * Use username and password
                     */
                    std::string m_userNameAndPwd;
                    bool m_userNameAndPwdHasBeenSet;

                    /**
                     * Host protection policy ID
                     */
                    std::string m_strategyID;
                    bool m_strategyIDHasBeenSet;

                    /**
                     * Host protection policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Host protection hit policy, which is a combination of the policy ID and policy name.
                     */
                    std::string m_hitStrategy;
                    bool m_hitStrategyHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * PID
                     */
                    std::string m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * Pod name of the container
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Pod ID of the container
                     */
                    std::string m_podID;
                    bool m_podIDHasBeenSet;

                    /**
                     * Http response
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * System call
                     */
                    std::string m_systemCall;
                    bool m_systemCallHasBeenSet;

                    /**
                     * Operation type.
                     */
                    std::string m_verb;
                    bool m_verbHasBeenSet;

                    /**
                     * Log ID.
                     */
                    std::string m_logID;
                    bool m_logIDHasBeenSet;

                    /**
                     * Change content
                     */
                    std::string m_different;
                    bool m_differentHasBeenSet;

                    /**
                     * Event type
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Target address (container reverse shell)
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * Malicious request domain name (malicious outbound connection of a container)
                     */
                    std::string m_maliciousRequestDomain;
                    bool m_maliciousRequestDomainHasBeenSet;

                    /**
                     * Rule type (exceptional request of the K8s API in the container)
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Requested resource (exceptional request for K8s API of a container)
                     */
                    std::string m_requestURI;
                    bool m_requestURIHasBeenSet;

                    /**
                     * Request initiating user (container K8s API abnormal request)
                     */
                    std::string m_requestUser;
                    bool m_requestUserHasBeenSet;

                    /**
                     * Request object (exceptional K8s API request in a container)
                     */
                    std::string m_requestObject;
                    bool m_requestObjectHasBeenSet;

                    /**
                     * object (for exceptional requests from the K8s API in a container)
                     */
                    std::string m_responseObject;
                    bool m_responseObjectHasBeenSet;

                    /**
                     * File type (container file tampering)
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Tag feature (container malicious outbound connection)
                     */
                    std::string m_tIType;
                    bool m_tITypeHasBeenSet;

                    /**
                     * Source IP address (exceptional request to the K8s API of a container)
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_
