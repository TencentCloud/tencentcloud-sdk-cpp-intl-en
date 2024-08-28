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
                     * 获取Node type. process - 1; network - 2; file - 3; SSH - 4
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Node type. process - 1; network - 2; file - 3; SSH - 4
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Node type. process - 1; network - 2; file - 3; SSH - 4
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Node type. process - 1; network - 2; file - 3; SSH - 4
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time used for each node type, which is in the format of 2022-11-29 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Time Time used for each node type, which is in the format of 2022-11-29 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time used for each node type, which is in the format of 2022-11-29 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _time Time used for each node type, which is in the format of 2022-11-29 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Alarm information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmInfo Alarm information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmInfo> GetAlarmInfo() const;

                    /**
                     * 设置Alarm information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmInfo Alarm information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process name, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcName Process name, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProcName() const;

                    /**
                     * 设置Process name, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _procName Process name, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Command line, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CmdLine Command line, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置Command line, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cmdLine Command line, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process ID, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid Process ID, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置Process ID, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid Process ID, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取File MD5, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileMd5 File MD5, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置File MD5, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileMd5 File MD5, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Content written to the file, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileContent Content written to the file, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置Content written to the file, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileContent Content written to the file, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取File path, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilePath File path, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filePath File path, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取File creation time, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileCreateTime File creation time, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileCreateTime() const;

                    /**
                     * 设置File creation time, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileCreateTime File creation time, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Request destination address, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Request destination address, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Request destination address, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Request destination address, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Target port, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstPort Target port, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置Target port, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstPort Target port, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Log-in source IP, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcIP Log-in source IP, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置Log-in source IP, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcIP Log-in source IP, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Log-in username and user group, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Log-in username and user group, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Log-in username and user group, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _user Log-in username and user group, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability name, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulName Vulnerability name, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulName Vulnerability name, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability exploitation time, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulTime Vulnerability exploitation time, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulTime() const;

                    /**
                     * 设置Vulnerability exploitation time, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulTime Vulnerability exploitation time, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取HTTP request content, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpContent HTTP request content, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpContent() const;

                    /**
                     * 设置HTTP request content, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpContent HTTP request content, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability exploiter source IP, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulSrcIP Vulnerability exploiter source IP, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulSrcIP() const;

                    /**
                     * 设置Vulnerability exploiter source IP, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulSrcIP Vulnerability exploiter source IP, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VertexId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVertexId() const;

                    /**
                     * 设置Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vertexId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Node type. process - 1; network - 2; file - 3; SSH - 4
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time used for each node type, which is in the format of 2022-11-29 00:00:00.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Alarm information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmInfo> m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * Process name, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_procName;
                    bool m_procNameHasBeenSet;

                    /**
                     * Command line, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Process ID, which is effective when the node type is process.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * File MD5, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * Content written to the file, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * File path, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * File creation time, which is effective when the node type is file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileCreateTime;
                    bool m_fileCreateTimeHasBeenSet;

                    /**
                     * Request destination address, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Target port, which is effective when the node type is network.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Log-in source IP, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * Log-in username and user group, which is effective when the node type is SSH.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Vulnerability name, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability exploitation time, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulTime;
                    bool m_vulTimeHasBeenSet;

                    /**
                     * HTTP request content, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpContent;
                    bool m_httpContentHasBeenSet;

                    /**
                     * Vulnerability exploiter source IP, which is effective when the node type is vulnerability.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulSrcIP;
                    bool m_vulSrcIPHasBeenSet;

                    /**
                     * Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vertexId;
                    bool m_vertexIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_
