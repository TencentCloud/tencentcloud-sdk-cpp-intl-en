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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Node specification for storage
                */
                class StorageNodeSpec : public AbstractModel
                {
                public:
                    StorageNodeSpec();
                    ~StorageNodeSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecCode <p>Specification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Specification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specCode <p>Specification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the storage node</p>
                     * @return StorageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>CPU cores of the storage node</p>
                     * @param _storageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Storage node memory size</p>
                     * @return StorageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>Storage node memory size</p>
                     * @param _storageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Maximum quantity of storage nodes</p>
                     * @return StorageNodeMaxNum <p>Maximum quantity of storage nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeMaxNum() const;

                    /**
                     * 设置<p>Maximum quantity of storage nodes</p>
                     * @param _storageNodeMaxNum <p>Maximum quantity of storage nodes</p>
                     * 
                     */
                    void SetStorageNodeMaxNum(const int64_t& _storageNodeMaxNum);

                    /**
                     * 判断参数 StorageNodeMaxNum 是否已赋值
                     * @return StorageNodeMaxNum 是否已赋值
                     * 
                     */
                    bool StorageNodeMaxNumHasBeenSet() const;

                    /**
                     * 获取<p>Node disk size capacity limit</p>
                     * @return StorageNodeMaxDisk <p>Node disk size capacity limit</p>
                     * 
                     */
                    int64_t GetStorageNodeMaxDisk() const;

                    /**
                     * 设置<p>Node disk size capacity limit</p>
                     * @param _storageNodeMaxDisk <p>Node disk size capacity limit</p>
                     * 
                     */
                    void SetStorageNodeMaxDisk(const int64_t& _storageNodeMaxDisk);

                    /**
                     * 判断参数 StorageNodeMaxDisk 是否已赋值
                     * @return StorageNodeMaxDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeMaxDiskHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of storage nodes</p>
                     * @return StorageNodeMinNum <p>Minimum number of storage nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeMinNum() const;

                    /**
                     * 设置<p>Minimum number of storage nodes</p>
                     * @param _storageNodeMinNum <p>Minimum number of storage nodes</p>
                     * 
                     */
                    void SetStorageNodeMinNum(const int64_t& _storageNodeMinNum);

                    /**
                     * 判断参数 StorageNodeMinNum 是否已赋值
                     * @return StorageNodeMinNum 是否已赋值
                     * 
                     */
                    bool StorageNodeMinNumHasBeenSet() const;

                    /**
                     * 获取<p>Node disk size minimum</p>
                     * @return StorageNodeMinDisk <p>Node disk size minimum</p>
                     * 
                     */
                    int64_t GetStorageNodeMinDisk() const;

                    /**
                     * 设置<p>Node disk size minimum</p>
                     * @param _storageNodeMinDisk <p>Node disk size minimum</p>
                     * 
                     */
                    void SetStorageNodeMinDisk(const int64_t& _storageNodeMinDisk);

                    /**
                     * 判断参数 StorageNodeMinDisk 是否已赋值
                     * @return StorageNodeMinDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeMinDiskHasBeenSet() const;

                    /**
                     * 获取<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Default disk size of storage node for frontend display</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageNodeDefaultDisk <p>Default disk size of storage node for frontend display</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageNodeDefaultDisk() const;

                    /**
                     * 设置<p>Default disk size of storage node for frontend display</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageNodeDefaultDisk <p>Default disk size of storage node for frontend display</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageNodeDefaultDisk(const int64_t& _storageNodeDefaultDisk);

                    /**
                     * 判断参数 StorageNodeDefaultDisk 是否已赋值
                     * @return StorageNodeDefaultDisk 是否已赋值
                     * 
                     */
                    bool StorageNodeDefaultDiskHasBeenSet() const;

                    /**
                     * 获取<p>Specification support billing mode list</p>
                     * @return InstanceMode <p>Specification support billing mode list</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceMode() const;

                    /**
                     * 设置<p>Specification support billing mode list</p>
                     * @param _instanceMode <p>Specification support billing mode list</p>
                     * 
                     */
                    void SetInstanceMode(const std::vector<std::string>& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>Disk Type CLOUD_DISK: cloud disk LOCAL_DISK: local disk</p>
                     * @return DiskTypeCategory <p>Disk Type CLOUD_DISK: cloud disk LOCAL_DISK: local disk</p>
                     * 
                     */
                    std::string GetDiskTypeCategory() const;

                    /**
                     * 设置<p>Disk Type CLOUD_DISK: cloud disk LOCAL_DISK: local disk</p>
                     * @param _diskTypeCategory <p>Disk Type CLOUD_DISK: cloud disk LOCAL_DISK: local disk</p>
                     * 
                     */
                    void SetDiskTypeCategory(const std::string& _diskTypeCategory);

                    /**
                     * 判断参数 DiskTypeCategory 是否已赋值
                     * @return DiskTypeCategory 是否已赋值
                     * 
                     */
                    bool DiskTypeCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>Specification code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>CPU cores of the storage node</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>Storage node memory size</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>Maximum quantity of storage nodes</p>
                     */
                    int64_t m_storageNodeMaxNum;
                    bool m_storageNodeMaxNumHasBeenSet;

                    /**
                     * <p>Node disk size capacity limit</p>
                     */
                    int64_t m_storageNodeMaxDisk;
                    bool m_storageNodeMaxDiskHasBeenSet;

                    /**
                     * <p>Minimum number of storage nodes</p>
                     */
                    int64_t m_storageNodeMinNum;
                    bool m_storageNodeMinNumHasBeenSet;

                    /**
                     * <p>Node disk size minimum</p>
                     */
                    int64_t m_storageNodeMinDisk;
                    bool m_storageNodeMinDiskHasBeenSet;

                    /**
                     * <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Default disk size of storage node for frontend display</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageNodeDefaultDisk;
                    bool m_storageNodeDefaultDiskHasBeenSet;

                    /**
                     * <p>Specification support billing mode list</p>
                     */
                    std::vector<std::string> m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>Disk Type CLOUD_DISK: cloud disk LOCAL_DISK: local disk</p>
                     */
                    std::string m_diskTypeCategory;
                    bool m_diskTypeCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_STORAGENODESPEC_H_
