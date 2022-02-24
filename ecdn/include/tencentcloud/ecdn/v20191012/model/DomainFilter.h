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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINFILTER_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Filter for domain name query.
                */
                class DomainFilter : public AbstractModel
                {
                public:
                    DomainFilter();
                    ~DomainFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filters by the field name, which includes:
- `origin`: Primary origin server.
- `domain`: Domain name.
- `resourceId`: Domain name ID.
- `status`: Domain name status. Valid values: `online`, `offline`, and `processing`.
- `disable`: Whether the domain name is blocked. Valid values: `normal`, `unlicensed`.
- `projectId`: Project ID.
- `fullUrlCache`: Whether to enable full-path cache, which can be `on` or `off`.
- `https`: Whether to configure HTTPS, which can be `on`, `off` or `processing`.
- `originPullProtocol`: Origin-pull protocol type, which can be `http`, `follow`, or `https`.
- `area`: Acceleration region, which can be `mainland`，`overseas` or `global`.
- `tagKey`: Tag key.
                     * @return Name Filters by the field name, which includes:
- `origin`: Primary origin server.
- `domain`: Domain name.
- `resourceId`: Domain name ID.
- `status`: Domain name status. Valid values: `online`, `offline`, and `processing`.
- `disable`: Whether the domain name is blocked. Valid values: `normal`, `unlicensed`.
- `projectId`: Project ID.
- `fullUrlCache`: Whether to enable full-path cache, which can be `on` or `off`.
- `https`: Whether to configure HTTPS, which can be `on`, `off` or `processing`.
- `originPullProtocol`: Origin-pull protocol type, which can be `http`, `follow`, or `https`.
- `area`: Acceleration region, which can be `mainland`，`overseas` or `global`.
- `tagKey`: Tag key.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filters by the field name, which includes:
- `origin`: Primary origin server.
- `domain`: Domain name.
- `resourceId`: Domain name ID.
- `status`: Domain name status. Valid values: `online`, `offline`, and `processing`.
- `disable`: Whether the domain name is blocked. Valid values: `normal`, `unlicensed`.
- `projectId`: Project ID.
- `fullUrlCache`: Whether to enable full-path cache, which can be `on` or `off`.
- `https`: Whether to configure HTTPS, which can be `on`, `off` or `processing`.
- `originPullProtocol`: Origin-pull protocol type, which can be `http`, `follow`, or `https`.
- `area`: Acceleration region, which can be `mainland`，`overseas` or `global`.
- `tagKey`: Tag key.
                     * @param Name Filters by the field name, which includes:
- `origin`: Primary origin server.
- `domain`: Domain name.
- `resourceId`: Domain name ID.
- `status`: Domain name status. Valid values: `online`, `offline`, and `processing`.
- `disable`: Whether the domain name is blocked. Valid values: `normal`, `unlicensed`.
- `projectId`: Project ID.
- `fullUrlCache`: Whether to enable full-path cache, which can be `on` or `off`.
- `https`: Whether to configure HTTPS, which can be `on`, `off` or `processing`.
- `originPullProtocol`: Origin-pull protocol type, which can be `http`, `follow`, or `https`.
- `area`: Acceleration region, which can be `mainland`，`overseas` or `global`.
- `tagKey`: Tag key.
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
                     * 获取Whether to enable fuzzy query, which is supported only for filter fields `origin` and `domain`.
                     * @return Fuzzy Whether to enable fuzzy query, which is supported only for filter fields `origin` and `domain`.
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Whether to enable fuzzy query, which is supported only for filter fields `origin` and `domain`.
                     * @param Fuzzy Whether to enable fuzzy query, which is supported only for filter fields `origin` and `domain`.
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * Filters by the field name, which includes:
- `origin`: Primary origin server.
- `domain`: Domain name.
- `resourceId`: Domain name ID.
- `status`: Domain name status. Valid values: `online`, `offline`, and `processing`.
- `disable`: Whether the domain name is blocked. Valid values: `normal`, `unlicensed`.
- `projectId`: Project ID.
- `fullUrlCache`: Whether to enable full-path cache, which can be `on` or `off`.
- `https`: Whether to configure HTTPS, which can be `on`, `off` or `processing`.
- `originPullProtocol`: Origin-pull protocol type, which can be `http`, `follow`, or `https`.
- `area`: Acceleration region, which can be `mainland`，`overseas` or `global`.
- `tagKey`: Tag key.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter field value.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Whether to enable fuzzy query, which is supported only for filter fields `origin` and `domain`.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINFILTER_H_
