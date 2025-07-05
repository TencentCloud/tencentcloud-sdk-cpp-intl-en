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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Snapshot information
                */
                class SnapshotInfo : public AbstractModel
                {
                public:
                    SnapshotInfo();
                    ~SnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Snapshot creation time
                     * @return CreationTime Snapshot creation time
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Snapshot creation time
                     * @param _creationTime Snapshot creation time
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot name
                     * @return SnapshotName Snapshot name
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
                     * @param _snapshotName Snapshot name
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Snapshot ID
                     * @return SnapshotId Snapshot ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID
                     * @param _snapshotId Snapshot ID
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Snapshot status
                     * @return Status Snapshot status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Snapshot status
                     * @param _status Snapshot status
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
                     * 获取Region name
                     * @return RegionName Region name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param _regionName Region name
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param _fileSystemId File system ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Snapshot size
                     * @return Size Snapshot size
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Snapshot size
                     * @param _size Snapshot size
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Retention period in days
                     * @return AliveDay Retention period in days
                     * 
                     */
                    uint64_t GetAliveDay() const;

                    /**
                     * 设置Retention period in days
                     * @param _aliveDay Retention period in days
                     * 
                     */
                    void SetAliveDay(const uint64_t& _aliveDay);

                    /**
                     * 判断参数 AliveDay 是否已赋值
                     * @return AliveDay 是否已赋值
                     * 
                     */
                    bool AliveDayHasBeenSet() const;

                    /**
                     * 获取Snapshot progress
                     * @return Percent Snapshot progress
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Snapshot progress
                     * @param _percent Snapshot progress
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Account ID
                     * @return AppId Account ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Account ID
                     * @param _appId Account ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Snapshot deletion time
                     * @return DeleteTime Snapshot deletion time
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置Snapshot deletion time
                     * @param _deleteTime Snapshot deletion time
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取File system name
                     * @return FsName File system name
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置File system name
                     * @param _fsName File system name
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取Snapshot tag
                     * @return Tags Snapshot tag
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Snapshot tag
                     * @param _tags Snapshot tag
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Snapshot type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotType Snapshot type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置Snapshot type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotType Snapshot type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotType(const std::string& _snapshotType);

                    /**
                     * 判断参数 SnapshotType 是否已赋值
                     * @return SnapshotType 是否已赋值
                     * 
                     */
                    bool SnapshotTypeHasBeenSet() const;

                private:

                    /**
                     * Snapshot creation time
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Snapshot name
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Snapshot ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Snapshot status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Snapshot size
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Retention period in days
                     */
                    uint64_t m_aliveDay;
                    bool m_aliveDayHasBeenSet;

                    /**
                     * Snapshot progress
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Account ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Snapshot deletion time
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * File system name
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * Snapshot tag
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Snapshot type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_
