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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Filter conditions for domain name query.
                */
                class DomainFilter : public AbstractModel
                {
                public:
                    DomainFilter();
                    ~DomainFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter field name, the list supported is as follows:
- origin: master origin server.
- domain: domain name.
- resourceId: domain name id.
- status: domain name status. Values include `online`, `offline`, or `processing`.
- serviceType: service type. Values include `web`, `download`, or `media`.
- projectId: project ID.
- domainType: master origin server type, `cname` indicates external origin, `COS` indicates COS origin.
- fullUrlCache: full-path cache, which can be on or off.
- https: whether to configure HTTPS, which can be on, off or processing.
- originPullProtocol: origin-pull protocol type. HTTP, follow, or HTTPS are supported.
- tagKey: tag key.
                     * @return Name Filter field name, the list supported is as follows:
- origin: master origin server.
- domain: domain name.
- resourceId: domain name id.
- status: domain name status. Values include `online`, `offline`, or `processing`.
- serviceType: service type. Values include `web`, `download`, or `media`.
- projectId: project ID.
- domainType: master origin server type, `cname` indicates external origin, `COS` indicates COS origin.
- fullUrlCache: full-path cache, which can be on or off.
- https: whether to configure HTTPS, which can be on, off or processing.
- originPullProtocol: origin-pull protocol type. HTTP, follow, or HTTPS are supported.
- tagKey: tag key.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter field name, the list supported is as follows:
- origin: master origin server.
- domain: domain name.
- resourceId: domain name id.
- status: domain name status. Values include `online`, `offline`, or `processing`.
- serviceType: service type. Values include `web`, `download`, or `media`.
- projectId: project ID.
- domainType: master origin server type, `cname` indicates external origin, `COS` indicates COS origin.
- fullUrlCache: full-path cache, which can be on or off.
- https: whether to configure HTTPS, which can be on, off or processing.
- originPullProtocol: origin-pull protocol type. HTTP, follow, or HTTPS are supported.
- tagKey: tag key.
                     * @param Name Filter field name, the list supported is as follows:
- origin: master origin server.
- domain: domain name.
- resourceId: domain name id.
- status: domain name status. Values include `online`, `offline`, or `processing`.
- serviceType: service type. Values include `web`, `download`, or `media`.
- projectId: project ID.
- domainType: master origin server type, `cname` indicates external origin, `COS` indicates COS origin.
- fullUrlCache: full-path cache, which can be on or off.
- https: whether to configure HTTPS, which can be on, off or processing.
- originPullProtocol: origin-pull protocol type. HTTP, follow, or HTTPS are supported.
- tagKey: tag key.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Filter field value.
                     * @return Value Filter field value.
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filter field value.
                     * @param Value Filter field value.
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * @return Fuzzy Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * @param Fuzzy Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * Filter field name, the list supported is as follows:
- origin: master origin server.
- domain: domain name.
- resourceId: domain name id.
- status: domain name status. Values include `online`, `offline`, or `processing`.
- serviceType: service type. Values include `web`, `download`, or `media`.
- projectId: project ID.
- domainType: master origin server type, `cname` indicates external origin, `COS` indicates COS origin.
- fullUrlCache: full-path cache, which can be on or off.
- https: whether to configure HTTPS, which can be on, off or processing.
- originPullProtocol: origin-pull protocol type. HTTP, follow, or HTTPS are supported.
- tagKey: tag key.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter field value.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINFILTER_H_
