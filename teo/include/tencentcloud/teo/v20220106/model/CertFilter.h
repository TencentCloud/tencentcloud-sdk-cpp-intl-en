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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CERTFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CERTFILTER_H_

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
                * Query filter to search for certificates
                */
                class CertFilter : public AbstractModel
                {
                public:
                    CertFilter();
                    ~CertFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filters by the field name. Values:
 - `host`: Domain name
 - `certId`: Certificate ID
 - `certAlias`: Certificate alias
 - `certType: default`: Default certificate; `upload`: External certificate; `managed`: Tencent Cloud certificate.
                     * @return Name Filters by the field name. Values:
 - `host`: Domain name
 - `certId`: Certificate ID
 - `certAlias`: Certificate alias
 - `certType: default`: Default certificate; `upload`: External certificate; `managed`: Tencent Cloud certificate.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filters by the field name. Values:
 - `host`: Domain name
 - `certId`: Certificate ID
 - `certAlias`: Certificate alias
 - `certType: default`: Default certificate; `upload`: External certificate; `managed`: Tencent Cloud certificate.
                     * @param _name Filters by the field name. Values:
 - `host`: Domain name
 - `certId`: Certificate ID
 - `certAlias`: Certificate alias
 - `certType: default`: Default certificate; `upload`: External certificate; `managed`: Tencent Cloud certificate.
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
                     * 获取Filters by the field value
                     * @return Values Filters by the field value
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filters by the field value
                     * @param _values Filters by the field value
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable fuzzy query, which only supports the `host` field.
If it is enabled, the length of `Value` must be 1.
                     * @return Fuzzy Specifies whether to enable fuzzy query, which only supports the `host` field.
If it is enabled, the length of `Value` must be 1.
                     * 
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Specifies whether to enable fuzzy query, which only supports the `host` field.
If it is enabled, the length of `Value` must be 1.
                     * @param _fuzzy Specifies whether to enable fuzzy query, which only supports the `host` field.
If it is enabled, the length of `Value` must be 1.
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
                     * Filters by the field name. Values:
 - `host`: Domain name
 - `certId`: Certificate ID
 - `certAlias`: Certificate alias
 - `certType: default`: Default certificate; `upload`: External certificate; `managed`: Tencent Cloud certificate.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filters by the field value
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Specifies whether to enable fuzzy query, which only supports the `host` field.
If it is enabled, the length of `Value` must be 1.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CERTFILTER_H_
