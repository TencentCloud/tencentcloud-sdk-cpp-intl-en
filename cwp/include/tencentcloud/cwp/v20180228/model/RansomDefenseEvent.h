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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_

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
                * Prevention of Ransomware, Bait and Tamper Events
                */
                class RansomDefenseEvent : public AbstractModel
                {
                public:
                    RansomDefenseEvent();
                    ~RansomDefenseEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取cvm uuid
                     * @return Quuid cvm uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm uuid
                     * @param _quuid cvm uuid
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
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Event Status: 0-Pending, 1-Processed, 2-Trusted, 3-In Process, 4-Backup Resumed
                     * @return Status Event Status: 0-Pending, 1-Processed, 2-Trusted, 3-In Process, 4-Backup Resumed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Event Status: 0-Pending, 1-Processed, 2-Trusted, 3-In Process, 4-Backup Resumed
                     * @param _status Event Status: 0-Pending, 1-Processed, 2-Trusted, 3-In Process, 4-Backup Resumed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tampered File Path
                     * @return BaitFilePath Tampered File Path
                     * 
                     */
                    std::string GetBaitFilePath() const;

                    /**
                     * 设置Tampered File Path
                     * @param _baitFilePath Tampered File Path
                     * 
                     */
                    void SetBaitFilePath(const std::string& _baitFilePath);

                    /**
                     * 判断参数 BaitFilePath 是否已赋值
                     * @return BaitFilePath 是否已赋值
                     * 
                     */
                    bool BaitFilePathHasBeenSet() const;

                    /**
                     * 获取Malicious File Path
                     * @return FilePath Malicious File Path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置Malicious File Path
                     * @param _filePath Malicious File Path
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
                     * 获取Malicious Process ID
                     * @return Pid Malicious Process ID
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Malicious Process ID
                     * @param _pid Malicious Process ID
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Malicious Process Parameters
                     * @return PidParam Malicious Process Parameters
                     * 
                     */
                    std::string GetPidParam() const;

                    /**
                     * 设置Malicious Process Parameters
                     * @param _pidParam Malicious Process Parameters
                     * 
                     */
                    void SetPidParam(const std::string& _pidParam);

                    /**
                     * 判断参数 PidParam 是否已赋值
                     * @return PidParam 是否已赋值
                     * 
                     */
                    bool PidParamHasBeenSet() const;

                    /**
                     * 获取Malicious File Size
                     * @return FileSize Malicious File Size
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置Malicious File Size
                     * @param _fileSize Malicious File Size
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Malicious File MD5
                     * @return FileMd5 Malicious File MD5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置Malicious File MD5
                     * @param _fileMd5 Malicious File MD5
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
                     * 获取Event Type: 0 Encrypted Ransom, 1 File Tampering
                     * @return Type Event Type: 0 Encrypted Ransom, 1 File Tampering
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Event Type: 0 Encrypted Ransom, 1 File Tampering
                     * @param _type Event Type: 0 Encrypted Ransom, 1 File Tampering
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Event Sending Time
                     * @return CreateTime Event Sending Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Event Sending Time
                     * @param _createTime Event Sending Time
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
                     * 获取CVM Instance ID
                     * @return InstanceId CVM Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM Instance ID
                     * @param _instanceId CVM Instance ID
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
                     * 获取Event Modification Event
                     * @return ModifyTime Event Modification Event
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Event Modification Event
                     * @param _modifyTime Event Modification Event
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
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return StrategyName Policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
                     * @param _strategyName Policy name
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
                     * 获取Host public IP address
                     * @return HostIp Host public IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host public IP address
                     * @param _hostIp Host public IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host Intranet IP
                     * @return WanIp Host Intranet IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Host Intranet IP
                     * @param _wanIp Host Intranet IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Process Tree Base64 Json
                     * @return PsTree Process Tree Base64 Json
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置Process Tree Base64 Json
                     * @param _psTree Process Tree Base64 Json
                     * 
                     */
                    void SetPsTree(const std::string& _psTree);

                    /**
                     * 判断参数 PsTree 是否已赋值
                     * @return PsTree 是否已赋值
                     * 
                     */
                    bool PsTreeHasBeenSet() const;

                    /**
                     * 获取Process startup time
                     * @return ProcessStartTime Process startup time
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置Process startup time
                     * @param _processStartTime Process startup time
                     * 
                     */
                    void SetProcessStartTime(const std::string& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取Number of Snapshot Backups Owned by the Host
                     * @return SnapshotNum Number of Snapshot Backups Owned by the Host
                     * 
                     */
                    uint64_t GetSnapshotNum() const;

                    /**
                     * 设置Number of Snapshot Backups Owned by the Host
                     * @param _snapshotNum Number of Snapshot Backups Owned by the Host
                     * 
                     */
                    void SetSnapshotNum(const uint64_t& _snapshotNum);

                    /**
                     * 判断参数 SnapshotNum 是否已赋值
                     * @return SnapshotNum 是否已赋值
                     * 
                     */
                    bool SnapshotNumHasBeenSet() const;

                private:

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

                    /**
                     * cvm uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Event Status: 0-Pending, 1-Processed, 2-Trusted, 3-In Process, 4-Backup Resumed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tampered File Path
                     */
                    std::string m_baitFilePath;
                    bool m_baitFilePathHasBeenSet;

                    /**
                     * Malicious File Path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Malicious Process ID
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Malicious Process Parameters
                     */
                    std::string m_pidParam;
                    bool m_pidParamHasBeenSet;

                    /**
                     * Malicious File Size
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Malicious File MD5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * Event Type: 0 Encrypted Ransom, 1 File Tampering
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event Sending Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * CVM Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Event Modification Event
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Host public IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host Intranet IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Process Tree Base64 Json
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * Process startup time
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * Number of Snapshot Backups Owned by the Host
                     */
                    uint64_t m_snapshotNum;
                    bool m_snapshotNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_
