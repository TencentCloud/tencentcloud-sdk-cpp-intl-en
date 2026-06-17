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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_RSWEIGHTRULE_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_RSWEIGHTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * Modify the data type of a node weight
                */
                class RsWeightRule : public AbstractModel
                {
                public:
                    RsWeightRule();
                    ~RsWeightRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB listener ID.
                     * @return ListenerId CLB listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID.
                     * @param _listenerId CLB listener ID.
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
                     * 获取List of real servers for which weights are to be modified.
                     * @return Targets List of real servers for which weights are to be modified.
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers for which weights are to be modified.
                     * @param _targets List of real servers for which weights are to be modified.
                     * 
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * @return LocationId Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * @param _locationId Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Domain name of the target rule. This parameter will not take effect when LocationId parameter is provided.
                     * @return Domain Domain name of the target rule. This parameter will not take effect when LocationId parameter is provided.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the target rule. This parameter will not take effect when LocationId parameter is provided.
                     * @param _domain Domain name of the target rule. This parameter will not take effect when LocationId parameter is provided.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取URL of the target rule. This parameter will not take effect when the LocationId parameter is provided.
                     * @return Url URL of the target rule. This parameter will not take effect when the LocationId parameter is provided.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the target rule. This parameter will not take effect when the LocationId parameter is provided.
                     * @param _url URL of the target rule. This parameter will not take effect when the LocationId parameter is provided.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The forwarding weight of the backend service after modification, value ranges from 0 to 100. This parameter has a lower priority than the Weight parameter in the Target (https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target). The final weight value is determined by the Weight parameter in the Target, and only when the Weight parameter in the Target is empty, the Weight parameter in the RsWeightRule takes effect.
                     * @return Weight The forwarding weight of the backend service after modification, value ranges from 0 to 100. This parameter has a lower priority than the Weight parameter in the Target (https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target). The final weight value is determined by the Weight parameter in the Target, and only when the Weight parameter in the Target is empty, the Weight parameter in the RsWeightRule takes effect.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置The forwarding weight of the backend service after modification, value ranges from 0 to 100. This parameter has a lower priority than the Weight parameter in the Target (https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target). The final weight value is determined by the Weight parameter in the Target, and only when the Weight parameter in the Target is empty, the Weight parameter in the RsWeightRule takes effect.
                     * @param _weight The forwarding weight of the backend service after modification, value ranges from 0 to 100. This parameter has a lower priority than the Weight parameter in the Target (https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target). The final weight value is determined by the Weight parameter in the Target, and only when the Weight parameter in the Target is empty, the Weight parameter in the RsWeightRule takes effect.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * CLB listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of real servers for which weights are to be modified.
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the target rule. This parameter will not take effect when LocationId parameter is provided.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * URL of the target rule. This parameter will not take effect when the LocationId parameter is provided.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The forwarding weight of the backend service after modification, value ranges from 0 to 100. This parameter has a lower priority than the Weight parameter in the Target (https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target). The final weight value is determined by the Weight parameter in the Target, and only when the Weight parameter in the Target is empty, the Weight parameter in the RsWeightRule takes effect.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_RSWEIGHTRULE_H_
