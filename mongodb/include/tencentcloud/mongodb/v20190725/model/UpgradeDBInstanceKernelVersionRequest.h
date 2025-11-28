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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceKernelVersion request structure.
                */
                class UpgradeDBInstanceKernelVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceKernelVersionRequest();
                    ~UpgradeDBInstanceKernelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @return InstanceId List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @param _instanceId List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
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
                     * 获取Whether to perform the upgrade during the maintenance period. 0 - no; 1 - yes.
                     * @return InMaintenance Whether to perform the upgrade during the maintenance period. 0 - no; 1 - yes.
                     * 
                     */
                    int64_t GetInMaintenance() const;

                    /**
                     * 设置Whether to perform the upgrade during the maintenance period. 0 - no; 1 - yes.
                     * @param _inMaintenance Whether to perform the upgrade during the maintenance period. 0 - no; 1 - yes.
                     * 
                     */
                    void SetInMaintenance(const int64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs, which are in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to perform the upgrade during the maintenance period. 0 - no; 1 - yes.
                     */
                    int64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
