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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Modifies the data type of a node weight
                */
                class RsWeightRule : public AbstractModel
                {
                public:
                    RsWeightRule();
                    ~RsWeightRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取List of real servers for which to modify the weight
                     * @return Targets List of real servers for which to modify the weight
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers for which to modify the weight
                     * @param Targets List of real servers for which to modify the weight
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID
                     * @return LocationId Forwarding rule ID
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID
                     * @param LocationId Forwarding rule ID
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Target rule domain name. This parameter does not take effect if LocationId is specified
                     * @return Domain Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Target rule domain name. This parameter does not take effect if LocationId is specified
                     * @param Domain Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Target rule URL. This parameter does not take effect if LocationId is specified
                     * @return Url Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Target rule URL. This parameter does not take effect if LocationId is specified
                     * @param Url Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取New forwarding weight of a real server. Value range: 0-100.
                     * @return Weight New forwarding weight of a real server. Value range: 0-100.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置New forwarding weight of a real server. Value range: 0-100.
                     * @param Weight New forwarding weight of a real server. Value range: 0-100.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * CLB listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of real servers for which to modify the weight
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Forwarding rule ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Target rule domain name. This parameter does not take effect if LocationId is specified
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Target rule URL. This parameter does not take effect if LocationId is specified
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * New forwarding weight of a real server. Value range: 0-100.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
