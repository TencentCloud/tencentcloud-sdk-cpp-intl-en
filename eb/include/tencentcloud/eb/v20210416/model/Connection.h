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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CONNECTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Connection information
                */
                class Connection : public AbstractModel
                {
                public:
                    Connection();
                    ~Connection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return ModTime Update time
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Update time
                     * @param _modTime Update time
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Switch
                     * @return Enable Switch
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Switch
                     * @param _enable Switch
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
                     * 获取Creation time
                     * @return AddTime Creation time
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param _addTime Creation time
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Connector ID
                     * @return ConnectionId Connector ID
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置Connector ID
                     * @param _connectionId Connector ID
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

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
                     * 获取Type
                     * @return Type Type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
                     * @param _type Type
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
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Switch
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Connector ID
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Connector description
                     */
                    ConnectionDescription m_connectionDescription;
                    bool m_connectionDescriptionHasBeenSet;

                    /**
                     * Connector name
                     */
                    std::string m_connectionName;
                    bool m_connectionNameHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CONNECTION_H_
