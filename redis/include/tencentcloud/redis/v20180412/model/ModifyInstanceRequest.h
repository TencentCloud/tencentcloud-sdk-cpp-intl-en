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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_

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
                * ModifyInstance request structure.
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance modification operation. Valid values:
- rename: rename an instance.
- modifyProject: modify the project to which the instance belongs.
- modifyAutoRenew: modify the instance renewal flag.
- modifyDeleteProtectionSwitch: modify the instance deletion protection switch status.
                     * @return Operation Instance modification operation. Valid values:
- rename: rename an instance.
- modifyProject: modify the project to which the instance belongs.
- modifyAutoRenew: modify the instance renewal flag.
- modifyDeleteProtectionSwitch: modify the instance deletion protection switch status.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Instance modification operation. Valid values:
- rename: rename an instance.
- modifyProject: modify the project to which the instance belongs.
- modifyAutoRenew: modify the instance renewal flag.
- modifyDeleteProtectionSwitch: modify the instance deletion protection switch status.
                     * @param _operation Instance modification operation. Valid values:
- rename: rename an instance.
- modifyProject: modify the project to which the instance belongs.
- modifyAutoRenew: modify the instance renewal flag.
- modifyDeleteProtectionSwitch: modify the instance deletion protection switch status.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. The maximum number of instances per request is 10.
                     * @return InstanceIds Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. The maximum number of instances per request is 10.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. The maximum number of instances per request is 10.
                     * @param _instanceIds Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. The maximum number of instances per request is 10.
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
                     * 获取New name of the instance. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. The length can be up to 60 characters.
                     * @return InstanceNames New name of the instance. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. The length can be up to 60 characters.
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置New name of the instance. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. The length can be up to 60 characters.
                     * @param _instanceNames New name of the instance. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. The length can be up to 60 characters.
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取Project ID. Log in to the [Project Management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * @return ProjectId Project ID. Log in to the [Project Management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Log in to the [Project Management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * @param _projectId Project ID. Log in to the [Project Management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag.

- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * @return AutoRenews Auto-renewal flag.

- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * 
                     */
                    std::vector<int64_t> GetAutoRenews() const;

                    /**
                     * 设置Auto-renewal flag.

- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * @param _autoRenews Auto-renewal flag.

- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * 
                     */
                    void SetAutoRenews(const std::vector<int64_t>& _autoRenews);

                    /**
                     * 判断参数 AutoRenews 是否已赋值
                     * @return AutoRenews 是否已赋值
                     * 
                     */
                    bool AutoRenewsHasBeenSet() const;

                    /**
                     * 获取Deletion protection switch. - 0: disabled by default; - 1: enabled.
                     * @return DeleteProtectionSwitches Deletion protection switch. - 0: disabled by default; - 1: enabled.
                     * 
                     */
                    std::vector<int64_t> GetDeleteProtectionSwitches() const;

                    /**
                     * 设置Deletion protection switch. - 0: disabled by default; - 1: enabled.
                     * @param _deleteProtectionSwitches Deletion protection switch. - 0: disabled by default; - 1: enabled.
                     * 
                     */
                    void SetDeleteProtectionSwitches(const std::vector<int64_t>& _deleteProtectionSwitches);

                    /**
                     * 判断参数 DeleteProtectionSwitches 是否已赋值
                     * @return DeleteProtectionSwitches 是否已赋值
                     * 
                     */
                    bool DeleteProtectionSwitchesHasBeenSet() const;

                    /**
                     * 获取This parameter is currently being deprecated and can still be used by existing users. It is recommended that new users use InstanceIds.
                     * @return InstanceId This parameter is currently being deprecated and can still be used by existing users. It is recommended that new users use InstanceIds.
                     * @deprecated
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置This parameter is currently being deprecated and can still be used by existing users. It is recommended that new users use InstanceIds.
                     * @param _instanceId This parameter is currently being deprecated and can still be used by existing users. It is recommended that new users use InstanceIds.
                     * @deprecated
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Disused
                     * @return InstanceName Disused
                     * @deprecated
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Disused
                     * @param _instanceName Disused
                     * @deprecated
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * @deprecated
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated.
                     * @return AutoRenew This parameter has been deprecated.
                     * @deprecated
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _autoRenew This parameter has been deprecated.
                     * @deprecated
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * @deprecated
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * Instance modification operation. Valid values:
- rename: rename an instance.
- modifyProject: modify the project to which the instance belongs.
- modifyAutoRenew: modify the instance renewal flag.
- modifyDeleteProtectionSwitch: modify the instance deletion protection switch status.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list. The maximum number of instances per request is 10.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * New name of the instance. Only Chinese characters, letters, digits, underscores (_), and delimiters (-) are supported. The length can be up to 60 characters.
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * Project ID. Log in to the [Project Management](https://console.tencentcloud.com/project) page of the Redis console and copy the project ID in **Project Name**.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Auto-renewal flag.

- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     */
                    std::vector<int64_t> m_autoRenews;
                    bool m_autoRenewsHasBeenSet;

                    /**
                     * Deletion protection switch. - 0: disabled by default; - 1: enabled.
                     */
                    std::vector<int64_t> m_deleteProtectionSwitches;
                    bool m_deleteProtectionSwitchesHasBeenSet;

                    /**
                     * This parameter is currently being deprecated and can still be used by existing users. It is recommended that new users use InstanceIds.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Disused
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEREQUEST_H_
