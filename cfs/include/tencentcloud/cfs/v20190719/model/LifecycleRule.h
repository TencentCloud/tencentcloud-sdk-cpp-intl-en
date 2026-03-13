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
                     * 获取Storage type after data dump. among them: InfrequentAccess: infrequent medium storage; ColdStorage: cold storage.
                     * @return StorageType Storage type after data dump. among them: InfrequentAccess: infrequent medium storage; ColdStorage: cold storage.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type after data dump. among them: InfrequentAccess: infrequent medium storage; ColdStorage: cold storage.
                     * @param _storageType Storage type after data dump. among them: InfrequentAccess: infrequent medium storage; ColdStorage: cold storage.
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
                     * 获取Data dump FILE type. among them, BIG_FILE: extra large FILE; STD_FILE: regular FILE; SMALL_FILE: SMALL FILE; ALL: ALL files.
                     * @return FileType Data dump FILE type. among them, BIG_FILE: extra large FILE; STD_FILE: regular FILE; SMALL_FILE: SMALL FILE; ALL: ALL files.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Data dump FILE type. among them, BIG_FILE: extra large FILE; STD_FILE: regular FILE; SMALL_FILE: SMALL FILE; ALL: ALL files.
                     * @param _fileType Data dump FILE type. among them, BIG_FILE: extra large FILE; STD_FILE: regular FILE; SMALL_FILE: SMALL FILE; ALL: ALL files.
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
                     * 获取Data dumping action. among them, Archive: settlement; Noarchive: no settlement.
                     * @return Action Data dumping action. among them, Archive: settlement; Noarchive: no settlement.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Data dumping action. among them, Archive: settlement; Noarchive: no settlement.
                     * @param _action Data dumping action. among them, Archive: settlement; Noarchive: no settlement.
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
                     * 获取Data dump trigger time. consists of "DEFAULT_ATIME_" and a number, in days. keep it empty when Action is Noarchive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Interval Data dump trigger time. consists of "DEFAULT_ATIME_" and a number, in days. keep it empty when Action is Noarchive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Data dump trigger time. consists of "DEFAULT_ATIME_" and a number, in days. keep it empty when Action is Noarchive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _interval Data dump trigger time. consists of "DEFAULT_ATIME_" and a number, in days. keep it empty when Action is Noarchive.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum specification for data dump files. the value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileMaxSize Maximum specification for data dump files. the value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileMaxSize() const;

                    /**
                     * 设置Maximum specification for data dump files. the value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileMaxSize Maximum specification for data dump files. the value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum specification of the dump file. its numeric value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileMinSize Minimum specification of the dump file. its numeric value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileMinSize() const;

                    /**
                     * 设置Minimum specification of the dump file. its numeric value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileMinSize Minimum specification of the dump file. its numeric value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Policy type.
                     * @return PolicyType Policy type.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Policy type.
                     * @param _policyType Policy type.
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
                     * 获取Threshold range: 10-90.
                     * @return ExpireThreshold Threshold range: 10-90.
                     * 
                     */
                    uint64_t GetExpireThreshold() const;

                    /**
                     * 设置Threshold range: 10-90.
                     * @param _expireThreshold Threshold range: 10-90.
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
                     * 获取Threshold range: 10-90.
                     * @return TargetThreshold Threshold range: 10-90.
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置Threshold range: 10-90.
                     * @param _targetThreshold Threshold range: 10-90.
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
                     * 获取When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time will not release hot data storage).

Default false when empty.
                     * @return IsOverwrite When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time will not release hot data storage).

Default false when empty.
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time will not release hot data storage).

Default false when empty.
                     * @param _isOverwrite When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time will not release hot data storage).

Default false when empty.
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                private:

                    /**
                     * Storage type after data dump. among them: InfrequentAccess: infrequent medium storage; ColdStorage: cold storage.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Data dump FILE type. among them, BIG_FILE: extra large FILE; STD_FILE: regular FILE; SMALL_FILE: SMALL FILE; ALL: ALL files.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Data dumping action. among them, Archive: settlement; Noarchive: no settlement.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Data dump trigger time. consists of "DEFAULT_ATIME_" and a number, in days. keep it empty when Action is Noarchive.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Maximum specification for data dump files. the value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileMaxSize;
                    bool m_fileMaxSizeHasBeenSet;

                    /**
                     * Minimum specification of the dump file. its numeric value needs to use the "number+measurement unit" format, and the supported units are K (KiB), M (MiB), and G (GiB).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileMinSize;
                    bool m_fileMinSizeHasBeenSet;

                    /**
                     * Policy type.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Threshold range: 10-90.
                     */
                    uint64_t m_expireThreshold;
                    bool m_expireThresholdHasBeenSet;

                    /**
                     * Threshold range: 10-90.
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * When a file in CFSTurbo and an external storage have the same name, whether to overwrite.

Override.

false: not overwrite (at the same time will not release hot data storage).

Default false when empty.
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
