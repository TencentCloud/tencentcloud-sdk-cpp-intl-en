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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectDimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * BindingPolicyObject request structure.
                */
                class BindingPolicyObjectRequest : public AbstractModel
                {
                public:
                    BindingPolicyObjectRequest();
                    ~BindingPolicyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Required. The value is fixed to monitor.
                     * @return Module Required. The value is fixed to monitor.
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Required. The value is fixed to monitor.
                     * @param Module Required. The value is fixed to monitor.
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Policy group ID, such as `4739573`. This parameter will be disused soon. Another parameter `PolicyId` is recommended.
                     * @return GroupId Policy group ID, such as `4739573`. This parameter will be disused soon. Another parameter `PolicyId` is recommended.
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID, such as `4739573`. This parameter will be disused soon. Another parameter `PolicyId` is recommended.
                     * @param GroupId Policy group ID, such as `4739573`. This parameter will be disused soon. Another parameter `PolicyId` is recommended.
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID, such as `policy-gh892hg0`. At least one of the two parameters, `PolicyId` and `GroupId`, must be specified; otherwise, an error will be reported. `PolicyId` is preferred over `GroupId` when both of them are specified.
                     * @return PolicyId Alarm policy ID, such as `policy-gh892hg0`. At least one of the two parameters, `PolicyId` and `GroupId`, must be specified; otherwise, an error will be reported. `PolicyId` is preferred over `GroupId` when both of them are specified.
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID, such as `policy-gh892hg0`. At least one of the two parameters, `PolicyId` and `GroupId`, must be specified; otherwise, an error will be reported. `PolicyId` is preferred over `GroupId` when both of them are specified.
                     * @param PolicyId Alarm policy ID, such as `policy-gh892hg0`. At least one of the two parameters, `PolicyId` and `GroupId`, must be specified; otherwise, an error will be reported. `PolicyId` is preferred over `GroupId` when both of them are specified.
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Instance group ID.
                     * @return InstanceGroupId Instance group ID.
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID.
                     * @param InstanceGroupId Instance group ID.
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Dimensions of an object to be bound.
                     * @return Dimensions Dimensions of an object to be bound.
                     */
                    std::vector<BindingPolicyObjectDimension> GetDimensions() const;

                    /**
                     * 设置Dimensions of an object to be bound.
                     * @param Dimensions Dimensions of an object to be bound.
                     */
                    void SetDimensions(const std::vector<BindingPolicyObjectDimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * Required. The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Policy group ID, such as `4739573`. This parameter will be disused soon. Another parameter `PolicyId` is recommended.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Alarm policy ID, such as `policy-gh892hg0`. At least one of the two parameters, `PolicyId` and `GroupId`, must be specified; otherwise, an error will be reported. `PolicyId` is preferred over `GroupId` when both of them are specified.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Instance group ID.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Dimensions of an object to be bound.
                     */
                    std::vector<BindingPolicyObjectDimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTREQUEST_H_
