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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/ScheduleSettings.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


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
                     * 获取Executor name. length not exceeding 120 characters.
                     * @return Name Executor name. length not exceeding 120 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Executor name. length not exceeding 120 characters.
                     * @param _name Executor name. length not exceeding 120 characters.
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
                     * 获取Executor type.

Selectable values (currently only support one):.

-`SCHEDULE`: period type executor.
                     * @return Type Executor type.

Selectable values (currently only support one):.

-`SCHEDULE`: period type executor.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Executor type.

Selectable values (currently only support one):.

-`SCHEDULE`: period type executor.
                     * @param _type Executor type.

Selectable values (currently only support one):.

-`SCHEDULE`: period type executor.
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
                     * 获取Remote command ID.

Call the [DescribeCommands](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api to query command details.
                     * @return CommandId Remote command ID.

Call the [DescribeCommands](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api to query command details.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Remote command ID.

Call the [DescribeCommands](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api to query command details.
                     * @param _commandId Remote command ID.

Call the [DescribeCommands](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api to query command details.
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
                     * 获取Trigger associated instance ID. list cap 100.

You can get the instance ID through the query instance interface of corresponding cloud services. currently supports instance types: CVM, Lighthouse, and TAT managed instances.

The instance needs to have the TAT client installed, and the client must be in Online status. you can query client status via the [DescribeAutomationAgentStatus](https://www.tencentcloud.com/document/api/1340/52682?from_cn_redirect=1) api.
                     * @return InstanceIds Trigger associated instance ID. list cap 100.

You can get the instance ID through the query instance interface of corresponding cloud services. currently supports instance types: CVM, Lighthouse, and TAT managed instances.

The instance needs to have the TAT client installed, and the client must be in Online status. you can query client status via the [DescribeAutomationAgentStatus](https://www.tencentcloud.com/document/api/1340/52682?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Trigger associated instance ID. list cap 100.

You can get the instance ID through the query instance interface of corresponding cloud services. currently supports instance types: CVM, Lighthouse, and TAT managed instances.

The instance needs to have the TAT client installed, and the client must be in Online status. you can query client status via the [DescribeAutomationAgentStatus](https://www.tencentcloud.com/document/api/1340/52682?from_cn_redirect=1) api.
                     * @param _instanceIds Trigger associated instance ID. list cap 100.

You can get the instance ID through the query instance interface of corresponding cloud services. currently supports instance types: CVM, Lighthouse, and TAT managed instances.

The instance needs to have the TAT client installed, and the client must be in Online status. you can query client status via the [DescribeAutomationAgentStatus](https://www.tencentcloud.com/document/api/1340/52682?from_cn_redirect=1) api.
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
                     * 获取Command execution user. length not exceeding 256 characters.
                     * @return Username Command execution user. length not exceeding 256 characters.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Command execution user. length not exceeding 256 characters.
                     * @param _username Command execution user. length not exceeding 256 characters.
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
                     * 获取Command custom parameter. field type is JSON encode string.

This parameter can be set only when EnableParameter of the command specified by CommandId is true. obtain the EnableParameter settings through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
                     * @return Parameters Command custom parameter. field type is JSON encode string.

This parameter can be set only when EnableParameter of the command specified by CommandId is true. obtain the EnableParameter settings through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Command custom parameter. field type is JSON encode string.

This parameter can be set only when EnableParameter of the command specified by CommandId is true. obtain the EnableParameter settings through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
                     * @param _parameters Command custom parameter. field type is JSON encode string.

This parameter can be set only when EnableParameter of the command specified by CommandId is true. obtain the EnableParameter settings through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
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
                     * 获取Recurring invoker settings.

When the executor type is `SCHEDULE`, specify this parameter.
                     * @return ScheduleSettings Recurring invoker settings.

When the executor type is `SCHEDULE`, specify this parameter.
                     * 
                     */
                    ScheduleSettings GetScheduleSettings() const;

                    /**
                     * 设置Recurring invoker settings.

When the executor type is `SCHEDULE`, specify this parameter.
                     * @param _scheduleSettings Recurring invoker settings.

When the executor type is `SCHEDULE`, specify this parameter.
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
                     * 获取Tag associated with the command. list length not exceeding 10.
                     * @return Tags Tag associated with the command. list length not exceeding 10.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag associated with the command. list length not exceeding 10.
                     * @param _tags Tag associated with the command. list length not exceeding 10.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Executor name. length not exceeding 120 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Executor type.

Selectable values (currently only support one):.

-`SCHEDULE`: period type executor.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Remote command ID.

Call the [DescribeCommands](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api to query command details.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Trigger associated instance ID. list cap 100.

You can get the instance ID through the query instance interface of corresponding cloud services. currently supports instance types: CVM, Lighthouse, and TAT managed instances.

The instance needs to have the TAT client installed, and the client must be in Online status. you can query client status via the [DescribeAutomationAgentStatus](https://www.tencentcloud.com/document/api/1340/52682?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Command execution user. length not exceeding 256 characters.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Command custom parameter. field type is JSON encode string.

This parameter can be set only when EnableParameter of the command specified by CommandId is true. obtain the EnableParameter settings through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Recurring invoker settings.

When the executor type is `SCHEDULE`, specify this parameter.
                     */
                    ScheduleSettings m_scheduleSettings;
                    bool m_scheduleSettingsHasBeenSet;

                    /**
                     * Tag associated with the command. list length not exceeding 10.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEINVOKERREQUEST_H_
