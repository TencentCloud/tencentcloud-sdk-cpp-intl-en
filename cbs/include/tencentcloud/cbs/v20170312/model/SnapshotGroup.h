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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Image.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * It describes the snapshot group details.
                */
                class SnapshotGroup : public AbstractModel
                {
                public:
                    SnapshotGroup();
                    ~SnapshotGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the snapshot group ID.
                     * @return SnapshotGroupId Specifies the snapshot group ID.
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置Specifies the snapshot group ID.
                     * @param _snapshotGroupId Specifies the snapshot group ID.
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取Snapshot group type. NORMAL: common snapshot group, non-consistent snapshot.
                     * @return SnapshotGroupType Snapshot group type. NORMAL: common snapshot group, non-consistent snapshot.
                     * 
                     */
                    std::string GetSnapshotGroupType() const;

                    /**
                     * 设置Snapshot group type. NORMAL: common snapshot group, non-consistent snapshot.
                     * @param _snapshotGroupType Snapshot group type. NORMAL: common snapshot group, non-consistent snapshot.
                     * 
                     */
                    void SetSnapshotGroupType(const std::string& _snapshotGroupType);

                    /**
                     * 判断参数 SnapshotGroupType 是否已赋值
                     * @return SnapshotGroupType 是否已赋值
                     * 
                     */
                    bool SnapshotGroupTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the snapshot group contains a system disk snapshot.
                     * @return ContainRootSnapshot Specifies whether the snapshot group contains a system disk snapshot.
                     * 
                     */
                    bool GetContainRootSnapshot() const;

                    /**
                     * 设置Specifies whether the snapshot group contains a system disk snapshot.
                     * @param _containRootSnapshot Specifies whether the snapshot group contains a system disk snapshot.
                     * 
                     */
                    void SetContainRootSnapshot(const bool& _containRootSnapshot);

                    /**
                     * 判断参数 ContainRootSnapshot 是否已赋值
                     * @return ContainRootSnapshot 是否已赋值
                     * 
                     */
                    bool ContainRootSnapshotHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot ID list included in the snapshot group.
                     * @return SnapshotIdSet Specifies the snapshot ID list included in the snapshot group.
                     * 
                     */
                    std::vector<std::string> GetSnapshotIdSet() const;

                    /**
                     * 设置Specifies the snapshot ID list included in the snapshot group.
                     * @param _snapshotIdSet Specifies the snapshot ID list included in the snapshot group.
                     * 
                     */
                    void SetSnapshotIdSet(const std::vector<std::string>& _snapshotIdSet);

                    /**
                     * 判断参数 SnapshotIdSet 是否已赋值
                     * @return SnapshotIdSet 是否已赋值
                     * 
                     */
                    bool SnapshotIdSetHasBeenSet() const;

                    /**
                     * 获取<ul>
<Li>NORMAL: specifies the scaling group is in normal state.</li>.
<Li>CREATING: creating.</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
</ul>
                     * @return SnapshotGroupState <ul>
<Li>NORMAL: specifies the scaling group is in normal state.</li>.
<Li>CREATING: creating.</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
</ul>
                     * 
                     */
                    std::string GetSnapshotGroupState() const;

                    /**
                     * 设置<ul>
<Li>NORMAL: specifies the scaling group is in normal state.</li>.
<Li>CREATING: creating.</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
</ul>
                     * @param _snapshotGroupState <ul>
<Li>NORMAL: specifies the scaling group is in normal state.</li>.
<Li>CREATING: creating.</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
</ul>
                     * 
                     */
                    void SetSnapshotGroupState(const std::string& _snapshotGroupState);

                    /**
                     * 判断参数 SnapshotGroupState 是否已赋值
                     * @return SnapshotGroupState 是否已赋值
                     * 
                     */
                    bool SnapshotGroupStateHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot group creation progress.
                     * @return Percent Specifies the snapshot group creation progress.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Specifies the snapshot group creation progress.
                     * @param _percent Specifies the snapshot group creation progress.
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
                     * 获取Specifies the snapshot group creation time.
                     * @return CreateTime Specifies the snapshot group creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Specifies the snapshot group creation time.
                     * @param _createTime Specifies the snapshot group creation time.
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
                     * 获取Latest modification time of the snapshot group.
                     * @return ModifyTime Latest modification time of the snapshot group.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Latest modification time of the snapshot group.
                     * @param _modifyTime Latest modification time of the snapshot group.
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
                     * 获取Specifies the image list associated with the snapshot group.
                     * @return Images Specifies the image list associated with the snapshot group.
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置Specifies the image list associated with the snapshot group.
                     * @param _images Specifies the image list associated with the snapshot group.
                     * 
                     */
                    void SetImages(const std::vector<Image>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot group name.
                     * @return SnapshotGroupName Specifies the snapshot group name.
                     * 
                     */
                    std::string GetSnapshotGroupName() const;

                    /**
                     * 设置Specifies the snapshot group name.
                     * @param _snapshotGroupName Specifies the snapshot group name.
                     * 
                     */
                    void SetSnapshotGroupName(const std::string& _snapshotGroupName);

                    /**
                     * 判断参数 SnapshotGroupName 是否已赋值
                     * @return SnapshotGroupName 是否已赋值
                     * 
                     */
                    bool SnapshotGroupNameHasBeenSet() const;

                    /**
                     * 获取Number of images associated with the snapshot group.
                     * @return ImageCount Number of images associated with the snapshot group.
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置Number of images associated with the snapshot group.
                     * @param _imageCount Number of images associated with the snapshot group.
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取Specifies whether the snapshot group has permanent retention.
                     * @return IsPermanent Specifies whether the snapshot group has permanent retention.
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Specifies whether the snapshot group has permanent retention.
                     * @param _isPermanent Specifies whether the snapshot group has permanent retention.
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot group expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeadlineTime Specifies the snapshot group expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Specifies the snapshot group expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deadlineTime Specifies the snapshot group expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取Source automatic snapshot policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoSnapshotPolicyId Source automatic snapshot policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Source automatic snapshot policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoSnapshotPolicyId Source automatic snapshot policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the snapshot group ID.
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * Snapshot group type. NORMAL: common snapshot group, non-consistent snapshot.
                     */
                    std::string m_snapshotGroupType;
                    bool m_snapshotGroupTypeHasBeenSet;

                    /**
                     * Specifies whether the snapshot group contains a system disk snapshot.
                     */
                    bool m_containRootSnapshot;
                    bool m_containRootSnapshotHasBeenSet;

                    /**
                     * Specifies the snapshot ID list included in the snapshot group.
                     */
                    std::vector<std::string> m_snapshotIdSet;
                    bool m_snapshotIdSetHasBeenSet;

                    /**
                     * <ul>
<Li>NORMAL: specifies the scaling group is in normal state.</li>.
<Li>CREATING: creating.</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
</ul>
                     */
                    std::string m_snapshotGroupState;
                    bool m_snapshotGroupStateHasBeenSet;

                    /**
                     * Specifies the snapshot group creation progress.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Specifies the snapshot group creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest modification time of the snapshot group.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Specifies the image list associated with the snapshot group.
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Specifies the snapshot group name.
                     */
                    std::string m_snapshotGroupName;
                    bool m_snapshotGroupNameHasBeenSet;

                    /**
                     * Number of images associated with the snapshot group.
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * Specifies whether the snapshot group has permanent retention.
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * Specifies the snapshot group expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Source automatic snapshot policy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_
