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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * log filter criteria
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Filter criterion name.</p><p>For example: sql - SQL command details</p><p>host – client IP;<br>user – database account.</p>
                     * @return Type <p>Filter criterion name.</p><p>For example: sql - SQL command details</p><p>host – client IP;<br>user – database account.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Filter criterion name.</p><p>For example: sql - SQL command details</p><p>host – client IP;<br>user – database account.</p>
                     * @param _type <p>Filter criterion name.</p><p>For example: sql - SQL command details</p><p>host – client IP;<br>user – database account.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Filter condition match type. Supported values:<br>INC – Including (multiple values are in a || relationship with each other);<br>EXC – Excluding (multiple values are in a && relationship with each other);<br>EQS – Equal (multiple values are in a || relationship with each other);<br>NEQ – Not equal (multiple values are in a && relationship with each other);<br>RG – Range.</p>
                     * @return Compare <p>Filter condition match type. Supported values:<br>INC – Including (multiple values are in a || relationship with each other);<br>EXC – Excluding (multiple values are in a && relationship with each other);<br>EQS – Equal (multiple values are in a || relationship with each other);<br>NEQ – Not equal (multiple values are in a && relationship with each other);<br>RG – Range.</p>
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置<p>Filter condition match type. Supported values:<br>INC – Including (multiple values are in a || relationship with each other);<br>EXC – Excluding (multiple values are in a && relationship with each other);<br>EQS – Equal (multiple values are in a || relationship with each other);<br>NEQ – Not equal (multiple values are in a && relationship with each other);<br>RG – Range.</p>
                     * @param _compare <p>Filter condition match type. Supported values:<br>INC – Including (multiple values are in a || relationship with each other);<br>EXC – Excluding (multiple values are in a && relationship with each other);<br>EQS – Equal (multiple values are in a || relationship with each other);<br>NEQ – Not equal (multiple values are in a && relationship with each other);<br>RG – Range.</p>
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取<p>Matching value of the filter condition. When Compare=RG, for example: ["1-100","200-300"]</p>
                     * @return Value <p>Matching value of the filter condition. When Compare=RG, for example: ["1-100","200-300"]</p>
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置<p>Matching value of the filter condition. When Compare=RG, for example: ["1-100","200-300"]</p>
                     * @param _value <p>Matching value of the filter condition. When Compare=RG, for example: ["1-100","200-300"]</p>
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>Filter criterion name.</p><p>For example: sql - SQL command details</p><p>host – client IP;<br>user – database account.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Filter condition match type. Supported values:<br>INC – Including (multiple values are in a || relationship with each other);<br>EXC – Excluding (multiple values are in a && relationship with each other);<br>EQS – Equal (multiple values are in a || relationship with each other);<br>NEQ – Not equal (multiple values are in a && relationship with each other);<br>RG – Range.</p>
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * <p>Matching value of the filter condition. When Compare=RG, for example: ["1-100","200-300"]</p>
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_
