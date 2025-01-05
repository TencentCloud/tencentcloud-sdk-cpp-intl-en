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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEEXTENDENDPOINTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEEXTENDENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/ForwardIp.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateExtendEndpoint request structure.
                */
                class CreateExtendEndpointRequest : public AbstractModel
                {
                public:
                    CreateExtendEndpointRequest();
                    ~CreateExtendEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Outbound endpoint name.
                     * @return EndpointName Outbound endpoint name.
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置Outbound endpoint name.
                     * @param _endpointName Outbound endpoint name.
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取The region of the outbound endpoint must be consistent with the region of the forwarding target VIP.
                     * @return EndpointRegion The region of the outbound endpoint must be consistent with the region of the forwarding target VIP.
                     * 
                     */
                    std::string GetEndpointRegion() const;

                    /**
                     * 设置The region of the outbound endpoint must be consistent with the region of the forwarding target VIP.
                     * @param _endpointRegion The region of the outbound endpoint must be consistent with the region of the forwarding target VIP.
                     * 
                     */
                    void SetEndpointRegion(const std::string& _endpointRegion);

                    /**
                     * 判断参数 EndpointRegion 是否已赋值
                     * @return EndpointRegion 是否已赋值
                     * 
                     */
                    bool EndpointRegionHasBeenSet() const;

                    /**
                     * 获取Forwarding target.
                     * @return ForwardIp Forwarding target.
                     * 
                     */
                    ForwardIp GetForwardIp() const;

                    /**
                     * 设置Forwarding target.
                     * @param _forwardIp Forwarding target.
                     * 
                     */
                    void SetForwardIp(const ForwardIp& _forwardIp);

                    /**
                     * 判断参数 ForwardIp 是否已赋值
                     * @return ForwardIp 是否已赋值
                     * 
                     */
                    bool ForwardIpHasBeenSet() const;

                private:

                    /**
                     * Outbound endpoint name.
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * The region of the outbound endpoint must be consistent with the region of the forwarding target VIP.
                     */
                    std::string m_endpointRegion;
                    bool m_endpointRegionHasBeenSet;

                    /**
                     * Forwarding target.
                     */
                    ForwardIp m_forwardIp;
                    bool m_forwardIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEEXTENDENDPOINTREQUEST_H_
