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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Backend.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Information of the real server bound to a forwarding rule under an HTTP/HTTPS listener
                */
                class RuleTargets : public AbstractModel
                {
                public:
                    RuleTargets();
                    ~RuleTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Domain name of the forwarding rule
                     * @return Domain Domain name of the forwarding rule
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of the forwarding rule
                     * @param Domain Domain name of the forwarding rule
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Forwarding rule path.
                     * @return Url Forwarding rule path.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Forwarding rule path.
                     * @param Url Forwarding rule path.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Real server information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Targets Real server information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Backend> GetTargets() const;

                    /**
                     * 设置Real server information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Targets Real server information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargets(const std::vector<Backend>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name of the forwarding rule
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule path.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Real server information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Backend> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_
