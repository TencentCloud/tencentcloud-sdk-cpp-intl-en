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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SetLoadBalancerStartStatus request structure.
                */
                class SetLoadBalancerStartStatusRequest : public AbstractModel
                {
                public:
                    SetLoadBalancerStartStatusRequest();
                    ~SetLoadBalancerStartStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation type. Start: Start the instance; Stop: Stop the instance.
                     * @return OperationType Operation type. Start: Start the instance; Stop: Stop the instance.
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type. Start: Start the instance; Stop: Stop the instance.
                     * @param _operationType Operation type. Start: Start the instance; Stop: Stop the instance.
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerId CLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerId CLB instance ID.
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
                     * 获取Listener ID. If this field is empty, it indicates operating the CLB instance; if not empty, it indicates operating the listener.
                     * @return ListenerIds Listener ID. If this field is empty, it indicates operating the CLB instance; if not empty, it indicates operating the listener.
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置Listener ID. If this field is empty, it indicates operating the CLB instance; if not empty, it indicates operating the listener.
                     * @param _listenerIds Listener ID. If this field is empty, it indicates operating the CLB instance; if not empty, it indicates operating the listener.
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                private:

                    /**
                     * Operation type. Start: Start the instance; Stop: Stop the instance.
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Listener ID. If this field is empty, it indicates operating the CLB instance; if not empty, it indicates operating the listener.
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_
