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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_INBANDWIDTH_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_INBANDWIDTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * Inbound bandwidth data
                */
                class InBandwidth : public AbstractModel
                {
                public:
                    InBandwidth();
                    ~InBandwidth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Timestamps Timestamp 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<double> GetTimestamps() const;

                    /**
                     * 设置Timestamp 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _timestamps Timestamp 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTimestamps(const std::vector<double>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取Time-specific value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Values Time-specific value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置Time-specific value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _values Time-specific value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Timestamp 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<double> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * Time-specific value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_INBANDWIDTH_H_
