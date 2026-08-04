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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORITEM_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Service monitoring data items for reasoning.
                */
                class InferenceServiceMonitorItem : public AbstractModel
                {
                public:
                    InferenceServiceMonitorItem();
                    ~InferenceServiceMonitorItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Corresponding time point of monitoring data.
                     * @return Timestamp Corresponding time point of monitoring data.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Corresponding time point of monitoring data.
                     * @param _timestamp Corresponding time point of monitoring data.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Specific values.
                     * @return Value Specific values.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Specific values.
                     * @param _value Specific values.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Corresponding time point of monitoring data.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Specific values.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORITEM_H_
