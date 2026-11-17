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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingTypeValue.h>
#include <tencentcloud/teo/v20220901/model/FloatTimingTypeValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Data information of time series
                */
                class TimingDataRecord : public AbstractModel
                {
                public:
                    TimingDataRecord();
                    ~TimingDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query the dimension value.
                     * @return TypeKey Query the dimension value.
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置Query the dimension value.
                     * @param _typeKey Query the dimension value.
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                    /**
                     * 获取Detailed time series data of the <code>Integer</code> type. If the value type of the query metric is <code>Integer</code>, the corresponding time series data will be returned in this field.<br> **Note**: If the value type of the query metric is unclear, data will be returned in this field by default.
                     * @return TypeValue Detailed time series data of the <code>Integer</code> type. If the value type of the query metric is <code>Integer</code>, the corresponding time series data will be returned in this field.<br> **Note**: If the value type of the query metric is unclear, data will be returned in this field by default.
                     * 
                     */
                    std::vector<TimingTypeValue> GetTypeValue() const;

                    /**
                     * 设置Detailed time series data of the <code>Integer</code> type. If the value type of the query metric is <code>Integer</code>, the corresponding time series data will be returned in this field.<br> **Note**: If the value type of the query metric is unclear, data will be returned in this field by default.
                     * @param _typeValue Detailed time series data of the <code>Integer</code> type. If the value type of the query metric is <code>Integer</code>, the corresponding time series data will be returned in this field.<br> **Note**: If the value type of the query metric is unclear, data will be returned in this field by default.
                     * 
                     */
                    void SetTypeValue(const std::vector<TimingTypeValue>& _typeValue);

                    /**
                     * 判断参数 TypeValue 是否已赋值
                     * @return TypeValue 是否已赋值
                     * 
                     */
                    bool TypeValueHasBeenSet() const;

                    /**
                     * 获取Detailed time series data of <code>Float</code> type. For metrics whose query metric value type is <code>Float</code>, the corresponding time series data is returned in this field.
                     * @return FloatTypeValue Detailed time series data of <code>Float</code> type. For metrics whose query metric value type is <code>Float</code>, the corresponding time series data is returned in this field.
                     * 
                     */
                    std::vector<FloatTimingTypeValue> GetFloatTypeValue() const;

                    /**
                     * 设置Detailed time series data of <code>Float</code> type. For metrics whose query metric value type is <code>Float</code>, the corresponding time series data is returned in this field.
                     * @param _floatTypeValue Detailed time series data of <code>Float</code> type. For metrics whose query metric value type is <code>Float</code>, the corresponding time series data is returned in this field.
                     * 
                     */
                    void SetFloatTypeValue(const std::vector<FloatTimingTypeValue>& _floatTypeValue);

                    /**
                     * 判断参数 FloatTypeValue 是否已赋值
                     * @return FloatTypeValue 是否已赋值
                     * 
                     */
                    bool FloatTypeValueHasBeenSet() const;

                private:

                    /**
                     * Query the dimension value.
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Detailed time series data of the <code>Integer</code> type. If the value type of the query metric is <code>Integer</code>, the corresponding time series data will be returned in this field.<br> **Note**: If the value type of the query metric is unclear, data will be returned in this field by default.
                     */
                    std::vector<TimingTypeValue> m_typeValue;
                    bool m_typeValueHasBeenSet;

                    /**
                     * Detailed time series data of <code>Float</code> type. For metrics whose query metric value type is <code>Float</code>, the corresponding time series data is returned in this field.
                     */
                    std::vector<FloatTimingTypeValue> m_floatTypeValue;
                    bool m_floatTypeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_
