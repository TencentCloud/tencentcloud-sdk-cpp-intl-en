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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyNativeGatewayServerGroup request structure.
                */
                class ModifyNativeGatewayServerGroupRequest : public AbstractModel
                {
                public:
                    ModifyNativeGatewayServerGroupRequest();
                    ~ModifyNativeGatewayServerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Native API gateway instance ID.
                     * @return GatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API gateway instance ID.
                     * @param _gatewayId Cloud Native API gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取gateway group id
                     * @return GroupId gateway group id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置gateway group id
                     * @param _groupId gateway group id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway name supports up to 60 characters.
                     * @return Name Cloud native API gateway name supports up to 60 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cloud native API gateway name supports up to 60 characters.
                     * @param _name Cloud native API gateway name supports up to 60 characters.
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
                     * 获取Cloud native API gateway description supports up to 120 characters.
                     * @return Description Cloud native API gateway description supports up to 120 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Cloud native API gateway description supports up to 120 characters.
                     * @param _description Cloud native API gateway description supports up to 120 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * gateway group id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Cloud native API gateway name supports up to 60 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cloud native API gateway description supports up to 120 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_
