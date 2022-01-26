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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstanceVersion request structure.
                */
                class UpgradeInstanceVersionRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceVersionRequest();
                    ~UpgradeInstanceVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The target instance type to which the instance will change. It is the same as the `TypeId` parameter in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     * @return TargetInstanceType The target instance type to which the instance will change. It is the same as the `TypeId` parameter in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    std::string GetTargetInstanceType() const;

                    /**
                     * 设置The target instance type to which the instance will change. It is the same as the `TypeId` parameter in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     * @param TargetInstanceType The target instance type to which the instance will change. It is the same as the `TypeId` parameter in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    void SetTargetInstanceType(const std::string& _targetInstanceType);

                    /**
                     * 判断参数 TargetInstanceType 是否已赋值
                     * @return TargetInstanceType 是否已赋值
                     */
                    bool TargetInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Switch mode. Valid values: 1 (switch during the maintenance window), 2 (switch immediately).
                     * @return SwitchOption Switch mode. Valid values: 1 (switch during the maintenance window), 2 (switch immediately).
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置Switch mode. Valid values: 1 (switch during the maintenance window), 2 (switch immediately).
                     * @param SwitchOption Switch mode. Valid values: 1 (switch during the maintenance window), 2 (switch immediately).
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * The target instance type to which the instance will change. It is the same as the `TypeId` parameter in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    std::string m_targetInstanceType;
                    bool m_targetInstanceTypeHasBeenSet;

                    /**
                     * Switch mode. Valid values: 1 (switch during the maintenance window), 2 (switch immediately).
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
