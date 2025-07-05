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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_TOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_TOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Statistics data of top network attacks
                */
                class TopInfo : public AbstractModel
                {
                public:
                    TopInfo();
                    ~TopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Top statistical data, such as IP, and vulnerability name
                     * @return Value Top statistical data, such as IP, and vulnerability name
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Top statistical data, such as IP, and vulnerability name
                     * @param _value Top statistical data, such as IP, and vulnerability name
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
                     * 获取Top statistical count
                     * @return Count Top statistical count
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Top statistical count
                     * @param _count Top statistical count
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Top statistical data, such as IP, and vulnerability name
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Top statistical count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_TOPINFO_H_
