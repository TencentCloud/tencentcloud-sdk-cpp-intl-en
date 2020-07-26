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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RewriteLocationMap.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ManualRewrite request structure.
                */
                class ManualRewriteRequest : public AbstractModel
                {
                public:
                    ManualRewriteRequest();
                    ~ManualRewriteRequest() = default;
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
                     * 获取Source listener ID
                     * @return SourceListenerId Source listener ID
                     */
                    std::string GetSourceListenerId() const;

                    /**
                     * 设置Source listener ID
                     * @param SourceListenerId Source listener ID
                     */
                    void SetSourceListenerId(const std::string& _sourceListenerId);

                    /**
                     * 判断参数 SourceListenerId 是否已赋值
                     * @return SourceListenerId 是否已赋值
                     */
                    bool SourceListenerIdHasBeenSet() const;

                    /**
                     * 获取Target listener ID
                     * @return TargetListenerId Target listener ID
                     */
                    std::string GetTargetListenerId() const;

                    /**
                     * 设置Target listener ID
                     * @param TargetListenerId Target listener ID
                     */
                    void SetTargetListenerId(const std::string& _targetListenerId);

                    /**
                     * 判断参数 TargetListenerId 是否已赋值
                     * @return TargetListenerId 是否已赋值
                     */
                    bool TargetListenerIdHasBeenSet() const;

                    /**
                     * 获取Redirection relationship between forwarding rules
                     * @return RewriteInfos Redirection relationship between forwarding rules
                     */
                    std::vector<RewriteLocationMap> GetRewriteInfos() const;

                    /**
                     * 设置Redirection relationship between forwarding rules
                     * @param RewriteInfos Redirection relationship between forwarding rules
                     */
                    void SetRewriteInfos(const std::vector<RewriteLocationMap>& _rewriteInfos);

                    /**
                     * 判断参数 RewriteInfos 是否已赋值
                     * @return RewriteInfos 是否已赋值
                     */
                    bool RewriteInfosHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Source listener ID
                     */
                    std::string m_sourceListenerId;
                    bool m_sourceListenerIdHasBeenSet;

                    /**
                     * Target listener ID
                     */
                    std::string m_targetListenerId;
                    bool m_targetListenerIdHasBeenSet;

                    /**
                     * Redirection relationship between forwarding rules
                     */
                    std::vector<RewriteLocationMap> m_rewriteInfos;
                    bool m_rewriteInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MANUALREWRITEREQUEST_H_
