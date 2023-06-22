/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDedicatedDBInstance request structure.
                */
                class UpgradeDedicatedDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDedicatedDBInstanceRequest();
                    ~UpgradeDedicatedDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be upgraded.  It is in the form of  `tdsql-ow728lmc`, which can be obtained by querying the instance details through the `DescribeDBInstances` API.
                     * @return InstanceId ID of the instance to be upgraded.  It is in the form of  `tdsql-ow728lmc`, which can be obtained by querying the instance details through the `DescribeDBInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be upgraded.  It is in the form of  `tdsql-ow728lmc`, which can be obtained by querying the instance details through the `DescribeDBInstances` API.
                     * @param _instanceId ID of the instance to be upgraded.  It is in the form of  `tdsql-ow728lmc`, which can be obtained by querying the instance details through the `DescribeDBInstances` API.
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
                     * 获取Memory size in GB,  which can be obtained through the `DescribeFenceDBInstanceSpecs` API.
                     * @return Memory Memory size in GB,  which can be obtained through the `DescribeFenceDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB,  which can be obtained through the `DescribeFenceDBInstanceSpecs` API.
                     * @param _memory Memory size in GB,  which can be obtained through the `DescribeFenceDBInstanceSpecs` API.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage space size in GB.  You can obtain the disk space limits by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @return Storage Storage space size in GB.  You can obtain the disk space limits by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage space size in GB.  You can obtain the disk space limits by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * @param _storage Storage space size in GB.  You can obtain the disk space limits by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Whether to retry again when missing the switch time window. Valid values: `0` (no), `1` (yes).
                     * @return SwitchAutoRetry Whether to retry again when missing the switch time window. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置Whether to retry again when missing the switch time window. Valid values: `0` (no), `1` (yes).
                     * @param _switchAutoRetry Whether to retry again when missing the switch time window. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取Switch start time
                     * @return SwitchStartTime Switch start time
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置Switch start time
                     * @param _switchStartTime Switch start time
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取Switch end time
                     * @return SwitchEndTime Switch end time
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置Switch end time
                     * @param _switchEndTime Switch end time
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be upgraded.  It is in the form of  `tdsql-ow728lmc`, which can be obtained by querying the instance details through the `DescribeDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size in GB,  which can be obtained through the `DescribeFenceDBInstanceSpecs` API.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage space size in GB.  You can obtain the disk space limits by querying instance specification through the `DescribeDBInstanceSpecs` API.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Whether to retry again when missing the switch time window. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * Switch start time
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * Switch end time
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_UPGRADEDEDICATEDDBINSTANCEREQUEST_H_
