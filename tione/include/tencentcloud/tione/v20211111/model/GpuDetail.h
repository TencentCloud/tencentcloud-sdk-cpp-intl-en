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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GPUDETAIL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GPUDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * GPU details.
                */
                class GpuDetail : public AbstractModel
                {
                public:
                    GpuDetail();
                    ~GpuDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU card type. Enumeration values: V100, A100, T4.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name GPU card type. Enumeration values: V100, A100, T4.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置GPU card type. Enumeration values: V100, A100, T4.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name GPU card type. Enumeration values: V100, A100, T4.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取GPU card quantity, in 1/100 cards. For example, 100 represents 1 card.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value GPU card quantity, in 1/100 cards. For example, 100 represents 1 card.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置GPU card quantity, in 1/100 cards. For example, 100 represents 1 card.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value GPU card quantity, in 1/100 cards. For example, 100 represents 1 card.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * GPU card type. Enumeration values: V100, A100, T4.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * GPU card quantity, in 1/100 cards. For example, 100 represents 1 card.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GPUDETAIL_H_
