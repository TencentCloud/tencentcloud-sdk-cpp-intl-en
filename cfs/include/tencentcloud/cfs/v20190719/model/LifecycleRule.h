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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Manage rule associated with the lifecycle management policy.
                */
                class LifecycleRule : public AbstractModel
                {
                public:
                    LifecycleRule();
                    ~LifecycleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Storage type after data dumping. Valid values: InfrequentAccess: Infrequent Access storage. ColdStorage: Cold storage.</p>
                     * @return StorageType <p>Storage type after data dumping. Valid values: InfrequentAccess: Infrequent Access storage. ColdStorage: Cold storage.</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Storage type after data dumping. Valid values: InfrequentAccess: Infrequent Access storage. ColdStorage: Cold storage.</p>
                     * @param _storageType <p>Storage type after data dumping. Valid values: InfrequentAccess: Infrequent Access storage. ColdStorage: Cold storage.</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>File type for data dumping. Valid values: BIG_FILE: Very large files. STD_FILE: Standard files. SMALL_FILE: Small files. ALL: All files.</p>
                     * @return FileType <p>File type for data dumping. Valid values: BIG_FILE: Very large files. STD_FILE: Standard files. SMALL_FILE: Small files. ALL: All files.</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type for data dumping. Valid values: BIG_FILE: Very large files. STD_FILE: Standard files. SMALL_FILE: Small files. ALL: All files.</p>
                     * @param _fileType <p>File type for data dumping. Valid values: BIG_FILE: Very large files. STD_FILE: Standard files. SMALL_FILE: Small files. ALL: All files.</p>
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
                     * 获取<p>Data dumping behavior. Valid values: Archive: Archive. Noarchive: Do not archive.</p>
                     * @return Action <p>Data dumping behavior. Valid values: Archive: Archive. Noarchive: Do not archive.</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Data dumping behavior. Valid values: Archive: Archive. Noarchive: Do not archive.</p>
                     * @param _action <p>Data dumping behavior. Valid values: Archive: Archive. Noarchive: Do not archive.</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Trigger time for data dumping. It consists of "DEFAULT_ATIME_" and a number, in the unit of days. Leave this parameter empty when Action is Noarchive.</p>
                     * @return Interval <p>Trigger time for data dumping. It consists of "DEFAULT_ATIME_" and a number, in the unit of days. Leave this parameter empty when Action is Noarchive.</p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>Trigger time for data dumping. It consists of "DEFAULT_ATIME_" and a number, in the unit of days. Leave this parameter empty when Action is Noarchive.</p>
                     * @param _interval <p>Trigger time for data dumping. It consists of "DEFAULT_ATIME_" and a number, in the unit of days. Leave this parameter empty when Action is Noarchive.</p>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Maximum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * @return FileMaxSize <p>Maximum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * 
                     */
                    std::string GetFileMaxSize() const;

                    /**
                     * 设置<p>Maximum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * @param _fileMaxSize <p>Maximum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * 
                     */
                    void SetFileMaxSize(const std::string& _fileMaxSize);

                    /**
                     * 判断参数 FileMaxSize 是否已赋值
                     * @return FileMaxSize 是否已赋值
                     * 
                     */
                    bool FileMaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>Minimum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * @return FileMinSize <p>Minimum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * 
                     */
                    std::string GetFileMinSize() const;

                    /**
                     * 设置<p>Minimum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * @param _fileMinSize <p>Minimum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     * 
                     */
                    void SetFileMinSize(const std::string& _fileMinSize);

                    /**
                     * 判断参数 FileMinSize 是否已赋值
                     * @return FileMinSize 是否已赋值
                     * 
                     */
                    bool FileMinSizeHasBeenSet() const;

                    /**
                     * 获取<p>Policy type</p>
                     * @return PolicyType <p>Policy type</p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _policyType <p>Policy type</p>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Threshold range [10-90]</p>
                     * @return ExpireThreshold <p>Threshold range [10-90]</p>
                     * 
                     */
                    uint64_t GetExpireThreshold() const;

                    /**
                     * 设置<p>Threshold range [10-90]</p>
                     * @param _expireThreshold <p>Threshold range [10-90]</p>
                     * 
                     */
                    void SetExpireThreshold(const uint64_t& _expireThreshold);

                    /**
                     * 判断参数 ExpireThreshold 是否已赋值
                     * @return ExpireThreshold 是否已赋值
                     * 
                     */
                    bool ExpireThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Threshold range [10-90]</p>
                     * @return TargetThreshold <p>Threshold range [10-90]</p>
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置<p>Threshold range [10-90]</p>
                     * @param _targetThreshold <p>Threshold range [10-90]</p>
                     * 
                     */
                    void SetTargetThreshold(const uint64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).</p><p>If this parameter is left empty, the default value is false.</p>
                     * @return IsOverwrite <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).</p><p>If this parameter is left empty, the default value is false.</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).</p><p>If this parameter is left empty, the default value is false.</p>
                     * @param _isOverwrite <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).</p><p>If this parameter is left empty, the default value is false.</p>
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                    /**
                     * 获取<p>Whether to sync new files to S3 in near real time. true: Near real-time sync (within 30 seconds). false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * @return IsCreateRealTimeSync <p>Whether to sync new files to S3 in near real time. true: Near real-time sync (within 30 seconds). false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * 
                     */
                    bool GetIsCreateRealTimeSync() const;

                    /**
                     * 设置<p>Whether to sync new files to S3 in near real time. true: Near real-time sync (within 30 seconds). false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * @param _isCreateRealTimeSync <p>Whether to sync new files to S3 in near real time. true: Near real-time sync (within 30 seconds). false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * 
                     */
                    void SetIsCreateRealTimeSync(const bool& _isCreateRealTimeSync);

                    /**
                     * 判断参数 IsCreateRealTimeSync 是否已赋值
                     * @return IsCreateRealTimeSync 是否已赋值
                     * 
                     */
                    bool IsCreateRealTimeSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether to sync modified files to S3 in near real time. true: Near real-time sync (within 30 seconds) / false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage. It is independent of IsOverwrite.</p>
                     * @return IsModifyRealTimeSync <p>Whether to sync modified files to S3 in near real time. true: Near real-time sync (within 30 seconds) / false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage. It is independent of IsOverwrite.</p>
                     * 
                     */
                    bool GetIsModifyRealTimeSync() const;

                    /**
                     * 设置<p>Whether to sync modified files to S3 in near real time. true: Near real-time sync (within 30 seconds) / false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage. It is independent of IsOverwrite.</p>
                     * @param _isModifyRealTimeSync <p>Whether to sync modified files to S3 in near real time. true: Near real-time sync (within 30 seconds) / false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage. It is independent of IsOverwrite.</p>
                     * 
                     */
                    void SetIsModifyRealTimeSync(const bool& _isModifyRealTimeSync);

                    /**
                     * 判断参数 IsModifyRealTimeSync 是否已赋值
                     * @return IsModifyRealTimeSync 是否已赋值
                     * 
                     */
                    bool IsModifyRealTimeSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether to sync file deletion to S3. true: Sync deletion (within 30 seconds) / false: Do not sync deletion. The default value is false. If this parameter is set to true, versioning must be enabled for the destination COS Bucket. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * @return IsSyncDelete <p>Whether to sync file deletion to S3. true: Sync deletion (within 30 seconds) / false: Do not sync deletion. The default value is false. If this parameter is set to true, versioning must be enabled for the destination COS Bucket. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * 
                     */
                    bool GetIsSyncDelete() const;

                    /**
                     * 设置<p>Whether to sync file deletion to S3. true: Sync deletion (within 30 seconds) / false: Do not sync deletion. The default value is false. If this parameter is set to true, versioning must be enabled for the destination COS Bucket. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * @param _isSyncDelete <p>Whether to sync file deletion to S3. true: Sync deletion (within 30 seconds) / false: Do not sync deletion. The default value is false. If this parameter is set to true, versioning must be enabled for the destination COS Bucket. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     * 
                     */
                    void SetIsSyncDelete(const bool& _isSyncDelete);

                    /**
                     * 判断参数 IsSyncDelete 是否已赋值
                     * @return IsSyncDelete 是否已赋值
                     * 
                     */
                    bool IsSyncDeleteHasBeenSet() const;

                private:

                    /**
                     * <p>Storage type after data dumping. Valid values: InfrequentAccess: Infrequent Access storage. ColdStorage: Cold storage.</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>File type for data dumping. Valid values: BIG_FILE: Very large files. STD_FILE: Standard files. SMALL_FILE: Small files. ALL: All files.</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Data dumping behavior. Valid values: Archive: Archive. Noarchive: Do not archive.</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Trigger time for data dumping. It consists of "DEFAULT_ATIME_" and a number, in the unit of days. Leave this parameter empty when Action is Noarchive.</p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Maximum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     */
                    std::string m_fileMaxSize;
                    bool m_fileMaxSizeHasBeenSet;

                    /**
                     * <p>Minimum size of a file for data dumping. The value must be in the format of "number + unit". Supported units: K (KiB), M (MiB), and G (GiB).</p>
                     */
                    std::string m_fileMinSize;
                    bool m_fileMinSizeHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>Threshold range [10-90]</p>
                     */
                    uint64_t m_expireThreshold;
                    bool m_expireThresholdHasBeenSet;

                    /**
                     * <p>Threshold range [10-90]</p>
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * <p>Whether to overwrite a file in CFSTurbo if it has the same name as a file in the external storage.</p><p>true: Overwrite.</p><p>false: Do not overwrite (and hot storage data will not be released).</p><p>If this parameter is left empty, the default value is false.</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>Whether to sync new files to S3 in near real time. true: Near real-time sync (within 30 seconds). false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     */
                    bool m_isCreateRealTimeSync;
                    bool m_isCreateRealTimeSyncHasBeenSet;

                    /**
                     * <p>Whether to sync modified files to S3 in near real time. true: Near real-time sync (within 30 seconds) / false: Sync based on the time configured in the policy. The default value is false. This parameter takes effect only when StorageType=ExternalStorage. It is independent of IsOverwrite.</p>
                     */
                    bool m_isModifyRealTimeSync;
                    bool m_isModifyRealTimeSyncHasBeenSet;

                    /**
                     * <p>Whether to sync file deletion to S3. true: Sync deletion (within 30 seconds) / false: Do not sync deletion. The default value is false. If this parameter is set to true, versioning must be enabled for the destination COS Bucket. This parameter takes effect only when StorageType=ExternalStorage.</p>
                     */
                    bool m_isSyncDelete;
                    bool m_isSyncDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
