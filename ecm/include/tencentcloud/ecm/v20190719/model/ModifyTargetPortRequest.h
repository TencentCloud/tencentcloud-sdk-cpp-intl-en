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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYTARGETPORTREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYTARGETPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Target.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyTargetPort request structure.
                */
                class ModifyTargetPortRequest : public AbstractModel
                {
                public:
                    ModifyTargetPortRequest();
                    ~ModifyTargetPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param LoadBalancerId CLB instance ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB listener ID
                     * @return ListenerId CLB listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID
                     * @param ListenerId CLB listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取List of real servers for which to modify the ports
                     * @return Targets List of real servers for which to modify the ports
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers for which to modify the ports
                     * @param Targets List of real servers for which to modify the ports
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取New port of the real server bound to the listener or forwarding rule
                     * @return NewPort New port of the real server bound to the listener or forwarding rule
                     */
                    int64_t GetNewPort() const;

                    /**
                     * 设置New port of the real server bound to the listener or forwarding rule
                     * @param NewPort New port of the real server bound to the listener or forwarding rule
                     */
                    void SetNewPort(const int64_t& _newPort);

                    /**
                     * 判断参数 NewPort 是否已赋值
                     * @return NewPort 是否已赋值
                     */
                    bool NewPortHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of real servers for which to modify the ports
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * New port of the real server bound to the listener or forwarding rule
                     */
                    int64_t m_newPort;
                    bool m_newPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYTARGETPORTREQUEST_H_
