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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AlarmInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Detailed node information
                */
                class VertexDetail : public AbstractModel
                {
                public:
                    VertexDetail();
                    ~VertexDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type. 1: process, 2: network, 3: file, 4: SSH.
                     * @return Type Node type. 1: process, 2: network, 3: file, 4: SSH.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Node type. 1: process, 2: network, 3: file, 4: SSH.
                     * @param _type Node type. 1: process, 2: network, 3: file, 4: SSH.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Time used by each node type, in the format of 2022-11-29 00:00:00.
                     * @return Time Time used by each node type, in the format of 2022-11-29 00:00:00.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time used by each node type, in the format of 2022-11-29 00:00:00.
                     * @param _time Time used by each node type, in the format of 2022-11-29 00:00:00.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Alarm information.
                     * @return AlarmInfo Alarm information.
                     * 
                     */
                    std::vector<AlarmInfo> GetAlarmInfo() const;

                    /**
                     * 设置Alarm information.
                     * @param _alarmInfo Alarm information.
                     * 
                     */
                    void SetAlarmInfo(const std::vector<AlarmInfo>& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取Process name. This parameter takes effect when this node is a process.
                     * @return ProcName Process name. This parameter takes effect when this node is a process.
                     * 
                     */
                    std::string GetProcName() const;

                    /**
                     * 设置Process name. This parameter takes effect when this node is a process.
                     * @param _procName Process name. This parameter takes effect when this node is a process.
                     * 
                     */
                    void SetProcName(const std::string& _procName);

                    /**
                     * 判断参数 ProcName 是否已赋值
                     * @return ProcName 是否已赋值
                     * 
                     */
                    bool ProcNameHasBeenSet() const;

                    /**
                     * 获取Command line. This parameter takes effect when this node is a process.
                     * @return CmdLine Command line. This parameter takes effect when this node is a process.
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command line. This parameter takes effect when this node is a process.
                     * @param _cmdLine Command line. This parameter takes effect when this node is a process.
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
                     * 获取Process ID. This parameter takes effect when this node is a process.
                     * @return Pid Process ID. This parameter takes effect when this node is a process.
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置Process ID. This parameter takes effect when this node is a process.
                     * @param _pid Process ID. This parameter takes effect when this node is a process.
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取File MD5. This parameter takes effect when this node is a file.
                     * @return FileMd5 File MD5. This parameter takes effect when this node is a file.
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置File MD5. This parameter takes effect when this node is a file.
                     * @param _fileMd5 File MD5. This parameter takes effect when this node is a file.
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取File write content. This parameter takes effect when this node is a file.
                     * @return FileContent File write content. This parameter takes effect when this node is a file.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置File write content. This parameter takes effect when this node is a file.
                     * @param _fileContent File write content. This parameter takes effect when this node is a file.
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取File path. This parameter takes effect when this node is a file.
                     * @return FilePath File path. This parameter takes effect when this node is a file.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path. This parameter takes effect when this node is a file.
                     * @param _filePath File path. This parameter takes effect when this node is a file.
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
                     * 获取File creation time. This parameter takes effect when this node is a file.
                     * @return FileCreateTime File creation time. This parameter takes effect when this node is a file.
                     * 
                     */
                    std::string GetFileCreateTime() const;

                    /**
                     * 设置File creation time. This parameter takes effect when this node is a file.
                     * @param _fileCreateTime File creation time. This parameter takes effect when this node is a file.
                     * 
                     */
                    void SetFileCreateTime(const std::string& _fileCreateTime);

                    /**
                     * 判断参数 FileCreateTime 是否已赋值
                     * @return FileCreateTime 是否已赋值
                     * 
                     */
                    bool FileCreateTimeHasBeenSet() const;

                    /**
                     * 获取Request destination address. This parameter takes effect when this node is a network.
                     * @return Address Request destination address. This parameter takes effect when this node is a network.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Request destination address. This parameter takes effect when this node is a network.
                     * @param _address Request destination address. This parameter takes effect when this node is a network.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Target port. This parameter takes effect when this node is a network.
                     * @return DstPort Target port. This parameter takes effect when this node is a network.
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置Target port. This parameter takes effect when this node is a network.
                     * @param _dstPort Target port. This parameter takes effect when this node is a network.
                     * 
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Login source IP address. This parameter takes effect when this node is ssh.
                     * @return SrcIP Login source IP address. This parameter takes effect when this node is ssh.
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置Login source IP address. This parameter takes effect when this node is ssh.
                     * @param _srcIP Login source IP address. This parameter takes effect when this node is ssh.
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取Login username and user group. This parameter takes effect when this node is ssh.
                     * @return User Login username and user group. This parameter takes effect when this node is ssh.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Login username and user group. This parameter takes effect when this node is ssh.
                     * @param _user Login username and user group. This parameter takes effect when this node is ssh.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Vulnerability name. This parameter takes effect when this node is a vulnerability.
                     * @return VulName Vulnerability name. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name. This parameter takes effect when this node is a vulnerability.
                     * @param _vulName Vulnerability name. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability exploitation time. This parameter takes effect when this node is a vulnerability.
                     * @return VulTime Vulnerability exploitation time. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    std::string GetVulTime() const;

                    /**
                     * 设置Vulnerability exploitation time. This parameter takes effect when this node is a vulnerability.
                     * @param _vulTime Vulnerability exploitation time. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    void SetVulTime(const std::string& _vulTime);

                    /**
                     * 判断参数 VulTime 是否已赋值
                     * @return VulTime 是否已赋值
                     * 
                     */
                    bool VulTimeHasBeenSet() const;

                    /**
                     * 获取HTTP request content. This parameter takes effect when this node is a vulnerability.
                     * @return HttpContent HTTP request content. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    std::string GetHttpContent() const;

                    /**
                     * 设置HTTP request content. This parameter takes effect when this node is a vulnerability.
                     * @param _httpContent HTTP request content. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    void SetHttpContent(const std::string& _httpContent);

                    /**
                     * 判断参数 HttpContent 是否已赋值
                     * @return HttpContent 是否已赋值
                     * 
                     */
                    bool HttpContentHasBeenSet() const;

                    /**
                     * 获取Source IP address of the vulnerability exploiter. This parameter takes effect when this node is a vulnerability.
                     * @return VulSrcIP Source IP address of the vulnerability exploiter. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    std::string GetVulSrcIP() const;

                    /**
                     * 设置Source IP address of the vulnerability exploiter. This parameter takes effect when this node is a vulnerability.
                     * @param _vulSrcIP Source IP address of the vulnerability exploiter. This parameter takes effect when this node is a vulnerability.
                     * 
                     */
                    void SetVulSrcIP(const std::string& _vulSrcIP);

                    /**
                     * 判断参数 VulSrcIP 是否已赋值
                     * @return VulSrcIP 是否已赋值
                     * 
                     */
                    bool VulSrcIPHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return VertexId Node ID.
                     * 
                     */
                    std::string GetVertexId() const;

                    /**
                     * 设置Node ID.
                     * @param _vertexId Node ID.
                     * 
                     */
                    void SetVertexId(const std::string& _vertexId);

                    /**
                     * 判断参数 VertexId 是否已赋值
                     * @return VertexId 是否已赋值
                     * 
                     */
                    bool VertexIdHasBeenSet() const;

                private:

                    /**
                     * Node type. 1: process, 2: network, 3: file, 4: SSH.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time used by each node type, in the format of 2022-11-29 00:00:00.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Alarm information.
                     */
                    std::vector<AlarmInfo> m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * Process name. This parameter takes effect when this node is a process.
                     */
                    std::string m_procName;
                    bool m_procNameHasBeenSet;

                    /**
                     * Command line. This parameter takes effect when this node is a process.
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Process ID. This parameter takes effect when this node is a process.
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * File MD5. This parameter takes effect when this node is a file.
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * File write content. This parameter takes effect when this node is a file.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * File path. This parameter takes effect when this node is a file.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * File creation time. This parameter takes effect when this node is a file.
                     */
                    std::string m_fileCreateTime;
                    bool m_fileCreateTimeHasBeenSet;

                    /**
                     * Request destination address. This parameter takes effect when this node is a network.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Target port. This parameter takes effect when this node is a network.
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Login source IP address. This parameter takes effect when this node is ssh.
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * Login username and user group. This parameter takes effect when this node is ssh.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Vulnerability name. This parameter takes effect when this node is a vulnerability.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability exploitation time. This parameter takes effect when this node is a vulnerability.
                     */
                    std::string m_vulTime;
                    bool m_vulTimeHasBeenSet;

                    /**
                     * HTTP request content. This parameter takes effect when this node is a vulnerability.
                     */
                    std::string m_httpContent;
                    bool m_httpContentHasBeenSet;

                    /**
                     * Source IP address of the vulnerability exploiter. This parameter takes effect when this node is a vulnerability.
                     */
                    std::string m_vulSrcIP;
                    bool m_vulSrcIPHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_vertexId;
                    bool m_vertexIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_
