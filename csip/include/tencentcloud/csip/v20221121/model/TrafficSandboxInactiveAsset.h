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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXINACTIVEASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXINACTIVEASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficPluginState.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI Agent assets in the traffic sandbox plug-in not installed among the policy association targets' effective assets (ineffective assets)
                */
                class TrafficSandboxInactiveAsset : public AbstractModel
                {
                public:
                    TrafficSandboxInactiveAsset();
                    ~TrafficSandboxInactiveAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID. It is required only for host assets.
                     * @return InstanceId Instance ID. It is required only for host assets.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. It is required only for host assets.
                     * @param _instanceId Instance ID. It is required only for host assets.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Container ID. Refill only for container assets.
                     * @return ContainerId Container ID. Refill only for container assets.
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID. Refill only for container assets.
                     * @param _containerId Container ID. Refill only for container assets.
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Traffic sandbox plug-in status
                     * @return TrafficPluginState Traffic sandbox plug-in status
                     * 
                     */
                    TrafficPluginState GetTrafficPluginState() const;

                    /**
                     * 设置Traffic sandbox plug-in status
                     * @param _trafficPluginState Traffic sandbox plug-in status
                     * 
                     */
                    void SetTrafficPluginState(const TrafficPluginState& _trafficPluginState);

                    /**
                     * 判断参数 TrafficPluginState 是否已赋值
                     * @return TrafficPluginState 是否已赋值
                     * 
                     */
                    bool TrafficPluginStateHasBeenSet() const;

                private:

                    /**
                     * Instance ID. It is required only for host assets.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Container ID. Refill only for container assets.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Traffic sandbox plug-in status
                     */
                    TrafficPluginState m_trafficPluginState;
                    bool m_trafficPluginStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXINACTIVEASSET_H_
