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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSDATAFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSDATAFILTER_H_

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
                * Ignore query string parameters for DNS data
                */
                class DnsDataFilter : public AbstractModel
                {
                public:
                    DnsDataFilter();
                    ~DnsDataFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name. Valid values:
`zone`: Site name
`host`: Domain name
`type`: DNS resolution type
`code`: DNS response code
`area`: Region of the resolution server
                     * @return Name Parameter name. Valid values:
`zone`: Site name
`host`: Domain name
`type`: DNS resolution type
`code`: DNS response code
`area`: Region of the resolution server
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name. Valid values:
`zone`: Site name
`host`: Domain name
`type`: DNS resolution type
`code`: DNS response code
`area`: Region of the resolution server
                     * @param _name Parameter name. Valid values:
`zone`: Site name
`host`: Domain name
`type`: DNS resolution type
`code`: DNS response code
`area`: Region of the resolution server
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
                     * 获取Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * @return Value Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * @param _value Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * @return Values Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * @param _values Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Parameter name. Valid values:
`zone`: Site name
`host`: Domain name
`type`: DNS resolution type
`code`: DNS response code
`area`: Region of the resolution server
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Parameter value
When `Name=area`, valid values:
`Asia`
`Europe`
`Africa`
`Oceania`
`Americas`

When `Name=code`, valid values:
`NoError`: Successful response.
`NXDomain`: Non-existent domain in the request. It is only valid when the response is from the authoritative name server.
`NotImp`: Request type not supported.
`Refused`: The name server refuses to perform the requested operation for policy reasons.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSDATAFILTER_H_
