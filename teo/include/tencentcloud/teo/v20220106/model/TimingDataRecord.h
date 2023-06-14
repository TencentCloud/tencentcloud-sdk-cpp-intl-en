/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TimingTypeValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Time series data of L7 data analysis
                */
                class TimingDataRecord : public AbstractModel
                {
                public:
                    TimingDataRecord();
                    ~TimingDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query dimension value
                     * @return TypeKey Query dimension value
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置Query dimension value
                     * @param _typeKey Query dimension value
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TypeValue Detailed time series data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TimingTypeValue> GetTypeValue() const;

                    /**
                     * 设置Detailed time series data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _typeValue Detailed time series data
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Query dimension value
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Detailed time series data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TimingTypeValue> m_typeValue;
                    bool m_typeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATARECORD_H_
