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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEWHITELISTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteVpcEndPointServiceWhiteList request structure.
                */
                class DeleteVpcEndPointServiceWhiteListRequest : public AbstractModel
                {
                public:
                    DeleteVpcEndPointServiceWhiteListRequest();
                    ~DeleteVpcEndPointServiceWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of user UINs
                     * @return UserUin Array of user UINs
                     * 
                     */
                    std::vector<std::string> GetUserUin() const;

                    /**
                     * 设置Array of user UINs
                     * @param _userUin Array of user UINs
                     * 
                     */
                    void SetUserUin(const std::vector<std::string>& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID
                     * @return EndPointServiceId Endpoint service ID
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID
                     * @param _endPointServiceId Endpoint service ID
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                private:

                    /**
                     * Array of user UINs
                     */
                    std::vector<std::string> m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEWHITELISTREQUEST_H_
