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


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The time-series data
                */
                class TimingDataRecord : public AbstractModel
                {
                public:
                    TimingDataRecord();
                    ~TimingDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The query dimension value.
                     * @return TypeKey The query dimension value.
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置The query dimension value.
                     * @param _typeKey The query dimension value.
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
                     * 获取Detailed time series data
                     * @return TypeValue Detailed time series data
                     * 
                     */
                    std::vector<TimingTypeValue> GetTypeValue() const;

                    /**
                     * 设置Detailed time series data
                     * @param _typeValue Detailed time series data
                     * 
                     */
                    void SetTypeValue(const std::vector<TimingTypeValue>& _typeValue);

                    /**
                     * 判断参数 TypeValue 是否已赋值
                     * @return TypeValue 是否已赋值
                     * 
                     */
                    bool TypeValueHasBeenSet() const;

                private:

                    /**
                     * The query dimension value.
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Detailed time series data
                     */
                    std::vector<TimingTypeValue> m_typeValue;
                    bool m_typeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_
