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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleConfiguration.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateRoleConfiguration response structure.
                */
                class CreateRoleConfigurationResponse : public AbstractModel
                {
                public:
                    CreateRoleConfigurationResponse();
                    ~CreateRoleConfigurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Access configuration details.
                     * @return RoleConfigurationInfo Access configuration details.
                     * 
                     */
                    RoleConfiguration GetRoleConfigurationInfo() const;

                    /**
                     * 判断参数 RoleConfigurationInfo 是否已赋值
                     * @return RoleConfigurationInfo 是否已赋值
                     * 
                     */
                    bool RoleConfigurationInfoHasBeenSet() const;

                private:

                    /**
                     * Access configuration details.
                     */
                    RoleConfiguration m_roleConfigurationInfo;
                    bool m_roleConfigurationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONRESPONSE_H_
