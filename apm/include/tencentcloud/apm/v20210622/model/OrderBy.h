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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Sorting fields.
                */
                class OrderBy : public AbstractModel
                {
                public:
                    OrderBy();
                    ~OrderBy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sort field (starttime, endtime, duration are supported).
                     * @return Key Sort field (starttime, endtime, duration are supported).
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Sort field (starttime, endtime, duration are supported).
                     * @param _key Sort field (starttime, endtime, duration are supported).
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取ASC: sequential sorting / desc: reverse sorting.
                     * @return Value ASC: sequential sorting / desc: reverse sorting.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置ASC: sequential sorting / desc: reverse sorting.
                     * @param _value ASC: sequential sorting / desc: reverse sorting.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Sort field (starttime, endtime, duration are supported).
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * ASC: sequential sorting / desc: reverse sorting.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_
