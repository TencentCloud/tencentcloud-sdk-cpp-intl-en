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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupDetail response structure.
                */
                class DescribeBackupDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackupDetailResponse();
                    ~DescribeBackupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Backup ID.</p>
                     * @return BackupId <p>Backup ID.</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>Backup start time.</p>
                     * @return StartTime <p>Backup start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup end time.</p>
                     * @return EndTime <p>Backup end time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup method. </p><ul><li>1: Manual backup.</li><li>0: Auto-backup.</li></ul>
                     * @return BackupType <p>Backup method. </p><ul><li>1: Manual backup.</li><li>0: Auto-backup.</li></ul>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     * @return Status <p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Backup remarks.</p>
                     * @return Remark <p>Backup remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     * @return Locked <p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取<p>Backup file size. Measurement unit: Byte.</p>
                     * @return BackupSize <p>Backup file size. Measurement unit: Byte.</p>
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Instance type.</p>
                     * @return InstanceType <p>Instance type.</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Memory size of a single shard. Unit: MB.</p>
                     * @return MemSize <p>Memory size of a single shard. Unit: MB.</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Number of shards.</p>
                     * @return ShardNum <p>Number of shards.</p>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas.</p>
                     * @return ReplicasNum <p>Number of replicas.</p>
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is encrypted or not.</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     * @return Encrypted <p>Whether it is encrypted or not.</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>Decryption key.</p>
                     * @return DecryptKey <p>Decryption key.</p>
                     * 
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     * 
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取<p>Key ID of the key in KMS.</p>
                     * @return KmsKeyId <p>Key ID of the key in KMS.</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Encryption algorithm used to encrypt the backup file.</p><p>Enumeration value:</p><ul><li>AES-256-CBC: Currently only support AES-256-CBC.</li></ul>
                     * @return KeyAlgorithm <p>Encryption algorithm used to encrypt the backup file.</p><p>Enumeration value:</p><ul><li>AES-256-CBC: Currently only support AES-256-CBC.</li></ul>
                     * 
                     */
                    std::string GetKeyAlgorithm() const;

                    /**
                     * 判断参数 KeyAlgorithm 是否已赋值
                     * @return KeyAlgorithm 是否已赋值
                     * 
                     */
                    bool KeyAlgorithmHasBeenSet() const;

                private:

                    /**
                     * <p>Backup ID.</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>Backup start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Backup end time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Backup method. </p><ul><li>1: Manual backup.</li><li>0: Auto-backup.</li></ul>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Backup status.</p><ul><li>1: Backup is locked by other processes.</li><li>2: Backup is normal, not locked by any processes.</li><li>-1: Backup has expired.</li><li>3: Backup is being exported.</li><li>4: Backup export successful.</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Backup remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Backup lock status.</p><ul><li>0: Unlocked.</li><li>1: Has been locked.</li></ul>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>Backup file size. Measurement unit: Byte.</p>
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * <p>Instance type.</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Memory size of a single shard. Unit: MB.</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Number of shards.</p>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>Number of replicas.</p>
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * <p>Whether it is encrypted or not.</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>Decryption key.</p>
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * <p>Key ID of the key in KMS.</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>Encryption algorithm used to encrypt the backup file.</p><p>Enumeration value:</p><ul><li>AES-256-CBC: Currently only support AES-256-CBC.</li></ul>
                     */
                    std::string m_keyAlgorithm;
                    bool m_keyAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILRESPONSE_H_
