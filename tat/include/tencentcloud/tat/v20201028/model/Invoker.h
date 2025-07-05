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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Invoker information.
                */
                class Invoker : public AbstractModel
                {
                public:
                    Invoker();
                    ~Invoker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invoker ID.
                     * @return InvokerId Invoker ID.
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置Invoker ID.
                     * @param _invokerId Invoker ID.
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
                     * 获取Invoker name.
                     * @return Name Invoker name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Invoker name.
                     * @param _name Invoker name.
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
                     * 获取Invoker type.
                     * @return Type Invoker type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Invoker type.
                     * @param _type Invoker type.
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
                     * 获取Command ID.
                     * @return CommandId Command ID.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
                     * @param _commandId Command ID.
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
                     * 获取Username.
                     * @return Username Username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username.
                     * @param _username Username.
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
                     * 获取Custom parameters.
                     * @return Parameters Custom parameters.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameters.
                     * @param _parameters Custom parameters.
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
                     * 获取Instance ID list.
                     * @return InstanceIds Instance ID list.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list.
                     * @param _instanceIds Instance ID list.
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
                     * 获取Whether to enable the invoker.
                     * @return Enable Whether to enable the invoker.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable the invoker.
                     * @param _enable Whether to enable the invoker.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Execution schedule of the invoker. This field is returned for recurring invokers.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ScheduleSettings Execution schedule of the invoker. This field is returned for recurring invokers.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置Execution schedule of the invoker. This field is returned for recurring invokers.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _scheduleSettings Execution schedule of the invoker. This field is returned for recurring invokers.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduleSettings(const ScheduleSettings& _scheduleSettings);

                    /**
                     * 判断参数 ScheduleSettings 是否已赋值
                     * @return ScheduleSettings 是否已赋值
                     * 
                     */
                    bool ScheduleSettingsHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return UpdatedTime Modification time.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Modification time.
                     * @param _updatedTime Modification time.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * Invoker ID.
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * Invoker name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Invoker type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Custom parameters.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Instance ID list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to enable the invoker.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Execution schedule of the invoker. This field is returned for recurring invokers.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKER_H_
