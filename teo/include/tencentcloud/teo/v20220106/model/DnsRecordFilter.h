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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Query filter to search for DNS records
                */
                class DnsRecordFilter : public AbstractModel
                {
                public:
                    DnsRecordFilter();
                    ~DnsRecordFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filters by the field name. Vaules:
- `name`: Site name.
- `status`: Site status.
                     * @return Name Filters by the field name. Vaules:
- `name`: Site name.
- `status`: Site status.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filters by the field name. Vaules:
- `name`: Site name.
- `status`: Site status.
                     * @param Name Filters by the field name. Vaules:
- `name`: Site name.
- `status`: Site status.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Filters by the field value
                     * @return Values Filters by the field value
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filters by the field value
                     * @param Values Filters by the field value
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable fuzzy query. It’s only available when the filter name is `name`. If it’s enabled, the length of `Values` must be 1.
                     * @return Fuzzy Specifies whether to enable fuzzy query. It’s only available when the filter name is `name`. If it’s enabled, the length of `Values` must be 1.
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Specifies whether to enable fuzzy query. It’s only available when the filter name is `name`. If it’s enabled, the length of `Values` must be 1.
                     * @param Fuzzy Specifies whether to enable fuzzy query. It’s only available when the filter name is `name`. If it’s enabled, the length of `Values` must be 1.
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * Filters by the field name. Vaules:
- `name`: Site name.
- `status`: Site status.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filters by the field value
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Specifies whether to enable fuzzy query. It’s only available when the filter name is `name`. If it’s enabled, the length of `Values` must be 1.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORDFILTER_H_
