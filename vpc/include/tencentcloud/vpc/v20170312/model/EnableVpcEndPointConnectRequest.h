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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_

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
                * EnableVpcEndPointConnect request structure.
                */
                class EnableVpcEndPointConnectRequest : public AbstractModel
                {
                public:
                    EnableVpcEndPointConnectRequest();
                    ~EnableVpcEndPointConnectRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Endpoint ID
                     * @return EndPointId Endpoint ID
                     * 
                     */
                    std::vector<std::string> GetEndPointId() const;

                    /**
                     * 设置Endpoint ID
                     * @param _endPointId Endpoint ID
                     * 
                     */
                    void SetEndPointId(const std::vector<std::string>& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取Whether to accept the request of connecting with an endpoint

                     * @return AcceptFlag Whether to accept the request of connecting with an endpoint

                     * 
                     */
                    bool GetAcceptFlag() const;

                    /**
                     * 设置Whether to accept the request of connecting with an endpoint

                     * @param _acceptFlag Whether to accept the request of connecting with an endpoint

                     * 
                     */
                    void SetAcceptFlag(const bool& _acceptFlag);

                    /**
                     * 判断参数 AcceptFlag 是否已赋值
                     * @return AcceptFlag 是否已赋值
                     * 
                     */
                    bool AcceptFlagHasBeenSet() const;

                private:

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * Endpoint ID
                     */
                    std::vector<std::string> m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * Whether to accept the request of connecting with an endpoint

                     */
                    bool m_acceptFlag;
                    bool m_acceptFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEVPCENDPOINTCONNECTREQUEST_H_
