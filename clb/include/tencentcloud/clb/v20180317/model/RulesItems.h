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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULESITEMS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULESITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LbRsTargets.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Object bound to the layer-7 listener rule
                */
                class RulesItems : public AbstractModel
                {
                public:
                    RulesItems();
                    ~RulesItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID.
                     * @return LocationId Rule ID.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Rule ID.
                     * @param _locationId Rule ID.
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
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取Uri
                     * @return Url Uri
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Uri
                     * @param _url Uri
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
                     * 获取Object bound to the real server.
                     * @return Targets Object bound to the real server.
                     * 
                     */
                    std::vector<LbRsTargets> GetTargets() const;

                    /**
                     * 设置Object bound to the real server.
                     * @param _targets Object bound to the real server.
                     * 
                     */
                    void SetTargets(const std::vector<LbRsTargets>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Rule ID.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Uri
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Object bound to the real server.
                     */
                    std::vector<LbRsTargets> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULESITEMS_H_
