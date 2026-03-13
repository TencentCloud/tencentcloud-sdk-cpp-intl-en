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
                     * 获取<P>Snapshot creation time</p>.
                     * @return CreationTime <P>Snapshot creation time</p>.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<P>Snapshot creation time</p>.
                     * @param _creationTime <P>Snapshot creation time</p>.
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
                     * 获取<P>Snapshot name</p>.
                     * @return SnapshotName <P>Snapshot name</p>.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<P>Snapshot name</p>.
                     * @param _snapshotName <P>Snapshot name</p>.
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
                     * 获取<p>Snapshot ID.</p>.
                     * @return SnapshotId <p>Snapshot ID.</p>.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>Snapshot ID.</p>.
                     * @param _snapshotId <p>Snapshot ID.</p>.
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
                     * 获取<P>Snapshot status: creating - creating; available - running; deleting - deleting; rollbacking-new - creating new file system; create-failed - creation failed.</p>.
                     * @return Status <P>Snapshot status: creating - creating; available - running; deleting - deleting; rollbacking-new - creating new file system; create-failed - creation failed.</p>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<P>Snapshot status: creating - creating; available - running; deleting - deleting; rollbacking-new - creating new file system; create-failed - creation failed.</p>.
                     * @param _status <P>Snapshot status: creating - creating; available - running; deleting - deleting; rollbacking-new - creating new file system; create-failed - creation failed.</p>.
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
                     * 获取<P>Region name</p>.
                     * @return RegionName <P>Region name</p>.
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<P>Region name</p>.
                     * @param _regionName <P>Region name</p>.
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
                     * 获取<p>File system ID</p>.
                     * @return FileSystemId <p>File system ID</p>.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID</p>.
                     * @param _fileSystemId <p>File system ID</p>.
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
                     * 获取<p>Snapshot size</p><p>unit: MiB</p>.
                     * @return Size <p>Snapshot size</p><p>unit: MiB</p>.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>Snapshot size</p><p>unit: MiB</p>.
                     * @param _size <p>Snapshot size</p><p>unit: MiB</p>.
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
                     * 获取<P>Retention duration days</p>.
                     * @return AliveDay <P>Retention duration days</p>.
                     * 
                     */
                    uint64_t GetAliveDay() const;

                    /**
                     * 设置<P>Retention duration days</p>.
                     * @param _aliveDay <P>Retention duration days</p>.
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
                     * 获取<P>Snapshot progress percentage. 1 means 1%. value range: 1-100.</p>.
                     * @return Percent <P>Snapshot progress percentage. 1 means 1%. value range: 1-100.</p>.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<P>Snapshot progress percentage. 1 means 1%. value range: 1-100.</p>.
                     * @param _percent <P>Snapshot progress percentage. 1 means 1%. value range: 1-100.</p>.
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
                     * 获取<p>Account ID.</p>.
                     * @return AppId <p>Account ID.</p>.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Account ID.</p>.
                     * @param _appId <p>Account ID.</p>.
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
                     * 获取<P>Snapshot deletion time</p>.
                     * @return DeleteTime <P>Snapshot deletion time</p>.
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<P>Snapshot deletion time</p>.
                     * @param _deleteTime <P>Snapshot deletion time</p>.
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
                     * 获取<P>File system name</p>.
                     * @return FsName <P>File system name</p>.
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<P>File system name</p>.
                     * @param _fsName <P>File system name</p>.
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
                     * 获取<P>Snapshot tag.</p>.
                     * @return Tags <P>Snapshot tag.</p>.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<P>Snapshot tag.</p>.
                     * @param _tags <P>Snapshot tag.</p>.
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
                     * 获取<p>Snapshot type. general indicates a snapshot of the general series. turbo indicates a snapshot of the turbo series.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotType <p>Snapshot type. general indicates a snapshot of the general series. turbo indicates a snapshot of the turbo series.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置<p>Snapshot type. general indicates a snapshot of the general series. turbo indicates a snapshot of the turbo series.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotType <p>Snapshot type. general indicates a snapshot of the general series. turbo indicates a snapshot of the turbo series.</p>.
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

                    /**
                     * 获取<P>Snapshot time reflects the data of the corresponding file system at a certain moment.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotTime <P>Snapshot time reflects the data of the corresponding file system at a certain moment.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置<P>Snapshot time reflects the data of the corresponding file system at a certain moment.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotTime <P>Snapshot time reflects the data of the corresponding file system at a certain moment.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     * 
                     */
                    bool SnapshotTimeHasBeenSet() const;

                private:

                    /**
                     * <P>Snapshot creation time</p>.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <P>Snapshot name</p>.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>Snapshot ID.</p>.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <P>Snapshot status: creating - creating; available - running; deleting - deleting; rollbacking-new - creating new file system; create-failed - creation failed.</p>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <P>Region name</p>.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>File system ID</p>.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Snapshot size</p><p>unit: MiB</p>.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <P>Retention duration days</p>.
                     */
                    uint64_t m_aliveDay;
                    bool m_aliveDayHasBeenSet;

                    /**
                     * <P>Snapshot progress percentage. 1 means 1%. value range: 1-100.</p>.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>Account ID.</p>.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <P>Snapshot deletion time</p>.
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <P>File system name</p>.
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <P>Snapshot tag.</p>.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Snapshot type. general indicates a snapshot of the general series. turbo indicates a snapshot of the turbo series.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * <P>Snapshot time reflects the data of the corresponding file system at a certain moment.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTINFO_H_
