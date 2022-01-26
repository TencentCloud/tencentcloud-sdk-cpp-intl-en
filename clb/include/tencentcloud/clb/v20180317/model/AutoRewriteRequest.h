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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_

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
                * AutoRewrite request structure.
                */
                class AutoRewriteRequest : public AbstractModel
                {
                public:
                    AutoRewriteRequest();
                    ~AutoRewriteRequest() = default;
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
                     * 获取`HTTPS:443` listener ID
                     * @return ListenerId `HTTPS:443` listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置`HTTPS:443` listener ID
                     * @param ListenerId `HTTPS:443` listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取The domain name to be redirected under the listener `HTTPS:443`. If it is left empty, all domain names under the listener `HTTPS:443` will be configured with redirects.
                     * @return Domains The domain name to be redirected under the listener `HTTPS:443`. If it is left empty, all domain names under the listener `HTTPS:443` will be configured with redirects.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置The domain name to be redirected under the listener `HTTPS:443`. If it is left empty, all domain names under the listener `HTTPS:443` will be configured with redirects.
                     * @param Domains The domain name to be redirected under the listener `HTTPS:443`. If it is left empty, all domain names under the listener `HTTPS:443` will be configured with redirects.
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Redirection status code. Valid values: 301, 302, and 307.
                     * @return RewriteCodes Redirection status code. Valid values: 301, 302, and 307.
                     */
                    std::vector<int64_t> GetRewriteCodes() const;

                    /**
                     * 设置Redirection status code. Valid values: 301, 302, and 307.
                     * @param RewriteCodes Redirection status code. Valid values: 301, 302, and 307.
                     */
                    void SetRewriteCodes(const std::vector<int64_t>& _rewriteCodes);

                    /**
                     * 判断参数 RewriteCodes 是否已赋值
                     * @return RewriteCodes 是否已赋值
                     */
                    bool RewriteCodesHasBeenSet() const;

                    /**
                     * 获取Whether the matched URL is carried in redirection.
                     * @return TakeUrls Whether the matched URL is carried in redirection.
                     */
                    std::vector<bool> GetTakeUrls() const;

                    /**
                     * 设置Whether the matched URL is carried in redirection.
                     * @param TakeUrls Whether the matched URL is carried in redirection.
                     */
                    void SetTakeUrls(const std::vector<bool>& _takeUrls);

                    /**
                     * 判断参数 TakeUrls 是否已赋值
                     * @return TakeUrls 是否已赋值
                     */
                    bool TakeUrlsHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * `HTTPS:443` listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The domain name to be redirected under the listener `HTTPS:443`. If it is left empty, all domain names under the listener `HTTPS:443` will be configured with redirects.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Redirection status code. Valid values: 301, 302, and 307.
                     */
                    std::vector<int64_t> m_rewriteCodes;
                    bool m_rewriteCodesHasBeenSet;

                    /**
                     * Whether the matched URL is carried in redirection.
                     */
                    std::vector<bool> m_takeUrls;
                    bool m_takeUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_
