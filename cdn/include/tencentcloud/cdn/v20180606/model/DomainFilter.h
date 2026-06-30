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
                     * 获取Filter field name. supported list as follows:.
-`Origin`: specifies the primary origin server.
-Domain name. specifies the domain name.
-resourceId: domain id.
-Status: specifies the domain name status. valid values: online, offline, processing, deleted.
-serviceType: specifies the business type. valid values: web, download, media, hybrid, dynamic.
-projectId: specifies the project ID.
-domainType: specifies the primary origin server type. valid values: cname (self-owned origin), cos (cloud object storage integration), third_party (third-party object storage), igtm (igtm multi-active origin).
-fullUrlCache. specifies full path cache. valid values: on, off.
-Specifies whether to configure https. valid values: on, off, processing.
-originPullProtocol: specifies the origin-pull protocol. valid values: http, follow, https.
-tagKey: specifies the Tag key.
                     * @return Name Filter field name. supported list as follows:.
-`Origin`: specifies the primary origin server.
-Domain name. specifies the domain name.
-resourceId: domain id.
-Status: specifies the domain name status. valid values: online, offline, processing, deleted.
-serviceType: specifies the business type. valid values: web, download, media, hybrid, dynamic.
-projectId: specifies the project ID.
-domainType: specifies the primary origin server type. valid values: cname (self-owned origin), cos (cloud object storage integration), third_party (third-party object storage), igtm (igtm multi-active origin).
-fullUrlCache. specifies full path cache. valid values: on, off.
-Specifies whether to configure https. valid values: on, off, processing.
-originPullProtocol: specifies the origin-pull protocol. valid values: http, follow, https.
-tagKey: specifies the Tag key.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter field name. supported list as follows:.
-`Origin`: specifies the primary origin server.
-Domain name. specifies the domain name.
-resourceId: domain id.
-Status: specifies the domain name status. valid values: online, offline, processing, deleted.
-serviceType: specifies the business type. valid values: web, download, media, hybrid, dynamic.
-projectId: specifies the project ID.
-domainType: specifies the primary origin server type. valid values: cname (self-owned origin), cos (cloud object storage integration), third_party (third-party object storage), igtm (igtm multi-active origin).
-fullUrlCache. specifies full path cache. valid values: on, off.
-Specifies whether to configure https. valid values: on, off, processing.
-originPullProtocol: specifies the origin-pull protocol. valid values: http, follow, https.
-tagKey: specifies the Tag key.
                     * @param _name Filter field name. supported list as follows:.
-`Origin`: specifies the primary origin server.
-Domain name. specifies the domain name.
-resourceId: domain id.
-Status: specifies the domain name status. valid values: online, offline, processing, deleted.
-serviceType: specifies the business type. valid values: web, download, media, hybrid, dynamic.
-projectId: specifies the project ID.
-domainType: specifies the primary origin server type. valid values: cname (self-owned origin), cos (cloud object storage integration), third_party (third-party object storage), igtm (igtm multi-active origin).
-fullUrlCache. specifies full path cache. valid values: on, off.
-Specifies whether to configure https. valid values: on, off, processing.
-originPullProtocol: specifies the origin-pull protocol. valid values: http, follow, https.
-tagKey: specifies the Tag key.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specifies the filter field value. the default maximum is 5. when Name is origin/domain and Fuzzy is true, the maximum is 1.
                     * @return Value Specifies the filter field value. the default maximum is 5. when Name is origin/domain and Fuzzy is true, the maximum is 1.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Specifies the filter field value. the default maximum is 5. when Name is origin/domain and Fuzzy is true, the maximum is 1.
                     * @param _value Specifies the filter field value. the default maximum is 5. when Name is origin/domain and Fuzzy is true, the maximum is 1.
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * @return Fuzzy Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * 
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * @param _fuzzy Whether to enable fuzzy query. Only `origin` or `domain` is supported for the filter field name.
When fuzzy query is enabled, the maximum Value length is 1. When fuzzy query is disabled, the maximum Value length is 5.
                     * 
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * Filter field name. supported list as follows:.
-`Origin`: specifies the primary origin server.
-Domain name. specifies the domain name.
-resourceId: domain id.
-Status: specifies the domain name status. valid values: online, offline, processing, deleted.
-serviceType: specifies the business type. valid values: web, download, media, hybrid, dynamic.
-projectId: specifies the project ID.
-domainType: specifies the primary origin server type. valid values: cname (self-owned origin), cos (cloud object storage integration), third_party (third-party object storage), igtm (igtm multi-active origin).
-fullUrlCache. specifies full path cache. valid values: on, off.
-Specifies whether to configure https. valid values: on, off, processing.
-originPullProtocol: specifies the origin-pull protocol. valid values: http, follow, https.
-tagKey: specifies the Tag key.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the filter field value. the default maximum is 5. when Name is origin/domain and Fuzzy is true, the maximum is 1.
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
