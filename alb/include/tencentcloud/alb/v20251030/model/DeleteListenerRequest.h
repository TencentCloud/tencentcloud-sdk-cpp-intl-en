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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETELISTENERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteListener request structure.
                */
                class DeleteListenerRequest : public AbstractModel
                {
                public:
                    DeleteListenerRequest();
                    ~DeleteListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID list. The ID format is lst- followed by 8 alphanumeric characters.
                     * @return ListenerIds Listener ID list. The ID format is lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Listener ID list. The ID format is lst- followed by 8 alphanumeric characters.
                     * @param _listenerIds Listener ID list. The ID format is lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @return LoadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @param _loadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Client Token, used for ensuring request idempotency.

Generate a parameter value from your client to underwrite uniqueness of value for different requests. ClientToken supports only ASCII characters.
                     * @return ClientToken Client Token, used for ensuring request idempotency.

Generate a parameter value from your client to underwrite uniqueness of value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client Token, used for ensuring request idempotency.

Generate a parameter value from your client to underwrite uniqueness of value for different requests. ClientToken supports only ASCII characters.
                     * @param _clientToken Client Token, used for ensuring request idempotency.

Generate a parameter value from your client to underwrite uniqueness of value for different requests. ClientToken supports only ASCII characters.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * Listener ID list. The ID format is lst- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Client Token, used for ensuring request idempotency.

Generate a parameter value from your client to underwrite uniqueness of value for different requests. ClientToken supports only ASCII characters.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETELISTENERREQUEST_H_
