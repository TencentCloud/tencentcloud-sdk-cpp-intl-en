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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCERHEALTH_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCERHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ListenerHealth.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CLB health status
                */
                class LoadBalancerHealth : public AbstractModel
                {
                public:
                    LoadBalancerHealth();
                    ~LoadBalancerHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerId CLB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LoadBalancerId CLB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerName CLB instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LoadBalancerName CLB instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取List of listeners
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Listeners List of listeners
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ListenerHealth> GetListeners() const;

                    /**
                     * 设置List of listeners
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Listeners List of listeners
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListeners(const std::vector<ListenerHealth>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     */
                    bool ListenersHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * List of listeners
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ListenerHealth> m_listeners;
                    bool m_listenersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCERHEALTH_H_
