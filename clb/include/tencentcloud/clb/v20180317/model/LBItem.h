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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ListenerItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Querying the binding relation of the CLB instance
                */
                class LBItem : public AbstractModel
                {
                public:
                    LBItem();
                    ~LBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取String ID of the CLB instance.
                     * @return LoadBalancerId String ID of the CLB instance.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置String ID of the CLB instance.
                     * @param _loadBalancerId String ID of the CLB instance.
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
                     * 获取VIP of the CLB instance.
                     * @return Vip VIP of the CLB instance.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP of the CLB instance.
                     * @param _vip VIP of the CLB instance.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Listener rule.
                     * @return Listeners Listener rule.
                     * 
                     */
                    std::vector<ListenerItem> GetListeners() const;

                    /**
                     * 设置Listener rule.
                     * @param _listeners Listener rule.
                     * 
                     */
                    void SetListeners(const std::vector<ListenerItem>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取Region of the CLB instance
                     * @return Region Region of the CLB instance
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the CLB instance
                     * @param _region Region of the CLB instance
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * String ID of the CLB instance.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * VIP of the CLB instance.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Listener rule.
                     */
                    std::vector<ListenerItem> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * Region of the CLB instance
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBITEM_H_
