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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Security instance status.
                */
                class EntityStatus : public AbstractModel
                {
                public:
                    EntityStatus();
                    ~EntityStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name. Currently, only subdomains are available.
                     * @return Entity Instance name. Currently, only subdomains are available.
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Instance name. Currently, only subdomains are available.
                     * @param _entity Instance name. Currently, only subdomains are available.
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Instance configuration issuance status. Valid values:
<li>online: Configuration in effect;</li><li>fail: Configuration failure;</li><li>process: Configuration is being deployed.</li>
                     * @return Status Instance configuration issuance status. Valid values:
<li>online: Configuration in effect;</li><li>fail: Configuration failure;</li><li>process: Configuration is being deployed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance configuration issuance status. Valid values:
<li>online: Configuration in effect;</li><li>fail: Configuration failure;</li><li>process: Configuration is being deployed.</li>
                     * @param _status Instance configuration issuance status. Valid values:
<li>online: Configuration in effect;</li><li>fail: Configuration failure;</li><li>process: Configuration is being deployed.</li>
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
                     * 获取Prompt for instance configuration distribution.
                     * @return Message Prompt for instance configuration distribution.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Prompt for instance configuration distribution.
                     * @param _message Prompt for instance configuration distribution.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Instance name. Currently, only subdomains are available.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Instance configuration issuance status. Valid values:
<li>online: Configuration in effect;</li><li>fail: Configuration failure;</li><li>process: Configuration is being deployed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Prompt for instance configuration distribution.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENTITYSTATUS_H_
