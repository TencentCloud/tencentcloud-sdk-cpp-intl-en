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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/ConnectionDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateConnection request structure.
                */
                class CreateConnectionRequest : public AbstractModel
                {
                public:
                    CreateConnectionRequest();
                    ~CreateConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connector description
                     * @return ConnectionDescription Connector description
                     * 
                     */
                    ConnectionDescription GetConnectionDescription() const;

                    /**
                     * 设置Connector description
                     * @param _connectionDescription Connector description
                     * 
                     */
                    void SetConnectionDescription(const ConnectionDescription& _connectionDescription);

                    /**
                     * 判断参数 ConnectionDescription 是否已赋值
                     * @return ConnectionDescription 是否已赋值
                     * 
                     */
                    bool ConnectionDescriptionHasBeenSet() const;

                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Connector name
                     * @return ConnectionName Connector name
                     * 
                     */
                    std::string GetConnectionName() const;

                    /**
                     * 设置Connector name
                     * @param _connectionName Connector name
                     * 
                     */
                    void SetConnectionName(const std::string& _connectionName);

                    /**
                     * 判断参数 ConnectionName 是否已赋值
                     * @return ConnectionName 是否已赋值
                     * 
                     */
                    bool ConnectionNameHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to enable
                     * @return Enable Whether to enable
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable
                     * @param _enable Whether to enable
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
                     * 获取Type of the connector
                     * @return Type Type of the connector
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the connector
                     * @param _type Type of the connector
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Connector description
                     */
                    ConnectionDescription m_connectionDescription;
                    bool m_connectionDescriptionHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Connector name
                     */
                    std::string m_connectionName;
                    bool m_connectionNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether to enable
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Type of the connector
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATECONNECTIONREQUEST_H_
