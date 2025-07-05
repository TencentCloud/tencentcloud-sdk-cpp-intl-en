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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Malicious request data.
                */
                class MaliciousRequest : public AbstractModel
                {
                public:
                    MaliciousRequest();
                    ~MaliciousRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID.
                     * @return Id Record ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID.
                     * @param _id Record ID.
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
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param _uuid CWP agent `UUID`.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Private IP of server.
                     * @return MachineIp Private IP of server.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP of server.
                     * @param _machineIp Private IP of server.
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param _machineName Server name.
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Malicious request domain name.
                     * @return Domain Malicious request domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Malicious request domain name.
                     * @param _domain Malicious request domain name.
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
                     * 获取Number of malicious requests.
                     * @return Count Number of malicious requests.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of malicious requests.
                     * @param _count Number of malicious requests.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Process name.
                     * @return ProcessName Process name.
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name.
                     * @param _processName Process name.
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
                     * 获取Record status.
<li>UN_OPERATED: to be processed</li>
<li>TRUSTED: trusted</li>
<li>UN_TRUSTED: untrusted</li>
                     * @return Status Record status.
<li>UN_OPERATED: to be processed</li>
<li>TRUSTED: trusted</li>
<li>UN_TRUSTED: untrusted</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Record status.
<li>UN_OPERATED: to be processed</li>
<li>TRUSTED: trusted</li>
<li>UN_TRUSTED: untrusted</li>
                     * @param _status Record status.
<li>UN_OPERATED: to be processed</li>
<li>TRUSTED: trusted</li>
<li>UN_TRUSTED: untrusted</li>
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
                     * 获取Malicious request domain name description.
                     * @return Description Malicious request domain name description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Malicious request domain name description.
                     * @param _description Malicious request domain name description.
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
                     * 获取Reference address.
                     * @return Reference Reference address.
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference address.
                     * @param _reference Reference address.
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取Discovery time.
                     * @return CreateTime Discovery time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Discovery time.
                     * @param _createTime Discovery time.
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
                     * 获取Record merge time.
                     * @return MergeTime Record merge time.
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Record merge time.
                     * @param _mergeTime Record merge time.
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取Process MD5
Value.
                     * @return ProcessMd5 Process MD5
Value.
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置Process MD5
Value.
                     * @param _processMd5 Process MD5
Value.
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取Executed command line.
                     * @return CmdLine Executed command line.
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Executed command line.
                     * @param _cmdLine Executed command line.
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取Process `PID`.
                     * @return Pid Process `PID`.
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Process `PID`.
                     * @param _pid Process `PID`.
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * Record ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent `UUID`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Private IP of server.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Malicious request domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Number of malicious requests.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Process name.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Record status.
<li>UN_OPERATED: to be processed</li>
<li>TRUSTED: trusted</li>
<li>UN_TRUSTED: untrusted</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Malicious request domain name description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Reference address.
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * Discovery time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Record merge time.
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Process MD5
Value.
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * Executed command line.
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Process `PID`.
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MALICIOUSREQUEST_H_
