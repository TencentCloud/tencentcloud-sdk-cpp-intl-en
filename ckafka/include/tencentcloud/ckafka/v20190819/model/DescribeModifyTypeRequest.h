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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeModifyType request structure.
                */
                class DescribeModifyTypeRequest : public AbstractModel
                {
                public:
                    DescribeModifyTypeRequest();
                    ~DescribeModifyTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CKafka cluster instance ID.
                     * @return InstanceId CKafka cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CKafka cluster instance ID.
                     * @param _instanceId CKafka cluster instance ID.
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
                     * 获取Specifies the bandwidth after upgrade. measurement unit: mb.
                     * @return BandWidth Specifies the bandwidth after upgrade. measurement unit: mb.
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Specifies the bandwidth after upgrade. measurement unit: mb.
                     * @param _bandWidth Specifies the bandwidth after upgrade. measurement unit: mb.
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取Specifies the disk after upgrade, in gb.
                     * @return DiskSize Specifies the disk after upgrade, in gb.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the disk after upgrade, in gb.
                     * @param _diskSize Specifies the disk after upgrade, in gb.
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
                     * 获取Disk type, such as CLOUD_PREMIUM.
                     * @return DiskType Disk type, such as CLOUD_PREMIUM.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type, such as CLOUD_PREMIUM.
                     * @param _diskType Disk type, such as CLOUD_PREMIUM.
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
                     * 获取Number of partitions.
                     * @return Partition Number of partitions.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Number of partitions.
                     * @param _partition Number of partitions.
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Number of Topics
                     * @return Topic Number of Topics
                     * 
                     */
                    int64_t GetTopic() const;

                    /**
                     * 设置Number of Topics
                     * @param _topic Number of Topics
                     * 
                     */
                    void SetTopic(const int64_t& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Instance type, such as sp_ckafka_profession.
                     * @return Type Instance type, such as sp_ckafka_profession.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type, such as sp_ckafka_profession.
                     * @param _type Instance type, such as sp_ckafka_profession.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Configuration change portal.
                     * @return ModifyEntry Configuration change portal.
                     * 
                     */
                    std::string GetModifyEntry() const;

                    /**
                     * 设置Configuration change portal.
                     * @param _modifyEntry Configuration change portal.
                     * 
                     */
                    void SetModifyEntry(const std::string& _modifyEntry);

                    /**
                     * 判断参数 ModifyEntry 是否已赋值
                     * @return ModifyEntry 是否已赋值
                     * 
                     */
                    bool ModifyEntryHasBeenSet() const;

                private:

                    /**
                     * CKafka cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the bandwidth after upgrade. measurement unit: mb.
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Specifies the disk after upgrade, in gb.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Disk type, such as CLOUD_PREMIUM.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Number of partitions.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Number of Topics
                     */
                    int64_t m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Instance type, such as sp_ckafka_profession.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Configuration change portal.
                     */
                    std::string m_modifyEntry;
                    bool m_modifyEntryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_
