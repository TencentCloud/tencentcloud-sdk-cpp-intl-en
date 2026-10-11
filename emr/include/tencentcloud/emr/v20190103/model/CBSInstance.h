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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TagInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CBS instance information.
                */
                class CBSInstance : public AbstractModel
                {
                public:
                    CBSInstance();
                    ~CBSInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk ID.
                     * @return DiskId Cloud disk ID.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID.
                     * @param _diskId Cloud disk ID.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Cloud disk type.
                     * @return DiskUsage Cloud disk type.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud disk type.
                     * @param _diskUsage Cloud disk type.
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Cloud disk name.
                     * @return DiskName Cloud disk name.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Cloud disk name.
                     * @param _diskName Cloud disk name.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Cloud disk size.
                     * @return DiskSize Cloud disk size.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size.
                     * @param _diskSize Cloud disk size.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Cloud disk media type.
                     * @return DiskType Cloud disk media type.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk media type.
                     * @param _diskType Cloud disk media type.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Whether to delete it with the instance.
                     * @return DeleteWithInstance Whether to delete it with the instance.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether to delete it with the instance.
                     * @param _deleteWithInstance Whether to delete it with the instance.
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Cloud disk billing mode.
                     * @return DiskChargeType Cloud disk billing mode.
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Cloud disk billing mode.
                     * @param _diskChargeType Cloud disk billing mode.
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk running status.
                     * @return DiskState Cloud disk running status.
                     * 
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置Cloud disk running status.
                     * @param _diskState Cloud disk running status.
                     * 
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     * 
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取Whether to perform auto-renewal.
                     * @return RenewFlag Whether to perform auto-renewal.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Whether to perform auto-renewal.
                     * @param _renewFlag Whether to perform auto-renewal.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiration time.
                     * @return DeadlineTime Expiration time.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Expiration time.
                     * @param _deadlineTime Expiration time.
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
                     * 获取Whether the cloud disk is mounted on the CVM.
                     * @return Attached Whether the cloud disk is mounted on the CVM.
                     * 
                     */
                    bool GetAttached() const;

                    /**
                     * 设置Whether the cloud disk is mounted on the CVM.
                     * @param _attached Whether the cloud disk is mounted on the CVM.
                     * 
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     * 
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取Days remaining until disk expiration.
                     * @return DifferDaysOfDeadline Days remaining until disk expiration.
                     * 
                     */
                    int64_t GetDifferDaysOfDeadline() const;

                    /**
                     * 设置Days remaining until disk expiration.
                     * @param _differDaysOfDeadline Days remaining until disk expiration.
                     * 
                     */
                    void SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline);

                    /**
                     * 判断参数 DifferDaysOfDeadline 是否已赋值
                     * @return DifferDaysOfDeadline 是否已赋值
                     * 
                     */
                    bool DifferDaysOfDeadlineHasBeenSet() const;

                    /**
                     * 获取ID of the CVM instance to which this cloud disk is currently mounted.
                     * @return InstanceIdList ID of the CVM instance to which this cloud disk is currently mounted.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置ID of the CVM instance to which this cloud disk is currently mounted.
                     * @param _instanceIdList ID of the CVM instance to which this cloud disk is currently mounted.
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取ID of the CVM to which the cloud disk is mounted.
                     * @return InstanceId ID of the CVM to which the cloud disk is mounted.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the CVM to which the cloud disk is mounted.
                     * @param _instanceId ID of the CVM to which the cloud disk is mounted.
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
                     * 获取Whether the cloud disk is a shared cloud disk.
                     * @return Shareable Whether the cloud disk is a shared cloud disk.
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置Whether the cloud disk is a shared cloud disk.
                     * @param _shareable Whether the cloud disk is a shared cloud disk.
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取EMR node ID.
                     * @return EmrResourceId EMR node ID.
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置EMR node ID.
                     * @param _emrResourceId EMR node ID.
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取Committed use expiration time.
                     * @return UnderwriteExpiredTime Committed use expiration time.
                     * 
                     */
                    std::string GetUnderwriteExpiredTime() const;

                    /**
                     * 设置Committed use expiration time.
                     * @param _underwriteExpiredTime Committed use expiration time.
                     * 
                     */
                    void SetUnderwriteExpiredTime(const std::string& _underwriteExpiredTime);

                    /**
                     * 判断参数 UnderwriteExpiredTime 是否已赋值
                     * @return UnderwriteExpiredTime 是否已赋值
                     * 
                     */
                    bool UnderwriteExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
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
                     * 获取Cloud disk additional performance value. Unit: MB/s.
                     * @return ThroughputPerformance Cloud disk additional performance value. Unit: MB/s.
                     * 
                     */
                    int64_t GetThroughputPerformance() const;

                    /**
                     * 设置Cloud disk additional performance value. Unit: MB/s.
                     * @param _throughputPerformance Cloud disk additional performance value. Unit: MB/s.
                     * 
                     */
                    void SetThroughputPerformance(const int64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * Cloud disk ID.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Cloud disk type.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Cloud disk name.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Cloud disk size.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Cloud disk media type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Whether to delete it with the instance.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Cloud disk billing mode.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Cloud disk running status.
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * Whether to perform auto-renewal.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Expiration time.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Whether the cloud disk is mounted on the CVM.
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * Days remaining until disk expiration.
                     */
                    int64_t m_differDaysOfDeadline;
                    bool m_differDaysOfDeadlineHasBeenSet;

                    /**
                     * ID of the CVM instance to which this cloud disk is currently mounted.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * ID of the CVM to which the cloud disk is mounted.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether the cloud disk is a shared cloud disk.
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * EMR node ID.
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * Committed use expiration time.
                     */
                    std::string m_underwriteExpiredTime;
                    bool m_underwriteExpiredTimeHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Cloud disk additional performance value. Unit: MB/s.
                     */
                    int64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_
