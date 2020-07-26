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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceUpgradeDBInstance request structure.
                */
                class InquiryPriceUpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeDBInstanceRequest();
                    ~InquiryPriceUpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-njj2mtpl
                     * @return InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-njj2mtpl
                     * @param InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     * @return Memory Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     * @param Memory Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     * @return Storage Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     * @param Storage Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
