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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiskSpecInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource details
                */
                class NodeResourceSpec : public AbstractModel
                {
                public:
                    NodeResourceSpec();
                    ~NodeResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The spec type, such as `S2.MEDIUM8`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType The spec type, such as `S2.MEDIUM8`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The spec type, such as `S2.MEDIUM8`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType The spec type, such as `S2.MEDIUM8`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The system disk, which can be up to 1 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemDisk The system disk, which can be up to 1 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiskSpecInfo> GetSystemDisk() const;

                    /**
                     * 设置The system disk, which can be up to 1 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemDisk The system disk, which can be up to 1 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDisk(const std::vector<DiskSpecInfo>& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取The list of tags to be bound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags The list of tags to be bound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags to be bound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags The list of tags to be bound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The cloud data disk, which can be up to 15 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDisk The cloud data disk, which can be up to 15 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiskSpecInfo> GetDataDisk() const;

                    /**
                     * 设置The cloud data disk, which can be up to 15 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisk The cloud data disk, which can be up to 15 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisk(const std::vector<DiskSpecInfo>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取The local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocalDataDisk The local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiskSpecInfo> GetLocalDataDisk() const;

                    /**
                     * 设置The local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _localDataDisk The local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocalDataDisk(const std::vector<DiskSpecInfo>& _localDataDisk);

                    /**
                     * 判断参数 LocalDataDisk 是否已赋值
                     * @return LocalDataDisk 是否已赋值
                     * 
                     */
                    bool LocalDataDiskHasBeenSet() const;

                private:

                    /**
                     * The spec type, such as `S2.MEDIUM8`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The system disk, which can be up to 1 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiskSpecInfo> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * The list of tags to be bound.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The cloud data disk, which can be up to 15 PCS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiskSpecInfo> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * The local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiskSpecInfo> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
