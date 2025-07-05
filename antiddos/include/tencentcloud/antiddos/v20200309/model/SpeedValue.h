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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SPEEDVALUE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SPEEDVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Rate limit value types, such as pps and bps.
                */
                class SpeedValue : public AbstractModel
                {
                public:
                    SpeedValue();
                    ~SpeedValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rate limit value types:
`1`: packets per second (pps)
`2`: bits per second (bps)
]
                     * @return Type Rate limit value types:
`1`: packets per second (pps)
`2`: bits per second (bps)
]
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Rate limit value types:
`1`: packets per second (pps)
`2`: bits per second (bps)
]
                     * @param _type Rate limit value types:
`1`: packets per second (pps)
`2`: bits per second (bps)
]
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Value
                     * @return Value Value
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置Value
                     * @param _value Value
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Rate limit value types:
`1`: packets per second (pps)
`2`: bits per second (bps)
]
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Value
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SPEEDVALUE_H_
