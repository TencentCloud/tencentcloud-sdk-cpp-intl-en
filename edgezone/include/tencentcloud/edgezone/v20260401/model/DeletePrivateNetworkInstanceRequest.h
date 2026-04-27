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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DELETEPRIVATENETWORKINSTANCEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DELETEPRIVATENETWORKINSTANCEREQUEST_H_

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
                * DeletePrivateNetworkInstance request structure.
                */
                class DeletePrivateNetworkInstanceRequest : public AbstractModel
                {
                public:
                    DeletePrivateNetworkInstanceRequest();
                    ~DeletePrivateNetworkInstanceRequest() = default;
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

                private:

                    /**
                     * Private network instance Id
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DELETEPRIVATENETWORKINSTANCEREQUEST_H_
