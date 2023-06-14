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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/ScheduleSettings.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyInvoker request structure.
                */
                class ModifyInvokerRequest : public AbstractModel
                {
                public:
                    ModifyInvokerRequest();
                    ~ModifyInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the invoker to be modified.
                     * @return InvokerId ID of the invoker to be modified.
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置ID of the invoker to be modified.
                     * @param _invokerId ID of the invoker to be modified.
                     * 
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     * 
                     */
                    bool InvokerIdHasBeenSet() const;

                    /**
                     * 获取Name of the invoker to be modified.
                     * @return Name Name of the invoker to be modified.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the invoker to be modified.
                     * @param _name Name of the invoker to be modified.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * @return Type Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * @param _type Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ID of the command to be modified.
                     * @return CommandId ID of the command to be modified.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置ID of the command to be modified.
                     * @param _commandId ID of the command to be modified.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取The username to be modified.
                     * @return Username The username to be modified.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The username to be modified.
                     * @param _username The username to be modified.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Custom parameters to be modified.
                     * @return Parameters Custom parameters to be modified.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameters to be modified.
                     * @param _parameters Custom parameters to be modified.
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取List of instance IDs to be modified. Up to 100 IDs are allowed.
                     * @return InstanceIds List of instance IDs to be modified. Up to 100 IDs are allowed.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs to be modified. Up to 100 IDs are allowed.
                     * @param _instanceIds List of instance IDs to be modified. Up to 100 IDs are allowed.
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
                     * 获取Scheduled invoker settings to be modified.
                     * @return ScheduleSettings Scheduled invoker settings to be modified.
                     * 
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置Scheduled invoker settings to be modified.
                     * @param _scheduleSettings Scheduled invoker settings to be modified.
                     * 
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     * 
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                private:

                    /**
                     * ID of the invoker to be modified.
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * Name of the invoker to be modified.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of the command to be modified.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * The username to be modified.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Custom parameters to be modified.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * List of instance IDs to be modified. Up to 100 IDs are allowed.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Scheduled invoker settings to be modified.
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYINVOKERREQUEST_H_
