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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCEEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Attack backtracking event
                */
                class AttackSourceEvent : public AbstractModel
                {
                public:
                    AttackSourceEvent();
                    ~AttackSourceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event type. 0: virus scanning; 1: abnormal log-in; 2: password cracking; 3: malicious request; 4: high-risk command.
                     * @return EventType Event type. 0: virus scanning; 1: abnormal log-in; 2: password cracking; 3: malicious request; 4: high-risk command.
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置Event type. 0: virus scanning; 1: abnormal log-in; 2: password cracking; 3: malicious request; 4: high-risk command.
                     * @param _eventType Event type. 0: virus scanning; 1: abnormal log-in; 2: password cracking; 3: malicious request; 4: high-risk command.
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取[Virus scanning] Virus name: VirusName, file name: FileName, file path: FilePath, file size: FileSize, file MD5: MD5, first detection time: CreateTime, last detection time: LatestScanTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[Abnormal log-in] Source IP: SrcIp, location: Location, log-in username: UserName, log-in time: LoginTime
[Password cracking] Source IP: SrcIp, location: City and Country, protocol: Protocol, log-in username: UserName, port: Port, attempt count: Count, first attack time: CreateTime, last attack time: ModifyTime
[Malicious request] Malicious request domain name: Url, process: ProcessName, MD5: ProcessMd5, PID: Pid, request count: AccessCount, last request time: MergeTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[High-risk command] Hit rule name: RuleName, rule category: RuleCategory, command content: BashCmd, data source: DetectBy, Log-in user: User, PID: Pid, occurrence time: CreateTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
                     * @return Content [Virus scanning] Virus name: VirusName, file name: FileName, file path: FilePath, file size: FileSize, file MD5: MD5, first detection time: CreateTime, last detection time: LatestScanTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[Abnormal log-in] Source IP: SrcIp, location: Location, log-in username: UserName, log-in time: LoginTime
[Password cracking] Source IP: SrcIp, location: City and Country, protocol: Protocol, log-in username: UserName, port: Port, attempt count: Count, first attack time: CreateTime, last attack time: ModifyTime
[Malicious request] Malicious request domain name: Url, process: ProcessName, MD5: ProcessMd5, PID: Pid, request count: AccessCount, last request time: MergeTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[High-risk command] Hit rule name: RuleName, rule category: RuleCategory, command content: BashCmd, data source: DetectBy, Log-in user: User, PID: Pid, occurrence time: CreateTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置[Virus scanning] Virus name: VirusName, file name: FileName, file path: FilePath, file size: FileSize, file MD5: MD5, first detection time: CreateTime, last detection time: LatestScanTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[Abnormal log-in] Source IP: SrcIp, location: Location, log-in username: UserName, log-in time: LoginTime
[Password cracking] Source IP: SrcIp, location: City and Country, protocol: Protocol, log-in username: UserName, port: Port, attempt count: Count, first attack time: CreateTime, last attack time: ModifyTime
[Malicious request] Malicious request domain name: Url, process: ProcessName, MD5: ProcessMd5, PID: Pid, request count: AccessCount, last request time: MergeTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[High-risk command] Hit rule name: RuleName, rule category: RuleCategory, command content: BashCmd, data source: DetectBy, Log-in user: User, PID: Pid, occurrence time: CreateTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
                     * @param _content [Virus scanning] Virus name: VirusName, file name: FileName, file path: FilePath, file size: FileSize, file MD5: MD5, first detection time: CreateTime, last detection time: LatestScanTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[Abnormal log-in] Source IP: SrcIp, location: Location, log-in username: UserName, log-in time: LoginTime
[Password cracking] Source IP: SrcIp, location: City and Country, protocol: Protocol, log-in username: UserName, port: Port, attempt count: Count, first attack time: CreateTime, last attack time: ModifyTime
[Malicious request] Malicious request domain name: Url, process: ProcessName, MD5: ProcessMd5, PID: Pid, request count: AccessCount, last request time: MergeTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[High-risk command] Hit rule name: RuleName, rule category: RuleCategory, command content: BashCmd, data source: DetectBy, Log-in user: User, PID: Pid, occurrence time: CreateTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
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
                     * 获取Intrusion time
                     * @return CreatedTime Intrusion time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Intrusion time
                     * @param _createdTime Intrusion time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Unified event risk level. 0: prompt; 1: low; 2: medium; 3: high; 4: critical.
                     * @return Level Unified event risk level. 0: prompt; 1: low; 2: medium; 3: high; 4: critical.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Unified event risk level. 0: prompt; 1: low; 2: medium; 3: high; 4: critical.
                     * @param _level Unified event risk level. 0: prompt; 1: low; 2: medium; 3: high; 4: critical.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Risk level string in Chinese
                     * @return LevelZh Risk level string in Chinese
                     * 
                     */
                    std::string GetLevelZh() const;

                    /**
                     * 设置Risk level string in Chinese
                     * @param _levelZh Risk level string in Chinese
                     * 
                     */
                    void SetLevelZh(const std::string& _levelZh);

                    /**
                     * 判断参数 LevelZh 是否已赋值
                     * @return LevelZh 是否已赋值
                     * 
                     */
                    bool LevelZhHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Event type. 0: virus scanning; 1: abnormal log-in; 2: password cracking; 3: malicious request; 4: high-risk command.
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * [Virus scanning] Virus name: VirusName, file name: FileName, file path: FilePath, file size: FileSize, file MD5: MD5, first detection time: CreateTime, last detection time: LatestScanTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[Abnormal log-in] Source IP: SrcIp, location: Location, log-in username: UserName, log-in time: LoginTime
[Password cracking] Source IP: SrcIp, location: City and Country, protocol: Protocol, log-in username: UserName, port: Port, attempt count: Count, first attack time: CreateTime, last attack time: ModifyTime
[Malicious request] Malicious request domain name: Url, process: ProcessName, MD5: ProcessMd5, PID: Pid, request count: AccessCount, last request time: MergeTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
[High-risk command] Hit rule name: RuleName, rule category: RuleCategory, command content: BashCmd, data source: DetectBy, Log-in user: User, PID: Pid, occurrence time: CreateTime, severity description: HarmDescribe, fixing suggestion: SuggestScheme
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Intrusion time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Unified event risk level. 0: prompt; 1: low; 2: medium; 3: high; 4: critical.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Risk level string in Chinese
                     */
                    std::string m_levelZh;
                    bool m_levelZhHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCEEVENT_H_
