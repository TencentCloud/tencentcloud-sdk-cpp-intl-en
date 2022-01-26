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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * SetInstancesProtection request structure.
                */
                class SetInstancesProtectionRequest : public AbstractModel
                {
                public:
                    SetInstancesProtectionRequest();
                    ~SetInstancesProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param AutoScalingGroupId Auto scaling group ID.
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceIds Instance ID.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceIds Instance ID.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to enable scale-in protection for this instance
                     * @return ProtectedFromScaleIn Whether to enable scale-in protection for this instance
                     */
                    bool GetProtectedFromScaleIn() const;

                    /**
                     * 设置Whether to enable scale-in protection for this instance
                     * @param ProtectedFromScaleIn Whether to enable scale-in protection for this instance
                     */
                    void SetProtectedFromScaleIn(const bool& _protectedFromScaleIn);

                    /**
                     * 判断参数 ProtectedFromScaleIn 是否已赋值
                     * @return ProtectedFromScaleIn 是否已赋值
                     */
                    bool ProtectedFromScaleInHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to enable scale-in protection for this instance
                     */
                    bool m_protectedFromScaleIn;
                    bool m_protectedFromScaleInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SETINSTANCESPROTECTIONREQUEST_H_
