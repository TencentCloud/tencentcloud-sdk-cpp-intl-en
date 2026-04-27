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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYPRIVATENETWORKINSTANCEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYPRIVATENETWORKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ModifyPrivateNetworkInstance request structure.
                */
                class ModifyPrivateNetworkInstanceRequest : public AbstractModel
                {
                public:
                    ModifyPrivateNetworkInstanceRequest();
                    ~ModifyPrivateNetworkInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private network instance Id
                     * @return NetworkInstanceId Private network instance Id
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Private network instance Id
                     * @param _networkInstanceId Private network instance Id
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取New instance name
                     * @return NetworkInstanceName New instance name
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置New instance name
                     * @param _networkInstanceName New instance name
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                private:

                    /**
                     * Private network instance Id
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * New instance name
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYPRIVATENETWORKINSTANCEREQUEST_H_
