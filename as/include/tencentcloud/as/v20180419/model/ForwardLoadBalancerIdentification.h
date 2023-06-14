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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Application CLB IDs
                */
                class ForwardLoadBalancerIdentification : public AbstractModel
                {
                public:
                    ForwardLoadBalancerIdentification();
                    ~ForwardLoadBalancerIdentification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the CLB
                     * @return LoadBalancerId ID of the CLB
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB
                     * @param _loadBalancerId ID of the CLB
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
                     * 获取Application CLB listener ID
                     * @return ListenerId Application CLB listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Application CLB listener ID
                     * @param _listenerId Application CLB listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * @return LocationId ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * @param _locationId ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Application CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * ID of a forwarding rule. This parameter is required for layer-7 listeners.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
