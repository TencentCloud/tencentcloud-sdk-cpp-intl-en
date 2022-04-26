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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_

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
                * CreateInvoker request structure.
                */
                class CreateInvokerRequest : public AbstractModel
                {
                public:
                    CreateInvokerRequest();
                    ~CreateInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Invoker name.
                     * @return Name Invoker name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Invoker name.
                     * @param Name Invoker name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * @return Type Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     */
                    std::string GetType() const;

                    /**
                     * 设置Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     * @param Type Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Remote command ID.
                     * @return CommandId Remote command ID.
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Remote command ID.
                     * @param CommandId Remote command ID.
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取ID of the instance bound to the trigger. Up to 100 IDs are allowed.
                     * @return InstanceIds ID of the instance bound to the trigger. Up to 100 IDs are allowed.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of the instance bound to the trigger. Up to 100 IDs are allowed.
                     * @param InstanceIds ID of the instance bound to the trigger. Up to 100 IDs are allowed.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取The user who executes the command.
                     * @return Username The user who executes the command.
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The user who executes the command.
                     * @param Username The user who executes the command.
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Custom parameters of the command.
                     * @return Parameters Custom parameters of the command.
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameters of the command.
                     * @param Parameters Custom parameters of the command.
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Settings required for a recurring invoker.
                     * @return ScheduleSettings Settings required for a recurring invoker.
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置Settings required for a recurring invoker.
                     * @param ScheduleSettings Settings required for a recurring invoker.
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                private:

                    /**
                     * Invoker name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Invoker type. It can only be `SCHEDULE` (recurring invokers).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Remote command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * ID of the instance bound to the trigger. Up to 100 IDs are allowed.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * The user who executes the command.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Custom parameters of the command.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Settings required for a recurring invoker.
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
