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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Application CLB operation lock configuration.
                */
                class LoadBalancerOperationLocksItem : public AbstractModel
                {
                public:
                    LoadBalancerOperationLocksItem();
                    ~LoadBalancerOperationLocksItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The causes for the lock. Valid when **LoadBalancerStatus** is **Abnormal**.
                     * @return LockReason The causes for the lock. Valid when **LoadBalancerStatus** is **Abnormal**.
                     * 
                     */
                    std::string GetLockReason() const;

                    /**
                     * 设置The causes for the lock. Valid when **LoadBalancerStatus** is **Abnormal**.
                     * @param _lockReason The causes for the lock. Valid when **LoadBalancerStatus** is **Abnormal**.
                     * 
                     */
                    void SetLockReason(const std::string& _lockReason);

                    /**
                     * 判断参数 LockReason 是否已赋值
                     * @return LockReason 是否已赋值
                     * 
                     */
                    bool LockReasonHasBeenSet() const;

                    /**
                     * 获取Lock type. Valid values:

- **SecurityLocked**: Security lock.

- **RelatedResourceLocked**: Related resource locked.

- **FinancialLocked**: Locked due to arrears.

- **ResidualLocked**: residual lock.
                     * @return LockType Lock type. Valid values:

- **SecurityLocked**: Security lock.

- **RelatedResourceLocked**: Related resource locked.

- **FinancialLocked**: Locked due to arrears.

- **ResidualLocked**: residual lock.
                     * 
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置Lock type. Valid values:

- **SecurityLocked**: Security lock.

- **RelatedResourceLocked**: Related resource locked.

- **FinancialLocked**: Locked due to arrears.

- **ResidualLocked**: residual lock.
                     * @param _lockType Lock type. Valid values:

- **SecurityLocked**: Security lock.

- **RelatedResourceLocked**: Related resource locked.

- **FinancialLocked**: Locked due to arrears.

- **ResidualLocked**: residual lock.
                     * 
                     */
                    void SetLockType(const std::string& _lockType);

                    /**
                     * 判断参数 LockType 是否已赋值
                     * @return LockType 是否已赋值
                     * 
                     */
                    bool LockTypeHasBeenSet() const;

                private:

                    /**
                     * The causes for the lock. Valid when **LoadBalancerStatus** is **Abnormal**.
                     */
                    std::string m_lockReason;
                    bool m_lockReasonHasBeenSet;

                    /**
                     * Lock type. Valid values:

- **SecurityLocked**: Security lock.

- **RelatedResourceLocked**: Related resource locked.

- **FinancialLocked**: Locked due to arrears.

- **ResidualLocked**: residual lock.
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_
