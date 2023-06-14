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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DISABLEINTERNETADDRESSREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DISABLEINTERNETADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DisableInternetAddress request structure.
                */
                class DisableInternetAddressRequest : public AbstractModel
                {
                public:
                    DisableInternetAddressRequest();
                    ~DisableInternetAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the internet tunnel’s public IP address
                     * @return InstanceId ID of the internet tunnel’s public IP address
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the internet tunnel’s public IP address
                     * @param _instanceId ID of the internet tunnel’s public IP address
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * ID of the internet tunnel’s public IP address
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DISABLEINTERNETADDRESSREQUEST_H_
