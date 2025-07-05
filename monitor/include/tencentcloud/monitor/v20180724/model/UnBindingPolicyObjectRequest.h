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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UnBindingPolicyObject request structure.
                */
                class UnBindingPolicyObjectRequest : public AbstractModel
                {
                public:
                    UnBindingPolicyObjectRequest();
                    ~UnBindingPolicyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value is fixed to monitor.
                     * @return Module The value is fixed to monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to monitor.
                     * @param _module The value is fixed to monitor.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Policy group ID. If `PolicyId` is used, this parameter will be ignored, and any value, e.g., `0`, can be passed in.
                     * @return GroupId Policy group ID. If `PolicyId` is used, this parameter will be ignored, and any value, e.g., `0`, can be passed in.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID. If `PolicyId` is used, this parameter will be ignored, and any value, e.g., `0`, can be passed in.
                     * @param _groupId Policy group ID. If `PolicyId` is used, this parameter will be ignored, and any value, e.g., `0`, can be passed in.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取List of unique IDs of the object instances to be deleted. `UniqueId` can be obtained from the output parameter `List` of the [DescribeBindingPolicyObjectList](https://intl.cloud.tencent.com/document/api/248/40570?from_cn_redirect=1) API
                     * @return UniqueId List of unique IDs of the object instances to be deleted. `UniqueId` can be obtained from the output parameter `List` of the [DescribeBindingPolicyObjectList](https://intl.cloud.tencent.com/document/api/248/40570?from_cn_redirect=1) API
                     * 
                     */
                    std::vector<std::string> GetUniqueId() const;

                    /**
                     * 设置List of unique IDs of the object instances to be deleted. `UniqueId` can be obtained from the output parameter `List` of the [DescribeBindingPolicyObjectList](https://intl.cloud.tencent.com/document/api/248/40570?from_cn_redirect=1) API
                     * @param _uniqueId List of unique IDs of the object instances to be deleted. `UniqueId` can be obtained from the output parameter `List` of the [DescribeBindingPolicyObjectList](https://intl.cloud.tencent.com/document/api/248/40570?from_cn_redirect=1) API
                     * 
                     */
                    void SetUniqueId(const std::vector<std::string>& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取Instance group ID. The `UniqueId` parameter is invalid if object instances are deleted by instance group.
                     * @return InstanceGroupId Instance group ID. The `UniqueId` parameter is invalid if object instances are deleted by instance group.
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID. The `UniqueId` parameter is invalid if object instances are deleted by instance group.
                     * @param _instanceGroupId Instance group ID. The `UniqueId` parameter is invalid if object instances are deleted by instance group.
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID. If this parameter is used, `GroupId` will be ignored.
                     * @return PolicyId Alarm policy ID. If this parameter is used, `GroupId` will be ignored.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID. If this parameter is used, `GroupId` will be ignored.
                     * @param _policyId Alarm policy ID. If this parameter is used, `GroupId` will be ignored.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The alert configured for an event
                     * @return EbSubject The alert configured for an event
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置The alert configured for an event
                     * @param _ebSubject The alert configured for an event
                     * 
                     */
                    void SetEbSubject(const std::string& _ebSubject);

                    /**
                     * 判断参数 EbSubject 是否已赋值
                     * @return EbSubject 是否已赋值
                     * 
                     */
                    bool EbSubjectHasBeenSet() const;

                    /**
                     * 获取Whether the event alert has been configured
                     * @return EbEventFlag Whether the event alert has been configured
                     * 
                     */
                    int64_t GetEbEventFlag() const;

                    /**
                     * 设置Whether the event alert has been configured
                     * @param _ebEventFlag Whether the event alert has been configured
                     * 
                     */
                    void SetEbEventFlag(const int64_t& _ebEventFlag);

                    /**
                     * 判断参数 EbEventFlag 是否已赋值
                     * @return EbEventFlag 是否已赋值
                     * 
                     */
                    bool EbEventFlagHasBeenSet() const;

                private:

                    /**
                     * The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Policy group ID. If `PolicyId` is used, this parameter will be ignored, and any value, e.g., `0`, can be passed in.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * List of unique IDs of the object instances to be deleted. `UniqueId` can be obtained from the output parameter `List` of the [DescribeBindingPolicyObjectList](https://intl.cloud.tencent.com/document/api/248/40570?from_cn_redirect=1) API
                     */
                    std::vector<std::string> m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * Instance group ID. The `UniqueId` parameter is invalid if object instances are deleted by instance group.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Alarm policy ID. If this parameter is used, `GroupId` will be ignored.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The alert configured for an event
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * Whether the event alert has been configured
                     */
                    int64_t m_ebEventFlag;
                    bool m_ebEventFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNBINDINGPOLICYOBJECTREQUEST_H_
