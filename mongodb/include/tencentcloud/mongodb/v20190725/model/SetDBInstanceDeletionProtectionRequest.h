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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_

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
                * SetDBInstanceDeletionProtection request structure.
                */
                class SetDBInstanceDeletionProtectionRequest : public AbstractModel
                {
                public:
                    SetDBInstanceDeletionProtectionRequest();
                    ~SetDBInstanceDeletionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list, in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @return InstanceIds Instance ID list, in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list, in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * @param _instanceIds Instance ID list, in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Instance termination protection switch. Valid values: 0 - disabled; 1 - enabled.
                     * @return EnableDeletionProtection Instance termination protection switch. Valid values: 0 - disabled; 1 - enabled.
                     * 
                     */
                    uint64_t GetEnableDeletionProtection() const;

                    /**
                     * 设置Instance termination protection switch. Valid values: 0 - disabled; 1 - enabled.
                     * @param _enableDeletionProtection Instance termination protection switch. Valid values: 0 - disabled; 1 - enabled.
                     * 
                     */
                    void SetEnableDeletionProtection(const uint64_t& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Instance ID list, in the format of cmgo-p8vnipr5. It is the same as the format of the instance ID displayed on the TencentDB for MongoDB console page.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance termination protection switch. Valid values: 0 - disabled; 1 - enabled.
                     */
                    uint64_t m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETDBINSTANCEDELETIONPROTECTIONREQUEST_H_
